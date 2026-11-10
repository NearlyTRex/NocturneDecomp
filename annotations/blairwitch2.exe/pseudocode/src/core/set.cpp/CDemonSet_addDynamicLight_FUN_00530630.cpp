// Name: core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630
// Address: 00530630
// Address Range: [[00530630, 005306a9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light->light_enabled_flag != 0) {
    if (0 < _DAT_01fc9608) {
      iVar1 = 0;
      do {
        if (light == *(CDemonLight **)(iVar1 + 0x1fc960c)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < _DAT_01fc9608 * 4);
    }
    if (3 < _DAT_01fc9608) {
      _DAT_01d046a0 = "..\\core\\set.cpp";
      _DAT_01d046a4 = 0x9b1;
      core_main_c_FUN_004e4500("Too many dynamic lights!");
    }
    _DAT_01fc9608 = _DAT_01fc9608 + 1;
    *(CDemonLight **)(&DAT_01fc9608 + _DAT_01fc9608 * 4) = light;
  }
  return;
}
