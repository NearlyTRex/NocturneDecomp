// Name: core_podmain.cpp_CDemonPod_load_FUN_004f92b0
// Address: 004f92b0
// Address Range: [[004f92b0, 004f93b2]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_CDemonPod_load_FUN_004f92b0(CDemonPod *this_ptr)

#include "nocturne.h"

void __cdecl core_podmain_cpp_CDemonPod_load_FUN_004f92b0(CDemonPod *this_ptr)

{
  _FILE *file;
  int iVar1;
  CFileFinder local_170;
  char local_5c [80];
  int local_c;
  
  file = _fopen("pod.ini","rt");
  if (file == (_FILE *)0x0) {
    engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(&local_170);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&local_170,"*.pod");
    while (local_170.filename[0] != '\0') {
      (*this_ptr->vtable->mount)((CPod *)this_ptr,local_170.filename);
      engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(&local_170);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(&local_170);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_170,0);
    return;
  }
  _fscanf(file,"%d\n",&local_c);
  iVar1 = 0;
  if (0 < local_c) {
    do {
      _fscanf(file,"%s\n",local_5c);
      (*this_ptr->vtable->mount)((CPod *)this_ptr,local_5c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_c);
  }
  _fclose(file);
  return;
}
