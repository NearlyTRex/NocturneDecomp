// Name: core_event.cpp_FUN_004b0f90
// Address: 004b0f90
// Address Range: [[004b0f90, 004b0fb9]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b0f90()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004aae6b [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004ae2aa [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567080 (00567080) at 005670f7 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567310 (00567310) at 00567384 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004b0f90(void)

{
  int in_stack_00000004;
  
  if ((((g_CharacterClassificationTable[(byte)((char)in_stack_00000004 + 1)] & 0xe0U) == 0) &&
      (in_stack_00000004 != 0x5f)) && (in_stack_00000004 != 0x2d)) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 004b0f90: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_FUN_004b0f90
//   XREF to: Stack[0x4] (READ)
// 004b0f94: MOV AL,DL
// 004b0f96: INC AL
// 004b0f98: AND EAX,0xff
// 004b0f9d: TEST byte ptr [EAX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 004b0fa4: JNZ 0x004b0fb4
//   XREF to: 004b0fb4 (CONDITIONAL_JUMP)
// 004b0fa6: CMP EDX,0x5f
// 004b0fa9: JZ 0x004b0fb4
//   XREF to: 004b0fb4 (CONDITIONAL_JUMP)
// 004b0fab: CMP EDX,0x2d
// 004b0fae: JNZ 0x004b0858
//   XREF to: 004b0858 (CONDITIONAL_JUMP)
// 004b0fb4: MOV EAX,0x1
//   Label: LAB_004b0fb4
// 004b0fb9: RET
