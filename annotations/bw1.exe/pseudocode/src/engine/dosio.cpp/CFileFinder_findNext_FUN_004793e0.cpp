// Name: engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0
// Address: 004793e0
// Address Range: [[004793e0, 0047945f]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder *this_ptr)

{
  BOOL BVar1;
  _WIN32_FIND_DATAA _Stack_148;
  
  if (this_ptr->has_results == 0) {
    _DAT_01d1d400 = "..\\engine\\dosio.c";
    _DAT_01d1d404 = 0x28e;
    core_main_c_FUN_005030e0("CFileFinder::open - search not opened!");
  }
  BVar1 = FindNextFileA(this_ptr->search_handle,&_Stack_148);
  if (BVar1 != 0) {
    engine_dosio_cpp_CFileFinder_convertStruct_FUN_004794b0(this_ptr,(byte *)&_Stack_148);
    return 1;
  }
  engine_dosio_cpp_CFileFinder_reset_FUN_004794a0(this_ptr);
  return 0;
}
