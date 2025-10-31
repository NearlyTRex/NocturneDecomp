// Name: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
// Address: 00487630
// Address Range: [[00487630, 00487720]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630(int start_x, int end_x, int y)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 (00488110) at 004881a8 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0 (00488ad0) at 00488b36 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_OriginalColorValue
//   int g_PackedPixelColor
//   int g_DuplicatedPixelColor
//   void*[1024] g_ScreenBufferArray

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
          (int start_x,int end_x,int y)

{
  uint *puVar1;
  uint *puVar2;
  
  if (g_BitsPerPixel != 8) {
    if (g_BitsPerPixel == 0x10) {
      puVar1 = (uint *)((int)g_ScreenBufferArray[y] + start_x * 2);
      puVar2 = puVar1;
      if ((start_x & 1U) != 0) {
        puVar2 = (uint *)((int)puVar1 + 2);
        start_x = start_x + 1;
        *(ushort *)puVar1 =
             (ushort)*puVar1 >> ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
      }
      for (; start_x < end_x; start_x = start_x + 2) {
        *puVar2 = *puVar2 >> ((byte)g_OriginalColorValue & 0x1f) & g_DuplicatedPixelColor;
        puVar2 = puVar2 + 1;
      }
      if (start_x == end_x) {
        *(ushort *)puVar2 =
             (ushort)*puVar2 >> ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
        return;
      }
    }
    else if ((g_BitsPerPixel == 0x20) &&
            (puVar2 = (uint *)(start_x * 4 + (int)g_ScreenBufferArray[y]), start_x <= end_x)) {
      do {
        start_x = start_x + 1;
        *puVar2 = *puVar2 >> ((byte)g_OriginalColorValue & 0x1f) & g_PackedPixelColor;
        puVar2 = puVar2 + 1;
      } while (start_x <= end_x);
      return;
    }
  }
  return;
}


// Assembly code:
// 00487630: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
// 00487631: PUSH ESI
// 00487632: PUSH EDI
// 00487633: MOV EDI,dword ptr [0x02c6d570]
//   XREF to: 02c6d570 (READ)
// 00487639: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048763d: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00487641: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00487647: CMP ECX,0x8
// 0048764a: JZ 0x004876c0
//   XREF to: 004876c0 (CONDITIONAL_JUMP)
// 00487650: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00487654: SHL EBX,0x2
// 00487657: CMP ECX,0x10
// 0048765a: JNZ 0x004876e6
//   XREF to: 004876e6 (CONDITIONAL_JUMP)
// 00487660: LEA ECX,[EDX + EDX*0x1]
// 00487663: MOV EAX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00487669: MOV EBX,EDX
// 0048766b: ADD EAX,ECX
// 0048766d: TEST DL,0x1
// 00487670: JZ 0x0048768d
//   XREF to: 0048768d (CONDITIONAL_JUMP)
// 00487672: XOR EBX,EDX
// 00487674: MOV CL,byte ptr [0x02c6d560]
//   XREF to: 02c6d560 (READ)
// 0048767a: MOV BX,word ptr [EAX]
// 0048767d: SHR EBX,CL
// 0048767f: MOV ECX,EBX
// 00487681: ADD EAX,0x2
// 00487684: AND ECX,EDI
// 00487686: LEA EBX,[EDX + 0x1]
// 00487689: MOV word ptr [EAX + -0x2],CX
// 0048768d: CMP EBX,ESI
//   Label: LAB_0048768d
// 0048768f: JGE 0x004876b0
//   XREF to: 004876b0 (CONDITIONAL_JUMP)
// 00487691: MOV CL,byte ptr [0x02c6d560]
//   Label: LAB_00487691
//   XREF to: 02c6d560 (READ)
// 00487697: MOV EDX,dword ptr [EAX]
// 00487699: SHR EDX,CL
// 0048769b: MOV ECX,dword ptr [0x02c6d574]
//   XREF to: 02c6d574 (READ)
// 004876a1: ADD EAX,0x4
// 004876a4: AND EDX,ECX
// 004876a6: ADD EBX,0x2
// 004876a9: MOV dword ptr [EAX + -0x4],EDX
// 004876ac: CMP EBX,ESI
// 004876ae: JL 0x00487691
//   XREF to: 00487691 (CONDITIONAL_JUMP)
// 004876b0: JZ 0x004876ca
//   Label: LAB_004876b0
//   XREF to: 004876ca (CONDITIONAL_JUMP)
// 004876b2: LEA EAX,[EAX]
// 004876b8: LEA EDX,[EDX]
// 004876be: MOV EAX,EAX
// 004876c0: MOV dword ptr [0x02c6d570],EDI
//   Label: LAB_004876c0
//   XREF to: 02c6d570 (WRITE)
// 004876c6: POP EDI
// 004876c7: POP ESI
// 004876c8: POP EBX
// 004876c9: RET
// 004876ca: XOR EDX,EDX
//   Label: LAB_004876ca
// 004876cc: MOV CL,byte ptr [0x02c6d560]
//   XREF to: 02c6d560 (READ)
// 004876d2: MOV DX,word ptr [EAX]
// 004876d5: SHR EDX,CL
// 004876d7: AND EDX,EDI
// 004876d9: MOV word ptr [EAX],DX
// 004876dc: MOV dword ptr [0x02c6d570],EDI
//   XREF to: 02c6d570 (WRITE)
// 004876e2: POP EDI
// 004876e3: POP ESI
// 004876e4: POP EBX
// 004876e5: RET
// 004876e6: CMP ECX,0x20
//   Label: LAB_004876e6
// 004876e9: JNZ 0x004876c0
//   XREF to: 004876c0 (CONDITIONAL_JUMP)
// 004876eb: LEA EAX,[EDX*0x4 + 0x0]
// 004876f2: MOV ECX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004876f8: MOV EBX,EDX
// 004876fa: ADD EAX,ECX
// 004876fc: CMP EDX,ESI
// 004876fe: JG 0x004876c0
//   XREF to: 004876c0 (CONDITIONAL_JUMP)
// 00487700: MOV CL,byte ptr [0x02c6d560]
//   Label: LAB_00487700
//   XREF to: 02c6d560 (READ)
// 00487706: MOV EDX,dword ptr [EAX]
// 00487708: SHR EDX,CL
// 0048770a: ADD EAX,0x4
// 0048770d: AND EDX,EDI
// 0048770f: INC EBX
// 00487710: MOV dword ptr [EAX + -0x4],EDX
// 00487713: CMP EBX,ESI
// 00487715: JLE 0x00487700
//   XREF to: 00487700 (CONDITIONAL_JUMP)
// 00487717: MOV dword ptr [0x02c6d570],EDI
//   XREF to: 02c6d570 (WRITE)
// 0048771d: POP EDI
// 0048771e: POP ESI
// 0048771f: POP EBX
// 00487720: RET
