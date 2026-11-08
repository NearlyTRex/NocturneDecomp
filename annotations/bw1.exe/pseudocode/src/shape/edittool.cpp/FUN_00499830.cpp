// Name: FUN_00499830
// Address: 00499830
// Address Range: [[00499830, 00499893]]
// Convention: unknown
// Signature: void FUN_00499830(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499830(int *param_1,int param_2,int param_3)

{
  if (param_2 < param_3) {
    if ((param_2 < 0) || (*param_1 <= param_3)) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0xca3;
      FUN_005030e0("CStrList::sort - invalid range!");
    }
    FUN_005bfc68(param_1[2] + param_2 * 4,(param_3 - param_2) + 1,4,&LAB_00499810);
  }
  return;
}
