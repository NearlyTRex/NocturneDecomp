// Name: FUN_00499ee0
// Address: 00499ee0
// Address Range: [[00499ee0, 00499fda]]
// Convention: unknown
// Signature: void FUN_00499ee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499ee0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  _DAT_01c3f5a8 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E661B8 + 0x14f0a8); iVar4 = iVar4 + 1) {
    iVar2 = *(int *)(iVar3 + 0x14f0ac + 0x01E661B8);
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_004ce100(iVar2 + 0x20,0x42480000);
      if (iVar1 != 0) {
        if (0x31 < _DAT_01c3f5a8) {
          _DAT_01d046a0 = "..\\core\\fire.cpp";
          _DAT_01d046a4 = 0xee3;
          FUN_004e4500("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c3f5ac + _DAT_01c3f5a8 * 4) = iVar2;
        _DAT_01c3f5a8 = _DAT_01c3f5a8 + 1;
      }
    }
    iVar3 = iVar3 + 4;
  }
  iVar4 = 0;
  _DAT_01c3f674 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01E661B8 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar2 = FUN_0040c8f0(*(uint *)(iVar4 + 0x14d168 + 0x01E661B8),_DAT_01cab6f8);
    if ((iVar2 != 0) && (_DAT_01c3f674 < 0x96)) {
      *(int *)(&DAT_01c3f678 + _DAT_01c3f674 * 4) = iVar2;
      _DAT_01c3f674 = _DAT_01c3f674 + 1;
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
