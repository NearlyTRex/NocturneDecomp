// Name: core_script.cpp_GetDemonActor_FUN_005594e0
// Address: 005594e0
// Address Range: [[005594e0, 0055965d]]
// Convention: unknown
// Signature: undefined core_script.cpp_GetDemonActor_FUN_005594e0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bc6f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 0055ff3e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005627f0 (005627f0) at 0056284e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Must_specify_actor_name_00641566
//   undefined4 s_ust_specify_actor_name_00641567
//   undefined4 s_t_specify_actor_name_00641569
//   TerminatedCString s_Actor_variable_s_not_def_0064157e
//   TerminatedCString s_anon_006415c4
//   TerminatedCString s_Can_t_use_actor_specifie_006415c6
//   TerminatedCString s_Hero_doesn_t_exist_006415f4
//   TerminatedCString s_Actor_s_does_not_exist_0064160b
//   TerminatedCString s_Actor_s_is_of_type_s_thi_00641626
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   undefined4 DAT_02d05310
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c740
//   undefined1 DAT_0310eca0
//   undefined1 DAT_0310eca1
//   undefined1 DAT_0310eca2
//   undefined1 DAT_0310eca3
//   undefined4 DAT_0310f4ac
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_isOfClassHash_FUN_0040c760
//   core_event.cpp_FUN_004b0b80
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_script.cpp_CheckingActorVariableName_FUN_00559220
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_GetDemonActor(undefined4 sActorName, undefined4 param_2,
   char* sExpectedActorType) */

CHero * core_script_cpp_GetDemonActor_FUN_005594e0
                  (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
                  char *param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  CHero *actor_ptr;
  char *pcVar3;
  char *pcVar4;
  
  DAT_0310f4ac = 0;
  if ((param_5 == (char *)0x0) || (*param_5 == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_0310eca0;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return (CHero *)0x0;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return (CHero *)0x0;
  }
  if (*param_5 == '@') {
    iVar2 = core_script_cpp_CheckingActorVariableName_FUN_00559220();
    if (iVar2 == 0) {
      return (CHero *)0x0;
    }
    DAT_0310f4ac = 1;
    actor_ptr = (CHero *)core_event_cpp_FUN_004b0b80();
    if (actor_ptr == (CHero *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Actor variable %s not defined, or doesn't reference an existing actor",param_5);
      return (CHero *)0x0;
    }
  }
  else {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(param_5,"$");
    if (iVar2 == 0) {
      if (g_CNetGameInstance->connection_type != 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Can't use '$' actor specifier in multi-player");
        return (CHero *)0x0;
      }
      actor_ptr = g_HeroActors[g_LocalHeroIndex];
      if (actor_ptr == (CHero *)0x0) {
        DAT_0310f4ac = 1;
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Hero doesn't exist!!?!");
        return (CHero *)0x0;
      }
    }
    else {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      if (actor_ptr == (CHero *)0x0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Actor \"%s\" does not exist.",param_5);
        return (CHero *)0x0;
      }
    }
  }
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c760((CDemonActor *)actor_ptr,param_8);
  if (iVar2 == 0) {
    pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)actor_ptr);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&DAT_0310eca0,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_5,pcVar3,unaff_EBX);
    return (CHero *)0x0;
  }
  return actor_ptr;
}


// Assembly code:
// 005594e0: PUSH EBX
//   Label: core_script.cpp_GetDemonActor_FUN_005594e0
// 005594e1: PUSH ESI
// 005594e2: PUSH EDI
// 005594e3: PUSH EBP
// 005594e4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005594e8: XOR EDX,EDX
// 005594ea: MOV dword ptr [0x0310f4ac],EDX
//   XREF to: 0310f4ac (WRITE)
// 005594f0: TEST EBX,EBX
// 005594f2: JZ 0x00559515
//   XREF to: 00559515 (CONDITIONAL_JUMP)
// 005594f4: MOV AH,byte ptr [EBX]
// 005594f6: TEST AH,AH
// 005594f8: JZ 0x00559515
//   XREF to: 00559515 (CONDITIONAL_JUMP)
// 005594fa: CMP AH,0x40
// 005594fd: JNZ 0x00559597
//   XREF to: 00559597 (CONDITIONAL_JUMP)
// 00559503: PUSH EBX
// 00559504: CALL core_script.cpp_CheckingActorVariableName_FUN_00559220
//   XREF to: 00559220 (UNCONDITIONAL_CALL)
// 00559509: ADD ESP,0x4
// 0055950c: TEST EAX,EAX
// 0055950e: JNZ 0x00559540
//   XREF to: 00559540 (CONDITIONAL_JUMP)
// 00559510: POP EBP
// 00559511: POP EDI
// 00559512: POP ESI
// 00559513: POP EBX
// 00559514: RET
// 00559515: MOV ESI,0x641566
//   Label: LAB_00559515
//   XREF to: 00641566 (DATA)
// 0055951a: MOV EDI,0x310eca0
//   XREF to: 0310eca0 (DATA)
// 0055951f: PUSH EDI
//   XREF to: 0310eca0 (DATA)
// 00559520: MOV AL,byte ptr [ESI]
//   Label: LAB_00559520
//   XREF to: 00641566 (READ)
//   XREF to: 00641568 (READ)
// 00559522: MOV byte ptr [EDI],AL
//   XREF to: 0310eca0 (WRITE)
//   XREF to: 0310eca2 (WRITE)
// 00559524: CMP AL,0x0
// 00559526: JZ 0x00559538
//   XREF to: 00559538 (CONDITIONAL_JUMP)
// 00559528: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00641567 (READ)
//   XREF to: 00641569 (READ)
// 0055952b: ADD ESI,0x2
// 0055952e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0310eca1 (WRITE)
//   XREF to: 0310eca3 (WRITE)
// 00559531: ADD EDI,0x2
// 00559534: CMP AL,0x0
// 00559536: JNZ 0x00559520
//   XREF to: 00559520 (CONDITIONAL_JUMP)
// 00559538: POP EDI
//   Label: LAB_00559538
// 00559539: XOR EAX,EAX
// 0055953b: POP EBP
// 0055953c: POP EDI
// 0055953d: POP ESI
// 0055953e: POP EBX
// 0055953f: RET
// 00559540: PUSH EBX
//   Label: LAB_00559540
// 00559541: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00559546: MOV EBP,0x1
// 0055954b: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 0055954c: MOV dword ptr [0x0310f4ac],EBP
//   XREF to: 0310f4ac (WRITE)
// 00559552: CALL core_event.cpp_FUN_004b0b80
//   XREF to: 004b0b80 (UNCONDITIONAL_CALL)
// 00559557: ADD ESP,0x8
// 0055955a: MOV ESI,EAX
// 0055955c: TEST EAX,EAX
// 0055955e: JZ 0x0055957d
//   XREF to: 0055957d (CONDITIONAL_JUMP)
// 00559560: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00559560
//   XREF to: Stack[0x8] (READ)
// 00559564: PUSH EDX
// 00559565: PUSH ESI
// 00559566: CALL core_actor.cpp_isOfClassHash_FUN_0040c760
//   XREF to: 0040c760 (UNCONDITIONAL_CALL)
//   XREF to: 02f7c740 (PARAM)
// 0055956b: ADD ESP,0x8
// 0055956e: TEST EAX,EAX
// 00559570: JZ 0x00559635
//   XREF to: 00559635 (CONDITIONAL_JUMP)
// 00559576: MOV EAX,ESI
// 00559578: POP EBP
// 00559579: POP EDI
// 0055957a: POP ESI
// 0055957b: POP EBX
// 0055957c: RET
// 0055957d: PUSH EBX
//   Label: LAB_0055957d
// 0055957e: PUSH 0x64157e
//   XREF to: 0064157e (DATA)
// 00559583: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 00559588: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0055958d: ADD ESP,0xc
// 00559590: XOR EAX,EAX
// 00559592: POP EBP
// 00559593: POP EDI
// 00559594: POP ESI
// 00559595: POP EBX
// 00559596: RET
// 00559597: PUSH 0x6415c4
//   Label: LAB_00559597
//   XREF to: 006415c4 (DATA)
// 0055959c: PUSH EBX
// 0055959d: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005595a2: ADD ESP,0x8
// 005595a5: TEST EAX,EAX
// 005595a7: JNZ 0x00559601
//   XREF to: 00559601 (CONDITIONAL_JUMP)
// 005595a9: MOV EAX,[0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 005595ae: CMP dword ptr [EAX],0x0
//   XREF to: 02f7c740 (READ)
// 005595b1: JNZ 0x005595e8
//   XREF to: 005595e8 (CONDITIONAL_JUMP)
// 005595b3: MOV ESI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005595b9: MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005595c0: TEST ESI,ESI
// 005595c2: JNZ 0x00559560
//   XREF to: 00559560 (CONDITIONAL_JUMP)
// 005595c4: PUSH 0x6415f4
//   XREF to: 006415f4 (DATA)
// 005595c9: MOV EDI,0x1
// 005595ce: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 005595d3: MOV dword ptr [0x0310f4ac],EDI
//   XREF to: 0310f4ac (WRITE)
// 005595d9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005595de: ADD ESP,0x8
// 005595e1: XOR EAX,EAX
// 005595e3: POP EBP
// 005595e4: POP EDI
// 005595e5: POP ESI
// 005595e6: POP EBX
// 005595e7: RET
// 005595e8: PUSH 0x6415c6
//   Label: LAB_005595e8
//   XREF to: 006415c6 (DATA)
// 005595ed: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 005595f2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005595f7: ADD ESP,0x8
// 005595fa: XOR EAX,EAX
// 005595fc: POP EBP
// 005595fd: POP EDI
// 005595fe: POP ESI
// 005595ff: POP EBX
// 00559600: RET
// 00559601: PUSH EBX
//   Label: LAB_00559601
// 00559602: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00559608: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 00559609: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0055960e: ADD ESP,0x8
// 00559611: MOV ESI,EAX
// 00559613: TEST EAX,EAX
// 00559615: JNZ 0x00559560
//   XREF to: 00559560 (CONDITIONAL_JUMP)
// 0055961b: PUSH EBX
// 0055961c: PUSH 0x64160b
//   XREF to: 0064160b (DATA)
// 00559621: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 00559626: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0055962b: ADD ESP,0xc
// 0055962e: XOR EAX,EAX
// 00559630: POP EBP
// 00559631: POP EDI
// 00559632: POP ESI
// 00559633: POP EBX
// 00559634: RET
// 00559635: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_00559635
//   XREF to: Stack[0xc] (READ)
// 00559639: PUSH ECX
// 0055963a: PUSH ESI
// 0055963b: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 00559640: ADD ESP,0x4
// 00559643: PUSH EAX
// 00559644: PUSH EBX
// 00559645: PUSH 0x641626
//   XREF to: 00641626 (DATA)
// 0055964a: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 0055964f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00559654: ADD ESP,0x14
// 00559657: XOR EAX,EAX
// 00559659: POP EBP
// 0055965a: POP EDI
// 0055965b: POP ESI
// 0055965c: POP EBX
// 0055965d: RET
