// Name: shape_edittool.cpp_CStrList_allocate_FUN_00473de0
// Address: 00473de0
// Address Range: [[00473de0, 00473e8c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00473de0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00473de0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *param_1) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x9d4;
    FUN_004c8440("CStrList::allocate - Can't shrink list!");
  }
  if (param_2 < 1) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x9d5;
    FUN_004c8440("CStrList::allocate - invalid count: %d",param_2);
  }
  if (param_1[1] < param_2) {
    param_1[1] = param_2;
    iVar1 = realloc(param_1[2],param_2 * 4);
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\shape\\edittool.cpp";
      _DAT_01cc4804 = 0x9d9;
      FUN_004c8440("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
