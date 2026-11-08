// Name: FUN_004814c0
// Address: 004814c0
// Address Range: [[004814c0, 00481533]]
// Convention: unknown
// Signature: void FUN_004814c0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004814c0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if ((((param_2 < 0) || (*param_1 <= param_2)) || (param_3 < 0)) || (*param_1 <= param_3)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xcae;
    FUN_004e4500("CStrList::swap - invalid indices");
    if (param_2 == param_3) {
      return;
    }
  }
  else if (param_2 == param_3) {
    return;
  }
  puVar2 = (uint *)(param_2 * 4 + param_1[2]);
  uVar1 = *puVar2;
  *puVar2 = *(uint *)(param_1[2] + param_3 * 4);
  *(uint *)(param_1[2] + param_3 * 4) = uVar1;
  return;
}
