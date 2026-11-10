// Name: core_unionzom.cpp_factoryFuncUnionZombie_FUN_005a3d00
// Address: 005a3d00
// Address Range: [[005a3d00, 005a3d1b]]
// Convention: unknown
// Signature: void core_unionzom_cpp_factoryFuncUnionZombie_FUN_005a3d00(void)

#include "nocturne.h"

void core_unionzom_cpp_factoryFuncUnionZombie_FUN_005a3d00(void)

{
  CUnionZombie *this_ptr;
  
  this_ptr = (CUnionZombie *)debugAllocTracked1(0x1185c);
  if (this_ptr == (CUnionZombie *)0x0) {
    return;
  }
  core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(this_ptr);
  return;
}
