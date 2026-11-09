// Name: core_charactr.cpp_FUN_00430060
// Address: 00430060
// Address Range: [[00430060, 004301df]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00430060(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_00430060(CCharacter *this_ptr)

{
  byte *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  float10 fVar3;
  CBoundingBox3D *bounding_box;
  SPose local_1aac [6816];
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xc000);
  if (this_ptr == *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    fVar3 = (float10)DAT_007c6178 +
            (float10)*(float *)&g_CGamePtr->field_0x294 * (float10)_DAT_005d5a2f;
    round();
    DAT_007c6178 = (int)ROUND(fVar3);
  }
  iVar2 = rand();
  _DAT_007c617c = iVar2 % 6;
  *(int *)(DAT_00612560 + 0x20) = 1;
  engine_texture_cpp_FUN_00597a20(&DAT_00610c20 + (iVar2 % 6) * 0x18);
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_FUN_0056acc0((CDeformableModelInstance *)this_ptr_00,local_1aac);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0
            ((CDeformableModelInstance *)this_ptr_00,1.1,-1);
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)this_ptr_00);
  bounding_box = (CBoundingBox3D *)&this_ptr->field_0x2480;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar2 = core_skeleton_cpp_FUN_00566380(this_ptr_01,bounding_box);
  core_skeleton_cpp_FUN_00569920((CDeformableModelInstance *)this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0
            ((CDeformableModelInstance *)this_ptr_00,DAT_007c6178,0);
  iVar2 = 0;
  do {
    pCVar1 = DAT_00612560;
    *(uint *)(*(int *)DAT_00612560 + 0x20 + iVar2) = 0xb332;
    *(uint *)(*(int *)pCVar1 + 0x24 + iVar2) = 0xb332;
    iVar2 = iVar2 + 0x30;
    *(uint *)(*(int *)pCVar1 + -8 + iVar2) = 0xffff;
  } while (iVar2 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10
            ((CDeformableModelInstance *)&this_ptr->field_0x158,0x267,1);
  *(int *)(DAT_00612560 + 0x20) = 0;
  core_skeleton_cpp_FUN_0056ad90((CDeformableModelInstance *)&this_ptr->field_0x158,local_1aac);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}
