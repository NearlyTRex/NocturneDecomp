// Name: core_charactr.cpp_CCharacter_renderEthereal_FUN_004270e0
// Address: 004270e0
// Address Range: [[004270e0, 0042725f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_004270e0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_004270e0(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  int iVar3;
  double dVar4;
  CBoundingBox3D *bounding_box;
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xc000);
  if ((CHero *)this_ptr == g_HeroActors[g_LocalHeroIndex]) {
    dVar4 = round
                      ((double)((float)DAT_007658dc +
                               g_CGame_PTR_005b9354->delta_time_float * 8388608.0f));
    DAT_007658dc = (int)ROUND(dVar4);
  }
  iVar2 = rand();
  _DAT_007658e0 = iVar2 % 6;
  g_CDemonRenderer_PTR_005ae704->skip_uv_extraction = 1;
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920
            ((SMRGLTextureBasic *)(&DAT_005ad140 + (iVar2 % 6) * 0x18));
  this_ptr_00 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
            (this_ptr_00,(SPose *)&stack0xffffe550);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970
            (this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr_00);
  bounding_box = &(this_ptr->model).bounding_box;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0051a700(this_ptr_01,bounding_box);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0(this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
            (this_ptr_00,DAT_007658dc,0);
  iVar2 = 0;
  do {
    pCVar1 = g_CDemonRenderer_PTR_005ae704;
    *(uint *)((int)&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->r + iVar2) = 0xb332;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar2) = 0xb332;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar2) = 0xffff;
    iVar2 = iVar3;
  } while (iVar3 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(&this_ptr->model,0x267,1);
  g_CDemonRenderer_PTR_005ae704->skip_uv_extraction = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
            (&this_ptr->model,(SPose *)&stack0xffffe550);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  return;
}
