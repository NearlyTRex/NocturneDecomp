// Name: core_event.cpp_FUN_004b1890
// Address: 004b1890
// Address Range: [[004b1890, 004b18d1]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1890()
// Cross-references:
//   core_event.cpp_FUN_004b18e0 (004b18e0) at 004b18e5 [UNCONDITIONAL_CALL]
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004b1890(undefined4 param_1) */

int core_event_cpp_FUN_004b1890(void)

{
  int iVar1;
  int iVar2;
  int *n1;
  int *in_stack_00000004;
  
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    n1 = in_stack_00000004 + 1;
    do {
      iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                        (g_CEventListPtr,(char *)n1);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      n1 = n1 + 0x19;
    } while (iVar2 < *in_stack_00000004);
  }
  return -1;
}


// Assembly code:
// 004b1890: PUSH EBX
//   Label: core_event.cpp_FUN_004b1890
// 004b1891: PUSH ESI
// 004b1892: PUSH EDI
// 004b1893: PUSH EBP
// 004b1894: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b1898: MOV EDX,dword ptr [EDI]
// 004b189a: XOR EBX,EBX
// 004b189c: TEST EDX,EDX
// 004b189e: JLE 0x004b18c1
//   XREF to: 004b18c1 (CONDITIONAL_JUMP)
// 004b18a0: LEA ESI,[EDI + 0x4]
// 004b18a3: PUSH ESI
//   Label: LAB_004b18a3
// 004b18a4: MOV EBP,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004b18aa: PUSH EBP
//   XREF to: 02d05310 (DATA)
// 004b18ab: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004b18b0: ADD ESP,0x8
// 004b18b3: TEST EAX,EAX
// 004b18b5: JNZ 0x004b18cb
//   XREF to: 004b18cb (CONDITIONAL_JUMP)
// 004b18b7: INC EBX
// 004b18b8: MOV ECX,dword ptr [EDI]
// 004b18ba: ADD ESI,0x64
// 004b18bd: CMP EBX,ECX
// 004b18bf: JL 0x004b18a3
//   XREF to: 004b18a3 (CONDITIONAL_JUMP)
// 004b18c1: MOV EAX,0xffffffff
//   Label: LAB_004b18c1
// 004b18c6: POP EBP
// 004b18c7: POP EDI
// 004b18c8: POP ESI
// 004b18c9: POP EBX
// 004b18ca: RET
// 004b18cb: MOV EAX,EBX
//   Label: LAB_004b18cb
// 004b18cd: POP EBP
// 004b18ce: POP EDI
// 004b18cf: POP ESI
// 004b18d0: POP EBX
// 004b18d1: RET
