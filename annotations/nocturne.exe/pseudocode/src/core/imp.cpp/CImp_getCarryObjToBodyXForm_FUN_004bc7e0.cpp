// Name: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004bc7e0
// Address: 004bc7e0
// Address Range: [[004bc7e0, 004bc9af]]
// Convention: unknown
// Signature: void core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004bc7e0(int param_1,int param_2)

#include "nocturne.h"

void core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004bc7e0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_c0 [12];
  CMatrix3x4f local_90;
  CVector3f local_60 [2];
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x44 + param_1 + 0x24a4);
  if (param_2 == 1) {
    local_60[0].y = -0.505;
    local_60[0].z = 0.389;
    local_60[0].x = 0.206;
    if (&local_18 != local_60) {
      local_18.x = 0.206;
      local_18.y = -0.505;
      local_18.z = 0.389;
    }
    local_30.x = -0.683;
    local_30.z = 0.993;
    local_30.y = 0.439;
    if (&local_3c != &local_30) {
      local_3c.y = 0.439;
      local_3c.z = 0.993;
      local_3c.x = -0.683;
    }
  }
  else {
    local_24.y = -0.53;
    local_24.z = 0.41;
    local_24.x = -0.417;
    if (&local_18 != &local_24) {
      local_18.y = -0.53;
      local_18.z = 0.41;
      local_18.x = -0.417;
    }
    local_48.z = 0.993;
    local_48.y = 0.439;
    local_48.x = -0.683;
    if (&local_3c != &local_48) {
      local_3c.z = 0.993;
      local_3c.x = -0.683;
      local_3c.y = 0.439;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_90,&local_18,&local_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_90,iVar1 * 0x30 + param_1 + 0xfd0);
  puVar2 = local_c0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
