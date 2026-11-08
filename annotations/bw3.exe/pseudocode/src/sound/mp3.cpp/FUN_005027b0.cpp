// Name: FUN_005027b0
// Address: 005027b0
// Address Range: [[005027b0, 00502888]]
// Convention: unknown
// Signature: void FUN_005027b0(char *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005027b0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004657f0(">sound" + 1,param_2);
  if (iVar2 < 1) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0xea3;
    FUN_004e4330("Can't open %s",param_2);
  }
  iVar3 = FUN_004659c0("sound",param_2,&DAT_005ca344);
  if (iVar3 == 0) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0xea8;
    FUN_004e4330("Can't open %s",param_2);
  }
  iVar2 = FUN_00502890(param_1,iVar3,iVar2);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0xead;
    FUN_004e4330("Error preparing to decode %s",param_2);
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return;
}
