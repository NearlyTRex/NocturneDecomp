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
  byte local_78 [60];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x44 + param_1 + 0x24a4);
  if (param_2 == 1) {
    local_18 = 0x3ee66666;
    local_14 = 0xbe6a7efa;
    local_10 = 0xbca3d70a;
    if (&local_3c != &local_18) {
      local_38 = 0xbe6a7efa;
      local_34 = 0xbca3d70a;
      local_3c = 0x3ee66666;
    }
    local_28 = 0x3fb76c8b;
    local_2c = 0x3f96872b;
    local_30 = 0xbec7ae14;
    if (&local_24 != &local_30) {
      local_1c = 0x3fb76c8b;
      local_24 = 0xbec7ae14;
      local_20 = 0x3f96872b;
    }
  }
  else {
    PTR_01cc4800 = "..\\core\\icepick.cpp";
    INT_01cc4804 = 0x28a;
    core_main_c_FUN_004c8440("CIcePick::getCarryObjToBodyXForm - wrong hand");
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_78,iVar1 * 0x30 + param_1 + 0xfd0);
  puVar2 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
