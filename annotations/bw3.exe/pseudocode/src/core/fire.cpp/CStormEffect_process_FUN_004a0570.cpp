// Name: core_fire.cpp_CStormEffect_process_FUN_004a0570
// Address: 004a0570
// Address Range: [[004a0570, 004a05ce]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStormEffect_process_FUN_004a0570(CStormEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStormEffect_process_FUN_004a0570(CStormEffect *this_ptr)

{
  float fVar1;
  
  if ((0.0 < this_ptr->time_remaining) &&
     (fVar1 = this_ptr->time_remaining - g_CGamePtr->delta_time_float,
     this_ptr->time_remaining = fVar1, fVar1 < 0.0)) {
    this_ptr->time_remaining = 0.0;
    if (this_ptr->saved_weather_type != 5) {
      core_weather_cpp_FUN_0057d050(0x02D0C1A0,this_ptr->saved_weather_type);
    }
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    this_ptr->sfx_handle = 0;
  }
  return;
}
