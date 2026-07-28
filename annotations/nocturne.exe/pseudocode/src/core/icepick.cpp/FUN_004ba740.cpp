// Name: core_icepick.cpp_FUN_004ba740
// Address: 004ba740
// Address Range: [[004ba740, 004ba897]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004ba740(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004ba740(int param_1,float param_2)

{
  float fVar1;
  CMotionList *this_ptr;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_180c [1519];
  char *motion_name;
  int iVar5;
  code *blend_callback;
  CQuaternion4f local_30;
  CQuaternion4f local_20;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x1fa5c) != 0) {
    if (*(int *)(param_1 + 0x1fa3c) == 0) {
      fVar1 = *(float *)(param_1 + 0x1fa64) - param_2 * (float)2;
      *(float *)(param_1 + 0x1fa64) = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)(param_1 + 0x1fa64) = 0;
      }
    }
    else {
      fVar1 = param_2 * (float)2 + *(float *)(param_1 + 0x1fa64);
      *(float *)(param_1 + 0x1fa64) = fVar1;
      if (1.0 < fVar1) {
        *(uint *)(param_1 + 0x1fa64) = 0x3f800000;
      }
    }
    iVar5 = 1;
    motion_name = "shoot";
    this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                         ((CMotionController *)(param_1 + 0x150));
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr,motion_name,iVar5);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              ((CMotionController *)(param_1 + 0x150),iVar5,0,*(uint *)(param_1 + 0x1fa64),
               _DAT_01cae2c8,core_skeleton_cpp_FUN_0051b650);
    fVar1 = *(float *)(param_1 + 0xbcbc) * (float)3.1415926535000001 * (float)2 * param_2
            + *(float *)(param_1 + 0x1fa68);
    *(float *)(param_1 + 0x1fa68) = fVar1;
    if ((float)0.78539816337500001 < fVar1) {
      *(uint *)(param_1 + 0x1fa68) = 0x3f490fdb;
    }
    if (*(float *)(param_1 + 0x1fa68) < (float)-0.78539816337500001) {
      *(uint *)(param_1 + 0x1fa68) = 0xbf490fdb;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(*(float *)(param_1 + 0x1fa68),&local_30);
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    local_20.w = local_30.w;
    puVar3 = (uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar2 = (uint *)((int)&local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_30 + (uint)bVar4 * -8 + 4);
    iVar5 = _DAT_01cae2c8;
    *puVar3 = *puVar2;
    puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              ((CDeformableModelInstance *)(param_1 + 0x150),&local_20,*(float *)(param_1 + 0x1fa64)
               ,iVar5,blend_callback);
  }
  return;
}
