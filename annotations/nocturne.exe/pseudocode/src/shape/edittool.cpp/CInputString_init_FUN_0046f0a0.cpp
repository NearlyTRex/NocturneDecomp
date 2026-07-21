// Name: shape_edittool.cpp_CInputString_init_FUN_0046f0a0
// Address: 0046f0a0
// Address Range: [[0046f0a0, 0046f129]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_init_FUN_0046f0a0(char *param_1,int param_2,uint param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_init_FUN_0046f0a0(char *param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  *(uint *)(param_1 + 300) = param_3;
  if (299 < param_3) {
    param_1[300] = '+';
    param_1[0x12d] = '\x01';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
  }
  memset(param_1,0,300);
  if (param_2 == 0) {
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
  }
  else {
    _strncpy(param_1,param_2,*(uint *)(param_1 + 300));
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    *(uint *)(param_1 + 0x130) = ~uVar3 - 1;
  }
  uVar2 = *(uint *)(param_1 + 0x130);
  param_1[0x138] = '\0';
  param_1[0x139] = '\0';
  param_1[0x13a] = '\0';
  param_1[0x13b] = '\0';
  *(uint *)(param_1 + 0x134) = uVar2;
  *(uint *)(param_1 + 0x13c) = param_4;
  return;
}
