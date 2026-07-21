// Name: core_cloth.cpp_CClothList_setup_FUN_00438510
// Address: 00438510
// Address Range: [[00438510, 0043854e]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_setup_FUN_00438510(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_setup_FUN_00438510(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_setup_FUN_004359e0(piVar1[0x65],param_2,param_3,param_4);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}
