// Name: core_script.cpp_RelatedToMainButtonPresses_FUN_00559660
// Address: 00559660
// Address Range: [[00559660, 0055972d]]
// Convention: unknown
// Signature: undefined core_script.cpp_RelatedToMainButtonPresses_FUN_00559660()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e027 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_walk_0064166b
//   TerminatedCString s_backup_00641670
//   TerminatedCString s_run_00641677
//   TerminatedCString s_fire_0064167b
//   TerminatedCString s_useItem_00641680
//   TerminatedCString s_light_00641688
//   TerminatedCString s_draw_0064168e
//   TerminatedCString s_jump_00641693
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_RelatedToMainButtonPresses(undefined4 param_1, undefined4
   param_2) */

int core_script_cpp_RelatedToMainButtonPresses_FUN_00559660(void)

{
  int iVar1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"walk");
  if (iVar1 == 0) {
    return in_stack_00000004;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"backup");
  if (iVar1 == 0) {
    return in_stack_00000004 + 4;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"run");
  if (iVar1 == 0) {
    return in_stack_00000004 + 8;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"fire");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0xc;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"useItem");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x10;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"light");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x14;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"draw");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x18;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,"jump");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x1c;
  }
  return 0;
}


// Assembly code:
// 00559660: PUSH EBX
//   Label: core_script.cpp_RelatedToMainButtonPresses_FUN_00559660
// 00559661: PUSH ESI
// 00559662: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00559666: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0055966a: PUSH 0x64166b
//   XREF to: 0064166b (DATA)
// 0055966f: PUSH ESI
// 00559670: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00559675: ADD ESP,0x8
// 00559678: TEST EAX,EAX
// 0055967a: JNZ 0x00559681
//   XREF to: 00559681 (CONDITIONAL_JUMP)
// 0055967c: MOV EAX,EBX
// 0055967e: POP ESI
// 0055967f: POP EBX
// 00559680: RET
// 00559681: PUSH 0x641670
//   Label: LAB_00559681
//   XREF to: 00641670 (DATA)
// 00559686: PUSH ESI
// 00559687: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0055968c: ADD ESP,0x8
// 0055968f: TEST EAX,EAX
// 00559691: JNZ 0x00559699
//   XREF to: 00559699 (CONDITIONAL_JUMP)
// 00559693: LEA EAX,[EBX + 0x4]
// 00559696: POP ESI
// 00559697: POP EBX
// 00559698: RET
// 00559699: PUSH 0x641677
//   Label: LAB_00559699
//   XREF to: 00641677 (DATA)
// 0055969e: PUSH ESI
// 0055969f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005596a4: ADD ESP,0x8
// 005596a7: TEST EAX,EAX
// 005596a9: JNZ 0x005596b1
//   XREF to: 005596b1 (CONDITIONAL_JUMP)
// 005596ab: LEA EAX,[EBX + 0x8]
// 005596ae: POP ESI
// 005596af: POP EBX
// 005596b0: RET
// 005596b1: PUSH 0x64167b
//   Label: LAB_005596b1
//   XREF to: 0064167b (DATA)
// 005596b6: PUSH ESI
// 005596b7: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005596bc: ADD ESP,0x8
// 005596bf: TEST EAX,EAX
// 005596c1: JNZ 0x005596c9
//   XREF to: 005596c9 (CONDITIONAL_JUMP)
// 005596c3: LEA EAX,[EBX + 0xc]
// 005596c6: POP ESI
// 005596c7: POP EBX
// 005596c8: RET
// 005596c9: PUSH 0x641680
//   Label: LAB_005596c9
//   XREF to: 00641680 (DATA)
// 005596ce: PUSH ESI
// 005596cf: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005596d4: ADD ESP,0x8
// 005596d7: TEST EAX,EAX
// 005596d9: JNZ 0x005596e1
//   XREF to: 005596e1 (CONDITIONAL_JUMP)
// 005596db: LEA EAX,[EBX + 0x10]
// 005596de: POP ESI
// 005596df: POP EBX
// 005596e0: RET
// 005596e1: PUSH 0x641688
//   Label: LAB_005596e1
//   XREF to: 00641688 (DATA)
// 005596e6: PUSH ESI
// 005596e7: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005596ec: ADD ESP,0x8
// 005596ef: TEST EAX,EAX
// 005596f1: JNZ 0x005596f9
//   XREF to: 005596f9 (CONDITIONAL_JUMP)
// 005596f3: LEA EAX,[EBX + 0x14]
// 005596f6: POP ESI
// 005596f7: POP EBX
// 005596f8: RET
// 005596f9: PUSH 0x64168e
//   Label: LAB_005596f9
//   XREF to: 0064168e (DATA)
// 005596fe: PUSH ESI
// 005596ff: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00559704: ADD ESP,0x8
// 00559707: TEST EAX,EAX
// 00559709: JNZ 0x00559711
//   XREF to: 00559711 (CONDITIONAL_JUMP)
// 0055970b: LEA EAX,[EBX + 0x18]
// 0055970e: POP ESI
// 0055970f: POP EBX
// 00559710: RET
// 00559711: PUSH 0x641693
//   Label: LAB_00559711
//   XREF to: 00641693 (DATA)
// 00559716: PUSH ESI
// 00559717: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0055971c: ADD ESP,0x8
// 0055971f: TEST EAX,EAX
// 00559721: JNZ 0x00559729
//   XREF to: 00559729 (CONDITIONAL_JUMP)
// 00559723: LEA EAX,[EBX + 0x1c]
// 00559726: POP ESI
// 00559727: POP EBX
// 00559728: RET
// 00559729: XOR EAX,EAX
//   Label: LAB_00559729
// 0055972b: POP ESI
// 0055972c: POP EBX
// 0055972d: RET
