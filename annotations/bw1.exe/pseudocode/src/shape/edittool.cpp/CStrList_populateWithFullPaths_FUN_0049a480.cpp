// Name: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_0049a480
// Address: 0049a480
// Address Range: [[0049a480, 0049a61d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_0049a480(CStrList *this_ptr,char *base_path,char *search_path)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_0049a480(CStrList *this_ptr,char *base_path,char *search_path)

{
  CFileFinder CStack_828;
  char acStack_714 [260];
  char acStack_610 [260];
  char acStack_50c [260];
  char acStack_408 [256];
  char acStack_308 [256];
  char acStack_208 [256];
  char acStack_108 [256];
  char acStack_8 [4];
  
  engine_dosio_cpp_splitPath_FUN_00479580(base_path,acStack_8,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_makePath_FUN_004795b0
            (acStack_208,(char *)0x0,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_splitPath_FUN_00479580
            (search_path,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
  engine_dosio_cpp_makePath_FUN_004795b0(acStack_50c,acStack_8,acStack_208,acStack_308,acStack_408);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(&CStack_828);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_828,acStack_50c);
  while (CStack_828.filename[0] != '\0') {
    if (((byte)CStack_828.attributes & 4) == 0) {
      engine_dosio_cpp_splitPath_FUN_00479580
                (CStack_828.filename,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
      engine_dosio_cpp_makePath_FUN_004795b0
                (acStack_714,acStack_8,acStack_208,acStack_308,acStack_408);
      engine_dosio_cpp_getFullPath_FUN_00479720(acStack_610,acStack_714);
      shape_edittool_cpp_CStrList_add_FUN_004994d0(this_ptr,acStack_610);
    }
    engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_828);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(&CStack_828);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_828,0);
  return;
}
