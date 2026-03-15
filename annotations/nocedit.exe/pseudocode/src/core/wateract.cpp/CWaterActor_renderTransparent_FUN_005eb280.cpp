// Name: core_wateract.cpp_CWaterActor_renderTransparent_FUN_005eb280
// Address: 005eb280
// Address Range: [[005eb280, 005eb4a5]]
// Convention: __cdecl
// Signature: int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_005eb280(CWaterActor *this_ptr)

#include "nocturne.h"

int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_005eb280(CWaterActor *this_ptr)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  CVector3i *pCVar4;
  SWaterVertex *pSVar5;
  SMRGLHeaderPrimitive *primitive_array;
  CVector3f *vertex_position;
  int iVar6;
  CBoundingBox3D CStack_24;
  int iStack_c;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_24);
    iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iStack_c != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr2,this_ptr->opacity);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
      iVar3 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,SMRGLTextureBasic_ARRAY_006846f0 + this_ptr->texture_frame);
      if (0 < this_ptr->vertex_count) {
        pCVar4 = g_WaterActorTransformedVertices;
        pSVar5 = this_ptr->vertices;
        do {
          pCVar4->x = (int)ROUND((pSVar5->local_position).x * 256.0f);
          pCVar4->y = (int)ROUND((pSVar5->local_position).y * 256.0f);
          pCVar4->z = (int)ROUND((pSVar5->local_position).z * 256.0f);
          iVar3 = iVar3 + 1;
          pSVar5 = pSVar5 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar3 < this_ptr->vertex_count);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_0056e7c0
                (g_CDemonSetPtr,this_ptr->vertex_count,g_WaterActorTransformedVertices);
      if (0 < this_ptr->vertex_count) {
        vertex_position = &this_ptr->vertices[0].world_position;
        iVar6 = 0;
        do {
          core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
                    (g_CDemonSetPtr,vertex_position,&g_ZeroVector.f,iVar3);
          pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          lVar2 = (longlong)((this_ptr->color).r << 8) * (longlong)*(int *)((int)&pSVar1->r + iVar6)
          ;
          *(uint *)((int)&pSVar1->r + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((this_ptr->color).g << 8) * (longlong)*(int *)((int)&pSVar1->g + iVar6)
          ;
          *(uint *)((int)&pSVar1->g + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((this_ptr->color).b << 8) * (longlong)*(int *)((int)&pSVar1->b + iVar6)
          ;
          *(uint *)((int)&pSVar1->b + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          vertex_position = (CVector3f *)&vertex_position[2].z;
          iVar6 = iVar6 + 0x30;
        } while (iVar3 < this_ptr->vertex_count);
      }
      primitive_array = &this_ptr->primitives[0].base;
      if (this_ptr->opacity < 0xfde9) {
        iVar3 = 0;
        if (0 < this_ptr->primitive_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                      (g_CDemonRendererPtr2,primitive_array,0x267);
            primitive_array = primitive_array + 3;
          } while (iVar3 < this_ptr->primitive_count);
        }
      }
      else {
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                  (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)primitive_array,this_ptr->primitive_count,-1
                  );
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return iStack_c;
  }
  return 0;
}
