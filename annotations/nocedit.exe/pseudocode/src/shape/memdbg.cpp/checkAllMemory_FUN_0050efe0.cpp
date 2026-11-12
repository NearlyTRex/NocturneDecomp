// Name: shape_memdbg.cpp_checkAllMemory_FUN_0050efe0
// Address: 0050efe0
// Address Range: [[0050efe0, 0050f01f]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_checkAllMemory_FUN_0050efe0(char *source_filename,int source_line)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_checkAllMemory_FUN_0050efe0(char *source_filename,int source_line)

{
  SMemHead *this_ptr;
  
  for (this_ptr = g_MemoryListHead; this_ptr != (SMemHead *)0x0; this_ptr = this_ptr->next) {
    shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(this_ptr,source_filename,source_line);
  }
  g_MemCheckLastLine = source_line;
  g_MemCheckLastFile = source_filename;
  return;
}
