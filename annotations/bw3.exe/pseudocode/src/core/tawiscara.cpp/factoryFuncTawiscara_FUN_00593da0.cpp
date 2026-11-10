// Name: core_tawiscara.cpp_factoryFuncTawiscara_FUN_00593da0
// Address: 00593da0
// Address Range: [[00593da0, 00593dbb]]
// Convention: unknown
// Signature: void core_tawiscara_cpp_factoryFuncTawiscara_FUN_00593da0(void)

#include "nocturne.h"

void core_tawiscara_cpp_factoryFuncTawiscara_FUN_00593da0(void)

{
  CTawiscara *this_ptr;
  
  this_ptr = (CTawiscara *)debugAllocTracked1(0xd09c);
  if (this_ptr == (CTawiscara *)0x0) {
    return;
  }
  core_tawiscara_cpp_CTawiscara_ctor_FUN_00593dd0(this_ptr);
  return;
}
