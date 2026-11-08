// Name: FUN_00530ad0
// Address: 00530ad0
// Address Range: [[00530ad0, 00530df6]]
// Convention: unknown
// Signature: int FUN_00530ad0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00530ad0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005cfcf3,&local_18);
  if (6 < local_18) {
    _DAT_01d71de0 = "..\\core\\script.cpp";
    _DAT_01d71de4 = 0x10ec;
    FUN_004e4330("CScript::loadState - file version is newer than .EXE");
  }
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005cfd3f,0x01D2130C + 0x24c);
  if (1 < local_18) {
    FUN_005a3f00(local_118,0xff,param_2);
    FUN_005a3230(param_2,&DAT_005cfd43,0x01D2130C + 0x250);
  }
  if (2 < local_18) {
    FUN_005a3f00(local_118,0xff,param_2);
    FUN_005a3230(param_2,&DAT_005cfd47,0x01D2130C + 0x254);
  }
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005cfd4b,&DAT_01ed7010);
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005cfd4f,param_1 + 0x44);
  FUN_005a3f00(local_118,0xff,param_2);
  *(byte *)(param_1 + 0x50) = 0;
  FUN_005a3230(param_2,"\"%[^\"]",param_1 + 0x50);
  FUN_005a3230(param_2,&DAT_005cfd5a,param_1 + 0x50);
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005cfd5d,param_1 + 0x48);
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005cfd61,param_1 + 0x4c);
  FUN_005a3f00(local_118,0xff,param_2);
  FUN_00530a10(param_2,param_1 + 4);
  FUN_005a3f00(local_118,0xff,param_2);
  iVar1 = FUN_00530a10(param_2,param_1 + 0xc);
  if (4 < local_18) {
    FUN_005a3f00(local_118,0xff,param_2);
    iVar1 = FUN_005a3230(param_2,&DAT_005cfd65,param_1 + 0x14);
  }
  if (3 < local_18) {
    FUN_005a3f00(local_118,0xff,param_2);
    iVar3 = 0;
    iVar1 = FUN_005a3230(param_2,&DAT_005cfd69,param_1 + 0x458);
    if (0 < *(int *)(param_1 + 0x458)) {
      iVar2 = param_1 + 0x45c;
      do {
        iVar3 = iVar3 + 1;
        FUN_005a3230(param_2,&DAT_005cfd6d,iVar2);
        iVar1 = *(int *)(param_1 + 0x458);
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  if (5 < local_18) {
    FUN_005a3f00(local_118,0xff,param_2);
    FUN_005a3230(param_2,&DAT_005cfd71,&local_14);
    iVar1 = FUN_00531030(param_1);
    if (iVar1 != local_14) {
      iVar1 = FUN_0047cee0(0x01C5B0E4,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return iVar1;
    }
  }
  return iVar1;
}
