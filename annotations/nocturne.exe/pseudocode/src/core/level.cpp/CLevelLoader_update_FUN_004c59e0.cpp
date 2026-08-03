// Name: core_level.cpp_CLevelLoader_update_FUN_004c59e0
// Address: 004c59e0
// Address Range: [[004c59e0, 004c5f9f]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader *this_ptr,char *text,int clear_screen)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_level_cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader *this_ptr,char *text,int clear_screen)

{
  CDemonRenderer *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive local_88;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
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
  
  if (this_ptr->enabled != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_00403e60(0,0,DAT_005b761c + -1,DAT_005b7620 + -1,0);
    }
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
                (DAT_005ae704,this_ptr->viewport_x,this_ptr->viewport_y,this_ptr->viewport_width,
                 this_ptr->viewport_height);
    }
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
              (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
    local_18 = 56.0;
    if (this_ptr->use_custom_viewport != 0) {
      local_18 = 84.0;
    }
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,local_18);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
              (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
    local_24.x = 0.0;
    local_24.y = 0.0;
    local_24.z = 36.0;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&local_24);
    g_CDemonSet_PTR_005be368->rendering_mode = 1;
    iVar6 = 0x8000 - (this_ptr->current_frame << 0xf) / this_ptr->total_frames;
    iVar3 = engine_matrix_c_interpolatedSin_FUN_004cca60(iVar6);
    pCVar2 = g_CDemonSet_PTR_005be368;
    (g_CDemonSet_PTR_005be368->light_direction).y = -37000;
    (pCVar2->light_direction).x =
         (uint)((longlong)iVar3 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
    iVar3 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(iVar6);
    pCVar2 = g_CDemonSet_PTR_005be368;
    g_CDemonSet_PTR_005be368->ambient_base_quick = 0x280;
    (pCVar2->light_direction).z =
         (uint)((longlong)iVar3 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
              (pCVar2,(this_ptr->color).r << 8,(this_ptr->color).g << 8,(this_ptr->color).b << 8);
    local_30 = 7.25;
    local_2c = 7.25;
    local_28 = 0.0;
    local_60.x = (int)ROUND(_DAT_0059fbfc * 7.25);
    local_60.y = (int)ROUND(_DAT_0059fbfc * 7.25);
    local_60.z = (int)ROUND(_DAT_0059fbfc * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_60);
    local_30 = -local_30;
    local_54.x = (int)ROUND(local_30 * _DAT_0059fbfc);
    local_54.y = (int)ROUND(local_2c * _DAT_0059fbfc);
    local_54.z = (int)ROUND(local_28 * _DAT_0059fbfc);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_54);
    local_2c = -local_2c;
    local_3c.x = (int)ROUND(local_30 * _DAT_0059fbfc);
    local_3c.y = (int)ROUND(local_2c * _DAT_0059fbfc);
    local_3c.z = (int)ROUND(local_28 * _DAT_0059fbfc);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_30 = -local_30;
    local_48.x = (int)ROUND(local_30 * _DAT_0059fbfc);
    local_48.y = (int)ROUND(local_2c * _DAT_0059fbfc);
    local_48.z = (int)ROUND(local_28 * _DAT_0059fbfc);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_48);
    pCVar1 = DAT_005ae704;
    DAT_005ae704->vertex_buffer_ptr->u = 0x1000000;
    pCVar1->vertex_buffer_ptr->v = 0;
    pCVar1->vertex_buffer_ptr[1].u = 0;
    pCVar1->vertex_buffer_ptr[1].v = 0;
    pCVar1->vertex_buffer_ptr[2].u = 0;
    pCVar1->vertex_buffer_ptr[2].v = 0x1000000;
    pCVar1->vertex_buffer_ptr[3].u = 0x1000000;
    pCVar1->vertex_buffer_ptr[3].v = 0x1000000;
    pCVar1 = DAT_005ae704;
    iVar3 = (this_ptr->current_frame * 0xffff) / this_ptr->total_frames;
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    DAT_005ae704->vertex_buffer_ptr->a = 0;
    pCVar1->vertex_buffer_ptr[1].a = iVar3;
    pCVar1->vertex_buffer_ptr[2].a = 0;
    pCVar1->vertex_buffer_ptr[3].a = 0;
    iVar3 = 0;
    do {
      pCVar1 = DAT_005ae704;
      *(int *)((int)&DAT_005ae704->vertex_buffer_ptr->r + iVar3) = (this_ptr->color).r << 8;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->g + iVar3) = (this_ptr->color).g << 8;
      iVar6 = iVar3 + 0x30;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->b + iVar3) = (this_ptr->color).b << 8;
      iVar3 = iVar6;
    } while (iVar6 != 0xc0);
    local_88.surface_normal.D.i = 0;
    local_88.surface_normal.C.i = 0;
    local_88.surface_normal.B.i = 0;
    local_88.surface_normal.A.i = 0;
    local_70 = 0;
    local_88.base.count = 4;
    local_68 = 2;
    local_64 = 3;
    local_6c = 1;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(pCVar1,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005baca4);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
              (DAT_005ae704,&local_88,0x327);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
              (&g_CKeyFramedModel_01cc3290,0,(CKeyFramedModelInstance *)0x0,0x205);
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70();
    }
    g_CDemonSet_PTR_005be368->rendering_mode = 0;
    local_10 = g_CBitFont_PTR_014b9900;
    iVar3 = (DAT_005b761c * 0x240) / 0x280;
    iVar6 = (DAT_005b7620 * 0x18) / 0x1e0;
    iVar4 = (DAT_005b761c << 5) / 0x280;
    local_14 = (DAT_005b7620 * 0x1c0) / 0x1e0;
    iVar5 = this_ptr->current_frame + 1;
    this_ptr->current_frame = iVar5;
    if (this_ptr->total_frames < iVar5) {
      this_ptr->current_frame = this_ptr->total_frames;
    }
    if (this_ptr->use_custom_viewport == 0) {
      engine_2d_c_fillRectColor_FUN_00403e60
                (iVar4 + -1,local_14 + -1,iVar3 + 1 + iVar4,local_14 + iVar6 + 1,0);
      if (text != (char *)0x0) {
        iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_10,text);
        engine_font_cpp_CBitFont_drawText_FUN_00490980
                  (local_10,text,(iVar4 + iVar3 / 2) - iVar5 / 2,
                   (local_14 + iVar6 / 2) - local_10->max_char_height / 2,0xf8,-1);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  }
  return;
}
