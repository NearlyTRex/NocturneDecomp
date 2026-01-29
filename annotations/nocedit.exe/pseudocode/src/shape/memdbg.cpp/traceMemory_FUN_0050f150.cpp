// Name: shape_memdbg.cpp_traceMemory_FUN_0050f150
// Address: 0050f150
// Address Range: [[0050f150, 0050f172]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_traceMemory_FUN_0050f150(char *format,...)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_traceMemory_FUN_0050f150(char *format,...)

{
  if (g_MemoryTraceInitialized != 0) {
    return;
  }
  remove("memdbg.txt");
  g_MemoryTraceInitialized = 1;
  return;
}
