// Name: core_fire.cpp_CGunFlame_render_FUN_004c50b0
// Address: 004c50b0
// Address Range: [[004c50b0, 004c55ef]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CDemonRenderer *this_ptr_00;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_d0;
  SMRGLHeaderPrimitive local_c4;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [3];
  CVector3i local_84;
  float local_78;
  float local_74;
  float local_70;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48 [2];
  float local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  if (*(float *)this_ptr->unk <= 0.0) {
    return;
  }
  local_28 = (float)(int)ROUND(ROUND(*(float *)(this_ptr->unk + 0x1c)));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_GunFlameTextures + (int)local_28);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)(this_ptr->unk + 4));
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)&local_84);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_84,(CVector3i *)0x0);
  fVar11 = ((float10)2.0f - (float10)*(float *)this_ptr->unk) / (float10)2.0f;
  fVar1 = (float)fVar11;
  fVar2 = (float)(fVar11 * (float10)4 + (float10)0.40000000000000002);
  local_d0 = fVar2;
  if ((float10)(double)fVar11 < (float10)0.40000000000000002) {
    pfVar7 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                       (g_CDemonRendererPtr2,local_90);
    local_9c = *pfVar7 - ((CVector3f *)(this_ptr->unk + 4))->x;
    fVar8 = (float10)pfVar7[1] - (float10)*(float *)(this_ptr->unk + 8);
    local_98 = (float)fVar8;
    fVar9 = (float10)pfVar7[2] - (float10)*(float *)(this_ptr->unk + 0xc);
    local_94 = (float)fVar9;
    fVar10 = (float10)*(float *)(this_ptr->unk + 0x10);
    local_d0 = (float)(((float10)1 +
                       ((float10)1 -
                       ABS((float10)local_94 * (float10)*(float *)(this_ptr->unk + 0x18) +
                           (float10)local_9c * (float10)*(float *)(this_ptr->unk + 0x10) +
                           (float10)local_98 * (float10)*(float *)(this_ptr->unk + 0x14)) /
                       (SQRT((float10)*(float *)(this_ptr->unk + 0x18) *
                             (float10)*(float *)(this_ptr->unk + 0x18) +
                             fVar10 * fVar10 +
                             (float10)*(float *)(this_ptr->unk + 0x14) *
                             (float10)*(float *)(this_ptr->unk + 0x14)) *
                       SQRT(fVar9 * (float10)local_94 +
                            (float10)local_9c * (float10)local_9c + fVar8 * (float10)local_98))) *
                       ((float10)1 - (float10)(double)fVar11 * (float10)2.5) *
                       (float10)2) * (float10)fVar2);
  }
  local_74 = fVar2 * 128.0f * (float)0.00390625;
  local_78 = -local_d0 * 128.0f * (float)0.00390625;
  local_70 = 0.0;
  local_48[0].x = (int)ROUND(local_78 * 256.0f);
  local_48[0].y = (int)ROUND(local_74 * 256.0f);
  local_48[0].z = (int)ROUND(256.0f * 0.0);
  local_28 = local_78;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,local_48);
  local_78 = local_d0 * (float)128 * (float)0.00390625;
  local_54.x = (int)ROUND(local_78 * 256.0f);
  local_54.y = (int)ROUND(local_74 * 256.0f);
  local_54.z = (int)ROUND(local_70 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_54);
  local_74 = -fVar2 * (float)128 * (float)0.00390625;
  local_60.x = (int)ROUND(local_78 * 256.0f);
  local_60.y = (int)ROUND(local_74 * 256.0f);
  local_60.z = (int)ROUND(local_70 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_60);
  local_78 = local_28;
  local_6c.x = (int)ROUND(local_28 * 256.0f);
  local_6c.y = (int)ROUND(local_74 * 256.0f);
  local_6c.z = (int)ROUND(local_70 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_6c);
  this_ptr_00 = g_CDemonRendererPtr2;
  fVar2 = (2.0f - fVar1) * fVar1;
  fVar5 = (1.0 - fVar1) * 32768.0f;
  fVar1 = fVar2 * 200.0f;
  fVar3 = fVar2 * 150.0f;
  fVar4 = fVar2 * 50.0f;
  g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x20000;
  fVar2 = (1.0 - fVar2) * 255.0f;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  fVar6 = 256.0f;
  fVar1 = (fVar1 + fVar2) * 256.0f;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x20000;
  local_20 = (int)ROUND(ROUND(fVar1));
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  local_24 = (int)ROUND(ROUND((fVar3 + fVar2) * fVar6));
  this_ptr_00->vertex_buffer_ptr->light = local_20;
  local_18 = (int)ROUND(ROUND(fVar6 * (fVar4 + fVar2)));
  this_ptr_00->vertex_buffer_ptr->color = local_24;
  local_1c = (float)(int)ROUND(ROUND(fVar5));
  this_ptr_00->vertex_buffer_ptr->fog = local_18;
  this_ptr_00->vertex_buffer_ptr->w_recip = local_1c;
  this_ptr_00->vertex_buffer_ptr[1].light = local_20;
  this_ptr_00->vertex_buffer_ptr[1].color = local_24;
  this_ptr_00->vertex_buffer_ptr[1].fog = local_18;
  this_ptr_00->vertex_buffer_ptr[1].w_recip = local_1c;
  this_ptr_00->vertex_buffer_ptr[2].light = local_20;
  this_ptr_00->vertex_buffer_ptr[2].color = local_24;
  this_ptr_00->vertex_buffer_ptr[2].fog = local_18;
  this_ptr_00->vertex_buffer_ptr[2].w_recip = local_1c;
  this_ptr_00->vertex_buffer_ptr[3].light = local_20;
  this_ptr_00->vertex_buffer_ptr[3].color = local_24;
  this_ptr_00->vertex_buffer_ptr[3].fog = local_18;
  this_ptr_00->vertex_buffer_ptr[3].w_recip = local_1c;
  local_c4.surface_normal.D = 0;
  local_c4.surface_normal.C = 0;
  local_c4.surface_normal.B = 0;
  local_c4.surface_normal.A = 0;
  local_ac = 0;
  local_a4 = 2;
  local_c4.base.count = 4;
  local_a0 = 3;
  local_a8 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&local_c4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
