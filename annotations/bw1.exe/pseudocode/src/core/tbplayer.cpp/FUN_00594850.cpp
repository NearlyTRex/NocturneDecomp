// Name: core_tbplayer.cpp_FUN_00594850
// Address: 00594850
// Address Range: [[00594850, 0059497c]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00594850(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00594850(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_a8 [12];
  CMatrix3x4f aCStack_78 [48];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x78 + param_1 + 0x25a8);
  if (param_2 == 0) {
    CStack_30._4_4_ = 0xbfeed917;
    CStack_30._8_4_ = 0xc08374bc;
    CStack_30._0_4_ = 0x4006a7f0;
    if (&CStack_24 != &CStack_30) {
      CStack_24._4_4_ = 0xbfeed917;
      CStack_24._8_4_ = 0xc08374bc;
      CStack_24._0_4_ = 0x4006a7f0;
    }
    uStack_10 = 0x3dced917;
    uStack_18 = 0x3faf7cee;
    uStack_14 = 0xbef8d4fe;
    CStack_48._0_4_ = 0x3faf7cee;
    CStack_48._4_4_ = 0xbef8d4fe;
    CStack_48._8_4_ = 0x3dced917;
    if (&CStack_3c != &CStack_48) {
      CStack_3c._0_4_ = 0x3faf7cee;
      CStack_3c._4_4_ = 0xbef8d4fe;
      CStack_3c._8_4_ = 0x3dced917;
    }
  }
  core_xform_cpp_FUN_005b5760(aCStack_78,&CStack_24,&CStack_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_78,iVar1 * 0x30 + param_1 + 0xfd8);
  puVar2 = auStack_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
