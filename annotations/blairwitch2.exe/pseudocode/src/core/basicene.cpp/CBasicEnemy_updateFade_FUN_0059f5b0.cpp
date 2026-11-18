// Name: core_basicene.cpp_CBasicEnemy_updateFade_FUN_0059f5b0
// Address: 0059f5b0
// Address Range: [[0059f5b0, 0059f656]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_updateFade_FUN_0059f5b0(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_updateFade_FUN_0059f5b0(CBasicEnemy *this_ptr,float delta_time)

{
  float fVar1;
  
  if (this_ptr->fade_state == 0) {
    return;
  }
  fVar1 = this_ptr->fade_timer - delta_time;
  this_ptr->fade_timer = fVar1;
  if (0.0 < fVar1) {
    fVar1 = (this_ptr->fade_end - this_ptr->fade_start) *
            ((this_ptr->fade_time - this_ptr->fade_timer) / this_ptr->fade_time) +
            this_ptr->fade_start;
    this_ptr->fade_val = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->fade_val = 0.0;
      if (this_ptr->fade_val <= 1.0) {
        return;
      }
    }
    else if (this_ptr->fade_val <= 1.0) {
      return;
    }
    this_ptr->fade_val = 1.0;
    return;
  }
  this_ptr->fade_state = 0;
  this_ptr->fade_val = this_ptr->fade_end;
  return;
}
