// Name: FUN_00562f30
// Address: 00562f30
// Address Range: [[00562f30, 00562fff]]
// Convention: unknown
// Signature: void FUN_00562f30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562f30(int param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
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
  if ((*(int *)(param_1 + 0x256a4) == 7) || (bVar2)) {
    param_2 = param_2 * (float)_DAT_005eb49d;
    FUN_00563060(param_1,param_2);
    FUN_00563060(param_1,param_2);
    FUN_00563060(param_1,param_2);
  }
  FUN_00563060(param_1,param_2);
  FUN_004bd460(0x01CB6900,uVar1);
  return;
}
