// Name: FUN_00403fb0
// Address: 00403fb0
// Address Range: [[00403fb0, 00404086]]
// Convention: unknown
// Signature: uint FUN_00403fb0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint FUN_00403fb0(byte *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte local_114 [256];
  uint local_14;
  
  *param_1 = 0;
  FUN_00403f50();
  iVar3 = 0;
  do {
    FUN_00563c90(local_114,"%s%s_    ",param_5,param_1);
    FUN_00402600(local_114,param_3,param_4);
    FUN_00553910();
    bVar2 = FUN_00558b00();
    local_14 = (uint)bVar2;
    if (local_14 == 0xd) {
LAB_0040406b:
      FUN_00553910();
      FUN_00403f50();
      return local_14;
    }
    if (local_14 == 0x1b) {
      *param_1 = 0;
      goto LAB_0040406b;
    }
    if ((local_14 == 8) && (0 < iVar3)) {
      iVar3 = iVar3 + -1;
      param_1[iVar3] = 0;
    }
    if (((0x1f < local_14) && (local_14 < 0x80)) && (iVar3 < param_2)) {
      pbVar1 = param_1 + iVar3;
      iVar3 = iVar3 + 1;
      *pbVar1 = bVar2;
      param_1[iVar3] = 0;
    }
  } while( true );
}
