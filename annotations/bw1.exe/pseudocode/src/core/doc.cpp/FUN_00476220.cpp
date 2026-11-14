// Name: core_doc.cpp_FUN_00476220
// Address: 00476220
// Address Range: [[00476220, 0047625d]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00476220(int param_1,int param_2)

#include "nocturne.h"

void core_doc_cpp_FUN_00476220(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1ffac) = param_2;
  if ((param_2 == 0) && (g_CGamePtr->flashlight_active != 0)) {
    g_CGamePtr->flashlight_active = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"@flashlit.wav @ .5" + 1);
    return;
  }
  return;
}
