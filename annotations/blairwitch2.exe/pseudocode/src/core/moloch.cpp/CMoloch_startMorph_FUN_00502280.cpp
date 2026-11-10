// Name: core_moloch.cpp_CMoloch_startMorph_FUN_00502280
// Address: 00502280
// Address Range: [[00502280, 005022c7]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_00502280(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_00502280(CMoloch *this_ptr)

{
  this_ptr->morph_timer = 0.0;
  this_ptr->morphing = 1;
  if (this_ptr->in_human_form != 0) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
              (this_ptr,"moloch-morph-todemon.wav");
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"moloch-morph-tohuman.wav")
  ;
  return;
}
