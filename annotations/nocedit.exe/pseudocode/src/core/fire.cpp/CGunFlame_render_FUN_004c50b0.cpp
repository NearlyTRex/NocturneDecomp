// Name: core_fire.cpp_CGunFlame_render_FUN_004c50b0
// Address: 004c50b0
// Address Range: [[004c50b0, 004c55ef]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_render_FUN_004c50b0(CGunFlame * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

{
  float fVar1;
  uint in_EAX;
  float *pfVar2;
  uint in_EDX;
  uint *puVar3;
  CDemonRenderer *pCVar4;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  int iStack00000014;
  float fStack00000018;
  float fStack0000001c;
  float fStack00000020;
  uint uVar13;
  float fVar14;
  float local_ac;
  float in_stack_ffffff60;
  byte auStack_88 [24];
  uint local_70;
  uint local_6c;
  uint local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  byte local_48 [12];
  int iStack_3c;
  byte auStack_38 [12];
  int iStack_2c;
  int local_28;
  int local_24;
  
  fVar1 = *(float *)this_ptr->field0_0x0;
  if (0.0 >= fVar1) {
    return;
  }
  fVar5 = (float10)*(float *)(this_ptr->field0_0x0 + 0x1c);
  crt_math_c_round_FUN_005fe6b0
            ((double)CONCAT44 /* combine 2-byte values */(in_EDX,CONCAT22 /* combine 2-byte values */((short)((uint)in_EAX >> 0x10),
                                              (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10
                                              | (ushort)(fVar1 == 0.0) << 0xe)));
  local_24 = (int)ROUND(fVar5);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_GunFlameTextures + local_24);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 4));
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)(auStack_88 + 0x10));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(auStack_88 + 0x14),(CVector3i *)0x0);
  fVar5 = ((float10)2f - (float10)*(float *)this_ptr->field0_0x0) /
          (float10)2f;
  fVar1 = (float)fVar5;
  uVar13 = (uint)((ulonglong)(double)fVar5 >> 0x20);
  fVar14 = (float)(fVar5 * (float10)4 + (float10)0.40000000000000002);
  if ((float10)(double)fVar5 < (float10)0.40000000000000002) {
    pfVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                       (g_CDemonRendererPtr,(float *)(auStack_88 + 0xc));
    auStack_88._4_4_ = *pfVar2 - ((CVector3f *)(this_ptr->field0_0x0 + 4))->x;
    fVar5 = (float10)pfVar2[1] - (float10)*(float *)(this_ptr->field0_0x0 + 8);
    auStack_88._8_4_ = (uint)fVar5;
    fVar6 = (float10)pfVar2[2] - (float10)*(float *)(this_ptr->field0_0x0 + 0xc);
    auStack_88._12_4_ = (uint)fVar6;
    fVar7 = (float10)*(float *)(this_ptr->field0_0x0 + 0x10);
    fVar14 = (float)(((float10)1 +
                     ((float10)1 -
                     ABS((float10)(float)auStack_88._12_4_ *
                         (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                         (float10)(float)auStack_88._4_4_ *
                         (float10)*(float *)(this_ptr->field0_0x0 + 0x10) +
                         (float10)(float)auStack_88._8_4_ *
                         (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) /
                     (SQRT((float10)*(float *)(this_ptr->field0_0x0 + 0x18) *
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                           fVar7 * fVar7 +
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x14) *
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) *
                     SQRT(fVar6 * (float10)(float)auStack_88._12_4_ +
                          (float10)(float)auStack_88._4_4_ * (float10)(float)auStack_88._4_4_ +
                          fVar5 * (float10)(float)auStack_88._8_4_))) *
                     ((float10)1 -
                     (float10)(double)CONCAT44 /* combine 2-byte values */(fVar14,uVar13) * (float10)2.5) *
                     (float10)2) * (float10)fVar1);
  }
  local_5c = fVar1 * 128f * (float)0.00390625;
  local_60 = -fVar14 * 128f * (float)0.00390625;
  local_58 = 0.0;
  auStack_38._8_4_ = (uint)ROUND(local_60 * 256f);
  iStack_2c = (int)ROUND(local_5c * 256f);
  local_28 = (int)ROUND(256f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(auStack_38 + 8)
            );
  local_5c = fVar1 * (float)128 * (float)0.00390625;
  auStack_38._0_4_ = (uint)ROUND(local_5c * 256f);
  auStack_38._4_4_ = (uint)ROUND(local_58 * 256f);
  auStack_38._8_4_ = (uint)ROUND(local_54 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)auStack_38);
  local_54 = -local_ac * (float)128 * (float)0.00390625;
  local_48._8_4_ = (uint)ROUND(local_58 * 256f);
  iStack_3c = (int)ROUND(local_54 * 256f);
  auStack_38._0_4_ = (uint)ROUND(local_50 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)(local_48 + 8)
            );
  local_48._0_4_ = (uint)ROUND(unaff_EBX * 256f);
  local_48._4_4_ = (uint)ROUND(local_50 * 256f);
  local_48._8_4_ = (uint)ROUND(local_4c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_48);
  pCVar4 = g_CDemonRendererPtr;
  fVar5 = (float10)in_stack_ffffff60;
  fVar11 = ((float10)2f - fVar5) * fVar5;
  fVar8 = ((float10)1 - fVar5) * (float10)32768f;
  fVar5 = (float10)200f;
  fVar6 = (float10)150f;
  fVar7 = (float10)50f;
  g_CDemonRendererPtr->vertex_buffer_ptr->u = 1.83671e-40;
  fVar9 = ((float10)1 - fVar11) * (float10)255f;
  pCVar4->vertex_buffer_ptr->v = 1.83671e-40;
  fVar10 = (float10)256f;
  fVar5 = (fVar11 * fVar5 + fVar9) * fVar10;
  pCVar4->vertex_buffer_ptr[1].u = 2.3326216e-38;
  fVar6 = (fVar11 * fVar6 + fVar9) * fVar10;
  pCVar4->vertex_buffer_ptr[1].v = 1.83671e-40;
  fVar10 = fVar10 * (fVar11 * fVar7 + fVar9);
  pCVar4->vertex_buffer_ptr[2].u = 2.3326216e-38;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar4,pCVar4->vertex_buffer_ptr));
  *(uint *)(SUB84 /* extract 2-byte value */(dVar12,0) + 0x7c) = 0xfe0000;
  dVar12 = crt_math_c_round_FUN_005fe6b0(dVar12);
  puVar3 = (uint *)((ulonglong)dVar12 >> 0x20);
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(puVar3,*puVar3));
  *(uint *)(SUB84 /* extract 2-byte value */(dVar12,0) + 0xa8) = 0x20000;
  dVar12 = crt_math_c_round_FUN_005fe6b0(dVar12);
  pCVar4 = (CDemonRenderer *)((ulonglong)dVar12 >> 0x20);
  fStack00000018 = (float)(int)ROUND(fVar5);
  pCVar4->vertex_buffer_ptr[3].v = 2.3326216e-38;
  iStack00000014 = (int)ROUND(fVar6);
  pCVar4->vertex_buffer_ptr->light = fStack00000018;
  fStack00000020 = (float)(int)ROUND(fVar10);
  pCVar4->vertex_buffer_ptr->color = iStack00000014;
  fStack0000001c = (float)(int)ROUND(fVar8);
  pCVar4->vertex_buffer_ptr->fog = fStack00000020;
  pCVar4->vertex_buffer_ptr->w_recip = fStack0000001c;
  pCVar4->vertex_buffer_ptr[1].light = fStack00000018;
  pCVar4->vertex_buffer_ptr[1].color = iStack00000014;
  pCVar4->vertex_buffer_ptr[1].fog = fStack00000020;
  pCVar4->vertex_buffer_ptr[1].w_recip = fStack0000001c;
  pCVar4->vertex_buffer_ptr[2].light = fStack00000018;
  pCVar4->vertex_buffer_ptr[2].color = iStack00000014;
  pCVar4->vertex_buffer_ptr[2].fog = fStack00000020;
  pCVar4->vertex_buffer_ptr[2].w_recip = fStack0000001c;
  pCVar4->vertex_buffer_ptr[3].light = fStack00000018;
  pCVar4->vertex_buffer_ptr[3].color = iStack00000014;
  pCVar4->vertex_buffer_ptr[3].fog = fStack00000020;
  pCVar4->vertex_buffer_ptr[3].w_recip = fStack0000001c;
  auStack_88._16_4_ = 0;
  auStack_88._12_4_ = 0;
  auStack_88._8_4_ = 0;
  auStack_88._4_4_ = 0;
  auStack_88._20_4_ = 0;
  local_6c = 2;
  auStack_88._0_4_ = 4;
  local_68 = 3;
  local_70 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_88);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
