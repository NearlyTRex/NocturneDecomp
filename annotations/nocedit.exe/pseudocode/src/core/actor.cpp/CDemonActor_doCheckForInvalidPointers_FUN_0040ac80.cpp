// Name: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
// Address: 0040ac80
// Address Range: [[0040ac80, 0040aed8]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
// Cross-references:
//   core_actor.cpp_CDemonActor_allowBulletHoles_FUN_004098a0 (004098a0) at 004098af [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 (00409ec0) at 00409ed5 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_canPickup_FUN_00409000 (00409000) at 0040900f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50 (00408d50) at 00408d60 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10 (00408d10) at 00408d20 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0 (00408cc0) at 00408cd6 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 (00408db0) at 00408dca [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_deleteActor_FUN_00408820 (00408820) at 00408836 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_drop_FUN_00409080 (00409080) at 0040908f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40 (00409f40) at 00409f4f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0 (0040abc0) at 0040abd5 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getActorType_FUN_00408b50 (00408b50) at 00408b60 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0 (0040a0f0) at 0040a109 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880 (00409880) at 0040988f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getCarrier_FUN_00409060 (00409060) at 0040906f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getGroundType_FUN_00408d90 (00408d90) at 00408d9f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030 (0040a030) at 0040a044 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getPathMap_FUN_004090a0 (004090a0) at 004090af [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840 (00409840) at 00409854 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getTargetPoints_FUN_004098e0 (004098e0) at 004098ef [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_hasCollision_FUN_00408ca0 (00408ca0) at 00408caf [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_isActiveTarget_FUN_00409f20 (00409f20) at 00409f2f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_onDropped_FUN_00409040 (00409040) at 0040904f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_onPickup_FUN_0040a010 (0040a010) at 0040a01f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_pickup_FUN_00409020 (00409020) at 0040902f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60 (00409f60) at 00409f70 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a230 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_process_FUN_00408a80 (00408a80) at 00408a8f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_renderBackground_FUN_00408ae0 (00408ae0) at 00408aef [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_renderOpaque_FUN_00408aa0 (00408aa0) at 00408aaf [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90 (00409b90) at 00409bac [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_renderTransparent_FUN_00408ac0 (00408ac0) at 00408acf [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0 (00409fb0) at 00409fca [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0 (00408bb0) at 00408bc0 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70 (00409e70) at 00409e80 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_startInteraction_FUN_0040a090 (0040a090) at 0040a09f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_stopUsing_FUN_0040a0d0 (0040a0d0) at 0040a0df [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_updateCollisionData_FUN_004098c0 (004098c0) at 004098cf [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_updateInteraction_FUN_0040a0b0 (0040a0b0) at 0040a0bf [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bf90 (0042bf90) at 0042bfab [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_setupItems_FUN_004ff780 (004ff780) at 004ff7aa [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523cf0 (00523cf0) at 00523da6 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 (00524120) at 0052414b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 (00523e60) at 00523e96 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 (005240a0) at 005240b5 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 0052427b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0 (00523be0) at 00523c02 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeActor_FUN_00523af0 (00523af0) at 00523b16 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056b841 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dfc0c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613ac2
//   TerminatedCString s_NULL_actor_pointer_detec_00613ad4
//   TerminatedCString s_core_actor_cpp_00613afc
//   TerminatedCString s_Invalid_actor_pointer_08_00613b0e
//   TerminatedCString s_core_actor_cpp_00613b41
//   TerminatedCString s_Dangling_corrupt_actor_p_00613b53
//   TerminatedCString s_core_actor_cpp_00613bb1
//   TerminatedCString s_Dangling_corrupt_actor_p_00613bc3
//   TerminatedCString s_core_actor_cpp_00613c1e
//   TerminatedCString s_Dangling_corrupt_actor_p_00613c30
//   float g_MaxValidPosition = 99999
//   char[256] g_CharacterClassificationTable
//   undefined4 DAT_0078a123
//   char[50] g_ActorDebugBuffer
//   undefined4 CHAR_ARRAY_00821fc4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
          (CDemonActor *this_ptr,char *context_file,int context_line)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  CDemonActor *pCVar6;
  CDemonActor *pCVar7;
  char *pcVar8;
  byte bVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  int char_index;
  CDemonActor *current_ptr;
  
  bVar9 = 0;
  if (this_ptr == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x70a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("NULL actor pointer detected, %s line %d");
  }
  if (((CDemonActor *)0xfeffffff < this_ptr) || ((int)this_ptr < 0x1000)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x70e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid actor pointer %08X detected at %s, line %d");
  }
  if ((undefined *)this_ptr->field6_0x68 != &DAT_0078a123) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x718;
    crt_memory_c_memset_FUN_005fde40(g_ActorDebugBuffer,0,0x32);
    pCVar6 = this_ptr;
    pcVar8 = g_ActorDebugBuffer;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pCVar6->actor_name;
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pcVar8 = pCVar6->actor_name[0];
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\ncreateStatus = %d",context_file,context_line,this_ptr,
               g_ActorDebugBuffer);
  }
  fVar1 = (this_ptr->location).position.y;
  fVar2 = (this_ptr->location).position.x;
  fVar3 = (this_ptr->location).position.z;
  if (g_MaxValidPosition < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    dVar12 = (double)(this_ptr->location).position.y;
    dVar11 = (double)(this_ptr->location).position.x;
    uVar10 = 0x32;
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x723;
    crt_memory_c_memset_FUN_005fde40(g_ActorDebugBuffer,0,0x32);
    pCVar6 = this_ptr;
    pcVar8 = g_ActorDebugBuffer;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pCVar6->actor_name;
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pcVar8 = pCVar6->actor_name[0];
      pCVar6 = (CDemonActor *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s\npos = %g,%g,%g",context_file,context_line,this_ptr,
               g_ActorDebugBuffer,uVar10,dVar11,dVar12);
  }
  char_index = 0;
  cVar4 = this_ptr->actor_name[0];
  pCVar6 = this_ptr;
  while (cVar4 != '\0') {
    if ((0x1c < (uint)char_index) ||
       ((g_CharacterClassificationTable[(byte)(pCVar6->actor_name[0] + 1)] & 8U) == 0)) {
      char_index = (int)((ulonglong)(double)(this_ptr->location).position.z >> 0x20);
      dVar12 = (double)(this_ptr->location).position.y;
      uVar10 = (undefined4)((ulonglong)(double)(this_ptr->location).position.x >> 0x20);
      g_CurrentFilename = "..\\core\\actor.cpp";
      g_CurrentLineNumber = 0x731;
      crt_memory_c_memset_FUN_005fde40(g_ActorDebugBuffer,0,0x32);
      if (this_ptr != (CDemonActor *)0x0) {
        pCVar7 = this_ptr;
        pcVar8 = g_ActorDebugBuffer;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pCVar7->actor_name;
          pCVar7 = (CDemonActor *)((int)pCVar7 + (uint)bVar9 * -8 + 4);
          pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        }
        for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pcVar8 = pCVar7->actor_name[0];
          pCVar7 = (CDemonActor *)((int)pCVar7 + (uint)bVar9 * -2 + 1);
          pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
        }
      }
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Dangling/corrupt actor pointer detected at %s line %d:\nptr = %08X\nname = %s",context_file,context_line,this_ptr,
                 g_ActorDebugBuffer,uVar10,dVar12);
    }
    char_index = char_index + 1;
    pCVar6 = (CDemonActor *)(pCVar6->actor_name + 1);
    cVar4 = pCVar6->actor_name[0];
  }
  return;
}


// Assembly code:
// 0040ac80: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
// 0040ac81: PUSH ESI
// 0040ac82: PUSH EDI
// 0040ac83: PUSH EBP
// 0040ac84: MOV EBP,ESP
// 0040ac86: SUB ESP,0x8
// 0040ac89: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040ac8c: TEST EBX,EBX
// 0040ac8e: JZ 0x0040ae7e
//   XREF to: 0040ae7e (CONDITIONAL_JUMP)
// 0040ac94: CMP EBX,0xff000000
//   Label: LAB_0040ac94
// 0040ac9a: JC 0x0040aeae
//   XREF to: 0040aeae (CONDITIONAL_JUMP)
// 0040aca0: MOV ECX,dword ptr [EBP + 0x1c]
//   Label: LAB_0040aca0
//   XREF to: Stack[0xc] (READ)
// 0040aca3: PUSH ECX
// 0040aca4: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040aca7: PUSH ESI
// 0040aca8: PUSH EBX
// 0040aca9: MOV EAX,0x613afc
//   XREF to: 00613afc (PARAM)
// 0040acae: MOV EDX,0x70e
// 0040acb3: PUSH 0x613b0e
//   XREF to: 00613b0e (DATA)
// 0040acb8: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0040acbd: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0040acc3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040acc8: ADD ESP,0x10
// 0040accb: MOV EDI,dword ptr [EBX + 0x68]
//   Label: LAB_0040accb
// 0040acce: CMP EDI,0x78a123
//   XREF to: 0078a123 (DATA)
// 0040acd4: JZ 0x0040ad30
//   XREF to: 0040ad30 (CONDITIONAL_JUMP)
// 0040acd6: PUSH EDI
// 0040acd7: PUSH 0x32
// 0040acd9: MOV EAX,0x613b41
//   XREF to: 00613b41 (PARAM)
// 0040acde: PUSH 0x0
// 0040ace0: MOV EDX,0x718
// 0040ace5: MOV ESI,EBX
// 0040ace7: PUSH 0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040acec: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0040acf1: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0040acf7: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0040acfc: ADD ESP,0xc
// 0040acff: MOV EDI,0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ad04: MOV ECX,0x31
// 0040ad09: PUSH EDI
//   XREF to: 00821fc0 (DATA)
// 0040ad0a: MOV EAX,ECX
// 0040ad0c: SHR ECX,0x2
// 0040ad0f: MOVSD.REP ES:EDI,ESI
//   XREF to: 00821fc0 (WRITE)
//   XREF to: 00821fc4 (WRITE)
// 0040ad11: MOV CL,AL
// 0040ad13: AND CL,0x3
// 0040ad16: MOVSB.REP ES:EDI,ESI
//   XREF to: 00821fc0 (WRITE)
//   XREF to: 00821fc4 (WRITE)
// 0040ad18: POP EDI
// 0040ad19: PUSH EDI
//   XREF to: 00821fc0 (DATA)
// 0040ad1a: PUSH EBX
// 0040ad1b: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040ad1e: PUSH ESI
// 0040ad1f: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040ad22: PUSH EDI
// 0040ad23: PUSH 0x613b53
//   XREF to: 00613b53 (DATA)
// 0040ad28: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040ad2d: ADD ESP,0x18
// 0040ad30: LEA EAX,[EBX + 0x20]
//   Label: LAB_0040ad30
// 0040ad33: FLD float ptr [EAX + 0x4]
// 0040ad36: FMUL ST0
// 0040ad38: FLD float ptr [EAX]
// 0040ad3a: FMUL ST0
// 0040ad3c: FADDP
// 0040ad3e: FLD float ptr [EAX + 0x8]
// 0040ad41: FMUL ST0
// 0040ad43: FADDP
// 0040ad45: FSQRT
// 0040ad47: FCOMP float ptr [0x00613c7c]
//   XREF to: 00613c7c (READ)
// 0040ad4d: FNSTSW AX
// 0040ad4f: SAHF
// 0040ad50: JBE 0x0040adc6
//   XREF to: 0040adc6 (CONDITIONAL_JUMP)
// 0040ad52: SUB ESP,0x8
// 0040ad55: FLD float ptr [EBX + 0x28]
// 0040ad58: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040ad5b: SUB ESP,0x8
// 0040ad5e: FLD float ptr [EBX + 0x24]
// 0040ad61: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0040ad64: SUB ESP,0x8
// 0040ad67: FLD float ptr [EBX + 0x20]
// 0040ad6a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0040ad6d: PUSH 0x32
// 0040ad6f: MOV EAX,0x613bb1
//   XREF to: 00613bb1 (PARAM)
// 0040ad74: PUSH 0x0
// 0040ad76: MOV EDX,0x723
// 0040ad7b: MOV EDI,0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ad80: PUSH 0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ad85: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0040ad8a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0040ad90: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0040ad95: ADD ESP,0xc
// 0040ad98: MOV ESI,EBX
// 0040ad9a: MOV ECX,0x31
// 0040ad9f: PUSH EDI
//   XREF to: 00821fc0 (DATA)
// 0040ada0: MOV EAX,ECX
// 0040ada2: SHR ECX,0x2
// 0040ada5: MOVSD.REP ES:EDI,ESI
//   XREF to: 00821fc0 (WRITE)
//   XREF to: 00821fc4 (WRITE)
// 0040ada7: MOV CL,AL
// 0040ada9: AND CL,0x3
// 0040adac: MOVSB.REP ES:EDI,ESI
//   XREF to: 00821fc0 (WRITE)
//   XREF to: 00821fc4 (WRITE)
// 0040adae: POP EDI
// 0040adaf: PUSH EDI
//   XREF to: 00821fc0 (DATA)
// 0040adb0: PUSH EBX
// 0040adb1: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040adb4: PUSH ECX
// 0040adb5: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040adb8: PUSH ESI
// 0040adb9: PUSH 0x613bc3
//   XREF to: 00613bc3 (DATA)
// 0040adbe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040adc3: ADD ESP,0x2c
// 0040adc6: MOV dword ptr [EBP + -0x4],EBX
//   Label: LAB_0040adc6
//   XREF to: Stack[-0x14] (WRITE)
// 0040adc9: XOR EDI,EDI
// 0040adcb: MOV AH,byte ptr [EBX]
// 0040adcd: MOV dword ptr [EBP + -0x8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0040add0: TEST AH,AH
// 0040add2: JZ 0x0040ae77
//   XREF to: 0040ae77 (CONDITIONAL_JUMP)
// 0040add8: CMP dword ptr [EBP + -0x8],0x1d
//   Label: LAB_0040add8
//   XREF to: Stack[-0x18] (READ)
// 0040addc: JC 0x0040aebf
//   XREF to: 0040aebf (CONDITIONAL_JUMP)
// 0040ade2: SUB ESP,0x8
//   Label: LAB_0040ade2
// 0040ade5: FLD float ptr [EBX + 0x28]
// 0040ade8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040adeb: SUB ESP,0x8
// 0040adee: FLD float ptr [EBX + 0x24]
// 0040adf1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0040adf4: SUB ESP,0x8
// 0040adf7: FLD float ptr [EBX + 0x20]
// 0040adfa: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0040adfd: PUSH 0x32
// 0040adff: PUSH 0x0
// 0040ae01: MOV ESI,0x613c1e
//   XREF to: 00613c1e (DATA)
// 0040ae06: MOV EDI,0x731
// 0040ae0b: PUSH 0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ae10: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0040ae16: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0040ae1c: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0040ae21: ADD ESP,0xc
// 0040ae24: TEST EBX,EBX
// 0040ae26: JZ 0x0040ae44
//   XREF to: 0040ae44 (CONDITIONAL_JUMP)
// 0040ae28: MOV ECX,0x31
// 0040ae2d: MOV EDI,0x821fc0
//   XREF to: 00821fc0 (DATA)
// 0040ae32: MOV ESI,EBX
// 0040ae34: PUSH EDI
//   XREF to: 00821fc0 (DATA)
// 0040ae35: MOV EAX,ECX
// 0040ae37: SHR ECX,0x2
// 0040ae3a: MOVSD.REP ES:EDI,ESI
//   XREF to: 00821fc0 (WRITE)
//   XREF to: 00821fc4 (WRITE)
// 0040ae3c: MOV CL,AL
// 0040ae3e: AND CL,0x3
// 0040ae41: MOVSB.REP ES:EDI,ESI
//   XREF to: 00821fc0 (WRITE)
//   XREF to: 00821fc4 (WRITE)
// 0040ae43: POP EDI
// 0040ae44: PUSH 0x821fc0
//   Label: LAB_0040ae44
//   XREF to: 00821fc0 (DATA)
// 0040ae49: PUSH EBX
// 0040ae4a: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040ae4d: PUSH EAX
// 0040ae4e: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040ae51: PUSH EDX
// 0040ae52: PUSH 0x613c30
//   XREF to: 00613c30 (DATA)
// 0040ae57: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040ae5c: ADD ESP,0x2c
// 0040ae5f: MOV EDX,dword ptr [EBP + -0x8]
//   Label: LAB_0040ae5f
//   XREF to: Stack[-0x18] (READ)
// 0040ae62: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0040ae65: INC EDX
// 0040ae66: INC EAX
// 0040ae67: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0040ae6a: MOV DL,byte ptr [EAX]
// 0040ae6c: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040ae6f: TEST DL,DL
// 0040ae71: JNZ 0x0040add8
//   XREF to: 0040add8 (CONDITIONAL_JUMP)
// 0040ae77: MOV ESP,EBP
//   Label: LAB_0040ae77
// 0040ae79: POP EBP
// 0040ae7a: POP EDI
// 0040ae7b: POP ESI
// 0040ae7c: POP EBX
// 0040ae7d: RET
// 0040ae7e: MOV ESI,dword ptr [EBP + 0x1c]
//   Label: LAB_0040ae7e
//   XREF to: Stack[0xc] (READ)
// 0040ae81: PUSH ESI
// 0040ae82: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040ae85: PUSH EDI
// 0040ae86: MOV EDX,0x613ac2
//   XREF to: 00613ac2 (PARAM)
// 0040ae8b: MOV ECX,0x70a
// 0040ae90: PUSH 0x613ad4
//   XREF to: 00613ad4 (DATA)
// 0040ae95: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040ae9b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040aea1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040aea6: ADD ESP,0xc
// 0040aea9: JMP 0x0040ac94
//   XREF to: 0040ac94 (UNCONDITIONAL_JUMP)
// 0040aeae: CMP EBX,0x1000
//   Label: LAB_0040aeae
// 0040aeb4: JL 0x0040aca0
//   XREF to: 0040aca0 (CONDITIONAL_JUMP)
// 0040aeba: JMP 0x0040accb
//   XREF to: 0040accb (UNCONDITIONAL_JUMP)
// 0040aebf: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0040aebf
//   XREF to: Stack[-0x14] (READ)
// 0040aec2: MOV AL,byte ptr [EAX]
// 0040aec4: INC AL
// 0040aec6: AND EAX,0xff
// 0040aecb: TEST byte ptr [EAX + 0x6849c4],0x8
//   XREF to: 006849c4 (DATA)
// 0040aed2: JNZ 0x0040ae5f
//   XREF to: 0040ae5f (CONDITIONAL_JUMP)
// 0040aed4: JMP 0x0040ade2
//   XREF to: 0040ade2 (UNCONDITIONAL_JUMP)
