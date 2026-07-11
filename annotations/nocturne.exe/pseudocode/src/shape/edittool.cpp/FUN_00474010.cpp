// Name: FUN_00474010
// Address: 00474010
// Address Range: [[00474010, 00474073]]
// Convention: unknown
// Signature: void FUN_00474010(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474010(int *param_1,int param_2,int param_3)

{
  if (param_2 < param_3) {
    if ((param_2 < 0) || (*param_1 <= param_3)) {
      _DAT_01cc4800 = "..\\shape\\edittool.cpp";
      _DAT_01cc4804 = 0xa32;
      FUN_004c8440("CStrList::sort - invalid range!");
    }
    FUN_00563db8(param_1[2] + param_2 * 4,(param_3 - param_2) + 1,4,&LAB_00473ff0);
  }
  return;
}
