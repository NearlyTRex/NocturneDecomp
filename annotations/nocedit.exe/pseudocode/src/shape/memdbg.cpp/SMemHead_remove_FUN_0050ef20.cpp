// Name: shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
// Address: 0050ef20
// Address Range: [[0050ef20, 0050ef94]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead *this_ptr)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead *this_ptr)

{
  if (this_ptr->prev == (SMemHead *)0x0) {
    if (this_ptr != g_MemoryListHead) {
      g_CurrentFilename = "..\\shape\\memdbg.cpp";
      g_CurrentLineNumber = 139;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SMemHead::remove - list corruption!");
    }
    g_MemoryListHead = this_ptr->next;
  }
  else {
    this_ptr->prev->next = this_ptr->next;
  }
  if (this_ptr->next == (SMemHead *)0x0) {
    this_ptr->next = (SMemHead *)0x0;
    this_ptr->prev = this_ptr->next;
    return;
  }
  this_ptr->next->prev = this_ptr->prev;
  this_ptr->next = (SMemHead *)0x0;
  this_ptr->prev = this_ptr->next;
  return;
}
