// Name: unkaddr_0059d350.cpp_FUN_0059dc80
// Address: 0059dc80
// Address Range: [[0059dc80, 0059dcae]]
// Convention: unknown
// Signature: void unkaddr_0059d350_cpp_FUN_0059dc80(int param_1)

#include "nocturne.h"

void unkaddr_0059d350_cpp_FUN_0059dc80(int param_1)

{
  if (*(int *)(param_1 + 0x83c) == 0) {
    unkaddr_0059d350_cpp_FUN_0059da70(param_1);
    return;
  }
  unkaddr_0059d350_cpp_FUN_0059d960(param_1,*(int *)(param_1 + 0x83c));
  unkaddr_0059d350_cpp_FUN_0059da70(param_1);
  return;
}
