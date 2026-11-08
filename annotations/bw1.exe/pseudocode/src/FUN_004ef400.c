// Name: FUN_004ef400
// Address: 004ef400
// Address Range: [[004ef400, 004ef908]]
// Convention: unknown
// Signature: void FUN_004ef400(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ef7aa) */
/* WARNING: Removing unreachable block (ram,0x004ef8bd) */
/* WARNING: Removing unreachable block (ram,0x004ef7e4) */
/* WARNING: Removing unreachable block (ram,0x004ef826) */
/* WARNING: Removing unreachable block (ram,0x004ef850) */

void FUN_004ef400(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_10b4 [892];
  byte auStack_2b8 [144];
  byte auStack_228 [48];
  uint auStack_1f8 [12];
  uint auStack_1c8 [12];
  uint auStack_198 [12];
  byte auStack_168 [48];
  uint auStack_138 [12];
  uint auStack_108 [12];
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint auStack_c8 [6];
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint auStack_80 [8];
  uint uStack_60;
  uint auStack_5c [20];
  
  bVar5 = 0;
  iVar2 = param_1 + param_2 * 0x78;
  if ((*(int *)(param_1 + 0x1fe68) == 1) &&
     (iVar1 = FUN_0040c550(*(uint *)(iVar2 + 0x25b0),"CShotgun"), iVar1 != 0)) {
    auStack_5c[6] = 0xbc449ba6;
    uStack_a4 = 0x3ecf5c29;
    auStack_5c[5] = 0x3e89ba5e;
    auStack_5c[7] = 0x3dbc6a7f;
    uStack_a8 = 0xbe92f1aa;
    uStack_a0 = 0x3f9ac083;
    FUN_005b5760(auStack_228,auStack_5c + 5,&uStack_a8);
    FUN_005b5200(auStack_228,param_1 + 0xfd8 + *(int *)(iVar2 + 0x25a8) * 0x30);
    puVar3 = auStack_138;
  }
  else if (*(int *)(param_1 + 0x1fe68) == 3) {
    auStack_5c[9] = 0xbe4d1e54;
    auStack_5c[10] = 0x3d04bb36;
    auStack_5c[8] = 0x3e882d5a;
    if (auStack_c8 + 2 != auStack_5c + 8) {
      auStack_c8[2] = 0x3e882d5a;
      auStack_c8[3] = 0xbe4d1e54;
      auStack_c8[4] = 0x3d04bb36;
    }
    uStack_cc = 0xbef6147b;
    auStack_c8[1] = 0x3e0c27a6;
    auStack_c8[0] = 0x3e0c27a6;
    uStack_60 = 0xbef6147b;
    auStack_5c[(uint)bVar5 * -2] = auStack_c8[(uint)bVar5 * -2];
    auStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_c8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (auStack_c8 + 5 != &uStack_60) {
      auStack_c8[5] = uStack_60;
      uStack_b0 = auStack_5c[0];
      uStack_ac = auStack_5c[1];
    }
    FUN_005b5760(auStack_2b8,auStack_c8 + 2,auStack_c8 + 5);
    FUN_005b5200(auStack_2b8,param_1 + 0xfd8 + *(int *)(param_1 + 0x25a8 + param_2 * 0x78) * 0x30);
    puVar3 = auStack_198;
  }
  else if (*(int *)(param_1 + 0x1fe68) == 5) {
    uStack_d8 = 0x3e882d5a;
    uStack_d4 = 0xbe4d1e54;
    uStack_d0 = 0x3d04bb36;
    if (auStack_5c + 2 != &uStack_d8) {
      auStack_5c[4] = 0x3d04bb36;
      auStack_5c[3] = 0xbe4d1e54;
      auStack_5c[2] = 0x3e882d5a;
    }
    auStack_80[2] = 0xbef6147b;
    auStack_80[4] = 0x3e0c27a6;
    auStack_80[3] = 0x3e0c27a6;
    uStack_84 = 0xbef6147b;
    auStack_80[(uint)bVar5 * -2] = auStack_80[(uint)bVar5 * -2 + 3];
    auStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (&uStack_90 != &uStack_84) {
      uStack_90 = uStack_84;
      uStack_8c = auStack_80[0];
      uStack_88 = auStack_80[1];
    }
    FUN_005b5760(auStack_168,auStack_5c + 2,&uStack_90);
    FUN_005b5200(auStack_168,param_1 + 0xfd8 + *(int *)(param_1 + 0x25a8 + param_2 * 0x78) * 0x30);
    puVar3 = auStack_1c8;
  }
  else {
    FUN_00432be0(param_1,param_2);
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
