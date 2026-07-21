// Name: core_icepick.cpp_CIcePick_findAndPickupGun_FUN_004ba8a0
// Address: 004ba8a0
// Address Range: [[004ba8a0, 004ba9f6]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_34;
  float fStack_30;
  float local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  float fStack_18;
  
  *(uint *)(param_1 + 0x1fa60) = 0;
  local_1c = 4.0;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_20 = 0x40000000;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_34,&local_28);
  iVar6 = 0;
  for (iVar5 = 0; iVar5 < *(int *)(0x01E57284 + 0x14cd6c); iVar5 = iVar5 + 1) {
    iVar1 = *(int *)(iVar6 + 0x14cd70 + 0x01E57284);
    iVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x8c))(iVar1);
    if (iVar4 == 0) {
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar1,_DAT_02dd1008);
      if (iVar4 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - local_34;
        fVar3 = *(float *)(iVar1 + 0x28) - local_2c;
        if ((ABS(*(float *)(iVar1 + 0x24) - fStack_30) <= (float)_DAT_005861b2) &&
           (fStack_18 = fVar2 * fVar2 + fVar3 * fVar3, fStack_18 <= local_1c)) {
          *(int *)(param_1 + 0x1fa60) = iVar1;
          local_1c = fStack_18;
        }
      }
    }
    iVar6 = iVar6 + 4;
  }
  if (*(int *)(param_1 + 0x1fa60) == 0) {
    return 0;
  }
  *(float *)(param_1 + 0x20) =
       (*(float *)(*(int *)(param_1 + 0x1fa60) + 0x20) - local_34) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x28) =
       (*(float *)(*(int *)(param_1 + 0x1fa60) + 0x28) - local_2c) + *(float *)(param_1 + 0x28);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x13,1);
  return 1;
}
