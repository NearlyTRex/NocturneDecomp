// Name: core_setutil.cpp_C3DSLight_addFilter_FUN_00515710
// Address: 00515710
// Address Range: [[00515710, 005157f3]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00515710(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00515710(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)

{
  char cVar1;
  CDemonFilter *pCVar2;
  char (*pacVar3) [40];
  
  if (0x1f < this_ptr->filter_count) {
    PTR_01cc4800 = "..\\core\\setutil.cpp";
    INT_01cc4804 = 899;
    core_main_c_FUN_004c8440("C3DSLight::addFilter - too many filters (max is %d)",0x20);
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
  pCVar2 = (CDemonFilter *)
           core_dfilter_cpp_CFilterCache_getFilter_FUN_0044bd20
                     (0x014B8DE8,this_ptr->filter_names + this_ptr->filter_count,
                      this_ptr->blend_filter);
  this_ptr->filters[this_ptr->filter_count] = pCVar2;
  this_ptr->filter_count = this_ptr->filter_count + 1;
  return;
}
