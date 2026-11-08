// Name: FUN_0049c500
// Address: 0049c500
// Address Range: [[0049c500, 0049c746]]
// Convention: unknown
// Signature: void FUN_0049c500(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c500(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = _DAT_01c3f5c0;
  if (param_5 != 0) {
    uVar2 = _DAT_01c3f5c4;
  }
  if (_DAT_01c3f544 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10);
    uVar2 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar2;
  if (_DAT_01c3f544 == 0) {
    FUN_00402f30(param_1,param_2,param_3 + -1);
  }
  else {
    FUN_005182e0(param_1,param_2,param_3 + -1);
  }
  if (_DAT_01c3f544 == 0) {
    FUN_00403040(param_1,param_2,param_4 + -1);
  }
  else {
    FUN_00518300(param_1,param_2,param_4 + -1);
  }
  uVar2 = _DAT_01c3f5c4;
  if (param_5 != 0) {
    uVar2 = _DAT_01c3f5c0;
  }
  if (_DAT_01c3f544 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8);
    uVar2 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar2;
  if (_DAT_01c3f544 == 0) {
    FUN_00402f30(param_1,param_4 + -1,param_3 + -1);
  }
  else {
    FUN_005182e0(param_1,param_4 + -1,param_3 + -1);
  }
  if (_DAT_01c3f544 == 0) {
    FUN_00403040(param_3 + -1,param_2,param_4 + -1);
  }
  else {
    FUN_00518300(param_3 + -1,param_2,param_4 + -1);
  }
  if (_DAT_01c3f544 == 0) {
    FUN_004031c0(param_1 + 1,param_2 + 1,param_3 + -2,param_4 + -2,_DAT_01c3f5b4);
    return;
  }
  if (_DAT_01c3f544 == 0) {
    _DAT_01c4f020 = _DAT_01c3f5b4;
  }
  else {
    iVar1 = (_DAT_01c3f5b4 & 0xff) * 3;
    FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8);
  }
  FUN_00518010(param_1 + 1,param_2 + 1,param_3 + -2,param_4 + -2);
  return;
}
