// Name: FUN_00495da0
// Address: 00495da0
// Address Range: [[00495da0, 00495e6a]]
// Convention: unknown
// Signature: undefined4 FUN_00495da0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,byte param_7)

#include "nocturne.h"

uint FUN_00495da0(uint param_1,uint param_2,int *param_3,int param_4,int param_5,int param_6,byte param_7)

{
  int iVar1;
  byte local_34 [32];
  int local_14;
  
  if ((param_7 & 1) == 0) {
    local_34[0] = 0;
  }
  else {
    FUN_005bfb40(local_34,&DAT_005dbed4,*param_3);
  }
  while( true ) {
    while( true ) {
      iVar1 = FUN_00496150(param_1,param_2,local_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_005c2cac(local_34,&DAT_005dbed7,&local_14);
      if (iVar1 == 1) break;
      FUN_004943a0(param_1,"Please enter a valid integer.");
    }
    if ((param_4 == 0) || ((param_5 <= local_14 && (local_14 <= param_6)))) break;
    FUN_004943a0(param_1,"Please enter a valid integer between %d and %d.",param_5,param_6);
  }
  *param_3 = local_14;
  return 1;
}
