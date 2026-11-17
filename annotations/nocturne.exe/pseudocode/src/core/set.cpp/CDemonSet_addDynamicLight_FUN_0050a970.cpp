// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
// Address: 0050a970
// Address Range: [[0050a970, 0050a9e9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light->light_enabled_flag != 0) {
    if (0 < g_INT_01fba2d8) {
      iVar1 = 0;
      do {
        if (light == *(CDemonLight **)((int)g_DynamicLights + iVar1)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < g_INT_01fba2d8 * 4);
    }
    if (3 < g_INT_01fba2d8) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 2149;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many dynamic lights!");
    }
    g_INT_01fba2d8 = g_INT_01fba2d8 + 1;
    (&g_INT_01fba2d8)[g_INT_01fba2d8] = (int)light;
  }
  return;
}
