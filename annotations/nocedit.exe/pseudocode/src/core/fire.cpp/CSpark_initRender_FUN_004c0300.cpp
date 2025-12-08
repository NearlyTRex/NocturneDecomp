// Name: core_fire.cpp_CSpark_initRender_FUN_004c0300
// Address: 004c0300
// Address Range: [[004c0300, 004c041c]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CSpark_initRender_FUN_004c0300(CSpark * this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CSpark_initRender_FUN_004c0300(CSpark *this_ptr)

{
  int extraout_EAX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  float afStackY_ffc [996];
  CVector3i *in_stack_ffffff98;
  float fStack_5c;
  float fStack_50;
  float fStack_44;
  int aiStack_3c [10];
  int iStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.base.surface_normal.A = 0;
  g_BillboardPrimitive.base.surface_normal.B = 0;
  g_BillboardPrimitive.base.surface_normal.C = 0;
  g_BillboardPrimitive.base.surface_normal.D = 0;
  g_BillboardPrimitive.vertices[0] = 0;
  g_BillboardPrimitive.vertices[1] = 1;
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  g_BillboardPrimitive.vertices[2] = 2;
  g_BillboardPrimitive.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,in_stack_ffffff98);
  g_BillboardCameraRight.x = iStack_14;
  *(uint *)((int)&g_BillboardCameraRight + (uint)bVar5 * -8 + 4) =
       (&uStack_10)[(uint)bVar5 * -2];
  *(uint *)((uint)bVar5 * -8 + 0x2d12dbc + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  g_BillboardCameraRight.y = 0;
  pCVar2 = &(g_CurrentSceneCamera->base).rotation_matrix;
  piVar3 = aiStack_3c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = pCVar2->m[0].x;
    pCVar2 = (CMatrix3x3i *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  piVar3 = aiStack_3c;
  piVar4 = (int *)&stack0xffffff9c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar6 = (float10)-65536;
  fVar7 = (float10)fStack_50 * fVar6;
  fVar8 = (float10)fStack_44 * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)fStack_5c * fVar6));
  fVar6 = (float10)dVar9;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  fVar7 = (float10)dVar9;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  g_BillboardCameraUp.x = (int)ROUND(fVar6);
  g_BillboardCameraUp.y = (int)ROUND(fVar7);
  g_BillboardCameraUp.z = (int)ROUND(dVar9);
  return extraout_EAX;
}
