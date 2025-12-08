// Name: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
// Address: 00473a20
// Address Range: [[00473a20, 00473f55] [00473f6c, 00473f87]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight *this_ptr)

{
  CVector3i *world_position;
  longlong lVar1;
  CDemonRenderer *this_ptr_00;
  int extraout_EAX;
  float fVar2;
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  byte bVar3;
  double dVar4;
  float afStackY_1054 [986];
  CVector3i *in_stack_ffffff34;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a0;
  uint local_9c;
  byte local_98 [12];
  float local_8c;
  float local_88;
  uint local_6c;
  float local_68 [4];
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  byte local_34 [36];
  
  bVar3 = 0;
  if (this_ptr->field17_0x1cbc == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)world_position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)(local_34 + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(local_34 + 8),(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff34);
  local_58 = (float)local_6c;
  (&local_54)[(uint)bVar3 * -2] = local_68[(uint)bVar3 * -2];
  (&local_54)[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_58 = (float)0.00390625;
  local_68[2] = (float)(int)local_54 * local_58;
  local_68[3] = (float)local_50 * local_58;
  local_58 = (float)local_4c * local_58;
  local_98._8_4_ = (float)world_position->x - local_68[2];
  local_8c = (float)(this_ptr->base).base.position.y - local_68[3];
  local_88 = (float)(this_ptr->base).base.position.z - local_58;
  if (&local_48 != (float *)(local_98 + 8)) {
    local_48 = (float)local_98._8_4_;
    local_44 = local_8c;
    local_40 = local_88;
  }
  local_3c = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
  local_38 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
  local_34._0_4_ = (this_ptr->base).base.rotation_matrix.m[2].z;
  fVar2 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
  if (fVar2 <= 0.0) {
    local_44 = 0.0;
    local_48 = 0.0;
    local_40 = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    local_48 = local_48 * fVar2;
    local_44 = local_44 * fVar2;
    local_40 = local_40 * fVar2;
  }
  fVar2 = -(local_40 * (float)local_34._0_4_ + local_48 * local_3c + local_44 * local_38);
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)(fVar2 * fVar2 * fVar2 * fVar2 * (float)65536));
  lVar1 = (longlong)(extraout_EDX - extraout_EAX) * (longlong)(int)ROUND(dVar4);
  fVar2 = (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (0.0 < unaff_EBP) {
    local_a0 = 0x3f000000;
    local_9c = 0x3f000000;
    local_98._0_4_ = -0x41000000;
    local_34._0_4_ = (uint)ROUND(256f * 0.5);
    local_34._4_4_ = (uint)ROUND(256f * 0.5);
    local_34._8_4_ = (uint)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_34);
    local_b8 = -0x41000000;
    local_b4 = 0x3f000000;
    local_b0 = 0xbf000000;
    local_34._0_4_ = (uint)ROUND(256f * -0.5);
    local_34._4_4_ = (uint)ROUND(256f * 0.5);
    local_34._8_4_ = (uint)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_34);
    local_b4 = 0xbf000000;
    local_b0 = 0xbf000000;
    local_ac = 0xbf000000;
    local_98._8_4_ = (uint)ROUND(256f * -0.5);
    local_8c = (float)(int)ROUND(256f * -0.5);
    local_88 = (float)(int)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_98 + 8));
    local_b0 = 0x3f000000;
    local_a8 = 0xbf000000;
    local_ac = 0xbf000000;
    local_98._0_4_ = (uint)ROUND(256f * 0.5);
    local_98._4_4_ = (uint)ROUND(256f * -0.5);
    local_98._8_4_ = (uint)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_98);
    this_ptr_00 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr->w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr[1].w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[2].w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
    this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
    this_ptr_00->vertex_buffer_ptr[3].w_recip = fVar2;
    this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr->color = 0xffff;
    this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
    this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,g_LightTextures + 1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    local_c4 = 0;
    local_c0 = 0;
    local_bc = -0xffff;
    local_b8 = -0x7fff;
    local_b4 = 0;
    local_a8 = 3;
    local_b0 = 1;
    local_ac = 2;
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff34);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(this_ptr);
  return;
}
