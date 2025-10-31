// Name: engine_2d.c_plotPixelWithDepth_FUN_00401290
// Address: 00401290
// Address Range: [[00401290, 00401315]]
// Convention: __cdecl
// Signature: void engine_2d.c_plotPixelWithDepth_FUN_00401290(int x_coord, int y_coord, uint depth_value)
// Cross-references:
//   core_course.cpp_FUN_004436d0 (004436d0) at 0044374c [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443760 (00443760) at 00443ba7 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawLine3D_FUN_00401320 (00401320) at 004013aa [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   uint*[1024] g_ZBufferScanlineArray
//   ushort[256] g_ColorTable16
//   uint[256] g_ColorTable32
//   int g_ActiveRenderColor

#include "nocturne.h"

void __cdecl engine_2d_c_plotPixelWithDepth_FUN_00401290(int x_coord,int y_coord,uint depth_value)

{
  int iVar1;
  
  iVar1 = g_BitsPerPixel;
  if (g_ZBufferScanlineArray[y_coord][x_coord] < depth_value) {
    g_ZBufferScanlineArray[y_coord][x_coord] = depth_value;
    if (iVar1 == 8) {
      *(undefined1 *)((int)g_ScreenBufferArray[y_coord] + x_coord) = (undefined1)g_ActiveRenderColor
      ;
      return;
    }
    if (iVar1 != 0x10) {
      *(uint *)(x_coord * 4 + (int)g_ScreenBufferArray[y_coord]) =
           g_ColorTable32[g_ActiveRenderColor & 0xffU];
      return;
    }
    *(ushort *)(x_coord * 2 + (int)g_ScreenBufferArray[y_coord]) =
         g_ColorTable16[g_ActiveRenderColor & 0xffU];
  }
  return;
}


// Assembly code:
// 00401290: PUSH EBX
//   Label: engine_2d.c_plotPixelWithDepth_FUN_00401290
// 00401291: PUSH EDI
// 00401292: PUSH EBP
// 00401293: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00401297: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040129b: SHL EAX,0x2
// 0040129e: LEA EDX,[EBX*0x4 + 0x0]
// 004012a5: MOV ECX,dword ptr [EAX + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 004012ab: ADD ECX,EDX
// 004012ad: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004012b1: CMP EDI,dword ptr [ECX]
// 004012b3: JBE 0x004012e9
//   XREF to: 004012e9 (CONDITIONAL_JUMP)
// 004012b5: MOV EBP,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004012bb: MOV dword ptr [ECX],EDI
// 004012bd: CMP EBP,0x8
// 004012c0: JZ 0x004012ed
//   XREF to: 004012ed (CONDITIONAL_JUMP)
// 004012c2: MOV ECX,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 004012c8: AND ECX,0xff
// 004012ce: CMP EBP,0x10
// 004012d1: JNZ 0x00401301
//   XREF to: 00401301 (CONDITIONAL_JUMP)
// 004012d3: LEA EDX,[EBX + EBX*0x1]
// 004012d6: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004012dc: ADD EDX,EAX
// 004012de: MOV AX,word ptr [ECX*0x2 + 0x2d01020]
//   XREF to: 02d01020 (DATA)
// 004012e6: MOV word ptr [EDX],AX
// 004012e9: POP EBP
//   Label: LAB_004012e9
// 004012ea: POP EDI
// 004012eb: POP EBX
// 004012ec: RET
// 004012ed: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   Label: LAB_004012ed
//   XREF to: 02cf6a9c (DATA)
// 004012f3: LEA EDX,[EAX + EBX*0x1]
// 004012f6: MOV AL,[0x02d02570]
//   XREF to: 02d02570 (READ)
// 004012fb: MOV byte ptr [EDX],AL
// 004012fd: POP EBP
// 004012fe: POP EDI
// 004012ff: POP EBX
// 00401300: RET
// 00401301: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   Label: LAB_00401301
//   XREF to: 02cf6a9c (DATA)
// 00401307: ADD EDX,EAX
// 00401309: MOV EAX,dword ptr [ECX*0x4 + 0x2d01220]
//   XREF to: 02d01220 (DATA)
// 00401310: MOV dword ptr [EDX],EAX
// 00401312: POP EBP
// 00401313: POP EDI
// 00401314: POP EBX
// 00401315: RET
