// Name: FUN_004821a0
// Address: 004821a0
// Address Range: [[004821a0, 0048224c]]
// Convention: unknown
// Signature: void FUN_004821a0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004821a0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *param_1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xc48;
    FUN_004e4330("CStrList::allocate - Can't shrink list!");
  }
  if (param_2 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xc49;
    FUN_004e4330("CStrList::allocate - invalid count: %d",param_2);
  }
  if (param_1[1] < param_2) {
    param_1[1] = param_2;
    iVar1 = FUN_005a3e50(param_1[2],param_2 * 4);
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0xc4d;
      FUN_004e4330("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
