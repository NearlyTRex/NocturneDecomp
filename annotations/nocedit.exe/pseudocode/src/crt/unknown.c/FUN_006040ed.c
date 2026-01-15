// Name: crt_unknown.c_FUN_006040ed
// Address: 006040ed
// Address Range: [[006040ed, 00604103]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006040ed()

#include "nocturne.h"

/* Signature: void FUN_006040ed(uint param_1) */

void crt_unknown_c_FUN_006040ed(uint param_1,uint param_2,char *unaff_EBX)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (99 < param_1) {
    uVar2 = (param_1 & 0xffff) / 100;
    param_1 = (param_1 & 0xffff) % 100;
  }
  crt_unknown_c_FUN_00604104(uVar2);
  uVar1 = (ushort)CONCAT31 /* combine 2-byte values */((int3)param_1,(char)(param_1 >> 8));
  if (9 < (byte)param_1) {
    uVar1 = CONCAT11 /* combine 2-byte values */((char)((ushort)param_1 % 10),(char)((ushort)param_1 / 10));
  }
  *unaff_EBX = (char)uVar1 + '0';
  unaff_EBX[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}
