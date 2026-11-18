// Name: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
// Address: 0050a9f0
// Address Range: [[0050a9f0, 0050aa1d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  if ((0xff < globe->linear_radius_scaled) && (g_INT_01fba2ec < 100)) {
    (&g_INT_01fba2ec)[g_INT_01fba2ec + 1] = (int)globe;
    g_INT_01fba2ec = g_INT_01fba2ec + 1;
    return;
  }
  return;
}
