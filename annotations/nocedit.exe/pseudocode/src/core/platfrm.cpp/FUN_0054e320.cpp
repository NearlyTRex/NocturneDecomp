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
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff44;
  CMatrix3x4f local_8c;
  uint local_5c [18];
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
                ((CMatrix3x4f *)(local_14 + iVar2 * 0x34 + 4),&local_8c,in_stack_ffffff44);
      puVar3 = local_5c;
      puVar4 = (uint *)&stack0xffffff44;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x51c) + 0x154);
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                ((CVector3f *)&stack0xffffff44,(CMatrix3x3f *)(local_5c + 0xf));
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&stack0xffffff44,(CMatrix3x4f *)(local_5c + 0xc));
      (**(code **)(iVar1 + 0x60))();
    }
    iVar2 = iVar2 + 1;
    in_stack_00000004 = in_stack_00000004 + 0x34;
  } while (iVar2 < 10);
  return;
}
