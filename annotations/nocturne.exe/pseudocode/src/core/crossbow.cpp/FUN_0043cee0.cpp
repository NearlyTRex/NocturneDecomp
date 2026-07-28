// Name: core_crossbow.cpp_FUN_0043cee0
// Address: 0043cee0
// Address Range: [[0043cee0, 0043cefb]]
// Convention: unknown
// Signature: void core_crossbow_cpp_FUN_0043cee0(void)

#include "nocturne.h"

void core_crossbow_cpp_FUN_0043cee0(void)

{
  CCrossbow *this_ptr;
  
  this_ptr = (CCrossbow *)FUN_0056497c(0x810);
  if (this_ptr == (CCrossbow *)0x0) {
    return;
  }
  core_crossbow_cpp_CCrossbow_ctor_FUN_0043cf10(this_ptr);
  return;
}
