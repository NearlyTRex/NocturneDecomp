// Name: core_podmain.cpp_CDemonPod_load_FUN_005519c0
// Address: 005519c0
// Address Range: [[005519c0, 00551af2]]
// Convention: __cdecl
// Signature: void core_podmain.cpp_CDemonPod_load_FUN_005519c0(CDemonPod * this_ptr)

#include "nocturne.h"

void __cdecl core_podmain_cpp_CDemonPod_load_FUN_005519c0(CDemonPod *this_ptr)

{
  FILE *file;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar1;
  char cVar2;
  uint in_stack_fffffe9c;
  char acStack_68 [96];
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"rt","..\\core\\podmain.cpp",0x2f);
  if (file == (FILE *)0x0) {
    engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffffe94);
    engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
              ((CFileFinder *)&stack0xfffffe98,"*.pod");
    cVar2 = (char)in_stack_fffffe9c;
    while (cVar2 != '\0') {
      (*this_ptr->vtable->mount)((CPod *)this_ptr,&stack0xfffffe9c);
      engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)&stack0xfffffe98);
      cVar2 = (char)in_stack_fffffe9c;
    }
    engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)&stack0xfffffe9c);
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)&stack0xfffffea0,0);
    engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0((CPod *)this_ptr);
    return;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0xfffffff8);
  iVar1 = 0;
  if (0 < unaff_EBX) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%s\n");
      (*this_ptr->vtable->mount)((CPod *)this_ptr,acStack_68);
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_EBX);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\podmain.cpp",0x43);
  engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0((CPod *)this_ptr);
  return;
}
