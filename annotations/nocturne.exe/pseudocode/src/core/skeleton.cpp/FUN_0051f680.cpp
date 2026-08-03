// Name: core_skeleton.cpp_FUN_0051f680
// Address: 0051f680
// Address Range: [[0051f680, 0051f72b]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_FUN_0051f680(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * __cdecl core_skeleton_cpp_FUN_0051f680(char *filename)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr;
  char *str1;
  
  iVar2 = 0;
  if (0 < _DAT_02737ef4) {
    str1 = g_CSkeleton_ARRAY_02737ef8[0].loaded_filename;
    do {
      iVar1 = _stricmp(str1,filename);
      if (iVar1 == 0) {
        return g_CSkeleton_ARRAY_02737ef8 + iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x2937c;
    } while (iVar2 < _DAT_02737ef4);
  }
  if (0x27 < _DAT_02737ef4) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0x1093;
    core_main_c_FUN_004c8440("Can't load %s because skeleton manager is full.  (Size is %d)",filename,0x28);
  }
  this_ptr = g_CSkeleton_ARRAY_02737ef8 + _DAT_02737ef4;
  _DAT_02737ef4 = _DAT_02737ef4 + 1;
  core_skeleton_cpp_CSkeleton_load_FUN_00517560(this_ptr,filename);
  return this_ptr;
}
