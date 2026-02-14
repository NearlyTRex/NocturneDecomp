// Name: core_setedit.cpp_FUN_005817d0
// Address: 005817d0
// Address Range: [[005817d0, 00581a96]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_005817d0(void *unk)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_005817d0(void *unk)

{
  CDemonRenderer *pCVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  float *in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  SMRGLHeaderPrimitive SStack_64;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_38;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  SStack_64.base.type = 0x5817ea;
  dVar5 = round((double)(in_stack_0000000c * 65535.0f));
  local_18 = (int)ROUND(dVar5);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (0xffff < local_18) {
    local_18 = 0xffff;
  }
  local_24 = in_stack_00000010 << 8;
  local_20 = in_stack_00000014 << 8;
  local_1c = in_stack_00000018 << 8;
  uVar4 = 0;
  do {
    SStack_64.base.type = (int)*in_stack_00000008;
    iVar3 = uVar4 * 0x30;
    while( true ) {
      dVar5 = round
                        ((double)((float)SStack_64.base.type * (float)256));
      local_38.y = (int)ROUND(dVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 2) != 0) {
        pfVar2 = unk;
      }
      SStack_64.base.type = (int)pfVar2[1];
      dVar5 = round
                        ((double)((float)SStack_64.base.type * (float)256));
      pCVar1 = g_CDemonRendererPtr2;
      local_38.y = (int)ROUND(dVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 4) != 0) {
        pfVar2 = unk;
      }
      SStack_64.base.type = (int)pfVar2[2];
      dVar5 = round
                        ((double)((float)SStack_64.base.type * (float)256));
      local_38.y = (int)ROUND(dVar5);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
                 &local_38);
      pCVar1 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->u + iVar3) = 0x80000;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar3) = 0x80000;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->light + iVar3) = local_38.z;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = local_2c;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = local_28;
      uVar4 = uVar4 + 1;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar3) = local_24;
      if (7 < (int)uVar4) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (pCVar1,&SMRGLTextureBasic_006816c0);
        SStack_64.surface_normal.D = 0;
        SStack_64.surface_normal.C = 0;
        SStack_64.surface_normal.B = 0;
        SStack_64.surface_normal.A = 0;
        local_4c = 0;
        local_44 = 6;
        SStack_64.base.count = 4;
        local_40 = 4;
        local_48 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&SStack_64);
        local_40 = 5;
        local_4c = 1;
        local_48 = 3;
        local_44 = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&SStack_64);
        local_4c = 0;
        local_48 = 1;
        local_44 = 3;
        local_40 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&SStack_64);
        local_4c = 4;
        local_48 = 5;
        local_44 = 7;
        local_40 = 6;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&SStack_64);
        local_4c = 2;
        local_40 = 6;
        local_48 = 3;
        local_44 = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&SStack_64);
        local_48 = 1;
        local_4c = 0;
        local_44 = 5;
        local_40 = 4;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr2,&SStack_64);
        return;
      }
      if ((uVar4 & 1) == 0) break;
      SStack_64.base.type = *(int *)unk;
      iVar3 = iVar3 + 0x30;
    }
  } while( true );
}
