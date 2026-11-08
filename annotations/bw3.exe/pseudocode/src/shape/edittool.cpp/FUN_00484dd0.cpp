// Name: FUN_00484dd0
// Address: 00484dd0
// Address Range: [[00484dd0, 00484e29]]
// Convention: unknown
// Signature: undefined4 FUN_00484dd0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00484dd0(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x11b2;
    FUN_004e4330("CPickList::getItemHotKey - invalid index");
  }
  if (param_1[0x6d] <= param_2) {
    return 0xffffffff;
  }
  return *(uint *)(param_1[0x6e] + param_2 * 4);
}
