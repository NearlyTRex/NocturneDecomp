// Name: core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0
// Address: 0042abd0
// Address Range: [[0042abd0, 0042adcf]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte local_70 [12];
  uint local_64;
  uint local_60;
  uint local_5c;
  byte local_58 [12];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  byte local_34 [12];
  byte local_28 [12];
  byte local_1c [12];
  
  if ((*(int *)(param_1 + 0x2618) != 0) &&
     (*(float *)(0x01E57284 + 0x15a88c) < (float)32)) {
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if (*(int *)(iVar2 + 0x24) == 0) {
      if ((*(int *)(param_1 + 0x2c50) == 0) &&
         (fVar1 = *(float *)(param_1 + 0x2c48) - param_2, *(float *)(param_1 + 0x2c48) = fVar1,
         fVar1 < 0.0)) {
        *(float *)(param_1 + 0x2c48) = *(float *)(param_1 + 0x2c48) + 0.2f;
        local_48 = 0xbf000000;
        local_4c = 0;
        local_44 = 0x3f800000;
        core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_1c,&local_4c);
        uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                          (param_1 + 0x150);
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 head",0);
        if (iVar2 != -1) {
          local_64 = 0;
          local_5c = 0x3f000000;
          local_60 = 0x3e4ccccd;
          uVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (local_58,&local_64,iVar2 * 0x30 + param_1 + 0xfd0);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_34,uVar3);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,local_34,0x3f000000,local_1c,0x8000);
        }
      }
      param_2 = *(float *)(param_1 + 0x2c4c) - param_2;
      *(float *)(param_1 + 0x2c4c) = param_2;
      if (param_2 < 0.0) {
        *(float *)(param_1 + 0x2c4c) = *(float *)(param_1 + 0x2c4c) + 1.5f;
        uVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                          (param_1 + 0x150);
        iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar3,"Bip01 head",0);
        if (iVar2 != -1) {
          local_40 = 0;
          local_3c = 0x3e4ccccd;
          local_38 = 0x3f000000;
          uVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (local_70,&local_40,iVar2 * 0x30 + param_1 + 0xfd0);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_28,uVar3);
          iVar2 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00511b50(0x01E57284,local_28);
          if (iVar2 == 0) {
            *(uint *)(param_1 + 0x2c50) = (uint)(*(int *)(param_1 + 0x2c50) == 0);
            return;
          }
        }
      }
    }
  }
  return;
}
