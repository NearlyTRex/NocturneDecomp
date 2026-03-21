// Name: crt_unknown.c_FUN_0060d48c
// Address: 0060d48c
// Address Range: [[0060d48c, 0060d50f]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0060d48c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 in_stack_0000001c)

#include "nocturne.h"

uint FUN_0060d48c(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int param_6,uint in_stack_0000001c)

{
  uint *in_stack_00000010;
  uint *in_stack_00000014;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
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
  func_0x00603dc8(&fStack_24,&uStack_50,in_stack_0000001c);
  *in_stack_00000010 = local_38;
  *in_stack_00000014 = local_3c;
  return in_stack_0000001c;
}
