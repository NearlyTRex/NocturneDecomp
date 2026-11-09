// Name: shape_edittool.cpp_CStrList_allocate_FUN_00480fa0
// Address: 00480fa0
// Address Range: [[00480fa0, 0048104c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00480fa0(CStrList *this_ptr,int new_capacity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00480fa0(CStrList *this_ptr,int new_capacity)

{
  void *pvVar1;
  
  if (new_capacity < *(int *)this_ptr) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbcc;
    core_main_c_FUN_004e4500("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbcd;
    core_main_c_FUN_004e4500("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (*(int *)&this_ptr->field_0x4 < new_capacity) {
    *(int *)&this_ptr->field_0x4 = new_capacity;
    pvVar1 = realloc(*(void **)&this_ptr->field_0x8,new_capacity * 4);
    *(void **)&this_ptr->field_0x8 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0xbd1;
      core_main_c_FUN_004e4500("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
