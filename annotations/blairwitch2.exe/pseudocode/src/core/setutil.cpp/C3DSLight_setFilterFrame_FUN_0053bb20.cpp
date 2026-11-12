// Name: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_0053bb20
// Address: 0053bb20
// Address Range: [[0053bb20, 0053bbb3]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0053bb20(C3DSLight *this_ptr,int frame_index,CDemonLight *light)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_0053bb20(C3DSLight *this_ptr,int frame_index,CDemonLight *light)

{
  if (light == (CDemonLight *)0x0) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x39f;
    core_main_c_FUN_004e4500("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((frame_index < 0) || (this_ptr->filter_count <= frame_index)) {
    _DAT_01d046a0 = "..\\core\\setutil.cpp";
    _DAT_01d046a4 = 0x3a3;
    core_main_c_FUN_004e4500("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  this_ptr->current_filter_frame = frame_index;
  core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600
            (light,this_ptr->filters[frame_index],this_ptr->filter_indices[frame_index],0,0);
  return;
}
