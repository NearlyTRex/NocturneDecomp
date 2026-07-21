// Name: core_charactr.cpp_CCharacter_getPartDominantBone_FUN_00426570
// Address: 00426570
// Address Range: [[00426570, 00426593]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00426570(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_getPartDominantBone_FUN_00426570(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                    (param_1 + 0x150,param_2);
  iVar2 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00519b10(uVar1);
  return *(uint *)(iVar2 + 0x5c);
}
