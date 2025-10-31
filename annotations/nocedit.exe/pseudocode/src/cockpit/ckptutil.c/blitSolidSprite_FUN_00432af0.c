// Name: cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0
// Address: 00432af0
// Address Range: [[00432af0, 00432b25]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0(void * sprite_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height, int src_y_param)
// Function calls:
//   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSolidSprite_FUN_00432af0
          (void *sprite_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height,
          int src_y_param)

{
  cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00431f40
            (sprite_data,(void *)screen_x,0,height,screen_y,src_x,src_y,width);
  return;
}


// Assembly code:
// 00432af0: PUSH EBX
//   Label: cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0
// 00432af1: PUSH ESI
// 00432af2: PUSH EDI
// 00432af3: PUSH EBP
// 00432af4: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00432af8: PUSH EDX
// 00432af9: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00432afd: PUSH ECX
// 00432afe: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00432b02: PUSH EBX
// 00432b03: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00432b07: PUSH ESI
// 00432b08: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x1c] (READ)
// 00432b0c: PUSH EDI
// 00432b0d: PUSH 0x0
// 00432b0f: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00432b13: PUSH EBP
// 00432b14: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00432b18: PUSH EAX
// 00432b19: CALL cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40
//   XREF to: 00431f40 (UNCONDITIONAL_CALL)
// 00432b1e: ADD ESP,0x20
// 00432b21: POP EBP
// 00432b22: POP EDI
// 00432b23: POP ESI
// 00432b24: POP EBX
// 00432b25: RET
