// Name: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00571b00
// Address: 00571b00
// Address Range: [[00571b00, 00571b1b]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00571b00(void)

#include "nocturne.h"

void core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00571b00(void)

{
  CBassPlayer *this_ptr;
  
  this_ptr = (CBassPlayer *)operator_new(0x24350);
  if (this_ptr == (CBassPlayer *)0x0) {
    return;
  }
  core_tbplayer_cpp_CBassPlayer_ctor_FUN_00571b30(this_ptr);
  return;
}
