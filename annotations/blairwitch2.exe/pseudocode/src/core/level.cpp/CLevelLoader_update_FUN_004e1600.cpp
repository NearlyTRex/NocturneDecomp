// Name: core_level.cpp_CLevelLoader_update_FUN_004e1600
// Address: 004e1600
// Address Range: [[004e1600, 004e1b77]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_update_FUN_004e1600(CLevelLoader *this_ptr,char *text,int clear_screen)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_level_cpp_CLevelLoader_update_FUN_004e1600(CLevelLoader *this_ptr,char *text,int clear_screen)

{
  CDemonRenderer *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3f local_44;
  CVector3i local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  CBitFont *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (this_ptr->enabled != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,DAT_006141b8 + -1,DAT_006141bc + -1,0);
    }
    local_1c = (float)this_ptr->current_frame / (float)this_ptr->total_frames;
    engine_2d_c_fillRectColor_FUN_004031c0(0,0,DAT_006141b8,0x14,0);
    engine_2d_c_fillRectColor_FUN_004031c0(1,1,DAT_006141b8 + -1,0x13,0);
    local_c = DAT_006141b8 + -2;
    iVar7 = 0x12;
    iVar6 = 0x4e1676;
    dVar5 = round((double)((float)local_c * local_1c));
    local_10 = (int)ROUND(dVar5);
    engine_2d_c_fillRectColor_FUN_004031c0(2,2,local_10,iVar6,iVar7);
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046b710
                (DAT_0060b280,this_ptr->viewport_x,this_ptr->viewport_y,this_ptr->viewport_width,
                 this_ptr->viewport_height);
    }
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    local_1c = 56.0;
    if (this_ptr->use_custom_viewport != 0) {
      local_1c = 84.0;
    }
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(DAT_0060b280,local_1c);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    local_44.x = 0.0;
    local_44.y = 0.0;
    local_44.z = 36.0;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,&local_44);
    g_CDemonSetPtr->rendering_mode = 1;
    iVar7 = 0x8000 - (this_ptr->current_frame << 0xf) / this_ptr->total_frames;
    iVar6 = engine_matrix_c_interpolatedSin_FUN_004e86b0(iVar7);
    pCVar2 = g_CDemonSetPtr;
    (g_CDemonSetPtr->light_direction).y = -37000;
    (pCVar2->light_direction).x =
         (uint)((longlong)iVar6 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar6 * 37000) >> 0x20) << 0x10;
    iVar6 = engine_matrix_c_interpolatedCos_FUN_004e86f0(iVar7);
    pCVar2 = g_CDemonSetPtr;
    g_CDemonSetPtr->ambient_base_quick = 0x280;
    (pCVar2->light_direction).z =
         (uint)((longlong)iVar6 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar6 * 37000) >> 0x20) << 0x10;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0
              (pCVar2,(this_ptr->color).r << 8,(this_ptr->color).g << 8,(this_ptr->color).b << 8);
    local_24 = 0.0;
    local_2c = 7.25;
    local_28 = 7.25;
    local_5c.x = (int)ROUND(_DAT_005f945c * 7.25);
    local_5c.y = (int)ROUND(_DAT_005f945c * 7.25);
    local_5c.z = (int)ROUND(_DAT_005f945c * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_5c);
    local_2c = -local_2c;
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffff98);
    local_28 = -local_28;
    local_38.x = (int)ROUND(local_2c * _DAT_005f945c);
    local_38.y = (int)ROUND(local_28 * _DAT_005f945c);
    local_38.z = (int)ROUND(local_24 * _DAT_005f945c);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_38);
    local_2c = -local_2c;
    local_50.x = (int)ROUND(local_2c * _DAT_005f945c);
    local_50.y = (int)ROUND(local_28 * _DAT_005f945c);
    local_50.z = (int)ROUND(local_24 * _DAT_005f945c);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_50);
    pCVar1 = DAT_0060b280;
    DAT_0060b280->vertex_buffer_ptr->u = 0x1000000;
    pCVar1->vertex_buffer_ptr->v = 0;
    pCVar1->vertex_buffer_ptr[1].u = 0;
    pCVar1->vertex_buffer_ptr[1].v = 0;
    pCVar1->vertex_buffer_ptr[2].u = 0;
    pCVar1->vertex_buffer_ptr[2].v = 0x1000000;
    pCVar1->vertex_buffer_ptr[3].u = 0x1000000;
    pCVar1->vertex_buffer_ptr[3].v = 0x1000000;
    pCVar1 = DAT_0060b280;
    iVar6 = (this_ptr->current_frame * 0xffff) / this_ptr->total_frames;
    if (0xffff < iVar6) {
      iVar6 = 0xffff;
    }
    DAT_0060b280->vertex_buffer_ptr->a = 0;
    pCVar1->vertex_buffer_ptr[1].a = iVar6;
    pCVar1->vertex_buffer_ptr[2].a = 0;
    pCVar1->vertex_buffer_ptr[3].a = 0;
    iVar6 = 0;
    do {
      pCVar1 = DAT_0060b280;
      *(int *)((int)&DAT_0060b280->vertex_buffer_ptr->r + iVar6) = (this_ptr->color).r << 8;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->g + iVar6) = (this_ptr->color).g << 8;
      iVar7 = iVar6 + 0x30;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->b + iVar6) = (this_ptr->color).b << 8;
      iVar6 = iVar7;
    } while (iVar7 != 0xc0);
    if (this_ptr->use_custom_viewport != 0) {
      engine_drender_cpp_popViewport_FUN_0046b740();
    }
    g_CDemonSetPtr->rendering_mode = 0;
    local_18 = _DAT_01511cc0;
    iVar6 = (DAT_006141b8 * 0x240) / 0x280;
    iVar7 = (DAT_006141bc * 0x18) / 0x1e0;
    iVar3 = (DAT_006141b8 << 5) / 0x280;
    local_14 = (DAT_006141bc * 0x1c0) / 0x1e0;
    iVar4 = this_ptr->current_frame + 1;
    this_ptr->current_frame = iVar4;
    if (this_ptr->total_frames < iVar4) {
      this_ptr->current_frame = this_ptr->total_frames;
    }
    if (this_ptr->use_custom_viewport == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (iVar3 + -1,local_14 + -1,iVar6 + 1 + iVar3,local_14 + iVar7 + 1,0);
      if (this_ptr != (CLevelLoader *)0x0) {
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(local_18,(char *)this_ptr);
        engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                  (local_18,(char *)this_ptr,(iVar3 + iVar6 / 2) - iVar4 / 2,
                   (local_14 + iVar7 / 2) - local_18->max_char_height / 2,0xf8,-1);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  }
  return;
}
