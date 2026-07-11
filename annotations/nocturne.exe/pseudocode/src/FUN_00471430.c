// Name: FUN_00471430
// Address: 00471430
// Address Range: [[00471430, 00471522]]
// Convention: unknown
// Signature: undefined4 FUN_00471430(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,float param_5,float param_6,byte param_7)

#include "nocturne.h"

uint FUN_00471430(uint param_1,uint param_2,float *param_3,int param_4,float param_5,float param_6,byte param_7)

{
  int iVar1;
  byte local_38 [32];
  float local_18;
  
  if ((param_7 & 1) == 0) {
    local_38[0] = 0;
  }
  else {
    FUN_00563c90(local_38,&DAT_0057e7a5,(double)*param_3);
  }
  while( true ) {
    while( true ) {
      iVar1 = FUN_00471600(param_1,param_2,local_38,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00566b5c();
      if (iVar1 == 1) break;
      FUN_0046fcd0();
    }
    if ((param_4 == 0) || ((param_5 <= local_18 && (local_18 <= param_6)))) break;
    FUN_0046fcd0(param_1,"Please enter a valid integer between %7g and %7g.");
  }
  *param_3 = local_18;
  return 1;
}
