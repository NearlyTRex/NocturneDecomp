// Name: core_icepick.cpp_FUN_004d57e0
// Address: 004d57e0
// Address Range: [[004d57e0, 004d5948]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004d57e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004d57e0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_a8 [12];
  byte auStack_78 [48];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x78 + param_1 + 0x2618);
  if (param_2 == 1) {
    uStack_2c = 0xbe6a7efa;
    uStack_28 = 0xbca3d70a;
    uStack_30 = 0x3ee66666;
    if (&uStack_3c != &uStack_30) {
      uStack_3c = 0x3ee66666;
      uStack_38 = 0xbe6a7efa;
      uStack_34 = 0xbca3d70a;
    }
    uStack_18 = 0xbec7ae14;
    uStack_10 = 0x3fb76c8b;
    uStack_14 = 0x3f96872b;
    uStack_48 = 0xbec7ae14;
    uStack_44 = 0x3f96872b;
    uStack_40 = 0x3fb76c8b;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbec7ae14;
      uStack_20 = 0x3f96872b;
      uStack_1c = 0x3fb76c8b;
    }
  }
  else {
    _DAT_01d046a0 = "..\\core\\icepick.cpp";
    _DAT_01d046a4 = 0x289;
    core_main_c_FUN_004e4500("CIcePick::getCarryObjToBodyXForm - wrong hand");
  }
  core_xform_cpp_FUN_00591c10(auStack_78,&uStack_3c,&uStack_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_78,iVar1 * 0x30 + param_1 + 0x1134);
  puVar2 = auStack_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
