// Name: core_fire.cpp_CGunFlame_render_FUN_004c50b0
// Address: 004c50b0
// Address Range: [[004c50b0, 004c55ef]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr)

{
  SRenderVertex *pSVar1;
  float10 fVar2;
  CDemonRenderer *this_ptr_00;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  byte auStack_dc [8];
  float fStack_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [3];
  CVector3i CStack_88;
  float fStack_7c;
  float local_78;
  float local_74;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  CVector3i local_4c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (*(float *)this_ptr->unk <= 0.0) {
    return;
  }
  auStack_dc._0_4_ = 0x4c50dc;
  dVar11 = round((double)*(float *)(this_ptr->unk + 0x1c));
  fStack_2c = (float)(int)ROUND(dVar11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_GunFlameTextures + (int)fStack_2c);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)(this_ptr->unk + 4));
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)&CStack_88);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&CStack_88,(CVector3i *)0x0);
  fVar9 = ((float10)2.0f - (float10)*(float *)this_ptr->unk) / (float10)2.0f;
  local_cc = (float)fVar9;
  auStack_dc = (byte  [8])(double)fVar9;
  fStack_d4 = (float)(fVar9 * (float10)4 + (float10)0.40000000000000002);
  local_d0 = fStack_d4;
  if ((float10)(double)auStack_dc < (float10)0.40000000000000002) {
    pfVar3 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                       (g_CDemonRendererPtr2,local_94);
    local_a0 = *pfVar3 - ((CVector3f *)(this_ptr->unk + 4))->x;
    fVar9 = (float10)pfVar3[1] - (float10)*(float *)(this_ptr->unk + 8);
    local_9c = (float)fVar9;
    fVar4 = (float10)pfVar3[2] - (float10)*(float *)(this_ptr->unk + 0xc);
    local_98 = (float)fVar4;
    fVar5 = (float10)*(float *)(this_ptr->unk + 0x10);
    fStack_d4 = (float)(((float10)1 +
                        ((float10)1 -
                        ABS((float10)local_98 * (float10)*(float *)(this_ptr->unk + 0x18) +
                            (float10)local_a0 * (float10)*(float *)(this_ptr->unk + 0x10) +
                            (float10)local_9c * (float10)*(float *)(this_ptr->unk + 0x14)) /
                        (SQRT((float10)*(float *)(this_ptr->unk + 0x18) *
                              (float10)*(float *)(this_ptr->unk + 0x18) +
                              fVar5 * fVar5 +
                              (float10)*(float *)(this_ptr->unk + 0x14) *
                              (float10)*(float *)(this_ptr->unk + 0x14)) *
                        SQRT(fVar4 * (float10)local_98 +
                             (float10)local_a0 * (float10)local_a0 + fVar9 * (float10)local_9c))) *
                        ((float10)1 - (float10)(double)auStack_dc * (float10)2.5) *
                        (float10)2) * (float10)local_d0);
  }
  local_78 = local_d0 * 128.0f * (float)0.00390625;
  fStack_7c = -fStack_d4 * 128.0f * (float)0.00390625;
  local_74 = 0.0;
  local_4c.x = (int)ROUND(fStack_7c * 256.0f);
  local_4c.y = (int)ROUND(local_78 * 256.0f);
  local_4c.z = (int)ROUND(256.0f * 0.0);
  fStack_2c = fStack_7c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_4c);
  fStack_7c = fStack_d4 * (float)128 * (float)0.00390625;
  local_58.x = (int)ROUND(fStack_7c * 256.0f);
  local_58.y = (int)ROUND(local_78 * 256.0f);
  local_58.z = (int)ROUND(local_74 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_58);
  local_78 = -local_d0 * (float)128 * (float)0.00390625;
  local_64.x = (int)ROUND(fStack_7c * 256.0f);
  local_64.y = (int)ROUND(local_78 * 256.0f);
  local_64.z = (int)ROUND(local_74 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_64);
  fStack_7c = fStack_2c;
  local_70.x = (int)ROUND(fStack_2c * 256.0f);
  local_70.y = (int)ROUND(local_78 * 256.0f);
  local_70.z = (int)ROUND(local_74 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
  this_ptr_00 = g_CDemonRendererPtr2;
  fVar6 = (float10)local_cc;
  fVar10 = ((float10)2.0f - fVar6) * fVar6;
  fVar9 = (float10)32768.0f;
  fVar4 = (float10)200.0f;
  fVar5 = (float10)150.0f;
  fVar2 = (float10)50.0f;
  g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x20000;
  fVar7 = ((float10)1 - fVar10) * (float10)255.0f;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  fVar8 = (float10)256.0f;
  fVar4 = (fVar10 * fVar4 + fVar7) * fVar8;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  fVar5 = (fVar10 * fVar5 + fVar7) * fVar8;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar11 = round((double)(((float10)1 - fVar6) * fVar9));
  fVar9 = (float10)dVar11;
  pSVar1[2].v = 0xfe0000;
  dVar11 = round((double)fVar4);
  fVar4 = (float10)dVar11;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar11 = round((double)fVar5);
  pSVar1[3].u = 0x20000;
  dVar12 = round((double)(fVar8 * (fVar10 * fVar2 + fVar7)));
  fStack_34 = (float)(int)ROUND(fVar4);
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  iStack_38 = (int)ROUND(dVar11);
  this_ptr_00->vertex_buffer_ptr->light = fStack_34;
  fStack_2c = (float)(int)ROUND(dVar12);
  this_ptr_00->vertex_buffer_ptr->color = iStack_38;
  fStack_30 = (float)(int)ROUND(fVar9);
  this_ptr_00->vertex_buffer_ptr->fog = fStack_2c;
  this_ptr_00->vertex_buffer_ptr->w_recip = fStack_30;
  this_ptr_00->vertex_buffer_ptr[1].light = fStack_34;
  this_ptr_00->vertex_buffer_ptr[1].color = iStack_38;
  this_ptr_00->vertex_buffer_ptr[1].fog = fStack_2c;
  this_ptr_00->vertex_buffer_ptr[1].w_recip = fStack_30;
  this_ptr_00->vertex_buffer_ptr[2].light = fStack_34;
  this_ptr_00->vertex_buffer_ptr[2].color = iStack_38;
  this_ptr_00->vertex_buffer_ptr[2].fog = fStack_2c;
  this_ptr_00->vertex_buffer_ptr[2].w_recip = fStack_30;
  this_ptr_00->vertex_buffer_ptr[3].light = fStack_34;
  this_ptr_00->vertex_buffer_ptr[3].color = iStack_38;
  this_ptr_00->vertex_buffer_ptr[3].fog = fStack_2c;
  this_ptr_00->vertex_buffer_ptr[3].w_recip = fStack_30;
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0.0;
  local_d0 = 0.0;
  local_c0 = 0;
  local_b8 = 2;
  fStack_d4 = 5.60519e-45;
  local_b4 = 3;
  local_bc = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)(auStack_dc + 4));
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
