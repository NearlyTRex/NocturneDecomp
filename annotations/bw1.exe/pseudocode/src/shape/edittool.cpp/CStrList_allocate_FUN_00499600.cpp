// Name: shape_edittool.cpp_CStrList_allocate_FUN_00499600
// Address: 00499600
// Address Range: [[00499600, 004996ac]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00499600(CStrList *this_ptr,int new_capacity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00499600(CStrList *this_ptr,int new_capacity)

{
  char **ppcVar1;
  
  if (new_capacity < this_ptr->item_count) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xc45;
    core_main_c_FUN_005030e0("CStrList::allocate - Can't shrink list!");
  }
  if (new_capacity < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xc46;
    core_main_c_FUN_005030e0("CStrList::allocate - invalid count: %d",new_capacity);
  }
  if (this_ptr->capacity < new_capacity) {
    this_ptr->capacity = new_capacity;
    ppcVar1 = (char **)realloc(this_ptr->data_array,new_capacity * 4);
    this_ptr->data_array = ppcVar1;
    if (ppcVar1 == (char **)0x0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0xc4a;
      core_main_c_FUN_005030e0("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
