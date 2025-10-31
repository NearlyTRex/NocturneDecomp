// Name: engine_2d.c_drawVLine_FUN_00402ff0
// Address: 00402ff0
// Address Range: [[00402ff0, 00403114]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c694 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 0056471d [UNCONDITIONAL_CALL]
//   engine_2d.c_drawRect_FUN_00403120 (00403120) at 0040314d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a1081 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a06b9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_draw3DBorder_FUN_004a58f0 (004a58f0) at 004a592c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0 (004a59a0) at 004a5a69 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_2d_c_00613203
//   TerminatedCString s_vLine_invalid_bitsPerPix_00613212
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   ushort[256] g_ColorTable16
//   uint[256] g_ColorTable32
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl engine_2d_c_drawVLine_FUN_00402ff0(int x,int y1,int y2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if ((g_ClipLeft <= x) && (x <= g_ClipRight)) {
    if (y1 < g_ClipTop) {
      y1 = g_ClipTop;
    }
    if (g_ClipBottom < y2) {
      y2 = g_ClipBottom;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_004030ee:
          g_CurrentFilename = "..\\engine\\2d.c";
          g_CurrentLineNumber = 0x8d8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 == iVar2 || SBORROW4(iVar5,iVar2) != iVar5 + y2 * -4 < 0; iVar5 = iVar5 + 4) {
          *(undefined1 *)(*(int *)((int)g_ScreenBufferArray + iVar5) + x) =
               (undefined1)g_ActiveRenderColor;
        }
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        uVar3 = g_ColorTable16[g_ActiveRenderColor];
        if (y1 <= y2) {
          do {
            piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 == iVar2 || SBORROW4(iVar5,iVar2) != iVar5 + y2 * -4 < 0);
        }
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_004030ee;
        uVar4 = g_ColorTable32[g_ActiveRenderColor];
        if (y1 <= y2) {
          do {
            piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
            iVar5 = iVar5 + 4;
            *(uint *)(*piVar1 + x * 4) = uVar4;
          } while (iVar5 == iVar2 || SBORROW4(iVar5,iVar2) != iVar5 + y2 * -4 < 0);
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00402ff0: PUSH EBX
//   Label: engine_2d.c_drawVLine_FUN_00402ff0
// 00402ff1: PUSH ESI
// 00402ff2: PUSH EDI
// 00402ff3: PUSH EBP
// 00402ff4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00402ff8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00402ffc: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00403000: CMP ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00403006: JL 0x004030b0
//   XREF to: 004030b0 (CONDITIONAL_JUMP)
// 0040300c: CMP ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00403012: JG 0x004030b0
//   XREF to: 004030b0 (CONDITIONAL_JUMP)
// 00403018: MOV EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0040301e: CMP EAX,EDI
// 00403020: JGE 0x00403024
//   XREF to: 00403024 (CONDITIONAL_JUMP)
// 00403022: MOV EAX,EDI
// 00403024: MOV EBP,dword ptr [0x02d02564]
//   Label: LAB_00403024
//   XREF to: 02d02564 (READ)
// 0040302a: CMP EDX,EBP
// 0040302c: JLE 0x00403030
//   XREF to: 00403030 (CONDITIONAL_JUMP)
// 0040302e: MOV EDX,EBP
// 00403030: CMP EAX,EDX
//   Label: LAB_00403030
// 00403032: JG 0x004030b0
//   XREF to: 004030b0 (CONDITIONAL_JUMP)
// 00403038: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0040303e: LEA ECX,[EDX*0x4 + 0x0]
// 00403045: LEA EBP,[EAX*0x4 + 0x0]
// 0040304c: CMP EBX,0x10
// 0040304f: JNC 0x004030e7
//   XREF to: 004030e7 (CONDITIONAL_JUMP)
// 00403055: CMP EBX,0x8
// 00403058: JNZ 0x004030ee
//   XREF to: 004030ee (CONDITIONAL_JUMP)
// 0040305e: MOV EDI,ECX
// 00403060: MOV EDX,EBP
// 00403062: CMP EDX,EDI
//   Label: LAB_00403062
// 00403064: JG 0x004030b0
//   XREF to: 004030b0 (CONDITIONAL_JUMP)
// 00403066: MOV BL,byte ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 0040306c: MOV ECX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00403072: ADD EDX,0x4
// 00403075: INC EAX
// 00403076: MOV byte ptr [ECX + ESI*0x1],BL
// 00403079: JMP 0x00403062
//   XREF to: 00403062 (UNCONDITIONAL_JUMP)
// 0040307b: MOV EBX,dword ptr [0x02d02570]
//   Label: LAB_0040307b
//   XREF to: 02d02570 (READ)
// 00403081: MOV BX,word ptr [EBX*0x2 + 0x2d01020]
//   XREF to: 02d01020 (DATA)
// 00403089: CMP EAX,EDX
// 0040308b: JG 0x004030b0
//   XREF to: 004030b0 (CONDITIONAL_JUMP)
// 0040308d: LEA EDI,[ESI + ESI*0x1]
// 00403090: MOV EDX,EBP
// 00403092: MOV ESI,ECX
// 00403094: MOV ECX,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_00403094
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0040309a: ADD EDX,0x4
// 0040309d: INC EAX
// 0040309e: MOV word ptr [ECX + EDI*0x1],BX
// 004030a2: CMP EDX,ESI
// 004030a4: JLE 0x00403094
//   XREF to: 00403094 (CONDITIONAL_JUMP)
// 004030a6: LEA EAX,[EAX]
// 004030ac: LEA EDX,[EDX]
// 004030b0: POP EBP
//   Label: LAB_004030b0
// 004030b1: POP EDI
// 004030b2: POP ESI
// 004030b3: POP EBX
// 004030b4: RET
// 004030b5: MOV EDI,dword ptr [0x02d02570]
//   Label: LAB_004030b5
//   XREF to: 02d02570 (READ)
// 004030bb: MOV EDI,dword ptr [EDI*0x4 + 0x2d01220]
//   XREF to: 02d01220 (DATA)
// 004030c2: CMP EAX,EDX
// 004030c4: JG 0x004030b0
//   XREF to: 004030b0 (CONDITIONAL_JUMP)
// 004030c6: LEA EBX,[ESI*0x4 + 0x0]
// 004030cd: MOV EDX,EBP
// 004030cf: MOV ESI,ECX
// 004030d1: MOV ECX,dword ptr [EDX + 0x2cf6a9c]
//   Label: LAB_004030d1
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004030d7: ADD EDX,0x4
// 004030da: INC EAX
// 004030db: MOV dword ptr [ECX + EBX*0x1],EDI
// 004030de: CMP EDX,ESI
// 004030e0: JLE 0x004030d1
//   XREF to: 004030d1 (CONDITIONAL_JUMP)
// 004030e2: POP EBP
// 004030e3: POP EDI
// 004030e4: POP ESI
// 004030e5: POP EBX
// 004030e6: RET
// 004030e7: JBE 0x0040307b
//   Label: LAB_004030e7
//   XREF to: 0040307b (CONDITIONAL_JUMP)
// 004030e9: CMP EBX,0x20
// 004030ec: JZ 0x004030b5
//   XREF to: 004030b5 (CONDITIONAL_JUMP)
// 004030ee: MOV EAX,0x613203
//   Label: LAB_004030ee
//   XREF to: 00613203 (PARAM)
// 004030f3: MOV EDX,0x8d8
// 004030f8: PUSH 0x613212
//   XREF to: 00613212 (DATA)
// 004030fd: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00403102: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00403108: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040310d: ADD ESP,0x4
// 00403110: POP EBP
// 00403111: POP EDI
// 00403112: POP ESI
// 00403113: POP EBX
// 00403114: RET
