// Name: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
// Address: 00478190
// Address Range: [[00478190, 004781cc]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438dc9 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043dcc0 (0043dcc0) at 0043dcd6 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_loadModel_FUN_00478c00 (00478c00) at 00478c93 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < this_ptr->texture_count) {
    texture = &this_ptr->texture_list[0].base;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
      texture = texture + 3;
    } while (iVar1 < this_ptr->texture_count);
  }
  return;
}


// Assembly code:
// 00478190: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
// 00478191: PUSH EDI
// 00478192: PUSH EBP
// 00478193: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00478197: MOV EDX,dword ptr [EDI + 0x120]
// 0047819d: XOR EBX,EBX
// 0047819f: TEST EDX,EDX
// 004781a1: JLE 0x004781c9
//   XREF to: 004781c9 (CONDITIONAL_JUMP)
// 004781a3: PUSH ESI
// 004781a4: LEA ESI,[EDI + 0x124]
// 004781aa: PUSH ESI
//   Label: LAB_004781aa
// 004781ab: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004781b1: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004781b2: INC EBX
// 004781b3: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004781b8: ADD ESI,0x48
// 004781bb: MOV EBP,dword ptr [EDI + 0x120]
// 004781c1: ADD ESP,0x8
// 004781c4: CMP EBX,EBP
// 004781c6: JL 0x004781aa
//   XREF to: 004781aa (CONDITIONAL_JUMP)
// 004781c8: POP ESI
// 004781c9: POP EBP
//   Label: LAB_004781c9
// 004781ca: POP EDI
// 004781cb: POP EBX
// 004781cc: RET
