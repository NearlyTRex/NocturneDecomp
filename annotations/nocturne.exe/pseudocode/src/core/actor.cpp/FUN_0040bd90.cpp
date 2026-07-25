// Name: FUN_0040bd90
// Address: 0040bd90
// Address Range: [[0040bd90, 0040bfe8]]
// Convention: unknown
// Signature: void FUN_0040bd90(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bd90(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  uint local_18;
  
  bVar6 = 0;
  if (param_1 == (char *)0x0) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0x719;
    FUN_004c8440();
  }
  if (((char *)0xfeffffff < param_1) || ((int)param_1 < 0x1000)) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0x71d;
    FUN_004c8440("Invalid actor pointer %08X detected at %s, line %d",param_1,param_2,param_3);
  }
  if (*(byte **)(param_1 + 0x68) != &DAT_0078a123) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0x727;
    memset(&DAT_00763e10,0,0x32,*(byte **)(param_1 + 0x68));
    pcVar2 = param_1;
    pcVar4 = (char *)&DAT_00763e10;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar4 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -8 + 4;
      pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
    }
    for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pcVar4 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    }
    FUN_004c8440("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\ncreateStatus = %d",param_2,param_3,param_1,&DAT_00763e10);
  }
  if (_DAT_005779d5 <
      SQRT(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
           *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
           *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24))) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0x732;
    memset
              (&DAT_00763e10,0,0x32,(double)*(float *)(param_1 + 0x20),
               (double)*(float *)(param_1 + 0x24),(double)*(float *)(param_1 + 0x28));
    pcVar2 = param_1;
    pcVar4 = (char *)&DAT_00763e10;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar4 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -8 + 4;
      pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
    }
    for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pcVar4 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    }
    FUN_004c8440("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\npos = %g,%g,%g",param_2,param_3,param_1,&DAT_00763e10);
  }
  cVar1 = *param_1;
  local_18 = 0;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((0x1c < local_18) || (((&DAT_005c168c)[(byte)(*pcVar2 + 1)] & 8) == 0)) {
      _DAT_01cc4800 = "..\\core\\actor.cpp";
      _DAT_01cc4804 = 0x740;
      memset
                (&DAT_00763e10,0,0x32,(double)*(float *)(param_1 + 0x20),
                 (double)*(float *)(param_1 + 0x24),(double)*(float *)(param_1 + 0x28));
      if (param_1 != (char *)0x0) {
        pcVar4 = param_1;
        pcVar5 = (char *)&DAT_00763e10;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pcVar5 = *(uint *)pcVar4;
          pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
          pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
        }
        for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pcVar5 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        }
      }
      FUN_004c8440("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s",param_2,param_3,param_1,&DAT_00763e10);
    }
    local_18 = local_18 + 1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return;
}
