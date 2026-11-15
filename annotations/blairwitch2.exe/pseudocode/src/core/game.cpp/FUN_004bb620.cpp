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
  float fVar2;
  CDemonRenderer *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  SMRGLHeaderPrimitive SStack_58;
  
  iVar6 = DAT_006141b8;
  pCVar3 = DAT_0060b280;
  if ((*(uint *)(param_1 + 0xaf4) & 0x7fffffff) != 0) {
    (DAT_0060b280->vertex_buffer_ptr->projected_vertex).screen_x = 0;
    (pCVar3->vertex_buffer_ptr->projected_vertex).screen_y = 0;
    iVar4 = (iVar6 + -1) * 0x10000;
    pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar4;
    pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_y = 0;
    iVar6 = DAT_006141bc;
    pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar4;
    iVar4 = (iVar6 + -1) * 0x10000;
    pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar4;
    pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_x = 0;
    pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar4;
    fVar2 = _DAT_005d8403;
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.D.f = 6.9532e-39;
    dVar7 = round((double)(*(float *)(param_1 + 0xaf4) * _DAT_005d8403));
    pSVar1->a = (int)ROUND(dVar7);
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.C.f = 6.953236e-39;
    dVar7 = round((double)(*(float *)(param_1 + 0xaf4) * fVar2));
    pSVar1[1].a = (int)ROUND(dVar7);
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.B.f = 6.953272e-39;
    dVar7 = round((double)(*(float *)(param_1 + 0xaf4) * fVar2));
    pSVar1[2].a = (int)ROUND(dVar7);
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.A.f = 6.95331e-39;
    dVar7 = round((double)(fVar2 * *(float *)(param_1 + 0xaf4)));
    pSVar1[3].a = (int)ROUND(dVar7);
    fVar2 = _DAT_005d8403;
    iVar4 = 0;
    do {
      pSVar1 = pCVar3->vertex_buffer_ptr;
      SStack_58.base.count = 0x4bb72a;
      dVar7 = round((double)(*(float *)(param_1 + 0xb08) * fVar2));
      *(int *)((int)&pSVar1->r + iVar4) = (int)ROUND(dVar7);
      pSVar1 = pCVar3->vertex_buffer_ptr;
      SStack_58.base.type = 0x4bb744;
      dVar7 = round((double)(*(float *)(param_1 + 0xb0c) * fVar2));
      *(int *)((int)&pSVar1->g + iVar4) = (int)ROUND(dVar7);
      pSVar1 = pCVar3->vertex_buffer_ptr;
      SStack_58.surface_normal.A.f = 6.953448e-39;
      dVar8 = round((double)(*(float *)(param_1 + 0xb10) * fVar2));
      iVar5 = iVar4 + 0x30;
      *(int *)((int)&pSVar1->b + iVar4) = (int)ROUND(dVar8);
      iVar4 = iVar5;
    } while (iVar5 != 0xc0);
    DAT_0060b280 = pCVar3;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (pCVar3,(SMRGLTextureBasic *)(&DAT_006164ac + *(int *)(param_1 + 0xb18) * 0x18));
    pCVar3 = DAT_0060b280;
    DAT_0060b280->vertex_buffer_ptr->u = 0;
    pCVar3->vertex_buffer_ptr->v = 0xff0000;
    pCVar3->vertex_buffer_ptr[1].u = 0xff0000;
    pCVar3->vertex_buffer_ptr[1].v = 0xff0000;
    pCVar3->vertex_buffer_ptr[2].u = 0xff0000;
    pCVar3->vertex_buffer_ptr[2].v = 0;
    pCVar3->vertex_buffer_ptr[3].u = 0;
    pCVar3->vertex_buffer_ptr[3].v = 0;
    SStack_58.base.count = 4;
    SStack_58.surface_normal.D.i = 0;
    SStack_58.surface_normal.C.i = 0;
    SStack_58.surface_normal.B.i = 0;
    SStack_58.surface_normal.A.i = 0;
    (pCVar3->vertex_buffer_ptr->projected_vertex).screen_x = 0;
    (pCVar3->vertex_buffer_ptr->projected_vertex).screen_y = 0;
    iVar4 = ((int)ROUND(dVar7) + -1) * 0x10000;
    pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar4;
    pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_y = 0;
    pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar4;
    iVar6 = (iVar6 + -1) * 0x10000;
    pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar6;
    pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_x = 0;
    pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar6;
    engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70(pCVar3,&SStack_58);
  }
  return;
}
