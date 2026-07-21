// Name: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00424e90
// Address: 00424e90
// Address Range: [[00424e90, 00424f39]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00424e90(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00424e90(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  byte local_30 [12];
  byte local_24 [20];
  float local_10;
  uint local_c;
  
  uVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,local_24,param_2);
  iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_30,uVar1);
  local_c = *(uint *)(iVar2 + 4);
  local_10 = *(float *)(param_1 + 0x2430);
  fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_c);
  fVar4 = -local_10;
  if ((-local_10 <= fVar3) && (fVar4 = local_10, fVar3 <= local_10)) {
    *(float *)(param_1 + 0x2410) = fVar3;
    return;
  }
  *(float *)(param_1 + 0x2410) = fVar4;
  return;
}
