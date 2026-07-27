// Name: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040
// Address: 00476040
// Address Range: [[00476040, 0047609b]]
// Convention: __cdecl
// Signature: bool __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(int *param_1,int param_2)

#include "nocturne.h"

bool __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0xe12;
    core_main_c_FUN_004c8440("CPickList::isItemEnabled - invalid index");
  }
  if (param_1[0x4c] <= param_2) {
    return true;
  }
  return *(int *)(param_1[0x4d] + param_2 * 4) != 0;
}
