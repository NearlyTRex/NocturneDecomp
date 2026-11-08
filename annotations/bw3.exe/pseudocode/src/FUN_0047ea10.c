// Name: FUN_0047ea10
// Address: 0047ea10
// Address Range: [[0047ea10, 0047eb02]]
// Convention: unknown
// Signature: undefined4 FUN_0047ea10(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,float param_5,float param_6,byte param_7)

#include "nocturne.h"

uint FUN_0047ea10(uint param_1,uint param_2,float *param_3,int param_4,float param_5,float param_6,byte param_7)

{
  int iVar1;
  byte local_38 [32];
  float local_18;
  
  if ((param_7 & 1) == 0) {
    local_38[0] = 0;
  }
  else {
    FUN_005a28c0(local_38,&DAT_005bcfe5,(double)*param_3);
  }
  while( true ) {
    while( true ) {
      iVar1 = FUN_0047ecf0(param_1,param_2,local_38,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_005a5b9c();
      if (iVar1 == 1) break;
      FUN_0047cf40();
    }
    if ((param_4 == 0) || ((param_5 <= local_18 && (local_18 <= param_6)))) break;
    FUN_0047cf40(param_1,"Please enter a valid integer between %g and %g.");
  }
  *param_3 = local_18;
  return 1;
}
