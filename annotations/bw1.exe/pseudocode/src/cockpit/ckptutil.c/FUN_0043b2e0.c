// Name: FUN_0043b2e0
// Address: 0043b2e0
// Address Range: [[0043b2e0, 0043b428]]
// Convention: unknown
// Signature: int FUN_0043b2e0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043b2e0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  byte local_8c [80];
  byte local_3c [44];
  
  if (param_2 == 0) {
    param_2 = FUN_005c08d0(param_3);
    if (param_2 == 0) {
      FUN_005bfb40(local_8c,"Unable to allocate %u bytes for bitmap file (%s).",param_3,param_1);
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      _DAT_01d1d404 = 0x98b;
      FUN_005030e0(local_8c);
    }
  }
  FUN_005a08d0(local_3c);
  iVar1 = FUN_005a0fd0(local_3c,&DAT_005d6668,param_1,1);
  if (iVar1 == 0) {
    FUN_005bfb40(local_8c,"Unable to open bitmap file (%s).",param_1);
    _DAT_01d1d404 = 0x994;
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    FUN_005030e0(local_8c);
  }
  iVar1 = FUN_005a0c10(local_3c,param_2,param_3);
  if (iVar1 != param_3) {
    FUN_005bfb40(local_8c,"Unable to read bitmap file (%s).",param_1);
    FUN_005a0dc0(local_3c);
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    _DAT_01d1d404 = 0x99c;
    FUN_005030e0(local_8c);
  }
  FUN_005a0dc0(local_3c);
  FUN_005a0a50(local_3c,0);
  return param_2;
}
