// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630
// Address: 00530630
// Address Range: [[00530630, 005306a9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light->light_enabled_flag != 0) {
    if (0 < g_INT_01fc9608) {
      iVar1 = 0;
      do {
        if (light == *(CDemonLight **)((int)g_DynamicLights + iVar1)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < g_INT_01fc9608 * 4);
    }
    if (3 < g_INT_01fc9608) {
      g_CHAR_PTR_01d046a0 = "..\\core\\set.cpp";
      g_INT_01d046a4 = 0x9b1;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Too many dynamic lights!");
    }
    g_INT_01fc9608 = g_INT_01fc9608 + 1;
    (&g_INT_01fc9608)[g_INT_01fc9608] = (int)light;
  }
  return;
}
