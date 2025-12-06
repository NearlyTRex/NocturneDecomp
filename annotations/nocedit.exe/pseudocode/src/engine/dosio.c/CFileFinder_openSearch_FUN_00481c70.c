// Name: engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
// Address: 00481c70
// Address Range: [[00481c70, 00481ce9]]
// Convention: __cdecl
// Signature: int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)

#include "nocturne.h"

int __cdecl
engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(CFileFinder *this_ptr,char *search_pattern)

{
  HANDLE pvVar1;
  BADSPACEBASE *in_ESP;
  LPCSTR in_stack_0000000c;
  DWORD DStack_140;
  
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(this_ptr);
  pvVar1 = (*PTR_FindFirstFileA_0061154c)(in_stack_0000000c,(LPWIN32_FIND_DATAA)&DStack_140);
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (this_ptr->has_results == 0) {
      engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
      return this_ptr->has_results;
    }
  }
  else {
    this_ptr->search_handle = pvVar1;
    DStack_140 = 0x481cc4;
    engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0
              (this_ptr,(LPWIN32_FIND_DATAA)&stack0xfffffecc);
    this_ptr->has_results = 1;
  }
  return this_ptr->has_results;
}
