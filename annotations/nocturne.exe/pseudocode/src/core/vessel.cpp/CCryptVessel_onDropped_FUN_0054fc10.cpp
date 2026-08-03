// Name: core_vessel.cpp_CCryptVessel_onDropped_FUN_0054fc10
// Address: 0054fc10
// Address Range: [[0054fc10, 0054fc2c]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_0054fc10(CCryptVessel *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_0054fc10(CCryptVessel *this_ptr,CVector3f *drop_position)

{
  (this_ptr->base).orient.vec.x = 0.0;
  (this_ptr->base).orient.vec.z = 0.0;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
