// Name: core_crate.cpp_CCrate_onDropped_FUN_00445d40
// Address: 00445d40
// Address Range: [[00445d40, 00445d5c]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_onDropped_FUN_00445d40(CCrate *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_onDropped_FUN_00445d40(CCrate *this_ptr,CVector3f *drop_position)

{
  (this_ptr->base).orient.vec.x = 0.0;
  (this_ptr->base).orient.vec.z = 0.0;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
