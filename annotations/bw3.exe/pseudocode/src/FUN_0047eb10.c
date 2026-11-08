// Name: FUN_0047eb10
// Address: 0047eb10
// Address Range: [[0047eb10, 0047ec13]]
// Convention: unknown
// Signature: undefined4 FUN_0047eb10(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9 )

#include "nocturne.h"

uint FUN_0047eb10(uint param_1,uint param_2,uint *param_3,int param_4,uint param_5,uint param_6,uint param_7,uint param_8,byte param_9 )

{
  int iVar1;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  byte auStack_30 [32];
  
  uStack_40 = param_5;
  uStack_3c = param_6;
  uStack_38 = param_7;
  uStack_34 = param_8;
  if ((param_9 & 1) == 0) {
    auStack_30[0] = 0;
  }
  else {
    FUN_005a28c0(auStack_30,0x5bd038,*param_3,param_3[1]);
  }
  while( true ) {
    while( true ) {
      iVar1 = FUN_0047ecf0(param_1,param_2,auStack_30,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_005a5b9c(auStack_30,0x5bd03e,&uStack_48);
      if (iVar1 == 1) break;
      FUN_0047cf40(param_1,"Please enter a valid number.");
    }
    if ((param_4 == 0) ||
       ((__BITCAST_DOUBLE(CONCAT44(uStack_3c,uStack_40)) <= __BITCAST_DOUBLE(CONCAT44(uStack_44,uStack_48)) &&
        (__BITCAST_DOUBLE(CONCAT44(uStack_44,uStack_48)) <= __BITCAST_DOUBLE(CONCAT44(uStack_34,uStack_38)))))) break;
    FUN_0047cf40(param_1,"Please enter a valid integer between %.15g and %.15g.",uStack_40,uStack_3c,uStack_38,uStack_34
                );
  }
  *param_3 = uStack_48;
  param_3[1] = uStack_44;
  return 1;
}
