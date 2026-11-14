// Name: core_podmain.cpp_CDemonPod_load_FUN_0051c000
// Address: 0051c000
// Address Range: [[0051c000, 0051c102]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_CDemonPod_load_FUN_0051c000(CDemonPod *this_ptr)

#include "nocturne.h"

void __cdecl core_podmain_cpp_CDemonPod_load_FUN_0051c000(CDemonPod *this_ptr)

{
  _FILE *file;
  int iVar1;
  CFileFinder CStack_170;
  char acStack_5c [80];
  int iStack_c;
  
  file = _fopen("pod.ini",&DAT_005e2992);
  if (file == (_FILE *)0x0) {
    engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10(&CStack_170);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00460e50(&CStack_170,"*.pod");
    while (CStack_170.filename[0] != '\0') {
      (*((this_ptr->base).vtable)->mount)(&this_ptr->base,CStack_170.filename);
      engine_dosio_cpp_CFileFinder_findNext_FUN_00460ed0(&CStack_170);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50(&CStack_170);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(&CStack_170,0);
    return;
  }
  _fscanf(file,&DAT_005e29a3);
  iVar1 = 0;
  if (0 < iStack_c) {
    do {
      _fscanf(file,&DAT_005e29a7);
      (*((this_ptr->base).vtable)->mount)(&this_ptr->base,acStack_5c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iStack_c);
  }
  _fclose(file);
  return;
}
