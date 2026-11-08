// Name: FUN_00481eb0
// Address: 00481eb0
// Address Range: [[00481eb0, 00481f90]]
// Convention: unknown
// Signature: bool FUN_00481eb0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00481eb0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = _DAT_01e7dac8;
  _DAT_01bc1238 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = FUN_00403920(param_2 + 8);
    if (iVar3 == 0) {
      return false;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    _DAT_01c51d14 = 0xc0;
    _DAT_01c51d18 = 6;
    _DAT_01c4f02c = &LAB_00487327;
  }
  else {
    _DAT_01c51d14 = 0;
    _DAT_01c51d18 = 0;
    _DAT_01c4f02c = &LAB_004873a5;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (_DAT_01c50948 != 0) {
    FUN_00483e40(param_1,1);
  }
  FUN_00481aa0(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  if (_DAT_01c50948 != 0) {
    FUN_00483e40(param_1,uVar1);
  }
  _DAT_01e7dac8 = uVar2;
  return DAT_00612564 <= _DAT_01bc1238;
}
