// Name: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_0053bb20
// Address: 0053bb20
// Address Range: [[0053bb20, 0053bbb3]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0053bb20(int param_1,int param_2,CDemonLight *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0053bb20(int param_1,int param_2,CDemonLight *param_3)

{
  if (param_3 == (CDemonLight *)0x0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x39f;
    core_main_c_FUN_004e4500("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x11ec) <= param_2)) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x3a3;
    core_main_c_FUN_004e4500("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  *(int *)(param_1 + 0x1890) = param_2;
  core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600
            (param_3,*(CDemonFilter **)(param_1 + 0x1810 + param_2 * 4),
             *(int *)(param_1 + 0x1774 + param_2 * 4),0,0);
  return;
}
