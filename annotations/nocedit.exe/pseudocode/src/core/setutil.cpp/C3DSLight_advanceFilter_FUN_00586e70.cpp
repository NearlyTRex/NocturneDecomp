// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70
// Address: 00586e70
// Address Range: [[00586e70, 00586ef9]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x387;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < this_ptr->filter_count) {
    iVar1 = this_ptr->current_filter_frame + 1;
    this_ptr->current_filter_frame = iVar1;
    if (this_ptr->filter_count <= iVar1) {
      this_ptr->current_filter_frame = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              (light,this_ptr->filters[this_ptr->current_filter_frame],
               this_ptr->filter_indices[this_ptr->current_filter_frame],0,0);
  }
  return;
}
