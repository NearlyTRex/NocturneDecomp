// Name: core_basicene.cpp_CBasicEnemy_setFade_FUN_005a01a0
// Address: 005a01a0
// Address Range: [[005a01a0, 005a01c2]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0(CBasicEnemy *this_ptr,float fade_start,float fade_end,float fade_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0(CBasicEnemy *this_ptr,float fade_start,float fade_end,float fade_time)

{
  this_ptr->fade_start = fade_start;
  this_ptr->fade_end = fade_end;
  this_ptr->fade_time = fade_time;
  return;
}
