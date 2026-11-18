// Name: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960
// Address: 00551960
// Address Range: [[00551960, 0055198d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  if ((0xff < globe->linear_radius_scaled) && (g_INT_01fe55d0 < 100)) {
    (&g_INT_01fe55d0)[g_INT_01fe55d0 + 1] = (int)globe;
    g_INT_01fe55d0 = g_INT_01fe55d0 + 1;
    return;
  }
  return;
}
