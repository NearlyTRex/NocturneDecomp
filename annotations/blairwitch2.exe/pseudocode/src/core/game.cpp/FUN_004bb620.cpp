// Name: core_game.cpp_FUN_004bb620
// Address: 004bb620
// Address Range: [[004bb620, 004bb88d]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004bb620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004bb620(int param_1)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  SMRGLHeaderPrimitive local_3c;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  iVar4 = DAT_006141b8;
  pCVar2 = DAT_0060b280;
  if ((*(uint *)(param_1 + 0xaf4) & 0x7fffffff) != 0) {
    local_10 = DAT_006141b8;
    (DAT_0060b280->vertex_buffer_ptr->projected_vertex).screen_x = 0;
    (pCVar2->vertex_buffer_ptr->projected_vertex).screen_y = 0;
    iVar3 = (iVar4 + -1) * 0x10000;
    pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar3;
    pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_y = 0;
    iVar4 = DAT_006141bc;
    pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar3;
    iVar3 = (iVar4 + -1) * 0x10000;
    pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar3;
    pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = 0;
    pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar3;
    fVar5 = (float10)_DAT_005d8403;
    fVar6 = (float10)*(float *)(param_1 + 0xaf4) * fVar5;
    round();
    local_14 = (int)ROUND(fVar6);
    *(int *)(extraout_ECX + 0x2c) = local_14;
    fVar6 = (float10)*(float *)(param_1 + 0xaf4) * fVar5;
    round();
    local_14 = (int)ROUND(fVar6);
    *(int *)(extraout_ECX_00 + 0x5c) = local_14;
    fVar6 = (float10)*(float *)(param_1 + 0xaf4) * fVar5;
    round();
    local_14 = (int)ROUND(fVar6);
    *(int *)(extraout_ECX_01 + 0x8c) = local_14;
    fVar5 = fVar5 * (float10)*(float *)(param_1 + 0xaf4);
    round();
    local_14 = (int)ROUND(fVar5);
    *(int *)(extraout_EDX + 0xbc) = local_14;
    iVar3 = 0;
    fVar6 = (float10)_DAT_005d8403;
    do {
      pSVar1 = pCVar2->vertex_buffer_ptr;
      fVar5 = (float10)*(float *)(param_1 + 0xb08) * fVar6;
      round();
      local_14 = (int)ROUND(fVar5);
      *(int *)((int)&pSVar1->r + iVar3) = local_14;
      fVar5 = (float10)*(float *)(param_1 + 0xb0c) * fVar6;
      pSVar1 = pCVar2->vertex_buffer_ptr;
      round();
      local_14 = (int)ROUND(fVar5);
      *(int *)((int)&pSVar1->g + extraout_EDX_00) = local_14;
      pSVar1 = pCVar2->vertex_buffer_ptr;
      fVar5 = (float10)*(float *)(param_1 + 0xb10) * fVar6;
      round();
      local_14 = (int)ROUND(fVar5);
      iVar3 = extraout_EDX_01 + 0x30;
      *(int *)((int)&pSVar1->b + extraout_EDX_00) = local_14;
    } while (iVar3 != 0xc0);
    DAT_0060b280 = pCVar2;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (pCVar2,(SMRGLTextureBasic *)(&DAT_006164ac + *(int *)(param_1 + 0xb18) * 0x18));
    pCVar2 = DAT_0060b280;
    DAT_0060b280->vertex_buffer_ptr->u = 0;
    pCVar2->vertex_buffer_ptr->v = 0xff0000;
    pCVar2->vertex_buffer_ptr[1].u = 0xff0000;
    pCVar2->vertex_buffer_ptr[1].v = 0xff0000;
    pCVar2->vertex_buffer_ptr[2].u = 0xff0000;
    pCVar2->vertex_buffer_ptr[2].v = 0;
    pCVar2->vertex_buffer_ptr[3].u = 0;
    pCVar2->vertex_buffer_ptr[3].v = 0;
    local_3c.base.count = 4;
    local_3c.surface_normal.D.i = 0;
    local_3c.surface_normal.C.i = 0;
    local_3c.surface_normal.B.i = 0;
    local_3c.surface_normal.A.i = 0;
    local_24 = 0;
    local_20 = 1;
    local_1c = 2;
    local_18 = 3;
    (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = 0;
    (pCVar2->vertex_buffer_ptr->projected_vertex).screen_y = 0;
    iVar3 = (local_10 + -1) * 0x10000;
    pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar3;
    pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_y = 0;
    pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar3;
    iVar4 = (iVar4 + -1) * 0x10000;
    pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar4;
    pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = 0;
    pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar4;
    engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70(pCVar2,&local_3c);
  }
  return;
}
