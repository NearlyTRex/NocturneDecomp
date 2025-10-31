// Name: core_path.cpp_FUN_005485f0
// Address: 005485f0
// Address Range: [[005485f0, 00548673]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_005485f0()
// Globals:
//   TerminatedCString s_core_path_cpp_0063ea78
//   TerminatedCString s_Global_pathmap_list_corr_0063ea89
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_PathMapCount
//   CPathMap*[200] g_PathMapList
//   undefined4 DAT_030c3ac0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_path.cpp_FUN_00547fc0

#include "nocturne.h"

void core_path_cpp_FUN_005485f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_PathMapCount) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar1) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6a8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      if (*(int *)(*(int *)((int)g_PathMapList + iVar1) + 0x138c0) < 0x461c3c01) {
        core_path_cpp_FUN_00547fc0();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}


// Assembly code:
// 005485f0: PUSH EBX
//   Label: core_path.cpp_FUN_005485f0
// 005485f1: PUSH ESI
// 005485f2: PUSH EDI
// 005485f3: PUSH EBP
// 005485f4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005485f8: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005485fc: MOV EDX,dword ptr [0x030c3ab8]
//   XREF to: 030c3ab8 (READ)
// 00548602: XOR ESI,ESI
// 00548604: TEST EDX,EDX
// 00548606: JLE 0x00548633
//   XREF to: 00548633 (CONDITIONAL_JUMP)
// 00548608: XOR EBX,EBX
// 0054860a: CMP dword ptr [EBX + 0x30c3abc],0x0
//   Label: LAB_0054860a
//   XREF to: 030c3abc (READ)
//   XREF to: 030c3ac0 (READ)
// 00548611: JZ 0x00548638
//   XREF to: 00548638 (CONDITIONAL_JUMP)
// 00548613: MOV EDX,dword ptr [EBX + 0x30c3abc]
//   Label: LAB_00548613
//   XREF to: 030c3abc (READ)
//   XREF to: 030c3ac0 (READ)
// 00548619: CMP dword ptr [EDX + 0x138c0],0x461c3c00
// 00548623: JLE 0x0054865d
//   XREF to: 0054865d (CONDITIONAL_JUMP)
// 00548625: MOV ECX,dword ptr [0x030c3ab8]
//   Label: LAB_00548625
//   XREF to: 030c3ab8 (READ)
// 0054862b: INC ESI
// 0054862c: ADD EBX,0x4
// 0054862f: CMP ESI,ECX
// 00548631: JL 0x0054860a
//   XREF to: 0054860a (CONDITIONAL_JUMP)
// 00548633: POP EBP
//   Label: LAB_00548633
// 00548634: POP EDI
// 00548635: POP ESI
// 00548636: POP EBX
// 00548637: RET
// 00548638: MOV EDX,0x63ea78
//   Label: LAB_00548638
//   XREF to: 0063ea78 (DATA)
// 0054863d: MOV ECX,0x6a8
// 00548642: PUSH 0x63ea89
//   XREF to: 0063ea89 (DATA)
// 00548647: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0054864d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00548653: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00548658: ADD ESP,0x4
// 0054865b: JMP 0x00548613
//   XREF to: 00548613 (UNCONDITIONAL_JUMP)
// 0054865d: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0054865d
//   XREF to: Stack[0x10] (READ)
// 00548661: PUSH EAX
// 00548662: PUSH EDI
// 00548663: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00548667: PUSH ECX
// 00548668: PUSH EBP
// 00548669: PUSH EDX
// 0054866a: CALL core_path.cpp_FUN_00547fc0
//   XREF to: 00547fc0 (UNCONDITIONAL_CALL)
// 0054866f: ADD ESP,0x14
// 00548672: JMP 0x00548625
//   XREF to: 00548625 (UNCONDITIONAL_JUMP)
