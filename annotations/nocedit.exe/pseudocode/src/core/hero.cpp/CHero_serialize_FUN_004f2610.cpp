// Name: core_hero.cpp_CHero_serialize_FUN_004f2610
// Address: 004f2610
// Address Range: [[004f2610, 004f2869]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_serialize_FUN_00413a70 (00413a70) at 00413a76 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_load_FUN_00440490 (00440490) at 00440495 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_load_FUN_004d6090 (004d6090) at 004d6096 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_CHaystack_load_FUN_004f1b50 (004f1b50) at 004f1b55 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_CIcePick_load_FUN_004f9590 (004f9590) at 004f9595 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_load_FUN_00529880 (00529880) at 00529886 [UNCONDITIONAL_CALL]
//   core_scat.cpp_CSCat_load_FUN_00557db0 (00557db0) at 00557db5 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_serialize_FUN_005c2fe0 (005c2fe0) at 005c2fe6 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSVetlana_serialize_FUN_005d9bb0 (005d9bb0) at 005d9bb5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_motion_state_0062eaad
//   TerminatedCString s_partStatus_0062eaba
//   TerminatedCString s_grabbedBy_0062eac5
//   TerminatedCString s_hitPoints_0062eacf
//   TerminatedCString s_motion_state_0062ead9
//   TerminatedCString s_partStatus_0062eae6
//   TerminatedCString s_grabbedBy_0062eaf1
//   TerminatedCString s_controlType_0062eafb
//   TerminatedCString s_objectToPickUp_0062eb07
//   TerminatedCString s_doorToOpen_0062eb16
//   TerminatedCString s_leverToPull_0062eb21
//   TerminatedCString s_ladderToClimb_0062eb2d
//   TerminatedCString s_pushedObject_0062eb3b
//   TerminatedCString s_keys_0062eb48
//   TerminatedCString s_keyNameList_d_0062eb4d
//   TerminatedCString s_AITask_0062eb5d
//   TerminatedCString s_isWearingGasMask_0062eb64
//   int g_CHeroPlaceholderClassVersion = 0xc
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializePartStatus_FUN_0040bae0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0
//   core_inv.cpp_CInventory_load_FUN_004ff400
//   core_inv.cpp_CInventory_save_FUN_004ff210
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_serialize_FUN_004f2610(CHero *this_ptr)

{
  CDeformableModelInstance *motion;
  CHero *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char acStack_64 [4];
  char acStack_60 [88];
  
  pCVar1 = this_ptr;
  motion = &(this_ptr->base_character).model;
  if (g_CHeroPlaceholderClassVersion < 4) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)this_ptr);
    if (1 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeMotionState_FUN_0040b9f0(motion,"motion state");
    }
    if (2 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializePartStatus_FUN_0040bae0
                (&(pCVar1->base_character).model,"partStatus");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)&(pCVar1->base_character).grabbed_by,"grabbedBy");
      core_actor_cpp_serializeFloat_FUN_0040b770
                (&(pCVar1->base_character).hit_points,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_CCharacter_serialize_FUN_004283a0(&this_ptr->base_character);
    core_actor_cpp_serializeMotionState_FUN_0040b9f0(motion,"motion state");
    core_actor_cpp_serializePartStatus_FUN_0040bae0(motion,"partStatus");
    if (g_CHeroPlaceholderClassVersion < 8) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)&(pCVar1->base_character).grabbed_by,"grabbedBy");
      (pCVar1->base_character).grabbed_type = 0;
    }
    if (4 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&pCVar1->control_type,"controlType");
    }
    if (6 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(pCVar1->field6_0x1fb9c + 4),"objectToPickUp");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)pCVar1->field6_0x1fb9c,"doorToOpen");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(pCVar1->field6_0x1fb9c + 0xc),"leverToPull");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(pCVar1->field6_0x1fb9c + 0x10),"ladderToClimb");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(pCVar1->field6_0x1fb9c + 8),"pushedObject");
    }
    if (g_CHeroPlaceholderClassVersion == 10) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&this_ptr,"keys");
    }
    if ((7 < g_CHeroPlaceholderClassVersion) && (g_CHeroPlaceholderClassVersion < 0xb)) {
      iVar2 = 0;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_60,"keyNameList[%d]");
        iVar2 = iVar2 + 1;
        core_actor_cpp_serializeString_FUN_0040b5c0((char **)&stack0xffffff38,acStack_64);
      } while (iVar2 < 0x20);
    }
    if (8 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&pCVar1->ai_task,"AITask");
    }
    if (0xb < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                (&pCVar1->is_wearing_gas_mask,"isWearingGasMask");
    }
    if (5 < g_CHeroPlaceholderClassVersion) {
      if (g_ActorReadingMode != 1) {
        core_inv_cpp_CInventory_save_FUN_004ff210(&pCVar1->inventory,g_ActorDataFile);
        return;
      }
      core_inv_cpp_CInventory_load_FUN_004ff400(&pCVar1->inventory);
      return;
    }
  }
  return;
}


// Assembly code:
// 004f2610: PUSH EBX
//   Label: core_hero.cpp_CHero_serialize_FUN_004f2610
// 004f2611: PUSH ESI
// 004f2612: SUB ESP,0xcc
// 004f2618: MOV ESI,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x4] (READ)
// 004f261f: MOV EDX,dword ptr [0x0067cc1c]
//   XREF to: 0067cc1c (READ)
// 004f2625: LEA EBX,[ESI + 0x158]
// 004f262b: CMP EDX,0x4
// 004f262e: JGE 0x004f26a2
//   XREF to: 004f26a2 (CONDITIONAL_JUMP)
// 004f2630: PUSH ESI
// 004f2631: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004f2636: MOV ECX,dword ptr [0x0067cc1c]
//   XREF to: 0067cc1c (READ)
// 004f263c: ADD ESP,0x4
// 004f263f: CMP ECX,0x2
// 004f2642: JL 0x004f2652
//   XREF to: 004f2652 (CONDITIONAL_JUMP)
// 004f2644: PUSH 0x62eaad
//   XREF to: 0062eaad (DATA)
// 004f2649: PUSH EBX
// 004f264a: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004f264f: ADD ESP,0x8
// 004f2652: CMP dword ptr [0x0067cc1c],0x3
//   Label: LAB_004f2652
//   XREF to: 0067cc1c (READ)
// 004f2659: JGE 0x004f2664
//   XREF to: 004f2664 (CONDITIONAL_JUMP)
// 004f265b: ADD ESP,0xcc
//   Label: LAB_004f265b
// 004f2661: POP ESI
// 004f2662: POP EBX
// 004f2663: RET
// 004f2664: PUSH 0x62eaba
//   Label: LAB_004f2664
//   XREF to: 0062eaba (DATA)
// 004f2669: LEA EAX,[ESI + 0x158]
// 004f266f: PUSH EAX
// 004f2670: CALL core_actor.cpp_serializePartStatus_FUN_0040bae0
//   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
// 004f2675: ADD ESP,0x8
// 004f2678: PUSH 0x62eac5
//   XREF to: 0062eac5 (DATA)
// 004f267d: LEA EAX,[ESI + 0x2598]
// 004f2683: PUSH EAX
// 004f2684: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f2689: ADD ESP,0x8
// 004f268c: PUSH 0x62eacf
//   XREF to: 0062eacf (DATA)
// 004f2691: ADD ESI,0x243c
// 004f2697: PUSH ESI
// 004f2698: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004f269d: ADD ESP,0x8
// 004f26a0: JMP 0x004f265b
//   XREF to: 004f265b (UNCONDITIONAL_JUMP)
// 004f26a2: PUSH ESI
//   Label: LAB_004f26a2
// 004f26a3: CALL core_charactr.cpp_CCharacter_serialize_FUN_004283a0
//   XREF to: 004283a0 (UNCONDITIONAL_CALL)
// 004f26a8: ADD ESP,0x4
// 004f26ab: PUSH 0x62ead9
//   XREF to: 0062ead9 (DATA)
// 004f26b0: PUSH EBX
// 004f26b1: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004f26b6: ADD ESP,0x8
// 004f26b9: PUSH 0x62eae6
//   XREF to: 0062eae6 (DATA)
// 004f26be: PUSH EBX
// 004f26bf: CALL core_actor.cpp_serializePartStatus_FUN_0040bae0
//   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
// 004f26c4: MOV ECX,dword ptr [0x0067cc1c]
//   XREF to: 0067cc1c (READ)
// 004f26ca: ADD ESP,0x8
// 004f26cd: CMP ECX,0x8
// 004f26d0: JGE 0x004f26f0
//   XREF to: 004f26f0 (CONDITIONAL_JUMP)
// 004f26d2: PUSH 0x62eaf1
//   XREF to: 0062eaf1 (DATA)
// 004f26d7: LEA EAX,[ESI + 0x2598]
// 004f26dd: PUSH EAX
// 004f26de: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f26e3: ADD ESP,0x8
// 004f26e6: MOV dword ptr [ESI + 0x259c],0x0
// 004f26f0: CMP dword ptr [0x0067cc1c],0x5
//   Label: LAB_004f26f0
//   XREF to: 0067cc1c (READ)
// 004f26f7: JL 0x004f270d
//   XREF to: 004f270d (CONDITIONAL_JUMP)
// 004f26f9: PUSH 0x62eafb
//   XREF to: 0062eafb (DATA)
// 004f26fe: LEA EAX,[ESI + 0xbe28]
// 004f2704: PUSH EAX
// 004f2705: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f270a: ADD ESP,0x8
// 004f270d: CMP dword ptr [0x0067cc1c],0x7
//   Label: LAB_004f270d
//   XREF to: 0067cc1c (READ)
// 004f2714: JL 0x004f277a
//   XREF to: 004f277a (CONDITIONAL_JUMP)
// 004f2716: PUSH 0x62eb07
//   XREF to: 0062eb07 (DATA)
// 004f271b: LEA EAX,[ESI + 0x1fba0]
// 004f2721: PUSH EAX
// 004f2722: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f2727: ADD ESP,0x8
// 004f272a: PUSH 0x62eb16
//   XREF to: 0062eb16 (DATA)
// 004f272f: LEA EAX,[ESI + 0x1fb9c]
// 004f2735: PUSH EAX
// 004f2736: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f273b: ADD ESP,0x8
// 004f273e: PUSH 0x62eb21
//   XREF to: 0062eb21 (DATA)
// 004f2743: LEA EAX,[ESI + 0x1fba8]
// 004f2749: PUSH EAX
// 004f274a: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f274f: ADD ESP,0x8
// 004f2752: PUSH 0x62eb2d
//   XREF to: 0062eb2d (DATA)
// 004f2757: LEA EAX,[ESI + 0x1fbac]
// 004f275d: PUSH EAX
// 004f275e: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f2763: ADD ESP,0x8
// 004f2766: PUSH 0x62eb3b
//   XREF to: 0062eb3b (DATA)
// 004f276b: LEA EAX,[ESI + 0x1fba4]
// 004f2771: PUSH EAX
// 004f2772: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f2777: ADD ESP,0x8
// 004f277a: CMP dword ptr [0x0067cc1c],0xa
//   Label: LAB_004f277a
//   XREF to: 0067cc1c (READ)
// 004f2781: JNZ 0x004f2798
//   XREF to: 004f2798 (CONDITIONAL_JUMP)
// 004f2783: PUSH 0x62eb48
//   XREF to: 0062eb48 (DATA)
// 004f2788: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0xc] (DATA)
// 004f278f: PUSH EAX
// 004f2790: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f2795: ADD ESP,0x8
// 004f2798: MOV EAX,[0x0067cc1c]
//   Label: LAB_004f2798
//   XREF to: 0067cc1c (READ)
// 004f279d: CMP EAX,0x8
// 004f27a0: JL 0x004f27e0
//   XREF to: 004f27e0 (CONDITIONAL_JUMP)
// 004f27a2: CMP EAX,0xb
// 004f27a5: JGE 0x004f27e0
//   XREF to: 004f27e0 (CONDITIONAL_JUMP)
// 004f27a7: XOR EBX,EBX
// 004f27a9: PUSH EBX
//   Label: LAB_004f27a9
// 004f27aa: PUSH 0x62eb4d
//   XREF to: 0062eb4d (DATA)
// 004f27af: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 004f27b3: PUSH EAX
// 004f27b4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004f27b9: ADD ESP,0xc
// 004f27bc: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x70] (DATA)
// 004f27c0: PUSH EAX
// 004f27c1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd4] (DATA)
// 004f27c5: PUSH EAX
// 004f27c6: INC EBX
// 004f27c7: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f27cc: ADD ESP,0x8
// 004f27cf: CMP EBX,0x20
// 004f27d2: JL 0x004f27a9
//   XREF to: 004f27a9 (CONDITIONAL_JUMP)
// 004f27d4: LEA EAX,[EAX]
//   XREF to: Stack[-0xd4] (DATA)
// 004f27da: LEA EDX,[EDX]
// 004f27e0: CMP dword ptr [0x0067cc1c],0x9
//   Label: LAB_004f27e0
//   XREF to: 0067cc1c (READ)
// 004f27e7: JL 0x004f27fd
//   XREF to: 004f27fd (CONDITIONAL_JUMP)
// 004f27e9: PUSH 0x62eb5d
//   XREF to: 0062eb5d (DATA)
// 004f27ee: LEA EAX,[ESI + 0x1fbd0]
// 004f27f4: PUSH EAX
// 004f27f5: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f27fa: ADD ESP,0x8
// 004f27fd: CMP dword ptr [0x0067cc1c],0xc
//   Label: LAB_004f27fd
//   XREF to: 0067cc1c (READ)
// 004f2804: JL 0x004f281a
//   XREF to: 004f281a (CONDITIONAL_JUMP)
// 004f2806: PUSH 0x62eb64
//   XREF to: 0062eb64 (DATA)
// 004f280b: LEA EAX,[ESI + 0x1fb98]
// 004f2811: PUSH EAX
// 004f2812: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f2817: ADD ESP,0x8
// 004f281a: CMP dword ptr [0x0067cc1c],0x6
//   Label: LAB_004f281a
//   XREF to: 0067cc1c (READ)
// 004f2821: JL 0x004f265b
//   XREF to: 004f265b (CONDITIONAL_JUMP)
// 004f2827: MOV EDX,dword ptr [0x00822038]
//   XREF to: 00822038 (READ)
// 004f282d: LEA EAX,[ESI + 0x1f738]
// 004f2833: CMP EDX,0x1
// 004f2836: JNZ 0x004f2851
//   XREF to: 004f2851 (CONDITIONAL_JUMP)
// 004f2838: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 004f283e: PUSH EBX
// 004f283f: PUSH EAX
// 004f2840: CALL core_inv.cpp_CInventory_load_FUN_004ff400
//   XREF to: 004ff400 (UNCONDITIONAL_CALL)
// 004f2845: ADD ESP,0x8
// 004f2848: ADD ESP,0xcc
// 004f284e: POP ESI
// 004f284f: POP EBX
// 004f2850: RET
// 004f2851: MOV ECX,dword ptr [0x00822034]
//   Label: LAB_004f2851
//   XREF to: 00822034 (READ)
// 004f2857: PUSH ECX
// 004f2858: PUSH EAX
// 004f2859: CALL core_inv.cpp_CInventory_save_FUN_004ff210
//   XREF to: 004ff210 (UNCONDITIONAL_CALL)
// 004f285e: ADD ESP,0x8
// 004f2861: ADD ESP,0xcc
// 004f2867: POP ESI
// 004f2868: POP EBX
// 004f2869: RET
