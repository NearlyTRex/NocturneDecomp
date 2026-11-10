// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0
// Address: 005518e0
// Address Range: [[005518e0, 00551959]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light->light_enabled_flag != 0) {
    if (0 < _DAT_01fe55bc) {
      iVar1 = 0;
      do {
        if (light == *(CDemonLight **)(iVar1 + 0x1fe55c0)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < _DAT_01fe55bc * 4);
    }
    if (3 < _DAT_01fe55bc) {
      _DAT_01d1d400 = "..\\core\\set.cpp";
      _DAT_01d1d404 = 0x9ad;
      core_main_c_FUN_005030e0("Too many dynamic lights!");
    }
    _DAT_01fe55bc = _DAT_01fe55bc + 1;
    *(CDemonLight **)(&DAT_01fe55bc + _DAT_01fe55bc * 4) = light;
  }
  return;
}
