// Name: core_texlist.cpp_staticInit_FUN_005dbdb0
// Address: 005dbdb0
// Address Range: [[005dbdb0, 005dbdca]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_staticInit_FUN_005dbdb0(void)

#include "nocturne.h"

void __cdecl core_texlist_cpp_staticInit_FUN_005dbdb0(void)

{
  core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0(&g_CTextureListInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CTextureListDestructorNode);
  return;
}
