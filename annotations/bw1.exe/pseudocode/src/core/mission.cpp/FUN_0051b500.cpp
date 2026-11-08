// Name: FUN_0051b500
// Address: 0051b500
// Address Range: [[0051b500, 0051b596]]
// Convention: unknown
// Signature: void FUN_0051b500(int *param_1,int param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b500(int *param_1,int param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  
  if ((param_2 < 0) || (param_1[1] <= param_2)) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x3be;
    FUN_005030e0("CDemonMission::changeSetName - invalid index: %d, count = %d",param_2,param_1[1]);
  }
  piVar2 = param_1 + param_2 * 0x40 + 2;
  do {
    cVar1 = *param_3;
    *(char *)piVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    *(char *)((int)piVar2 + 1) = cVar1;
    piVar2 = (int *)((int)piVar2 + 2);
  } while (cVar1 != '\0');
  if (param_2 != *param_1) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\mission.cpp";
  _DAT_01d1d404 = 0x3c8;
  FUN_005030e0("Tried to change the set file for the set we are currently in.  Let's not allow this, OK?");
  return;
}
