// Name: core_basicene.cpp_CBasicEnemy_startFade_FUN_0059f570
// Address: 0059f570
// Address Range: [[0059f570, 0059f5aa]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(CBasicEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(CBasicEnemy *this_ptr)

{
  this_ptr->fade_state = 0;
  (this_ptr->base).base.base.is_transparent = 1;
  this_ptr->fade_timer = this_ptr->fade_time;
  this_ptr->fade_val = this_ptr->fade_start;
  this_ptr->fade_state = 1;
  return;
}
