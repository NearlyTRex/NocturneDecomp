// Name: engine_dosio.cpp_CFileFinder_findNext_FUN_00481cf0
// Address: 00481cf0
// Address Range: [[00481cf0, 00481d6f]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(CFileFinder *this_ptr)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(CFileFinder *this_ptr)

{
  BOOL BVar1;
  _WIN32_FIND_DATAA _Stack_148;
  
  if (this_ptr->has_results == 0) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 0x244;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFileFinder::open - search not opened!");
  }
  BVar1 = (*g_FindNextFileAFunc)(this_ptr->search_handle,&_Stack_148);
  if (BVar1 != 0) {
    engine_dosio_cpp_CFileFinder_convertStruct_FUN_00481dc0(this_ptr,&_Stack_148);
    return 1;
  }
  engine_dosio_cpp_CFileFinder_reset_FUN_00481db0(this_ptr);
  return 0;
}
