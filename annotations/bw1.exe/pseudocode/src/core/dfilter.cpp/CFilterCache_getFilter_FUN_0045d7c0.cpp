// Name: core_dfilter.cpp_CFilterCache_getFilter_FUN_0045d7c0
// Address: 0045d7c0
// Address Range: [[0045d7c0, 0045d8f8]]
// Convention: __cdecl
// Signature: CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_getFilter_FUN_0045d7c0(CFilterCache *this_ptr,char *filter_name,int blend_filter)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_getFilter_FUN_0045d7c0(CFilterCache *this_ptr,char *filter_name,int blend_filter)

{
  char cVar1;
  int iVar2;
  CDemonFilter *this_ptr_00;
  CDemonFilter *pCVar3;
  int iVar4;
  char (*pacVar5) [40];
  char *pcVar6;
  
  iVar4 = 0;
  if (0 < this_ptr->filter_count) {
    pacVar5 = this_ptr->filter_names;
    do {
      iVar2 = _strcmp(*pacVar5,filter_name);
      if (iVar2 == 0) {
        return this_ptr->filters[iVar4];
      }
      iVar4 = iVar4 + 1;
      pacVar5 = pacVar5 + 1;
    } while (iVar4 < this_ptr->filter_count);
  }
  if (0x3f < this_ptr->filter_count) {
    _DAT_01d1d400 = "..\\core\\dfilter.cpp";
    _DAT_01d1d404 = 0x55;
    core_main_c_FUN_005030e0("CFilterCache::getFilter - Too many filters");
  }
  pacVar5 = this_ptr->filter_names + iVar4;
  this_ptr->filter_count = this_ptr->filter_count + 1;
  pcVar6 = filter_name;
  do {
    cVar1 = *pcVar6;
    (*pacVar5)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    (*pacVar5)[1] = cVar1;
    pacVar5 = (char (*) [40])(*pacVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00 = (CDemonFilter *)operator_new(0x4c);
  pCVar3 = (CDemonFilter *)0x0;
  if (this_ptr_00 != (CDemonFilter *)0x0) {
    pCVar3 = core_dfilter_cpp_CDemonFilter_ctor_FUN_0045d950(this_ptr_00);
  }
  this_ptr->filters[iVar4] = pCVar3;
  if (pCVar3 == (CDemonFilter *)0x0) {
    _DAT_01d1d400 = "..\\core\\dfilter.cpp";
    _DAT_01d1d404 = 0x59;
    core_main_c_FUN_005030e0("CFilterCache::getFilter - Out of memory");
  }
  core_dfilter_cpp_CDemonFilter_load_FUN_0045da30(this_ptr->filters[iVar4],filter_name);
  if (blend_filter != 0) {
    core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30(this_ptr->filters[iVar4],1.333,1);
  }
  return this_ptr->filters[iVar4];
}
