// Name: shape_memdbg.cpp_traceFile_FUN_0050f180
// Address: 0050f180
// Address Range: [[0050f180, 0050f1a2]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_traceFile_FUN_0050f180(char *format,...)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_traceFile_FUN_0050f180(char *format,...)

{
  if (g_TraceFileInitialized != 0) {
    return;
  }
  remove("memdbg.txt");
  g_TraceFileInitialized = 1;
  return;
}
