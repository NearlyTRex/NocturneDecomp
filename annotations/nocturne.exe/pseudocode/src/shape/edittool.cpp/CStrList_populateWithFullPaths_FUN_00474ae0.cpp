// Name: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_00474ae0
// Address: 00474ae0
// Address Range: [[00474ae0, 00474c81]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_00474ae0(CStrList *this_ptr,char *base_path,char *search_path)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_00474ae0(CStrList *this_ptr,char *base_path,char *search_path)

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
  
  splitpath(base_path,acStack_8,acStack_108,acStack_308,acStack_408);
  makepath(acStack_208,(char *)0x0,acStack_108,acStack_308,acStack_408);
  splitpath(search_path,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
  makepath(acStack_50c,acStack_8,acStack_208,acStack_308,acStack_408);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(&CStack_828);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&CStack_828,acStack_50c);
  while (CStack_828.filename[0] != '\0') {
    splitpath
              (CStack_828.filename,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
    makepath(acStack_714,acStack_8,acStack_208,acStack_308,acStack_408);
    _fullpath(acStack_610,acStack_714,0x104);
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(this_ptr,acStack_610);
    engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(&CStack_828);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(&CStack_828);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&CStack_828,0);
  return;
}
