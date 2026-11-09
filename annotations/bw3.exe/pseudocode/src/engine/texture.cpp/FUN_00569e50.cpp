// Name: engine_texture.cpp_FUN_00569e50
// Address: 00569e50
// Address Range: [[00569e50, 00569eb5]]
// Convention: unknown
// Signature: int engine_texture_cpp_FUN_00569e50(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

int engine_texture_cpp_FUN_00569e50(int param_1,char *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  
  iVar2 = engine_texture_cpp_FUN_00569670(param_1);
  puVar3 = (uint *)(param_1 + 4 + iVar2 * 0x60);
  pcVar4 = (char *)(puVar3 + 1);
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  puVar3[0x16] = 1;
  *puVar3 = param_3;
  puVar3[0x11] = param_4;
  puVar3[0x13] = param_5;
  puVar3[0x12] = param_6;
  return iVar2;
}
