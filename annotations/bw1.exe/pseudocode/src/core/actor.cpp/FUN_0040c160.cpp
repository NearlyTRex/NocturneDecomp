// Name: FUN_0040c160
// Address: 0040c160
// Address Range: [[0040c160, 0040c233]]
// Convention: unknown
// Signature: char * FUN_0040c160(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0040c160(char *param_1,char *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x2c) = param_3;
  *(uint *)(param_1 + 0x30) = param_4;
  uVar3 = 0;
  *(uint *)(param_1 + 0x34) = param_5;
  *(uint *)(param_1 + 0x28) = param_6;
  pcVar4 = param_1;
  while( true ) {
    iVar2 = DAT_007c3044;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    if (cVar1 == '\0') break;
    if (((&DAT_00626114)[(byte)(cVar1 + 1)] & 0xe0) != 0) {
      iVar2 = FUN_005c0820(cVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  *(uint *)(param_1 + 0x38) = uVar3;
  if (199 < iVar2) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0xa61;
    FUN_005030e0("Too many actor types!");
  }
  (&DAT_007c3048)[DAT_007c3044] = param_1;
  DAT_007c3044 = DAT_007c3044 + 1;
  return param_1;
}
