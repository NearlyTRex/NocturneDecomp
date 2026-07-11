// Name: FUN_004e9910
// Address: 004e9910
// Address Range: [[004e9910, 004e99b1]]
// Convention: unknown
// Signature: void FUN_004e9910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9910(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_005657c0("netlog.txt");
  _DAT_01cea3f8 = 1;
  _DAT_01cea3f4 = FUN_00558a30();
  _DAT_01cea3f4 = _DAT_01cea3f4 / 0x12;
  FUN_00549280();
  pcVar2 = (char *)FUN_00566e10("USERNAME");
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_00566e10("COMPUTERNAME");
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "MyComputer";
  }
  pcVar3 = (char *)(param_1 + 8);
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01cea40c = 0;
  _DAT_01d06610 = 0;
  FUN_004e9e90(param_1,0);
  return;
}
