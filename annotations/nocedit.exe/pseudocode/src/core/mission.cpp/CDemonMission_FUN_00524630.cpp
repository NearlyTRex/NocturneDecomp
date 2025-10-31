// Name: core_mission.cpp_CDemonMission_FUN_00524630
// Address: 00524630
// Address Range: [[00524630, 00524657]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00524630(CDemonMission * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c330 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_02f35f10
//   undefined1 DAT_02f35f11
//   undefined1 DAT_02f35f12
//   undefined1 DAT_02f35f13

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00524630(CDemonMission *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_00000008;
  
  pcVar2 = &DAT_02f35f10;
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00524630: PUSH ESI
//   Label: core_mission.cpp_CDemonMission_FUN_00524630
// 00524631: PUSH EDI
// 00524632: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00524636: MOV EDI,0x2f35f10
//   XREF to: 02f35f10 (DATA)
// 0052463b: PUSH EDI
//   XREF to: 02f35f10 (DATA)
// 0052463c: MOV AL,byte ptr [ESI]
//   Label: LAB_0052463c
// 0052463e: MOV byte ptr [EDI],AL
//   XREF to: 02f35f10 (WRITE)
//   XREF to: 02f35f12 (WRITE)
// 00524640: CMP AL,0x0
// 00524642: JZ 0x00524654
//   XREF to: 00524654 (CONDITIONAL_JUMP)
// 00524644: MOV AL,byte ptr [ESI + 0x1]
// 00524647: ADD ESI,0x2
// 0052464a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f35f11 (WRITE)
//   XREF to: 02f35f13 (WRITE)
// 0052464d: ADD EDI,0x2
// 00524650: CMP AL,0x0
// 00524652: JNZ 0x0052463c
//   XREF to: 0052463c (CONDITIONAL_JUMP)
// 00524654: POP EDI
//   Label: LAB_00524654
// 00524655: POP EDI
// 00524656: POP ESI
// 00524657: RET
