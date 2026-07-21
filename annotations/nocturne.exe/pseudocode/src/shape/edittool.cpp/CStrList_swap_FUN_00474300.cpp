// Name: shape_edittool.cpp_CStrList_swap_FUN_00474300
// Address: 00474300
// Address Range: [[00474300, 00474373]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_swap_FUN_00474300(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_swap_FUN_00474300(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if ((((param_2 < 0) || (*param_1 <= param_2)) || (param_3 < 0)) || (*param_1 <= param_3)) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0xab6;
    FUN_004c8440("CStrList::swap - invalid indices");
    if (param_2 == param_3) {
      return;
    }
  }
  else if (param_2 == param_3) {
    return;
  }
  puVar2 = (uint *)(param_2 * 4 + param_1[2]);
  uVar1 = *puVar2;
  *puVar2 = *(uint *)(param_1[2] + param_3 * 4);
  *(uint *)(param_1[2] + param_3 * 4) = uVar1;
  return;
}
