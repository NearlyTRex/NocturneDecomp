// Name: FUN_0040b870
// Address: 0040b870
// Address Range: [[0040b870, 0040b95b]]
// Convention: unknown
// Signature: void FUN_0040b870(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b870(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s{ // %s\n",&DAT_006106c0,param_2);
    FUN_0040ad60(1);
    FUN_00525420(param_1,DAT_007c3034,&DAT_006106c0);
    FUN_0040ad60(0xffffffff);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2aff,&DAT_006106c0);
    return;
  }
  do {
    iVar1 = FUN_005c0530(DAT_007c3034);
    if (iVar1 < 0) {
      FUN_0040b090("motion state info opening brace",param_2);
    }
  } while (iVar1 != 10);
  FUN_00525380(param_1,DAT_007c3034);
  do {
    while( true ) {
      iVar1 = FUN_005c0530(DAT_007c3034);
      if (-1 < iVar1) break;
      FUN_0040b090("motion state info closing brace",param_2);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
