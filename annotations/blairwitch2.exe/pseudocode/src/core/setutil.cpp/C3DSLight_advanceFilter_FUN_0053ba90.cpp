// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_0053ba90
// Address: 0053ba90
// Address Range: [[0053ba90, 0053bb19]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0053ba90(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_0053ba90(C3DSLight *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light == (CDemonLight *)0x0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x387;
    core_main_c_FUN_004e4500("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < this_ptr->filter_count) {
    iVar1 = this_ptr->current_filter_frame + 1;
    this_ptr->current_filter_frame = iVar1;
    if (this_ptr->filter_count <= iVar1) {
      this_ptr->current_filter_frame = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600
              (light,this_ptr->filters[this_ptr->current_filter_frame],
               this_ptr->filter_indices[this_ptr->current_filter_frame],0,0);
  }
  return;
}
