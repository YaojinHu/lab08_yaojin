CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= Tests

COMMON_OBJECT_FILES = linkedListFuncs.o recLinkedListFuncs.o tddFuncs.o strFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./Tests

Tests: Tests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
