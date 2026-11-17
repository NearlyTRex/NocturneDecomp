// Name: core_game.cpp_CGame_renderAlphaFade_FUN_004bb620
// Address: 004bb620
// Address Range: [[004bb620, 004bb88d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderAlphaFade_FUN_004bb620(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderAlphaFade_FUN_004bb620(CGame *this_ptr)

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
  
  iVar6 = g_INT_006141b8;
  pCVar3 = g_CDemonRenderer_PTR_0060b280;
  if (ABS(this_ptr->alpha_fade_alpha) != 0.0) {
    (g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex).screen_x = 0;
    (pCVar3->vertex_buffer_ptr->projected_vertex).screen_y = 0;
    iVar4 = (iVar6 + -1) * 0x10000;
    pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar4;
    pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_y = 0;
    iVar6 = g_INT_006141bc;
    pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar4;
    iVar4 = (iVar6 + -1) * 0x10000;
    pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar4;
    pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_x = 0;
    pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar4;
    fVar2 = 65535.0f;
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.D.f = 6.9532e-39;
    dVar7 = round((double)(this_ptr->alpha_fade_alpha * 65535.0f));
    pSVar1->a = (int)ROUND(dVar7);
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.C.f = 6.953236e-39;
    dVar7 = round((double)(this_ptr->alpha_fade_alpha * fVar2));
    pSVar1[1].a = (int)ROUND(dVar7);
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.B.f = 6.953272e-39;
    dVar7 = round((double)(this_ptr->alpha_fade_alpha * fVar2));
    pSVar1[2].a = (int)ROUND(dVar7);
    pSVar1 = pCVar3->vertex_buffer_ptr;
    SStack_58.surface_normal.A.f = 6.95331e-39;
    dVar7 = round((double)(fVar2 * this_ptr->alpha_fade_alpha));
    pSVar1[3].a = (int)ROUND(dVar7);
    fVar2 = 65535.0f;
    iVar4 = 0;
    do {
      pSVar1 = pCVar3->vertex_buffer_ptr;
      SStack_58.base.count = 0x4bb72a;
      dVar7 = round((double)(this_ptr->alpha_fade_red * fVar2));
      *(int *)((int)&pSVar1->r + iVar4) = (int)ROUND(dVar7);
      pSVar1 = pCVar3->vertex_buffer_ptr;
      SStack_58.base.type = 0x4bb744;
      dVar7 = round((double)(this_ptr->alpha_fade_green * fVar2));
      *(int *)((int)&pSVar1->g + iVar4) = (int)ROUND(dVar7);
      pSVar1 = pCVar3->vertex_buffer_ptr;
      SStack_58.surface_normal.A.f = 6.953448e-39;
      dVar8 = round((double)(this_ptr->alpha_fade_blue * fVar2));
      iVar5 = iVar4 + 0x30;
      *(int *)((int)&pSVar1->b + iVar4) = (int)ROUND(dVar8);
      iVar4 = iVar5;
    } while (iVar5 != 0xc0);
    g_CDemonRenderer_PTR_0060b280 = pCVar3;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (pCVar3,(SMRGLTextureBasic *)(&DAT_006164ac + this_ptr->alpha_fade_texture * 0x18));
    pCVar3 = g_CDemonRenderer_PTR_0060b280;
    g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->u = 0;
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
