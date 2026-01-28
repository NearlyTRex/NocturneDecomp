// Name: core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0
// Address: 00586fa0
// Address Range: [[00586fa0, 00587083]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0 (C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0
          (C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)

{
  char cVar1;
  CDemonFilter *pCVar2;
  int unaff_EBP;
  char (*pacVar3) [40];
  
  if (0x1f < this_ptr->filter_count) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x3b6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::addFilter - too many filters (max is %d)",0x20);
  }
  pacVar3 = this_ptr->filter_names + this_ptr->filter_count;
  do {
    cVar1 = *filter_name;
    (*pacVar3)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filter_name[1];
    filter_name = filter_name + 2;
    (*pacVar3)[1] = cVar1;
    pacVar3 = (char (*) [40])(*pacVar3 + 2);
  } while (cVar1 != '\0');
  this_ptr->filter_durations[this_ptr->filter_count] = duration;
  this_ptr->filter_indices[this_ptr->filter_count] = filter_mode;
  pCVar2 = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                     (g_CFilterCachePtr,this_ptr->filter_names[this_ptr->filter_count],
                      (char *)this_ptr->blend_filter,unaff_EBP);
  this_ptr->filters[this_ptr->filter_count] = pCVar2;
  this_ptr->filter_count = this_ptr->filter_count + 1;
  return;
}
