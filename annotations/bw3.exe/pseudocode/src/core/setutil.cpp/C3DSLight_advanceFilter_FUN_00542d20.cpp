// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_00542d20
// Address: 00542d20
// Address Range: [[00542d20, 00542da9]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_00542d20(int param_1,CDemonLight *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_00542d20(int param_1,CDemonLight *param_2)

{
  int iVar1;
  
  if (param_2 == (CDemonLight *)0x0) {
    _DAT_01d71de0 = "..\\core\\setutil.cpp";
    _DAT_01d71de4 = 0x387;
    core_main_c_FUN_004e4330("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < *(int *)(param_1 + 0x11ec)) {
    iVar1 = *(int *)(param_1 + 0x1890) + 1;
    *(int *)(param_1 + 0x1890) = iVar1;
    if (*(int *)(param_1 + 0x11ec) <= iVar1) {
      *(uint *)(param_1 + 0x1890) = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
              (param_2,*(CDemonFilter **)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
               *(int *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),0,0);
  }
  return;
}
