// Name: core_wateract.cpp_CWaterActor_renderTransparent_FUN_005787f0
// Address: 005787f0
// Address Range: [[005787f0, 00578a68]]
// Convention: __cdecl
// Signature: int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_005787f0(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_005787f0(CWaterActor *this_ptr)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  int *piVar4;
  SWaterVertex *pSVar5;
  SMRGLPrimitivePoly *poly;
  uint *puVar6;
  CVector3f *pCVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  uint auStack_38 [6];
  uint auStack_20 [6];
  int iStack_8;
  
  bVar10 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar6 = auStack_38;
    puVar8 = auStack_20;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    iStack_8 = core_box_cpp_FUN_0041daf0(auStack_20);
    if (iStack_8 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,this_ptr->opacity);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
      if (this_ptr->is_lava == 0) {
        texture = (SMRGLTextureBasic *)(this_ptr->texture_frame * 0x18 + 0x606e84);
      }
      else {
        texture = (SMRGLTextureBasic *)(this_ptr->texture_frame * 0x18 + 0x607004);
      }
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
      iVar3 = 0;
      if (0 < this_ptr->vertex_count) {
        piVar4 = (int *)0x2d06e08;
        pSVar5 = this_ptr->vertices;
        do {
          *piVar4 = (int)ROUND((pSVar5->local_position).x * _DAT_005e5ec0);
          piVar4[1] = (int)ROUND((pSVar5->local_position).y * _DAT_005e5ec0);
          piVar4[2] = (int)ROUND((pSVar5->local_position).z * _DAT_005e5ec0);
          iVar3 = iVar3 + 1;
          pSVar5 = pSVar5 + 1;
          piVar4 = piVar4 + 3;
        } while (iVar3 < this_ptr->vertex_count);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
                (g_CDemonSetPtr,this_ptr->vertex_count,(CVector3i *)0x2d06e08);
      if (0 < this_ptr->vertex_count) {
        pCVar7 = &this_ptr->vertices[0].world_position;
        iVar9 = 0;
        do {
          core_set_cpp_FUN_005386d0(g_CDemonSetPtr,pCVar7,&DAT_02cfd900,iVar3);
          pSVar1 = DAT_005f2afc->vertex_buffer_ptr;
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
          iVar3 = iVar3 + 1;
          pCVar7 = (CVector3f *)((int)(pCVar7 + 2) + 8);
          iVar9 = iVar9 + 0x30;
        } while (iVar3 < this_ptr->vertex_count);
      }
      poly = (SMRGLPrimitivePoly *)this_ptr->primitives;
      if (this_ptr->opacity < 0xfde9) {
        iVar3 = 0;
        if (0 < this_ptr->primitive_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                      (DAT_005f2afc,poly,0x267);
            poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
          } while (iVar3 < this_ptr->primitive_count);
        }
      }
      else {
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80
                  (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)poly,this_ptr->primitive_count,-1);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return iStack_8;
  }
  return 0;
}
