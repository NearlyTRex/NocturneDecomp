// Name: core_fire.cpp_FUN_004c4d50
// Address: 004c4d50
// Address Range: [[004c4d50, 004c4d9a]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c4d50()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7ab0 (004c7ab0) at 004c7b01 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_fr46_03d_raw_00629f33
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d13cd4
//   undefined4 DAT_02d13cdc
//   undefined4 DAT_02d13cf4
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void core_fire_cpp_FUN_004c4d50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *buffer;
  
  iVar3 = 0xbe;
  iVar2 = 0;
  buffer = &DAT_02d13cdc;
  do {
    iVar1 = iVar2 * 0x18;
    crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"fr46%03d.raw",iVar3);
    iVar3 = iVar3 + 1;
    buffer = buffer + 0x18;
    iVar2 = iVar2 + 1;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)(&DAT_02d13cd4 + iVar1));
  } while (iVar2 < 0x14);
  return;
}


// Assembly code:
// 004c4d50: PUSH EBX
//   Label: core_fire.cpp_FUN_004c4d50
// 004c4d51: PUSH ESI
// 004c4d52: PUSH EDI
// 004c4d53: PUSH EBP
// 004c4d54: MOV EDI,0x2d13cd4
//   XREF to: 02d13cd4 (DATA)
// 004c4d59: MOV ESI,0xbe
// 004c4d5e: XOR EBX,EBX
// 004c4d60: ADD EDI,0x8
// 004c4d63: IMUL EAX,EBX,0x18
//   Label: LAB_004c4d63
// 004c4d66: PUSH ESI
// 004c4d67: PUSH 0x629f33
//   XREF to: 00629f33 (DATA)
// 004c4d6c: MOV EBP,0x2d13cd4
//   XREF to: 02d13cd4 (DATA)
// 004c4d71: PUSH EDI
//   XREF to: 02d13cdc (DATA)
//   XREF to: 02d13cf4 (DATA)
// 004c4d72: ADD EBP,EAX
// 004c4d74: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004c4d79: ADD ESP,0xc
// 004c4d7c: PUSH EBP
//   XREF to: 02d13cd4 (DATA)
// 004c4d7d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c4d83: INC ESI
// 004c4d84: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c4d85: ADD EDI,0x18
// 004c4d88: INC EBX
// 004c4d89: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c4d8e: ADD ESP,0x8
// 004c4d91: CMP EBX,0x14
// 004c4d94: JL 0x004c4d63
//   XREF to: 004c4d63 (CONDITIONAL_JUMP)
// 004c4d96: POP EBP
// 004c4d97: POP EDI
// 004c4d98: POP ESI
// 004c4d99: POP EBX
// 004c4d9a: RET
