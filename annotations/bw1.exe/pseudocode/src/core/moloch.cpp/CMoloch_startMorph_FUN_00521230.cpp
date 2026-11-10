// Name: core_moloch.cpp_CMoloch_startMorph_FUN_00521230
// Address: 00521230
// Address Range: [[00521230, 00521277]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_00521230(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_00521230(CMoloch *this_ptr)

{
  this_ptr->morph_timer = 0.0;
  this_ptr->morphing = 1;
  if (this_ptr->in_human_form != 0) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
              (this_ptr,"moloch-morph-todemon.wav");
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"moloch-morph-tohuman.wav")
  ;
  return;
}
