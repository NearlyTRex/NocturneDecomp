// Name: core_fire.cpp_CSpark_setupRenderState_FUN_004c0300
// Address: 004c0300
// Address Range: [[004c0300, 004c041c] [006108e2, 00610902] [03fc5492, 03fc553e]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004c0300(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004c0300(CSpark *this_ptr)

{
  CVector3i *pCVar1;
  int iVar2;
  CMatrix3x3f *pCVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  CVector3i local_18;
  
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.base.surface_normal.A.i = 0;
  g_BillboardPrimitive.base.surface_normal.B.i = 0;
  g_BillboardPrimitive.base.surface_normal.C.i = 0;
  g_BillboardPrimitive.base.surface_normal.D.i = 0;
  g_BillboardPrimitive.vertices[0] = 0;
  g_BillboardPrimitive.vertices[1] = 1;
  g_RenderVertexBuffer[0].u = 0x80000;
  g_RenderVertexBuffer[0].v = 0xf80000;
  g_RenderVertexBuffer[1].u = 0xf80000;
  g_RenderVertexBuffer[1].v = 0xf80000;
  g_RenderVertexBuffer[2].u = 0xf80000;
  g_RenderVertexBuffer[2].v = 0x80000;
  g_RenderVertexBuffer[3].u = 0x80000;
  g_RenderVertexBuffer[3].v = 0x80000;
  g_BillboardPrimitive.vertices[2] = 2;
  g_BillboardPrimitive.vertices[3] = 3;
  pCVar1 = engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                     (g_CDemonRendererPtr2,&local_18);
  g_BillboardCameraRight.x = local_18.x;
  g_BillboardCameraRight.z = local_18.z;
  g_BillboardCameraRight.y = 0;
  g_BillboardCameraUp.x =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[0].z *
                        -65536));
  g_BillboardCameraUp.y =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[1].z *
                        -65536));
  g_BillboardCameraUp.z =
       (int)ROUND(ROUND((double)(g_CurrentSceneCamera->base).rotation_matrix.m[2].z *
                        -65536));
  return (int)pCVar1;
}
