// Name: core_vessel.cpp_CCryptVessel_onDropped_FUN_00576660
// Address: 00576660
// Address Range: [[00576660, 0057667c]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_00576660(CCryptVessel *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_onDropped_FUN_00576660(CCryptVessel *this_ptr,CVector3f *drop_position)

{
  (this_ptr->base).orient.vec.x = 0.0;
  (this_ptr->base).orient.vec.z = 0.0;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
