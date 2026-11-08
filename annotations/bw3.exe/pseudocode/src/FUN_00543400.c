// Name: FUN_00543400
// Address: 00543400
// Address Range: [[00543400, 005434c8]]
// Convention: unknown
// Signature: void FUN_00543400(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543400(void)

{
  _DAT_0270f7c0 = 0xbe8f5c29;
  _DAT_0270f7c4 = 0x3ed70a3d;
  _DAT_0270f7c8 = 0x3f19999a;
  _DAT_0270f7cc = 0x3eb33333;
  _DAT_0270f7d0 = 0x3ed70a3d;
  _DAT_0270f7d4 = 0x3f19999a;
  FUN_0040c3a0(0x270f818,"CCShadow" + 1,&UNK_005434d0,&DAT_006040b4,2,0x1c5bc10);
  FUN_0040c3a0(0x270f854,"CShadow_Forest",&UNK_00545e70,0x6040d0,1,0x270f818);
  FUN_0040c3a0(0x270f890,"CSpiritShadow",&UNK_00545f00,0x6040d4,1,0x270f818);
  FUN_0040c3a0(0x270f8cc,"CDemonShadow",&UNK_00545f90,0x6040d8,1,0x270f818);
  return;
}
