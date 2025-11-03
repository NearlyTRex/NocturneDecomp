// Name: core_event.cpp_FUN_004b18e0
// Address: 004b18e0
// Address Range: [[004b18e0, 004b1924]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b18e0()
// Cross-references:
//   core_hero.cpp_FUN_004f2d70 (004f2d70) at 004f2e63 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2f50 (004f2f50) at 004f30c3 [UNCONDITIONAL_CALL]
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   CEventList g_CEventListInstance
// Function calls:
//   core_event.cpp_CEventList_FUN_004aabe0
//   core_event.cpp_FUN_004b1890

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004b18e0(void)

{
  int iVar1;
  
  iVar1 = core_event_cpp_FUN_004b1890();
  if (iVar1 < 0) {
    return 0;
  }
  core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
  return 1;
}


// Assembly code:
// 004b18e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004b18e0
//   XREF to: Stack[0x4] (READ)
// 004b18e4: PUSH EDX
// 004b18e5: CALL core_event.cpp_FUN_004b1890
//   XREF to: 004b1890 (UNCONDITIONAL_CALL)
// 004b18ea: ADD ESP,0x4
// 004b18ed: TEST EAX,EAX
// 004b18ef: JGE 0x004b18f4
//   XREF to: 004b18f4 (CONDITIONAL_JUMP)
// 004b18f1: XOR EAX,EAX
// 004b18f3: RET
// 004b18f4: MOV EDX,EAX
//   Label: LAB_004b18f4
// 004b18f6: SHL EAX,0x2
// 004b18f9: SUB EAX,EDX
// 004b18fb: SHL EAX,0x3
// 004b18fe: ADD EAX,EDX
// 004b1900: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004b1904: SHL EAX,0x2
// 004b1907: ADD EDX,0x1f8
// 004b190d: ADD EAX,EDX
// 004b190f: PUSH EAX
// 004b1910: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004b1916: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004b1917: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004b191c: MOV EAX,0x1
// 004b1921: ADD ESP,0x8
// 004b1924: RET
