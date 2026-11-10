// Name: core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0
// Address: 0040e1a0
// Address Range: [[0040e1a0, 0040e202]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(CAmmoBox *this_ptr,float open_pct)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(CAmmoBox *this_ptr,float open_pct)

{
  this_ptr->open_pct = open_pct;
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"Open pct : %f\n",(double)open_pct);
  if ((this_ptr->is_sound_playing == 0) &&
     (this_ptr->is_sound_playing = 1, this_ptr->open_sound[0] != '\0')) {
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->open_sound);
    return;
  }
  return;
}
