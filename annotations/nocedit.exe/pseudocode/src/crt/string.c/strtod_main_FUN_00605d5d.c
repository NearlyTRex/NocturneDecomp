// Name: crt_string.c_strtod_main_FUN_00605d5d
// Address: 00605d5d
// Address Range: [[00605d5d, 00605e42]]
// Convention: __cdecl
// Signature: double crt_string.c_strtod_main_FUN_00605d5d(char * str, char * * endptr)

#include "nocturne.h"

double __cdecl crt_string_c_strtod_main_FUN_00605d5d(char *str,char **endptr)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *in_stack_00000004;
  ulonglong local_34;
  byte uStack_2c;
  byte bStack_2b;
  ushort uStack_2a;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  iVar4 = crt_string_c_parseFloatString_FUN_00605b9b(in_stack_00000004,&local_34,(char **)str);
  if (iVar4 == 0) {
    uVar5 = 0;
    uVar1 = 0;
LAB_00605d83:
    local_28 = (double)CONCAT44 /* combine 2-byte values */(uVar5,uVar1);
    return local_28;
  }
  uVar6 = (uint)(CONCAT11 /* combine 2-byte values */(bStack_2b,uStack_2c) & 0x7fff);
  if (0x43fe < uVar6) {
    uStack_2c = 0xa2;
    bStack_2b = 0x5d;
    uStack_2a = 0x60;
    crt_math_c_set_range_error_errno_FUN_006027ac();
    uVar5 = inf._4_4_;
    uVar1 = inf._0_4_;
    if ((bStack_2b & 0x80) != 0) {
      return -(double)CONCAT44 /* combine 2-byte values */(inf._4_4_,inf._0_4_);
    }
    goto LAB_00605d83;
  }
  if (uVar6 < 0x3bcd) {
    if ((int)uVar6 < -0x34) {
      uStack_2c = 0xda;
      bStack_2b = 0x5d;
      uStack_2a = 0x60;
      crt_math_c_set_range_error_errno_FUN_006027ac();
      return 0.0;
    }
    local_28 = (double)(float10)CONCAT19 /* combine 2-byte values */(bStack_2b,CONCAT18 /* combine 2-byte values */(uStack_2c,local_34));
    dVar2 = (double)CONCAT44 /* combine 2-byte values */(local_18._4_4_,(uint)local_18);
    dVar3 = local_28;
    if ((((ulonglong)local_28 & 0x7fffffff00000000) == 0) &&
       (local_20 = local_28, local_18 = (double)CONCAT44 /* combine 2-byte values */(local_18._4_4_,(uint)local_18),
       dVar3 = local_28, (int)local_28 == 0)) goto LAB_00605e33;
  }
  else {
    local_28 = (double)(float10)CONCAT19 /* combine 2-byte values */(bStack_2b,CONCAT18 /* combine 2-byte values */(uStack_2c,local_34));
    dVar2 = local_28;
    dVar3 = (double)CONCAT44 /* combine 2-byte values */(local_20._4_4_,(uint)local_20);
    if (iVar4 == 3) goto LAB_00605e33;
  }
  local_20 = dVar3;
  local_18 = dVar2;
  if (((ulonglong)local_28 & 0x7ff0000000000000) != 0) {
    return local_28;
  }
LAB_00605e33:
  uStack_2c = 0x38;
  bStack_2b = 0x5e;
  uStack_2a = 0x60;
  crt_math_c_set_range_error_errno_FUN_006027ac();
  return local_28;
}
