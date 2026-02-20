// Name: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
// Address: 00473a20
// Address Range: [[00473a20, 00473f55] [00473f6c, 00473f87]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight *this_ptr)

{
  CVector3i *world_position;
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  uint uVar3;
  byte bVar4;
  int aiStackY_1064 [992];
  SMRGLHeaderPrimitive local_d4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60 [2];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  if (this_ptr->volumetric_enabled == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)world_position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)&local_34);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_34,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr2,&local_7c);
  local_64 = local_7c.x;
  local_60[(uint)bVar4 * -2] = *(int *)((int)&local_7c + (uint)bVar4 * -8 + 4);
  local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(int *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  local_68 = (float)0.00390625;
  local_70 = (float)local_64 * local_68;
  local_14 = local_60[1];
  local_6c = (float)local_60[0] * local_68;
  local_68 = (float)local_60[1] * local_68;
  local_a0 = (float)world_position->x - local_70;
  local_9c = (float)(this_ptr->base).base.position.y - local_6c;
  local_98 = (float)(this_ptr->base).base.position.z - local_68;
  if (&local_58 != &local_a0) {
    local_58 = local_a0;
    local_54 = local_9c;
    local_50 = local_98;
  }
  local_4c = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
  local_48 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
  local_44 = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
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
  local_1c = -(local_50 * local_44 + local_58 * local_4c + local_54 * local_48);
  local_18 = (int)ROUND(ROUND(local_1c * local_1c * local_1c * local_1c * (float)65536));
  lVar1 = (longlong)(0xffff - (int)g_PerspectiveReciprocal / 2) * (longlong)local_18;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_1c) {
    local_ac = 0x3f000000;
    local_a8 = 0x3f000000;
    local_a4 = 0xbf000000;
    local_40.x = (int)ROUND(256.0f * 0.5);
    local_40.y = (int)ROUND(256.0f * 0.5);
    local_40.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_40);
    local_ac = 0xbf000000;
    local_a8 = 0x3f000000;
    local_a4 = 0xbf000000;
    local_28.x = (int)ROUND(256.0f * -0.5);
    local_28.y = (int)ROUND(256.0f * 0.5);
    local_28.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_28);
    local_ac = 0xbf000000;
    local_a8 = 0xbf000000;
    local_a4 = 0xbf000000;
    local_88.x = (int)ROUND(256.0f * -0.5);
    local_88.y = (int)ROUND(256.0f * -0.5);
    local_88.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_88);
    local_ac = 0x3f000000;
    local_a4 = 0xbf000000;
    local_a8 = 0xbf000000;
    local_94.x = (int)ROUND(256.0f * 0.5);
    local_94.y = (int)ROUND(256.0f * -0.5);
    local_94.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_94);
    this_ptr_00 = g_CDemonRendererPtr2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr->fog = uVar3;
    this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[1].fog = uVar3;
    this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].fog = uVar3;
    this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
    this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[3].fog = uVar3;
    this_ptr_00->vertex_buffer_ptr->z = 0xffff;
    this_ptr_00->vertex_buffer_ptr->r = 0xffff;
    this_ptr_00->vertex_buffer_ptr->g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].z = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].z = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].z = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,g_LightTextures + 1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    local_d4.base.count = 4;
    local_d4.surface_normal.A = 0;
    local_d4.surface_normal.B = 0;
    local_d4.surface_normal.C = -0xffff;
    local_d4.surface_normal.D = -0x7fff;
    local_bc = 0;
    local_b0 = 3;
    local_b8 = 1;
    local_b4 = 2;
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr2,&local_d4);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(this_ptr);
  return;
}
