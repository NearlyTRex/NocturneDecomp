// Name: core_boneguy.cpp_FUN_00419880
// Address: 00419880
// Address Range: [[00419880, 004198a8]]
// Convention: unknown
// Signature: int core_boneguy_cpp_FUN_00419880(int param_1)

#include "nocturne.h"

int core_boneguy_cpp_FUN_00419880(int param_1)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_FUN_00431000(param_1);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0xd0e4) != 0)) {
    return -2;
  }
  return iVar1;
}
