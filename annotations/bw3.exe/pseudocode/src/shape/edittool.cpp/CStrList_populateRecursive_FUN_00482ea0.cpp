// Name: shape_edittool.cpp_CStrList_populateRecursive_FUN_00482ea0
// Address: 00482ea0
// Address Range: [[00482ea0, 00482ff8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateRecursive_FUN_00482ea0(CStrList *this_ptr,char *base_path,char *relative_dir,char *file_pattern)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateRecursive_FUN_00482ea0(CStrList *this_ptr,char *base_path,char *relative_dir,char *file_pattern)

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
  
  engine_dosio_cpp_resolveRelativePath_FUN_00466040(relative_dir,"*",acStack_218);
  engine_dosio_cpp_resolveRelativePath_FUN_00466040(base_path,acStack_20c,acStack_108);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00465b60((CFileFinder *)&stack0xfffffae4);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00465ba0((CFileFinder *)&stack0xfffffae4,acStack_fc);
  cVar2 = (char)in_stack_fffffae4;
  while (cVar2 != '\0') {
    iVar1 = _strcmp(&stack0xfffffae4,".");
    if ((iVar1 != 0) &&
       (iVar1 = _strcmp(&stack0xfffffae4,".."), iVar1 != 0)) {
      if ((bStack_41c & 4) == 0) {
        iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_00486a40(file_pattern,&stack0xfffffae4,0)
        ;
        if (iVar1 != 0) {
          engine_dosio_cpp_resolveRelativePath_FUN_00466040
                    (relative_dir,&stack0xfffffae4,acStack_304);
          in_stack_fffffae4 = (char *)0x482ff1;
          shape_edittool_cpp_CStrList_add_FUN_00482070(this_ptr,acStack_2f8);
        }
      }
      else {
        engine_dosio_cpp_resolveRelativePath_FUN_00466040(relative_dir,&stack0xfffffae4,acStack_408)
        ;
        in_stack_fffffae4 = base_path;
        shape_edittool_cpp_CStrList_populateRecursive_FUN_00482ea0
                  (this_ptr,base_path,acStack_3fc,file_pattern);
      }
    }
    engine_dosio_cpp_CFileFinder_findNext_FUN_00465c20((CFileFinder *)&stack0xfffffae4);
    cVar2 = (char)in_stack_fffffae4;
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00465ca0((CFileFinder *)&stack0xfffffae4);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80((CFileFinder *)&stack0xfffffae4,0);
  return;
}
