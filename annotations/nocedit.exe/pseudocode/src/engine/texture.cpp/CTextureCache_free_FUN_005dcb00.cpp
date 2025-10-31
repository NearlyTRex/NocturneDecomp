// Name: engine_texture.cpp_CTextureCache_free_FUN_005dcb00
// Address: 005dcb00
// Address Range: [[005dcb00, 005dcb12]]
// Convention: __cdecl
// Signature: int engine_texture.cpp_CTextureCache_free_FUN_005dcb00(CTextureCache * this_ptr)
// Function calls:
//   engine_texture.cpp_CTextureCache_free_FUN_005dcb30

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_free_FUN_005dcb00(CTextureCache *this_ptr)

{
  engine_texture_cpp_CTextureCache_free_FUN_005dcb30(this_ptr);
  return 1;
}


// Assembly code:
// 005dcb00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_texture.cpp_CTextureCache_free_FUN_005dcb00
//   XREF to: Stack[0x4] (READ)
// 005dcb04: PUSH EDX
// 005dcb05: CALL engine_texture.cpp_CTextureCache_free_FUN_005dcb30
//   XREF to: 005dcb30 (UNCONDITIONAL_CALL)
// 005dcb0a: MOV EAX,0x1
// 005dcb0f: ADD ESP,0x4
// 005dcb12: RET
