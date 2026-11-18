// Name: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_00483020
// Address: 00483020
// Address Range: [[00483020, 004831bd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_00483020(CStrList *this_ptr,char *base_path,char *search_path)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_00483020(CStrList *this_ptr,char *base_path,char *search_path)

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
  
  engine_dosio_cpp_splitPath_FUN_00465e50(base_path,acStack_8,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_makePath_FUN_00465e80
            (acStack_208,(char *)0x0,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_splitPath_FUN_00465e50
            (search_path,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
  engine_dosio_cpp_makePath_FUN_00465e80(acStack_50c,acStack_8,acStack_208,acStack_308,acStack_408);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00465b60(&CStack_828);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00465ba0(&CStack_828,acStack_50c);
  while (CStack_828.filename[0] != '\0') {
    if (((byte)CStack_828.attributes & 4) == 0) {
      engine_dosio_cpp_splitPath_FUN_00465e50
                (CStack_828.filename,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
      engine_dosio_cpp_makePath_FUN_00465e80
                (acStack_714,acStack_8,acStack_208,acStack_308,acStack_408);
      engine_dosio_cpp_getFullPath_FUN_00465ff0(acStack_610,acStack_714);
      shape_edittool_cpp_CStrList_add_FUN_00482070(this_ptr,acStack_610);
    }
    engine_dosio_cpp_CFileFinder_findNext_FUN_00465c20(&CStack_828);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00465ca0(&CStack_828);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80(&CStack_828,0);
  return;
}
