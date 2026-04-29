// Name: core_level.cpp_CLevelLoader_update_FUN_00504160
// Address: 00504160
// Address Range: [[00504160, 0050471f]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_update_FUN_00504160(CLevelLoader *this_ptr,char *text,int clear_screen)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_update_FUN_00504160(CLevelLoader *this_ptr,char *text,int clear_screen)

{
  CDemonRenderer *pCVar3;
  CDemonSet *this_ptr_00;
  CBitFont *this_ptr_01;
  int iVar3;
  int iVar7;
  int iVar8;
  int iVar4;
  int iVar9;
  int iVar5;
  int iVar10;
  int iVar6;
  SMRGLPrimitiveQuadIndex local_88;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  float local_18;
  int local_14;
  CBitFont *local_10;
  CDemonRenderer *pCVar1;
  CDemonSet *pCVar2;
  
  if (this_ptr->enabled != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0);
    }
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                (g_CDemonRendererPtr2,this_ptr->viewport_x,this_ptr->viewport_y,
                 this_ptr->viewport_width,this_ptr->viewport_height);
    }
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    local_18 = 56.0;
    if (this_ptr->use_custom_viewport != 0) {
      local_18 = 84.0;
    }
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,local_18)
    ;
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    local_24.x = 0.0;
    local_24.y = 0.0;
    local_24.z = 36.0;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_24);
    g_CDemonSetPtr->rendering_mode = 1;
    iVar6 = 0x8000 - (this_ptr->current_frame << 0xf) / this_ptr->total_frames;
    iVar3 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(iVar6);
    pCVar2 = g_CDemonSetPtr;
    (g_CDemonSetPtr->light_direction).y = -37000;
    (pCVar2->light_direction).x =
         (uint)((longlong)iVar3 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
    iVar7 = engine_matrix_c_interpolatedCos_FUN_0050c600(iVar6);
    this_ptr_00 = g_CDemonSetPtr;
    g_CDemonSetPtr->ambient_base_quick = 0x280;
    (this_ptr_00->light_direction).z =
         (uint)((longlong)iVar7 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar7 * 37000) >> 0x20) << 0x10;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0
              (this_ptr_00,(this_ptr->color).r << 8,(this_ptr->color).g << 8,
               (this_ptr->color).b << 8);
    local_60.x = (int)ROUND(256.0f * 7.25);
    local_60.y = (int)ROUND(256.0f * 7.25);
    local_60.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_60);
    local_54.x = (int)ROUND(256.0f * -7.25);
    local_54.y = (int)ROUND(256.0f * 7.25);
    local_54.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_54);
    local_3c.x = (int)ROUND(256.0f * -7.25);
    local_3c.y = (int)ROUND(256.0f * -7.25);
    local_3c.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_48.x = (int)ROUND(256.0f * 7.25);
    local_48.y = (int)ROUND(256.0f * -7.25);
    local_48.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_48);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x1000000;
    pCVar1->vertex_buffer_ptr->v = 0;
    pCVar1->vertex_buffer_ptr[1].u = 0;
    pCVar1->vertex_buffer_ptr[1].v = 0;
    pCVar1->vertex_buffer_ptr[2].u = 0;
    pCVar1->vertex_buffer_ptr[2].v = 0x1000000;
    pCVar1->vertex_buffer_ptr[3].u = 0x1000000;
    pCVar1->vertex_buffer_ptr[3].v = 0x1000000;
    pCVar3 = g_CDemonRendererPtr2;
    iVar7 = (this_ptr->current_frame * 0xffff) / this_ptr->total_frames;
    if (0xffff < iVar7) {
      iVar7 = 0xffff;
    }
    g_CDemonRendererPtr2->vertex_buffer_ptr->a = 0;
    pCVar3->vertex_buffer_ptr[1].a = iVar7;
    pCVar3->vertex_buffer_ptr[2].a = 0;
    pCVar3->vertex_buffer_ptr[3].a = 0;
    iVar7 = 0;
    do {
      pCVar3 = g_CDemonRendererPtr2;
      *(int *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar7) = (this_ptr->color).r << 8;
      *(int *)((int)&pCVar3->vertex_buffer_ptr->g + iVar7) = (this_ptr->color).g << 8;
      iVar8 = iVar7 + 0x30;
      *(int *)((int)&pCVar3->vertex_buffer_ptr->b + iVar7) = (this_ptr->color).b << 8;
      iVar7 = iVar8;
    } while (iVar8 != 0xc0);
    local_88.base.surface_normal.D.i = 0;
    local_88.base.surface_normal.C.i = 0;
    local_88.base.surface_normal.B.i = 0;
    local_88.base.surface_normal.A.i = 0;
    local_88.vertices[0] = 0;
    local_88.base.base.count = 4;
    local_88.vertices[2] = 2;
    local_88.vertices[3] = 3;
    local_88.vertices[1] = 1;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar3,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_LoadingMoonGlowTexture);
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr2,&local_88.base,0x327);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
              (&g_LoadingMoonModel,0,(CKeyFramedModelInstance *)0x0,0x205);
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
    }
    g_CDemonSetPtr->rendering_mode = 0;
    this_ptr_01 = g_ThemeFont;
    iVar7 = (g_WindowWidth * 0x240) / 0x280;
    iVar8 = (g_WindowHeight * 0x18) / 0x1e0;
    iVar4 = (g_WindowWidth << 5) / 0x280;
    iVar9 = (g_WindowHeight * 0x1c0) / 0x1e0;
    iVar5 = this_ptr->current_frame + 1;
    this_ptr->current_frame = iVar5;
    if (this_ptr->total_frames < iVar5) {
      this_ptr->current_frame = this_ptr->total_frames;
    }
    if (this_ptr->use_custom_viewport == 0) {
      engine_2d_c_fillRectColor_FUN_00403170
                (iVar4 + -1,iVar9 + -1,iVar7 + 1 + iVar4,iVar9 + iVar8 + 1,0);
      if (text != (char *)0x0) {
        iVar10 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr_01,text);
        engine_font_cpp_CBitFont_drawText_FUN_004cda80
                  (this_ptr_01,text,(iVar4 + iVar7 / 2) - iVar10 / 2,
                   (iVar9 + iVar8 / 2) - this_ptr_01->max_char_height / 2,0xf8,-1);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  return;
}
