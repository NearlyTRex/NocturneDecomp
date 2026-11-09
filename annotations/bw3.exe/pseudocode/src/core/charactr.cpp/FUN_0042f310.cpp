// Name: core_charactr.cpp_FUN_0042f310
// Address: 0042f310
// Address Range: [[0042f310, 0042f505]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042f310(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042f310(CCharacter *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  float10 fVar3;
  CBoundingBox3D *bounding_box;
  SPose aSStack_1ab0 [6816];
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xc000);
  if (this_ptr == *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    fVar3 = (float10)DAT_007e2ae8 +
            (float10)*(float *)&g_CGamePtr->field_0x314 * (float10)_DAT_005b8376;
    round();
    DAT_007e2ae8 = (int)ROUND(fVar3);
  }
  iVar2 = rand();
  _DAT_007e2aec = iVar2 % 6;
  *(uint *)(DAT_005f2afc + 0x20) = 1;
  iVar2 = (iVar2 % 6) * 0x18;
  if ((*(uint *)&this_ptr->field_0x3254 & 0x7fffffff) == 0) {
    engine_texture_cpp_FUN_0056aa10(&DAT_005f0f74 + iVar2);
  }
  else {
    iVar1 = *(int *)&this_ptr->field_0x3258;
    if (iVar1 == 0) {
      engine_texture_cpp_FUN_0056aa10(&DAT_005f1124 + iVar2);
    }
    else if (iVar1 == 1) {
      engine_texture_cpp_FUN_0056aa10(&DAT_005f1004 + iVar2);
    }
    else if (iVar1 == 2) {
      engine_texture_cpp_FUN_0056aa10(&DAT_005f1094 + iVar2);
    }
    else if (iVar1 == 4) {
      engine_texture_cpp_FUN_0056aa10(&DAT_005f11b4 + iVar2);
    }
    else if (iVar1 == 3) {
      engine_texture_cpp_FUN_0056aa10(&DAT_005f1244 + iVar2);
    }
  }
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850
            ((CDeformableModelInstance *)this_ptr_00,aSStack_1ab0);
  core_skeleton_cpp_FUN_0054e340((CDeformableModelInstance *)this_ptr_00,1.1,-1);
  core_skeleton_cpp_FUN_0054dd10((CDeformableModelInstance *)this_ptr_00);
  bounding_box = (CBoundingBox3D *)&this_ptr->field_0x2480;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar2 = core_skeleton_cpp_FUN_0054af10(this_ptr_01,bounding_box);
  core_skeleton_cpp_FUN_0054e4b0((CDeformableModelInstance *)this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70
            ((CDeformableModelInstance *)this_ptr_00,DAT_007e2ae8,0);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0
            ((CDeformableModelInstance *)this_ptr_00,0x267,1);
  *(uint *)(DAT_005f2afc + 0x20) = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920
            ((CDeformableModelInstance *)this_ptr_00,aSStack_1ab0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
