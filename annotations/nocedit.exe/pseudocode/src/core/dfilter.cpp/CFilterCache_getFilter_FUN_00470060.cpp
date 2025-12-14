// Name: core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
// Address: 00470060
// Address Range: [[00470060, 0047019f]]
// Convention: __cdecl
// Signature: CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060(CFilterCache * this_ptr, char * filter_name, char * filter_filename, int enable_init)

#include "nocturne.h"

CDemonFilter * __cdecl
core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
          (CFilterCache *this_ptr,char *filter_name,char *filter_filename,int enable_init)

{
  char cVar1;
  int iVar2;
  CDemonFilter *this_ptr_00;
  CDemonFilter *pCVar3;
  int iVar4;
  char (*pacVar5) [40];
  char *in_stack_00000014;
  int in_stack_0000001c;
  
  iVar4 = 0;
  if (0 < this_ptr->filter_count) {
    pacVar5 = this_ptr->filter_names;
    do {
      iVar2 = crt_string_c_strcmp_FUN_005fef20(*pacVar5,filter_name);
      if (iVar2 == 0) {
        return this_ptr->filters[iVar4];
      }
      iVar4 = iVar4 + 1;
      pacVar5 = pacVar5 + 1;
    } while (iVar4 < this_ptr->filter_count);
  }
  if (0x3f < this_ptr->filter_count) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0x55;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFilterCache::getFilter - Too many filters");
  }
  pacVar5 = this_ptr->filter_names + iVar4;
  this_ptr->filter_count = this_ptr->filter_count + 1;
  do {
    cVar1 = *filter_filename;
    (*pacVar5)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filter_filename[1];
    filter_filename = filter_filename + 2;
    (*pacVar5)[1] = cVar1;
    pacVar5 = (char (*) [40])(*pacVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x4c,"..\\core\\dfilter.cpp",0x58);
  pCVar3 = (CDemonFilter *)0x0;
  if (this_ptr_00 != (CDemonFilter *)0x0) {
    pCVar3 = core_dfilter_cpp_CDemonFilter_ctor_FUN_004701f0(this_ptr_00);
  }
  this_ptr->filters[iVar4] = pCVar3;
  if (pCVar3 == (CDemonFilter *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0x59;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFilterCache::getFilter - Out of memory");
  }
  core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr->filters[iVar4],in_stack_00000014);
  if (in_stack_0000001c != 0) {
    core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(this_ptr->filters[iVar4],1.333,1);
  }
  return this_ptr->filters[iVar4];
}
