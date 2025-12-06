// Name: core_fire.cpp_CExplosion_render_FUN_004c3b10
// Address: 004c3b10
// Address Range: [[004c3b10, 004c3e82]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CExplosion_render_FUN_004c3b10(CExplosion * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  uint in_EAX;
  uint in_EDX;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  float fStack00000008;
  int iStack0000000c;
  float fStack00000010;
  float fStack00000014;
  byte local_5c [24];
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  CVector3i local_2c;
  CVector3i local_1c;
  float local_10;
  float local_c;
  
  if ((*(uint *)(this_ptr->field0_0x0 + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  fVar3 = ((float10)1 - (float10)*(float *)(this_ptr->field0_0x0 + 0xc)) * (float10)27;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  local_1c.y = (int)ROUND(fVar3);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectExplosionTextures + local_1c.y * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)(local_5c + 0x10));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(local_5c + 0x14),(CVector3i *)0x0);
  fVar3 = (float10)*(float *)(this_ptr->field0_0x0 + 0x10) * (float10)148 *
          (float10)0.00390625;
  fVar4 = -(float10)*(float *)(this_ptr->field0_0x0 + 0x10) * (float10)108f *
          (float10)0.00390625;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,*(uint *)(this_ptr->field0_0x0 + 0x18)));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  iStack0000000c = (int)ROUND(fVar3);
  fStack00000008 = (float)(int)ROUND(fVar4);
  if (SUB84 /* extract 2-byte value */(dVar5,0) != 0) {
    iStack0000000c = -iStack0000000c;
    fStack00000008 = (float)-(int)fStack00000008;
  }
  fStack00000010 = fStack00000008;
  local_1c.y = (int)(float)(int)fStack00000008;
  local_1c.z = (int)(*(float *)(this_ptr->field0_0x0 + 0x10) * 143f *
                    (float)0.00390625);
  local_10 = 0.0;
  local_c = (float)(int)ROUND((float)local_1c.y * 256f);
  fVar1 = (float)local_1c.z * 256f;
  fVar2 = 256f * 0.0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_c);
  fStack00000014 = fStack00000010;
  local_1c.z = (int)(float)(int)fStack00000010;
  local_2c.x = (int)ROUND((float)local_1c.z * 256f);
  local_2c.y = (int)ROUND(local_10 * 256f);
  local_2c.z = (int)ROUND(local_c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_2c);
  local_c = -*(float *)(this_ptr->field0_0x0 + 0x10) * (float)113 *
            (float)0.00390625;
  local_1c.x = (int)ROUND(local_10 * 256f);
  local_1c.y = (int)ROUND(local_c * 256f);
  local_1c.z = (int)ROUND((float)(int)ROUND(fVar1) * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_c = fStack00000010;
  local_3c.x = (int)ROUND(fStack00000010 * 256f);
  local_3c.y = (int)ROUND((float)(int)ROUND(fVar1) * 256f);
  local_3c.z = (int)ROUND((float)(int)ROUND(fVar2) * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_3c);
  this_ptr_00 = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->u = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr->v = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr[1].u = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr[1].v = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr[2].u = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr[2].v = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr[3].u = 1.83671e-40;
  this_ptr_00->vertex_buffer_ptr[3].v = 2.3326216e-38;
  this_ptr_00->vertex_buffer_ptr->w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[1].w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[2].w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[3].w_recip = 4.59177e-41;
  local_5c._0_4_ = 4;
  local_5c._16_4_ = 0;
  local_5c._12_4_ = 0;
  local_5c._8_4_ = 0;
  local_5c._4_4_ = 0;
  local_5c._20_4_ = 0;
  local_3c.x = 3;
  local_44 = 1;
  local_40 = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_5c,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
