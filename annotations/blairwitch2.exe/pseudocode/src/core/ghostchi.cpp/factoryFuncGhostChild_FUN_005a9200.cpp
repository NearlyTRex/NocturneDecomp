// Name: core_ghostchi.cpp_factoryFuncGhostChild_FUN_005a9200
// Address: 005a9200
// Address Range: [[005a9200, 005a921b]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_factoryFuncGhostChild_FUN_005a9200(void)

#include "nocturne.h"

void core_ghostchi_cpp_factoryFuncGhostChild_FUN_005a9200(void)

{
  CGhostChild *this_ptr;
  
  this_ptr = (CGhostChild *)debugAllocTracked1(0x11868);
  if (this_ptr == (CGhostChild *)0x0) {
    return;
  }
  core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230(this_ptr);
  return;
}
