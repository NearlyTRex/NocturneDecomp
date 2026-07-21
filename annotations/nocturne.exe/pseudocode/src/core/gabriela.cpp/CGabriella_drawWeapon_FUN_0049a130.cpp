// Name: core_gabriela.cpp_CGabriella_drawWeapon_FUN_0049a130
// Address: 0049a130
// Address Range: [[0049a130, 0049a153]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_drawWeapon_FUN_0049a130(int param_1,int param_2)

#include "nocturne.h"

void core_gabriela_cpp_CGabriella_drawWeapon_FUN_0049a130(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x1fa3c) = 3;
    return;
  }
  *(uint *)(param_1 + 0x1fa3c) = 0;
  return;
}
