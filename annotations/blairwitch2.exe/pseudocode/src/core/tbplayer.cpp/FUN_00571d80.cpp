// Name: core_tbplayer.cpp_FUN_00571d80
// Address: 00571d80
// Address Range: [[00571d80, 00571d9b]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00571d80(void)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00571d80(void)

{
  CDrummer *this_ptr;
  
  this_ptr = (CDrummer *)FUN_005b8be2(0x24350);
  if (this_ptr == (CDrummer *)0x0) {
    return;
  }
  core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0(this_ptr);
  return;
}
