// Name: cockpit_ckptutil.c_blitFullScreen_FUN_00432b30
// Address: 00432b30
// Address Range: [[00432b30, 00432b58]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitFullScreen_FUN_00432b30(void * sprite_data, void * span_data)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_blitFullScreen_FUN_00432b30(void *sprite_data,void *span_data)

{
  cockpit_ckptutil_c_blitDualModeSprite_FUN_004326a0
            (sprite_data,span_data,0,0,g_WindowWidth,g_WindowHeight);
  return;
}


// Assembly code:
// 00432b30: PUSH EBX
//   Label: cockpit_ckptutil.c_blitFullScreen_FUN_00432b30
// 00432b31: PUSH ESI
// 00432b32: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00432b38: PUSH EDX
// 00432b39: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00432b3f: PUSH ECX
// 00432b40: PUSH 0x0
// 00432b42: PUSH 0x0
// 00432b44: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00432b48: PUSH EBX
// 00432b49: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00432b4d: PUSH ESI
// 00432b4e: CALL cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
//   XREF to: 004326a0 (UNCONDITIONAL_CALL)
// 00432b53: ADD ESP,0x18
// 00432b56: POP ESI
// 00432b57: POP EBX
// 00432b58: RET
