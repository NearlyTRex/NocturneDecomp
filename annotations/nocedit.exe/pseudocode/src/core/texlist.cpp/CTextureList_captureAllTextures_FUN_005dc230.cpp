// Name: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230
// Address: 005dc230
// Address Range: [[005dc230, 005dc261]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230(CTextureList * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_captureAllTextures_FUN_005dc230(CTextureList *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = this_ptr->texture_entries;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
      texture = texture + 1;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}


// Assembly code:
// 005dc230: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230
// 005dc231: PUSH EDI
// 005dc232: PUSH EBP
// 005dc233: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005dc237: MOV EDX,dword ptr [EDI]
// 005dc239: XOR EBX,EBX
// 005dc23b: TEST EDX,EDX
// 005dc23d: JLE 0x005dc25e
//   XREF to: 005dc25e (CONDITIONAL_JUMP)
// 005dc23f: PUSH ESI
// 005dc240: LEA ESI,[EDI + 0x4]
// 005dc243: PUSH ESI
//   Label: LAB_005dc243
// 005dc244: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005dc24a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005dc24b: INC EBX
// 005dc24c: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005dc251: ADD ESI,0x18
// 005dc254: MOV EBP,dword ptr [EDI]
// 005dc256: ADD ESP,0x8
// 005dc259: CMP EBX,EBP
// 005dc25b: JL 0x005dc243
//   XREF to: 005dc243 (CONDITIONAL_JUMP)
// 005dc25d: POP ESI
// 005dc25e: POP EBP
//   Label: LAB_005dc25e
// 005dc25f: POP EDI
// 005dc260: POP EBX
// 005dc261: RET
