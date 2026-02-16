// Name: core_fire.cpp_CSpark_initRender_FUN_004c0300
// Address: 004c0300
// Address Range: [[004c0300, 004c041c]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CSpark_initRender_FUN_004c0300(CSpark *this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CSpark_initRender_FUN_004c0300(CSpark *this_ptr)

{
  CVector3i *pCVar1;
  int iVar2;
  CMatrix3x3i *pCVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int aiStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  int local_40 [10];
  CVector3i local_18;
  
  bVar6 = 0;
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
  *(uint *)((int)&g_BillboardCameraRight + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar6 * -8 + 4);
  *(uint *)((uint)bVar6 * -8 + 0x2d12dbc + (uint)bVar6 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  g_BillboardCameraRight.y = 0;
  pCVar3 = &(g_CurrentSceneCamera->base).rotation_matrix;
  piVar4 = local_40;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = pCVar3->m[0].x;
    pCVar3 = (CMatrix3x3i *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
  }
  piVar4 = local_40;
  piVar5 = (int *)&stack0xffffff98;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  dVar8 = (double)local_54 * -65536;
  dVar9 = (double)local_48 * -65536;
  dVar7 = round((double)local_60 * -65536);
  dVar8 = round(dVar8);
  dVar9 = round(dVar9);
  g_BillboardCameraUp.x = (int)ROUND(dVar7);
  g_BillboardCameraUp.y = (int)ROUND(dVar8);
  g_BillboardCameraUp.z = (int)ROUND(dVar9);
  return (int)pCVar1;
}
