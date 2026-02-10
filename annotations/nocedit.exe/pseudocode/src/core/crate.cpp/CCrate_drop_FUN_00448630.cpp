// Name: core_crate.cpp_CCrate_drop_FUN_00448630
// Address: 00448630
// Address Range: [[00448630, 0044864c]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_drop_FUN_00448630(CCrate *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_drop_FUN_00448630(CCrate *this_ptr,CVector3f *drop_position)

{
  (this_ptr->base).orient.vec.x = 0.0;
  (this_ptr->base).orient.vec.z = 0.0;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
