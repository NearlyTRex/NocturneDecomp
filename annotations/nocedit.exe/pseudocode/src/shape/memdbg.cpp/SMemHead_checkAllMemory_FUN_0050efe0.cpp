// Name: shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
// Address: 0050efe0
// Address Range: [[0050efe0, 0050f01f]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char *source_filename,int source_line)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char *source_filename,int source_line)

{
  SMemHead *header;
  
  for (header = g_MemoryListHead; header != (SMemHead *)0x0; header = header->next) {
    shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(header,source_filename,source_line);
  }
  g_MemCheckLastLine = source_line;
  g_MemCheckLastFile = source_filename;
  return;
}
