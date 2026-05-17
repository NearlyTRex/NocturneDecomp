// Name: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
// Address: 00473a20
// MANUAL RECONSTRUCTION
// Address Range: [[00473a20, 00473f87] [0060c849, 0060c867]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight *this_ptr)

{
  UVector3 *world_position_00;
  float fVar1;
  uint uVar3;
  SMRGLPrimitiveQuadIndex local_d4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3i local_40;
  CVector3f local_34;
  CVector3i local_28;
  CDemonRenderer *this_ptr_00;
  float fVar2;
  longlong lVar1;
  
  if (this_ptr->volumetric_enabled == 0) {
    return;
  }
  world_position_00 = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&world_position_00->f);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,&local_34.x);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_34,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr2,&local_7c);
  fVar1 = (float)0.00390625;
  local_a0 = (world_position_00->f).x - (float)local_7c.x * fVar1;
  local_9c = (this_ptr->base).base.position.f.y - (float)local_7c.y * fVar1;
  local_98 = (this_ptr->base).base.position.f.z - (float)local_7c.z * fVar1;
  local_58 = local_a0;
  local_54 = local_9c;
  local_50 = local_98;
  local_4c = (this_ptr->base).base.rotation_matrix.m[0].z;
  local_48 = (this_ptr->base).base.rotation_matrix.m[1].z;
  local_44 = (this_ptr->base).base.rotation_matrix.m[2].z;
  fVar2 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
  if (fVar2 <= 0.0) {
    local_54 = 0.0;
    local_58 = 0.0;
    local_50 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar2;
    local_58 = local_58 * fVar1;
    local_54 = local_54 * fVar1;
    local_50 = local_50 * fVar1;
  }
  fVar1 = -(local_50 * local_44 + local_58 * local_4c + local_54 * local_48);
  lVar1 = (longlong)(0xffff - g_PerspectiveReciprocal / 2) *
          (longlong)(int)ROUND(ROUND(fVar1 * fVar1 * fVar1 * fVar1 * (float)65536));
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < fVar1) {
    local_40.x = (int)ROUND(256.0f * 0.5);
    local_40.y = (int)ROUND(256.0f * 0.5);
    local_40.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_40);
    local_28.x = (int)ROUND(256.0f * -0.5);
    local_28.y = (int)ROUND(256.0f * 0.5);
    local_28.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_28);
    local_88.x = (int)ROUND(256.0f * -0.5);
    local_88.y = (int)ROUND(256.0f * -0.5);
    local_88.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_88);
    local_94.x = (int)ROUND(256.0f * 0.5);
    local_94.y = (int)ROUND(256.0f * -0.5);
    local_94.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_94);
    this_ptr_00 = g_CDemonRendererPtr2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->u = (0xf8 << 16);
    this_ptr_00->vertex_buffer_ptr->v = (0xf8 << 16);
    this_ptr_00->vertex_buffer_ptr->a = uVar3;
    this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[1].v = (0xf8 << 16);
    this_ptr_00->vertex_buffer_ptr[1].a = uVar3;
    this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[2].a = uVar3;
    this_ptr_00->vertex_buffer_ptr[3].u = (0xf8 << 16);
    this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
    this_ptr_00->vertex_buffer_ptr[3].a = uVar3;
    this_ptr_00->vertex_buffer_ptr->r = 0xffff;
    this_ptr_00->vertex_buffer_ptr->g = 0xffff;
    this_ptr_00->vertex_buffer_ptr->b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,g_LightTextures + 1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    local_d4.base.base.count = 4;
    local_d4.base.surface_normal.A.i = 0;
    local_d4.base.surface_normal.B.i = 0;
    local_d4.base.surface_normal.C.i = -0xffff;
    local_d4.base.surface_normal.D.i = -0x7fff;
    local_d4.vertices[0] = 0;
    local_d4.vertices[3] = 3;
    local_d4.vertices[1] = 1;
    local_d4.vertices[2] = 2;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
              (g_CDemonRendererPtr2,&local_d4.base);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(this_ptr);
  return;
}
