// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_00537270
// Address: 00537270
// Address Range: [[00537270, 005372e9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_00537270(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_00537270(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light->light_enabled_flag != 0) {
    if (0 < g_INT_0203ad1c) {
      iVar1 = 0;
      do {
        if (light == *(CDemonLight **)((int)g_DynamicLights + iVar1)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < g_INT_0203ad1c * 4);
    }
    if (3 < g_INT_0203ad1c) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 2501;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Too many dynamic lights!");
    }
    g_INT_0203ad1c = g_INT_0203ad1c + 1;
    (&g_INT_0203ad1c)[g_INT_0203ad1c] = (int)light;
  }
  return;
}
