// Name: core_tbplayer.cpp_FUN_00571e60
// Address: 00571e60
// Address Range: [[00571e60, 0057202f]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00571e60(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00571e60(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  byte auStack_cc [48];
  uint auStack_9c [12];
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
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
  if (param_2 == 0) {
    uStack_48 = 0x3f228f5c;
    uStack_44 = 0xbde353f8;
    uStack_40 = 0xbe322d0e;
    if (&uStack_18 != &uStack_48) {
      uStack_14 = 0xbde353f8;
      uStack_10 = 0xbe322d0e;
      uStack_18 = 0x3f228f5c;
    }
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    if (&uStack_54 == &uStack_3c) goto LAB_00571f40;
  }
  else {
    uStack_68 = 0xbde353f8;
    uStack_64 = 0xbe322d0e;
    uStack_6c = 0xbf228f5c;
    if (&uStack_18 != &uStack_6c) {
      uStack_14 = 0xbde353f8;
      uStack_10 = 0xbe322d0e;
      uStack_18 = 0xbf228f5c;
    }
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    if (&uStack_54 == &uStack_30) goto LAB_00571f40;
  }
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
LAB_00571f40:
  core_xform_cpp_FUN_00591c10(auStack_cc,&uStack_18,&uStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_cc,iVar1 * 0x30 + param_1 + 0x1134);
  puVar2 = auStack_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
