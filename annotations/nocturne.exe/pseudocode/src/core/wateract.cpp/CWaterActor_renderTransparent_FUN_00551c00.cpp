// Name: core_wateract.cpp_CWaterActor_renderTransparent_FUN_00551c00
// Address: 00551c00
// Address Range: [[00551c00, 00551e35]]
// Convention: __cdecl
// Signature: int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_00551c00(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_00551c00(CWaterActor *this_ptr)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int *piVar4;
  SWaterVertex *pSVar5;
  SMRGLPrimitivePoly *poly;
  CVector3f *vertex_position;
  int iVar6;
  CBoundingBox3D local_24;
  int iStack_c;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_24);
    iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iStack_c != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (g_CDemonRenderer_PTR_005ae704,this_ptr->opacity);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
      iVar3 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (g_CDemonRenderer_PTR_005ae704,
                 (SMRGLTextureBasic *)(&DAT_005c13cc + this_ptr->texture_frame * 0x18));
      if (0 < this_ptr->vertex_count) {
        piVar4 = (int *)&DAT_02dda6b8;
        pSVar5 = this_ptr->vertices;
        do {
          *piVar4 = (int)ROUND((pSVar5->local_position).x * _DAT_005a3ed0);
          piVar4[1] = (int)ROUND((pSVar5->local_position).y * _DAT_005a3ed0);
          piVar4[2] = (int)ROUND((pSVar5->local_position).z * _DAT_005a3ed0);
          iVar3 = iVar3 + 1;
          pSVar5 = pSVar5 + 1;
          piVar4 = piVar4 + 3;
        } while (iVar3 < this_ptr->vertex_count);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
                (g_CDemonSet_PTR_005be368,this_ptr->vertex_count,(CVector3i *)&DAT_02dda6b8);
      if (0 < this_ptr->vertex_count) {
        vertex_position = &this_ptr->vertices[0].world_position;
        iVar6 = 0;
        do {
          core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                    (g_CDemonSet_PTR_005be368,vertex_position,(CVector3f *)&DAT_02dd1184,iVar3);
          pSVar1 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
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
      poly = (SMRGLPrimitivePoly *)this_ptr->primitives;
      if (this_ptr->opacity < 0xfde9) {
        iVar3 = 0;
        if (0 < this_ptr->primitive_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                      (g_CDemonRenderer_PTR_005ae704,poly,0x267);
            poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
          } while (iVar3 < this_ptr->primitive_count);
        }
      }
      else {
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0
                  (g_CDemonSet_PTR_005be368,(SMRGLPrimitiveQuad *)poly,this_ptr->primitive_count,-1)
        ;
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                (g_CDemonRenderer_PTR_005ae704,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return iStack_c;
  }
  return 0;
}
