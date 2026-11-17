// Name: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00493410
// Address: 00493410
// Address Range: [[00493410, 004934f2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00493410(CSmokeParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00493410(CSmokeParticle *this_ptr)

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
  g_SMRGLHeaderPrimitive_01c3ded0.base.count = 4;
  g_SMRGLHeaderPrimitive_01c3ded0.surface_normal.A.i = 0;
  g_SMRGLHeaderPrimitive_01c3ded0.surface_normal.B.i = 0;
  g_SMRGLHeaderPrimitive_01c3ded0.surface_normal.C.i = 0;
  g_SMRGLHeaderPrimitive_01c3ded0.surface_normal.D.i = 0;
  g_INT_01c3dee8 = 0;
  g_INT_01c3deec = 1;
  g_INT_01c3def0 = 2;
  g_INT_01c3def4 = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
            (g_CDemonRenderer_PTR_0060b280,&local_18);
  g_CVector3i_01c3deb8.x = local_18.x;
  *(uint *)((int)&g_CVector3i_01c3deb8 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar6 * -8 + 4);
  *(uint *)((uint)bVar6 * -8 + 0x1c3dec0 + (uint)bVar6 * -8) =
       *(uint *)((int)&local_18 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  g_CVector3i_01c3deb8.y = 0;
  pCVar2 = &(g_CDemonCamera_PTR_007bda74->base).rotation_matrix;
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
  g_CVector3i_01c3dec4.x = (int)ROUND(dVar7);
  g_CVector3i_01c3dec4.y = (int)ROUND(dVar8);
  g_CVector3i_01c3dec4.z = (int)ROUND(dVar9);
  return;
}
