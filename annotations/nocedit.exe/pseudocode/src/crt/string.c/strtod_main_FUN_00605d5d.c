// Name: crt_string.c_strtod_main_FUN_00605d5d
// Address: 00605d5d
// Address Range: [[00605d5d, 00605e42]]
// Convention: __cdecl
// Signature: double __cdecl crt_string_c_strtod_main_FUN_00605d5d(char *str,char **endptr)

#include "nocturne.h"

double __cdecl strtod_main(char *str,char **endptr)

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
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  iVar4 = parseFloatString(in_stack_00000004,&local_34,(char **)str);
  if (iVar4 == 0) {
    uVar5 = 0;
    uVar1 = 0;
LAB_00605d83:
    local_28 = (double)CONCAT44(uVar5,uVar1);
    return local_28;
  }
  uVar6 = (uint)(CONCAT11(bStack_2b,uStack_2c) & 0x7fff);
  if (0x43fe < uVar6) {
    set_range_error_errno();
    uVar5 = INFINITY._4_4_;
    uVar1 = INFINITY._0_4_;
    if ((bStack_2b & 0x80) != 0) {
      return -(double)CONCAT44(INFINITY._4_4_,INFINITY._0_4_);
    }
    goto LAB_00605d83;
  }
  if (uVar6 < 0x3bcd) {
    if ((int)uVar6 < -0x34) {
      set_range_error_errno();
      return 0.0;
    }
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,local_34));
    dVar2 = (double)CONCAT44(local_18._4_4_,(uint)local_18);
    dVar3 = local_28;
    if ((((ulonglong)local_28 & 0x7fffffff00000000) == 0) &&
       (local_20 = local_28, local_18 = (double)CONCAT44(local_18._4_4_,(uint)local_18),
       dVar3 = local_28, (int)local_28 == 0)) goto LAB_00605e33;
  }
  else {
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,local_34));
    dVar2 = local_28;
    dVar3 = (double)CONCAT44(local_20._4_4_,(uint)local_20);
    if (iVar4 == 3) goto LAB_00605e33;
  }
  local_20 = dVar3;
  local_18 = dVar2;
  if (((ulonglong)local_28 & 0x7ff0000000000000) != 0) {
    return local_28;
  }
LAB_00605e33:
  set_range_error_errno();
  return local_28;
}
