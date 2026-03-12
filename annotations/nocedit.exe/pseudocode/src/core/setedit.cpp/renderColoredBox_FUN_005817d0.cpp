// Name: core_setedit.cpp_renderColoredBox_FUN_005817d0
// Address: 005817d0
// Address Range: [[005817d0, 00581a96]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_renderColoredBox_FUN_005817d0(CVector3f *corner_a,CVector3f *corner_b,float opacity,int r,int g,int b)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_setedit_cpp_renderColoredBox_FUN_005817d0(CVector3f *corner_a,CVector3f *corner_b,float opacity,int r,int g,int b)

{
  CVector3f *pCVar2;
  CVector3f *pCVar1;
  int iVar2;
  uint uVar3;
  float local_60;
  SMRGLHeaderPrimitive local_54;
  CVector3i local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CDemonRenderer *this_ptr;
  
  local_14 = (int)ROUND(ROUND(opacity * 65535.0f));
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if (0xffff < local_14) {
    local_14 = 0xffff;
  }
  uVar3 = 0;
  do {
    local_60 = corner_b->x;
    iVar2 = uVar3 * 0x30;
    while( true ) {
      local_2c.x = (int)ROUND(ROUND(local_60 * (float)256));
      pCVar2 = corner_b;
      if ((uVar3 & 2) != 0) {
        pCVar2 = corner_a;
      }
      local_2c.y = (int)ROUND(ROUND(pCVar2->y * (float)256));
      pCVar1 = corner_b;
      if ((uVar3 & 4) != 0) {
        pCVar1 = corner_a;
      }
      local_2c.z = (int)ROUND(ROUND(pCVar1->z * (float)256));
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar2),&local_2c);
      this_ptr = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->u + iVar2) = 0x80000;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->v + iVar2) = 0x80000;
      *(int *)((int)&this_ptr->vertex_buffer_ptr->r + iVar2) = r << 8;
      *(int *)((int)&this_ptr->vertex_buffer_ptr->g + iVar2) = g << 8;
      *(int *)((int)&this_ptr->vertex_buffer_ptr->b + iVar2) = b << 8;
      uVar3 = uVar3 + 1;
      *(int *)((int)&this_ptr->vertex_buffer_ptr->a + iVar2) = local_14;
      if (7 < (int)uVar3) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr,&g_SolidWhiteTexture)
        ;
        local_54.surface_normal.D = 0;
        local_54.surface_normal.C = 0;
        local_54.surface_normal.B = 0;
        local_54.surface_normal.A = 0;
        local_54.base.count = 4;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&local_54);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&local_54);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&local_54);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&local_54);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&local_54);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&local_54);
        return;
      }
      if ((uVar3 & 1) == 0) break;
      local_60 = corner_a->x;
      iVar2 = iVar2 + 0x30;
    }
  } while( true );
}
