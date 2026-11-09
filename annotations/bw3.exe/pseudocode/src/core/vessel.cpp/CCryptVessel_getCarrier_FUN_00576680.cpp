// Name: core_vessel.cpp_CCryptVessel_getCarrier_FUN_00576680
// Address: 00576680
// Address Range: [[00576680, 0057668a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_vessel_cpp_CCryptVessel_getCarrier_FUN_00576680(CCryptVessel *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_vessel_cpp_CCryptVessel_getCarrier_FUN_00576680(CCryptVessel *this_ptr)

{
  return *(CDemonActor **)&this_ptr->field_0x2d4;
}
