// Name: core_texlist.cpp_staticInit_FUN_00573470
// Address: 00573470
// Address Range: [[00573470, 0057348a]]
// Convention: unknown
// Signature: void core_texlist_cpp_staticInit_FUN_00573470(void)

#include "nocturne.h"

void core_texlist_cpp_staticInit_FUN_00573470(void)

{
  core_texlist_cpp_CTextureList_ctor_FUN_00573490(&g_CTextureListInstance);
  _atexit(&g_CTextureListDestructorNode);
  return;
}
