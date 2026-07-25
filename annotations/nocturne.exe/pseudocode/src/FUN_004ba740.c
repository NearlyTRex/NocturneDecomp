// Name: FUN_004ba740
// Address: 004ba740
// Address Range: [[004ba740, 004ba897]]
// Convention: unknown
// Signature: void FUN_004ba740(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba740(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_180c [1519];
  code *pcVar4;
  uint local_30;
  uint local_20;
  
  bVar3 = 0;
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
    uVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                      (param_1 + 0x150,"shoot",1);
    uVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar2);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (param_1 + 0x150,uVar2,0,*(uint *)(param_1 + 0x1fa64),_DAT_01cae2c8,FUN_0051b650
              );
    fVar1 = *(float *)(param_1 + 0xbcbc) * (float)3.1415926535000001 * (float)2 * param_2
            + *(float *)(param_1 + 0x1fa68);
    *(float *)(param_1 + 0x1fa68) = fVar1;
    if ((float)0.78539816337500001 < fVar1) {
      *(uint *)(param_1 + 0x1fa68) = 0x3f490fdb;
    }
    if (*(float *)(param_1 + 0x1fa68) < (float)-0.78539816337500001) {
      *(uint *)(param_1 + 0x1fa68) = 0xbf490fdb;
    }
    core_xform_cpp_FUN_0055d4a0(*(uint *)(param_1 + 0x1fa68));
    pcVar4 = FUN_0051b650;
    local_20 = local_30;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8);
    uVar2 = _DAT_01cae2c8;
    *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (param_1 + 0x150,&stack0xffffffe0,*(uint *)(param_1 + 0x1fa64),uVar2,pcVar4);
  }
  return;
}
