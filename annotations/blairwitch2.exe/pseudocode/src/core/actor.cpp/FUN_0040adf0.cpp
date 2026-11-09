// Name: core_actor.cpp_FUN_0040adf0
// Address: 0040adf0
// Address Range: [[0040adf0, 0040b048]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040adf0(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_actor_cpp_FUN_0040adf0(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uStack_18;
  
  bVar6 = 0;
  if (param_1 == (char *)0x0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x77c;
    core_main_c_FUN_004e4500();
  }
  if (((char *)0xfeffffff < param_1) || ((int)param_1 < 0x1000)) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x780;
    core_main_c_FUN_004e4500("Invalid actor pointer %08X detected at %s, line %d",param_1,param_2);
  }
  if (*(byte **)(param_1 + 0x68) != &DAT_0078a123) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x78a;
    memset((void *)0x7bbfc0,0,0x32);
    pcVar2 = param_1;
    pcVar4 = (char *)0x7bbfc0;
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
    core_main_c_FUN_004e4500("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\ncreateStatus = %d",param_2,param_3,param_1,0x7bbfc0);
  }
  if (_DAT_005ca89a <
      SQRT(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
           *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
           *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24))) {
    dVar9 = (double)*(float *)(param_1 + 0x28);
    dVar8 = (double)*(float *)(param_1 + 0x24);
    dVar7 = (double)*(float *)(param_1 + 0x20);
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x795;
    memset((void *)0x7bbfc0,0,0x32);
    pcVar2 = param_1;
    pcVar4 = (char *)0x7bbfc0;
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
    core_main_c_FUN_004e4500
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\npos = %g,%g,%g",param_2,param_3,param_1,0x7bbfc0,dVar7,dVar8,
               dVar9);
  }
  cVar1 = *param_1;
  uStack_18 = 0;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((0x1c < uStack_18) || (((&DAT_0061ed94)[(byte)(*pcVar2 + 1)] & 8) == 0)) {
      dVar9 = (double)*(float *)(param_1 + 0x28);
      dVar8 = (double)*(float *)(param_1 + 0x24);
      dVar7 = (double)*(float *)(param_1 + 0x20);
      _DAT_01d046a0 = "..\\core\\actor.cpp";
      _DAT_01d046a4 = 0x7a3;
      memset((void *)0x7bbfc0,0,0x32);
      if (param_1 != (char *)0x0) {
        pcVar4 = param_1;
        pcVar5 = (char *)0x7bbfc0;
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
      core_main_c_FUN_004e4500
                ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s",param_2,param_3,param_1,0x7bbfc0,dVar7,dVar8,
                 dVar9);
    }
    uStack_18 = uStack_18 + 1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return;
}
