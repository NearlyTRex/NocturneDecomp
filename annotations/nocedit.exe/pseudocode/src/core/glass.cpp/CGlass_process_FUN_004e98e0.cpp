// Name: core_glass.cpp_CGlass_process_FUN_004e98e0
// Address: 004e98e0
// Address Range: [[004e98e0, 004e9922]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_process_FUN_004e98e0(CGlass * this_ptr)
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_glass.cpp_FUN_004eaef0

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_process_FUN_004e98e0(CGlass *this_ptr)

{
  int iVar1;
  
  if (this_ptr->shattered == 0) {
    iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListPtr,this_ptr->break_event);
    if (iVar1 != 0) {
      core_glass_cpp_FUN_004eaef0();
      return;
    }
  }
  else {
    (this_ptr->base_actor).field17_0x104 = 1;
  }
  return;
}


// Assembly code:
// 004e98e0: PUSH EBX
//   Label: core_glass.cpp_CGlass_process_FUN_004e98e0
// 004e98e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e98e5: CMP dword ptr [EBX + 0x180],0x0
// 004e98ec: JZ 0x004e98fa
//   XREF to: 004e98fa (CONDITIONAL_JUMP)
// 004e98ee: MOV dword ptr [EBX + 0x104],0x1
// 004e98f8: POP EBX
//   Label: LAB_004e98f8
// 004e98f9: RET
// 004e98fa: LEA EAX,[EBX + 0x184]
//   Label: LAB_004e98fa
// 004e9900: PUSH EAX
// 004e9901: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004e9907: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004e9908: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004e990d: ADD ESP,0x8
// 004e9910: TEST EAX,EAX
// 004e9912: JZ 0x004e98f8
//   XREF to: 004e98f8 (CONDITIONAL_JUMP)
// 004e9914: LEA EAX,[EBX + 0x20]
// 004e9917: PUSH EAX
// 004e9918: PUSH EBX
// 004e9919: CALL core_glass.cpp_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 004e991e: ADD ESP,0x8
// 004e9921: POP EBX
// 004e9922: RET
