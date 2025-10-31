// Name: engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20
// Address: 005dcb20
// Address Range: [[005dcb20, 005dcb2d]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20(CTextureCache * cache)
// Cross-references:
//   engine_texture.cpp_freeTextureCache_FUN_005dd7a0 (005dd7a0) at 005dd7af [UNCONDITIONAL_CALL]
// Function calls:
//   engine_texture.cpp_CTextureCache_free_FUN_005dcb30

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_dtor_FUN_005dcb20(CTextureCache *cache)

{
  engine_texture_cpp_CTextureCache_free_FUN_005dcb30(cache);
  return;
}


// Assembly code:
// 005dcb20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20
//   XREF to: Stack[0x4] (READ)
// 005dcb24: PUSH EDX
// 005dcb25: CALL engine_texture.cpp_CTextureCache_free_FUN_005dcb30
//   XREF to: 005dcb30 (UNCONDITIONAL_CALL)
// 005dcb2a: ADD ESP,0x4
// 005dcb2d: RET
