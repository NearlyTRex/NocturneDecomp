// Name: engine_texture.cpp_FUN_00569ff0
// Address: 00569ff0
// Address Range: [[00569ff0, 0056a09f]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00569ff0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void engine_texture_cpp_FUN_00569ff0(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint *dest;
  char *pcVar2;
  char *pcVar3;
  
  dest = (uint *)(param_1 + 4 + (*(uint *)(param_2 + 4) & 0xffff) * 0x60);
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
  pcVar2 = (char *)(param_2 + 8);
  memset(dest,0,0x60);
  pcVar3 = (char *)(dest + 1);
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
  dest[0x14] = param_4;
  *dest = param_3;
  return;
}
