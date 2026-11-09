// Name: core_tbplayer.cpp_FUN_00594ab0
// Address: 00594ab0
// Address Range: [[00594ab0, 00594c7f]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00594ab0(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00594ab0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  CMatrix3x4f aCStack_cc [48];
  uint auStack_9c [12];
  CVector3f CStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  CVector3f CStack_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x78 + param_1 + 0x25a8);
  if (param_2 == 0) {
    CStack_48._0_4_ = 0x3f228f5c;
    CStack_48._4_4_ = 0xbde353f8;
    CStack_48._8_4_ = 0xbe322d0e;
    if (&CStack_18 != &CStack_48) {
      CStack_18._4_4_ = 0xbde353f8;
      CStack_18._8_4_ = 0xbe322d0e;
      CStack_18._0_4_ = 0x3f228f5c;
    }
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    CStack_3c._0_4_ = 0;
    CStack_3c._4_4_ = 0;
    CStack_3c._8_4_ = 0;
    if (&CStack_54 == &CStack_3c) goto LAB_00594b90;
  }
  else {
    CStack_6c._4_4_ = 0xbde353f8;
    CStack_6c._8_4_ = 0xbe322d0e;
    CStack_6c._0_4_ = 0xbf228f5c;
    if (&CStack_18 != &CStack_6c) {
      CStack_18._4_4_ = 0xbde353f8;
      CStack_18._8_4_ = 0xbe322d0e;
      CStack_18._0_4_ = 0xbf228f5c;
    }
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    CStack_30._0_4_ = 0;
    CStack_30._4_4_ = 0;
    CStack_30._8_4_ = 0;
    if (&CStack_54 == &CStack_30) goto LAB_00594b90;
  }
  CStack_54._4_4_ = 0;
  CStack_54._0_4_ = 0;
  CStack_54._8_4_ = 0;
LAB_00594b90:
  core_xform_cpp_FUN_005b5760(aCStack_cc,&CStack_18,&CStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_cc,iVar1 * 0x30 + param_1 + 0xfd8);
  puVar2 = auStack_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
