// Name: crt_unknown.c_FUN_006040ed
// Address: 006040ed
// Address Range: [[006040ed, 00604103]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_006040ed(uint param_1,undefined4 param_2,char *unaff_EBX,undefined4 param_4,char *param_5)

#include "nocturne.h"

void __cdecl FUN_006040ed(uint param_1,uint param_2,char *unaff_EBX,uint param_4,char *param_5)

{
  ushort uVar1;
  uint in_EAX;
  char *unaff_EBX_00;
  uint unaff_retaddr;
  
  if (99 < in_EAX) {
    in_EAX = (in_EAX & 0xffff) % 100;
  }
  FUN_00604104((ushort)in_EAX,unaff_retaddr,(char *)param_1);
  uVar1 = (ushort)CONCAT31((int3)in_EAX,(char)(in_EAX >> 8));
  if (9 < (byte)in_EAX) {
    uVar1 = CONCAT11((char)((ushort)in_EAX % 10),(char)((ushort)in_EAX / 10));
  }
  *unaff_EBX_00 = (char)uVar1 + '0';
  unaff_EBX_00[1] = (char)((ushort)uVar1 >> 8) + '0';
  return;
}
