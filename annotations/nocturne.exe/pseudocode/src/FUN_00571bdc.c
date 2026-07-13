// Name: FUN_00571bdc
// Address: 00571bdc
// Address Range: [[00571bdc, 00571c5f]]
// Convention: unknown
// Signature: undefined4 FUN_00571bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

uint FUN_00571bdc(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int param_6,uint param_7)

{
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  float10 fStack_24;
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  fStack_24 = (float10)__BITCAST_DOUBLE(CONCAT44(param_2,param_1));
  if (param_6 != 0x46) {
    uStack_48 = 0xc;
  }
  else {
    uStack_48 = 10;
  }
  uStack_4c = (uint)(param_6 != 0x46);
  uStack_50 = param_3;
  uStack_40 = 0;
  iStack_44 = param_6;
  FUN_0056a388(&fStack_24,&uStack_50,param_7);
  *param_4 = uStack_38;
  *param_5 = uStack_3c;
  return param_7;
}
