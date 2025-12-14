// Name: core_backgnd.cpp_FUN_00412770
// Address: 00412770
// Address Range: [[00412770, 00412792]]
// Convention: unknown
// Signature: undefined core_backgnd.cpp_FUN_00412770()

#include "nocturne.h"

void core_backgnd_cpp_FUN_00412770(void)

{
  CBackgroundActor *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2dc,"..\\core\\backgnd.cpp",0x26);
  if (this_ptr == (CBackgroundActor *)0x0) {
    return;
  }
  core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(this_ptr);
  return;
}
