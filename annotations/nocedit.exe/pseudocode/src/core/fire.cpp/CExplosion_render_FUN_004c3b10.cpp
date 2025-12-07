// Name: core_fire.cpp_CExplosion_render_FUN_004c3b10
// Address: 004c3b10
// Address Range: [[004c3b10, 004c3e82]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CExplosion_render_FUN_004c3b10(CExplosion * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  BADSPACEBASE *in_ESP;
  double dVar4;
  double dVar5;
  SMRGLHeaderPrimitive local_74;
  uint local_5c;
  uint local_58;
  byte auStack_54 [8];
  int local_4c;
  CVector3i local_44;
  CVector3i local_34;
  float local_28;
  CVector3i local_24;
  float local_14;
  float local_10;
  int local_c;
  
  if ((*(uint *)(this_ptr->field0_0x0 + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)((1.0 - *(float *)(this_ptr->field0_0x0 + 0xc)) *
                             (float)27));
  local_24.y = (int)ROUND(dVar4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectExplosionTextures + local_24.y * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)auStack_54);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(auStack_54 + 4),(CVector3i *)0x0);
  fVar3 = -*(float *)(this_ptr->field0_0x0 + 0x10) * 108f;
  fVar2 = (float)0.00390625;
  iVar1 = *(int *)(this_ptr->field0_0x0 + 0x18);
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)(*(float *)(this_ptr->field0_0x0 + 0x10) * (float)148 *
                             fVar2));
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)(fVar3 * fVar2));
  local_c = (int)ROUND(dVar4);
  local_10 = (float)(int)ROUND(dVar5);
  if (iVar1 != 0) {
    local_c = -local_c;
    local_10 = (float)-(int)local_10;
  }
  fVar2 = local_10;
  local_34.y = (int)(float)(int)local_10;
  local_34.z = (int)(*(float *)(this_ptr->field0_0x0 + 0x10) * 143f *
                    (float)0.00390625);
  local_28 = 0.0;
  local_24.x = (int)ROUND((float)local_34.y * 256f);
  local_24.y = (int)ROUND((float)local_34.z * 256f);
  local_24.z = (int)ROUND(256f * 0.0);
  local_14 = (float)local_34.y;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_24);
  local_34.z = (int)(float)(int)fVar2;
  local_44.x = (int)ROUND((float)local_34.z * 256f);
  local_44.y = (int)ROUND(local_28 * 256f);
  local_44.z = (int)ROUND((float)local_24.x * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_44);
  local_24.x = (int)(-*(float *)(this_ptr->field0_0x0 + 0x10) * (float)113 *
                    (float)0.00390625);
  local_34.x = (int)ROUND(local_28 * 256f);
  local_34.y = (int)ROUND((float)local_24.x * 256f);
  local_34.z = (int)ROUND((float)local_24.y * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_34);
  local_24.x = (int)fVar2;
  auStack_54._0_4_ = (uint)ROUND(fVar2 * 256f);
  auStack_54._4_4_ = (uint)ROUND((float)local_24.y * 256f);
  local_4c = (int)ROUND((float)local_24.z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)auStack_54);
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
  local_74.base.type = 4;
  local_74.surface_normal.C = 0;
  local_74.surface_normal.B = 0;
  local_74.surface_normal.A = 0;
  local_74.base.count = 0;
  local_74.surface_normal.D = 0;
  auStack_54._0_4_ = 4.2039e-45;
  local_5c = 1;
  local_58 = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr,&local_74,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
