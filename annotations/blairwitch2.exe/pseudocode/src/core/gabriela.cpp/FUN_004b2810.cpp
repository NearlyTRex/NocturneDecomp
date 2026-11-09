// Name: core_gabriela.cpp_FUN_004b2810
// Address: 004b2810
// Address Range: [[004b2810, 004b2833]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004b2810(int param_1,int param_2)

#include "nocturne.h"

void core_gabriela_cpp_FUN_004b2810(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x25640) = 3;
    return;
  }
  *(uint *)(param_1 + 0x25640) = 0;
  return;
}
