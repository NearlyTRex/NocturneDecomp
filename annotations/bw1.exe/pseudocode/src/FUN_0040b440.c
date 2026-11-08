// Name: FUN_0040b440
// Address: 0040b440
// Address Range: [[0040b440, 0040b553]]
// Convention: unknown
// Signature: void FUN_0040b440(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b440(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s\"%s\"",&DAT_006106c0,param_1);
    FUN_0040b110("String",param_2);
    return;
  }
  do {
    iVar1 = FUN_005c0530(DAT_007c3034);
  } while (((&DAT_00626114)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    FUN_0040b090("String",param_2);
  }
  iVar1 = FUN_005c0530(DAT_007c3034);
  if (iVar1 == 0x22) {
    *param_1 = 0;
  }
  else {
    FUN_005c0700(iVar1,DAT_007c3034);
    iVar1 = FUN_005c04b0(DAT_007c3034,"%[^\"]",param_1);
    if (iVar1 != 1) {
      FUN_0040b090("String",param_2);
    }
    iVar1 = FUN_005c0530(DAT_007c3034);
    if (iVar1 != 0x22) {
      FUN_0040b090("String",param_2);
      FUN_0040b110("String",param_2);
      return;
    }
  }
  FUN_0040b110("String",param_2);
  return;
}
