// Name: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00594750
// Address: 00594750
// Address Range: [[00594750, 0059476b]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00594750(void)

#include "nocturne.h"

void core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00594750(void)

{
  CBassPlayer *this_ptr;
  
  this_ptr = (CBassPlayer *)debugAllocTracked1(0x1fac0);
  if (this_ptr == (CBassPlayer *)0x0) {
    return;
  }
  core_tbplayer_cpp_CBassPlayer_ctor_FUN_00594780(this_ptr);
  return;
}
