// Name: FUN_0040d320
// Address: 0040d320
// Address Range: [[0040d320, 0040d3f0]]
// Convention: unknown
// Signature: void FUN_0040d320(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d320(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_0040d400(param_1);
  param_1[3] = param_2;
  param_1[4] = param_3;
  iVar1 = FUN_005a3650(param_2 * param_3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\engine\\alphabit.cpp";
    _DAT_01d71de4 = 0xb0;
    FUN_004e4330("CAlphaBitmap::allocate - Out of memory");
  }
  iVar1 = FUN_005a3650(param_2 * param_3);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\engine\\alphabit.cpp";
    _DAT_01d71de4 = 0xb3;
    FUN_004e4330("CAlphaBitmap::allocate - Out of memory");
  }
  iVar1 = FUN_005a3650(0x400);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\engine\\alphabit.cpp";
  _DAT_01d71de4 = 0xb6;
  FUN_004e4330("CAlphaBitmap::allocate - Out of memory");
  return;
}
