// Name: engine_texture.cpp_enableTextureFiltering_FUN_005dd960
// Address: 005dd960
// Address Range: [[005dd960, 005dd969]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_enableTextureFiltering_FUN_005dd960(int enabled)
// Globals:
//   int g_TextureFilteringEnabled = 0x1

#include "nocturne.h"

void __cdecl engine_texture_cpp_enableTextureFiltering_FUN_005dd960(int enabled)

{
  g_TextureFilteringEnabled = enabled;
  return;
}


// Assembly code:
// 005dd960: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_texture.cpp_enableTextureFiltering_FUN_005dd960
//   XREF to: Stack[0x4] (READ)
// 005dd964: MOV [0x006793a0],EAX
//   XREF to: 006793a0 (WRITE)
// 005dd969: RET
