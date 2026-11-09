// Name: core_texlist.cpp_staticInit_FUN_00544910
// Address: 00544910
// Address Range: [[00544910, 0054492a]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_staticInit_FUN_00544910(void)

#include "nocturne.h"

void __cdecl core_texlist_cpp_staticInit_FUN_00544910(void)

{
  core_texlist_cpp_CTextureList_ctor_FUN_00544930(&g_CTextureListInstance);
  _atexit(&g_CTextureListDestructorNode);
  return;
}
