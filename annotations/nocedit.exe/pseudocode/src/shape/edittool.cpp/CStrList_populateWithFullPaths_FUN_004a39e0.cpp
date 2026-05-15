// Name: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
// Address: 004a39e0
// Address Range: [[004a39e0, 004a3b81]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList *this_ptr,char *base_path,char *search_path)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList *this_ptr,char *base_path,char *search_path)

{
  CFileFinder local_828;
  char local_714 [260];
  char local_610 [260];
  char local_50c [260];
  char local_408 [256];
  char local_308 [256];
  char local_208 [256];
  char local_108 [256];
  char local_8 [4];
  
  engine_dosio_cpp_splitPath_FUN_00481f20(base_path,local_8,local_108,local_208,local_408);
  engine_dosio_cpp_makePath_FUN_00481f50(local_308,(char *)0x0,local_108,local_208,local_408);
  engine_dosio_cpp_splitPath_FUN_00481f20(search_path,(char *)0x0,(char *)0x0,local_208,local_408);
  engine_dosio_cpp_makePath_FUN_00481f50(local_50c,local_8,local_308,local_208,local_408);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00481c30(&local_828);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00481c70(&local_828,local_50c);
  while (local_828.filename[0] != '\0') {
    engine_dosio_cpp_splitPath_FUN_00481f20
              (local_828.filename,(char *)0x0,(char *)0x0,local_208,local_408);
    engine_dosio_cpp_makePath_FUN_00481f50(local_610,local_8,local_308,local_208,local_408);
    engine_dosio_cpp_getFullPath_FUN_004820c0(local_714,local_610);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr,local_714);
    engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(&local_828);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(&local_828);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(&local_828,0);
  return;
}
