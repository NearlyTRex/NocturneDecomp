// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_0055d360
// Address: 0055d360
// Address Range: [[0055d360, 0055d3e9]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0055d360(int param_1,CDemonLight *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0055d360(int param_1,CDemonLight *param_2)

{
  int iVar1;
  
  if (param_2 == (CDemonLight *)0x0) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0x387;
    core_main_c_FUN_005030e0("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < *(int *)(param_1 + 0x11ec)) {
    iVar1 = *(int *)(param_1 + 0x1890) + 1;
    *(int *)(param_1 + 0x1890) = iVar1;
    if (*(int *)(param_1 + 0x11ec) <= iVar1) {
      *(uint *)(param_1 + 0x1890) = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
              (param_2,*(CDemonFilter **)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
               *(int *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),0,0);
  }
  return;
}
