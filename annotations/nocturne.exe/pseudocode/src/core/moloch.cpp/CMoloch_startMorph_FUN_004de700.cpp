// Name: core_moloch.cpp_CMoloch_startMorph_FUN_004de700
// Address: 004de700
// Address Range: [[004de700, 004de747]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_004de700(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_004de700(CMoloch *this_ptr)

{
  this_ptr->morph_timer = 0.0;
  this_ptr->morphing = 1;
  if (this_ptr->in_human_form != 0) {
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"moloch-morph-todemon.wav");
    return;
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"moloch-morph-tohuman.wav");
  return;
}
