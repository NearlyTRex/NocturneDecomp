// Name: core_inv.cpp_CInventory_load_FUN_004ff400
// Address: 004ff400
// Address Range: [[004ff400, 004ff735]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_load_FUN_004ff400(CInventory * this_ptr)
// Cross-references:
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f2840 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0063094a
//   TerminatedCString s_d_0063094e
//   TerminatedCString s_d_00630952
//   TerminatedCString s_f_00630956
//   TerminatedCString s_s_0063095a
//   TerminatedCString s_core_inv_cpp_00630967
//   TerminatedCString s_CInventory_load_Can_t_fi_00630977
//   undefined4 DAT_0067ce48
//   undefined4 DAT_0067ce4c
//   undefined4 DAT_0067ceb0
//   undefined4 DAT_0067ceb4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f3374c
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_0040b050
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_inv.cpp_CInventory_clear_FUN_004fd0e0
//   core_inv.cpp_CInventory_initialize_FUN_004fd190
//   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory *this_ptr)

{
  char cVar1;
  uint extraout_EAX;
  CDemonActor *pCVar2;
  CWeapon *pCVar3;
  int iVar4;
  FILE *pFVar5;
  CInventory *pCVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  CDemonActor *pCVar11;
  byte bVar12;
  CInventory *in_stack_00000008;
  FILE *in_stack_00000010;
  int in_stack_00000020;
  int in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000034;
  CInventory *in_stack_00000038;
  FILE *in_stack_0000003c;
  char acStack_b0 [4];
  undefined4 auStack_ac [24];
  char acStack_4c [60];
  
  bVar12 = 0;
  core_inv_cpp_CInventory_clear_FUN_004fd0e0(this_ptr);
  core_inv_cpp_CInventory_initialize_FUN_004fd190(in_stack_00000008);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe2c,0xff,in_stack_00000010);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe30,0xff,in_stack_00000010);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe38,0xff,in_stack_00000010);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe40,0xff,in_stack_00000010);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  if (0 < *(int *)(in_stack_00000028 + 0x32c)) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe48,0xff,in_stack_0000002c);
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000002c,"%f\n");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe50,0xff,in_stack_00000034);
  iVar7 = 0;
  pFVar5 = in_stack_00000034;
  if (0 < (int)in_stack_00000034->_link) {
    do {
      puVar8 = &DAT_0067ce48;
      puVar10 = auStack_ac;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      puVar8 = &DAT_0067ceb0;
      pcVar9 = acStack_4c + 4;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
      }
      crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)in_stack_00000038," %s \"%[^\"]\"\n");
      if (*(int *)g_CDemonMissionPtr->field2_0xc == 0) {
        pcVar9 = acStack_4c;
        pCVar2 = core_actor_cpp_createActorByName_FUN_0040c430(acStack_b0);
        pCVar11 = pCVar2;
        do {
          cVar1 = *pcVar9;
          pCVar11->actor_name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pCVar11->actor_name[1] = cVar1;
          pCVar11 = (CDemonActor *)(pCVar11->actor_name + 2);
        } while (cVar1 != '\0');
        pFVar5->_flag = (uint)pCVar2;
      }
      else {
        core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(g_CDemonMissionPtr);
        pFVar5->_flag = extraout_EAX;
      }
      iVar7 = iVar7 + 1;
      pFVar5 = (FILE *)&pFVar5->_cnt;
    } while (iVar7 < (int)in_stack_00000034->_link);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe54,0xff,(FILE *)in_stack_00000038);
  iVar7 = 0;
  pCVar6 = in_stack_00000038;
  if (0 < in_stack_00000038->item_count) {
    do {
      core_actor_cpp_CDemonActor_FUN_0040b050(pCVar6->items[0]);
      iVar7 = iVar7 + 1;
      pCVar6 = (CInventory *)&pCVar6->owner;
    } while (iVar7 < in_stack_00000038->item_count);
  }
  if (1 < in_stack_00000038->save_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe58,0xff,in_stack_0000003c);
  }
  iVar7 = *(int *)g_CDemonMissionPtr->field2_0xc;
  in_stack_00000038->selected_weapon = (CWeapon *)0x0;
  in_stack_00000038->preserve_items = iVar7;
  if (-1 < in_stack_00000020) {
    pCVar3 = (CWeapon *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000038->items[in_stack_00000020],g_CWeaponClassInfo.name_hash);
    in_stack_00000038->selected_weapon = pCVar3;
    if (in_stack_00000038->selected_weapon == (CWeapon *)0x0) {
      g_CurrentFilename = "..\\core\\inv.cpp";
      g_CurrentLineNumber = 0x54b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(in_stack_00000038);
  return;
}


// Assembly code:
// 004ff400: PUSH EBX
//   Label: core_inv.cpp_CInventory_load_FUN_004ff400
// 004ff401: PUSH ESI
// 004ff402: PUSH EDI
// 004ff403: PUSH EBP
// 004ff404: SUB ESP,0x1cc
// 004ff40a: MOV EDX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff411: PUSH EDX
// 004ff412: CALL core_inv.cpp_CInventory_clear_FUN_004fd0e0
//   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)
// 004ff417: ADD ESP,0x4
// 004ff41a: MOV ECX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff421: PUSH ECX
// 004ff422: CALL core_inv.cpp_CInventory_initialize_FUN_004fd190
//   XREF to: 004fd190 (UNCONDITIONAL_CALL)
// 004ff427: ADD ESP,0x4
// 004ff42a: MOV EBX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x8] (READ)
// 004ff431: PUSH EBX
// 004ff432: PUSH 0xff
// 004ff437: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff43b: PUSH EAX
// 004ff43c: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff441: ADD ESP,0xc
// 004ff444: PUSH EBX
// 004ff445: PUSH 0xff
// 004ff44a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff44e: PUSH EAX
// 004ff44f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff454: ADD ESP,0xc
// 004ff457: MOV EAX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff45e: ADD EAX,0x32c
// 004ff463: PUSH EAX
// 004ff464: PUSH 0x63094a
//   XREF to: 0063094a (DATA)
// 004ff469: PUSH EBX
// 004ff46a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ff46f: ADD ESP,0xc
// 004ff472: PUSH EBX
// 004ff473: PUSH 0xff
// 004ff478: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff47c: PUSH EAX
// 004ff47d: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff482: ADD ESP,0xc
// 004ff485: MOV EAX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff48c: ADD EAX,0x8
// 004ff48f: PUSH EAX
// 004ff490: PUSH 0x63094e
//   XREF to: 0063094e (DATA)
// 004ff495: PUSH EBX
// 004ff496: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ff49b: ADD ESP,0xc
// 004ff49e: PUSH EBX
// 004ff49f: PUSH 0xff
// 004ff4a4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff4a8: PUSH EAX
// 004ff4a9: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff4ae: ADD ESP,0xc
// 004ff4b1: LEA EAX,[ESP + 0x1c8]
//   XREF to: Stack[-0x14] (DATA)
// 004ff4b8: PUSH EAX
// 004ff4b9: PUSH 0x630952
//   XREF to: 00630952 (DATA)
// 004ff4be: PUSH EBX
// 004ff4bf: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ff4c4: ADD ESP,0xc
// 004ff4c7: MOV EAX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff4ce: CMP dword ptr [EAX + 0x32c],0x1
// 004ff4d5: JGE 0x004ff668
//   XREF to: 004ff668 (CONDITIONAL_JUMP)
// 004ff4db: MOV EAX,dword ptr [ESP + 0x1e4]
//   Label: LAB_004ff4db
//   XREF to: Stack[0x8] (READ)
// 004ff4e2: PUSH EAX
// 004ff4e3: PUSH 0xff
// 004ff4e8: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff4ec: PUSH EAX
// 004ff4ed: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff4f2: ADD ESP,0xc
// 004ff4f5: MOV EAX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff4fc: MOV EDX,dword ptr [EAX + 0x8]
// 004ff4ff: XOR EBP,EBP
// 004ff501: TEST EDX,EDX
// 004ff503: JLE 0x004ff591
//   XREF to: 004ff591 (CONDITIONAL_JUMP)
// 004ff509: MOV EBX,EAX
// 004ff50b: MOV ECX,0x19
//   Label: LAB_004ff50b
// 004ff510: LEA EDI,[ESP + 0x100]
//   XREF to: Stack[-0xdc] (DATA)
// 004ff517: LEA EAX,[ESP + 0x164]
//   XREF to: Stack[-0x78] (DATA)
// 004ff51e: MOV ESI,0x67ce48
//   XREF to: 0067ce48 (DATA)
// 004ff523: PUSH EAX
// 004ff524: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0xdc] (DATA)
// 004ff52b: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067ce48 (READ)
//   XREF to: 0067ce4c (READ)
// 004ff52d: PUSH EAX
// 004ff52e: MOV ECX,0x19
// 004ff533: LEA EDI,[ESP + 0x16c]
//   XREF to: Stack[-0x78] (DATA)
// 004ff53a: PUSH 0x63095a
//   XREF to: 0063095a (DATA)
// 004ff53f: MOV EAX,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[0x8] (READ)
// 004ff546: MOV ESI,0x67ceb0
//   XREF to: 0067ceb0 (DATA)
// 004ff54b: PUSH EAX
// 004ff54c: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067ceb0 (READ)
//   XREF to: 0067ceb4 (READ)
// 004ff54e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ff553: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004ff559: MOV EDX,dword ptr [ESI + 0xc]
//   XREF to: 02f3374c (READ)
// 004ff55c: ADD ESP,0x10
// 004ff55f: TEST EDX,EDX
// 004ff561: JZ 0x004ff69d
//   XREF to: 004ff69d (CONDITIONAL_JUMP)
// 004ff567: LEA EAX,[ESP + 0x164]
//   XREF to: Stack[-0x78] (DATA)
// 004ff56e: PUSH EAX
// 004ff56f: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004ff570: CALL core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
//   XREF to: 00523520 (UNCONDITIONAL_CALL)
// 004ff575: ADD ESP,0x8
// 004ff578: MOV dword ptr [EBX + 0xc],EAX
// 004ff57b: MOV EAX,dword ptr [ESP + 0x1e0]
//   Label: LAB_004ff57b
//   XREF to: Stack[0x4] (READ)
// 004ff582: INC EBP
// 004ff583: MOV ECX,dword ptr [EAX + 0x8]
// 004ff586: ADD EBX,0x4
// 004ff589: CMP EBP,ECX
// 004ff58b: JL 0x004ff50b
//   XREF to: 004ff50b (CONDITIONAL_JUMP)
// 004ff591: MOV EBX,dword ptr [ESP + 0x1e4]
//   Label: LAB_004ff591
//   XREF to: Stack[0x8] (READ)
// 004ff598: PUSH EBX
// 004ff599: PUSH 0xff
// 004ff59e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff5a2: PUSH EAX
// 004ff5a3: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff5a8: ADD ESP,0xc
// 004ff5ab: MOV EAX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff5b2: MOV EDI,dword ptr [EAX + 0x8]
// 004ff5b5: XOR ESI,ESI
// 004ff5b7: TEST EDI,EDI
// 004ff5b9: JLE 0x004ff5f0
//   XREF to: 004ff5f0 (CONDITIONAL_JUMP)
// 004ff5bb: MOV EBX,EAX
// 004ff5bd: MOV ECX,dword ptr [ESP + 0x1e4]
//   Label: LAB_004ff5bd
//   XREF to: Stack[0x8] (READ)
// 004ff5c4: PUSH ECX
// 004ff5c5: MOV EDI,dword ptr [EBX + 0xc]
// 004ff5c8: PUSH EDI
// 004ff5c9: CALL core_actor.cpp_CDemonActor_FUN_0040b050
//   XREF to: 0040b050 (UNCONDITIONAL_CALL)
// 004ff5ce: ADD ESP,0x8
// 004ff5d1: MOV EAX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff5d8: INC ESI
// 004ff5d9: MOV EBP,dword ptr [EAX + 0x8]
// 004ff5dc: ADD EBX,0x4
// 004ff5df: CMP ESI,EBP
// 004ff5e1: JL 0x004ff5bd
//   XREF to: 004ff5bd (CONDITIONAL_JUMP)
// 004ff5e3: LEA EAX,[EAX]
// 004ff5e9: LEA EDX,[EDX]
// 004ff5ef: NOP
// 004ff5f0: MOV EAX,dword ptr [ESP + 0x1e0]
//   Label: LAB_004ff5f0
//   XREF to: Stack[0x4] (READ)
// 004ff5f7: CMP dword ptr [EAX + 0x32c],0x2
// 004ff5fe: JL 0x004ff61a
//   XREF to: 004ff61a (CONDITIONAL_JUMP)
// 004ff600: MOV ECX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x8] (READ)
// 004ff607: PUSH ECX
// 004ff608: PUSH 0xff
// 004ff60d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff611: PUSH EAX
// 004ff612: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff617: ADD ESP,0xc
// 004ff61a: MOV EAX,[0x0067d550]
//   Label: LAB_004ff61a
//   XREF to: 0067d550 (READ)
// 004ff61f: MOV EDX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff626: MOV EAX,dword ptr [EAX + 0xc]
//   XREF to: 02f3374c (READ)
// 004ff629: MOV dword ptr [EDX + 0x330],0x0
// 004ff633: MOV dword ptr [EDX + 0x450],EAX
// 004ff639: MOV EBX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x14] (READ)
// 004ff640: TEST EBX,EBX
// 004ff642: JGE 0x004ff6da
//   XREF to: 004ff6da (CONDITIONAL_JUMP)
// 004ff648: PUSH 0x3e7
//   Label: LAB_004ff648
// 004ff64d: MOV ESI,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[0x4] (READ)
// 004ff654: PUSH ESI
// 004ff655: CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
//   XREF to: 004ffe10 (UNCONDITIONAL_CALL)
// 004ff65a: ADD ESP,0x8
// 004ff65d: ADD ESP,0x1cc
// 004ff663: POP EBP
// 004ff664: POP EDI
// 004ff665: POP ESI
// 004ff666: POP EBX
// 004ff667: RET
// 004ff668: MOV ESI,dword ptr [ESP + 0x1e4]
//   Label: LAB_004ff668
//   XREF to: Stack[0x8] (READ)
// 004ff66f: PUSH ESI
// 004ff670: PUSH 0xff
// 004ff675: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 004ff679: PUSH EAX
// 004ff67a: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ff67f: ADD ESP,0xc
// 004ff682: MOV EDI,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[0x4] (READ)
// 004ff689: PUSH EDI
// 004ff68a: PUSH 0x630956
//   XREF to: 00630956 (DATA)
// 004ff68f: PUSH ESI
// 004ff690: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ff695: ADD ESP,0xc
// 004ff698: JMP 0x004ff4db
//   XREF to: 004ff4db (UNCONDITIONAL_JUMP)
// 004ff69d: LEA EAX,[ESP + 0x100]
//   Label: LAB_004ff69d
//   XREF to: Stack[-0xdc] (DATA)
// 004ff6a4: PUSH EAX
// 004ff6a5: LEA ESI,[ESP + 0x168]
//   XREF to: Stack[-0x78] (DATA)
// 004ff6ac: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004ff6b1: ADD ESP,0x4
// 004ff6b4: MOV EDI,EAX
// 004ff6b6: MOV EDX,EAX
// 004ff6b8: PUSH EDI
// 004ff6b9: MOV AL,byte ptr [ESI]
//   Label: LAB_004ff6b9
//   XREF to: Stack[-0x78] (DATA)
// 004ff6bb: MOV byte ptr [EDI],AL
// 004ff6bd: CMP AL,0x0
// 004ff6bf: JZ 0x004ff6d1
//   XREF to: 004ff6d1 (CONDITIONAL_JUMP)
// 004ff6c1: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x77] (READ)
// 004ff6c4: ADD ESI,0x2
// 004ff6c7: MOV byte ptr [EDI + 0x1],AL
// 004ff6ca: ADD EDI,0x2
// 004ff6cd: CMP AL,0x0
// 004ff6cf: JNZ 0x004ff6b9
//   XREF to: 004ff6b9 (CONDITIONAL_JUMP)
// 004ff6d1: POP EDI
//   Label: LAB_004ff6d1
// 004ff6d2: MOV dword ptr [EBX + 0xc],EDX
// 004ff6d5: JMP 0x004ff57b
//   XREF to: 004ff57b (UNCONDITIONAL_JUMP)
// 004ff6da: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_004ff6da
// 004ff6e1: MOV ESI,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004ff6e7: ADD EAX,EDX
// 004ff6e9: PUSH ESI
// 004ff6ea: MOV EBP,dword ptr [EAX + 0xc]
// 004ff6ed: PUSH EBP
// 004ff6ee: MOV EDI,EDX
// 004ff6f0: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ff6f5: MOV EDX,EDI
// 004ff6f7: MOV dword ptr [EDX + 0x330],EAX
// 004ff6fd: MOV EDX,dword ptr [EDI + 0x330]
// 004ff703: ADD ESP,0x8
// 004ff706: TEST EDX,EDX
// 004ff708: JNZ 0x004ff648
//   XREF to: 004ff648 (CONDITIONAL_JUMP)
// 004ff70e: MOV ECX,0x630967
//   XREF to: 00630967 (PARAM)
// 004ff713: MOV EBX,0x54b
// 004ff718: PUSH 0x630977
//   XREF to: 00630977 (DATA)
// 004ff71d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004ff723: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004ff729: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ff72e: ADD ESP,0x4
// 004ff731: JMP 0x004ff648
//   XREF to: 004ff648 (UNCONDITIONAL_JUMP)
