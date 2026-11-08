// Name: FUN_0040b670
// Address: 0040b670
// Address Range: [[0040b670, 0040b6e3]]
// Convention: unknown
// Signature: void FUN_0040b670(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b670(uint *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = FUN_005c04b0(DAT_007c3034,&DAT_005d2aa9,param_1);
    if (iVar1 != 1) {
      FUN_0040b090("Integer value",param_2);
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,&DAT_005d2aac,&DAT_006106c0,*param_1);
  }
  FUN_0040b110("Integer value",param_2);
  return;
}
