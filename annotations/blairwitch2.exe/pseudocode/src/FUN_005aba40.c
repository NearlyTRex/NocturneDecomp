// Name: FUN_005aba40
// Address: 005aba40
// Address Range: [[005aba40, 005abd2e]]
// Convention: unknown
// Signature: int FUN_005aba40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005aba40(uint param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  uint auStackY_1034 [1012];
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
  
  bVar7 = 0;
  iVar4 = FUN_0059e3b0(param_1);
  *(byte **)(iVar4 + 0x2b0) = &DAT_00600c64;
  FUN_005478b0(iVar4 + 0x2b4,"blackDog.dfm");
  *(uint *)(iVar4 + 0x3434) = 0x3f000000;
  *(uint *)(iVar4 + 0x1134c) = 0x3fe00000;
  *(uint *)(iVar4 + 0xfc) = 0;
  *(uint *)(iVar4 + 0x113c4) = 0x3f800000;
  *(uint *)(iVar4 + 0x2a8) = 0x3dcccccd;
  *(uint *)(iVar4 + 0x11380) = 0;
  *(uint *)(iVar4 + 0x11384) = 0;
  *(uint *)(iVar4 + 0x11388) = 1;
  *(uint *)(iVar4 + 0x1138c) = 2;
  *(uint *)(iVar4 + 0x11390) = 0;
  FUN_005abe90(iVar4,0,0);
  uVar3 = _DAT_00600c50;
  iVar1 = iVar4 + 0x10af8;
  *(uint *)(iVar4 + 0x11398) = 0x40a00000;
  *(uint *)(iVar4 + 0x11394) = uVar3;
  FUN_0059d6f0(iVar1,"ChaseFoodComplete","Alert");
  FUN_0059d7f0(iVar1,"ChaseComplete","MeleeAttack");
  FUN_0059d990(iVar1,"Alert");
  FUN_0059dc80(iVar1);
  *(uint *)(iVar4 + 0x1137c) = 0;
  *(uint *)(iVar4 + 0x113fc) = 0xffffffff;
  *(uint *)(iVar4 + 0x1185c) = 0;
  *(uint *)(iVar4 + 0x11864) = 0x40a00000;
  *(uint *)(iVar4 + 0x11860) = 0x3f800000;
  *(uint *)(iVar4 + 0x3434) = 0x3fc00000;
  *(uint *)(iVar4 + 0x3440) = 0x3f800000;
  *(uint *)(iVar4 + 0x3444) = 0x40400000;
  *(uint *)(iVar4 + 0x11344) = 1;
  uStack_34 = 0xbe883127;
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3f00cb29;
  if ((uint *)(iVar4 + 0x10a0c) != &stack0xffffffcc) {
    *(uint *)(iVar4 + 0x10a0c) = 0xbe883127;
    *(uint *)(iVar4 + 0x10a10) = 0x3e000000;
    *(uint *)(iVar4 + 0x10a14) = 0x3f00cb29;
  }
  uStack_54 = 0x3e000000;
  uStack_50 = 0x3f00cb29;
  uStack_58 = 0x3e883127;
  if ((uint *)(iVar4 + 0x10a18) != &stack0xffffffa8) {
    *(uint *)(iVar4 + 0x10a18) = 0x3e883127;
    *(uint *)(iVar4 + 0x10a1c) = 0x3e000000;
    *(uint *)(iVar4 + 0x10a20) = 0x3f00cb29;
  }
  uStack_38 = 0;
  uStack_3c = 0x3fc90fdb;
  uStack_40 = 0;
  uStack_28 = 0;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if ((uint *)(iVar4 + 0x10a48) != &stack0xffffffd8) {
    *(uint *)(iVar4 + 0x10a48) = uStack_28;
    *(uint *)(iVar4 + 0x10a4c) = uStack_24;
    *(uint *)(iVar4 + 0x10a50) = uStack_20;
  }
  uStack_14 = 0;
  uStack_1c = 0;
  uStack_18 = 0x3fc90fdb;
  uStack_4c = 0;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if ((uint *)(iVar4 + 0x10a54) != &stack0xffffffb4) {
    *(uint *)(iVar4 + 0x10a54) = uStack_4c;
    *(uint *)(iVar4 + 0x10a58) = uStack_48;
    *(uint *)(iVar4 + 0x10a5c) = uStack_44;
  }
  pcVar5 = (char *)0x5f0d08;
  pcVar6 = (char *)(iVar4 + 0x11444);
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "dogdeath0?.wav";
  pcVar6 = (char *)(iVar4 + 0x11543);
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = (char *)0x5f0d24;
  pcVar6 = (char *)(iVar4 + 0x11741);
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar4 + 0x11844) = 0x40e00000;
  *(uint *)(iVar4 + 0xfc) = 1;
  *(uint *)(iVar4 + 0x10a28) = 0;
  *(uint *)(iVar4 + 0x1186c) = 0;
  return iVar4;
}
