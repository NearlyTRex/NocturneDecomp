// Name: core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0
// Address: 004fcff0
// Address Range: [[004fcff0, 004fd1c4]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(int param_1)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  fVar10 = 1.0;
  if (*(int *)(param_1 + 0x2624 + *(int *)(param_1 + 0x2a84) * 0x38) == 0) {
    fVar10 = *(float *)(param_1 + 0x2a88);
  }
  if (*(int *)(param_1 + 0x2628 + *(int *)(param_1 + 0x2a84) * 0x38) == 0) {
    fVar10 = (1.0 - *(float *)(param_1 + 0x2a88)) * fVar10;
  }
  iVar1 = param_1 + 0x150;
  fVar3 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar1,4);
  fVar4 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar1,5);
  fVar5 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar1,0xc);
  fVar6 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar1,0xd);
  fVar7 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar1,0xe);
  fVar10 = (1.0 - (fVar7 + fVar6 + fVar5 + fVar4 + fVar3)) * fVar10;
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  dVar2 = (double)fVar10;
  if ((float)0.0001 < fVar10) {
    if (1.0 < dVar2) {
      fVar10 = 1.0;
    }
    iVar1 = param_1 + 0x150;
    uVar8 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                      (iVar1,param_1 + *(int *)(param_1 + 0x2a84) * 0x38 + 0x262c,1,dVar2,fVar10);
    uVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar8);
    uVar9 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                      (iVar1,uVar8,*(uint *)(param_1 + 0x2a88));
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (iVar1,uVar8,uVar9,fVar10,_DAT_01e533c8,core_skeleton_cpp_FUN_0051b650);
    if (*(int *)(param_1 + 0x2a84) == 1) {
      core_scat_cpp_FUN_004fd1d0(param_1,1);
      return;
    }
  }
  return;
}
