// Name: FUN_00555060
// Address: 00555060
// Address Range: [[00555060, 00555120]]
// Convention: unknown
// Signature: bool FUN_00555060(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00555060(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    (**(code **)(*param_1 + 0x34))(param_1,iVar2);
    iVar2 = iVar3;
  } while (iVar3 < 0x41);
  if (_DAT_0264a5d0 != (int *)0x0) {
    (**(code **)(*_DAT_0264a5d0 + 8))(_DAT_0264a5d0);
    _DAT_0264a5d0 = (int *)0x0;
  }
  if (_DAT_0264a5cc != (int *)0x0) {
    (**(code **)(*_DAT_0264a5cc + 8))(_DAT_0264a5cc);
    _DAT_0264a5cc = (int *)0x0;
  }
  if (_DAT_0264a5d4 != (int *)0x0) {
    (**(code **)(*_DAT_0264a5d4 + 8))(_DAT_0264a5d4);
    _DAT_0264a5d4 = (int *)0x0;
  }
  if (_DAT_0264a5c8 != (int *)0x0) {
    (**(code **)(*_DAT_0264a5c8 + 8))(_DAT_0264a5c8);
    _DAT_0264a5c8 = (int *)0x0;
  }
  if (_DAT_0264a5c4 == (int *)0x0) {
    return iVar1 != 0;
  }
  (**(code **)(*_DAT_0264a5c4 + 8))(_DAT_0264a5c4);
  _DAT_0264a5c4 = (int *)0x0;
  return iVar1 != 0;
}
