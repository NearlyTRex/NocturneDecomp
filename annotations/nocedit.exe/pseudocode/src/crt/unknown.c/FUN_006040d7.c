// Name: crt_unknown.c_FUN_006040d7
// Address: 006040d7
// Address Range: [[006040d7, 006040ec]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_006040d7(uint param_1,undefined4 param_2,char *unaff_EBX)

#include "nocturne.h"

/* Signature: void FUN_006040d7(uint param_1) */

void FUN_006040d7(uint param_1,uint param_2,char *unaff_EBX)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (9999 < param_1) {
    uVar2 = param_1 / 10000;
    param_1 = param_1 % 10000;
  }
  FUN_006040ed(uVar2);
  uVar2 = 0;
  if (99 < param_1) {
    uVar2 = (param_1 & 0xffff) / 100;
    param_1 = (param_1 & 0xffff) % 100;
  }
  FUN_00604104(uVar2);
  uVar1 = (ushort)CONCAT31((int3)param_1,(char)(param_1 >> 8));
  if (9 < (byte)param_1) {
    uVar1 = CONCAT11((char)((ushort)param_1 % 10),(char)((ushort)param_1 / 10));
  }
  *unaff_EBX = (char)uVar1 + '0';
  unaff_EBX[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}
