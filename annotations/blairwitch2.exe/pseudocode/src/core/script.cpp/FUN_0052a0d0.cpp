// Name: FUN_0052a0d0
// Address: 0052a0d0
// Address Range: [[0052a0d0, 0052a3f6]]
// Convention: unknown
// Signature: int FUN_0052a0d0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052a0d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  FUN_005b9600(local_118,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005e503e,&local_18);
  if (6 < local_18) {
    _DAT_01d046a0 = "..\\core\\script.cpp";
    _DAT_01d046a4 = 0x124e;
    FUN_004e4500("CScript::loadState - file version is newer than .EXE");
  }
  FUN_005b9600(local_118,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005e508a,0x01CB6900 + 0x244);
  if (1 < local_18) {
    FUN_005b9600(local_118,0xff,param_2);
    FUN_005b8100(param_2,&DAT_005e508e,0x01CB6900 + 0x248);
  }
  if (2 < local_18) {
    FUN_005b9600(local_118,0xff,param_2);
    FUN_005b8100(param_2,&DAT_005e5092,0x01CB6900 + 0x24c);
  }
  FUN_005b9600(local_118,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005e5096,&DAT_01e65900);
  FUN_005b9600(local_118,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005e509a,param_1 + 0x44);
  FUN_005b9600(local_118,0xff,param_2);
  *(byte *)(param_1 + 0x50) = 0;
  FUN_005b8100(param_2,"\"%[^\"]",param_1 + 0x50);
  FUN_005b8100(param_2,&DAT_005e50a5,param_1 + 0x50);
  FUN_005b9600(local_118,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005e50a8,param_1 + 0x48);
  FUN_005b9600(local_118,0xff,param_2);
  FUN_005b8100(param_2,&DAT_005e50ac,param_1 + 0x4c);
  FUN_005b9600(local_118,0xff,param_2);
  FUN_0052a010(param_2,param_1 + 4);
  FUN_005b9600(local_118,0xff,param_2);
  iVar1 = FUN_0052a010(param_2,param_1 + 0xc);
  if (4 < local_18) {
    FUN_005b9600(local_118,0xff,param_2);
    iVar1 = FUN_005b8100(param_2,&DAT_005e50b0,param_1 + 0x14);
  }
  if (3 < local_18) {
    FUN_005b9600(local_118,0xff,param_2);
    iVar3 = 0;
    iVar1 = FUN_005b8100(param_2,&DAT_005e50b4,param_1 + 0x458);
    if (0 < *(int *)(param_1 + 0x458)) {
      iVar2 = param_1 + 0x45c;
      do {
        iVar3 = iVar3 + 1;
        FUN_005b8100(param_2,&DAT_005e50b8,iVar2);
        iVar1 = *(int *)(param_1 + 0x458);
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  if (5 < local_18) {
    FUN_005b9600(local_118,0xff,param_2);
    FUN_005b8100(param_2,&DAT_005e50bc,&local_14);
    iVar1 = FUN_0052a630(param_1);
    if (iVar1 != local_14) {
      iVar1 = FUN_0047bdf0(0x01C25594,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return iVar1;
    }
  }
  return iVar1;
}
