// Name: core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0
// Address: 00586fa0
// MANUAL RECONSTRUCTION
// Address Range: [[00586fa0, 00587083]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)

{
  CDemonFilter *pCVar2;

  if (0x1f < this_ptr->filter_count) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 950;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::addFilter - too many filters (max is %d)",0x20);
  }
  strcpy(this_ptr->filter_names[this_ptr->filter_count], filter_name);
  this_ptr->filter_durations[this_ptr->filter_count] = duration;
  this_ptr->filter_indices[this_ptr->filter_count] = filter_mode;
  pCVar2 = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                     (g_CFilterCachePtr,this_ptr->filter_names[this_ptr->filter_count],
                      this_ptr->blend_filter);
  this_ptr->filters[this_ptr->filter_count] = pCVar2;
  this_ptr->filter_count = this_ptr->filter_count + 1;
  return;
}
