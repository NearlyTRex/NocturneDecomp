// Name: core_podmain.cpp_CDemonPod_load_FUN_005519c0
// Address: 005519c0
// Address Range: [[005519c0, 00551af2]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_CDemonPod_load_FUN_005519c0(CDemonPod *this_ptr)

#include "nocturne.h"

void __cdecl core_podmain_cpp_CDemonPod_load_FUN_005519c0(CDemonPod *this_ptr)

{
  _FILE *file;
  int iVar1;
  CFileFinder local_170;
  char local_5c [80];
  int local_c;
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"rt","..\\core\\podmain.cpp",0x2f);
  if (file == (_FILE *)0x0) {
    engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_170);
    engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_170,"*.pod");
    while (local_170.filename[0] != '\0') {
      (*this_ptr->vtable->mount)((CPod *)this_ptr,local_170.filename);
      engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_170);
    }
    engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(&local_170);
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_170,0);
    engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0((CPod *)this_ptr);
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
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\podmain.cpp",0x43);
  engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0((CPod *)this_ptr);
  return;
}
