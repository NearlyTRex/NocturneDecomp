// Name: engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
// Address: 00456cc0
// Address Range: [[00456cc0, 00456d3f]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(CFileFinder *this_ptr)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(CFileFinder *this_ptr)

{
  BOOL BVar1;
  _WIN32_FIND_DATAA _Stack_148;
  
  if (this_ptr->has_results == 0) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 455;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CFileFinder::open - search not opened!");
  }
  BVar1 = FindNextFileA(this_ptr->search_handle,&_Stack_148);
  if (BVar1 != 0) {
    engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(this_ptr,&_Stack_148);
    return 1;
  }
  engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(this_ptr);
  return 0;
}
