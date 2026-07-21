// Name: core_cloth.cpp_CClothList_render_FUN_004385a0
// Address: 004385a0
// Address Range: [[004385a0, 00438614]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_render_FUN_004385a0(int *param_1,int param_2)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_render_FUN_004385a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = 0, piVar1 = param_1, 0 < *param_1)) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_saveJoinedLight_FUN_00437cc0(piVar1[0x65],param_2);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_render_FUN_00437db0(piVar1[0x65],param_2);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}
