// Name: core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20
// Address: 0044bf20
// Address Range: [[0044bf20, 0044c21d]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044bf20(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044bf20(CCurtain *this_ptr)

{
  int *input_vertices;
  bool bVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  SCurtainVertex *pSVar5;
  SMRGLPrimitivePoly *pSVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  CBoundingBox3D *in_stack_ffffff98;
  uint auStack_58 [2];
  byte auStack_50 [32];
  uint auStack_30 [4];
  uint auStack_20 [5];
  
  bVar9 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar7 = (uint *)&stack0xffffff98;
  puVar8 = auStack_58;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  iVar3 = core_box_cpp_FUN_004207b0(auStack_50);
  this_ptr_00 = DAT_00612560;
  if (iVar3 == 0) goto LAB_0044c20a;
  this_ptr->is_visible = 1;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(this_ptr_00);
  if (((iVar2 != 0) && (this_ptr->cinched_top != 0)) && (this_ptr->needs_update == 0)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff98);
    puVar7 = auStack_30;
    puVar8 = auStack_20;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    core_box_cpp_FUN_00421670((CBoundingBox3D *)(auStack_20 + 2));
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,this_ptr->opacity);
  iVar2 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,&this_ptr->curtain_texture);
  pSVar5 = this_ptr->vertices;
  input_vertices = (this_ptr->mesh).vertex_positions_fixed;
  piVar4 = input_vertices;
  if (0 < this_ptr->vertex_count) {
    do {
      *piVar4 = (int)ROUND((pSVar5->local_position).x * _DAT_005fe490);
      piVar4[1] = (int)ROUND((pSVar5->local_position).y * _DAT_005fe490);
      piVar4[2] = (int)ROUND((pSVar5->local_position).z * _DAT_005fe490);
      iVar2 = iVar2 + 1;
      pSVar5 = pSVar5 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar2 < this_ptr->vertex_count);
  }
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
            (g_CDemonSetPtr,this_ptr->vertex_count,(CVector3i *)input_vertices);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  bVar1 = 0 < _DAT_01c51d34;
  if (this_ptr->cinched_top == 0) {
    bVar1 = true;
LAB_0044c074:
    pSVar6 = (SMRGLPrimitivePoly *)(this_ptr->mesh).front_faces;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,this_ptr->vertex_count,
               (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,pSVar6,
               (CVector3i *)(this_ptr->mesh).vertex_positions_fixed,4,(CVector3i *)0x0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar2 = 0; iVar2 < (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2;
          iVar2 = iVar2 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(DAT_00612560,pSVar6);
        pSVar6 = pSVar6 + 0x48;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)pSVar6,
                 (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,-1);
    }
  }
  else if (_DAT_01c51d34 < 0) goto LAB_0044c074;
  if (bVar1) {
    pSVar6 = (SMRGLPrimitivePoly *)(this_ptr->mesh).back_faces;
    core_set_cpp_CDemonSet_lightVerticies_FUN_00553440
              (g_CDemonSetPtr,this_ptr->vertex_count,
               (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,pSVar6,
               (CVector3i *)(this_ptr->mesh).vertex_positions_fixed,4,(CVector3i *)0x0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar2 = 0; iVar2 < (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2;
          iVar2 = iVar2 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(DAT_00612560,pSVar6);
        pSVar6 = pSVar6 + 0x48;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)pSVar6,
                 (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,-1);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
LAB_0044c20a:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return iVar3;
}
