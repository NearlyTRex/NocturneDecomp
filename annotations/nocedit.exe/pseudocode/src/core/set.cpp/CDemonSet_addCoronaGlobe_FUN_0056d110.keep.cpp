// Name: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110
// Address: 0056d110
// MANUAL RECONSTRUCTION
// Address Range: [[0056d110, 0056d13d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  if ((0xff < globe->linear_radius_scaled) && (g_CoronaGlobeCount < 100)) {
    g_CoronaGlobes[g_CoronaGlobeCount] = globe;
    g_CoronaGlobeCount = g_CoronaGlobeCount + 1;
    return;
  }
  return;
}
