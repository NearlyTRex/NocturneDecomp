// Name: FUN_0040c3a0
// Address: 0040c3a0
// Address Range: [[0040c3a0, 0040c473]]
// Convention: unknown
// Signature: char * FUN_0040c3a0(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0040c3a0(char *param_1,char *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

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
    iVar2 = DAT_007df9c4;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    if (cVar1 == '\0') break;
    if (((&DAT_006074b8)[(byte)(cVar1 + 1)] & 0xe0) != 0) {
      iVar2 = FUN_005a35a0(cVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  *(uint *)(param_1 + 0x38) = uVar3;
  if (199 < iVar2) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0xa7b;
    FUN_004e4330("Too many actor types!");
  }
  (&DAT_007df9c8)[DAT_007df9c4] = param_1;
  DAT_007df9c4 = DAT_007df9c4 + 1;
  return param_1;
}
