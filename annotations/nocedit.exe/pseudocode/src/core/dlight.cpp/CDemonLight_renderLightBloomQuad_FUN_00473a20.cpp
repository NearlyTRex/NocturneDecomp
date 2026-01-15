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
  byte bVar3;
  double dVar4;
  float afStackY_1064 [992];
  CVector3i *in_stack_ffffff28;
  SMRGLHeaderPrimitive local_d4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  float local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3i local_94;
  CVector3i local_88;
  int local_7c;
  float afStack_78 [4];
  float local_68;
  int local_64;
  float local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3i local_44;
  CVector3i local_34;
  CVector3i local_28;
  float local_1c;
  int local_14;
  
  bVar3 = 0;
  if (this_ptr->field17_0x1cbc == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)world_position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)&local_34);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,&local_34,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff28);
  local_64 = local_7c;
  (&local_60)[(uint)bVar3 * -2] = afStack_78[(uint)bVar3 * -2];
  (&local_60)[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_78[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_68 = (float)0.00390625;
  afStack_78[2] = (float)local_64 * local_68;
  local_14 = local_5c;
  afStack_78[3] = (float)(int)local_60 * local_68;
  local_68 = (float)local_5c * local_68;
  local_a0 = (float)world_position->x - afStack_78[2];
  local_9c = (float)(this_ptr->base).base.position.y - afStack_78[3];
  local_98 = (float)(this_ptr->base).base.position.z - local_68;
  if (&local_58 != &local_a0) {
    local_58 = local_a0;
    local_54 = local_9c;
    local_50 = local_98;
  }
  local_4c = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
  local_48 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
  local_44.x = (this_ptr->base).base.rotation_matrix.m[2].z;
  fVar2 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
  if (fVar2 <= 0.0) {
    local_54 = 0.0;
    local_58 = 0.0;
    local_50 = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    local_58 = local_58 * fVar2;
    local_54 = local_54 * fVar2;
    local_50 = local_50 * fVar2;
  }
  local_1c = -(local_50 * (float)local_44.x + local_58 * local_4c + local_54 * local_48);
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)(local_1c * local_1c * local_1c * local_1c * (float)65536));
  local_1c = (float)(int)ROUND(dVar4);
  lVar1 = (longlong)(extraout_EDX - extraout_EAX) * (longlong)(int)local_1c;
  fVar2 = (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (0.0 < (float)local_28.z) {
    local_b0 = 0.5;
    local_ac = 0x3f000000;
    local_a8 = 0xbf000000;
    local_44.x = (int)ROUND(256f * 0.5);
    local_44.y = (int)ROUND(256f * 0.5);
    local_44.z = (int)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_44);
    local_ac = 0xbf000000;
    local_a8 = 0x3f000000;
    local_a4 = 0xbf000000;
    local_34.z = (int)ROUND(local_b0 * 256f);
    local_28.x = (int)ROUND(256f * -0.5);
    local_28.y = (int)ROUND(256f * 0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_28);
    local_ac = 0xbf000000;
    local_a8 = 0xbf000000;
    local_a4 = 0xbf000000;
    local_88.x = (int)ROUND(256f * -0.5);
    local_88.y = (int)ROUND(256f * -0.5);
    local_88.z = (int)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_88);
    local_ac = 0x3f000000;
    local_a4 = 0xbf000000;
    local_a8 = 0xbf000000;
    local_94.x = (int)ROUND(256f * 0.5);
    local_94.y = (int)ROUND(256f * -0.5);
    local_94.z = (int)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_94);
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
    local_d4.base.count = 4;
    local_d4.surface_normal.A = 0;
    local_d4.surface_normal.B = 0;
    local_d4.surface_normal.C = -0xffff;
    local_d4.surface_normal.D = -0x7fff;
    local_bc = 0;
    local_b0 = 4.2039e-45;
    local_b8 = 1;
    local_b4 = 2;
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr,&local_d4);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(this_ptr);
  return;
}
