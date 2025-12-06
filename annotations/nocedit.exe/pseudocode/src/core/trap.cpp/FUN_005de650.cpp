// Name: core_trap.cpp_FUN_005de650
// Address: 005de650
// Address Range: [[005de650, 005de672]]
// Convention: unknown
// Signature: undefined core_trap.cpp_FUN_005de650()

#include "nocturne.h"

void core_trap_cpp_FUN_005de650(void)

{
  CTrap *this_ptr;
  
  this_ptr = (CTrap *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2dc,"..\\core\\trap.cpp",0x20);
  if (this_ptr == (CTrap *)0x0) {
    return;
  }
  core_trap_cpp_CTrap_ctor_FUN_005de690(this_ptr);
  return;
}
