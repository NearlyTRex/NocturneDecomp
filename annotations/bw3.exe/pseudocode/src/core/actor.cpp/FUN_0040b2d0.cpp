// Name: FUN_0040b2d0
// Address: 0040b2d0
// Address Range: [[0040b2d0, 0040b347]]
// Convention: unknown
// Signature: void FUN_0040b2d0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b2d0(uint param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *puVar3;
  char *pcVar4;
  
  pcVar1 = DAT_007df9bc;
  pcVar2 = "(unknown)";
  pcVar4 = "(unknown)";
  if (DAT_007df9bc != (char *)0x0) {
    pcVar2 = (char *)FUN_00408870(DAT_007df9bc);
    pcVar4 = pcVar1;
  }
  if (param_2 == (char *)0x0) {
    param_2 = "(unknown)";
  }
  puVar3 = &DAT_005b59e9;
  if (DAT_007df9b8 == 2) {
    puVar3 = &DAT_005b59ee;
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x85d;
  FUN_004e4330("Error %sing actor property.\nActor name: %s\nActor type: %s\nProperty description: %s\nProperty type: %s\n",puVar3,pcVar4,pcVar2,param_2,param_1);
  return;
}
