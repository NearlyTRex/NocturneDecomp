// Name: core_stranger.cpp_CStranger_FUN_005c06b0
// Address: 005c06b0
// Address Range: [[005c06b0, 005c07ac]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c06b0()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c06b0(CStranger* param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005c06b0(void)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  int in_stack_00000004;
  float local_114 [12];
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar5 = 0;
  iVar1 = *(int *)(in_stack_00000004 + 0x1fc2c);
  if (((iVar1 != 0) && (iVar1 != *(int *)(in_stack_00000004 + 0x24b4))) &&
     (iVar1 != *(int *)(in_stack_00000004 + 0x24f8))) {
    core_stranger_cpp_CStranger_FUN_005c07b0();
    pfVar2 = local_114;
    pCVar3 = &local_b4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_84,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b4,&local_84,&local_54);
    pCVar3 = &local_54;
    pCVar4 = &local_e4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_e4,&local_24);
    core_xform_cpp_getTranslation_FUN_005f6110(&local_e4,&local_18);
    (**(code **)(iVar1 + 0x60))();
  }
  return;
}
