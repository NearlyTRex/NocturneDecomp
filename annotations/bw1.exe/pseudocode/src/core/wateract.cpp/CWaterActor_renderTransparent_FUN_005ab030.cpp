// Name: core_wateract.cpp_CWaterActor_renderTransparent_FUN_005ab030
// Address: 005ab030
// Address Range: [[005ab030, 005ab275]]
// Convention: __cdecl
// Signature: int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_005ab030(CWaterActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_wateract_cpp_CWaterActor_renderTransparent_FUN_005ab030(CWaterActor *this_ptr)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  SWaterVertex *pSVar5;
  SMRGLPrimitivePoly *primitive_array;
  uint *puVar6;
  CVector3f *vertex_position;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  uint auStack_38 [6];
  uint auStack_20 [6];
  int iStack_8;
  
  bVar9 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar6 = auStack_20;
    puVar7 = auStack_38;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    iStack_8 = core_box_cpp_FUN_004207b0(auStack_38);
    if (iStack_8 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,this_ptr->opacity);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      iVar3 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (DAT_00612560,(SMRGLTextureBasic *)(this_ptr->texture_frame * 0x18 + 0x625e74));
      if (0 < this_ptr->vertex_count) {
        piVar4 = (int *)0x2c94468;
        pSVar5 = this_ptr->vertices;
        do {
          *piVar4 = (int)ROUND((pSVar5->local_position).x * _DAT_00607bf0);
          piVar4[1] = (int)ROUND((pSVar5->local_position).y * _DAT_00607bf0);
          piVar4[2] = (int)ROUND((pSVar5->local_position).z * _DAT_00607bf0);
          iVar3 = iVar3 + 1;
          pSVar5 = pSVar5 + 1;
          piVar4 = piVar4 + 3;
        } while (iVar3 < this_ptr->vertex_count);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
                (g_CDemonSetPtr,this_ptr->vertex_count,(CVector3i *)0x2c94468);
      if (0 < this_ptr->vertex_count) {
        vertex_position = &this_ptr->vertices[0].world_position;
        iVar8 = 0;
        do {
          core_set_cpp_FUN_00552d40(g_CDemonSetPtr,vertex_position,(CVector3f *)&DAT_02c8af28,iVar3)
          ;
          pSVar1 = DAT_00612560->vertex_buffer_ptr;
          lVar2 = (longlong)((this_ptr->color).r << 8) * (longlong)*(int *)(pSVar1 + iVar8 + 0x20);
          *(uint *)(pSVar1 + iVar8 + 0x20) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((this_ptr->color).g << 8) * (longlong)*(int *)(pSVar1 + iVar8 + 0x24);
          *(uint *)(pSVar1 + iVar8 + 0x24) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((this_ptr->color).b << 8) * (longlong)*(int *)(pSVar1 + iVar8 + 0x28);
          *(uint *)(pSVar1 + iVar8 + 0x28) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          vertex_position = (CVector3f *)&vertex_position[2].z;
          iVar8 = iVar8 + 0x30;
        } while (iVar3 < this_ptr->vertex_count);
      }
      primitive_array = (SMRGLPrimitivePoly *)this_ptr->primitives;
      if (this_ptr->opacity < 0xfde9) {
        iVar3 = 0;
        if (0 < this_ptr->primitive_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
                      (DAT_00612560,primitive_array,0x267);
            primitive_array = primitive_array + 0x48;
          } while (iVar3 < this_ptr->primitive_count);
        }
      }
      else {
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0
                  (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)primitive_array,this_ptr->primitive_count,-1
                  );
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    return iStack_8;
  }
  return 0;
}
