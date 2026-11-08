// Name: FUN_0042c520
// Address: 0042c520
// Address Range: [[0042c520, 0042c666]]
// Convention: unknown
// Signature: int FUN_0042c520(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042c520(uint param_1,int param_2,int param_3)

{
  int iVar1;
  byte local_88 [80];
  byte local_38 [40];
  
  if (param_2 == 0) {
    param_2 = FUN_005b8580(param_3);
    if (param_2 == 0) {
      FUN_005b7790(local_88,"@Unable to allocate %u bytes for bitmap file (%s)." + 1,param_3,param_1);
      _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
      _DAT_01d046a4 = 0xe8;
      FUN_004e4500(local_88);
    }
  }
  FUN_0057cd50(local_38);
  iVar1 = FUN_0057d390(local_38,&DAT_005cd38e,param_1);
  if (iVar1 == 0) {
    FUN_005b7790(local_88,"Unable to open bitmap file (%s).",param_1);
    _DAT_01d046a4 = 0xf1;
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    FUN_004e4500(local_88);
  }
  iVar1 = FUN_0057cfe0(local_38,param_2,param_3);
  if (iVar1 != param_3) {
    FUN_005b7790(local_88,"Unable to read bitmap file (%s).",param_1);
    FUN_0057d180(local_38);
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0xf9;
    FUN_004e4500(local_88);
  }
  FUN_0057d180(local_38);
  FUN_0057cec0(local_38,0);
  return param_2;
}
