// Name: FUN_0042ac20
// Address: 0042ac20
// Address Range: [[0042ac20, 0042b0da]]
// Convention: unknown
// Signature: int FUN_0042ac20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042ac20(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint auStack_44 [3];
  uint auStack_38 [3];
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint auStack_20 [3];
  int iStack_14;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_0054bf00(iVar2 + 0x158);
  iVar2 = FUN_0043f8c0(iVar2 + 0x2db0);
  iVar2 = FUN_005a30d7(iVar2 + 0x1c8,0xf,&DAT_005db0f0);
  iVar2 = FUN_005a30d7(iVar2 + 0xb4,0xf,&DAT_005db0f0);
  iVar2 = FUN_005a30d7(iVar2 + 0x228,0x32,0x5dd390);
  iVar2 = FUN_005a30d7(iVar2 + 0x4b0,0x32,&DAT_005dbca0);
  *(uint *)(iVar2 + -0x3708) = 0x5dd244;
  *(uint *)(iVar2 + -0x1360) = 0;
  *(uint *)(iVar2 + -0x133c) = 0;
  *(uint *)(iVar2 + -0x1340) = *(uint *)(iVar2 + -0x133c);
  *(uint *)(iVar2 + -0x1344) = *(uint *)(iVar2 + -0x1340);
  *(uint *)(iVar2 + -0x1320) = 0x42c80000;
  *(uint *)(iVar2 + -0x5f0) = 0x3f800000;
  *(uint *)(iVar2 + -0x5ec) = 0x40000000;
  *(uint *)(iVar2 + -0x5e8) = 0x41a00000;
  *(uint *)(iVar2 + -0x5e4) = 0x42480000;
  *(uint *)(iVar2 + -0x5e0) = 0x40000000;
  *(uint *)(iVar2 + -0x5dc) = 0xc479c000;
  *(uint *)(iVar2 + -0x5d8) = 0;
  *(uint *)(iVar2 + -0x4bc) = 0;
  *(uint *)(iVar2 + -0x4b4) = 0x40000000;
  *(uint *)(iVar2 + -0x1108) = 0xffffffff;
  *(uint *)(iVar2 + -0x1100) = 0;
  *(uint *)(iVar2 + -0x110c) = 0xffffffff;
  *(uint *)(iVar2 + -0x610) = 0;
  *(uint *)(iVar2 + -0x1120) = 0;
  *(uint *)(iVar2 + -0x1158) = 0;
  *(uint *)(iVar2 + -0x1154) = 0x40400000;
  *(uint *)(iVar2 + -0x1150) = 0x7149f2ca;
  *(uint *)(iVar2 + -0x114c) = 0xbf800000;
  *(uint *)(iVar2 + -0x111c) = 0;
  *(uint *)(iVar2 + -0x1324) = 0x42c80000;
  uStack_2c = 0;
  uStack_24 = 0x40000000;
  uStack_28 = 0;
  if ((uint *)(iVar2 + -0x1118) != &uStack_2c) {
    *(uint *)(iVar2 + -0x1114) = 0;
    *(uint *)(iVar2 + -0x1118) = 0;
    *(uint *)(iVar2 + -0x1110) = 0x40000000;
  }
  *(uint *)(iVar2 + -0x10e8) = 0xffffffff;
  *(uint *)(iVar2 + -0x10e4) = 0;
  *(uint *)(iVar2 + -0x10e0) = 0;
  *(uint *)(iVar2 + -0x10dc) = 0;
  *(uint *)(iVar2 + -0x10d8) = 0;
  iVar5 = iVar2 + -0x126c;
  FUN_005a28f0(iVar2 + -0x12b4,0,0xf0);
  iVar6 = iVar2 + -0x12a8;
  iStack_14 = iVar2 + -0x376c;
  iVar3 = iVar2 + -0x385c;
  do {
    *(uint *)(iVar3 + 0x25b0) = 0;
    *(uint *)(iVar3 + 0x25a8) = 0xffffffff;
    *(uint *)(iVar3 + 0x25ac) = 0xffffffff;
    FUN_005835d0(iVar6);
    iVar4 = iVar3 + 0x78;
    *(uint *)(iVar3 + 0x25e8) = 0x3f800000;
    FUN_005835d0(iVar5);
    iVar6 = iVar6 + 0x78;
    iVar5 = iVar5 + 0x78;
    iVar3 = iVar4;
  } while (iVar4 != iStack_14);
  *(uint *)(iVar2 + -0x10f4) = 0;
  *(uint *)(iVar2 + -0x10f0) = 0;
  *(uint *)(iVar2 + -0x10ec) = 0;
  *(uint *)(iVar2 + -0x10fc) = 0;
  *(uint *)(iVar2 + -0x10f8) = 0;
  *(uint *)(iVar2 + -0x10bc) = 0;
  *(uint *)(iVar2 + 0x840c) = 0;
  *(uint *)(iVar2 + -0x10b8) = 0;
  *(uint *)(iVar2 + -0x10b4) = 0;
  *(uint *)(iVar2 + -0x10b0) = 0;
  *(uint *)(iVar2 + -0x10ac) = 0;
  *(uint *)(iVar2 + -0x1160) = 0;
  *(uint *)(iVar2 + -0x115c) = 0;
  *(uint *)(iVar2 + -0x10a8) = 0;
  *(uint *)(iVar2 + 0x8414) = 0;
  *(uint *)(iVar2 + -0x10a4) = 0x3f800000;
  *(uint *)(iVar2 + -0x10a0) = 0;
  *(uint *)(iVar2 + -0x1098) = 0;
  *(uint *)(iVar2 + -0x95c) = 0;
  *(uint *)(iVar2 + -0x958) = 0;
  *(uint *)(iVar2 + -0x109c) = 1;
  *(uint *)(iVar2 + -0x131c) = 0;
  *(byte *)(iVar2 + -0x1318) = 0;
  *(uint *)(iVar2 + -0x624) = 0;
  *(uint *)(iVar2 + -0x614) = 0;
  *(uint *)(iVar2 + -0x1148) = 0;
  *(byte *)(iVar2 + -0x11c4) = 0;
  if ((uint *)(iVar2 + -0x1144) != auStack_38) {
    *(uint *)(iVar2 + -0x1144) = 0x461c1800;
    *(uint *)(iVar2 + -0x1140) = 0;
    *(uint *)(iVar2 + -0x113c) = 0x461c1800;
  }
  if ((uint *)(iVar2 + -0x1138) != auStack_20) {
    *(uint *)(iVar2 + -0x1138) = 0x45f2d000;
    *(uint *)(iVar2 + -0x1134) = 0;
    *(uint *)(iVar2 + -0x1130) = 0x45f2d000;
  }
  if ((uint *)(iVar2 + -0x112c) != auStack_44) {
    *(uint *)(iVar2 + -0x112c) = 0x45ad7000;
    *(uint *)(iVar2 + -0x1128) = 0;
    *(uint *)(iVar2 + -0x1124) = 0x45ad7000;
  }
  *(uint *)(iVar2 + -0x132c) = 0x40c90fdb;
  *(uint *)(iVar2 + -0x1330) = 0x40c90fdb;
  *(uint *)(iVar2 + -0x1328) = 0x40490fdb;
  *(uint *)(iVar2 + 0x951c) = 0;
  *(uint *)(iVar2 + 0x9520) = 0;
  *(uint *)(iVar2 + 0x9524) = 0;
  *(uint *)(iVar2 + 0x9530) = 0;
  *(uint *)(iVar2 + 0x9528) = 0;
  *(uint *)(iVar2 + 0x9534) = 0xfffffffe;
  *(uint *)(iVar2 + -0x608) = 0;
  *(uint *)(iVar2 + -0x600) = 0;
  *(uint *)(iVar2 + -0x604) = 0;
  *(uint *)(iVar2 + -0x5fc) = 0;
  *(uint *)(iVar2 + 0x9568) = 0;
  *(uint *)(iVar2 + 0x956c) = 0;
  *(uint *)(iVar2 + -0x5f8) = 1;
  uVar1 = _DAT_005dd238;
  *(uint *)(iVar2 + -0x5f4) = 0;
  *(uint *)(iVar2 + 0x952c) = uVar1;
  return iVar2 + -0x385c;
}
