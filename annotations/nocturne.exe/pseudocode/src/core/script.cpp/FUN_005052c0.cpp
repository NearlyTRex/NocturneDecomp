// Name: FUN_005052c0
// Address: 005052c0
// Address Range: [[005052c0, 005055e6]]
// Convention: unknown
// Signature: int FUN_005052c0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005052c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00563350(param_2,&DAT_0058fcc6,&local_18);
  if (6 < local_18) {
    _DAT_01cc4800 = "..\\core\\script.cpp";
    _DAT_01cc4804 = 0xf56;
    FUN_004c8440("CScript::loadState - file version is newer than .EXE");
  }
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00563350(param_2,&DAT_0058fd12,0x01C775EC + 0x228);
  if (1 < local_18) {
    FUN_00564b20(local_118,0xff,param_2);
    FUN_00563350(param_2,&DAT_0058fd16,0x01C775EC + 0x22c);
  }
  if (2 < local_18) {
    FUN_00564b20(local_118,0xff,param_2);
    FUN_00563350(param_2,&DAT_0058fd1a,0x01C775EC + 0x230);
  }
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00563350(param_2,&DAT_0058fd1e,&DAT_01e56c20);
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00563350(param_2,&DAT_0058fd22,param_1 + 0x40);
  FUN_00564b20(local_118,0xff,param_2);
  *(byte *)(param_1 + 0x4c) = 0;
  FUN_00563350(param_2,"\"%[^\"]",param_1 + 0x4c);
  FUN_00563350(param_2,&DAT_0058fd2d,param_1 + 0x4c);
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00563350(param_2,&DAT_0058fd30,param_1 + 0x44);
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00563350(param_2,&DAT_0058fd34,param_1 + 0x48);
  FUN_00564b20(local_118,0xff,param_2);
  FUN_00505200(param_2,param_1 + 4);
  FUN_00564b20(local_118,0xff,param_2);
  iVar1 = FUN_00505200(param_2,param_1 + 0xc);
  if (4 < local_18) {
    FUN_00564b20(local_118,0xff,param_2);
    iVar1 = FUN_00563350(param_2,&DAT_0058fd38,param_1 + 0x14);
  }
  if (3 < local_18) {
    FUN_00564b20(local_118,0xff,param_2);
    iVar3 = 0;
    iVar1 = FUN_00563350(param_2,&DAT_0058fd3c,param_1 + 0x454);
    if (0 < *(int *)(param_1 + 0x454)) {
      iVar2 = param_1 + 0x458;
      do {
        iVar3 = iVar3 + 1;
        FUN_00563350(param_2,&DAT_0058fd40,iVar2);
        iVar1 = *(int *)(param_1 + 0x454);
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  if (5 < local_18) {
    FUN_00564b20(local_118,0xff,param_2);
    FUN_00563350(param_2,&DAT_0058fd44,&local_14);
    iVar1 = FUN_00505820(param_1);
    if (iVar1 != local_14) {
      iVar1 = FUN_0046fb40(0x01BCD074,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return iVar1;
    }
  }
  return iVar1;
}
