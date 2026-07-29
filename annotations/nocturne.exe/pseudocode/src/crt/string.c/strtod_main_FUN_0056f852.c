// Name: crt_string.c_strtod_main_FUN_0056f852
// Address: 0056f852
// Address Range: [[0056f852, 0056f937]]
// Convention: __cdecl
// Signature: double __cdecl crt_string_c_strtod_main_FUN_0056f852(char *str,char **endptr)

#include "nocturne.h"

double __cdecl strtod_main(char *str,char **endptr)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uStack_34;
  byte uStack_2c;
  byte bStack_2b;
  ushort uStack_2a;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  iVar4 = parseFloatString(str,&uStack_34,endptr);
  if (iVar4 == 0) {
    uVar5 = 0;
    uVar1 = 0;
LAB_0056f878:
    uStack_28 = __BITCAST_DOUBLE(CONCAT44(uVar5,uVar1));
    return uStack_28;
  }
  uVar6 = (uint)(CONCAT11(bStack_2b,uStack_2c) & 0x7fff);
  if (0x43fe < uVar6) {
    uStack_2c = 0x97;
    bStack_2b = 0xf8;
    uStack_2a = 0x56;
    set_range_error_errno();
    uVar5 = 0x7FF00000;
    uVar1 = DAT_005a4b78;
    if ((bStack_2b & 0x80) != 0) {
      return -__BITCAST_DOUBLE(CONCAT44(0x7FF00000,DAT_005a4b78));
    }
    goto LAB_0056f878;
  }
  if (uVar6 < 0x3bcd) {
    if ((int)uVar6 < -0x34) {
      uStack_2c = 0xcf;
      bStack_2b = 0xf8;
      uStack_2a = 0x56;
      set_range_error_errno();
      return 0.0;
    }
    uStack_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,uStack_34));
    dVar2 = __BITCAST_DOUBLE(CONCAT44(uStack_18._4_4_,(uint)uStack_18));
    dVar3 = uStack_28;
    if ((((ulonglong)uStack_28 & 0x7fffffff00000000) == 0) &&
       (uStack_20 = uStack_28, uStack_18 = __BITCAST_DOUBLE(CONCAT44(uStack_18._4_4_,(uint)uStack_18)),
       dVar3 = uStack_28, (int)uStack_28 == 0)) goto LAB_0056f928;
  }
  else {
    uStack_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,uStack_34));
    dVar2 = uStack_28;
    dVar3 = __BITCAST_DOUBLE(CONCAT44(uStack_20._4_4_,(uint)uStack_20));
    if (iVar4 == 3) goto LAB_0056f928;
  }
  uStack_20 = dVar3;
  uStack_18 = dVar2;
  if (((ulonglong)uStack_28 & 0x7ff0000000000000) != 0) {
    return uStack_28;
  }
LAB_0056f928:
  uStack_2c = 0x2d;
  bStack_2b = 0xf9;
  uStack_2a = 0x56;
  set_range_error_errno();
  return uStack_28;
}
