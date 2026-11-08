// Name: FUN_0040d460
// Address: 0040d460
// Address Range: [[0040d460, 0040d530]]
// Convention: unknown
// Signature: void FUN_0040d460(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d460(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_0040d540(param_1);
  param_1[3] = param_2;
  param_1[4] = param_3;
  iVar1 = FUN_005b8580(param_2 * param_3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xb0;
    FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  }
  iVar1 = FUN_005b8580(param_2 * param_3);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xb3;
    FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  }
  iVar1 = FUN_005b8580(0x400);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
  _DAT_01d046a4 = 0xb6;
  FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  return;
}
