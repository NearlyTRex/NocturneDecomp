// Name: core_tbplayer.cpp_FUN_005da020
// Address: 005da020
// Address Range: [[005da020, 005da042]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da020()

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da020(void)

{
  CBassPlayer *this_ptr;
  
  this_ptr = (CBassPlayer *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f710,"..\\core\\tbplayer.cpp",0x20);
  if (this_ptr == (CBassPlayer *)0x0) {
    return;
  }
  core_tbplayer_cpp_CBassPlayer_ctor_FUN_005da060(this_ptr);
  return;
}
