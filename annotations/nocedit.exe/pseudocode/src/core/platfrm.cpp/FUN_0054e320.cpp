// Name: core_platfrm.cpp_FUN_0054e320
// Address: 0054e320
// Address Range: [[0054e320, 0054e3e5]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e320()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e320(uint param_1) */

void core_platfrm_cpp_FUN_0054e320(void)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f local_bc;
  CMatrix3x4f local_8c;
  CMatrix3x4f local_5c;
  CVector3f local_2c;
  CVector3f local_20;
  int local_14;
  
  bVar5 = 0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_8c,(CVector3f *)(in_stack_00000004 + 0x20),
             (CVector3f *)(in_stack_00000004 + 0x30));
  local_14 = in_stack_00000004 + 0x51c;
  iVar2 = 0;
  do {
    if (*(int *)(in_stack_00000004 + 0x51c) != 0) {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(local_14 + iVar2 * 0x34 + 4),&local_8c,&local_5c);
      pCVar3 = &local_5c;
      pCVar4 = &local_bc;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(float *)pCVar4 = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x51c) + 0x154);
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_bc,&local_20);
      core_xform_cpp_getTranslation_FUN_005f6110(&local_bc,&local_2c);
      (**(code **)(iVar1 + 0x60))();
    }
    iVar2 = iVar2 + 1;
    in_stack_00000004 = in_stack_00000004 + 0x34;
  } while (iVar2 < 10);
  return;
}
