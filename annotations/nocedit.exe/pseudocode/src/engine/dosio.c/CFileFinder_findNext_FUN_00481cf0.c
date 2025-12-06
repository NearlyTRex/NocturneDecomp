// Name: engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
// Address: 00481cf0
// Address Range: [[00481cf0, 00481d6f]]
// Convention: __cdecl
// Signature: int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)

#include "nocturne.h"

int __cdecl engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(CFileFinder *this_ptr)

{
  BOOL BVar1;
  BADSPACEBASE *in_ESP;
  DWORD DStack_144;
  
  if (this_ptr->has_results == 0) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 0x244;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFileFinder::open - search not opened!");
  }
  BVar1 = (*PTR_FindNextFileA_00611550)(this_ptr->search_handle,(LPWIN32_FIND_DATAA)&DStack_144);
  if (BVar1 != 0) {
    DStack_144 = 0x481d4b;
    engine_dosio_c_CFileFinder_convertStruct_FUN_00481dc0
              (this_ptr,(LPWIN32_FIND_DATAA)&stack0xfffffec8);
    return 1;
  }
  engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
  return 0;
}
