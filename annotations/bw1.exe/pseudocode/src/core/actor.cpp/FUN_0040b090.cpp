// Name: FUN_0040b090
// Address: 0040b090
// Address Range: [[0040b090, 0040b107]]
// Convention: unknown
// Signature: void FUN_0040b090(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b090(uint param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *puVar3;
  char *pcVar4;
  
  pcVar1 = DAT_007c303c;
  pcVar2 = "(unknown)";
  pcVar4 = "(unknown)";
  if (DAT_007c303c != (char *)0x0) {
    pcVar2 = (char *)FUN_00408830(DAT_007c303c);
    pcVar4 = pcVar1;
  }
  if (param_2 == (char *)0x0) {
    param_2 = "(unknown)";
  }
  puVar3 = &DAT_005d299d;
  if (DAT_007c3038 == 2) {
    puVar3 = &DAT_005d29a2;
  }
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0x843;
  FUN_005030e0("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",puVar3,pcVar4,pcVar2,param_2,param_1);
  return;
}
