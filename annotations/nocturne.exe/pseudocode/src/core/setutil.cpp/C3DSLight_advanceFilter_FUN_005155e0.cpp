// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_005155e0
// Address: 005155e0
// Address Range: [[005155e0, 00515669]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    PTR_01cc4800 = "..\\core\\setutil.cpp";
    INT_01cc4804 = 0x354;
    core_main_c_FUN_004c8440("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < *(int *)(param_1 + 0x11ec)) {
    iVar1 = *(int *)(param_1 + 0x1890) + 1;
    *(int *)(param_1 + 0x1890) = iVar1;
    if (*(int *)(param_1 + 0x11ec) <= iVar1) {
      *(uint *)(param_1 + 0x1890) = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
              (param_2,*(uint *)(param_1 + 0x1810 + *(int *)(param_1 + 0x1890) * 4),
               *(uint *)(param_1 + 0x1774 + *(int *)(param_1 + 0x1890) * 4),0,0);
  }
  return;
}
