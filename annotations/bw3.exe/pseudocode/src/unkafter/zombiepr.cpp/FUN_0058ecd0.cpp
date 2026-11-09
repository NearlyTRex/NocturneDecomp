// Name: unkafter_zombiepr.cpp_FUN_0058ecd0
// Address: 0058ecd0
// Address Range: [[0058ecd0, 0058efa4]]
// Convention: unknown
// Signature: void unkafter_zombiepr_cpp_FUN_0058ecd0(int param_1,int param_2)

#include "nocturne.h"

void unkafter_zombiepr_cpp_FUN_0058ecd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1060 [985];
  byte auStack_c0 [48];
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint auStack_74 [11];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint auStack_38 [10];
  uint uStack_10;
  
  bVar4 = 0;
  iVar1 = param_2 * 0x78 + param_1;
  iVar2 = *(int *)(iVar1 + 0x25a8);
  if (param_2 == 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(iVar1 + 0x25b0),g_CElephantGunClassInfo.name_hash);
    if (iVar1 == 0) {
      auStack_38[3] = 0xbdcccccd;
      auStack_38[4] = 0x3e9e353f;
      auStack_38[2] = 0x3ec18937;
      if (auStack_74 + 2 != auStack_38 + 2) {
        auStack_74[3] = 0xbdcccccd;
        auStack_74[4] = 0x3e9e353f;
        auStack_74[2] = 0x3ec18937;
      }
      auStack_38[1] = 0x3fbf3b64;
      uStack_3c = 0xbe810625;
      auStack_38[0] = 0x3fcb4396;
      auStack_38[8] = 0xbe810625;
      auStack_38[(uint)bVar4 * -2 + 9] = auStack_38[(uint)bVar4 * -2];
      auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (auStack_74 + 8 != auStack_38 + 8) {
        auStack_74[8] = auStack_38[8];
        auStack_74[9] = auStack_38[9];
        auStack_74[10] = uStack_10;
      }
    }
    else {
      auStack_38[6] = 0xbe0d3d86;
      auStack_38[7] = 0xbde5c704;
      auStack_38[5] = 0x3e698e54;
      if (auStack_74 + 2 != auStack_38 + 5) {
        auStack_74[2] = 0x3e698e54;
        auStack_74[3] = 0xbe0d3d86;
        auStack_74[4] = 0xbde5c704;
      }
      auStack_74[5] = 0xbe8ed8b2;
      auStack_74[7] = 0x3fc66a55;
      auStack_74[6] = 0x3fcad9be;
      uStack_78 = 0xbe8ed8b2;
      auStack_74[(uint)bVar4 * -2] = auStack_74[(uint)bVar4 * -2 + 6];
      auStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (auStack_74 + 8 != &uStack_78) {
        auStack_74[8] = uStack_78;
        auStack_74[9] = auStack_74[0];
        auStack_74[10] = auStack_74[1];
      }
    }
  }
  else {
    uStack_44 = 0x3e2f45e1;
    uStack_40 = 0x3cb53b4b;
    uStack_48 = 0xbecbb03e;
    if (auStack_74 + 2 != &uStack_48) {
      auStack_74[3] = 0x3e2f45e1;
      auStack_74[4] = 0x3cb53b4b;
      auStack_74[2] = 0xbecbb03e;
    }
    uStack_88 = 0xbfd6540d;
    uStack_90 = 0xbf18d23d;
    uStack_8c = 0xbfac18e7;
    uStack_84 = 0xbf18d23d;
    uStack_80 = 0xbfac18e7;
    uStack_7c = 0xbfd6540d;
    if (auStack_74 + 8 != &uStack_84) {
      auStack_74[8] = 0xbf18d23d;
      auStack_74[9] = 0xbfac18e7;
      auStack_74[10] = 0xbfd6540d;
    }
  }
  core_xform_cpp_FUN_00583940(auStack_c0,auStack_74 + 2,auStack_74 + 8);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(auStack_c0,param_1 + 0xfd8 + iVar2 * 0x30);
  puVar3 = (uint *)&stack0xffffff10;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
