// Name: crt_stdio.c_SetupConsoleInputMode_FUN_006059b0
// Address: 006059b0
// Address Range: [[006059b0, 006059d5]]
// Convention: unknown
// Signature: undefined crt_stdio.c_SetupConsoleInputMode_FUN_006059b0()
// Cross-references:
//   crt_stdio.c_FillInputBuffer_FUN_005fe940 (005fe940) at 005fe99e [UNCONDITIONAL_CALL]
// Globals:
//   int g_ConsoleInitializationFlag = 0x0
// Function calls:
//   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
//   crt_stdio.c_WriteConsoleChar_FUN_0060b490

#include "nocturne.h"

int crt_stdio_c_SetupConsoleInputMode_FUN_006059b0(void)

{
  int iVar1;
  int character;
  
  iVar1 = g_ConsoleInitializationFlag;
  character = crt_stdio_c_DrainConsoleInputAndSetup_FUN_0060b3f8();
  if ((character != -1) && (iVar1 == 0)) {
    crt_stdio_c_WriteConsoleChar_FUN_0060b490(character);
  }
  return character;
}


// Assembly code:
// 006059b0: PUSH EBX
//   Label: crt_stdio.c_SetupConsoleInputMode_FUN_006059b0
// 006059b1: PUSH ESI
// 006059b2: MOV ESI,dword ptr [0x00685000]
//   XREF to: 00685000 (READ)
// 006059b8: CALL crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
//   XREF to: 0060b3f8 (UNCONDITIONAL_CALL)
// 006059bd: MOV EBX,EAX
// 006059bf: CMP EAX,-0x1
// 006059c2: JZ 0x006059d1
//   XREF to: 006059d1 (CONDITIONAL_JUMP)
// 006059c4: TEST ESI,ESI
// 006059c6: JNZ 0x006059d1
//   XREF to: 006059d1 (CONDITIONAL_JUMP)
// 006059c8: PUSH EAX
// 006059c9: CALL crt_stdio.c_WriteConsoleChar_FUN_0060b490
//   XREF to: 0060b490 (UNCONDITIONAL_CALL)
// 006059ce: ADD ESP,0x4
// 006059d1: MOV EAX,EBX
//   Label: LAB_006059d1
// 006059d3: POP ESI
// 006059d4: POP EBX
// 006059d5: RET
