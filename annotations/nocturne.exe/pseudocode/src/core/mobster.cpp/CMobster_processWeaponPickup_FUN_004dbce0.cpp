// Name: core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0
// Address: 004dbce0
// Address Range: [[004dbce0, 004dc107]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(int param_1,float param_2)

#include "nocturne.h"

uint __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fStack_b0;
  int aiStack_a8 [10];
  byte auStack_80 [8];
  float fStack_78;
  byte auStack_74 [12];
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [12];
  byte auStack_44 [8];
  float fStack_3c;
  byte auStack_38 [16];
  uint uStack_28;
  int local_24;
  float *local_20;
  int local_1c;
  uint local_14;
  
  if (*(int *)(param_1 + 0xbc98) == 0) {
    fVar2 = *(float *)(param_1 + 0xbd28) - param_2;
    *(float *)(param_1 + 0xbd28) = fVar2;
    if (0.0 < fVar2) {
      *(int *)(param_1 + 0xbd24) = *(int *)(param_1 + 0xbd24) + 1;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000,0x41200000);
      *(uint *)(param_1 + 0xbd28) = local_14;
    }
    if ((*(int *)(*(int *)(param_1 + 0x24ec) * 4 + param_1 + 0x2290) != 0) &&
       (*(int *)(param_1 + 0x24f0) == 0)) {
      if (0.0 < *(float *)(param_1 + 0xbd2c)) {
        param_2 = *(float *)(param_1 + 0xbd2c) - param_2;
        *(float *)(param_1 + 0xbd2c) = param_2;
        if (param_2 < 0.0) {
          *(uint *)(param_1 + 0xbd2c) = 0;
          return 0;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0xbd30);
        if (iVar7 == 0) {
          iVar6 = 0;
          iVar7 = 0;
          local_24 = 0;
          local_20 = (float *)(param_1 + 0x20);
          for (local_1c = 0; local_1c < *(int *)(0x01E57284 + 0x14cd6c); local_1c = local_1c + 1)
          {
            iVar1 = *(int *)(iVar7 + 0x14cd70 + 0x01E57284);
            iVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x8c))(iVar1);
            if ((iVar4 == 0) &&
               (iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar1,"CTommyGun"),
               iVar4 != 0)) {
              fStack_5c = *(float *)(iVar1 + 0x20) - *local_20;
              fStack_58 = *(float *)(iVar1 + 0x24) - local_20[1];
              fStack_58 = fStack_58 * fStack_58;
              fStack_54 = *(float *)(iVar1 + 0x28) - local_20[2];
              fStack_58 = fStack_58 * fStack_58;
              fVar2 = SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58);
              if (((float)5 <= fVar2) && ((int)fVar2 < 0x41700001)) {
                *(int *)((int)aiStack_a8 + iVar6) = iVar1;
                local_24 = local_24 + 1;
                iVar6 = iVar6 + 4;
                if (0x27 < iVar6) break;
              }
            }
            iVar7 = iVar7 + 4;
          }
          if (0 < local_24) {
            iVar7 = core_actor_cpp_getRandomInt_FUN_0040de00(0,local_24 + -1);
            iVar7 = aiStack_a8[iVar7];
            *(uint *)(param_1 + 0xbd2c) = 0xc2200000;
            *(int *)(param_1 + 0xbd30) = iVar7;
            *(int *)(param_1 + 0xbd24) = *(int *)(param_1 + 0xbd24) + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
            return 1;
          }
        }
        else {
          iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x8c))(iVar7);
          if (iVar7 != 0) {
            *(uint *)(param_1 + 0xbd30) = 0;
            *(uint *)(param_1 + 0xbd2c) = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
            return 0;
          }
          fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbd30) + 0x20);
          fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbd30) + 0x28);
          fStack_b0 = (float)5 -
                      SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)0.33333333333333298;
          if (fStack_b0 < 1.0) {
            fStack_b0 = 1.0;
          }
          fVar2 = param_2 * fStack_b0 + *(float *)(param_1 + 0xbd2c);
          iVar7 = -1;
          *(float *)(param_1 + 0xbd2c) = fVar2;
          if ((fVar2 < 0.0) &&
             (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbd30) + 0x14c) + 0x7c))
                                (*(int *)(param_1 + 0xbd30),param_1), iVar6 == 3)) {
            iVar7 = *(int *)(param_1 + 0xbd30);
            (**(code **)(*(int *)(iVar7 + 0x14c) + 0x14))(iVar7,auStack_80);
            uStack_28 = 0x3f000000;
            uVar5 = core_bodypart_cpp_addVector_FUN_00417fc0
                              (auStack_80,auStack_38,auStack_74,auStack_44,&uStack_28);
            core_bodypart_cpp_scaleVector_FUN_00417f60(uVar5);
            fStack_3c = fStack_78 + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar7,auStack_50,auStack_44);
            uStack_68 = 0x3fc00000;
            uStack_64 = 0;
            uStack_60 = 0;
            iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              (param_1,auStack_50,0,&uStack_68,0x3e99999a,0x3d0efa35);
          }
          if (-1 < iVar7) {
            if (iVar7 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,7,1);
            return 1;
          }
          *(uint *)(param_1 + 0xbd30) = 0;
          *(uint *)(param_1 + 0xbd2c) = 0x41a00000;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        }
      }
    }
  }
  return 0;
}
