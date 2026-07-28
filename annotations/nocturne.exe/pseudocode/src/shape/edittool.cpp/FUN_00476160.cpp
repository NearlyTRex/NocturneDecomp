// Name: shape_edittool.cpp_FUN_00476160
// Address: 00476160
// Address Range: [[00476160, 00476198]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00476160(CStrList *param_1)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00476160(CStrList *param_1)

{
  if (param_1[0x13].capacity != 0) {
    FUN_005638d0(param_1[0x13].capacity);
    param_1[0x13].capacity = 0;
  }
  param_1[0x13].item_count = 0;
  shape_edittool_cpp_CStrList_clear_FUN_00473c50(param_1);
  return;
}
