// Name: shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
// Address: 0050eef0
// Address Range: [[0050eef0, 0050ef1b]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_SMemHead_add_FUN_0050eef0(SMemHead * header)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(SMemHead *header)

{
  SMemHead *pSVar1;
  
  pSVar1 = g_MemoryListHead;
  header->prev = (SMemHead *)0x0;
  if (g_MemoryListHead == (SMemHead *)0x0) {
    g_MemoryListHead = header;
    header->next = (SMemHead *)0x0;
    return;
  }
  g_MemoryListHead->prev = header;
  g_MemoryListHead = header;
  header->next = pSVar1;
  return;
}
