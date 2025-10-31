// Name: core_mission.cpp_CDemonMission_process_FUN_00524250
// Address: 00524250
// Address Range: [[00524250, 0052439c]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_process_FUN_00524250(CDemonMission * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e359e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00639271
//   TerminatedCString s_Changing_sets_00639285
//   TerminatedCString s_Insert_wipe_here_00639296
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_0310f868
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_00524250(CDemonMission *this_ptr)

{
  CHero *pCVar1;
  CScript *pCVar2;
  CDemonMission *pCVar3;
  int iVar4;
  
  if (*(int *)(this_ptr->field6_0x54c + 0x14) != 0) {
    iVar4 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)(this_ptr->field6_0x54c + 0x14)) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (*(CDemonActor **)(pCVar3->field6_0x54c + 0x18),"..\\core\\mission.cpp",0x46b)
        ;
        iVar4 = iVar4 + 1;
        core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
        pCVar3 = (CDemonMission *)(pCVar3->field0_0x0 + 4);
      } while (iVar4 < *(int *)(this_ptr->field6_0x54c + 0x14));
    }
    this_ptr->field6_0x54c[0x14] = '\0';
    this_ptr->field6_0x54c[0x15] = '\0';
    this_ptr->field6_0x54c[0x16] = '\0';
    this_ptr->field6_0x54c[0x17] = '\0';
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(this_ptr);
  if (-1 < *(int *)(this_ptr->field6_0x54c + 0x10)) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    (pCVar1->base_character).base_actor.location.position.x = *(float *)(this_ptr->field6_0x54c + 4)
    ;
    (pCVar1->base_character).base_actor.location.position.y = *(float *)(this_ptr->field6_0x54c + 8)
    ;
    (pCVar1->base_character).base_actor.location.position.z =
         *(float *)(this_ptr->field6_0x54c + 0xc);
    (pCVar1->base_character).base_actor.location.area_id = *(int *)(this_ptr->field6_0x54c + 0x10);
    if (*(int *)(this_ptr->field6_0x54c + 0x10) != *(int *)this_ptr->field0_0x0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Changing sets...",0,0);
      engine_2d_c_drawText_FUN_00401fd0("Insert wipe here...",0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
      core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
      pCVar2 = g_CScriptPtr;
      pCVar2->padding_0x10[0] = '\x02';
      pCVar2->padding_0x10[1] = '\0';
      pCVar2->padding_0x10[2] = '\0';
      pCVar2->padding_0x10[3] = '\0';
    }
    this_ptr->field6_0x54c[0x10] = -1;
    this_ptr->field6_0x54c[0x11] = -1;
    this_ptr->field6_0x54c[0x12] = -1;
    this_ptr->field6_0x54c[0x13] = -1;
    this_ptr->field6_0x54c[0xc] = '\0';
    this_ptr->field6_0x54c[0xd] = '\0';
    this_ptr->field6_0x54c[0xe] = '\0';
    this_ptr->field6_0x54c[0xf] = '\0';
    *(undefined4 *)(this_ptr->field6_0x54c + 8) = *(undefined4 *)(this_ptr->field6_0x54c + 0xc);
    *(undefined4 *)(this_ptr->field6_0x54c + 4) = *(undefined4 *)(this_ptr->field6_0x54c + 8);
  }
  return;
}


// Assembly code:
// 00524250: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_process_FUN_00524250
// 00524251: PUSH ESI
// 00524252: PUSH EDI
// 00524253: PUSH EBP
// 00524254: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00524258: MOV EDX,dword ptr [EDI + 0x560]
// 0052425e: TEST EDX,EDX
// 00524260: JZ 0x005242ba
//   XREF to: 005242ba (CONDITIONAL_JUMP)
// 00524262: XOR ESI,ESI
// 00524264: TEST EDX,EDX
// 00524266: JLE 0x005242b0
//   XREF to: 005242b0 (CONDITIONAL_JUMP)
// 00524268: MOV EBX,EDI
// 0052426a: PUSH 0x46b
//   Label: LAB_0052426a
// 0052426f: PUSH 0x639271
//   XREF to: 00639271 (DATA)
// 00524274: MOV EBP,dword ptr [EBX + 0x564]
// 0052427a: PUSH EBP
// 0052427b: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00524280: ADD ESP,0xc
// 00524283: MOV EAX,dword ptr [EBX + 0x6f4]
// 00524289: PUSH EAX
// 0052428a: MOV EDX,dword ptr [EBX + 0x564]
// 00524290: PUSH EDX
// 00524291: PUSH EDI
// 00524292: ADD EBX,0x4
// 00524295: INC ESI
// 00524296: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 0052429b: MOV ECX,dword ptr [EDI + 0x560]
// 005242a1: ADD ESP,0xc
// 005242a4: CMP ESI,ECX
// 005242a6: JL 0x0052426a
//   XREF to: 0052426a (CONDITIONAL_JUMP)
// 005242a8: LEA EAX,[EAX]
// 005242ae: MOV EDX,EDX
// 005242b0: MOV dword ptr [EDI + 0x560],0x0
//   Label: LAB_005242b0
// 005242ba: PUSH EDI
//   Label: LAB_005242ba
// 005242bb: CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
//   XREF to: 00524120 (UNCONDITIONAL_CALL)
// 005242c0: MOV EBX,dword ptr [EDI + 0x55c]
// 005242c6: ADD ESP,0x4
// 005242c9: TEST EBX,EBX
// 005242cb: JL 0x0052432d
//   XREF to: 0052432d (CONDITIONAL_JUMP)
// 005242cd: MOV EBX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005242d3: MOV ESI,dword ptr [EBX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005242da: LEA EBX,[EDI + 0x550]
// 005242e0: MOV EAX,dword ptr [EBX]
// 005242e2: MOV dword ptr [ESI + 0x20],EAX
// 005242e5: MOV EAX,dword ptr [EBX + 0x4]
// 005242e8: MOV dword ptr [ESI + 0x24],EAX
// 005242eb: MOV EAX,dword ptr [EBX + 0x8]
// 005242ee: MOV dword ptr [ESI + 0x28],EAX
// 005242f1: MOV EBX,dword ptr [EBX + 0xc]
// 005242f4: MOV dword ptr [ESI + 0x2c],EBX
// 005242f7: MOV EBX,dword ptr [EDI + 0x55c]
// 005242fd: CMP EBX,dword ptr [EDI]
// 005242ff: JNZ 0x00524332
//   XREF to: 00524332 (CONDITIONAL_JUMP)
// 00524301: MOV dword ptr [EDI + 0x55c],0xffffffff
//   Label: LAB_00524301
// 0052430b: MOV dword ptr [EDI + 0x558],0x0
// 00524315: MOV EAX,dword ptr [EDI + 0x558]
// 0052431b: MOV dword ptr [EDI + 0x554],EAX
// 00524321: MOV EAX,dword ptr [EDI + 0x554]
// 00524327: MOV dword ptr [EDI + 0x550],EAX
// 0052432d: POP EBP
//   Label: LAB_0052432d
// 0052432e: POP EDI
// 0052432f: POP ESI
// 00524330: POP EBX
// 00524331: RET
// 00524332: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00524332
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00524337: PUSH 0x0
// 00524339: PUSH 0x0
// 0052433b: PUSH 0x639285
//   XREF to: 00639285 (DATA)
// 00524340: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00524345: ADD ESP,0xc
// 00524348: PUSH 0xb
// 0052434a: PUSH 0x0
// 0052434c: PUSH 0x639296
//   XREF to: 00639296 (DATA)
// 00524351: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00524356: ADD ESP,0xc
// 00524359: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0052435e: MOV EBP,dword ptr [EDI + 0x55c]
// 00524364: PUSH EBP
// 00524365: PUSH EDI
// 00524366: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 0052436b: ADD ESP,0x8
// 0052436e: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00524373: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00524374: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 00524379: ADD ESP,0x4
// 0052437c: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00524382: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00524383: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 00524388: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 0052438e: ADD ESP,0x4
// 00524391: MOV dword ptr [EBX + 0x10],0x2
//   XREF to: 0310f868 (WRITE)
// 00524398: JMP 0x00524301
//   XREF to: 00524301 (UNCONDITIONAL_JUMP)
