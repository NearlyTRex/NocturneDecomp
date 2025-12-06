// Name: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
// Address: 004a39e0
// Address Range: [[004a39e0, 004a3b81]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0(CStrList * this_ptr, char * base_path, char * search_path)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
          (CStrList *this_ptr,char *base_path,char *search_path)

{
  CStrList *this_ptr_00;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000014;
  char cVar1;
  uint in_stack_fffff7f0;
  CFileFinder CStack_80c;
  char acStack_608 [4];
  char acStack_604 [260];
  char acStack_500 [8];
  char acStack_4f8 [240];
  char local_408 [4];
  char acStack_404 [4];
  char acStack_400 [4];
  char acStack_3fc [12];
  char acStack_3f0 [236];
  char acStack_304 [4];
  char acStack_300 [4];
  char acStack_2fc [244];
  char local_208 [4];
  char acStack_204 [4];
  char acStack_200 [4];
  char acStack_1fc [12];
  char acStack_1f0 [232];
  char local_108 [4];
  char acStack_104 [252];
  char local_8 [4];
  
  this_ptr_00 = this_ptr;
  engine_dosio_c_splitPath_FUN_00481f20(base_path,local_8,local_108,local_208,local_408);
  engine_dosio_c_makePath_FUN_00481f50(acStack_304,(char *)0x0,acStack_104,acStack_204,acStack_404);
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000014,(char *)0x0,(char *)0x0,acStack_200,acStack_400);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_500,(char *)&this_ptr,acStack_2fc,acStack_1fc,acStack_3fc);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffff7e8);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70((CFileFinder *)&stack0xfffff7ec,acStack_4f8);
  cVar1 = (char)in_stack_fffff7f0;
  while (cVar1 != '\0') {
    engine_dosio_c_splitPath_FUN_00481f20
              (&stack0xfffff7f0,(char *)0x0,(char *)0x0,acStack_1f0,acStack_3f0);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_608,&stack0x00000000,acStack_300,acStack_200,acStack_400);
    engine_dosio_c_getFullPath_FUN_004820c0((char *)&CStack_80c.timestamp,acStack_604);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr_00,(char *)&CStack_80c.attributes);
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)&stack0xfffff7ec);
    cVar1 = (char)in_stack_fffff7f0;
  }
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)&stack0xfffff7f0);
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_80c,0);
  return;
}
