// Name: shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
// Address: 0050efe0
// Address Range: [[0050efe0, 0050f01f]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char *filename,int context)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char *filename,int context)

{
  SMemHead *header;
  
  for (header = g_MemoryListHead; header != (SMemHead *)0x0; header = header->next) {
    shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(header,filename,context);
  }
  g_DebugContext = (void *)context;
  PTR_s_none_00636540_0067d1fc = filename;
  return;
}
