// Name: crt_unknown.c_FUN_006040d7
// Address: 006040d7
// Address Range: [[006040d7, 006040ec]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_006040d7(uint param_1,undefined4 param_2,char *unaff_EBX,uint param_4,char *param_5,char *param_6,char *param_7,uint param_8,undefined4 param_9,char *param_10)

#include "nocturne.h"

void __cdecl FUN_006040d7(uint param_1,uint param_2,char *unaff_EBX,uint param_4,char *param_5,char *param_6,char *param_7,uint param_8,uint param_9,char *param_10)

{
  ushort uVar1;
  uint in_EAX;
  char *unaff_EBX_00;
  uint unaff_retaddr;
  
  if (9999 < in_EAX) {
    in_EAX = in_EAX % 10000;
  }
  FUN_006040ed(in_EAX,unaff_retaddr,(char *)param_1,param_2,unaff_EBX);
  if (99 < param_4) {
    param_4 = (param_4 & 0xffff) % 100;
  }
  FUN_00604104((ushort)param_4,param_5,param_6);
  uVar1 = (ushort)CONCAT31((int3)param_4,(char)(param_4 >> 8));
  if (9 < (byte)param_4) {
    uVar1 = CONCAT11((char)((ushort)param_4 % 10),(char)((ushort)param_4 / 10));
  }
  *unaff_EBX_00 = (char)uVar1 + '0';
  unaff_EBX_00[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}
