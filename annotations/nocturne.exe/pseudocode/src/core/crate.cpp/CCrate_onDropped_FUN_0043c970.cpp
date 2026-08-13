// Name: core_crate.cpp_CCrate_onDropped_FUN_0043c970
// Address: 0043c970
// Address Range: [[0043c970, 0043c98c]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_onDropped_FUN_0043c970(CCrate *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_onDropped_FUN_0043c970(CCrate *this_ptr,CVector3f *drop_position)

{
  (this_ptr->base).orient.vec.x = 0.0;
  (this_ptr->base).orient.vec.z = 0.0;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
