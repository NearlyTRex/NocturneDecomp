// Name: FUN_0040d3f0
// Address: 0040d3f0
// Address Range: [[0040d3f0, 0040d4c3]]
// Convention: unknown
// Signature: char * FUN_0040d3f0(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_0040d3f0(char *param_1,char *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

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
    iVar2 = DAT_00763e94;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    if (cVar1 == '\0') break;
    if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 0xe0) != 0) {
      iVar2 = FUN_00564860(cVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  *(uint *)(param_1 + 0x38) = uVar3;
  if (199 < iVar2) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0xa19;
    FUN_004c8440("Too many actor types!");
  }
  (&DAT_00763e98)[DAT_00763e94] = param_1;
  DAT_00763e94 = DAT_00763e94 + 1;
  return param_1;
}
