// Name: engine_texture.cpp_CTextureCache_getTextureCount_FUN_005dd570
// Address: 005dd570
// Address Range: [[005dd570, 005dd57a]]
// Convention: __cdecl
// Signature: int engine_texture.cpp_CTextureCache_getTextureCount_FUN_005dd570(CTextureCache * this_ptr)

#include "nocturne.h"

int __cdecl engine_texture_cpp_CTextureCache_getTextureCount_FUN_005dd570(CTextureCache *this_ptr)

{
  return this_ptr->current_texture_count;
}


// Assembly code:
// 005dd570: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_texture.cpp_CTextureCache_getTextureCount_FUN_005dd570
//   XREF to: Stack[0x4] (READ)
// 005dd574: MOV EAX,dword ptr [EAX + 0x14008]
// 005dd57a: RET
