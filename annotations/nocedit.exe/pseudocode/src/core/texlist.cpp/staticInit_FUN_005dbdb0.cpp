// Name: core_texlist.cpp_staticInit_FUN_005dbdb0
// Address: 005dbdb0
// Address Range: [[005dbdb0, 005dbdca]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_staticInit_FUN_005dbdb0(void)
// Globals:
//   WatcomStaticDestructorNode g_CTextureListDestructorNode
//   CTextureList g_CTextureListInstance
// Function calls:
//   core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_texlist_cpp_staticInit_FUN_005dbdb0(void)

{
  core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0(&g_CTextureListInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CTextureListDestructorNode);
  return;
}


// Assembly code:
// 005dbdb0: PUSH 0x3f6cd54
//   Label: core_texlist.cpp_staticInit_FUN_005dbdb0
//   XREF to: 03f6cd54 (DATA)
// 005dbdb5: CALL core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
//   XREF to: 005dbdd0 (UNCONDITIONAL_CALL)
// 005dbdba: ADD ESP,0x4
// 005dbdbd: PUSH 0x6842e0
//   XREF to: 006842e0 (DATA)
// 005dbdc2: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005dbdc7: ADD ESP,0x4
// 005dbdca: RET
