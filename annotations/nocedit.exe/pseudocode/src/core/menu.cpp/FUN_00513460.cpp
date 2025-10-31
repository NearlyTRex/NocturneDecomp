// Name: core_menu.cpp_FUN_00513460
// Address: 00513460
// Address Range: [[00513460, 005134d9]]
// Convention: unknown
// Signature: undefined core_menu.cpp_FUN_00513460()
// Globals:
//   TerminatedCString s_core_menu_cpp_00636e40
//   TerminatedCString s_Too_many_custom_keys_00636e51
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f29270
//   undefined4 DAT_02f29274
//   undefined1 DAT_02f292f0
//   undefined1 DAT_02f292f1
//   undefined1 DAT_02f292f2
//   undefined1 DAT_02f292f3
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void core_menu_cpp_FUN_00513460
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,char *param_7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x1d < DAT_02f29270) {
    g_CurrentFilename = "..\\core\\menu.cpp";
    g_CurrentLineNumber = 0x82b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many custom keys!",unaff_EBX);
  }
  iVar2 = DAT_02f29270;
  (&DAT_02f29274)[DAT_02f29270] = param_6;
  pcVar3 = &DAT_02f292f0 + iVar2 * 0x28;
  do {
    cVar1 = *param_7;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_7[1];
    param_7 = param_7 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  DAT_02f29270 = DAT_02f29270 + 1;
  return;
}


// Assembly code:
// 00513460: PUSH ESI
//   Label: core_menu.cpp_FUN_00513460
// 00513461: PUSH EDI
// 00513462: CMP dword ptr [0x02f29270],0x1e
//   XREF to: 02f29270 (READ)
// 00513469: JGE 0x005134b3
//   XREF to: 005134b3 (CONDITIONAL_JUMP)
// 0051346b: MOV EAX,[0x02f29270]
//   Label: LAB_0051346b
//   XREF to: 02f29270 (READ)
// 00513470: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00513474: MOV dword ptr [EAX*0x4 + 0x2f29274],EDX
//   XREF to: 02f29274 (DATA)
// 0051347b: MOV EDX,EAX
// 0051347d: SHL EAX,0x2
// 00513480: ADD EAX,EDX
// 00513482: MOV EDI,0x2f292f0
//   XREF to: 02f292f0 (DATA)
// 00513487: SHL EAX,0x3
// 0051348a: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0051348e: ADD EDI,EAX
// 00513490: PUSH EDI
// 00513491: MOV AL,byte ptr [ESI]
//   Label: LAB_00513491
// 00513493: MOV byte ptr [EDI],AL
//   XREF to: 02f292f0 (DATA)
//   XREF to: 02f292f2 (DATA)
// 00513495: CMP AL,0x0
// 00513497: JZ 0x005134a9
//   XREF to: 005134a9 (CONDITIONAL_JUMP)
// 00513499: MOV AL,byte ptr [ESI + 0x1]
// 0051349c: ADD ESI,0x2
// 0051349f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f292f1 (DATA)
//   XREF to: 02f292f3 (DATA)
// 005134a2: ADD EDI,0x2
// 005134a5: CMP AL,0x0
// 005134a7: JNZ 0x00513491
//   XREF to: 00513491 (CONDITIONAL_JUMP)
// 005134a9: POP EDI
//   Label: LAB_005134a9
// 005134aa: INC dword ptr [0x02f29270]
//   XREF to: 02f29270 (READ_WRITE)
// 005134b0: POP EDI
// 005134b1: POP ESI
// 005134b2: RET
// 005134b3: PUSH EBX
//   Label: LAB_005134b3
// 005134b4: MOV ECX,0x636e40
//   XREF to: 00636e40 (DATA)
// 005134b9: MOV EBX,0x82b
// 005134be: PUSH 0x636e51
//   XREF to: 00636e51 (DATA)
// 005134c3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005134c9: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005134cf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005134d4: ADD ESP,0x4
// 005134d7: POP EBX
// 005134d8: JMP 0x0051346b
//   XREF to: 0051346b (UNCONDITIONAL_JUMP)
