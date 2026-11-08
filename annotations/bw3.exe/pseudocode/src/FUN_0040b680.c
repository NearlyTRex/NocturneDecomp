// Name: FUN_0040b680
// Address: 0040b680
// Address Range: [[0040b680, 0040b793]]
// Convention: unknown
// Signature: void FUN_0040b680(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b680(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s\"%s\"",&DAT_005f0990,param_1);
    FUN_0040b350("String",param_2);
    return;
  }
  do {
    iVar1 = FUN_005a32b0(DAT_007df9b4);
  } while (((&DAT_006074b8)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    FUN_0040b2d0("String",param_2);
  }
  iVar1 = FUN_005a32b0(DAT_007df9b4);
  if (iVar1 == 0x22) {
    *param_1 = 0;
  }
  else {
    FUN_005a3480(iVar1,DAT_007df9b4);
    iVar1 = FUN_005a3230(DAT_007df9b4,"%[^\"]",param_1);
    if (iVar1 != 1) {
      FUN_0040b2d0("String",param_2);
    }
    iVar1 = FUN_005a32b0(DAT_007df9b4);
    if (iVar1 != 0x22) {
      FUN_0040b2d0("String",param_2);
      FUN_0040b350("String",param_2);
      return;
    }
  }
  FUN_0040b350("String",param_2);
  return;
}
