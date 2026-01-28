// Name: shape_memdbg.cpp_debugFree_FUN_0050f210
// Address: 0050f210
// Address Range: [[0050f210, 0050f248]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f210(void *ptr)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f210(void *ptr)

{
  if (ptr != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,g_CurrentDebugFilename,g_CurrentDebugLine);
  }
  g_CurrentDebugLine = 0;
  g_CurrentDebugFilename = "(unknown)";
  return;
}
