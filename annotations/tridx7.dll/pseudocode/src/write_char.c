// Name: write_char
// Address: 10006920
// Address Range: [[10006920, 10006960]]
// Convention: __cdecl
// Signature: void __cdecl write_char(undefined4 param_1,undefined4 *param_2,int *param_3)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl write_char(uint param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    uVar2 = FUN_10007420(param_1,param_2);
  }
  else {
    *(byte *)*param_2 = (byte)param_1;
    uVar2 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}
