// Name: core_fire.cpp_CGunFlame_render_FUN_004c50b0
// Address: 004c50b0
// Address Range: [[004c50b0, 004c55ef]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_render_FUN_004c50b0(CGunFlame * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  float *pfVar3;
  int extraout_EAX;
  int extraout_EAX_00;
  CDemonRenderer *this_ptr_00;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float local_cc;
  SMRGLHeaderPrimitive local_c0;
  float local_98;
  float local_94;
  float local_90;
  float afStack_8c [3];
  CVector3i CStack_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3i local_44;
  int iStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  
  if (*(float *)this_ptr->field0_0x0 <= 0.0) {
    return;
  }
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)*(float *)(this_ptr->field0_0x0 + 0x1c));
  local_28 = (float)(int)ROUND(dVar12);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_GunFlameTextures + (int)local_28);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 4));
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)&CStack_80);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,&CStack_80,(CVector3i *)0x0);
  fVar10 = ((float10)2f - (float10)*(float *)this_ptr->field0_0x0) /
           (float10)2f;
  fVar1 = (float)(fVar10 * (float10)4 + (float10)0.40000000000000002);
  local_cc = fVar1;
  if ((float10)(double)fVar10 < (float10)0.40000000000000002) {
    pfVar3 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                       (g_CDemonRendererPtr,afStack_8c);
    local_98 = *pfVar3 - ((CVector3f *)(this_ptr->field0_0x0 + 4))->x;
    fVar4 = (float10)pfVar3[1] - (float10)*(float *)(this_ptr->field0_0x0 + 8);
    local_94 = (float)fVar4;
    fVar5 = (float10)pfVar3[2] - (float10)*(float *)(this_ptr->field0_0x0 + 0xc);
    local_90 = (float)fVar5;
    fVar6 = (float10)*(float *)(this_ptr->field0_0x0 + 0x10);
    local_cc = (float)(((float10)1 +
                       ((float10)1 -
                       ABS((float10)local_90 * (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                           (float10)local_98 * (float10)*(float *)(this_ptr->field0_0x0 + 0x10) +
                           (float10)local_94 * (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) /
                       (SQRT((float10)*(float *)(this_ptr->field0_0x0 + 0x18) *
                             (float10)*(float *)(this_ptr->field0_0x0 + 0x18) +
                             fVar6 * fVar6 +
                             (float10)*(float *)(this_ptr->field0_0x0 + 0x14) *
                             (float10)*(float *)(this_ptr->field0_0x0 + 0x14)) *
                       SQRT(fVar5 * (float10)local_90 +
                            (float10)local_98 * (float10)local_98 + fVar4 * (float10)local_94))) *
                       ((float10)1 - (float10)(double)fVar10 * (float10)2.5) *
                       (float10)2) * (float10)fVar1);
  }
  local_70 = fVar1 * 128f * (float)0.00390625;
  local_74 = -local_cc * 128f * (float)0.00390625;
  local_6c = 0.0;
  local_44.x = (int)ROUND(local_74 * 256f);
  local_44.y = (int)ROUND(local_70 * 256f);
  local_44.z = (int)ROUND(256f * 0.0);
  local_24 = local_74;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_44);
  local_74 = local_cc * (float)128 * (float)0.00390625;
  local_50.x = (int)ROUND(local_74 * 256f);
  local_50.y = (int)ROUND(local_70 * 256f);
  local_50.z = (int)ROUND(local_6c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_50);
  local_70 = -fVar1 * (float)128 * (float)0.00390625;
  local_5c.x = (int)ROUND(local_74 * 256f);
  local_5c.y = (int)ROUND(local_70 * 256f);
  local_5c.z = (int)ROUND(local_6c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_5c);
  local_74 = local_24;
  local_68.x = (int)ROUND(local_24 * 256f);
  local_68.y = (int)ROUND(local_70 * 256f);
  local_68.z = (int)ROUND(local_6c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_68);
  pCVar2 = g_CDemonRendererPtr;
  fVar7 = (float10)(float)fVar10;
  fVar11 = ((float10)2f - fVar7) * fVar7;
  fVar10 = (float10)32768f;
  fVar4 = (float10)200f;
  fVar5 = (float10)150f;
  fVar6 = (float10)50f;
  g_CDemonRendererPtr->vertex_buffer_ptr->u = 1.83671e-40;
  fVar8 = ((float10)1 - fVar11) * (float10)255f;
  pCVar2->vertex_buffer_ptr->v = 1.83671e-40;
  fVar9 = (float10)256f;
  fVar4 = (fVar11 * fVar4 + fVar8) * fVar9;
  pCVar2->vertex_buffer_ptr[1].u = 2.3326216e-38;
  fVar5 = (fVar11 * fVar5 + fVar8) * fVar9;
  pCVar2->vertex_buffer_ptr[1].v = 1.83671e-40;
  fVar9 = fVar9 * (fVar11 * fVar6 + fVar8);
  pCVar2->vertex_buffer_ptr[2].u = 2.3326216e-38;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)(((float10)1 - fVar7) * fVar10));
  fVar10 = (float10)dVar12;
  *(uint *)(extraout_EAX + 0x7c) = 0xfe0000;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  fVar4 = (float10)dVar12;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
  fVar5 = (float10)dVar12;
  *(uint *)(extraout_EAX_00 + 0xa8) = 0x20000;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  fStack_2c = (float)(int)ROUND(fVar4);
  this_ptr_00->vertex_buffer_ptr[3].v = 2.3326216e-38;
  iStack_30 = (int)ROUND(fVar5);
  this_ptr_00->vertex_buffer_ptr->light = fStack_2c;
  local_24 = (float)(int)ROUND(dVar12);
  this_ptr_00->vertex_buffer_ptr->color = iStack_30;
  local_28 = (float)(int)ROUND(fVar10);
  this_ptr_00->vertex_buffer_ptr->fog = local_24;
  this_ptr_00->vertex_buffer_ptr->w_recip = local_28;
  this_ptr_00->vertex_buffer_ptr[1].light = fStack_2c;
  this_ptr_00->vertex_buffer_ptr[1].color = iStack_30;
  this_ptr_00->vertex_buffer_ptr[1].fog = local_24;
  this_ptr_00->vertex_buffer_ptr[1].w_recip = local_28;
  this_ptr_00->vertex_buffer_ptr[2].light = fStack_2c;
  this_ptr_00->vertex_buffer_ptr[2].color = iStack_30;
  this_ptr_00->vertex_buffer_ptr[2].fog = local_24;
  this_ptr_00->vertex_buffer_ptr[2].w_recip = local_28;
  this_ptr_00->vertex_buffer_ptr[3].light = fStack_2c;
  this_ptr_00->vertex_buffer_ptr[3].color = iStack_30;
  this_ptr_00->vertex_buffer_ptr[3].fog = local_24;
  this_ptr_00->vertex_buffer_ptr[3].w_recip = local_28;
  local_c0.base.count = 0;
  local_c0.base.type = 0;
  local_c0.surface_normal.A = 0;
  local_c0.surface_normal.C = 2;
  local_c0.surface_normal.D = 3;
  local_c0.surface_normal.B = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(g_CDemonRendererPtr,&local_c0)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
