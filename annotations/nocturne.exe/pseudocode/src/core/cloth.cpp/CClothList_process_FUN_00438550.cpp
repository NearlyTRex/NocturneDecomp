// Name: core_cloth.cpp_CClothList_process_FUN_00438550
// Address: 00438550
// Address Range: [[00438550, 00438596]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_process_FUN_00438550(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_process_FUN_00438550(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_CCloth_process_FUN_00436e50
                (piVar2[0x65],param_2,param_3,param_4,param_5,param_6);
      piVar2 = piVar2 + 1;
    } while (iVar1 < *param_1);
  }
  return;
}
