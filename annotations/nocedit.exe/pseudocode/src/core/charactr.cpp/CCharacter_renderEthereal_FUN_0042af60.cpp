// Name: core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60
// Address: 0042af60
// Address Range: [[0042af60, 0042b0df]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_0042af60(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_0042af60(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  int iVar3;
  CBoundingBox3D *bounding_box;
  SBoneTransformData local_1aac;
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xc000);
  if ((CHero *)this_ptr == g_HeroActors[g_LocalHeroIndex]) {
    INT_00823a90 = (int)ROUND(ROUND((float)INT_00823a90 +
                                    g_CGamePtr->delta_time_float * 8388608.0f));
  }
  iVar2 = rand();
  INT_00823a94 = iVar2 % 6;
  g_CDemonRendererPtr2->skip_uv_extraction = 1;
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic_ARRAY_0066e6b0 + iVar2 % 6);
  this_ptr_00 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(this_ptr_00,&local_1aac);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
            (this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  bounding_box = &(this_ptr->model).bounding_box;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40(this_ptr_01,bounding_box);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
            (this_ptr_00,INT_00823a90,0);
  iVar2 = 0;
  do {
    pCVar1 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->z + iVar2) = 0xb332;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->r + iVar2) = 0xb332;
    iVar3 = iVar2 + 0x30;
    *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar2) = 0xffff;
    iVar2 = iVar3;
  } while (iVar3 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(&this_ptr->model);
  g_CDemonRendererPtr2->skip_uv_extraction = 0;
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
            (&this_ptr->model,&local_1aac);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
