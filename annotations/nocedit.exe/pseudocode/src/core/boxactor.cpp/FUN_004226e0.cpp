// Name: core_boxactor.cpp_FUN_004226e0
// Address: 004226e0
// Address Range: [[004226e0, 004228d1]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004226e0()
// Cross-references:
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 004234ec [UNCONDITIONAL_CALL]
//   core_stone.cpp_FUN_005badd0 (005badd0) at 005baddb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Model_file_kfm_006167a5
//   TerminatedCString s_weight_lbs_006167b7
//   TerminatedCString s_Animation_fps_006167c4
//   TerminatedCString s_PHB_RPM_006167d2
//   TerminatedCString s_Loop_WAV_006167da
//   TerminatedCString s_Collision_WAV_006167e3
//   TerminatedCString s_Pickup_type_00616814
//   TerminatedCString s_canBePushed_00616820
//   TerminatedCString s_CDemonActor_0061682c
//   TerminatedCString s_Constrain_to_this_actor__00616838
//   TerminatedCString s_push_sound_00616856
//   TerminatedCString s_groundType_00616861
//   TerminatedCString s_plotInShadowFlag_0061686c
//   TerminatedCString s_collisionFlag_0061687d
//   TerminatedCString s_isTransparent_0061688b
//   TerminatedCString s_dontUseNormals_00616899
//   TerminatedCString s_Raise_event_when_used_006168a8
//   TerminatedCString s_Melee_attack_types_006168be
//   TerminatedCString s_Block_virtual_director_006168d1
//   void* PTR_s_Cant_0066e5dc = 006167f1
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e300
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e480
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CActorPropertyList_FUN_0040e6a0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_004226e0(undefined4 param_1, undefined4
   param_2) */

void core_boxactor_cpp_FUN_004226e0(void)

{
  CKeyFramedModel *pCVar1;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  if (1 < pCVar1->frame_count) {
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  if (in_stack_00000004[2].field7_0x6c != 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  if ((in_stack_00000004[2].health != 0) && (in_stack_00000004[2].health != 1)) {
    core_actor_cpp_CActorPropertyList_FUN_0040e6a0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 004226e0: PUSH EBX
//   Label: core_boxactor.cpp_FUN_004226e0
// 004226e1: PUSH ESI
// 004226e2: PUSH EDI
// 004226e3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004226e7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004226eb: PUSH ESI
// 004226ec: PUSH EBX
// 004226ed: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004226f2: ADD ESP,0x8
// 004226f5: PUSH 0x0
// 004226f7: LEA EDI,[EBX + 0x158]
// 004226fd: PUSH EDI
// 004226fe: PUSH 0x6167a5
//   XREF to: 006167a5 (DATA)
// 00422703: PUSH ESI
// 00422704: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00422709: ADD ESP,0x10
// 0042270c: PUSH 0x0
// 0042270e: PUSH 0x49742400
// 00422713: LEA EAX,[EBX + 0x390]
// 00422719: PUSH 0x0
// 0042271b: PUSH EAX
// 0042271c: PUSH 0x6167b7
//   XREF to: 006167b7 (DATA)
// 00422721: PUSH ESI
// 00422722: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 00422727: ADD ESP,0x18
// 0042272a: PUSH EDI
// 0042272b: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00422730: MOV EAX,dword ptr [EAX + 0x100]
// 00422736: ADD ESP,0x4
// 00422739: CMP EAX,0x1
// 0042273c: JG 0x004228ac
//   XREF to: 004228ac (CONDITIONAL_JUMP)
// 00422742: PUSH 0x0
//   Label: LAB_00422742
// 00422744: LEA EAX,[EBX + 0x300]
// 0042274a: PUSH EAX
// 0042274b: PUSH 0x6167d2
//   XREF to: 006167d2 (DATA)
// 00422750: PUSH ESI
// 00422751: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 00422756: ADD ESP,0x10
// 00422759: LEA EAX,[EBX + 0x2d4]
// 0042275f: PUSH EAX
// 00422760: PUSH 0x6167da
//   XREF to: 006167da (DATA)
// 00422765: PUSH ESI
// 00422766: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0042276b: ADD ESP,0xc
// 0042276e: LEA EAX,[EBX + 0x2e8]
// 00422774: PUSH EAX
// 00422775: PUSH 0x6167e3
//   XREF to: 006167e3 (DATA)
// 0042277a: PUSH ESI
// 0042277b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 00422780: ADD ESP,0xc
// 00422783: LEA EAX,[EBX + 0x314]
// 00422789: PUSH EAX
// 0042278a: PUSH 0x66e5dc
//   XREF to: 0066e5dc (DATA)
// 0042278f: PUSH 0x5
// 00422791: PUSH 0x616814
//   XREF to: 00616814 (DATA)
// 00422796: PUSH ESI
// 00422797: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 0042279c: ADD ESP,0x14
// 0042279f: LEA EAX,[EBX + 0x31c]
// 004227a5: PUSH EAX
// 004227a6: PUSH 0x616820
//   XREF to: 00616820 (DATA)
// 004227ab: PUSH ESI
// 004227ac: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004227b1: MOV EDX,dword ptr [EBX + 0x31c]
// 004227b7: ADD ESP,0xc
// 004227ba: TEST EDX,EDX
// 004227bc: JZ 0x004227f1
//   XREF to: 004227f1 (CONDITIONAL_JUMP)
// 004227be: PUSH 0x0
// 004227c0: PUSH 0x61682c
//   XREF to: 0061682c (DATA)
// 004227c5: PUSH 0x1
// 004227c7: LEA EAX,[EBX + 0x324]
// 004227cd: PUSH EAX
// 004227ce: PUSH 0x616838
//   XREF to: 00616838 (DATA)
// 004227d3: PUSH ESI
// 004227d4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 004227d9: ADD ESP,0x18
// 004227dc: LEA EAX,[EBX + 0x32c]
// 004227e2: PUSH EAX
// 004227e3: PUSH 0x616856
//   XREF to: 00616856 (DATA)
// 004227e8: PUSH ESI
// 004227e9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 004227ee: ADD ESP,0xc
// 004227f1: LEA EAX,[EBX + 0x5f0]
//   Label: LAB_004227f1
// 004227f7: PUSH EAX
// 004227f8: PUSH 0x616861
//   XREF to: 00616861 (DATA)
// 004227fd: PUSH ESI
// 004227fe: CALL core_actor.cpp_CActorPropertyList_FUN_0040e300
//   XREF to: 0040e300 (UNCONDITIONAL_CALL)
// 00422803: ADD ESP,0xc
// 00422806: LEA EAX,[EBX + 0x5f4]
// 0042280c: PUSH EAX
// 0042280d: PUSH 0x61686c
//   XREF to: 0061686c (DATA)
// 00422812: PUSH ESI
// 00422813: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00422818: ADD ESP,0xc
// 0042281b: LEA EAX,[EBX + 0x5f8]
// 00422821: PUSH EAX
// 00422822: PUSH 0x61687d
//   XREF to: 0061687d (DATA)
// 00422827: PUSH ESI
// 00422828: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0042282d: ADD ESP,0xc
// 00422830: LEA EAX,[EBX + 0xfc]
// 00422836: PUSH EAX
// 00422837: PUSH 0x61688b
//   XREF to: 0061688b (DATA)
// 0042283c: PUSH ESI
// 0042283d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00422842: ADD ESP,0xc
// 00422845: LEA EAX,[EBX + 0x5fc]
// 0042284b: PUSH EAX
// 0042284c: PUSH 0x616899
//   XREF to: 00616899 (DATA)
// 00422851: PUSH ESI
// 00422852: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00422857: ADD ESP,0xc
// 0042285a: LEA EAX,[EBX + 0x600]
// 00422860: PUSH EAX
// 00422861: PUSH 0x6168a8
//   XREF to: 006168a8 (DATA)
// 00422866: PUSH ESI
// 00422867: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 0042286c: MOV ECX,dword ptr [EBX + 0x314]
// 00422872: ADD ESP,0xc
// 00422875: TEST ECX,ECX
// 00422877: JZ 0x00422893
//   XREF to: 00422893 (CONDITIONAL_JUMP)
// 00422879: CMP ECX,0x1
// 0042287c: JZ 0x00422893
//   XREF to: 00422893 (CONDITIONAL_JUMP)
// 0042287e: LEA EAX,[EBX + 0x664]
// 00422884: PUSH EAX
// 00422885: PUSH 0x6168be
//   XREF to: 006168be (DATA)
// 0042288a: PUSH ESI
// 0042288b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e6a0
//   XREF to: 0040e6a0 (UNCONDITIONAL_CALL)
// 00422890: ADD ESP,0xc
// 00422893: ADD EBX,0x668
//   Label: LAB_00422893
// 00422899: PUSH EBX
// 0042289a: PUSH 0x6168d1
//   XREF to: 006168d1 (DATA)
// 0042289f: PUSH ESI
// 004228a0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004228a5: ADD ESP,0xc
// 004228a8: POP EDI
// 004228a9: POP ESI
// 004228aa: POP EBX
// 004228ab: RET
// 004228ac: PUSH 0x0
//   Label: LAB_004228ac
// 004228ae: PUSH 0x42c80000
// 004228b3: LEA EAX,[EBX + 0x30c]
// 004228b9: PUSH 0xc2c80000
// 004228be: PUSH EAX
// 004228bf: PUSH 0x6167c4
//   XREF to: 006167c4 (DATA)
// 004228c4: PUSH ESI
// 004228c5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 004228ca: ADD ESP,0x18
// 004228cd: JMP 0x00422742
//   XREF to: 00422742 (UNCONDITIONAL_JUMP)
