// Name: FUN_00480fa0
// Address: 00480fa0
// Address Range: [[00480fa0, 0048104c]]
// Convention: unknown
// Signature: void FUN_00480fa0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480fa0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *param_1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbcc;
    FUN_004e4500("CStrList::allocate - Can't shrink list!");
  }
  if (param_2 < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbcd;
    FUN_004e4500("CStrList::allocate - invalid count: %d",param_2);
  }
  if (param_1[1] < param_2) {
    param_1[1] = param_2;
    iVar1 = FUN_005b8ce0(param_1[2],param_2 * 4);
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0xbd1;
      FUN_004e4500("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
