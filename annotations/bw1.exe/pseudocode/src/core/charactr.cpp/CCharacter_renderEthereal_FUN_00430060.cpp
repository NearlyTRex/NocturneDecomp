// Name: core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060
// Address: 00430060
// Address Range: [[00430060, 004301df]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00430060(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_00430060(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  int iVar3;
  double dVar4;
  CBoundingBox3D *bounding_box;
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xc000);
  if (this_ptr == *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    dVar4 = round
                      ((double)((float)DAT_007c6178 + g_CGamePtr->delta_time_float * _DAT_005d5a2f))
    ;
    DAT_007c6178 = (int)ROUND(dVar4);
  }
  iVar2 = rand();
  _DAT_007c617c = iVar2 % 6;
  DAT_00612560->skip_uv_extraction = 1;
  engine_texture_cpp_ensureTextureLoaded_FUN_00597a20
            ((SMRGLTextureBasic *)(&DAT_00610c20 + (iVar2 % 6) * 0x18));
  this_ptr_00 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
            (this_ptr_00,(SPose *)&stack0xffffe550);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0
            (this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr_00);
  bounding_box = &(this_ptr->model).bounding_box;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00566380(this_ptr_01,bounding_box);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920(this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0
            (this_ptr_00,DAT_007c6178,0);
  iVar2 = 0;
  do {
    pCVar1 = DAT_00612560;
    *(uint *)((int)&DAT_00612560->vertex_buffer_ptr->r + iVar2) = 0xb332;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar2) = 0xb332;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar2) = 0xffff;
    iVar2 = iVar3;
  } while (iVar3 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00569a10(&this_ptr->model,0x267,1);
  DAT_00612560->skip_uv_extraction = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
            (&this_ptr->model,(SPose *)&stack0xffffe550);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}
