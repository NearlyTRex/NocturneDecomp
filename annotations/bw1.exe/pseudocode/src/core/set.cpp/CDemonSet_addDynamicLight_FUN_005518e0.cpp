// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0
// Address: 005518e0
// Address Range: [[005518e0, 00551959]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light->light_enabled_flag != 0) {
    if (0 < g_INT_01fe55bc) {
      iVar1 = 0;
      do {
        if (light == *(CDemonLight **)((int)g_DynamicLights + iVar1)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < g_INT_01fe55bc * 4);
    }
    if (3 < g_INT_01fe55bc) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 2477;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Too many dynamic lights!");
    }
    g_INT_01fe55bc = g_INT_01fe55bc + 1;
    (&g_INT_01fe55bc)[g_INT_01fe55bc] = (int)light;
  }
  return;
}
