// Name: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
// Address: 00488110
// Address Range: [[00488110, 0048822a]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(CDrawSurface * this_ptr, int start_x, int y, int end_x)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 (004884d0) at 004884ec [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0 (00488cd0) at 00488ee2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621daf
//   TerminatedCString s_Invalid_bitsPerPixel_00621dc7
//   int g_BitsPerPixel = 0x8
//   int g_CurrentDrawColor
//   int g_UseRGBConversion
//   void*[1024] g_ScreenBufferArray
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
          (CDrawSurface *this_ptr,int start_x,int y,int end_x)

{
  int start_x_00;
  int end_x_00;
  undefined2 *puVar1;
  int *piVar2;
  int y_00;
  
  end_x_00 = end_x + this_ptr->x;
  start_x_00 = start_x + this_ptr->x;
  y_00 = y + this_ptr->y;
  if ((this_ptr->clip_top <= y_00) && (y_00 <= this_ptr->clip_bottom)) {
    if (start_x_00 < this_ptr->clip_left) {
      start_x_00 = this_ptr->clip_left;
    }
    if (this_ptr->clip_right < end_x_00) {
      end_x_00 = this_ptr->clip_right;
    }
    if (start_x_00 <= end_x_00) {
      if (g_UseRGBConversion != 0) {
        cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
                  (start_x_00,end_x_00,y_00);
        return;
      }
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel == 8) {
          crt_memory_c_memset_FUN_005fde40
                    ((void *)((int)g_ScreenBufferArray[y_00] + start_x_00),g_CurrentDrawColor,
                     (end_x_00 - start_x_00) + 1);
          return;
        }
      }
      else {
        if ((uint)g_BitsPerPixel < 0x11) {
          puVar1 = (undefined2 *)(start_x_00 * 2 + (int)g_ScreenBufferArray[y_00]);
          do {
            start_x_00 = start_x_00 + 1;
            *puVar1 = (undefined2)g_CurrentDrawColor;
            puVar1 = puVar1 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
        if (g_BitsPerPixel == 0x20) {
          piVar2 = (int *)(start_x_00 * 4 + (int)g_ScreenBufferArray[y_00]);
          do {
            start_x_00 = start_x_00 + 1;
            *piVar2 = g_CurrentDrawColor;
            piVar2 = piVar2 + 1;
          } while (start_x_00 <= end_x_00);
          return;
        }
      }
      g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
      g_CurrentLineNumber = 0x3a5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
      return;
    }
  }
  return;
}


// Assembly code:
// 00488110: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
// 00488111: PUSH ESI
// 00488112: PUSH EDI
// 00488113: PUSH EBP
// 00488114: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00488118: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048811c: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00488120: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00488124: MOV ESI,dword ptr [EDX + 0x8]
// 00488127: MOV EDI,dword ptr [EDX + 0xc]
// 0048812a: ADD ECX,ESI
// 0048812c: ADD EAX,ESI
// 0048812e: ADD EBX,EDI
// 00488130: CMP EBX,dword ptr [EDX + 0x14]
// 00488133: JL 0x004881a0
//   XREF to: 004881a0 (CONDITIONAL_JUMP)
// 00488139: CMP EBX,dword ptr [EDX + 0x1c]
// 0048813c: JG 0x004881a0
//   XREF to: 004881a0 (CONDITIONAL_JUMP)
// 0048813e: MOV EBP,dword ptr [EDX + 0x10]
// 00488141: CMP EAX,EBP
// 00488143: JGE 0x00488147
//   XREF to: 00488147 (CONDITIONAL_JUMP)
// 00488145: MOV EAX,EBP
// 00488147: MOV ESI,dword ptr [EDX + 0x18]
//   Label: LAB_00488147
// 0048814a: CMP ECX,ESI
// 0048814c: JLE 0x00488150
//   XREF to: 00488150 (CONDITIONAL_JUMP)
// 0048814e: MOV ECX,ESI
// 00488150: CMP EAX,ECX
//   Label: LAB_00488150
// 00488152: JG 0x004881a0
//   XREF to: 004881a0 (CONDITIONAL_JUMP)
// 00488154: CMP dword ptr [0x02c6d55c],0x0
//   XREF to: 02c6d55c (READ)
// 0048815b: JNZ 0x004881a5
//   XREF to: 004881a5 (CONDITIONAL_JUMP)
// 0048815d: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00488163: SHL EBX,0x2
// 00488166: CMP EDX,0x10
// 00488169: JNC 0x004881fd
//   XREF to: 004881fd (CONDITIONAL_JUMP)
// 0048816f: CMP EDX,0x8
// 00488172: JNZ 0x00488204
//   XREF to: 00488204 (CONDITIONAL_JUMP)
// 00488178: SUB ECX,EAX
// 0048817a: INC ECX
// 0048817b: PUSH ECX
// 0048817c: MOV ECX,dword ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 00488182: MOV EDX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00488188: PUSH ECX
// 00488189: ADD EDX,EAX
// 0048818b: PUSH EDX
// 0048818c: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00488191: ADD ESP,0xc
// 00488194: LEA EAX,[EAX]
// 0048819a: LEA EDX,[EDX]
// 004881a0: POP EBP
//   Label: LAB_004881a0
// 004881a1: POP EDI
// 004881a2: POP ESI
// 004881a3: POP EBX
// 004881a4: RET
// 004881a5: PUSH EBX
//   Label: LAB_004881a5
// 004881a6: PUSH ECX
// 004881a7: PUSH EAX
// 004881a8: CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
//   XREF to: 00487630 (UNCONDITIONAL_CALL)
// 004881ad: ADD ESP,0xc
// 004881b0: POP EBP
// 004881b1: POP EDI
// 004881b2: POP ESI
// 004881b3: POP EBX
// 004881b4: RET
// 004881b5: LEA EDX,[EAX + EAX*0x1]
//   Label: LAB_004881b5
// 004881b8: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004881be: ADD EDX,EBX
// 004881c0: ADD EDX,0x2
//   Label: LAB_004881c0
// 004881c3: MOV BX,word ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 004881ca: INC EAX
// 004881cb: MOV word ptr [EDX + -0x2],BX
// 004881cf: CMP EAX,ECX
// 004881d1: JLE 0x004881c0
//   XREF to: 004881c0 (CONDITIONAL_JUMP)
// 004881d3: POP EBP
// 004881d4: POP EDI
// 004881d5: POP ESI
// 004881d6: POP EBX
// 004881d7: RET
// 004881d8: LEA EDX,[EAX*0x4 + 0x0]
//   Label: LAB_004881d8
// 004881df: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004881e5: ADD EDX,EBX
// 004881e7: ADD EDX,0x4
//   Label: LAB_004881e7
// 004881ea: MOV EBX,dword ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 004881f0: INC EAX
// 004881f1: MOV dword ptr [EDX + -0x4],EBX
// 004881f4: CMP EAX,ECX
// 004881f6: JLE 0x004881e7
//   XREF to: 004881e7 (CONDITIONAL_JUMP)
// 004881f8: POP EBP
// 004881f9: POP EDI
// 004881fa: POP ESI
// 004881fb: POP EBX
// 004881fc: RET
// 004881fd: JBE 0x004881b5
//   Label: LAB_004881fd
//   XREF to: 004881b5 (CONDITIONAL_JUMP)
// 004881ff: CMP EDX,0x20
// 00488202: JZ 0x004881d8
//   XREF to: 004881d8 (CONDITIONAL_JUMP)
// 00488204: MOV EBP,0x621daf
//   Label: LAB_00488204
//   XREF to: 00621daf (DATA)
// 00488209: MOV EAX,0x3a5
// 0048820e: PUSH 0x621dc7
//   XREF to: 00621dc7 (DATA)
// 00488213: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00488219: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0048821e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00488223: ADD ESP,0x4
// 00488226: POP EBP
// 00488227: POP EDI
// 00488228: POP ESI
// 00488229: POP EBX
// 0048822a: RET
