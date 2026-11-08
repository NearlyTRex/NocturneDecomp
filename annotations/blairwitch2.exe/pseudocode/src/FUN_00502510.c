// Name: FUN_00502510
// Address: 00502510
// Address Range: [[00502510, 005026fb]]
// Convention: unknown
// Signature: void FUN_00502510(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00502510(void)

{
  int iVar1;
  float10 fVar2;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  FUN_00553580();
  FUN_0055b1f0();
  local_54 = 0x3ee1f6a9;
  local_50 = 0x3f290d17;
  local_4c = 0xbf1b8a5d;
  local_48 = 0xbe8f4c90;
  local_44 = 0x3f3e9ec3;
  local_40 = 0x3f1b2218;
  local_3c = 0x3f5a429e;
  local_38 = 0xbdc77681;
  local_34 = 0x3f037100;
  local_2c = 0x404a54de;
  local_28 = 0x40f41b09;
  local_24 = 0xc0e128b7;
  FUN_0046afb0(DAT_0060b280,&local_2c);
  FUN_0046b4b0(DAT_0060b280,0x422c9ce4);
  FUN_0046b060(DAT_0060b280,&local_54);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_0046b2b0(DAT_0060b280,&local_20);
  iVar1 = 0x01E661B8;
  *(uint *)(0x01E661B8 + 0x15ae84) = 1;
  *(uint *)(iVar1 + 0x15ae88) = 0xffff6f78;
  *(uint *)(iVar1 + 0x15ae8c) = 0xffff6f78;
  *(uint *)(iVar1 + 0x15ae90) = 37000;
  FUN_005344c0(iVar1,50000,50000,0x10000);
  iVar1 = 0x01E661B8;
  DAT_0061846c = DAT_0061846c + 1;
  *(uint *)(0x01E661B8 + 0x15ae94) = 0x1964;
  DAT_00618474 = DAT_00618474 + 1;
  *(uint *)(iVar1 + 0x15ae84) = 0;
  DAT_00618470 = DAT_00618470 + 1;
  if (0x3c < DAT_0061846c) {
    DAT_0061846c = 0;
  }
  if (0x2d < DAT_00618470) {
    DAT_00618470 = 0;
  }
  if (0x4b < DAT_00618474) {
    DAT_00618474 = 0;
  }
  FUN_00406df0(1);
  fVar2 = (float10)_DAT_01d1cdc4;
  FUN_005b7ff0();
  local_14 = (int)ROUND(fVar2);
  if (0x4a < local_14) {
    local_14 = 0;
  }
  FUN_0040d900(local_14 * 0x14 + 0x1d1c7cc,0,0,0xffff);
  FUN_00406df0(0);
  return;
}
