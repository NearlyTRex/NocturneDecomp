// Name: core_curtain.cpp_CCurtain_FUN_0043f330
// Address: 0043f330
// Address Range: [[0043f330, 0043f602]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_FUN_0043f330(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_curtain_cpp_CCurtain_FUN_0043f330(CCurtain *this_ptr)

{
  int *input_vertices;
  bool bVar1;
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *pCVar2;
  int iVar3;
  int *piVar4;
  SCurtainVertex *pSVar5;
  SMRGLPrimitivePoly *pSVar6;
  CBoundingBox3D local_3c;
  CBoundingBox3D CStack_24;
  int iStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_3c);
  iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar2);
  this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
  if (iStack_c == 0) goto LAB_0043f5f0;
  this_ptr->is_visible = 1;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(this_ptr_00);
  if (((iVar3 != 0) && (this_ptr->cinched_top != 0)) && (this_ptr->needs_update == 0)) {
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_24);
    core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,this_ptr->opacity);
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,&this_ptr->curtain_texture);
  pSVar5 = this_ptr->vertices;
  input_vertices = (this_ptr->mesh).vertex_positions_fixed;
  piVar4 = input_vertices;
  if (0 < this_ptr->vertex_count) {
    do {
      *piVar4 = (int)ROUND((pSVar5->local_position).x * _DAT_0059bc70);
      piVar4[1] = (int)ROUND((pSVar5->local_position).y * _DAT_0059bc70);
      piVar4[2] = (int)ROUND((pSVar5->local_position).z * _DAT_0059bc70);
      iVar3 = iVar3 + 1;
      pSVar5 = pSVar5 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar3 < this_ptr->vertex_count);
  }
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (g_CDemonSet_PTR_005be368,this_ptr->vertex_count,(CVector3i *)input_vertices);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,1);
  bVar1 = 0 < g_RelativeZ;
  if (this_ptr->cinched_top == 0) {
    bVar1 = true;
LAB_0043f474:
    pSVar6 = (SMRGLPrimitivePoly *)(this_ptr->mesh).front_faces;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSet_PTR_005be368,this_ptr->vertex_count,
               (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,pSVar6,
               (CVector3i *)(this_ptr->mesh).vertex_positions_fixed,4,(CVector3i *)0x0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar3 = 0; iVar3 < (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2;
          iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
                  (g_CDemonRenderer_PTR_005ae704,pSVar6);
        pSVar6 = (SMRGLPrimitivePoly *)(pSVar6->vertices + 4);
      }
    }
    else {
      core_set_cpp_CDemonSet_FUN_0050ddd0
                (g_CDemonSet_PTR_005be368,(SMRGLPrimitiveQuad *)pSVar6,
                 (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,-1);
    }
  }
  else if (g_RelativeZ < 0) goto LAB_0043f474;
  if (bVar1) {
    pSVar6 = (SMRGLPrimitivePoly *)(this_ptr->mesh).back_faces;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (g_CDemonSet_PTR_005be368,this_ptr->vertex_count,
               (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,pSVar6,
               (CVector3i *)(this_ptr->mesh).vertex_positions_fixed,4,(CVector3i *)0x0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar3 = 0; iVar3 < (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2;
          iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
                  (g_CDemonRenderer_PTR_005ae704,pSVar6);
        pSVar6 = (SMRGLPrimitivePoly *)(pSVar6->vertices + 4);
      }
    }
    else {
      core_set_cpp_CDemonSet_FUN_0050ddd0
                (g_CDemonSet_PTR_005be368,(SMRGLPrimitiveQuad *)pSVar6,
                 (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,-1);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
LAB_0043f5f0:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iStack_c;
}
