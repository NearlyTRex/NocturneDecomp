// Name: FUN_0052aea0
// Address: 0052aea0
// Address Range: [[0052aea0, 0052af78]]
// Convention: unknown
// Signature: void FUN_0052aea0(char *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052aea0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00478fb0(">sound" + 1,param_2);
  if (iVar2 < 1) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0xea3;
    FUN_005030e0("Can't open %s",param_2);
  }
  iVar3 = FUN_00479180("sound",param_2,&DAT_005eb533);
  if (iVar3 == 0) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0xea8;
    FUN_005030e0("Can't open %s",param_2);
  }
  iVar2 = FUN_0052af80(param_1,iVar3,iVar2);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0xead;
    FUN_005030e0("Error preparing to decode %s",param_2);
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
