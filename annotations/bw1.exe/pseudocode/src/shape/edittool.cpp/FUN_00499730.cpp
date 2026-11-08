// Name: FUN_00499730
// Address: 00499730
// Address Range: [[00499730, 004997e1]]
// Convention: unknown
// Signature: void FUN_00499730(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499730(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 < 0) || (*param_1 <= param_3)) || (param_3 < param_2)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xc74;
    FUN_005030e0("CStrList::remove - invalid range");
  }
  if (param_2 <= param_3) {
    iVar1 = param_2 * 4;
    do {
      if (*(int *)(param_1[2] + iVar1) != 0) {
        FUN_005c09f0(*(int *)(param_1[2] + iVar1));
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 <= param_3 * 4);
  }
  iVar1 = *param_1 - ((param_3 - param_2) + 1);
  *param_1 = iVar1;
  FUN_005c25d0(param_1[2] + param_2 * 4,param_3 * 4 + 4 + param_1[2],(iVar1 - param_2) * 4);
  return;
}
