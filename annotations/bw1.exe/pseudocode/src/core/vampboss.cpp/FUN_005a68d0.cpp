// Name: core_vampboss.cpp_FUN_005a68d0
// Address: 005a68d0
// Address Range: [[005a68d0, 005a69f0]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_005a68d0(int param_1,int param_2)

#include "nocturne.h"

void core_vampboss_cpp_FUN_005a68d0(int param_1,int param_2)

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
  CStack_48._0_4_ = 0;
  CStack_48._4_4_ = 0x3e03126f;
  CStack_48._8_4_ = 0x40847ae1;
  if (&CStack_30 != &CStack_48) {
    CStack_30._4_4_ = 0x3e03126f;
    CStack_30._8_4_ = 0x40847ae1;
    CStack_30._0_4_ = 0;
  }
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_14 = 0x4048f5c3;
  CStack_24._0_4_ = 0;
  CStack_24._4_4_ = 0x4048f5c3;
  CStack_24._8_4_ = 0;
  if (&CStack_3c != &CStack_24) {
    CStack_3c._0_4_ = 0;
    CStack_3c._4_4_ = 0x4048f5c3;
    CStack_3c._8_4_ = 0;
  }
  core_xform_cpp_FUN_005b5760(aCStack_78,&CStack_30,&CStack_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_78,iVar1 * 0x30 + param_1 + 0xfd8);
  puVar2 = auStack_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
