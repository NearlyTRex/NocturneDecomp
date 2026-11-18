// Name: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0
// Address: 005306b0
// Address Range: [[005306b0, 005306dd]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  if ((0xff < globe->linear_radius_scaled) && (g_INT_01fc961c < 100)) {
    (&g_INT_01fc961c)[g_INT_01fc961c + 1] = (int)globe;
    g_INT_01fc961c = g_INT_01fc961c + 1;
    return;
  }
  return;
}
