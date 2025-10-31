// Name: core_gore.cpp_CGore_FUN_004ede60
// Address: 004ede60
// Address Range: [[004ede60, 004edf2a]]
// Convention: __cdecl
// Signature: void core_gore.cpp_CGore_FUN_004ede60(CGore * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_FUN_004e07a0 (004e07a0) at 004e07c6 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067b9b0
//   SMRGLTextureBasic DAT_0067b9c8
//   SMRGLTextureBasic DAT_0067b9e0
//   SMRGLTextureBasic DAT_0067ba28
//   SMRGLTextureBasic DAT_0067ba40
//   SMRGLTextureBasic DAT_0067bba8
//   SMRGLTextureBasic DAT_0067c028
//   SMRGLTextureBasic DAT_0067c040
//   SMRGLTextureBasic DAT_0067c2e0
//   SMRGLTextureBasic DAT_0067cb28
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ede60(CGore *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  
  pSVar1 = &DAT_0067b9c8;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067b9b0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,pSVar1);
    pSVar1 = pSVar1 + 1;
  } while (pSVar1 != &DAT_0067ba28);
  iVar3 = 0;
  pSVar1 = &DAT_0067bba8;
  do {
    pSVar2 = &DAT_0067ba28 + iVar3 * 0x10;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x10;
  } while (iVar3 < 4);
  iVar3 = 0;
  pSVar1 = &DAT_0067c2e0;
  do {
    pSVar2 = &DAT_0067c028 + iVar3 * 0x1d;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,pSVar2);
      pSVar2 = pSVar2 + 1;
    } while (pSVar2 != pSVar1);
    iVar3 = iVar3 + 1;
    pSVar1 = pSVar1 + 0x1d;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067cb28);
  return;
}


// Assembly code:
// 004ede60: PUSH EBX
//   Label: core_gore.cpp_CGore_FUN_004ede60
// 004ede61: PUSH ESI
// 004ede62: PUSH EDI
// 004ede63: PUSH EBP
// 004ede64: PUSH 0x67b9b0
//   XREF to: 0067b9b0 (DATA)
// 004ede69: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ede6f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ede70: MOV EBX,0x67b9c8
//   XREF to: 0067b9c8 (PARAM)
// 004ede75: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ede7a: LEA ESI,[EBX + 0x60]
//   XREF to: 0067ba28 (DATA)
// 004ede7d: ADD ESP,0x8
// 004ede80: PUSH EBX
//   Label: LAB_004ede80
//   XREF to: 0067b9c8 (DATA)
//   XREF to: 0067b9e0 (DATA)
// 004ede81: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ede87: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ede88: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ede8d: ADD EBX,0x18
//   XREF to: 0067b9e0 (PARAM)
// 004ede90: ADD ESP,0x8
// 004ede93: CMP EBX,ESI
// 004ede95: JNZ 0x004ede80
//   XREF to: 004ede80 (CONDITIONAL_JUMP)
// 004ede97: MOV EBP,0x67ba28
//   XREF to: 0067ba28 (DATA)
// 004ede9c: XOR EDI,EDI
// 004ede9e: ADD EBP,0x180
// 004edea4: IMUL EBX,EDI,0x180
//   Label: LAB_004edea4
// 004edeaa: MOV ESI,EBP
// 004edeac: ADD EBX,0x67ba28
//   XREF to: 0067bba8 (PARAM)
//   XREF to: 0067ba28 (PARAM)
// 004edeb2: PUSH EBX
//   Label: LAB_004edeb2
//   XREF to: 0067ba28 (DATA)
//   XREF to: 0067ba40 (DATA)
//   XREF to: 0067bba8 (DATA)
// 004edeb3: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004edeb8: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004edeb9: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004edebe: ADD EBX,0x18
//   XREF to: 0067ba40 (PARAM)
// 004edec1: ADD ESP,0x8
// 004edec4: CMP EBX,ESI
// 004edec6: JNZ 0x004edeb2
//   XREF to: 004edeb2 (CONDITIONAL_JUMP)
// 004edec8: INC EDI
// 004edec9: ADD EBP,0x180
// 004edecf: CMP EDI,0x4
// 004eded2: JL 0x004edea4
//   XREF to: 004edea4 (CONDITIONAL_JUMP)
// 004eded4: MOV EBP,0x67c028
//   XREF to: 0067c028 (DATA)
// 004eded9: XOR EDI,EDI
// 004ededb: ADD EBP,0x2b8
// 004edee1: IMUL EBX,EDI,0x2b8
//   Label: LAB_004edee1
// 004edee7: MOV ESI,EBP
// 004edee9: ADD EBX,0x67c028
//   XREF to: 0067c2e0 (PARAM)
//   XREF to: 0067c028 (PARAM)
// 004edeef: PUSH EBX
//   Label: LAB_004edeef
//   XREF to: 0067c028 (DATA)
//   XREF to: 0067c040 (DATA)
//   XREF to: 0067c2e0 (DATA)
// 004edef0: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004edef6: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004edef7: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004edefc: ADD EBX,0x18
//   XREF to: 0067c040 (PARAM)
// 004edeff: ADD ESP,0x8
// 004edf02: CMP EBX,ESI
// 004edf04: JNZ 0x004edeef
//   XREF to: 004edeef (CONDITIONAL_JUMP)
// 004edf06: INC EDI
// 004edf07: ADD EBP,0x2b8
// 004edf0d: CMP EDI,0x4
// 004edf10: JL 0x004edee1
//   XREF to: 004edee1 (CONDITIONAL_JUMP)
// 004edf12: PUSH 0x67cb28
//   XREF to: 0067cb28 (DATA)
// 004edf17: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004edf1d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004edf1e: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004edf23: ADD ESP,0x8
// 004edf26: POP EBP
// 004edf27: POP EDI
// 004edf28: POP ESI
// 004edf29: POP EBX
// 004edf2a: RET
