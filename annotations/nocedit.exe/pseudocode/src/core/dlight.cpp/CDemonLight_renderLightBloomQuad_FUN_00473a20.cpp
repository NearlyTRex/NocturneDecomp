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
  float fVar2;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  byte bVar3;
  float10 fVar4;
  double dVar5;
  int aiStackY_1054 [989];
  CVector3i *in_stack_ffffff34;
  CDemonRenderer *local_a8;
  float local_90;
  float local_8c;
  float local_88;
  uint local_84;
  byte auStack_74 [12];
  int local_68 [2];
  float local_60;
  float local_5c;
  float local_58;
  int local_54 [3];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  CVector3i aCStack_2c [2];
  
  bVar3 = 0;
  if (this_ptr->field17_0x1cbc == 0) {
    return;
  }
  world_position = &(this_ptr->base).base.position;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)world_position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,&fStack_30);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,aCStack_2c,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff34);
  local_58 = (float)auStack_74._8_4_;
  local_54[(uint)bVar3 * -2] = local_68[(uint)bVar3 * -2];
  local_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_68[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_58 = (float)0.00390625;
  local_60 = (float)local_54[0] * local_58;
  local_5c = (float)local_54[1] * local_58;
  local_58 = (float)local_54[2] * local_58;
  local_90 = (float)world_position->x - local_60;
  local_8c = (float)(this_ptr->base).base.position.y - local_5c;
  local_88 = (float)(this_ptr->base).base.position.z - local_58;
  if (&local_48 != &local_90) {
    local_48 = local_90;
    local_44 = local_8c;
    local_40 = local_88;
  }
  local_3c = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
  local_38 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
  local_34 = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
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
  fVar4 = -((float10)local_40 * (float10)local_34 +
           (float10)local_48 * (float10)local_3c + (float10)local_44 * (float10)local_38);
  fVar2 = (float)fVar4;
  fVar4 = fVar4 * (float10)fVar2 * (float10)fVar2 * (float10)fVar2 * (float10)65536;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(0xffff,(int)g_PerspectiveReciprocal / 2));
  lVar1 = (longlong)((int)((ulonglong)dVar5 >> 0x20) - SUB84 /* extract 2-byte value */(dVar5,0)) * (longlong)(int)ROUND(fVar4)
  ;
  fVar2 = (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (0.0 < unaff_ESI) {
    local_90 = -0.5;
    aCStack_2c[0].x = (int)ROUND(256f * 0.5);
    aCStack_2c[0].y = (int)ROUND(256f * 0.5);
    aCStack_2c[0].z = (int)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,aCStack_2c);
    local_90 = 0.5;
    local_8c = -0.5;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xfffffff0);
    local_90 = -0.5;
    local_8c = -0.5;
    local_88 = -0.5;
    auStack_74._8_4_ = (uint)ROUND(256f * -0.5);
    local_68[0] = (int)ROUND(256f * -0.5);
    local_68[1] = (int)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(auStack_74 + 8));
    local_8c = 0.5;
    local_84 = 0xbf000000;
    local_88 = -0.5;
    auStack_74._0_4_ = (uint)ROUND(256f * 0.5);
    auStack_74._4_4_ = (uint)ROUND(256f * -0.5);
    auStack_74._8_4_ = (uint)ROUND(256f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)auStack_74);
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
    local_90 = 0.0;
    local_84 = 3;
    local_8c = 1.4013e-45;
    local_88 = 2.8026e-45;
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&local_a8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  local_a8 = g_CDemonRendererPtr;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  local_a8 = (CDemonRenderer *)0x473f62;
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(this_ptr);
  return;
}
