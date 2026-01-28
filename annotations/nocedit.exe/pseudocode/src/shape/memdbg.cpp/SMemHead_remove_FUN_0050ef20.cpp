// Name: shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
// Address: 0050ef20
// Address Range: [[0050ef20, 0050ef94]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead *header)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead *header)

{
  if (header->prev == (SMemHead *)0x0) {
    if (header != g_MemoryListHead) {
      g_CurrentFilename = "..\\shape\\memdbg.cpp";
      g_CurrentLineNumber = 0x8b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SMemHead::remove - list corruption!");
    }
    g_MemoryListHead = header->next;
  }
  else {
    header->prev->next = header->next;
  }
  if (header->next == (SMemHead *)0x0) {
    header->next = (SMemHead *)0x0;
    header->prev = header->next;
    return;
  }
  header->next->prev = header->prev;
  header->next = (SMemHead *)0x0;
  header->prev = header->next;
  return;
}
