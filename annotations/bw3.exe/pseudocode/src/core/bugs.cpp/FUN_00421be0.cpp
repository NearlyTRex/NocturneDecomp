// Name: FUN_00421be0
// Address: 00421be0
// Address Range: [[00421be0, 00421c87]]
// Convention: unknown
// Signature: void FUN_00421be0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421be0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x13858) <= param_2) {
    *(int *)(param_1 + 0x13858) = param_2 + 1;
  }
  if (0x352 < *(int *)(param_1 + 0x13858)) {
    _DAT_01d71de0 = "..\\core\\bugs.cpp";
    _DAT_01d71de4 = 0x20d;
    FUN_004e4330("CBugs::addSwarmGraphEdge - Too many verts in swarm graph.");
  }
  piVar3 = (int *)(param_1 + 0x1385c + param_2 * 0x28);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    piVar3[1] = param_4;
  }
  else {
    if (7 < iVar1) {
      return;
    }
    iVar2 = 0;
    piVar4 = piVar3;
    if (0 < iVar1) {
      do {
        if (param_3 == piVar4[2]) {
          return;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < *piVar3);
      piVar3[*piVar3 + 2] = param_3;
      *piVar3 = *piVar3 + 1;
      return;
    }
  }
  piVar3[*piVar3 + 2] = param_3;
  *piVar3 = *piVar3 + 1;
  return;
}
