// Name: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0
// Address: 00488ad0
// Address Range: [[00488ad0, 00488c68]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 (00488c70) at 00488c82 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621e46
//   TerminatedCString s_Invalid_bitsPerPixel_00621e5e
//   int g_BitsPerPixel = 0x8
//   int g_CurrentDrawColor
//   int g_UseRGBConversion
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_00488ad0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int *piVar1;
  undefined2 *puVar2;
  int end_x;
  int iVar3;
  int iVar4;
  int iVar5;
  int start_x;
  
  end_x = x2 + this_ptr->x;
  start_x = x1 + this_ptr->x;
  iVar4 = y1 + this_ptr->y;
  iVar3 = y2 + this_ptr->y;
  if (start_x < this_ptr->clip_left) {
    start_x = this_ptr->clip_left;
  }
  if (this_ptr->clip_right < end_x) {
    end_x = this_ptr->clip_right;
  }
  if (start_x <= end_x) {
    if (iVar4 < this_ptr->clip_top) {
      iVar4 = this_ptr->clip_top;
    }
    if (this_ptr->clip_bottom < iVar3) {
      iVar3 = this_ptr->clip_bottom;
    }
    if (iVar4 <= iVar3) {
      if (g_UseRGBConversion == 0) {
        iVar3 = iVar3 * 4;
        iVar4 = iVar4 * 4;
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel == 8) {
            do {
              piVar1 = (int *)((int)g_ScreenBufferArray + iVar4);
              iVar4 = iVar4 + 4;
              crt_memory_c_memset_FUN_005fde40
                        ((void *)(*piVar1 + start_x),g_CurrentDrawColor,(end_x - start_x) + 1);
            } while (iVar4 <= iVar3);
            return;
          }
LAB_00488c3e:
          g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
          g_CurrentLineNumber = 0x524;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
          return;
        }
        if ((uint)g_BitsPerPixel < 0x11) {
          do {
            if (start_x <= end_x) {
              iVar5 = start_x;
              puVar2 = (undefined2 *)(start_x * 2 + *(int *)((int)g_ScreenBufferArray + iVar4));
              do {
                iVar5 = iVar5 + 1;
                *puVar2 = (undefined2)g_CurrentDrawColor;
                puVar2 = puVar2 + 1;
              } while (iVar5 <= end_x);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 <= iVar3);
        }
        else {
          if (g_BitsPerPixel != 0x20) goto LAB_00488c3e;
          do {
            if (start_x <= end_x) {
              piVar1 = (int *)(start_x * 4 + *(int *)((int)g_ScreenBufferArray + iVar4));
              iVar5 = start_x;
              do {
                iVar5 = iVar5 + 1;
                *piVar1 = g_CurrentDrawColor;
                piVar1 = piVar1 + 1;
              } while (iVar5 <= end_x);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 <= iVar3);
        }
      }
      else {
        do {
          iVar5 = iVar4 + 1;
          cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
                    (start_x,end_x,iVar4);
          iVar4 = iVar5;
        } while (iVar5 <= iVar3);
      }
    }
  }
  return;
}


// Assembly code:
// 00488ad0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0
// 00488ad1: PUSH ESI
// 00488ad2: PUSH EDI
// 00488ad3: PUSH EBP
// 00488ad4: SUB ESP,0x14
// 00488ad7: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00488adb: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00488adf: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 00488ae3: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 00488ae7: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x14] (READ)
// 00488aeb: MOV EDX,dword ptr [EAX + 0x8]
// 00488aee: MOV ECX,dword ptr [EAX + 0xc]
// 00488af1: ADD EBX,EDX
// 00488af3: ADD EDI,EDX
// 00488af5: ADD ESI,ECX
// 00488af7: MOV EDX,dword ptr [EAX + 0x10]
// 00488afa: ADD EBP,ECX
// 00488afc: CMP EDI,EDX
// 00488afe: JGE 0x00488b02
//   XREF to: 00488b02 (CONDITIONAL_JUMP)
// 00488b00: MOV EDI,EDX
// 00488b02: MOV ECX,dword ptr [EAX + 0x18]
//   Label: LAB_00488b02
// 00488b05: CMP EBX,ECX
// 00488b07: JLE 0x00488b0b
//   XREF to: 00488b0b (CONDITIONAL_JUMP)
// 00488b09: MOV EBX,ECX
// 00488b0b: CMP EDI,EBX
//   Label: LAB_00488b0b
// 00488b0d: JG 0x00488b50
//   XREF to: 00488b50 (CONDITIONAL_JUMP)
// 00488b0f: MOV EDX,dword ptr [EAX + 0x14]
// 00488b12: CMP ESI,EDX
// 00488b14: JGE 0x00488b18
//   XREF to: 00488b18 (CONDITIONAL_JUMP)
// 00488b16: MOV ESI,EDX
// 00488b18: MOV ECX,dword ptr [EAX + 0x1c]
//   Label: LAB_00488b18
// 00488b1b: CMP EBP,ECX
// 00488b1d: JLE 0x00488b21
//   XREF to: 00488b21 (CONDITIONAL_JUMP)
// 00488b1f: MOV EBP,ECX
// 00488b21: CMP ESI,EBP
//   Label: LAB_00488b21
// 00488b23: JG 0x00488b50
//   XREF to: 00488b50 (CONDITIONAL_JUMP)
// 00488b25: CMP dword ptr [0x02c6d55c],0x0
//   XREF to: 02c6d55c (READ)
// 00488b2c: JZ 0x00488c10
//   XREF to: 00488c10 (CONDITIONAL_JUMP)
// 00488b32: PUSH ESI
//   Label: LAB_00488b32
// 00488b33: PUSH EBX
// 00488b34: PUSH EDI
// 00488b35: INC ESI
// 00488b36: CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
//   XREF to: 00487630 (UNCONDITIONAL_CALL)
// 00488b3b: ADD ESP,0xc
// 00488b3e: CMP ESI,EBP
// 00488b40: JLE 0x00488b32
//   XREF to: 00488b32 (CONDITIONAL_JUMP)
// 00488b42: LEA EAX,[EAX]
// 00488b48: LEA EDX,[EDX]
// 00488b4e: MOV EAX,EAX
// 00488b50: ADD ESP,0x14
//   Label: LAB_00488b50
// 00488b53: POP EBP
// 00488b54: POP EDI
// 00488b55: POP ESI
// 00488b56: POP EBX
// 00488b57: RET
// 00488b58: SUB EBX,EDI
//   Label: LAB_00488b58
// 00488b5a: INC EBX
// 00488b5b: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x24] (DATA)
// 00488b5e: MOV EBX,EBP
// 00488b60: MOV EBP,EDX
// 00488b62: MOV EDX,dword ptr [ESP]
//   Label: LAB_00488b62
//   XREF to: Stack[-0x24] (DATA)
// 00488b65: PUSH EDX
// 00488b66: MOV ECX,dword ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 00488b6c: MOV EAX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00488b72: PUSH ECX
// 00488b73: ADD EAX,EDI
// 00488b75: PUSH EAX
// 00488b76: ADD EBX,0x4
// 00488b79: INC ESI
// 00488b7a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00488b7f: ADD ESP,0xc
// 00488b82: CMP EBX,EBP
// 00488b84: JLE 0x00488b62
//   XREF to: 00488b62 (CONDITIONAL_JUMP)
// 00488b86: ADD ESP,0x14
// 00488b89: POP EBP
// 00488b8a: POP EDI
// 00488b8b: POP ESI
// 00488b8c: POP EBX
// 00488b8d: RET
// 00488b8e: MOV dword ptr [ESP + 0x8],EDX
//   Label: LAB_00488b8e
//   XREF to: Stack[-0x1c] (WRITE)
// 00488b92: MOV EAX,dword ptr [EBP + 0x2cf6a9c]
//   Label: LAB_00488b92
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00488b98: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00488b9c: MOV EAX,EDI
// 00488b9e: CMP EDI,EBX
// 00488ba0: JG 0x00488bbe
//   XREF to: 00488bbe (CONDITIONAL_JUMP)
// 00488ba2: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00488ba6: LEA EDX,[EDI + EDI*0x1]
// 00488ba9: ADD EDX,ECX
// 00488bab: ADD EDX,0x2
//   Label: LAB_00488bab
// 00488bae: MOV CX,word ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 00488bb5: INC EAX
// 00488bb6: MOV word ptr [EDX + -0x2],CX
// 00488bba: CMP EAX,EBX
// 00488bbc: JLE 0x00488bab
//   XREF to: 00488bab (CONDITIONAL_JUMP)
// 00488bbe: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00488bbe
//   XREF to: Stack[-0x1c] (READ)
// 00488bc2: ADD EBP,0x4
// 00488bc5: INC ESI
// 00488bc6: CMP EBP,EAX
// 00488bc8: JG 0x00488b50
//   XREF to: 00488b50 (CONDITIONAL_JUMP)
// 00488bca: JMP 0x00488b92
//   XREF to: 00488b92 (UNCONDITIONAL_JUMP)
// 00488bcc: MOV dword ptr [ESP + 0x4],EDX
//   Label: LAB_00488bcc
//   XREF to: Stack[-0x20] (WRITE)
// 00488bd0: MOV EAX,dword ptr [EBP + 0x2cf6a9c]
//   Label: LAB_00488bd0
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00488bd6: MOV EDX,EDI
// 00488bd8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00488bdc: CMP EDI,EBX
// 00488bde: JG 0x00488bfe
//   XREF to: 00488bfe (CONDITIONAL_JUMP)
// 00488be0: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00488be4: LEA EAX,[EDI*0x4 + 0x0]
// 00488beb: ADD EAX,ECX
// 00488bed: ADD EAX,0x4
//   Label: LAB_00488bed
// 00488bf0: MOV ECX,dword ptr [0x02c6d550]
//   XREF to: 02c6d550 (READ)
// 00488bf6: INC EDX
// 00488bf7: MOV dword ptr [EAX + -0x4],ECX
// 00488bfa: CMP EDX,EBX
// 00488bfc: JLE 0x00488bed
//   XREF to: 00488bed (CONDITIONAL_JUMP)
// 00488bfe: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00488bfe
//   XREF to: Stack[-0x20] (READ)
// 00488c02: ADD EBP,0x4
// 00488c05: INC ESI
// 00488c06: CMP EBP,EAX
// 00488c08: JG 0x00488b50
//   XREF to: 00488b50 (CONDITIONAL_JUMP)
// 00488c0e: JMP 0x00488bd0
//   XREF to: 00488bd0 (UNCONDITIONAL_JUMP)
// 00488c10: LEA EDX,[EBP*0x4 + 0x0]
//   Label: LAB_00488c10
// 00488c17: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 00488c1c: LEA EBP,[ESI*0x4 + 0x0]
// 00488c23: CMP EAX,0x10
// 00488c26: JNC 0x00488c33
//   XREF to: 00488c33 (CONDITIONAL_JUMP)
// 00488c28: CMP EAX,0x8
// 00488c2b: JZ 0x00488b58
//   XREF to: 00488b58 (CONDITIONAL_JUMP)
// 00488c31: JMP 0x00488c3e
//   XREF to: 00488c3e (UNCONDITIONAL_JUMP)
// 00488c33: JBE 0x00488b8e
//   Label: LAB_00488c33
//   XREF to: 00488b8e (CONDITIONAL_JUMP)
// 00488c39: CMP EAX,0x20
// 00488c3c: JZ 0x00488bcc
//   XREF to: 00488bcc (CONDITIONAL_JUMP)
// 00488c3e: MOV EDX,0x621e46
//   Label: LAB_00488c3e
//   XREF to: 00621e46 (PARAM)
// 00488c43: MOV ECX,0x524
// 00488c48: PUSH 0x621e5e
//   XREF to: 00621e5e (DATA)
// 00488c4d: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00488c53: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00488c59: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00488c5e: ADD ESP,0x4
// 00488c61: ADD ESP,0x14
// 00488c64: POP EBP
// 00488c65: POP EDI
// 00488c66: POP ESI
// 00488c67: POP EBX
// 00488c68: RET
