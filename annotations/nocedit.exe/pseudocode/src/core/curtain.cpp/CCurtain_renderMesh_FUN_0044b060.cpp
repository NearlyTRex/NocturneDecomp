// Name: core_curtain.cpp_CCurtain_renderMesh_FUN_0044b060
// Address: 0044b060
// Address Range: [[0044b060, 0044b332]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044b060(CCurtain *this_ptr)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_3c */

int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044b060(CCurtain *this_ptr)

{
  int *input_vertices;
  bool bVar1;
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *pCVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  SCurtainVertex *pSVar6;
  SMRGLHeaderPrimitive *pSVar7;
  CBoundingBox3D local_3c;
  CBoundingBox3D local_24;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_3c);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
  this_ptr_00 = g_CDemonRendererPtr2;
  if (iVar3 == 0) goto LAB_0044b320;
  this_ptr->is_visible = 1;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_00);
  if (((iVar4 != 0) && (this_ptr->cinched_top != 0)) && (this_ptr->needs_update == 0)) {
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_24);
    core_box_cpp_CBoundingBox3D_render_FUN_004210b0
              (pCVar2,(int)local_3c.min.x,(int)local_3c.min.y,(int)local_3c.min.z);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,this_ptr->opacity);
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&this_ptr->curtain_texture);
  pSVar6 = this_ptr->vertices;
  input_vertices = (this_ptr->mesh).vertex_positions_fixed;
  piVar5 = input_vertices;
  if (0 < this_ptr->vertex_count) {
    do {
      *piVar5 = (int)ROUND((pSVar6->local_position).x * 256.0f);
      piVar5[1] = (int)ROUND((pSVar6->local_position).y * 256.0f);
      piVar5[2] = (int)ROUND((pSVar6->local_position).z * 256.0f);
      iVar4 = iVar4 + 1;
      pSVar6 = pSVar6 + 1;
      piVar5 = piVar5 + 3;
    } while (iVar4 < this_ptr->vertex_count);
  }
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->vertex_count,input_vertices);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  bVar1 = 0 < g_RelativeZ;
  if (this_ptr->cinched_top == 0) {
    bVar1 = true;
LAB_0044b1a4:
    pSVar7 = &(this_ptr->mesh).front_faces[0].base;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->vertex_count,
               (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,pSVar7,
               (CVector3i *)(this_ptr->mesh).vertex_positions_fixed,4,(CVector3i *)0x0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar4 = 0; iVar4 < (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2;
          iVar4 = iVar4 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr2,pSVar7);
        pSVar7 = pSVar7 + 3;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)pSVar7,
                 (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,-1);
    }
  }
  else if (g_RelativeZ < 0) goto LAB_0044b1a4;
  if (bVar1) {
    pSVar7 = &(this_ptr->mesh).back_faces[0].base;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->vertex_count,
               (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,pSVar7,
               (CVector3i *)(this_ptr->mesh).vertex_positions_fixed,4,(CVector3i *)0x0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar4 = 0; iVar4 < (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2;
          iVar4 = iVar4 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr2,pSVar7);
        pSVar7 = pSVar7 + 3;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)pSVar7,
                 (this_ptr->mesh).grid_cols * (this_ptr->mesh).grid_rows * 2,-1);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
LAB_0044b320:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar3;
}
