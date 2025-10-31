// Name: core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270
// Address: 005dc270
// Address Range: [[005dc270, 005dc29f]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270(CTextureList * this_ptr, uint texture_index)
// Cross-references:
//   core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880 (004ef880) at 004ef8a6 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl
core_texlist_cpp_CTextureList_captureTexture_FUN_005dc270(CTextureList *this_ptr,uint texture_index)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,this_ptr->texture_entries + (texture_index & 0xfff));
  return;
}


// Assembly code:
// 005dc270: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270
//   XREF to: Stack[0x8] (READ)
// 005dc274: AND EDX,0xfff
// 005dc27a: LEA EAX,[EDX*0x4 + 0x0]
// 005dc281: SUB EAX,EDX
// 005dc283: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005dc287: SHL EAX,0x3
// 005dc28a: ADD EDX,0x4
// 005dc28d: ADD EAX,EDX
// 005dc28f: PUSH EAX
// 005dc290: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005dc296: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005dc297: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005dc29c: ADD ESP,0x8
// 005dc29f: RET
