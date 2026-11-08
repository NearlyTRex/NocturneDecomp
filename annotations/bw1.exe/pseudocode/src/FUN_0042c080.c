// Name: FUN_0042c080
// Address: 0042c080
// Address Range: [[0042c080, 0042c504]]
// Convention: unknown
// Signature: int FUN_0042c080(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042c080(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_44 [3];
  uint local_38 [3];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20 [3];
  int local_14;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00567370(iVar2 + 0x158);
  iVar2 = FUN_00441c60(iVar2 + 0x2b48);
  iVar2 = FUN_005c0357(iVar2 + 0x1c8,0xf,&DAT_005fb430);
  iVar2 = FUN_005c0357(iVar2 + 0xb4,0xf,&DAT_005fb430);
  iVar2 = FUN_005c0357(iVar2 + 0x210,0x32,&DAT_005fd770);
  iVar2 = FUN_005c0357(iVar2 + 0x4b0,0x32,&DAT_005fb960);
  *(byte ***)(iVar2 + -0x3488) = &PTR_FUN_005fd624;
  *(uint *)(iVar2 + -0x10e0) = 0;
  *(uint *)(iVar2 + -0x10bc) = 0;
  *(uint *)(iVar2 + -0x10c0) = *(uint *)(iVar2 + -0x10bc);
  *(uint *)(iVar2 + -0x10c4) = *(uint *)(iVar2 + -0x10c0);
  *(uint *)(iVar2 + -0x10a0) = 0x42c80000;
  *(uint *)(iVar2 + -0x5f0) = 0x3f800000;
  *(uint *)(iVar2 + -0x5ec) = 0x40000000;
  *(uint *)(iVar2 + -0x5e8) = 0x41a00000;
  *(uint *)(iVar2 + -0x5e4) = 0x42480000;
  *(uint *)(iVar2 + -0x5e0) = 0x40000000;
  *(uint *)(iVar2 + -0x5dc) = 0xc479c000;
  *(uint *)(iVar2 + -0x5d8) = 0;
  *(uint *)(iVar2 + -0x4bc) = 0;
  *(uint *)(iVar2 + -0x4b4) = 0x40000000;
  *(uint *)(iVar2 + -0xe88) = 0xffffffff;
  *(uint *)(iVar2 + -0xe80) = 0;
  *(uint *)(iVar2 + -0xe8c) = 0xffffffff;
  *(uint *)(iVar2 + -0x5f8) = 0;
  *(uint *)(iVar2 + -0xea0) = 0;
  *(uint *)(iVar2 + -0xed8) = 0;
  *(uint *)(iVar2 + -0xed4) = 0x40400000;
  *(uint *)(iVar2 + -0xed0) = 0x7149f2ca;
  *(uint *)(iVar2 + -0xecc) = 0xbf800000;
  *(uint *)(iVar2 + -0xe9c) = 0;
  *(uint *)(iVar2 + -0x10a4) = 0x42c80000;
  local_2c = 0;
  local_24 = 0x40000000;
  local_28 = 0;
  if ((uint *)(iVar2 + -0xe98) != &local_2c) {
    *(uint *)(iVar2 + -0xe94) = 0;
    *(uint *)(iVar2 + -0xe98) = 0;
    *(uint *)(iVar2 + -0xe90) = 0x40000000;
  }
  *(uint *)(iVar2 + -0xe68) = 0xffffffff;
  *(uint *)(iVar2 + -0xe64) = 0;
  *(uint *)(iVar2 + -0xe60) = 0;
  *(uint *)(iVar2 + -0xe5c) = 0;
  *(uint *)(iVar2 + -0xe58) = 0;
  iVar5 = iVar2 + -0xfec;
  FUN_005bfb70(iVar2 + -0x1034,0,0xf0);
  iVar6 = iVar2 + -0x1028;
  local_14 = iVar2 + -0x34ec;
  iVar3 = iVar2 + -0x35dc;
  do {
    *(uint *)(iVar3 + 0x25b0) = 0;
    *(uint *)(iVar3 + 0x25a8) = 0xffffffff;
    *(uint *)(iVar3 + 0x25ac) = 0xffffffff;
    FUN_005b53f0(iVar6);
    iVar4 = iVar3 + 0x78;
    *(uint *)(iVar3 + 0x25e8) = 0x3f800000;
    FUN_005b53f0(iVar5);
    iVar6 = iVar6 + 0x78;
    iVar5 = iVar5 + 0x78;
    iVar3 = iVar4;
  } while (iVar4 != local_14);
  *(uint *)(iVar2 + -0xe74) = 0;
  *(uint *)(iVar2 + -0xe70) = 0;
  *(uint *)(iVar2 + -0xe6c) = 0;
  *(uint *)(iVar2 + -0xe7c) = 0;
  *(uint *)(iVar2 + -0xe78) = 0;
  *(uint *)(iVar2 + -0xe3c) = 0;
  *(uint *)(iVar2 + 0x840c) = 0;
  *(uint *)(iVar2 + -0xe38) = 0;
  *(uint *)(iVar2 + -0xe34) = 0;
  *(uint *)(iVar2 + -0xe30) = 0;
  *(uint *)(iVar2 + -0xe2c) = 0;
  *(uint *)(iVar2 + -0xee0) = 0;
  *(uint *)(iVar2 + -0xedc) = 0;
  *(uint *)(iVar2 + -0xe28) = 0;
  *(uint *)(iVar2 + 0x8414) = 0;
  *(uint *)(iVar2 + -0xe24) = 0x3f800000;
  *(uint *)(iVar2 + -0xe20) = 0;
  *(uint *)(iVar2 + -0xe18) = 0;
  *(uint *)(iVar2 + -0x944) = 0;
  *(uint *)(iVar2 + -0x940) = 0;
  *(uint *)(iVar2 + -0xe1c) = 1;
  *(uint *)(iVar2 + -0x109c) = 0;
  *(byte *)(iVar2 + -0x1098) = 0;
  *(uint *)(iVar2 + -0x780) = 0;
  *(uint *)(iVar2 + -0x77c) = 0;
  *(uint *)(iVar2 + -0x778) = 0;
  *(uint *)(iVar2 + -0x60c) = 0;
  *(uint *)(iVar2 + -0x5fc) = 0;
  *(uint *)(iVar2 + -0xec8) = 0;
  *(byte *)(iVar2 + -0xf44) = 0;
  if ((uint *)(iVar2 + -0xec4) != local_38) {
    *(uint *)(iVar2 + -0xec4) = 0x461c1800;
    *(uint *)(iVar2 + -0xec0) = 0;
    *(uint *)(iVar2 + -0xebc) = 0x461c1800;
  }
  if ((uint *)(iVar2 + -0xeb8) != local_20) {
    *(uint *)(iVar2 + -0xeb8) = 0x45f2d000;
    *(uint *)(iVar2 + -0xeb4) = 0;
    *(uint *)(iVar2 + -0xeb0) = 0x45f2d000;
  }
  if ((uint *)(iVar2 + -0xeac) != local_44) {
    *(uint *)(iVar2 + -0xeac) = 0x45ad7000;
    *(uint *)(iVar2 + -0xea8) = 0;
    *(uint *)(iVar2 + -0xea4) = 0x45ad7000;
  }
  *(uint *)(iVar2 + -0x10ac) = 0x40490fdb;
  *(uint *)(iVar2 + -0x10b0) = 0x40c90fdb;
  *(uint *)(iVar2 + -0x10a8) = 0x40490fdb;
  *(uint *)(iVar2 + 0x8ba8) = 0;
  *(uint *)(iVar2 + 0x8bac) = 0;
  *(uint *)(iVar2 + 0x8bb0) = 0;
  *(uint *)(iVar2 + 0x8bbc) = 0;
  *(uint *)(iVar2 + 0x8bb4) = 0;
  uVar1 = _DAT_005fd618;
  *(uint *)(iVar2 + 0x8bc0) = 0xfffffffe;
  *(uint *)(iVar2 + 0x8bb8) = uVar1;
  return iVar2 + -0x35dc;
}
