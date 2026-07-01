// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_0056d090
// Address: 0056d090
// MANUAL RECONSTRUCTION
// Address Range: [[0056d090, 0056d109]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;

  if (light->light_enabled_flag != 0) {
    for (iVar1 = 0; iVar1 < g_DynamicLightCount; iVar1 = iVar1 + 1) {
      if (light == g_DynamicLights[iVar1]) {
        return;
      }
    }
    if (3 < g_DynamicLightCount) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 2255;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many dynamic lights!");
    }
    g_DynamicLightCount = g_DynamicLightCount + 1;
    g_DynamicLights[g_DynamicLightCount - 1] = light;
  }
  return;
}
