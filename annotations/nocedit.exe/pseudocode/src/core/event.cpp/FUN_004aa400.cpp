// Name: core_event.cpp_FUN_004aa400
// Address: 004aa400
// Address Range: [[004aa400, 004aa52c]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa400()
// Cross-references:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140 (004ae140) at 004af765 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa530 (004aa530) at 004aa5ce [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ad941 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Must_specify_actor_name_0062444c
//   undefined4 s_ust_specify_actor_name_0062444d
//   undefined4 s_t_specify_actor_name_0062444f
//   TerminatedCString s_anon_00624464
//   TerminatedCString s_Can_t_use_actor_specifie_00624466
//   TerminatedCString s_Actor_s_does_not_exist_00624494
//   TerminatedCString s_Actor_s_is_of_type_s_thi_006244af
//   undefined4 DAT_0065d95c
//   CEventList* g_CEventListInstance = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   undefined4 DAT_02d05310
//   undefined1 DAT_02d0a460
//   undefined1 DAT_02d0a461
//   undefined1 DAT_02d0a462
//   undefined1 DAT_02d0a463
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c740
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_isOfClassHash_FUN_0040c760
//   core_event.cpp_FUN_004b0b80
//   core_mission.cpp_CDemonMission_FUN_00524030
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004aa400(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

CHero * core_event_cpp_FUN_004aa400
                  (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
                  char *param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  char cVar1;
  CHero *actor_ptr;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_5 == (char *)0x0) || (*param_5 == '\0')) {
    pcVar3 = "Must specify actor name";
    pcVar4 = &DAT_02d0a460;
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
    actor_ptr = (CHero *)core_event_cpp_FUN_004b0b80();
  }
  else {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(param_5,"$");
    if (iVar2 != 0) {
      actor_ptr = (CHero *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      if (actor_ptr == (CHero *)0x0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d0a460,"Actor \"%s\" does not exist.",param_5);
        return (CHero *)0x0;
      }
      goto LAB_004aa48f;
    }
    if (g_CNetGameInstance->connection_type != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d0a460,"Can't use '$' actor specifier in multi-player");
      return (CHero *)0x0;
    }
    actor_ptr = g_HeroActors[g_LocalHeroIndex];
  }
  if (actor_ptr == (CHero *)0x0) {
    return DAT_0065d95c;
  }
LAB_004aa48f:
  iVar2 = core_actor_cpp_isOfClassHash_FUN_0040c760((CDemonActor *)actor_ptr,param_8);
  if (iVar2 != 0) {
    return actor_ptr;
  }
  if (*param_5 == '@') {
    return DAT_0065d95c;
  }
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)actor_ptr);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&DAT_02d0a460,"Actor \"%s\" is of type %s, this command requires an actor of type %s.",param_5,pcVar3,unaff_EBX);
  return (CHero *)0x0;
}


// Assembly code:
// 004aa400: PUSH EBX
//   Label: core_event.cpp_FUN_004aa400
// 004aa401: PUSH ESI
// 004aa402: PUSH EDI
// 004aa403: PUSH EBP
// 004aa404: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aa408: TEST EBX,EBX
// 004aa40a: JZ 0x004aa437
//   XREF to: 004aa437 (CONDITIONAL_JUMP)
// 004aa40c: MOV AH,byte ptr [EBX]
// 004aa40e: TEST AH,AH
// 004aa410: JZ 0x004aa437
//   XREF to: 004aa437 (CONDITIONAL_JUMP)
// 004aa412: CMP AH,0x40
// 004aa415: JNZ 0x004aa462
//   XREF to: 004aa462 (CONDITIONAL_JUMP)
// 004aa417: PUSH EBX
// 004aa418: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004aa41e: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004aa41f: CALL core_event.cpp_FUN_004b0b80
//   XREF to: 004b0b80 (UNCONDITIONAL_CALL)
// 004aa424: ADD ESP,0x8
// 004aa427: MOV ESI,EAX
// 004aa429: TEST EAX,EAX
// 004aa42b: JNZ 0x004aa48f
//   XREF to: 004aa48f (CONDITIONAL_JUMP)
// 004aa42d: MOV EAX,[0x0065d95c]
//   Label: LAB_004aa42d
//   XREF to: 0065d95c (READ)
// 004aa432: POP EBP
// 004aa433: POP EDI
// 004aa434: POP ESI
// 004aa435: POP EBX
// 004aa436: RET
// 004aa437: MOV ESI,0x62444c
//   Label: LAB_004aa437
//   XREF to: 0062444c (DATA)
// 004aa43c: MOV EDI,0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004aa441: PUSH EDI
//   XREF to: 02d0a460 (DATA)
// 004aa442: MOV AL,byte ptr [ESI]
//   Label: LAB_004aa442
//   XREF to: 0062444c (READ)
//   XREF to: 0062444e (READ)
// 004aa444: MOV byte ptr [EDI],AL
//   XREF to: 02d0a460 (WRITE)
//   XREF to: 02d0a462 (WRITE)
// 004aa446: CMP AL,0x0
// 004aa448: JZ 0x004aa45a
//   XREF to: 004aa45a (CONDITIONAL_JUMP)
// 004aa44a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062444d (READ)
//   XREF to: 0062444f (READ)
// 004aa44d: ADD ESI,0x2
// 004aa450: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d0a461 (WRITE)
//   XREF to: 02d0a463 (WRITE)
// 004aa453: ADD EDI,0x2
// 004aa456: CMP AL,0x0
// 004aa458: JNZ 0x004aa442
//   XREF to: 004aa442 (CONDITIONAL_JUMP)
// 004aa45a: POP EDI
//   Label: LAB_004aa45a
// 004aa45b: XOR EAX,EAX
// 004aa45d: POP EBP
// 004aa45e: POP EDI
// 004aa45f: POP ESI
// 004aa460: POP EBX
// 004aa461: RET
// 004aa462: PUSH 0x624464
//   Label: LAB_004aa462
//   XREF to: 00624464 (DATA)
// 004aa467: PUSH EBX
// 004aa468: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa46d: ADD ESP,0x8
// 004aa470: TEST EAX,EAX
// 004aa472: JNZ 0x004aa4cd
//   XREF to: 004aa4cd (CONDITIONAL_JUMP)
// 004aa474: MOV EAX,[0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004aa479: CMP dword ptr [EAX],0x0
//   XREF to: 02f7c740 (READ)
// 004aa47c: JNZ 0x004aa4b4
//   XREF to: 004aa4b4 (CONDITIONAL_JUMP)
// 004aa47e: MOV ESI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004aa484: MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004aa48b: TEST ESI,ESI
// 004aa48d: JZ 0x004aa42d
//   XREF to: 004aa42d (CONDITIONAL_JUMP)
// 004aa48f: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_004aa48f
//   XREF to: Stack[0x8] (READ)
// 004aa493: PUSH EDI
// 004aa494: PUSH ESI
// 004aa495: CALL core_actor.cpp_isOfClassHash_FUN_0040c760
//   XREF to: 0040c760 (UNCONDITIONAL_CALL)
// 004aa49a: ADD ESP,0x8
// 004aa49d: TEST EAX,EAX
// 004aa49f: JNZ 0x004aa526
//   XREF to: 004aa526 (CONDITIONAL_JUMP)
// 004aa4a5: CMP byte ptr [EBX],0x40
// 004aa4a8: JNZ 0x004aa4fd
//   XREF to: 004aa4fd (CONDITIONAL_JUMP)
// 004aa4aa: MOV EAX,[0x0065d95c]
//   XREF to: 0065d95c (READ)
// 004aa4af: POP EBP
// 004aa4b0: POP EDI
// 004aa4b1: POP ESI
// 004aa4b2: POP EBX
// 004aa4b3: RET
// 004aa4b4: PUSH 0x624466
//   Label: LAB_004aa4b4
//   XREF to: 00624466 (DATA)
// 004aa4b9: PUSH 0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004aa4be: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004aa4c3: ADD ESP,0x8
// 004aa4c6: XOR EAX,EAX
// 004aa4c8: POP EBP
// 004aa4c9: POP EDI
// 004aa4ca: POP ESI
// 004aa4cb: POP EBX
// 004aa4cc: RET
// 004aa4cd: PUSH EBX
//   Label: LAB_004aa4cd
// 004aa4ce: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004aa4d4: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 004aa4d5: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 004aa4da: ADD ESP,0x8
// 004aa4dd: MOV ESI,EAX
// 004aa4df: TEST EAX,EAX
// 004aa4e1: JNZ 0x004aa48f
//   XREF to: 004aa48f (CONDITIONAL_JUMP)
// 004aa4e3: PUSH EBX
// 004aa4e4: PUSH 0x624494
//   XREF to: 00624494 (DATA)
// 004aa4e9: PUSH 0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004aa4ee: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004aa4f3: ADD ESP,0xc
// 004aa4f6: XOR EAX,EAX
// 004aa4f8: POP EBP
// 004aa4f9: POP EDI
// 004aa4fa: POP ESI
// 004aa4fb: POP EBX
// 004aa4fc: RET
// 004aa4fd: MOV EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_004aa4fd
//   XREF to: Stack[0xc] (READ)
// 004aa501: PUSH EBP
// 004aa502: PUSH ESI
// 004aa503: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004aa508: ADD ESP,0x4
// 004aa50b: PUSH EAX
// 004aa50c: PUSH EBX
// 004aa50d: PUSH 0x6244af
//   XREF to: 006244af (DATA)
// 004aa512: PUSH 0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004aa517: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004aa51c: ADD ESP,0x14
// 004aa51f: XOR EAX,EAX
// 004aa521: POP EBP
// 004aa522: POP EDI
// 004aa523: POP ESI
// 004aa524: POP EBX
// 004aa525: RET
// 004aa526: MOV EAX,ESI
//   Label: LAB_004aa526
// 004aa528: POP EBP
// 004aa529: POP EDI
// 004aa52a: POP ESI
// 004aa52b: POP EBX
// 004aa52c: RET
