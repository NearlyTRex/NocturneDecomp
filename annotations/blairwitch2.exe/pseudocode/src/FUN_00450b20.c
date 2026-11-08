// Name: FUN_00450b20
// Address: 00450b20
// Address Range: [[00450b20, 00450c16]]
// Convention: unknown
// Signature: void FUN_00450b20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450b20(int param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  FUN_0042b5e0(param_1,param_2);
  uVar1 = *(uint *)(0x01CB6900 + 0x284);
  iVar3 = FUN_005035c0(param_1 + 0x2b4);
  bVar2 = false;
  switch(*(uint *)(iVar3 + 0x24)) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1b:
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x256a4) == 7) || (fVar4 = param_2, bVar2)) {
    fVar4 = param_2 * (float)_DAT_005cfe37;
    FUN_00450c60(param_1,fVar4);
    FUN_00450c60(param_1,fVar4);
    FUN_00450c60(param_1,fVar4);
  }
  FUN_00450c60(param_1,fVar4);
  FUN_004bd460(0x01CB6900,uVar1);
  FUN_005a8180(param_1 + 0x154,param_2);
  return;
}
