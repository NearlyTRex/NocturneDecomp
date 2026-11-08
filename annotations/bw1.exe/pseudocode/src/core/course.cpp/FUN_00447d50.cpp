// Name: FUN_00447d50
// Address: 00447d50
// Address Range: [[00447d50, 00447da4]]
// Convention: unknown
// Signature: void FUN_00447d50(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447d50(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_00447ee0(param_1);
  *param_1 = param_2;
  iVar1 = FUN_005c1268(param_2 * 0x1c);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\course.cpp";
  _DAT_01d1d404 = 0x6e;
  FUN_005030e0("CCourse::allocMemory - out of hunk!");
  return;
}
