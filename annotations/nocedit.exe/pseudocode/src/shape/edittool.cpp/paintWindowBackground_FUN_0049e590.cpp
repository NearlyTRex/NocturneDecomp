// Name: shape_edittool.cpp_paintWindowBackground_FUN_0049e590
// Address: 0049e590
// Address Range: [[0049e590, 0049e69f]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_paintWindowBackground_FUN_0049e590(void)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a1006 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 (004a0dd0) at 004a0dd7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622fbb
//   TerminatedCString s_paintWindowBackground_ca_00622fd1
//   int g_BitsPerPixel = 0x8
//   int g_WindowStackCount
//   SWindow[5] g_WindowStack
//   undefined4 DAT_02cf1ea8
//   undefined4 DAT_02cf1eac
//   undefined4 DAT_02cf1eb0
//   undefined4 DAT_02cf1eb4
//   undefined4 DAT_02cf1eb8
//   void*[1024] g_ScreenBufferArray
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0049e590(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x36e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paintWindowBackground called but no window was opened!");
  }
  iVar3 = g_WindowStackCount + -1;
  puVar7 = (undefined4 *)g_WindowStack[iVar3].screen_backup_buffer;
  if (puVar7 != (undefined4 *)0x0) {
    iVar4 = g_WindowStack[iVar3].backup_width * g_BitsPerPixel;
    iVar5 = iVar4 >> 0x1f;
    uVar1 = (int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < g_WindowStack[iVar3].backup_height) {
      do {
        iVar5 = g_WindowStack[iVar3].backup_x_offset * g_BitsPerPixel;
        iVar6 = iVar5 >> 0x1f;
        puVar8 = puVar7;
        puVar9 = (undefined4 *)
                 ((int)g_ScreenBufferArray[g_WindowStack[iVar3].backup_y_offset + iVar4] +
                 ((int)((iVar5 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3));
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar10 * -2 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar10 * -2 + 1);
        }
        iVar4 = iVar4 + 1;
        puVar7 = (undefined4 *)((int)puVar7 + uVar1);
      } while (iVar4 < g_WindowStack[iVar3].backup_height);
    }
  }
  return;
}


// Assembly code:
// 0049e590: PUSH EBX
//   Label: shape_edittool.cpp_paintWindowBackground_FUN_0049e590
// 0049e591: PUSH ESI
// 0049e592: PUSH EDI
// 0049e593: PUSH EBP
// 0049e594: SUB ESP,0x8
// 0049e597: CMP dword ptr [0x02cf1cdc],0x1
//   XREF to: 02cf1cdc (READ)
// 0049e59e: JL 0x0049e678
//   XREF to: 0049e678 (CONDITIONAL_JUMP)
// 0049e5a4: MOV EDX,dword ptr [0x02cf1cdc]
//   Label: LAB_0049e5a4
//   XREF to: 02cf1cdc (READ)
// 0049e5aa: DEC EDX
// 0049e5ab: MOV EAX,EDX
// 0049e5ad: SHL EAX,0x4
// 0049e5b0: SUB EAX,EDX
// 0049e5b2: SHL EAX,0x2
// 0049e5b5: ADD EAX,EDX
// 0049e5b7: MOV EDX,0x2cf1ce0
//   XREF to: 02cf1ce0 (DATA)
// 0049e5bc: SHL EAX,0x3
// 0049e5bf: ADD EDX,EAX
// 0049e5c1: MOV EBX,dword ptr [EDX + 0x1c8]
//   XREF to: 02cf1ea8 (DATA)
// 0049e5c7: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0049e5cb: TEST EBX,EBX
// 0049e5cd: JZ 0x0049e670
//   XREF to: 0049e670 (CONDITIONAL_JUMP)
// 0049e5d3: MOV ESI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0049e5d9: MOV EDX,dword ptr [EDX + 0x1d4]
//   XREF to: 02cf1eb4 (DATA)
// 0049e5df: IMUL EDX,ESI
// 0049e5e2: MOV EAX,EDX
// 0049e5e4: SAR EDX,0x1f
// 0049e5e7: SHL EDX,0x3
// 0049e5ea: SBB EAX,EDX
// 0049e5ec: SAR EAX,0x3
// 0049e5ef: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0049e5f2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0049e5f6: MOV EDI,dword ptr [EAX + 0x1d8]
//   XREF to: 02cf1eb8 (DATA)
// 0049e5fc: XOR EBP,EBP
// 0049e5fe: TEST EDI,EDI
// 0049e600: JLE 0x0049e670
//   XREF to: 0049e670 (CONDITIONAL_JUMP)
// 0049e602: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0049e602
//   XREF to: Stack[-0x14] (READ)
// 0049e606: MOV EAX,dword ptr [EAX + 0x1d0]
//   XREF to: 02cf1eb0 (DATA)
// 0049e60c: ADD EAX,EBP
// 0049e60e: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0049e612: LEA EDI,[EAX*0x4 + 0x0]
// 0049e619: MOV EDX,dword ptr [EDX + 0x1cc]
//   XREF to: 02cf1eac (DATA)
// 0049e61f: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 0049e624: IMUL EDX,EAX
// 0049e627: MOV EAX,EDX
// 0049e629: SAR EDX,0x1f
// 0049e62c: SHL EDX,0x3
// 0049e62f: SBB EAX,EDX
// 0049e631: SAR EAX,0x3
// 0049e634: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049e637: MOV EDI,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0049e63d: MOV ESI,EBX
// 0049e63f: ADD EDI,EAX
// 0049e641: PUSH EDI
// 0049e642: MOV EAX,ECX
// 0049e644: SHR ECX,0x2
// 0049e647: MOVSD.REP ES:EDI,ESI
// 0049e649: MOV CL,AL
// 0049e64b: AND CL,0x3
// 0049e64e: MOVSB.REP ES:EDI,ESI
// 0049e650: POP EDI
// 0049e651: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0049e655: INC EBP
// 0049e656: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049e659: MOV ECX,dword ptr [EAX + 0x1d8]
//   XREF to: 02cf1eb8 (DATA)
// 0049e65f: ADD EBX,EDX
// 0049e661: CMP EBP,ECX
// 0049e663: JL 0x0049e602
//   XREF to: 0049e602 (CONDITIONAL_JUMP)
// 0049e665: LEA EAX,[EAX]
// 0049e66b: LEA EDX,[EDX]
// 0049e66e: MOV EBX,EBX
// 0049e670: ADD ESP,0x8
//   Label: LAB_0049e670
// 0049e673: POP EBP
// 0049e674: POP EDI
// 0049e675: POP ESI
// 0049e676: POP EBX
// 0049e677: RET
// 0049e678: MOV ECX,0x622fbb
//   Label: LAB_0049e678
//   XREF to: 00622fbb (PARAM)
// 0049e67d: MOV EBX,0x36e
// 0049e682: PUSH 0x622fd1
//   XREF to: 00622fd1 (DATA)
// 0049e687: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049e68d: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049e693: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049e698: ADD ESP,0x4
// 0049e69b: JMP 0x0049e5a4
//   XREF to: 0049e5a4 (UNCONDITIONAL_JUMP)
