// Name: core_wateract.cpp_CWaterActor_renderTransparent_FUN_00587400
// Address: 00587400
// Address Range: [[00587400, 00587645]]
// Convention: __cdecl
// Signature: int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_00587400(CWaterActor *this_ptr)

#include "nocturne.h"

int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_00587400(CWaterActor *this_ptr)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  CVector3i *pCVar4;
  SWaterVertex *pSVar5;
  SMRGLPrimitivePoly *poly;
  uint *puVar6;
  int iVar7;
  CVector3f *vertex_position;
  int unaff_EDI;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  uint auStack_38 [2];
  CBoundingBox3D CStack_30;
  uint auStack_18 [5];
  
  bVar10 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar6 = auStack_18;
    puVar8 = auStack_38;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_30,unaff_EDI);
    if (iVar3 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
                (g_CDemonRenderer_PTR_0060b280,this_ptr->opacity);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
      iVar7 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (g_CDemonRenderer_PTR_0060b280,
                 (SMRGLTextureBasic *)(this_ptr->texture_frame * 0x18 + 0x61e704));
      if (0 < this_ptr->vertex_count) {
        pCVar4 = &g_CVector3i_0265cc48;
        pSVar5 = this_ptr->vertices;
        do {
          pCVar4->x = (int)ROUND((pSVar5->local_position).x * 256.0f);
          pCVar4->y = (int)ROUND((pSVar5->local_position).y * 256.0f);
          pCVar4->z = (int)ROUND((pSVar5->local_position).z * 256.0f);
          iVar7 = iVar7 + 1;
          pSVar5 = pSVar5 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar7 < this_ptr->vertex_count);
      }
      iVar7 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
                (g_CDemonSetPtr,this_ptr->vertex_count,&g_CVector3i_0265cc48);
      if (0 < this_ptr->vertex_count) {
        vertex_position = &this_ptr->vertices[0].world_position;
        iVar9 = 0;
        do {
          core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00531a90
                    (g_CDemonSetPtr,vertex_position,&g_CVector3f_0265370c,iVar7);
          pSVar1 = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
          lVar2 = (longlong)((this_ptr->color).r << 8) * (longlong)*(int *)((int)&pSVar1->r + iVar9)
          ;
          *(uint *)((int)&pSVar1->r + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((this_ptr->color).g << 8) * (longlong)*(int *)((int)&pSVar1->g + iVar9)
          ;
          *(uint *)((int)&pSVar1->g + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((this_ptr->color).b << 8) * (longlong)*(int *)((int)&pSVar1->b + iVar9)
          ;
          *(uint *)((int)&pSVar1->b + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar7 = iVar7 + 1;
          vertex_position = (CVector3f *)&vertex_position[2].z;
          iVar9 = iVar9 + 0x30;
        } while (iVar7 < this_ptr->vertex_count);
      }
      poly = (SMRGLPrimitivePoly *)this_ptr->primitives;
      if (this_ptr->opacity < 0xfde9) {
        iVar7 = 0;
        if (0 < this_ptr->primitive_count) {
          do {
            iVar7 = iVar7 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
                      (g_CDemonRenderer_PTR_0060b280,poly,0x267);
            poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
          } while (iVar7 < this_ptr->primitive_count);
        }
      }
      else {
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40
                  (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)poly,this_ptr->primitive_count,-1);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880
                (g_CDemonRenderer_PTR_0060b280,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return iVar3;
  }
  return 0;
}
