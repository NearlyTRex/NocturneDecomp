// Name: core_charactr.cpp_CCharacter_serialize_FUN_004283a0
// Address: 004283a0
// Address Range: [[004283a0, 004285c8]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_serialize_FUN_004283a0(CCharacter * this_ptr)
// Cross-references:
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660 (004a9660) at 004a96d1 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f26a3 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0 (00544ba0) at 00544bb0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_hitPoints_00616f4e
//   TerminatedCString s_numCarryHands_00616f58
//   TerminatedCString s_carry_hand_00616f66
//   TerminatedCString s_carry_actor_00616f71
//   TerminatedCString s_numCarryHands_00616f7d
//   TerminatedCString s_carry_hand_00616f8b
//   TerminatedCString s_carry_actor_00616f96
//   TerminatedCString s_talkToMeEvent_00616fa2
//   TerminatedCString s_grabbedBy_00616fb0
//   TerminatedCString s_grabbedType_00616fba
//   TerminatedCString s_clothList_00616fc6
//   TerminatedCString s_sizeScale_00616fd0
//   TerminatedCString s_healthBarMode_00616fda
//   TerminatedCString s_descriptiveName_00616fe8
//   TerminatedCString s_maxHitPoints_00616ff8
//   int g_CCharacterClassVersion = 0x6
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeClothList_FUN_0040be60
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_serialize_FUN_004283a0(CCharacter *this_ptr)

{
  CCharacter *pCVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar2;
  int iVar3;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->hit_points,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0xffffffec,"numCarryHands")
      ;
      if (0 < unaff_EBP) {
        do {
          core_actor_cpp_serializeInteger_FUN_0040b7f0
                    ((int *)&stack0xfffffff4,"carry hand");
          pcVar2 = "carry actor";
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)&this_ptr->carry_hands[unaff_ESI].carry_actor,
                     "carry actor");
        } while ((int)(pcVar2 + 1) < unaff_ESI);
      }
    }
    else {
      pCVar1 = this_ptr;
      do {
        pCVar1 = (CCharacter *)&(pCVar1->base_actor).orient_matrix.m[0].z;
      } while (pCVar1 != (CCharacter *)((this_ptr->base_actor).create_event + 0x10));
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0xfffffff4,"numCarryHands")
      ;
      iVar3 = 0;
      do {
        if (this_ptr->carry_hands[iVar3].carry_actor != (CDemonActor *)0x0) {
          pcVar2 = "carry hand";
          core_actor_cpp_serializeInteger_FUN_0040b7f0
                    ((int *)&stack0xffffffec,"carry hand");
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)&this_ptr->carry_hands[(int)pcVar2].carry_actor,
                     "carry actor");
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)this_ptr->talk_to_me_event,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->grabbed_by,"grabbedBy");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->grabbed_type,"grabbedType");
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&this_ptr->cloth_count,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->size_scale,"sizeScale");
  }
  if (g_CCharacterClassVersion < 6) {
    this_ptr->max_hit_points = this_ptr->hit_points;
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->health_bar_mode,"healthBarMode");
  core_actor_cpp_serializeLocalizedString_FUN_0040b6e0
            ((char **)this_ptr->descriptive_name,"descriptiveName");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->max_hit_points,"maxHitPoints");
  return;
}


// Assembly code:
// 004283a0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_serialize_FUN_004283a0
// 004283a1: PUSH ESI
// 004283a2: PUSH EDI
// 004283a3: PUSH EBP
// 004283a4: SUB ESP,0x10
// 004283a7: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004283ab: PUSH EBX
// 004283ac: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004283b1: ADD ESP,0x4
// 004283b4: PUSH 0x616f4e
//   XREF to: 00616f4e (DATA)
// 004283b9: LEA EAX,[EBX + 0x243c]
// 004283bf: PUSH EAX
// 004283c0: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004283c5: MOV EDX,dword ptr [0x0066e770]
//   XREF to: 0066e770 (READ)
// 004283cb: ADD ESP,0x8
// 004283ce: CMP EDX,0x2
// 004283d1: JL 0x00428450
//   XREF to: 00428450 (CONDITIONAL_JUMP)
// 004283d7: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 004283de: JZ 0x004284f0
//   XREF to: 004284f0 (CONDITIONAL_JUMP)
// 004283e4: XOR ESI,ESI
// 004283e6: MOV EAX,EBX
// 004283e8: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x20] (DATA)
// 004283eb: LEA EDX,[EBX + 0x88]
// 004283f1: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004283f5: CMP dword ptr [EAX + 0x24b4],0x0
//   Label: LAB_004283f5
// 004283fc: JZ 0x00428402
//   XREF to: 00428402 (CONDITIONAL_JUMP)
// 004283fe: INC dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00428402: ADD EAX,0x44
//   Label: LAB_00428402
// 00428405: CMP EAX,EDX
// 00428407: JNZ 0x004283f5
//   XREF to: 004283f5 (CONDITIONAL_JUMP)
// 00428409: PUSH 0x616f7d
//   XREF to: 00616f7d (DATA)
// 0042840e: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x14] (DATA)
// 00428412: MOV EDI,0x2
// 00428417: PUSH EAX
// 00428418: XOR EBP,EBP
// 0042841a: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0042841e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00428423: ADD ESP,0x8
// 00428426: LEA ESI,[EBX + 0x24ac]
// 0042842c: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x20] (DATA)
// 0042842f: IMUL EAX,dword ptr [ESP],0x44
//   Label: LAB_0042842f
//   XREF to: Stack[-0x20] (DATA)
// 00428433: CMP dword ptr [EBX + EAX*0x1 + 0x24b4],0x0
// 0042843b: JNZ 0x00428557
//   XREF to: 00428557 (CONDITIONAL_JUMP)
// 00428441: MOV EBP,dword ptr [ESP]
//   Label: LAB_00428441
//   XREF to: Stack[-0x20] (DATA)
// 00428444: INC EBP
// 00428445: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x20] (DATA)
// 00428448: CMP EBP,0x2
// 0042844b: JL 0x0042842f
//   XREF to: 0042842f (CONDITIONAL_JUMP)
// 0042844d: LEA EAX,[EAX]
// 00428450: CMP dword ptr [0x0066e770],0x3
//   Label: LAB_00428450
//   XREF to: 0066e770 (READ)
// 00428457: JL 0x0042846d
//   XREF to: 0042846d (CONDITIONAL_JUMP)
// 00428459: PUSH 0x616fa2
//   XREF to: 00616fa2 (DATA)
// 0042845e: LEA EAX,[EBX + 0x2534]
// 00428464: PUSH EAX
// 00428465: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0042846a: ADD ESP,0x8
// 0042846d: CMP dword ptr [0x0066e770],0x4
//   Label: LAB_0042846d
//   XREF to: 0066e770 (READ)
// 00428474: JL 0x004284b2
//   XREF to: 004284b2 (CONDITIONAL_JUMP)
// 00428476: PUSH 0x616fb0
//   XREF to: 00616fb0 (DATA)
// 0042847b: LEA EAX,[EBX + 0x2598]
// 00428481: PUSH EAX
// 00428482: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00428487: ADD ESP,0x8
// 0042848a: PUSH 0x616fba
//   XREF to: 00616fba (DATA)
// 0042848f: LEA EAX,[EBX + 0x259c]
// 00428495: PUSH EAX
// 00428496: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0042849b: ADD ESP,0x8
// 0042849e: PUSH 0x616fc6
//   XREF to: 00616fc6 (DATA)
// 004284a3: LEA EAX,[EBX + 0x2a94]
// 004284a9: PUSH EAX
// 004284aa: CALL core_actor.cpp_serializeClothList_FUN_0040be60
//   XREF to: 0040be60 (UNCONDITIONAL_CALL)
// 004284af: ADD ESP,0x8
// 004284b2: CMP dword ptr [0x0066e770],0x5
//   Label: LAB_004284b2
//   XREF to: 0066e770 (READ)
// 004284b9: JL 0x004284cf
//   XREF to: 004284cf (CONDITIONAL_JUMP)
// 004284bb: PUSH 0x616fd0
//   XREF to: 00616fd0 (DATA)
// 004284c0: LEA EAX,[EBX + 0x261c]
// 004284c6: PUSH EAX
// 004284c7: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004284cc: ADD ESP,0x8
// 004284cf: CMP dword ptr [0x0066e770],0x6
//   Label: LAB_004284cf
//   XREF to: 0066e770 (READ)
// 004284d6: JGE 0x00428585
//   XREF to: 00428585 (CONDITIONAL_JUMP)
// 004284dc: MOV EAX,dword ptr [EBX + 0x243c]
// 004284e2: MOV dword ptr [EBX + 0x2440],EAX
// 004284e8: ADD ESP,0x10
// 004284eb: POP EBP
// 004284ec: POP EDI
// 004284ed: POP ESI
// 004284ee: POP EBX
// 004284ef: RET
// 004284f0: PUSH 0x616f58
//   Label: LAB_004284f0
//   XREF to: 00616f58 (DATA)
// 004284f5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 004284f9: PUSH EAX
// 004284fa: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004284ff: ADD ESP,0x8
// 00428502: XOR EBP,EBP
// 00428504: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00428508: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x20] (DATA)
// 0042850b: TEST EAX,EAX
// 0042850d: JLE 0x00428450
//   XREF to: 00428450 (CONDITIONAL_JUMP)
// 00428513: LEA ESI,[EBX + 0x24ac]
// 00428519: PUSH 0x616f66
//   Label: LAB_00428519
//   XREF to: 00616f66 (DATA)
// 0042851e: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x18] (DATA)
// 00428522: PUSH EAX
// 00428523: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00428528: ADD ESP,0x8
// 0042852b: IMUL EAX,dword ptr [ESP + 0x8],0x44
//   XREF to: Stack[-0x18] (READ)
// 00428530: ADD EAX,ESI
// 00428532: PUSH 0x616f71
//   XREF to: 00616f71 (DATA)
// 00428537: ADD EAX,0x8
// 0042853a: PUSH EAX
// 0042853b: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00428540: ADD ESP,0x8
// 00428543: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00428546: INC ECX
// 00428547: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0042854b: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 0042854e: CMP ECX,EDI
// 00428550: JL 0x00428519
//   XREF to: 00428519 (CONDITIONAL_JUMP)
// 00428552: JMP 0x00428450
//   XREF to: 00428450 (UNCONDITIONAL_JUMP)
// 00428557: PUSH 0x616f8b
//   Label: LAB_00428557
//   XREF to: 00616f8b (DATA)
// 0042855c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20] (DATA)
// 00428560: PUSH EAX
// 00428561: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00428566: ADD ESP,0x8
// 00428569: IMUL EAX,dword ptr [ESP],0x44
//   XREF to: Stack[-0x20] (DATA)
// 0042856d: ADD EAX,ESI
// 0042856f: PUSH 0x616f96
//   XREF to: 00616f96 (DATA)
// 00428574: ADD EAX,0x8
// 00428577: PUSH EAX
// 00428578: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 0042857d: ADD ESP,0x8
// 00428580: JMP 0x00428441
//   XREF to: 00428441 (UNCONDITIONAL_JUMP)
// 00428585: PUSH 0x616fda
//   Label: LAB_00428585
//   XREF to: 00616fda (DATA)
// 0042858a: LEA EAX,[EBX + 0x2444]
// 00428590: PUSH EAX
// 00428591: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00428596: ADD ESP,0x8
// 00428599: PUSH 0x616fe8
//   XREF to: 00616fe8 (DATA)
// 0042859e: LEA EAX,[EBX + 0x2448]
// 004285a4: PUSH EAX
// 004285a5: CALL core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
//   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)
// 004285aa: ADD ESP,0x8
// 004285ad: PUSH 0x616ff8
//   XREF to: 00616ff8 (DATA)
// 004285b2: ADD EBX,0x2440
// 004285b8: PUSH EBX
// 004285b9: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004285be: ADD ESP,0x8
// 004285c1: ADD ESP,0x10
// 004285c4: POP EBP
// 004285c5: POP EDI
// 004285c6: POP ESI
// 004285c7: POP EBX
// 004285c8: RET
