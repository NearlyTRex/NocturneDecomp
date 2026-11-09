// Name: core_texlist.cpp_staticInit_FUN_00596090
// Address: 00596090
// Address Range: [[00596090, 005960aa]]
// Convention: unknown
// Signature: void core_texlist_cpp_staticInit_FUN_00596090(void)

#include "nocturne.h"

void core_texlist_cpp_staticInit_FUN_00596090(void)

{
  core_texlist_cpp_CTextureList_ctor_FUN_005960b0(&g_CTextureListInstance);
  _atexit(&g_CTextureListDestructorNode);
  return;
}
