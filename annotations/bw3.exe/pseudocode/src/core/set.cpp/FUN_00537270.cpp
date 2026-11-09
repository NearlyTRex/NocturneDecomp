// Name: core_set.cpp_FUN_00537270
// Address: 00537270
// Address Range: [[00537270, 005372e9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00537270(CDemonSet *this_ptr,CDemonLight *light)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00537270(CDemonSet *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (*(int *)&light->field_0x1cb4 != 0) {
    if (0 < _DAT_0203ad1c) {
      iVar1 = 0;
      do {
        if (light == *(CDemonLight **)(iVar1 + 0x203ad20)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < _DAT_0203ad1c * 4);
    }
    if (3 < _DAT_0203ad1c) {
      _DAT_01d71de0 = "..\\core\\set.cpp";
      _DAT_01d71de4 = 0x9c5;
      core_main_c_FUN_004e4330("Too many dynamic lights!");
    }
    _DAT_0203ad1c = _DAT_0203ad1c + 1;
    *(CDemonLight **)(&DAT_0203ad1c + _DAT_0203ad1c * 4) = light;
  }
  return;
}
