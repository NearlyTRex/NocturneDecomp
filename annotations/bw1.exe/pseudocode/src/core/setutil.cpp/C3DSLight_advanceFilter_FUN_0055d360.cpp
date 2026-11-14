// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_0055d360
// Address: 0055d360
// Address Range: [[0055d360, 0055d3e9]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0055d360(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0055d360(C3DSLight *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light == (CDemonLight *)0x0) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0x387;
    core_main_c_FUN_005030e0("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < this_ptr->filter_count) {
    iVar1 = this_ptr->current_filter_frame + 1;
    this_ptr->current_filter_frame = iVar1;
    if (this_ptr->filter_count <= iVar1) {
      this_ptr->current_filter_frame = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
              (light,this_ptr->filters[this_ptr->current_filter_frame],
               this_ptr->filter_indices[this_ptr->current_filter_frame],0,0);
  }
  return;
}
