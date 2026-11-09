// Name: shape_edittool.cpp_CStrList_allocate_FUN_00499600
// Address: 00499600
// Address Range: [[00499600, 004996ac]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00499600(CStrList *this_ptr,int new_capacity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00499600(CStrList *this_ptr,int new_capacity)

{
  void *pvVar1;
  
  if (new_capacity < *(int *)this_ptr) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xc45;
    core_main_c_FUN_005030e0("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xc46;
    core_main_c_FUN_005030e0("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (*(int *)&this_ptr->field_0x4 < new_capacity) {
    *(int *)&this_ptr->field_0x4 = new_capacity;
    pvVar1 = realloc(*(void **)&this_ptr->field_0x8,new_capacity * 4);
    *(void **)&this_ptr->field_0x8 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0xc4a;
      core_main_c_FUN_005030e0("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
