// Name: shape_edittool.cpp_CStrList_populateRecursive_FUN_00481ca0
// Address: 00481ca0
// Address Range: [[00481ca0, 00481df8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateRecursive_FUN_00481ca0(CStrList *this_ptr,char *base_path,char *relative_dir,char *file_pattern)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateRecursive_FUN_00481ca0(CStrList *this_ptr,char *base_path,char *relative_dir,char *file_pattern)

{
  int iVar1;
  char cVar2;
  char *in_stack_fffffae4;
  byte bStack_41c;
  char acStack_408 [12];
  char acStack_3fc [248];
  char acStack_304 [12];
  char acStack_2f8 [224];
  char acStack_218 [12];
  char acStack_20c [260];
  char acStack_108 [12];
  char acStack_fc [236];
  
  engine_dosio_cpp_resolveRelativePath_FUN_00461260(relative_dir,"*",acStack_218);
  engine_dosio_cpp_resolveRelativePath_FUN_00461260(base_path,acStack_20c,acStack_108);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10((CFileFinder *)&stack0xfffffae4);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00460e50((CFileFinder *)&stack0xfffffae4,acStack_fc);
  cVar2 = (char)in_stack_fffffae4;
  while (cVar2 != '\0') {
    iVar1 = _strcmp(&stack0xfffffae4,".");
    if ((iVar1 != 0) &&
       (iVar1 = _strcmp(&stack0xfffffae4,".."), iVar1 != 0)) {
      if ((bStack_41c & 4) == 0) {
        iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_00485840(file_pattern,&stack0xfffffae4,0)
        ;
        if (iVar1 != 0) {
          engine_dosio_cpp_resolveRelativePath_FUN_00461260
                    (relative_dir,&stack0xfffffae4,acStack_304);
          in_stack_fffffae4 = (char *)0x481df1;
          shape_edittool_cpp_CStrList_add_FUN_00480e70(this_ptr,acStack_2f8);
        }
      }
      else {
        engine_dosio_cpp_resolveRelativePath_FUN_00461260(relative_dir,&stack0xfffffae4,acStack_408)
        ;
        in_stack_fffffae4 = base_path;
        shape_edittool_cpp_CStrList_populateRecursive_FUN_00481ca0
                  (this_ptr,base_path,acStack_3fc,file_pattern);
      }
    }
    engine_dosio_cpp_CFileFinder_findNext_FUN_00460ed0((CFileFinder *)&stack0xfffffae4);
    cVar2 = (char)in_stack_fffffae4;
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50((CFileFinder *)&stack0xfffffae4);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30((CFileFinder *)&stack0xfffffae4,0);
  return;
}
