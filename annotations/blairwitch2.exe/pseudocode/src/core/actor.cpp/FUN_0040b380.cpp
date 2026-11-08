// Name: FUN_0040b380
// Address: 0040b380
// Address Range: [[0040b380, 0040b3f7]]
// Convention: unknown
// Signature: void FUN_0040b380(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b380(uint param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *puVar3;
  char *pcVar4;
  
  pcVar1 = DAT_007bc03c;
  pcVar2 = "(unknown)";
  pcVar4 = "(unknown)";
  if (DAT_007bc03c != (char *)0x0) {
    pcVar2 = (char *)FUN_00408a50(DAT_007bc03c);
    pcVar4 = pcVar1;
  }
  if (param_2 == (char *)0x0) {
    param_2 = "(unknown)";
  }
  puVar3 = &DAT_005caa3a;
  if (DAT_007bc038 == 2) {
    puVar3 = &DAT_005caa3f;
  }
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x85e;
  FUN_004e4500("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",puVar3,pcVar4,pcVar2,param_2,param_1);
  return;
}
