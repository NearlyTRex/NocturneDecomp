// Name: core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
// Address: 005dbdd0
// Address Range: [[005dbdd0, 005dbde4]]
// Convention: __cdecl
// Signature: CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0(CTextureList * this_ptr)
// Cross-references:
//   core_ground.cpp_CGround_init_FUN_004eef00 (004eef00) at 004eef4d [UNCONDITIONAL_CALL]
//   core_texlist.cpp_staticInit_FUN_005dbdb0 (005dbdb0) at 005dbdb5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CTextureList * __cdecl core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0(CTextureList *this_ptr)

{
  this_ptr->master_texture_count = 0;
  this_ptr->texture_count = 0;
  return this_ptr;
}


// Assembly code:
// 005dbdd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
//   XREF to: Stack[0x4] (READ)
// 005dbdd4: MOV dword ptr [EAX + 0x6d64],0x0
// 005dbdde: MOV dword ptr [EAX],0x0
// 005dbde4: RET
