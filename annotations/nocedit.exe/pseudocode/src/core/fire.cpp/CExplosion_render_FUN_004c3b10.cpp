// Name: core_fire.cpp_CExplosion_render_FUN_004c3b10
// Address: 004c3b10
// Address Range: [[004c3b10, 004c3e82]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CExplosion_render_FUN_004c3b10(CExplosion * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int extraout_EAX;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  int iStack_98;
  CVector3i local_70;
  byte local_5c [8];
  int iStack_54;
  int iStack_50;
  CVector3i local_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3i local_34;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if ((*(uint *)(this_ptr->field0_0x0 + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  iStack_98 = 0x4c3b45;
  dVar3 = crt_math_c_round_FUN_005fe6b0
                    ((double)((1.0 - *(float *)(this_ptr->field0_0x0 + 0xc)) *
                             (float)27));
  local_20 = (int)ROUND(dVar3);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectExplosionTextures + local_20 * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)local_5c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)local_5c,(CVector3i *)0x0);
  fVar2 = -(float10)*(float *)(this_ptr->field0_0x0 + 0x10) * (float10)108.0f *
          (float10)0.00390625;
  dVar3 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)*(float *)(this_ptr->field0_0x0 + 0x10) *
                              (float10)148 * (float10)0.00390625));
  fVar1 = (float10)dVar3;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  local_1c = (int)ROUND(fVar1);
  local_20 = (int)ROUND(dVar3);
  if (extraout_EAX != 0) {
    local_1c = -local_1c;
    local_20 = -local_20;
  }
  local_18 = local_20;
  local_40 = (float)local_20;
  local_3c = *(float *)(this_ptr->field0_0x0 + 0x10) * 143.0f * (float)0.00390625;
  local_38 = 0.0;
  local_34.x = (int)ROUND(local_40 * 256.0f);
  local_34.y = (int)ROUND(local_3c * 256.0f);
  local_34.z = (int)ROUND(256.0f * 0.0);
  local_24 = local_40;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_34);
  local_18 = local_1c;
  local_40 = (float)local_1c;
  local_5c._4_4_ = (uint)ROUND(local_40 * 256.0f);
  iStack_54 = (int)ROUND(local_3c * 256.0f);
  iStack_50 = (int)ROUND(local_38 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_5c + 4)
            );
  local_3c = -*(float *)(this_ptr->field0_0x0 + 0x10) * (float)113 *
             (float)0.00390625;
  local_4c.x = (int)ROUND(local_40 * 256.0f);
  local_4c.y = (int)ROUND(local_3c * 256.0f);
  local_4c.z = (int)ROUND(local_38 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_4c);
  local_40 = local_24;
  local_70.x = (int)ROUND(local_24 * 256.0f);
  local_70.y = (int)ROUND(local_3c * 256.0f);
  local_70.z = (int)ROUND(local_38 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_70);
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
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&iStack_98,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
