// Name: shape_edittool.cpp_CStrList_allocate_FUN_004821a0
// Address: 004821a0
// Address Range: [[004821a0, 0048224c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_004821a0(CStrList *this_ptr,int new_capacity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_004821a0(CStrList *this_ptr,int new_capacity)

{
  void *pvVar1;
  
  if (new_capacity < *(int *)this_ptr) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xc48;
    core_main_c_FUN_004e4330("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xc49;
    core_main_c_FUN_004e4330("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (*(int *)&this_ptr->field_0x4 < new_capacity) {
    *(int *)&this_ptr->field_0x4 = new_capacity;
    pvVar1 = realloc(*(void **)&this_ptr->field_0x8,new_capacity * 4);
    *(void **)&this_ptr->field_0x8 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0xc4d;
      core_main_c_FUN_004e4330("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
