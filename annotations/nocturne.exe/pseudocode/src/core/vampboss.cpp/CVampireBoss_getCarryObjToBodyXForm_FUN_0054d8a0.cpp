// Name: core_vampboss.cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_0054d8a0
// Address: 0054d8a0
// Address Range: [[0054d8a0, 0054d9b5]]
// Convention: unknown
// Signature: void core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_0054d8a0(int param_1,int param_2)

#include "nocturne.h"

void core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_0054d8a0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_a8 [12];
  CMatrix3x4f local_78;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x44 + param_1 + 0x24a4);
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
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_78,iVar1 * 0x30 + param_1 + 0xfd0);
  puVar2 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
