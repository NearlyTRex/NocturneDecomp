#pragma once

// Function prototypes for shape/memdbg.cpp
// Generated from Ghidra function signatures

// Original: shape_memdbg.cpp_staticInit_FUN_0050ee40
// Address: 0050ee40
void staticInit(void);

// Original: shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e
// Address: 0050ee5e
void acquireDebugMutex(void);

// Original: shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90
// Address: 0050ee90
void releaseDebugMutex(void);

// Original: shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
// Address: 0050eea0
void SMemHead::recordSourceFile(SMemHead * header, char * source_filename);

// Original: shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
// Address: 0050eef0
void SMemHead::add(SMemHead * header);

// Original: shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
// Address: 0050ef20
void SMemHead::remove(SMemHead * header);

// Original: shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0
// Address: 0050efa0
SMemHead * getMemoryHeaderFromPtr(void * user_ptr);

// Original: shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
// Address: 0050efe0
void SMemHead::checkAllMemory(char * filename, int context);

// Original: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
// Address: 0050f020
void SMemHead::checkMemory(SMemHead * header, char * filename, int line_number);

// Original: shape_memdbg.cpp_traceMemory_FUN_0050f150
// Address: 0050f150
void traceMemory(char * format, ...);

// Original: shape_memdbg.cpp_traceFile_FUN_0050f180
// Address: 0050f180
void traceFile(char * format, ...);

// Original: shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
// Address: 0050f1b0
void * debugAlloc(int size, char * filename, int line_number);

// Original: shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
// Address: 0050f1d0
void * debugAlloc(int size);

// Original: shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
// Address: 0050f1f0
void * debugAlloc(int size, char * filename, int line_number);

// Original: shape_memdbg.cpp_debugFree_FUN_0050f210
// Address: 0050f210
void debugFree(void * ptr);

// Original: shape_memdbg.cpp_debugMalloc_FUN_0050f250
// Address: 0050f250
void * debugMalloc(int size, char * filename, int line_number);

// Original: shape_memdbg.cpp_debugCalloc_FUN_0050f350
// Address: 0050f350
void * debugCalloc(SIZE_T count, SIZE_T size, char * filename, int line_number);

// Original: shape_memdbg.cpp_debugFree_FUN_0050f460
// Address: 0050f460
void debugFree(void * ptr, char * filename, int line_number);

// Original: shape_memdbg.cpp_debugRealloc_FUN_0050f540
// Address: 0050f540
void * debugRealloc(void * ptr, int new_size, char * filename, int line_number);

// Original: shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
// Address: 0050f6c0
void debugMemdump(FILE * output_file);

// Original: shape_memdbg.cpp_openFile_FUN_0050f7a0
// Address: 0050f7a0
FILE * openFile(char * filename, char * directory, char * mode, char * source_file, int line_number);

// Original: shape_memdbg.cpp_closeFile_FUN_0050f9b0
// Address: 0050f9b0
int closeFile(FILE * file_ptr, char * source_file, int line_number);

// Original: shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0
// Address: 0050fba0
CLeakChecker * CLeakChecker::ctor(CLeakChecker * this_ptr);

// Original: shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0
// Address: 0050fbc0
CLeakChecker * CLeakChecker::dtor(CLeakChecker * this_ptr, uint d1, uint d2, uint d3, uint d4);
