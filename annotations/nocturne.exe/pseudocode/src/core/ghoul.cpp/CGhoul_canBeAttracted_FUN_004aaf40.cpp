// Name: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004aaf40
// Address: 004aaf40
// Address Range: [[004aaf40, 004ab105]]
// Convention: unknown
// Signature: undefined4 core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004aaf40(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004aaf40(int param_1,uint *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  int iVar4;
  byte local_94 [12];
  byte local_88 [12];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  byte local_4c [12];
  byte local_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  byte local_1c [12];
  float local_10;
  
  iVar4 = param_1 + 0x150;
  local_10 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar4,0xb);
  if (local_10 <= 0.0) {
    return 0;
  }
  pfVar1 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (iVar4,local_40,_DAT_01c78c18);
  pfVar2 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (iVar4,local_88,_DAT_01c78c20);
  local_34 = *pfVar2 + *pfVar1;
  local_30 = pfVar2[1] + pfVar1[1];
  local_58 = local_34 * _DAT_00584e1d;
  local_2c = pfVar2[2] + pfVar1[2];
  local_54 = local_30 * _DAT_00584e1d;
  local_50 = local_2c * _DAT_00584e1d;
  pfVar1 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (iVar4,local_94,_DAT_01c78c1c);
  pfVar2 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (iVar4,local_4c,_DAT_01c78c24);
  local_7c = *pfVar2 + *pfVar1;
  local_78 = pfVar2[1] + pfVar1[1];
  local_64 = local_7c * _DAT_00584e1d;
  local_60 = local_78 * _DAT_00584e1d;
  local_74 = pfVar2[2] + pfVar1[2];
  local_28 = local_58 + local_64;
  local_5c = local_74 * _DAT_00584e1d;
  local_70 = local_28 * _DAT_00584e1d;
  local_24 = local_54 + local_60;
  local_6c = local_24 * _DAT_00584e1d;
  local_20 = local_50 + local_5c;
  local_68 = local_20 * _DAT_00584e1d;
  puVar3 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_1c,&local_70);
  if (param_2 != puVar3) {
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
  }
  return 1;
}
