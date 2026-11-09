// Name: core_texlist.cpp_staticInit_FUN_00569080
// Address: 00569080
// Address Range: [[00569080, 0056909a]]
// Convention: unknown
// Signature: void core_texlist_cpp_staticInit_FUN_00569080(void)

#include "nocturne.h"

void core_texlist_cpp_staticInit_FUN_00569080(void)

{
  core_texlist_cpp_CTextureList_ctor_FUN_005690a0(&g_CTextureListInstance);
  _atexit(&g_CTextureListDestructorNode);
  return;
}
