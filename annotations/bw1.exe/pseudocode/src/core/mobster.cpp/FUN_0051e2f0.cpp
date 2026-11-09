// Name: core_mobster.cpp_FUN_0051e2f0
// Address: 0051e2f0
// Address Range: [[0051e2f0, 0051e5c4]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_0051e2f0(int param_1,int param_2)

#include "nocturne.h"

void core_mobster_cpp_FUN_0051e2f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1060 [985];
  CMatrix3x4f aCStack_c0 [48];
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  uint uStack_60;
  uint auStack_5c [2];
  CVector3f CStack_54;
  CVector3f CStack_48;
  uint uStack_3c;
  uint auStack_38 [2];
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar4 = 0;
  iVar1 = param_2 * 0x78 + param_1;
  iVar2 = *(int *)(iVar1 + 0x25a8);
  if (param_2 == 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)(iVar1 + 0x25b0),g_CElephantGunClassInfo.name_hash);
    if (iVar1 == 0) {
      CStack_24._4_4_ = 0xbe0d3d86;
      CStack_24._8_4_ = 0xbde5c704;
      CStack_24._0_4_ = 0x3e698e54;
      if (&CStack_6c != (CVector3f *)(auStack_38 + 5)) {
        CStack_6c._0_4_ = 0x3e698e54;
        CStack_6c._4_4_ = 0xbe0d3d86;
        CStack_6c._8_4_ = 0xbde5c704;
      }
      uStack_60 = 0xbe8ed8b2;
      auStack_5c[1] = 0x3fc66a55;
      auStack_5c[0] = 0x3fcad9be;
      CStack_78._0_4_ = 0xbe8ed8b2;
      *(uint *)((int)&CStack_78 + (uint)bVar4 * -8 + 4) = auStack_5c[(uint)bVar4 * -2];
      *(uint *)((int)&CStack_78 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_54 != &CStack_78) {
        CStack_54._0_4_ = CStack_78._0_4_;
        CStack_54._4_4_ = CStack_78._4_4_;
        CStack_54._8_4_ = CStack_78._8_4_;
      }
    }
    else {
      CStack_30._4_4_ = 0xbdcccccd;
      CStack_30._8_4_ = 0x3e9e353f;
      CStack_30._0_4_ = 0x3ec18937;
      if (&CStack_6c != (CVector3f *)(auStack_38 + 2)) {
        CStack_6c._4_4_ = 0xbdcccccd;
        CStack_6c._8_4_ = 0x3e9e353f;
        CStack_6c._0_4_ = 0x3ec18937;
      }
      auStack_38[1] = 0x3fbf3b64;
      uStack_3c = 0xbe810625;
      auStack_38[0] = 0x3fcb4396;
      CStack_18._0_4_ = 0xbe810625;
      *(uint *)((int)&CStack_18 + (uint)bVar4 * -8 + 4) = auStack_38[(uint)bVar4 * -2];
      *(uint *)((int)&CStack_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_54 != &CStack_18) {
        CStack_54._0_4_ = CStack_18._0_4_;
        CStack_54._4_4_ = CStack_18._4_4_;
        CStack_54._8_4_ = CStack_18._8_4_;
      }
    }
  }
  else {
    CStack_48._4_4_ = 0xbe0f5c29;
    CStack_48._8_4_ = 0xbe333333;
    CStack_48._0_4_ = 0xbe7df3b6;
    if (&CStack_6c != &CStack_48) {
      CStack_6c._4_4_ = 0xbe0f5c29;
      CStack_6c._8_4_ = 0xbe333333;
      CStack_6c._0_4_ = 0xbe7df3b6;
    }
    uStack_88 = 0xbfdac083;
    uStack_90 = 0xbee978d5;
    uStack_8c = 0xbfbbe76d;
    CStack_84._0_4_ = 0xbee978d5;
    CStack_84._4_4_ = 0xbfbbe76d;
    CStack_84._8_4_ = 0xbfdac083;
    if (&CStack_54 != &CStack_84) {
      CStack_54._0_4_ = 0xbee978d5;
      CStack_54._4_4_ = 0xbfbbe76d;
      CStack_54._8_4_ = 0xbfdac083;
    }
  }
  core_xform_cpp_FUN_005b5760(aCStack_c0,&CStack_6c,&CStack_54);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_c0,param_1 + 0xfd8 + iVar2 * 0x30);
  puVar3 = (uint *)&stack0xffffff10;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
