// Name: core_construc.cpp_FUN_004444f0
// Address: 004444f0
// Address Range: [[004444f0, 00444518]]
// Convention: unknown
// Signature: int core_construc_cpp_FUN_004444f0(int param_1)

#include "nocturne.h"

int core_construc_cpp_FUN_004444f0(int param_1)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_FUN_00431000(param_1);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0xd844) != 0)) {
    return -2;
  }
  return iVar1;
}
