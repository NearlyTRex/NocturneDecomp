// Name: core_imp.cpp_FUN_004f3a50
// Address: 004f3a50
// Address Range: [[004f3a50, 004f3c3a]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004f3a50(int param_1,int param_2)

#include "nocturne.h"

void core_imp_cpp_FUN_004f3a50(int param_1,int param_2)

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
  if (param_2 == 1) {
    CStack_48._0_4_ = 0x3e52f1aa;
    CStack_48._4_4_ = 0xbf0147ae;
    CStack_48._8_4_ = 0x3ec72b02;
    if (&CStack_18 != &CStack_48) {
      CStack_18._4_4_ = 0xbf0147ae;
      CStack_18._8_4_ = 0x3ec72b02;
      CStack_18._0_4_ = 0x3e52f1aa;
    }
    uStack_1c = 0x3f7e353f;
    uStack_20 = 0x3ee0c49c;
    uStack_24 = 0xbf2ed917;
    CStack_3c._0_4_ = 0xbf2ed917;
    CStack_3c._4_4_ = 0x3ee0c49c;
    CStack_3c._8_4_ = 0x3f7e353f;
    if (&CStack_54 == &CStack_3c) goto LAB_004f3b3e;
  }
  else {
    CStack_6c._4_4_ = 0xbf07ae14;
    CStack_6c._8_4_ = 0x3ed1eb85;
    CStack_6c._0_4_ = 0xbed58106;
    if (&CStack_18 != &CStack_6c) {
      CStack_18._4_4_ = 0xbf07ae14;
      CStack_18._8_4_ = 0x3ed1eb85;
      CStack_18._0_4_ = 0xbed58106;
    }
    uStack_58 = 0x3f7e353f;
    uStack_60 = 0xbf2ed917;
    uStack_5c = 0x3ee0c49c;
    CStack_30._0_4_ = 0xbf2ed917;
    CStack_30._4_4_ = 0x3ee0c49c;
    CStack_30._8_4_ = 0x3f7e353f;
    if (&CStack_54 == &CStack_30) goto LAB_004f3b3e;
  }
  CStack_54._4_4_ = 0x3ee0c49c;
  CStack_54._0_4_ = 0xbf2ed917;
  CStack_54._8_4_ = 0x3f7e353f;
LAB_004f3b3e:
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
