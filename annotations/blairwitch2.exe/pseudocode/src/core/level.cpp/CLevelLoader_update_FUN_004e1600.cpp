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
  float10 fVar5;
  int iVar6;
  int iVar7;
  CVector3i local_64;
  CVector3i local_58;
  CVector3i local_4c;
  CVector3f local_40;
  CVector3i local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(this_ptr + 0xc) != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,DAT_006141b8 + -1,DAT_006141bc + -1,0);
    }
    local_1c = (float)*(int *)this_ptr / (float)*(int *)(this_ptr + 4);
    engine_2d_c_fillRectColor_FUN_004031c0(0,0,DAT_006141b8,0x14,0);
    engine_2d_c_fillRectColor_FUN_004031c0(1,1,DAT_006141b8 + -1,0x13,0);
    local_c = DAT_006141b8 + -2;
    iVar7 = 4;
    fVar5 = (float10)local_c * (float10)local_1c;
    iVar6 = 0x12;
    round();
    local_c = (int)ROUND(fVar5);
    engine_2d_c_fillRectColor_FUN_004031c0(2,2,local_c,iVar6,iVar7);
    if (*(int *)(this_ptr + 0x110) != 0) {
      engine_matrix_c_FUN_0046b710
                (DAT_0060b280,*(uint *)(this_ptr + 0x114),*(uint *)(this_ptr + 0x118),
                 *(uint *)(this_ptr + 0x11c),*(uint *)(this_ptr + 0x120));
    }
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    local_18 = 0x42600000;
    if (*(int *)(this_ptr + 0x110) != 0) {
      local_18 = 0x42a80000;
    }
    engine_matrix_c_FUN_0046b4b0(DAT_0060b280,local_18);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    local_40.x = 0.0;
    local_40.y = 0.0;
    local_40.z = 36.0;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,&local_40);
    g_CDemonSetPtr->rendering_mode = 1;
    iVar7 = 0x8000 - (*(int *)this_ptr << 0xf) / *(int *)(this_ptr + 4);
    iVar6 = engine_matrix_c_FUN_004e86b0(iVar7);
    pCVar2 = g_CDemonSetPtr;
    (g_CDemonSetPtr->light_direction).y = -37000;
    (pCVar2->light_direction).x =
         (uint)((longlong)iVar6 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar6 * 37000) >> 0x20) << 0x10;
    iVar6 = engine_matrix_c_FUN_004e86f0(iVar7);
    pCVar2 = g_CDemonSetPtr;
    g_CDemonSetPtr->ambient_base_quick = 0x280;
    (pCVar2->light_direction).z =
         (uint)((longlong)iVar6 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar6 * 37000) >> 0x20) << 0x10;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0
              (pCVar2,*(int *)(this_ptr + 0x124) << 8,*(int *)(this_ptr + 0x128) << 8,
               *(int *)(this_ptr + 300) << 8);
    local_20 = 0.0;
    local_28 = 7.25;
    local_24 = 7.25;
    local_58.x = (int)ROUND(_DAT_005f945c * 7.25);
    local_58.y = (int)ROUND(_DAT_005f945c * 7.25);
    local_58.z = (int)ROUND(_DAT_005f945c * 0.0);
    engine_special_cpp_FUN_0055d723((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&local_58);
    local_28 = -local_28;
    local_64.x = (int)ROUND(local_28 * _DAT_005f945c);
    local_64.y = (int)ROUND(local_24 * _DAT_005f945c);
    local_64.z = (int)ROUND(local_20 * _DAT_005f945c);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&local_64);
    local_24 = -local_24;
    local_34.x = (int)ROUND(local_28 * _DAT_005f945c);
    local_34.y = (int)ROUND(local_24 * _DAT_005f945c);
    local_34.z = (int)ROUND(local_20 * _DAT_005f945c);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&local_34);
    local_28 = -local_28;
    local_4c.x = (int)ROUND(local_28 * _DAT_005f945c);
    local_4c.y = (int)ROUND(local_24 * _DAT_005f945c);
    local_4c.z = (int)ROUND(local_20 * _DAT_005f945c);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&local_4c);
    pCVar1 = DAT_0060b280;
    *(uint *)(DAT_0060b280->vertex_buffer_ptr + 0x18) = 0x1000000;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x1c) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x48) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x4c) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x78) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x7c) = 0x1000000;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xa8) = 0x1000000;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xac) = 0x1000000;
    pCVar1 = DAT_0060b280;
    iVar6 = (*(int *)this_ptr * 0xffff) / *(int *)(this_ptr + 4);
    if (0xffff < iVar6) {
      iVar6 = 0xffff;
    }
    *(uint *)(DAT_0060b280->vertex_buffer_ptr + 0x2c) = 0;
    *(int *)(pCVar1->vertex_buffer_ptr + 0x5c) = iVar6;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0x8c) = 0;
    *(uint *)(pCVar1->vertex_buffer_ptr + 0xbc) = 0;
    iVar6 = 0;
    do {
      pCVar1 = DAT_0060b280;
      *(int *)(DAT_0060b280->vertex_buffer_ptr + iVar6 + 0x20) = *(int *)(this_ptr + 0x124) << 8;
      *(int *)(pCVar1->vertex_buffer_ptr + iVar6 + 0x24) = *(int *)(this_ptr + 0x128) << 8;
      iVar7 = iVar6 + 0x30;
      *(int *)(pCVar1->vertex_buffer_ptr + iVar6 + 0x28) = *(int *)(this_ptr + 300) << 8;
      iVar6 = iVar7;
    } while (iVar7 != 0xc0);
    if (*(int *)(this_ptr + 0x110) != 0) {
      engine_matrix_c_popViewport_FUN_0046b740();
    }
    g_CDemonSetPtr->rendering_mode = 0;
    local_14 = _DAT_01511cc0;
    iVar7 = (DAT_006141b8 * 0x240) / 0x280;
    iVar3 = (DAT_006141bc * 0x18) / 0x1e0;
    iVar4 = (DAT_006141b8 << 5) / 0x280;
    local_10 = (DAT_006141bc * 0x1c0) / 0x1e0;
    iVar6 = *(int *)this_ptr;
    *(int *)this_ptr = iVar6 + 1;
    if (*(int *)(this_ptr + 4) < iVar6 + 1) {
      *(int *)this_ptr = *(int *)(this_ptr + 4);
    }
    if (*(int *)(this_ptr + 0x110) == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (iVar4 + -1,local_10 + -1,iVar7 + 1 + iVar4,local_10 + iVar3 + 1,0);
      if (text != (char *)0x0) {
        iVar6 = engine_font_cpp_FUN_004aaf00(local_14,text);
        engine_font_cpp_FUN_004a8df0
                  (local_14,text,(iVar4 + iVar7 / 2) - iVar6 / 2,
                   (local_10 + iVar3 / 2) - *(int *)(local_14 + 0x41ec) / 2,0xf8,0xffffffff);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  }
  return;
}
