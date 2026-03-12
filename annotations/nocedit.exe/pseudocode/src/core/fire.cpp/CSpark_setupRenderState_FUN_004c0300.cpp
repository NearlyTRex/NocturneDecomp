// Name: core_fire.cpp_CSpark_setupRenderState_FUN_004c0300
// Address: 004c0300
// Address Range: [[004c0300, 004c041c]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004c0300(CSpark *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004c0300(CSpark *this_ptr)

{
  CVector3i *pCVar1;
  int iVar2;
  int iVar1;
  CMatrix3x3f *pCVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1000 [997];
  uint auStack_68 [2];
  float local_60;
  float local_54;
  float local_48;
  float local_40 [10];
  CVector3i local_18;
  
  bVar7 = 0;
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.base.surface_normal.A = 0;
  g_BillboardPrimitive.base.surface_normal.B = 0;
  g_BillboardPrimitive.base.surface_normal.C = 0;
  g_BillboardPrimitive.base.surface_normal.D = 0;
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
  *(uint *)((int)&g_BillboardCameraRight + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar7 * -8 + 4);
  *(uint *)((uint)bVar7 * -8 + 0x2d12dbc + (uint)bVar7 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  g_BillboardCameraRight.y = 0;
  pCVar3 = &(g_CurrentSceneCamera->base).rotation_matrix;
  pfVar5 = local_40;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
    pCVar3 = (CMatrix3x3f *)((int)pCVar3 + (uint)bVar7 * -8 + 4);
    *pfVar5 = pCVar3->m[0].x;
    pCVar3 = pCVar3;
    pfVar5 = pfVar5;
  }
  puVar4 = local_40;
  puVar6 = auStack_68;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    *puVar6 = *puVar4;
    puVar4 = puVar4;
    puVar6 = puVar6;
  }
  g_BillboardCameraUp.x = (int)ROUND(ROUND((double)local_60 * -65536));
  g_BillboardCameraUp.y = (int)ROUND(ROUND((double)local_54 * -65536));
  g_BillboardCameraUp.z = (int)ROUND(ROUND((double)local_48 * -65536));
  return (int)pCVar1;
}
