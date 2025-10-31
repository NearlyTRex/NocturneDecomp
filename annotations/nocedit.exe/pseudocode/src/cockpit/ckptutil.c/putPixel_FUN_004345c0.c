// Name: cockpit_ckptutil.c_putPixel_FUN_004345c0
// Address: 004345c0
// Address Range: [[004345c0, 00434641]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
// Cross-references:
//   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0 (004339c0) at 00433a83 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_drawLineAA_FUN_00433c90 (00433c90) at 00433da3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   uint[256] g_Hardware32BitPalette
//   ushort[256] g_Hardware16BitPalette
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_putPixel_FUN_004345c0(int x,int y,int color)

{
  if ((((g_ClipLeft <= x) && (x <= g_ClipRight)) && (g_ClipTop <= y)) && (y <= g_ClipBottom)) {
    if (0xf < (uint)g_BitsPerPixel) {
      if ((uint)g_BitsPerPixel < 0x11) {
        *(ushort *)(x * 2 + (int)g_ScreenBufferArray[y]) = g_Hardware16BitPalette[color];
        return;
      }
      if (g_BitsPerPixel != 0x20) {
        return;
      }
      *(uint *)(x * 4 + (int)g_ScreenBufferArray[y]) = g_Hardware32BitPalette[color];
      return;
    }
    if (g_BitsPerPixel == 8) {
      *(char *)(x + (int)g_ScreenBufferArray[y]) = (char)color;
      return;
    }
  }
  return;
}


// Assembly code:
// 004345c0: PUSH EBX
//   Label: cockpit_ckptutil.c_putPixel_FUN_004345c0
// 004345c1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004345c5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004345c9: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004345cd: CMP ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004345d3: JL 0x004345ff
//   XREF to: 004345ff (CONDITIONAL_JUMP)
// 004345d5: CMP ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004345db: JG 0x004345ff
//   XREF to: 004345ff (CONDITIONAL_JUMP)
// 004345dd: CMP EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004345e3: JL 0x004345ff
//   XREF to: 004345ff (CONDITIONAL_JUMP)
// 004345e5: CMP EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 004345eb: JG 0x004345ff
//   XREF to: 004345ff (CONDITIONAL_JUMP)
// 004345ed: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 004345f2: SHL EDX,0x2
// 004345f5: CMP EAX,0x10
// 004345f8: JNC 0x00434639
//   XREF to: 00434639 (CONDITIONAL_JUMP)
// 004345fa: CMP EAX,0x8
// 004345fd: JZ 0x00434601
//   XREF to: 00434601 (CONDITIONAL_JUMP)
// 004345ff: POP EBX
//   Label: LAB_004345ff
// 00434600: RET
// 00434601: MOV EAX,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_00434601
//   XREF to: 02cf6a9c (DATA)
// 00434607: MOV byte ptr [ECX + EAX*0x1],BL
// 0043460a: POP EBX
// 0043460b: RET
// 0043460c: MOV EAX,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_0043460c
//   XREF to: 02cf6a9c (DATA)
// 00434612: ADD ECX,ECX
// 00434614: ADD ECX,EAX
// 00434616: MOV AX,word ptr [EBX*0x2 + 0x2d01d24]
//   XREF to: 02d01d24 (DATA)
// 0043461e: MOV word ptr [ECX],AX
// 00434621: POP EBX
// 00434622: RET
// 00434623: SHL ECX,0x2
//   Label: LAB_00434623
// 00434626: MOV EAX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0043462c: ADD ECX,EAX
// 0043462e: MOV EAX,dword ptr [EBX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 00434635: MOV dword ptr [ECX],EAX
// 00434637: POP EBX
// 00434638: RET
// 00434639: JBE 0x0043460c
//   Label: LAB_00434639
//   XREF to: 0043460c (CONDITIONAL_JUMP)
// 0043463b: CMP EAX,0x20
// 0043463e: JZ 0x00434623
//   XREF to: 00434623 (CONDITIONAL_JUMP)
// 00434640: POP EBX
// 00434641: RET
