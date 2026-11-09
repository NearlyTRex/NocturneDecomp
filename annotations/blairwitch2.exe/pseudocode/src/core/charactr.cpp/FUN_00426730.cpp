// Name: core_charactr.cpp_FUN_00426730
// Address: 00426730
// Address Range: [[00426730, 004268af]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00426730(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_00426730(CCharacter *this_ptr)

{
  byte *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  float10 fVar3;
  CBoundingBox3D *bounding_box;
  SPose local_1aac [6816];
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xc000);
  if (this_ptr == *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    fVar3 = (float10)DAT_007bda90 +
            (float10)*(float *)&g_CGamePtr->field_0x284 * (float10)_DAT_005ccda6;
    round();
    DAT_007bda90 = (int)ROUND(fVar3);
  }
  iVar2 = rand();
  _DAT_007bda94 = iVar2 % 6;
  *(int *)(DAT_0060b280 + 0x20) = 1;
  engine_texture_cpp_FUN_00574e00(&DAT_00609a10 + (iVar2 % 6) * 0x18);
  this_ptr_00 = &this_ptr->field_0x2b4;
  core_skeleton_cpp_FUN_00548620((CDeformableModelInstance *)this_ptr_00,local_1aac);
  core_skeleton_cpp_FUN_00547110((CDeformableModelInstance *)this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)this_ptr_00);
  bounding_box = (CBoundingBox3D *)&this_ptr->field_0x24ec;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00543d00(this_ptr_01,bounding_box);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280
            ((CDeformableModelInstance *)this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940
            ((CDeformableModelInstance *)this_ptr_00,DAT_007bda90,0);
  iVar2 = 0;
  do {
    pCVar1 = DAT_0060b280;
    *(uint *)(*(int *)DAT_0060b280 + 0x20 + iVar2) = 0xb332;
    *(uint *)(*(int *)pCVar1 + 0x24 + iVar2) = 0xb332;
    iVar2 = iVar2 + 0x30;
    *(uint *)(*(int *)pCVar1 + -8 + iVar2) = 0xffff;
  } while (iVar2 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00547370
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4,0x267,1);
  *(int *)(DAT_0060b280 + 0x20) = 0;
  core_skeleton_cpp_FUN_005486f0((CDeformableModelInstance *)&this_ptr->field_0x2b4,local_1aac);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
