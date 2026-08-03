// Name: core_icepick.cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50
// Address: 004baa50
// Address Range: [[004baa50, 004bab9f]]
// Convention: unknown
// Signature: void core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50(int param_1,int param_2)

#include "nocturne.h"

void core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004baa50(int param_1,int param_2)

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
  if (param_2 == 1) {
    local_18.x = 0.45;
    local_18.y = -0.229;
    local_18.z = -0.02;
    if (&local_3c != &local_18) {
      local_3c.y = -0.229;
      local_3c.z = -0.02;
      local_3c.x = 0.45;
    }
    local_30.z = 1.433;
    local_30.y = 1.176;
    local_30.x = -0.39;
    if (&local_24 != &local_30) {
      local_24.z = 1.433;
      local_24.x = -0.39;
      local_24.y = 1.176;
    }
  }
  else {
    g_CHAR_PTR_01cc4800 = "..\\core\\icepick.cpp";
    g_INT_01cc4804 = 0x28a;
    core_main_c_FUN_004c8440("CIcePick::getCarryObjToBodyXForm - wrong hand");
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
