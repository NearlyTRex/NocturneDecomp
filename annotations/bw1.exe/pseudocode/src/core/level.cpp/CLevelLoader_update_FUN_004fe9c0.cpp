// Name: core_level.cpp_CLevelLoader_update_FUN_004fe9c0
// Address: 004fe9c0
// Address Range: [[004fe9c0, 004fef94]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_update_FUN_004fe9c0(CLevelLoader *this_ptr,char *text,int clear_screen)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_level_cpp_CLevelLoader_update_FUN_004fe9c0(CLevelLoader *this_ptr,char *text,int clear_screen)

{
  CDemonRenderer *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive local_84;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  uint local_14;
  int local_10;
  CBitFont *local_c;
  
  if (this_ptr->enabled != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,DAT_0061b498 + -1,DAT_0061b49c + -1,0);
    }
    if (DAT_0061b49c == 0x1e0) {
      if (this_ptr->use_custom_viewport != 0) {
        engine_drender_cpp_FUN_00483c10
                  (DAT_00612560,this_ptr->viewport_x,this_ptr->viewport_y,this_ptr->viewport_width,
                   this_ptr->viewport_height);
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
                (DAT_00612560,(CVector3f *)&DAT_02c8af28);
      local_14 = 0x42600000;
      if (this_ptr->use_custom_viewport != 0) {
        local_14 = 0x42a80000;
      }
      engine_drender_cpp_FUN_004839b0(DAT_00612560,local_14);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
                (DAT_00612560,(CVector3f *)&DAT_02c8af28);
      local_20.z = 36.0;
      local_20.x = 0.0;
      local_20.y = 0.0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,&local_20);
      g_CDemonSetPtr->rendering_mode = 1;
      iVar6 = 0x8000 - (this_ptr->current_frame << 0xf) / this_ptr->total_frames;
      iVar3 = engine_matrix_c_FUN_00507350(iVar6);
      pCVar2 = g_CDemonSetPtr;
      (g_CDemonSetPtr->light_direction).y = -37000;
      (pCVar2->light_direction).x =
           (uint)((longlong)iVar3 * 37000) >> 0x10 |
           (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
      iVar3 = engine_matrix_c_FUN_00507390(iVar6);
      pCVar2 = g_CDemonSetPtr;
      g_CDemonSetPtr->ambient_base_quick = 0x280;
      (pCVar2->light_direction).z =
           (uint)((longlong)iVar3 * 37000) >> 0x10 |
           (int)((ulonglong)((longlong)iVar3 * 37000) >> 0x20) << 0x10;
      core_set_cpp_CDemonSet_setFlatColor_FUN_00555770
                (pCVar2,(this_ptr->color).r << 8,(this_ptr->color).g << 8,(this_ptr->color).b << 8);
      local_2c = 7.25;
      local_28 = 7.25;
      local_24 = 0.0;
      local_5c.x = (int)ROUND(_DAT_00602eac * 7.25);
      local_5c.y = (int)ROUND(_DAT_00602eac * 7.25);
      local_5c.z = (int)ROUND(_DAT_00602eac * 0.0);
      engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_5c);
      local_2c = -local_2c;
      local_50.x = (int)ROUND(local_2c * _DAT_00602eac);
      local_50.y = (int)ROUND(local_28 * _DAT_00602eac);
      local_50.z = (int)ROUND(local_24 * _DAT_00602eac);
      engine_special_cpp_FUN_00580173
                (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_50);
      local_28 = -local_28;
      local_38.x = (int)ROUND(local_2c * _DAT_00602eac);
      local_38.y = (int)ROUND(local_28 * _DAT_00602eac);
      local_38.z = (int)ROUND(local_24 * _DAT_00602eac);
      engine_special_cpp_FUN_00580173
                (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_38);
      local_2c = -local_2c;
      local_44.x = (int)ROUND(local_2c * _DAT_00602eac);
      local_44.y = (int)ROUND(local_28 * _DAT_00602eac);
      local_44.z = (int)ROUND(local_24 * _DAT_00602eac);
      engine_special_cpp_FUN_00580173
                (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_44);
      pCVar1 = DAT_00612560;
      DAT_00612560->vertex_buffer_ptr->u = 0x1000000;
      pCVar1->vertex_buffer_ptr->v = 0;
      pCVar1->vertex_buffer_ptr[1].u = 0;
      pCVar1->vertex_buffer_ptr[1].v = 0;
      pCVar1->vertex_buffer_ptr[2].u = 0;
      pCVar1->vertex_buffer_ptr[2].v = 0x1000000;
      pCVar1->vertex_buffer_ptr[3].u = 0x1000000;
      pCVar1->vertex_buffer_ptr[3].v = 0x1000000;
      pCVar1 = DAT_00612560;
      iVar3 = (this_ptr->current_frame * 0xffff) / this_ptr->total_frames;
      if (0xffff < iVar3) {
        iVar3 = 0xffff;
      }
      DAT_00612560->vertex_buffer_ptr->a = 0;
      pCVar1->vertex_buffer_ptr[1].a = iVar3;
      pCVar1->vertex_buffer_ptr[2].a = 0;
      pCVar1->vertex_buffer_ptr[3].a = 0;
      iVar3 = 0;
      do {
        pCVar1 = DAT_00612560;
        *(int *)((int)&DAT_00612560->vertex_buffer_ptr->r + iVar3) = (this_ptr->color).r << 8;
        *(int *)((int)&pCVar1->vertex_buffer_ptr->g + iVar3) = (this_ptr->color).g << 8;
        iVar6 = iVar3 + 0x30;
        *(int *)((int)&pCVar1->vertex_buffer_ptr->b + iVar3) = (this_ptr->color).b << 8;
        iVar3 = iVar6;
      } while (iVar6 != 0xc0);
      local_84.surface_normal.D.i = 0;
      local_84.surface_normal.C.i = 0;
      local_84.surface_normal.B.i = 0;
      local_84.surface_normal.A.i = 0;
      local_6c = 0;
      local_84.base.count = 4;
      local_64 = 2;
      local_60 = 3;
      local_68 = 1;
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(pCVar1,1);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061f2e4);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
                (DAT_00612560,&local_84,0x327);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
                (&g_LoadingMoonModel,0,(CKeyFramedModelInstance *)0x0,0x205);
      if (this_ptr->use_custom_viewport != 0) {
        engine_drender_cpp_popViewport_FUN_00483c40();
      }
      g_CDemonSetPtr->rendering_mode = 0;
      local_c = _DAT_0152d244;
      iVar3 = (DAT_0061b498 * 0x240) / 0x280;
      iVar6 = (DAT_0061b49c * 0x18) / 0x1e0;
      iVar4 = (DAT_0061b498 << 5) / 0x280;
      local_10 = (DAT_0061b49c * 0x1c0) / 0x1e0;
      iVar5 = this_ptr->current_frame + 1;
      this_ptr->current_frame = iVar5;
      if (this_ptr->total_frames < iVar5) {
        this_ptr->current_frame = this_ptr->total_frames;
      }
      if (this_ptr->use_custom_viewport == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0
                  (iVar4 + -1,local_10 + -1,iVar3 + 1 + iVar4,local_10 + iVar6 + 1,0);
        if (text != (char *)0x0) {
          iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_c,text);
          engine_font_cpp_FUN_004c1dd0
                    (local_c,text,(iVar4 + iVar3 / 2) - iVar5 / 2,
                     (local_10 + iVar6 / 2) - local_c->max_char_height / 2,0xf8,0xffffffff);
        }
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    }
  }
  return;
}
