// Name: core_mission.cpp_FUN_00524660
// Address: 00524660
// Address Range: [[00524660, 005246fb]]
// Convention: __cdecl
// Signature: void core_mission.cpp_FUN_00524660(void)
// Cross-references:
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 (00524700) at 0052472d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bf11 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0063933e
//   TerminatedCString s_s_d_00639341
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00524030
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_strnicmp_FUN_005ff070

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_00524660(void)

{
  char cVar1;
  CDemonActor *str1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonMission *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  int local_14;
  
  iVar5 = -1;
  uVar4 = 0xffffffff;
  pcVar3 = in_stack_0000000c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  for (str1 = in_stack_00000004->first_actor; str1 != (CDemonActor *)0x0; str1 = str1->next_actor) {
    iVar2 = crt_string_c_strnicmp_FUN_005ff070(str1->actor_name,in_stack_0000000c,~uVar4 - 1);
    if (((iVar2 == 0) &&
        (iVar2 = crt_stdio_c_sscanf_FUN_0060013c
                           (str1->actor_name + (~uVar4 - 1),"%d",&local_14), iVar2 == 1)) &&
       (iVar5 < local_14)) {
      iVar5 = local_14;
    }
  }
  do {
    crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_00000008,"%s%d");
    pcVar3 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
  } while (pcVar3 != (char *)0x0);
  return;
}


// Assembly code:
// 00524660: PUSH EBX
//   Label: core_mission.cpp_FUN_00524660
// 00524661: PUSH ESI
// 00524662: PUSH EDI
// 00524663: PUSH EBP
// 00524664: SUB ESP,0x4
// 00524667: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052466b: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0052466f: MOV EDI,EBP
// 00524671: MOV ESI,0xffffffff
// 00524676: SUB ECX,ECX
// 00524678: DEC ECX
// 00524679: XOR EAX,EAX
// 0052467b: SCASB.REPNE ES:EDI
// 0052467d: NOT ECX
// 0052467f: DEC ECX
// 00524680: MOV EBX,dword ptr [EBX + 0x548]
// 00524686: MOV EDI,ECX
// 00524688: TEST EBX,EBX
// 0052468a: JZ 0x005246a5
//   XREF to: 005246a5 (CONDITIONAL_JUMP)
// 0052468c: PUSH EDI
//   Label: LAB_0052468c
// 0052468d: PUSH EBP
// 0052468e: PUSH EBX
// 0052468f: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00524694: ADD ESP,0xc
// 00524697: TEST EAX,EAX
// 00524699: JZ 0x005246d8
//   XREF to: 005246d8 (CONDITIONAL_JUMP)
// 0052469b: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0052469b
// 005246a1: TEST EBX,EBX
// 005246a3: JNZ 0x0052468c
//   XREF to: 0052468c (CONDITIONAL_JUMP)
// 005246a5: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_005246a5
//   XREF to: Stack[0x8] (READ)
// 005246a9: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005246ad: INC ESI
//   Label: LAB_005246ad
// 005246ae: PUSH ESI
// 005246af: PUSH EBP
// 005246b0: PUSH 0x639341
//   XREF to: 00639341 (DATA)
// 005246b5: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005246b9: PUSH ECX
// 005246ba: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005246bf: ADD ESP,0x10
// 005246c2: PUSH EBX
// 005246c3: PUSH EDI
// 005246c4: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 005246c9: ADD ESP,0x8
// 005246cc: TEST EAX,EAX
// 005246ce: JNZ 0x005246ad
//   XREF to: 005246ad (CONDITIONAL_JUMP)
// 005246d0: ADD ESP,0x4
// 005246d3: POP EBP
// 005246d4: POP EDI
// 005246d5: POP ESI
// 005246d6: POP EBX
// 005246d7: RET
// 005246d8: MOV EAX,ESP
//   Label: LAB_005246d8
// 005246da: PUSH EAX
// 005246db: PUSH 0x63933e
//   XREF to: 0063933e (DATA)
// 005246e0: LEA EAX,[EBX + EDI*0x1]
// 005246e3: PUSH EAX
// 005246e4: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005246e9: ADD ESP,0xc
// 005246ec: CMP EAX,0x1
// 005246ef: JNZ 0x0052469b
//   XREF to: 0052469b (CONDITIONAL_JUMP)
// 005246f1: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005246f4: CMP ESI,EDX
// 005246f6: JGE 0x0052469b
//   XREF to: 0052469b (CONDITIONAL_JUMP)
// 005246f8: MOV ESI,EDX
// 005246fa: JMP 0x0052469b
//   XREF to: 0052469b (UNCONDITIONAL_JUMP)
