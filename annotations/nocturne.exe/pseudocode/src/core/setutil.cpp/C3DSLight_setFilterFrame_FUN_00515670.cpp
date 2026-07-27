// Name: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00515670
// Address: 00515670
// Address Range: [[00515670, 00515703]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670(int param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    PTR_01cc4800 = "..\\core\\setutil.cpp";
    INT_01cc4804 = 0x36c;
    core_main_c_FUN_004c8440("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x11ec) <= param_2)) {
    PTR_01cc4800 = "..\\core\\setutil.cpp";
    INT_01cc4804 = 0x370;
    core_main_c_FUN_004c8440("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  *(int *)(param_1 + 0x1890) = param_2;
  core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
            (param_3,*(uint *)(param_1 + 0x1810 + param_2 * 4),
             *(uint *)(param_1 + 0x1774 + param_2 * 4),0,0);
  return;
}
