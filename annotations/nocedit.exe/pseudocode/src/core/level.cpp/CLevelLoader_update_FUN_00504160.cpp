// Name: core_level.cpp_CLevelLoader_update_FUN_00504160
// Address: 00504160
// Address Range: [[00504160, 0050471f]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)

#include "nocturne.h"

void __cdecl
core_level_cpp_CLevelLoader_update_FUN_00504160(CLevelLoader *this_ptr,char *text,int clear_screen)

{
  CDemonRenderer *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_retaddr;
  CBitFont *in_stack_00000030;
  CBitFont *pCStack00000034;
  CBitFont *pCStack00000038;
  char *in_stack_00000048;
  ushort angle;
  CVector3i local_40;
  uint local_34;
  CVector3i local_30;
  CVector3i local_1c;
  float local_10;
  
  if (this_ptr->enabled != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0);
    }
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                (g_CDemonRendererPtr,this_ptr->viewport_x,this_ptr->viewport_y,
                 this_ptr->viewport_width,this_ptr->viewport_height);
    }
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector);
    local_10 = 56.0;
    if (this_ptr->use_custom_viewport != 0) {
      local_10 = 84.0;
    }
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,local_10);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
    local_1c.z = 0;
    local_10 = 0.0;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&local_1c.z);
    g_CDemonSetPtr->rendering_mode = 1;
    angle = 0x8000 - (short)((this_ptr->current_frame << 0xf) / this_ptr->total_frames);
    iVar3 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(angle);
    pCVar2 = g_CDemonSetPtr;
    (g_CDemonSetPtr->light_direction).y = -37000;
    (pCVar2->light_direction).x =
         (uint)((longlong)iVar3 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
    iVar3 = engine_matrix_c_interpolatedCos_FUN_0050c600(angle);
    pCVar2 = g_CDemonSetPtr;
    g_CDemonSetPtr->ambient_base_quick = 0x280;
    (pCVar2->light_direction).z =
         (uint)((longlong)iVar3 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
    core_set_cpp_CDemonSet_FUN_00570ca0(pCVar2);
    local_10 = 7.25;
    local_40.x = (int)ROUND(256f * 7.25);
    local_40.y = (int)ROUND(256f * 7.25);
    local_40.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_40);
    local_30.x = (int)ROUND(256f * -7.25);
    local_30.y = (int)ROUND(256f * 0.0);
    local_30.z = (int)ROUND(unaff_ESI * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_30);
    local_1c.z = (int)ROUND(256f * 0.0);
    local_10 = (float)(int)ROUND(-unaff_ESI * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_1c.z)
    ;
    local_1c.x = (int)ROUND(--unaff_ESI * 256f);
    local_1c.y = (int)ROUND(unaff_retaddr * 256f);
    local_1c.z = (int)ROUND((float)this_ptr * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_1c);
    pCVar1 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 2.3509887e-38;
    pCVar1->vertex_buffer_ptr->v = 0.0;
    pCVar1->vertex_buffer_ptr[1].u = 0.0;
    pCVar1->vertex_buffer_ptr[1].v = 0.0;
    pCVar1->vertex_buffer_ptr[2].u = 0.0;
    pCVar1->vertex_buffer_ptr[2].v = 2.3509887e-38;
    pCVar1->vertex_buffer_ptr[3].u = 2.3509887e-38;
    pCVar1->vertex_buffer_ptr[3].v = 2.3509887e-38;
    pCVar1 = g_CDemonRendererPtr;
    fVar4 = (float)((this_ptr->current_frame * 0xffff) / this_ptr->total_frames);
    if (0xffff < (int)fVar4) {
      fVar4 = 9.18341e-41;
    }
    g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = 0.0;
    pCVar1->vertex_buffer_ptr[1].w_recip = fVar4;
    pCVar1->vertex_buffer_ptr[2].w_recip = 0.0;
    pCVar1->vertex_buffer_ptr[3].w_recip = 0.0;
    iVar3 = 0;
    do {
      pCVar1 = g_CDemonRendererPtr;
      *(int *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar3) =
           (this_ptr->color).r << 8;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = (this_ptr->color).g << 8;
      iVar5 = iVar3 + 0x30;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = (this_ptr->color).b << 8;
      iVar3 = iVar5;
    } while (iVar5 != 0xc0);
    local_40.x = 0;
    local_40.z = 2;
    local_34 = 3;
    local_40.y = 1;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar1,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_LoadingMoonGlowTexture);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0,0x327);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
              (&g_LoadingMoonModel,(CKeyFramedModelInstance *)0x0,0,0x205);
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
    }
    g_CDemonSetPtr->rendering_mode = 0;
    pCStack00000038 = g_ThemeFont;
    iVar3 = (g_WindowWidth * 0x240) / 0x280;
    iVar5 = (g_WindowHeight * 0x18) / 0x1e0;
    iVar6 = (g_WindowWidth << 5) / 0x280;
    pCStack00000034 = (CBitFont *)((g_WindowHeight * 0x1c0) / 0x1e0);
    iVar7 = this_ptr->current_frame + 1;
    this_ptr->current_frame = iVar7;
    if (this_ptr->total_frames < iVar7) {
      this_ptr->current_frame = this_ptr->total_frames;
    }
    if (this_ptr->use_custom_viewport == 0) {
      engine_2d_c_fillRectColor_FUN_00403170
                (iVar6 + -1,(int)((int)&pCStack00000034[-1].win_font_helper + 3),iVar3 + 1 + iVar6,
                 (int)(pCStack00000034->bitmap_files + -1) + 0x4d + iVar5,0);
      if (in_stack_00000048 != (char *)0x0) {
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                          (in_stack_00000030,in_stack_00000048);
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (pCStack00000034,in_stack_00000048,(iVar6 + iVar3 / 2) - iVar7 / 2,
                   (int)in_stack_00000030 + (iVar5 / 2 - pCStack00000034->max_char_width / 2),0xf8,
                   -1);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  return;
}
