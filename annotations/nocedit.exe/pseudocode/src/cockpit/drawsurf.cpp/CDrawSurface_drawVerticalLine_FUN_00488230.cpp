// Name: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
// Address: 00488230
// Address Range: [[00488230, 00488400]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230(CDrawSurface * this_ptr, int x, int start_y, int end_y)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 (004884d0) at 0048850c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621ddd
//   TerminatedCString s_Invalid_bitsPerPixel_00621df5
//   TerminatedCString s_cockpit_drawsurf_cpp_00621e0b
//   TerminatedCString s_Invalid_bitsPerPixel_00621e23
//   int g_BitsPerPixel = 0x8
//   int g_CurrentDrawColor
//   int g_UseRGBConversion
//   int g_OriginalColorValue
//   int g_PackedPixelColor
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230
          (CDrawSurface *this_ptr,int x,int start_y,int end_y)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = x + this_ptr->x;
  iVar3 = start_y + this_ptr->y;
  iVar4 = end_y + this_ptr->y;
  if ((this_ptr->clip_left <= iVar6) && (iVar6 <= this_ptr->clip_right)) {
    if (iVar3 < this_ptr->clip_top) {
      iVar3 = this_ptr->clip_top;
    }
    if (this_ptr->clip_bottom < iVar4) {
      iVar4 = this_ptr->clip_bottom;
    }
    if (iVar3 <= iVar4) {
      iVar2 = iVar6 * 2;
      iVar5 = iVar4 * 4;
      iVar3 = iVar3 * 4;
      if (g_UseRGBConversion != 0) {
        if ((uint)g_BitsPerPixel < 0x10) {
          if (g_BitsPerPixel == 8) {
            return;
          }
        }
        else {
          if ((uint)g_BitsPerPixel < 0x11) {
            do {
              piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
              iVar3 = iVar3 + 4;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> ((byte)g_OriginalColorValue & 0x1f) &
                   (ushort)g_PackedPixelColor;
            } while (iVar3 == iVar5 || SBORROW4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
            return;
          }
          if (g_BitsPerPixel == 0x20) {
            do {
              puVar7 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar3) + iVar6 * 4);
              iVar3 = iVar3 + 4;
              *puVar7 = *puVar7 >> ((byte)g_OriginalColorValue & 0x1f) & g_PackedPixelColor;
            } while (iVar3 == iVar5 || SBORROW4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
            return;
          }
        }
        g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
        g_CurrentLineNumber = 0x3fb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
        return;
      }
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_00488313:
          g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
          g_CurrentLineNumber = 0x3db;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid bitsPerPixel!");
          return;
        }
        do {
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
          iVar3 = iVar3 + 4;
          *(undefined1 *)(iVar6 + *piVar1) = (undefined1)g_CurrentDrawColor;
        } while (iVar3 == iVar5 || SBORROW4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        do {
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
          iVar3 = iVar3 + 4;
          *(undefined2 *)(*piVar1 + iVar2) = (undefined2)g_CurrentDrawColor;
        } while (iVar3 == iVar5 || SBORROW4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_00488313;
        do {
          piVar1 = (int *)((int)g_ScreenBufferArray + iVar3);
          iVar3 = iVar3 + 4;
          *(int *)(*piVar1 + iVar6 * 4) = g_CurrentDrawColor;
        } while (iVar3 == iVar5 || SBORROW4(iVar3,iVar5) != iVar3 + iVar4 * -4 < 0);
      }
    }
  }
  return;
}


// Assembly code:
// 00488230: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
// 00488231: PUSH ESI
// 00488232: PUSH EDI
// 00488233: PUSH EBP
// 00488234: SUB ESP,0x8
// 00488237: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048823b: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0048823f: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00488243: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00488247: MOV ECX,dword ptr [EDX + 0x8]
// 0048824a: MOV EDI,dword ptr [EDX + 0xc]
// 0048824d: ADD ESI,ECX
// 0048824f: ADD EAX,EDI
// 00488251: MOV ECX,dword ptr [EDX + 0x10]
// 00488254: ADD EBX,EDI
// 00488256: CMP ESI,ECX
// 00488258: JL 0x004882d0
//   XREF to: 004882d0 (CONDITIONAL_JUMP)
// 0048825e: CMP ESI,dword ptr [EDX + 0x18]
// 00488261: JG 0x004882d0
//   XREF to: 004882d0 (CONDITIONAL_JUMP)
// 00488267: MOV EBP,dword ptr [EDX + 0x14]
// 0048826a: CMP EAX,EBP
// 0048826c: JGE 0x00488270
//   XREF to: 00488270 (CONDITIONAL_JUMP)
// 0048826e: MOV EAX,EBP
// 00488270: MOV ECX,dword ptr [EDX + 0x1c]
//   Label: LAB_00488270
// 00488273: CMP EBX,ECX
// 00488275: JLE 0x00488279
//   XREF to: 00488279 (CONDITIONAL_JUMP)
// 00488277: MOV EBX,ECX
// 00488279: CMP EAX,EBX
//   Label: LAB_00488279
// 0048827b: JG 0x004882d0
//   XREF to: 004882d0 (CONDITIONAL_JUMP)
// 0048827d: LEA EDI,[ESI + ESI*0x1]
// 00488280: MOV EBP,dword ptr [0x02c6d55c]
//   XREF to: 02c6d55c (READ)
// 00488286: LEA EDX,[ESI*0x4 + 0x0]
// 0048828d: SHL EBX,0x2
// 00488290: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00488293: LEA EDX,[EAX*0x4 + 0x0]
// 0048829a: TEST EBP,EBP
// 0048829c: JNZ 0x004883b6
//   XREF to: 004883b6 (CONDITIONAL_JUMP)
// 004882a2: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004882a8: CMP ECX,0x10
// 004882ab: JNC 0x0048833e
//   XREF to: 0048833e (CONDITIONAL_JUMP)
// 004882b1: CMP ECX,0x8
// 004882b4: JNZ 0x00488313
//   XREF to: 00488313 (CONDITIONAL_JUMP)
// 004882b6: MOV EDI,EBX
// 004882b8: MOV CL,byte ptr [0x02c6d550]
//   Label: LAB_004882b8
//   XREF to: 02c6d550 (READ)
// 004882be: MOV EBX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004882c4: ADD EDX,0x4
// 004882c7: INC EAX
// 004882c8: MOV byte ptr [ESI + EBX*0x1],CL
// 004882cb: CMP EDX,EDI
// 004882cd: JLE 0x004882b8
//   XREF to: 004882b8 (CONDITIONAL_JUMP)
// 004882cf: NOP
// 004882d0: ADD ESP,0x8
//   Label: LAB_004882d0
// 004882d3: POP EBP
// 004882d4: POP EDI
// 004882d5: POP ESI
// 004882d6: POP EBX
// 004882d7: RET
// 004882d8: MOV ESI,EBX
//   Label: LAB_004882d8
// 004882da: MOV BX,word ptr [0x02c6d550]
//   Label: LAB_004882da
//   XREF to: 02c6d550 (READ)
// 004882e1: MOV ECX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004882e7: ADD EDX,0x4
// 004882ea: INC EAX
// 004882eb: MOV word ptr [ECX + EDI*0x1],BX
// 004882ef: CMP EDX,ESI
// 004882f1: JLE 0x004882da
//   XREF to: 004882da (CONDITIONAL_JUMP)
// 004882f3: JMP 0x004882d0
//   XREF to: 004882d0 (UNCONDITIONAL_JUMP)
// 004882f5: MOV EDI,dword ptr [ESP]
//   Label: LAB_004882f5
//   XREF to: Stack[-0x18] (DATA)
// 004882f8: MOV ESI,EBX
// 004882fa: MOV EBX,dword ptr [0x02c6d550]
//   Label: LAB_004882fa
//   XREF to: 02c6d550 (READ)
// 00488300: MOV ECX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00488306: ADD EDX,0x4
// 00488309: INC EAX
// 0048830a: MOV dword ptr [ECX + EDI*0x1],EBX
// 0048830d: CMP EDX,ESI
// 0048830f: JLE 0x004882fa
//   XREF to: 004882fa (CONDITIONAL_JUMP)
// 00488311: JMP 0x004882d0
//   XREF to: 004882d0 (UNCONDITIONAL_JUMP)
// 00488313: MOV ECX,0x621ddd
//   Label: LAB_00488313
//   XREF to: 00621ddd (PARAM)
// 00488318: MOV EBX,0x3db
// 0048831d: PUSH 0x621df5
//   XREF to: 00621df5 (DATA)
// 00488322: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00488328: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0048832e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00488333: ADD ESP,0x4
// 00488336: ADD ESP,0x8
// 00488339: POP EBP
// 0048833a: POP EDI
// 0048833b: POP ESI
// 0048833c: POP EBX
// 0048833d: RET
// 0048833e: JBE 0x004882d8
//   Label: LAB_0048833e
//   XREF to: 004882d8 (CONDITIONAL_JUMP)
// 00488340: CMP ECX,0x20
// 00488343: JZ 0x004882f5
//   XREF to: 004882f5 (CONDITIONAL_JUMP)
// 00488345: JMP 0x00488313
//   XREF to: 00488313 (UNCONDITIONAL_JUMP)
// 00488347: MOV EBP,EDI
//   Label: LAB_00488347
// 00488349: MOV EDI,EBX
// 0048834b: MOV EBX,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_0048834b
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00488351: XOR ESI,ESI
// 00488353: MOV CL,byte ptr [0x02c6d560]
//   XREF to: 02c6d560 (READ)
// 00488359: MOV SI,word ptr [EBX + EBP*0x1]
// 0048835d: SHR ESI,CL
// 0048835f: MOV ECX,dword ptr [0x02c6d570]
//   XREF to: 02c6d570 (READ)
// 00488365: ADD EDX,0x4
// 00488368: AND ESI,ECX
// 0048836a: INC EAX
// 0048836b: MOV word ptr [EBX + EBP*0x1],SI
// 0048836f: CMP EDX,EDI
// 00488371: JLE 0x0048834b
//   XREF to: 0048834b (CONDITIONAL_JUMP)
// 00488373: ADD ESP,0x8
// 00488376: POP EBP
// 00488377: POP EDI
// 00488378: POP ESI
// 00488379: POP EBX
// 0048837a: RET
// 0048837b: MOV ECX,dword ptr [ESP]
//   Label: LAB_0048837b
//   XREF to: Stack[-0x18] (DATA)
// 0048837e: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00488382: MOV EDI,EBX
// 00488384: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00488388: MOV ESI,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_00488388
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0048838e: ADD ESI,EBP
// 00488390: MOV CL,byte ptr [0x02c6d560]
//   XREF to: 02c6d560 (READ)
// 00488396: MOV EBX,dword ptr [ESI]
// 00488398: SHR EBX,CL
// 0048839a: MOV ECX,EBX
// 0048839c: MOV EBX,dword ptr [0x02c6d570]
//   XREF to: 02c6d570 (READ)
// 004883a2: ADD EDX,0x4
// 004883a5: AND ECX,EBX
// 004883a7: INC EAX
// 004883a8: MOV dword ptr [ESI],ECX
// 004883aa: CMP EDX,EDI
// 004883ac: JLE 0x00488388
//   XREF to: 00488388 (CONDITIONAL_JUMP)
// 004883ae: ADD ESP,0x8
// 004883b1: POP EBP
// 004883b2: POP EDI
// 004883b3: POP ESI
// 004883b4: POP EBX
// 004883b5: RET
// 004883b6: MOV ECX,dword ptr [0x0067939c]
//   Label: LAB_004883b6
//   XREF to: 0067939c (READ)
// 004883bc: CMP ECX,0x10
// 004883bf: JNC 0x004883cc
//   XREF to: 004883cc (CONDITIONAL_JUMP)
// 004883c1: CMP ECX,0x8
// 004883c4: JZ 0x004882d0
//   XREF to: 004882d0 (CONDITIONAL_JUMP)
// 004883ca: JMP 0x004883d7
//   XREF to: 004883d7 (UNCONDITIONAL_JUMP)
// 004883cc: JBE 0x00488347
//   Label: LAB_004883cc
//   XREF to: 00488347 (CONDITIONAL_JUMP)
// 004883d2: CMP ECX,0x20
// 004883d5: JZ 0x0048837b
//   XREF to: 0048837b (CONDITIONAL_JUMP)
// 004883d7: MOV EAX,0x621e0b
//   Label: LAB_004883d7
//   XREF to: 00621e0b (PARAM)
// 004883dc: MOV EDX,0x3fb
// 004883e1: PUSH 0x621e23
//   XREF to: 00621e23 (DATA)
// 004883e6: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004883eb: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004883f1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004883f6: ADD ESP,0x4
// 004883f9: ADD ESP,0x8
// 004883fc: POP EBP
// 004883fd: POP EDI
// 004883fe: POP ESI
// 004883ff: POP EBX
// 00488400: RET
