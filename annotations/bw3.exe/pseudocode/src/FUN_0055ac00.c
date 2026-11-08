// Name: FUN_0055ac00
// Address: 0055ac00
// Address Range: [[0055ac00, 0055acc0]]
// Convention: unknown
// Signature: bool FUN_0055ac00(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0055ac00(int *param_1)

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
  if (_DAT_02cf49d0 != (int *)0x0) {
    (**(code **)(*_DAT_02cf49d0 + 8))(_DAT_02cf49d0);
    _DAT_02cf49d0 = (int *)0x0;
  }
  if (_DAT_02cf49cc != (int *)0x0) {
    (**(code **)(*_DAT_02cf49cc + 8))(_DAT_02cf49cc);
    _DAT_02cf49cc = (int *)0x0;
  }
  if (_DAT_02cf49d4 != (int *)0x0) {
    (**(code **)(*_DAT_02cf49d4 + 8))(_DAT_02cf49d4);
    _DAT_02cf49d4 = (int *)0x0;
  }
  if (_DAT_02cf49c8 != (int *)0x0) {
    (**(code **)(*_DAT_02cf49c8 + 8))(_DAT_02cf49c8);
    _DAT_02cf49c8 = (int *)0x0;
  }
  if (_DAT_02cf49c4 == (int *)0x0) {
    return iVar1 != 0;
  }
  (**(code **)(*_DAT_02cf49c4 + 8))(_DAT_02cf49c4);
  _DAT_02cf49c4 = (int *)0x0;
  return iVar1 != 0;
}
