// Name: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
// Address: 005372f0
// Address Range: [[005372f0, 0053731d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  if ((0xff < globe->linear_radius_scaled) && (g_INT_0203ad30 < 100)) {
    (&g_INT_0203ad30)[g_INT_0203ad30 + 1] = (int)globe;
    g_INT_0203ad30 = g_INT_0203ad30 + 1;
    return;
  }
  return;
}
