// Name: FUN_0040b730
// Address: 0040b730
// Address Range: [[0040b730, 0040b843]]
// Convention: unknown
// Signature: void FUN_0040b730(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b730(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s\"%s\"",&DAT_00609590,param_1);
    FUN_0040b400("String",param_2);
    return;
  }
  do {
    iVar1 = FUN_005b8180(DAT_007bc034);
  } while (((&DAT_0061ed94)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    FUN_0040b380("String",param_2);
  }
  iVar1 = FUN_005b8180(DAT_007bc034);
  if (iVar1 == 0x22) {
    *param_1 = 0;
  }
  else {
    FUN_005b8350(iVar1,DAT_007bc034);
    iVar1 = FUN_005b8100(DAT_007bc034,"%[^\"]",param_1);
    if (iVar1 != 1) {
      FUN_0040b380("String",param_2);
    }
    iVar1 = FUN_005b8180(DAT_007bc034);
    if (iVar1 != 0x22) {
      FUN_0040b380("String",param_2);
      FUN_0040b400("String",param_2);
      return;
    }
  }
  FUN_0040b400("String",param_2);
  return;
}
