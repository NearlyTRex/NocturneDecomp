// Name: core_fire.cpp_CSpark_setupRenderState_FUN_004837a0
// Address: 004837a0
// Address Range: [[004837a0, 004838bf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004837a0(CSpark *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004837a0(CSpark *this_ptr)

{
  int iVar1;
  CMatrix3x3f *pCVar2;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float afStackY_1000 [997];
  float local_60;
  float local_54;
  float local_48;
  CVector3i local_18;
  
  bVar6 = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.base.count = 4;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.A.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.B.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.C.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.base.surface_normal.D.i = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[0] = 0;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[1] = 1;
  g_SRenderVertex_ARRAY_005c5014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[0].v = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[1].v = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_005c5014[2].v = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[3].u = 0x80000;
  g_SRenderVertex_ARRAY_005c5014[3].v = 0x80000;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[2] = 2;
  g_SMRGLPrimitiveQuadIndex_01c08d20.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00460d90
            (g_CDemonRenderer_PTR_005ae704,&local_18);
  g_CVector3i_01c08d08.x = local_18.x;
  *(uint *)((int)&g_CVector3i_01c08d08 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar6 * -8 + 4);
  *(uint *)((uint)bVar6 * -8 + 0x1c08d10 + (uint)bVar6 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  g_CVector3i_01c08d08.y = 0;
  pCVar2 = &g_CDemonCamera_PTR_007f7370->rotation_matrix;
  pfVar4 = (float *)&stack0xffffffc0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = pCVar2->m[0].x;
    pCVar2 = (CMatrix3x3f *)((int)pCVar2 + (uint)bVar6 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  puVar3 = (uint *)&stack0xffffffc0;
  puVar5 = (uint *)&stack0xffffff98;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  dVar8 = (double)local_54 * -65536;
  dVar9 = (double)local_48 * -65536;
  dVar7 = round((double)local_60 * -65536);
  dVar8 = round(dVar8);
  dVar9 = round(dVar9);
  g_CVector3i_01c08d14.x = (int)ROUND(dVar7);
  g_CVector3i_01c08d14.y = (int)ROUND(dVar8);
  g_CVector3i_01c08d14.z = (int)ROUND(dVar9);
  return;
}
