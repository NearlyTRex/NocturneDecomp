// Name: core_script.cpp_GetReferencedActor_FUN_00560760
// Address: 00560760
// Address Range: [[00560760, 005607df]]
// Convention: unknown
// Signature: undefined core_script.cpp_GetReferencedActor_FUN_00560760()
// Cross-references:
//   core_script.cpp_CScript_loadState_FUN_00560820 (00560820) at 005609ec [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_006433dd
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   TerminatedCString s_none_00680d58
//   undefined4 DAT_00680d60
//   undefined4 DAT_00680d64
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00524030
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: void core_script.cpp_GetReferencedActor(FILE* param_1, CDemonActor** param_2) */

void core_script_cpp_GetReferencedActor_FUN_00560760(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar4;
  FILE *in_stack_00000004;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined1 *puStack_cc;
  undefined1 auStack_c8 [192];
  
  puVar4 = &DAT_00680d60;
  puVar1 = (undefined4 *)&stack0xffffff30;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000004,"\"%[^\"]\"\n",&stack0xffffff30);
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0((char *)&puStack_cc,"(none)");
  puStack_cc = auStack_c8;
  if (iVar3 == 0) {
    *in_stack_00000010 = 0;
    return;
  }
  pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
  *in_stack_00000014 = pcVar2;
  return;
}


// Assembly code:
// 00560760: PUSH ESI
//   Label: core_script.cpp_GetReferencedActor_FUN_00560760
// 00560761: PUSH EDI
// 00560762: SUB ESP,0xc8
// 00560768: MOV EAX,ESP
// 0056076a: PUSH EAX
// 0056076b: MOV ECX,0x32
// 00560770: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0xd0] (DATA)
// 00560774: PUSH 0x6433dd
//   XREF to: 006433dd (DATA)
// 00560779: MOV EDX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 00560780: MOV ESI,0x680d60
//   XREF to: 00680d60 (DATA)
// 00560785: PUSH EDX
// 00560786: MOVSD.REP ES:EDI,ESI
//   XREF to: 00680d60 (READ)
//   XREF to: 00680d64 (READ)
// 00560788: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056078d: ADD ESP,0xc
// 00560790: PUSH 0x680d58
//   XREF to: 00680d58 (DATA)
// 00560795: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd0] (DATA)
// 00560799: PUSH EAX
// 0056079a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0056079f: ADD ESP,0x8
// 005607a2: TEST EAX,EAX
// 005607a4: JNZ 0x005607bc
//   XREF to: 005607bc (CONDITIONAL_JUMP)
// 005607a6: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x8] (READ)
// 005607ad: MOV dword ptr [EAX],0x0
// 005607b3: ADD ESP,0xc8
// 005607b9: POP EDI
// 005607ba: POP ESI
// 005607bb: RET
// 005607bc: MOV EAX,ESP
//   Label: LAB_005607bc
// 005607be: PUSH EAX
// 005607bf: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005607c5: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 005607c6: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 005607cb: ADD ESP,0x8
// 005607ce: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x8] (READ)
// 005607d5: MOV dword ptr [EDX],EAX
// 005607d7: ADD ESP,0xc8
// 005607dd: POP EDI
// 005607de: POP ESI
// 005607df: RET
