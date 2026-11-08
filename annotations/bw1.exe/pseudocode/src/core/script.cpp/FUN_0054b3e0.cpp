// Name: FUN_0054b3e0
// Address: 0054b3e0
// Address Range: [[0054b3e0, 0054b706]]
// Convention: unknown
// Signature: int FUN_0054b3e0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054b3e0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  FUN_005c1180(local_118,0xff,param_2);
  FUN_005c04b0(param_2,&DAT_005f0062,&local_18);
  if (6 < local_18) {
    _DAT_01d1d400 = "..\\core\\script.cpp";
    _DAT_01d1d404 = 0x10e6;
    FUN_005030e0("CScript::loadState - file version is newer than .EXE");
  }
  FUN_005c1180(local_118,0xff,param_2);
  FUN_005c04b0(param_2,&DAT_005f00ae,0x01CCF390 + 0x244);
  if (1 < local_18) {
    FUN_005c1180(local_118,0xff,param_2);
    FUN_005c04b0(param_2,&DAT_005f00b2,0x01CCF390 + 0x248);
  }
  if (2 < local_18) {
    FUN_005c1180(local_118,0xff,param_2);
    FUN_005c04b0(param_2,&DAT_005f00b6,0x01CCF390 + 0x24c);
  }
  FUN_005c1180(local_118,0xff,param_2);
  FUN_005c04b0(param_2,&DAT_005f00ba,&DAT_01e818b0);
  FUN_005c1180(local_118,0xff,param_2);
  FUN_005c04b0(param_2,&DAT_005f00be,param_1 + 0x44);
  FUN_005c1180(local_118,0xff,param_2);
  *(byte *)(param_1 + 0x50) = 0;
  FUN_005c04b0(param_2,"\"%[^\"]",param_1 + 0x50);
  FUN_005c04b0(param_2,&DAT_005f00c9,param_1 + 0x50);
  FUN_005c1180(local_118,0xff,param_2);
  FUN_005c04b0(param_2,&DAT_005f00cc,param_1 + 0x48);
  FUN_005c1180(local_118,0xff,param_2);
  FUN_005c04b0(param_2,&DAT_005f00d0,param_1 + 0x4c);
  FUN_005c1180(local_118,0xff,param_2);
  FUN_0054b320(param_2,param_1 + 4);
  FUN_005c1180(local_118,0xff,param_2);
  iVar1 = FUN_0054b320(param_2,param_1 + 0xc);
  if (4 < local_18) {
    FUN_005c1180(local_118,0xff,param_2);
    iVar1 = FUN_005c04b0(param_2,&DAT_005f00d4,param_1 + 0x14);
  }
  if (3 < local_18) {
    FUN_005c1180(local_118,0xff,param_2);
    iVar3 = 0;
    iVar1 = FUN_005c04b0(param_2,&DAT_005f00d8,param_1 + 0x458);
    if (0 < *(int *)(param_1 + 0x458)) {
      iVar2 = param_1 + 0x45c;
      do {
        iVar3 = iVar3 + 1;
        FUN_005c04b0(param_2,&DAT_005f00dc,iVar2);
        iVar1 = *(int *)(param_1 + 0x458);
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  if (5 < local_18) {
    FUN_005c1180(local_118,0xff,param_2);
    FUN_005c04b0(param_2,&DAT_005f00e0,&local_14);
    iVar1 = FUN_0054b940(param_1);
    if (iVar1 != local_14) {
      iVar1 = FUN_00494340(0x01C3EB54,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return iVar1;
    }
  }
  return iVar1;
}
