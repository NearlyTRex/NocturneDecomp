// Name: core_hostage.cpp_FUN_004ef400
// Address: 004ef400
// Address Range: [[004ef400, 004ef908]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004ef400(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ef7aa) */
/* WARNING: Removing unreachable block (ram,0x004ef8bd) */
/* WARNING: Removing unreachable block (ram,0x004ef7e4) */
/* WARNING: Removing unreachable block (ram,0x004ef826) */
/* WARNING: Removing unreachable block (ram,0x004ef850) */

void core_hostage_cpp_FUN_004ef400(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_10b4 [892];
  CMatrix3x4f aCStack_2b8 [144];
  CMatrix3x4f aCStack_228 [48];
  uint auStack_1f8 [12];
  uint auStack_1c8 [12];
  uint auStack_198 [12];
  CMatrix3x4f aCStack_168 [48];
  uint auStack_138 [12];
  uint auStack_108 [12];
  CVector3f CStack_d8;
  uint uStack_cc;
  uint auStack_c8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f aCStack_a8 [2];
  CVector3f CStack_90;
  CVector3f CStack_84;
  uint uStack_78;
  uint auStack_74 [5];
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f aCStack_3c [4];
  
  bVar5 = 0;
  iVar2 = param_1 + param_2 * 0x78;
  if ((*(int *)(param_1 + 0x1fe68) == 1) &&
     (iVar1 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(iVar2 + 0x25b0),"CShotgun"),
     iVar1 != 0)) {
    CStack_48._4_4_ = 0xbc449ba6;
    aCStack_a8[0]._4_4_ = 0x3ecf5c29;
    CStack_48._0_4_ = 0x3e89ba5e;
    CStack_48._8_4_ = 0x3dbc6a7f;
    aCStack_a8[0]._0_4_ = 0xbe92f1aa;
    aCStack_a8[0]._8_4_ = 0x3f9ac083;
    core_xform_cpp_FUN_005b5760(aCStack_228,&CStack_48,aCStack_a8);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (aCStack_228,param_1 + 0xfd8 + *(int *)(iVar2 + 0x25a8) * 0x30);
    puVar3 = auStack_138;
  }
  else if (*(int *)(param_1 + 0x1fe68) == 3) {
    aCStack_3c[0]._4_4_ = 0xbe4d1e54;
    aCStack_3c[0]._8_4_ = 0x3d04bb36;
    aCStack_3c[0]._0_4_ = 0x3e882d5a;
    if (&CStack_c0 != aCStack_3c) {
      CStack_c0._0_4_ = 0x3e882d5a;
      CStack_c0._4_4_ = 0xbe4d1e54;
      CStack_c0._8_4_ = 0x3d04bb36;
    }
    uStack_cc = 0xbef6147b;
    auStack_c8[1] = 0x3e0c27a6;
    auStack_c8[0] = 0x3e0c27a6;
    CStack_60._0_4_ = 0xbef6147b;
    *(uint *)((int)&CStack_60 + (uint)bVar5 * -8 + 4) = auStack_c8[(uint)bVar5 * -2];
    *(uint *)((int)&CStack_60 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         auStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (&CStack_b4 != &CStack_60) {
      CStack_b4._0_4_ = CStack_60._0_4_;
      CStack_b4._4_4_ = CStack_60._4_4_;
      CStack_b4._8_4_ = CStack_60._8_4_;
    }
    core_xform_cpp_FUN_005b5760(aCStack_2b8,&CStack_c0,&CStack_b4);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (aCStack_2b8,param_1 + 0xfd8 + *(int *)(param_1 + 0x25a8 + param_2 * 0x78) * 0x30);
    puVar3 = auStack_198;
  }
  else if (*(int *)(param_1 + 0x1fe68) == 5) {
    CStack_d8._0_4_ = 0x3e882d5a;
    CStack_d8._4_4_ = 0xbe4d1e54;
    CStack_d8._8_4_ = 0x3d04bb36;
    if (&CStack_54 != &CStack_d8) {
      CStack_54._8_4_ = 0x3d04bb36;
      CStack_54._4_4_ = 0xbe4d1e54;
      CStack_54._0_4_ = 0x3e882d5a;
    }
    uStack_78 = 0xbef6147b;
    auStack_74[1] = 0x3e0c27a6;
    auStack_74[0] = 0x3e0c27a6;
    CStack_84._0_4_ = 0xbef6147b;
    *(uint *)((int)&CStack_84 + (uint)bVar5 * -8 + 4) = auStack_74[(uint)bVar5 * -2];
    *(uint *)((int)&CStack_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (&CStack_90 != &CStack_84) {
      CStack_90._0_4_ = CStack_84._0_4_;
      CStack_90._4_4_ = CStack_84._4_4_;
      CStack_90._8_4_ = CStack_84._8_4_;
    }
    core_xform_cpp_FUN_005b5760(aCStack_168,&CStack_54,&CStack_90);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              (aCStack_168,param_1 + 0xfd8 + *(int *)(param_1 + 0x25a8 + param_2 * 0x78) * 0x30);
    puVar3 = auStack_1c8;
  }
  else {
    core_charactr_cpp_FUN_00432be0(param_1,param_2);
    puVar3 = auStack_1f8;
  }
  puVar4 = auStack_108;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = auStack_108;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
