// Name: engine_texture.cpp_FUN_00569f20
// Address: 00569f20
// Address Range: [[00569f20, 00569fe8]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00569f20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void engine_texture_cpp_FUN_00569f20(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  uint *dest;
  char *pcVar2;
  char *pcVar3;
  
  dest = (uint *)((*(uint *)(param_2 + 4) & 0xffff) * 0x60 + param_1 + 4);
  if (dest[0x11] != 0) {
    FUN_005a3770(dest[0x11]);
  }
  if (dest[0x12] != 0) {
    FUN_005a3770(dest[0x12]);
  }
  if (dest[0x13] != 0) {
    FUN_005a3770(dest[0x13]);
  }
  if (dest[0x14] != 0) {
    FUN_005a3770(dest[0x14]);
  }
  memset(dest,0,0x60);
  pcVar3 = (char *)(dest + 1);
  pcVar2 = (char *)(param_2 + 8);
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  dest[0x16] = 1;
  *dest = param_3;
  dest[0x11] = param_4;
  dest[0x13] = param_5;
  dest[0x12] = param_6;
  return;
}
