// Name: engine_dosio.cpp_CFileFinder_findNext_FUN_004793e0
// Address: 004793e0
// Address Range: [[004793e0, 0047945f]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder *this_ptr)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(CFileFinder *this_ptr)

{
  BOOL BVar1;
  _WIN32_FIND_DATAA _Stack_148;
  
  if (this_ptr->has_results == 0) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 654;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CFileFinder::open - search not opened!");
  }
  BVar1 = FindNextFileA(this_ptr->search_handle,&_Stack_148);
  if (BVar1 != 0) {
    engine_dosio_cpp_CFileFinder_convertStruct_FUN_004794b0(this_ptr,(byte *)&_Stack_148);
    return 1;
  }
  engine_dosio_cpp_CFileFinder_reset_FUN_004794a0(this_ptr);
  return 0;
}
