// Name: core_charactr.cpp_FUN_004270e0
// Address: 004270e0
// Address Range: [[004270e0, 0042725f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004270e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_004270e0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  uint auStack_1ab0 [1705];
  
  auStack_1ab0[0] = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704);
  auStack_1ab0[0] = 0xc000;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704);
  if (param_1 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    auStack_1ab0[0] = 0x427143;
    fVar4 = (float10)round
                               ((float10)DAT_007658dc +
                                (float10)*(float *)(0x01C775EC + 0x264) * (float10)8388608.0f)
    ;
    DAT_007658dc = (int)ROUND(fVar4);
  }
  iVar2 = rand();
  _DAT_007658e0 = iVar2 % 6;
  DAT_005ae704[8] = 1;
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(&DAT_005ad140 + (iVar2 % 6) * 0x18);
  iVar2 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(iVar2,auStack_1ab0);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970
            (iVar2,0x3f8ccccd,0xffffffff);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar2);
  uVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                    (iVar2,param_1 + 0x2388);
  uVar3 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0051a700(uVar3);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0(iVar2,uVar3);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
            (iVar2,DAT_007658dc,0);
  iVar2 = 0;
  do {
    piVar1 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x20 + iVar2) = 0xb332;
    *(uint *)(*piVar1 + 0x24 + iVar2) = 0xb332;
    iVar2 = iVar2 + 0x30;
    *(uint *)(*piVar1 + -8 + iVar2) = 0xffff;
  } while (iVar2 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(param_1 + 0x150,0x267,1);
  DAT_005ae704[8] = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
            (param_1 + 0x150,auStack_1ab0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  return;
}
