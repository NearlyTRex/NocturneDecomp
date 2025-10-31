// Name: core_boxactor.cpp_CBoxActor_load_FUN_00422060
// Address: 00422060
// Address Range: [[00422060, 0042232f]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CBoxActor_load_FUN_00422060()
// Cross-references:
//   core_boxactor.cpp_load_FUN_00422c80 (00422c80) at 00422c8a [UNCONDITIONAL_CALL]
//   core_stone.cpp_FUN_005bad40 (005bad40) at 005bad45 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_modelName_0061665b
//   TerminatedCString s_weightInPounds_00616665
//   TerminatedCString s_fps_00616674
//   TerminatedCString s_rpm_00616678
//   TerminatedCString s_loopWavName_0061667c
//   TerminatedCString s_collisionWavName_00616688
//   TerminatedCString s_canBeCarried_00616699
//   TerminatedCString s_pickupType_006166a6
//   TerminatedCString s_carriedByActor_006166b1
//   TerminatedCString s_canBePushed_006166c0
//   TerminatedCString s_pushedByActor_006166cc
//   TerminatedCString s_groundType_006166da
//   TerminatedCString s_simBox_006166e5
//   TerminatedCString s_plotInShadowFlag_006166ec
//   TerminatedCString s_collisionFlag_006166fd
//   TerminatedCString s_isTransparent_0061670b
//   TerminatedCString s_dontUseNormals_00616719
//   TerminatedCString s_descriptiveName_00616728
//   TerminatedCString s_constrainExtentsActor_00616738
//   TerminatedCString s_useEvent_0061674e
//   TerminatedCString s_allowedMeleeAttackTypes_00616757
//   TerminatedCString s_pushSound_0061676f
//   TerminatedCString s_blockVirtualDirectorFlag_00616779
//   int g_CBoxActorClassVersion = 0xf
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeSimBox_FUN_0040bd70
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_CBoxActor_load(CBoxActor* pBoxActor) */

void core_boxactor_cpp_CBoxActor_load_FUN_00422060(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000014;
  char *apcStack_e0 [54];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].field_224.x,"weightInPounds");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].orient_matrix.m[2].z,"fps");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)&in_stack_00000004[2].orient_matrix.m[1].z,"rpm");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].location.position.y,"loopWavName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient.heading,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0x00000010,"canBeCarried");
    if (in_stack_00000014 == 0) {
      in_stack_00000004[2].health = 0;
    }
    else {
      in_stack_00000004[2].health = 3;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&in_stack_00000004[2].health,"pickupType")
    ;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[2].field6_0x68,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[2].field7_0x6c,"canBePushed");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[2].was_created,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x18),"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    in_stack_00000004[4].create_event[0x10] = -1;
    in_stack_00000004[4].create_event[0x11] = -1;
    in_stack_00000004[4].create_event[0x12] = -1;
    in_stack_00000004[4].create_event[0x13] = -1;
  }
  else {
    core_actor_cpp_serializeSimBox_FUN_0040bd70
              ((CSimBox *)&in_stack_00000004[2].field_224.y,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    in_stack_00000004[4].create_event[0x1c] = '\x01';
    in_stack_00000004[4].create_event[0x1d] = '\0';
    in_stack_00000004[4].create_event[0x1e] = '\0';
    in_stack_00000004[4].create_event[0x1f] = '\0';
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x1c),"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    in_stack_00000004[4].create_event[0x20] = '\x01';
    in_stack_00000004[4].create_event[0x21] = '\0';
    in_stack_00000004[4].create_event[0x22] = '\0';
    in_stack_00000004[4].create_event[0x23] = '\0';
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x20),"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004->is_transparent,"isTransparent");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x24),"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_serializeString_FUN_0040b5c0(apcStack_e0,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[2].create_prob,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[4].create_event + 0x28),"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[4].field17_0x104,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[2].create_event + 4),"pushSound");
  }
  if (g_CBoxActorClassVersion < 0xf) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&in_stack_00000004[4].scale.x,"blockVirtualDirectorFlag");
  return;
}


// Assembly code:
// 00422060: PUSH EBX
//   Label: core_boxactor.cpp_CBoxActor_load_FUN_00422060
// 00422061: PUSH ESI
// 00422062: SUB ESP,0x104
// 00422068: MOV EBX,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x4] (READ)
// 0042206f: PUSH EBX
// 00422070: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00422075: ADD ESP,0x4
// 00422078: PUSH 0x61665b
//   XREF to: 0061665b (DATA)
// 0042207d: LEA EAX,[EBX + 0x158]
// 00422083: PUSH EAX
// 00422084: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 00422089: ADD ESP,0x8
// 0042208c: PUSH 0x616665
//   XREF to: 00616665 (DATA)
// 00422091: LEA EAX,[EBX + 0x390]
// 00422097: PUSH EAX
// 00422098: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0042209d: ADD ESP,0x8
// 004220a0: PUSH 0x616674
//   XREF to: 00616674 (DATA)
// 004220a5: LEA EAX,[EBX + 0x30c]
// 004220ab: PUSH EAX
// 004220ac: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004220b1: ADD ESP,0x8
// 004220b4: PUSH 0x616678
//   XREF to: 00616678 (DATA)
// 004220b9: LEA EAX,[EBX + 0x300]
// 004220bf: PUSH EAX
// 004220c0: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 004220c5: ADD ESP,0x8
// 004220c8: PUSH 0x61667c
//   XREF to: 0061667c (DATA)
// 004220cd: LEA EAX,[EBX + 0x2d4]
// 004220d3: PUSH EAX
// 004220d4: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004220d9: ADD ESP,0x8
// 004220dc: PUSH 0x616688
//   XREF to: 00616688 (DATA)
// 004220e1: LEA EAX,[EBX + 0x2e8]
// 004220e7: PUSH EAX
// 004220e8: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004220ed: MOV EDX,dword ptr [0x0066e604]
//   XREF to: 0066e604 (READ)
// 004220f3: ADD ESP,0x8
// 004220f6: CMP EDX,0x7
// 004220f9: JL 0x004222ac
//   XREF to: 004222ac (CONDITIONAL_JUMP)
// 004220ff: PUSH 0x6166a6
//   XREF to: 006166a6 (DATA)
// 00422104: LEA EAX,[EBX + 0x314]
// 0042210a: PUSH EAX
// 0042210b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00422110: ADD ESP,0x8
// 00422113: PUSH 0x6166b1
//   Label: LAB_00422113
//   XREF to: 006166b1 (DATA)
// 00422118: LEA EAX,[EBX + 0x318]
// 0042211e: PUSH EAX
// 0042211f: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00422124: MOV ESI,dword ptr [0x0066e604]
//   XREF to: 0066e604 (READ)
// 0042212a: ADD ESP,0x8
// 0042212d: CMP ESI,0x2
// 00422130: JL 0x0042215a
//   XREF to: 0042215a (CONDITIONAL_JUMP)
// 00422132: PUSH 0x6166c0
//   XREF to: 006166c0 (DATA)
// 00422137: LEA EAX,[EBX + 0x31c]
// 0042213d: PUSH EAX
// 0042213e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00422143: ADD ESP,0x8
// 00422146: PUSH 0x6166cc
//   XREF to: 006166cc (DATA)
// 0042214b: LEA EAX,[EBX + 0x320]
// 00422151: PUSH EAX
// 00422152: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00422157: ADD ESP,0x8
// 0042215a: CMP dword ptr [0x0066e604],0x3
//   Label: LAB_0042215a
//   XREF to: 0066e604 (READ)
// 00422161: JL 0x00422177
//   XREF to: 00422177 (CONDITIONAL_JUMP)
// 00422163: PUSH 0x6166da
//   XREF to: 006166da (DATA)
// 00422168: LEA EAX,[EBX + 0x5f0]
// 0042216e: PUSH EAX
// 0042216f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00422174: ADD ESP,0x8
// 00422177: CMP dword ptr [0x0066e604],0x4
//   Label: LAB_00422177
//   XREF to: 0066e604 (READ)
// 0042217e: JL 0x004222e6
//   XREF to: 004222e6 (CONDITIONAL_JUMP)
// 00422184: PUSH 0x6166e5
//   XREF to: 006166e5 (DATA)
// 00422189: LEA EAX,[EBX + 0x394]
// 0042218f: PUSH EAX
// 00422190: CALL core_actor.cpp_serializeSimBox_FUN_0040bd70
//   XREF to: 0040bd70 (UNCONDITIONAL_CALL)
// 00422195: ADD ESP,0x8
// 00422198: CMP dword ptr [0x0066e604],0x5
//   Label: LAB_00422198
//   XREF to: 0066e604 (READ)
// 0042219f: JL 0x004222f5
//   XREF to: 004222f5 (CONDITIONAL_JUMP)
// 004221a5: PUSH 0x6166ec
//   XREF to: 006166ec (DATA)
// 004221aa: LEA EAX,[EBX + 0x5f4]
// 004221b0: PUSH EAX
// 004221b1: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004221b6: ADD ESP,0x8
// 004221b9: CMP dword ptr [0x0066e604],0x6
//   Label: LAB_004221b9
//   XREF to: 0066e604 (READ)
// 004221c0: JL 0x00422304
//   XREF to: 00422304 (CONDITIONAL_JUMP)
// 004221c6: PUSH 0x6166fd
//   XREF to: 006166fd (DATA)
// 004221cb: LEA EAX,[EBX + 0x5f8]
// 004221d1: PUSH EAX
// 004221d2: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004221d7: ADD ESP,0x8
// 004221da: CMP dword ptr [0x0066e604],0x8
//   Label: LAB_004221da
//   XREF to: 0066e604 (READ)
// 004221e1: JL 0x0042220b
//   XREF to: 0042220b (CONDITIONAL_JUMP)
// 004221e3: PUSH 0x61670b
//   XREF to: 0061670b (DATA)
// 004221e8: LEA EAX,[EBX + 0xfc]
// 004221ee: PUSH EAX
// 004221ef: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004221f4: ADD ESP,0x8
// 004221f7: PUSH 0x616719
//   XREF to: 00616719 (DATA)
// 004221fc: LEA EAX,[EBX + 0x5fc]
// 00422202: PUSH EAX
// 00422203: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00422208: ADD ESP,0x8
// 0042220b: CMP dword ptr [0x0066e604],0x9
//   Label: LAB_0042220b
//   XREF to: 0066e604 (READ)
// 00422212: JNZ 0x00422226
//   XREF to: 00422226 (CONDITIONAL_JUMP)
// 00422214: PUSH 0x616728
//   XREF to: 00616728 (DATA)
// 00422219: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10c] (DATA)
// 0042221d: PUSH EAX
// 0042221e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00422223: ADD ESP,0x8
// 00422226: CMP dword ptr [0x0066e604],0xb
//   Label: LAB_00422226
//   XREF to: 0066e604 (READ)
// 0042222d: JL 0x00422243
//   XREF to: 00422243 (CONDITIONAL_JUMP)
// 0042222f: PUSH 0x616738
//   XREF to: 00616738 (DATA)
// 00422234: LEA EAX,[EBX + 0x324]
// 0042223a: PUSH EAX
// 0042223b: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00422240: ADD ESP,0x8
// 00422243: CMP dword ptr [0x0066e604],0xc
//   Label: LAB_00422243
//   XREF to: 0066e604 (READ)
// 0042224a: JL 0x00422260
//   XREF to: 00422260 (CONDITIONAL_JUMP)
// 0042224c: PUSH 0x61674e
//   XREF to: 0061674e (DATA)
// 00422251: LEA EAX,[EBX + 0x600]
// 00422257: PUSH EAX
// 00422258: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0042225d: ADD ESP,0x8
// 00422260: CMP dword ptr [0x0066e604],0xd
//   Label: LAB_00422260
//   XREF to: 0066e604 (READ)
// 00422267: JL 0x0042227d
//   XREF to: 0042227d (CONDITIONAL_JUMP)
// 00422269: PUSH 0x616757
//   XREF to: 00616757 (DATA)
// 0042226e: LEA EAX,[EBX + 0x664]
// 00422274: PUSH EAX
// 00422275: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0042227a: ADD ESP,0x8
// 0042227d: CMP dword ptr [0x0066e604],0xe
//   Label: LAB_0042227d
//   XREF to: 0066e604 (READ)
// 00422284: JL 0x0042229a
//   XREF to: 0042229a (CONDITIONAL_JUMP)
// 00422286: PUSH 0x61676f
//   XREF to: 0061676f (DATA)
// 0042228b: LEA EAX,[EBX + 0x32c]
// 00422291: PUSH EAX
// 00422292: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00422297: ADD ESP,0x8
// 0042229a: CMP dword ptr [0x0066e604],0xf
//   Label: LAB_0042229a
//   XREF to: 0066e604 (READ)
// 004222a1: JGE 0x00422313
//   XREF to: 00422313 (CONDITIONAL_JUMP)
// 004222a3: ADD ESP,0x104
// 004222a9: POP ESI
// 004222aa: POP EBX
// 004222ab: RET
// 004222ac: PUSH 0x616699
//   Label: LAB_004222ac
//   XREF to: 00616699 (DATA)
// 004222b1: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0xc] (DATA)
// 004222b8: PUSH EAX
// 004222b9: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004222be: ADD ESP,0x8
// 004222c1: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0xc] (READ)
// 004222c8: TEST ECX,ECX
// 004222ca: JZ 0x004222db
//   XREF to: 004222db (CONDITIONAL_JUMP)
// 004222cc: MOV dword ptr [EBX + 0x314],0x3
// 004222d6: JMP 0x00422113
//   XREF to: 00422113 (UNCONDITIONAL_JUMP)
// 004222db: MOV dword ptr [EBX + 0x314],ECX
//   Label: LAB_004222db
// 004222e1: JMP 0x00422113
//   XREF to: 00422113 (UNCONDITIONAL_JUMP)
// 004222e6: MOV dword ptr [EBX + 0x5e8],0xffffffff
//   Label: LAB_004222e6
// 004222f0: JMP 0x00422198
//   XREF to: 00422198 (UNCONDITIONAL_JUMP)
// 004222f5: MOV dword ptr [EBX + 0x5f4],0x1
//   Label: LAB_004222f5
// 004222ff: JMP 0x004221b9
//   XREF to: 004221b9 (UNCONDITIONAL_JUMP)
// 00422304: MOV dword ptr [EBX + 0x5f8],0x1
//   Label: LAB_00422304
// 0042230e: JMP 0x004221da
//   XREF to: 004221da (UNCONDITIONAL_JUMP)
// 00422313: PUSH 0x616779
//   Label: LAB_00422313
//   XREF to: 00616779 (DATA)
// 00422318: ADD EBX,0x668
// 0042231e: PUSH EBX
// 0042231f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00422324: ADD ESP,0x8
// 00422327: ADD ESP,0x104
// 0042232d: POP ESI
// 0042232e: POP EBX
// 0042232f: RET
