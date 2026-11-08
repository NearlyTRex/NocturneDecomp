// Name: FUN_00499600
// Address: 00499600
// Address Range: [[00499600, 004996ac]]
// Convention: unknown
// Signature: void FUN_00499600(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499600(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *param_1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xc45;
    FUN_005030e0("CStrList::allocate - Can't shrink list!");
  }
  if (param_2 < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xc46;
    FUN_005030e0("CStrList::allocate - invalid count: %d",param_2);
  }
  if (param_1[1] < param_2) {
    param_1[1] = param_2;
    iVar1 = FUN_005c10d0(param_1[2],param_2 * 4);
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0xc4a;
      FUN_005030e0("CStrList::insert - out of memory");
      return;
    }
  }
  return;
}
