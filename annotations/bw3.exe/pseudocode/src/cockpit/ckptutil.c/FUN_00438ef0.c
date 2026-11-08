// Name: FUN_00438ef0
// Address: 00438ef0
// Address Range: [[00438ef0, 00439038]]
// Convention: unknown
// Signature: int FUN_00438ef0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00438ef0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  byte local_8c [80];
  byte local_3c [44];
  
  if (param_2 == 0) {
    param_2 = FUN_005a3650(param_3);
    if (param_2 == 0) {
      FUN_005a28c0(local_8c,"Unable to allocate %u bytes for bitmap file (%s).",param_3,param_1);
      _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
      _DAT_01d71de4 = 0x98b;
      FUN_004e4330(local_8c);
    }
  }
  FUN_005738c0(local_3c);
  iVar1 = FUN_00573fc0(local_3c,&DAT_005b8ed8,param_1,1);
  if (iVar1 == 0) {
    FUN_005a28c0(local_8c,"Unable to open bitmap file (%s).",param_1);
    _DAT_01d71de4 = 0x994;
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    FUN_004e4330(local_8c);
  }
  iVar1 = FUN_00573c00(local_3c,param_2,param_3);
  if (iVar1 != param_3) {
    FUN_005a28c0(local_8c,"Unable to read bitmap file (%s).",param_1);
    FUN_00573db0(local_3c);
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x99c;
    FUN_004e4330(local_8c);
  }
  FUN_00573db0(local_3c);
  FUN_00573a40(local_3c,0);
  return param_2;
}
