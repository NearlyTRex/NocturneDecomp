// Name: core_vampboss.cpp_FUN_005e6b80
// Address: 005e6b80
// Address Range: [[005e6b80, 005e6c95]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e6b80()

#include "nocturne.h"

/* Signature: byte actors_enemy_vampboss.cpp_FUN_005e6b80(uint param_1, uint
   param_2) */

void core_vampboss_cpp_FUN_005e6b80(void)

{
  int iVar1;
  float *unaff_ESI;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f local_a8;
  CMatrix3x4f local_78;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  local_30.x = 0.0;
  local_30.y = 0.128;
  local_30.z = 4.14;
  if (&local_3c != &local_30) {
    local_3c.z = 4.14;
    local_3c.x = 0.0;
    local_3c.y = 0.128;
  }
  local_18.z = 0.0;
  local_18.x = 0.0;
  local_18.y = 3.14;
  if (&local_24 != &local_18) {
    local_24.y = 3.14;
    local_24.z = 0.0;
    local_24.x = 0.0;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_78,(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000004 + 0xfd8),&local_a8);
  pCVar2 = &local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar3 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
