// Name: core_gore.cpp_FUN_004edaa0
// Address: 004edaa0
// Address Range: [[004edaa0, 004edaed]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004edaa0()
// Cross-references:
//   core_bodypart.cpp_FUN_0041b1b0 (0041b1b0) at 0041b1dd [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b670 (0042b670) at 0042b749 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b760 (0042b760) at 0042b7f3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b810 (0042b810) at 0042b890 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004edbb0 (004edbb0) at 004edbe0 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5093 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050ec10 (0050ec10) at 0050ecb4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e6ce [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d833d0
//   CBloodParticle[256] DAT_02d833d4
// Function calls:
//   core_gore.cpp_FUN_004eb9a0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004edaa0(undefined1 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_gore_cpp_FUN_004edaa0(void)

{
  int in_stack_00000010;
  
  if (in_stack_00000010 != 2) {
    DAT_02d833d0 = DAT_02d833d0 + 1;
    if (0xff < DAT_02d833d0) {
      DAT_02d833d0 = 0;
    }
    core_gore_cpp_FUN_004eb9a0();
  }
  return;
}


// Assembly code:
// 004edaa0: PUSH EBP
//   Label: core_gore.cpp_FUN_004edaa0
// 004edaa1: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004edaa5: CMP EDX,0x2
// 004edaa8: JZ 0x004edaec
//   XREF to: 004edaec (CONDITIONAL_JUMP)
// 004edaaa: PUSH EDI
// 004edaab: MOV EAX,[0x02d833d0]
//   XREF to: 02d833d0 (READ)
// 004edab0: MOV ECX,dword ptr [0x02d833d0]
//   XREF to: 02d833d0 (READ)
// 004edab6: SHL EAX,0x6
// 004edab9: INC ECX
// 004edaba: ADD EAX,0x2d833d4
//   XREF to: 02d833d4 (DATA)
// 004edabf: MOV dword ptr [0x02d833d0],ECX
//   XREF to: 02d833d0 (WRITE)
// 004edac5: CMP ECX,0x100
// 004edacb: JL 0x004edad7
//   XREF to: 004edad7 (CONDITIONAL_JUMP)
// 004edacd: PUSH ESI
// 004edace: XOR ESI,ESI
// 004edad0: MOV dword ptr [0x02d833d0],ESI
//   XREF to: 02d833d0 (WRITE)
// 004edad6: POP ESI
// 004edad7: PUSH EDX
//   Label: LAB_004edad7
// 004edad8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004edadc: PUSH EDI
// 004edadd: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004edae1: PUSH EBP
// 004edae2: PUSH EAX
// 004edae3: CALL core_gore.cpp_FUN_004eb9a0
//   XREF to: 004eb9a0 (UNCONDITIONAL_CALL)
// 004edae8: ADD ESP,0x10
// 004edaeb: POP EDI
// 004edaec: POP EBP
//   Label: LAB_004edaec
// 004edaed: RET
