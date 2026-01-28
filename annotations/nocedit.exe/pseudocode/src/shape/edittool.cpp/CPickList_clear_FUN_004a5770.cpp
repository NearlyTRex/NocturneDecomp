// Name: shape_edittool.cpp_CPickList_clear_FUN_004a5770
// Address: 004a5770
// Address Range: [[004a5770, 004a57e7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_clear_FUN_004a5770(CPickList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_clear_FUN_004a5770(CPickList *this_ptr)

{
  if (this_ptr->enabled_array != (int *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->enabled_array,"..\\shape\\edittool.cpp",0x1080);
    this_ptr->enabled_array = (int *)0x0;
  }
  this_ptr->enabled_capacity = 0;
  if (this_ptr->hotkey_array != (int *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->hotkey_array,"..\\shape\\edittool.cpp",0x1085);
    this_ptr->hotkey_array = (int *)0x0;
  }
  this_ptr->hotkey_capacity = 0;
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10(&this_ptr->base);
  return;
}
