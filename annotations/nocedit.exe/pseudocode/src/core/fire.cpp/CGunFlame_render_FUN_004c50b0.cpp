// Name: core_fire.cpp_CGunFlame_render_FUN_004c50b0
// Address: 004c50b0
// Address Range: [[004c50b0, 004c55ef]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_render_FUN_004c50b0(CGunFlame * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

{
  float fVar1;
  float fVar2;
  SRenderVertex *pSVar3;
  float10 fVar4;
  CDemonRenderer *this_ptr_00;
  float *pfVar5;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  float fVar16;
  float local_b4;
  SMRGLHeaderPrimitive local_b0;
  uint local_98;
  uint local_94;
  uint local_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  CVector3i CStack_7c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  int local_44;
  byte local_40 [12];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float local_18;
  int iStack_14;
  
  if (*(float *)this_ptr->field0_0x0 <= 0.0) {
    return;
  }
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)*(float *)(this_ptr->field0_0x0 + 0x1c));
  iStack_2c = (int)ROUND(dVar13);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_GunFlameTextures + iStack_2c);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 4));
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,&fStack_80);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,&CStack_7c,(CVector3i *)0x0);
  fVar11 = ((float10)2f - (float10)*(float *)this_ptr->field0_0x0) /
           (float10)2f;
  fVar2 = (float)fVar11;
  uVar15 = (uint)((ulonglong)(double)fVar11 >> 0x20);
  fVar16 = (float)(fVar11 * (float10)4 + (float10)0.40000000000000002);
  if ((float10)(double)fVar11 < (float10)0.40000000000000002) {
    pfVar5 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                       (g_CDemonRendererPtr,&local_84);
    fStack_8c = *pfVar5 - ((CVector3f *)(this_ptr->field0_0x0 + 4))->x;
    fVar11 = (float10)pfVar5[1] - (float10)*(float *)(this_ptr->field0_0x0 + 8);
    fStack_88 = (float)fVar11;
    fVar6 = (float10)pfVar5[2] - (float10)*(float *)(this_ptr->field0_0x0 + 0xc);
    local_84 = (float)fVar6;
    fVar7 = (float10)*(float *)(this_ptr->field0_0x0 + 0x10);
    fVar16 = (float)(((float10)1 +
                     ((float10)1 -
                     ABS((float10)local_84 * (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                         (float10)fStack_8c * (float10)*(float *)(this_ptr->field0_0x0 + 0x10) +
                         (float10)fStack_88 * (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) /
                     (SQRT((float10)*(float *)(this_ptr->field0_0x0 + 0x18) *
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                           fVar7 * fVar7 +
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x14) *
                           (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) *
                     SQRT(fVar6 * (float10)local_84 +
                          (float10)fStack_8c * (float10)fStack_8c + fVar11 * (float10)fStack_88))) *
                     ((float10)1 -
                     (float10)(double)CONCAT44 /* combine 2-byte values */(fVar16,uVar15) * (float10)2.5) *
                     (float10)2) * (float10)fVar2);
  }
  local_64 = fVar2 * 128f * (float)0.00390625;
  local_68 = -fVar16 * 128f * (float)0.00390625;
  local_60 = 0.0;
  local_40._8_4_ = (uint)ROUND(local_68 * 256f);
  iStack_34 = (int)ROUND(local_64 * 256f);
  iStack_30 = (int)ROUND(256f * 0.0);
  local_18 = local_68;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_40 + 8));
  local_64 = fVar2 * (float)128 * (float)0.00390625;
  local_40._0_4_ = (uint)ROUND(local_64 * 256f);
  local_40._4_4_ = (uint)ROUND(local_60 * 256f);
  local_40._8_4_ = (uint)ROUND(local_5c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_40);
  local_5c = -local_b4 * (float)128 * (float)0.00390625;
  local_50._8_4_ = (uint)ROUND(local_60 * 256f);
  local_44 = (int)ROUND(local_5c * 256f);
  local_40._0_4_ = (uint)ROUND(local_58 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)(local_50 + 8)
            );
  local_50._0_4_ = (uint)ROUND(unaff_EDI * 256f);
  local_50._4_4_ = (uint)ROUND(local_58 * 256f);
  local_50._8_4_ = (uint)ROUND(local_54 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_50);
  this_ptr_00 = g_CDemonRendererPtr;
  fVar8 = (float10)(float)local_b0.surface_normal.A;
  fVar12 = ((float10)2f - fVar8) * fVar8;
  fVar11 = (float10)32768f;
  fVar6 = (float10)200f;
  fVar7 = (float10)150f;
  fVar4 = (float10)50f;
  g_CDemonRendererPtr->vertex_buffer_ptr->u = 1.83671e-40;
  fVar9 = ((float10)1 - fVar12) * (float10)255f;
  this_ptr_00->vertex_buffer_ptr->v = 1.83671e-40;
  fVar10 = (float10)256f;
  fVar6 = (fVar12 * fVar6 + fVar9) * fVar10;
  this_ptr_00->vertex_buffer_ptr[1].u = 2.3326216e-38;
  fVar7 = (fVar12 * fVar7 + fVar9) * fVar10;
  this_ptr_00->vertex_buffer_ptr[1].v = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr[2].u = 2.3326216e-38;
  pSVar3 = this_ptr_00->vertex_buffer_ptr;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(((float10)1 - fVar8) * fVar11));
  fVar11 = (float10)dVar13;
  pSVar3[2].v = 2.3326216e-38;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  fVar6 = (float10)dVar13;
  pSVar3 = this_ptr_00->vertex_buffer_ptr;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  pSVar3[3].u = 1.83671e-40;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar10 * (fVar12 * fVar4 + fVar9)));
  fVar2 = (float)(int)ROUND(fVar6);
  this_ptr_00->vertex_buffer_ptr[3].v = 2.3326216e-38;
  iStack_14 = (int)ROUND(dVar13);
  this_ptr_00->vertex_buffer_ptr->light = fVar2;
  fVar16 = (float)(int)ROUND(dVar14);
  this_ptr_00->vertex_buffer_ptr->color = iStack_14;
  fVar1 = (float)(int)ROUND(fVar11);
  this_ptr_00->vertex_buffer_ptr->fog = fVar16;
  this_ptr_00->vertex_buffer_ptr->w_recip = fVar1;
  this_ptr_00->vertex_buffer_ptr[1].light = fVar2;
  this_ptr_00->vertex_buffer_ptr[1].color = iStack_14;
  this_ptr_00->vertex_buffer_ptr[1].fog = fVar16;
  this_ptr_00->vertex_buffer_ptr[1].w_recip = fVar1;
  this_ptr_00->vertex_buffer_ptr[2].light = fVar2;
  this_ptr_00->vertex_buffer_ptr[2].color = iStack_14;
  this_ptr_00->vertex_buffer_ptr[2].fog = fVar16;
  this_ptr_00->vertex_buffer_ptr[2].w_recip = fVar1;
  this_ptr_00->vertex_buffer_ptr[3].light = fVar2;
  this_ptr_00->vertex_buffer_ptr[3].color = iStack_14;
  this_ptr_00->vertex_buffer_ptr[3].fog = fVar16;
  this_ptr_00->vertex_buffer_ptr[3].w_recip = fVar1;
  local_b0.surface_normal.C = 0;
  local_b0.surface_normal.B = 0;
  local_b0.surface_normal.A = 0;
  local_b0.base.count = 0;
  local_b0.surface_normal.D = 0;
  local_94 = 2;
  local_b0.base.type = 4;
  local_90 = 3;
  local_98 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(g_CDemonRendererPtr,&local_b0)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
