// Name: core_platfrm.cpp_CPlatform_load_FUN_0054dbc0
// Address: 0054dbc0
// Address Range: [[0054dbc0, 0054df75]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_CPlatform_load_FUN_0054dbc0()
// Cross-references:
//   core_conveyor.cpp_FUN_00442020 (00442020) at 00442026 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_modelName_0063f79e
//   TerminatedCString s_toStartEvent_0063f7a8
//   TerminatedCString s_toEndEvent_0063f7b5
//   TerminatedCString s_stopEvent_0063f7c0
//   TerminatedCString s_startSound_0063f7ca
//   TerminatedCString s_stopSound_0063f7d5
//   TerminatedCString s_activeSound_0063f7df
//   TerminatedCString s_courseFilename_0063f7eb
//   TerminatedCString s_startPos_0063f7fa
//   TerminatedCString s_origOrient_0063f803
//   TerminatedCString s_endPos_0063f80e
//   TerminatedCString s_endOrient_0063f815
//   TerminatedCString s_state_0063f81f
//   TerminatedCString s_param_0063f825
//   TerminatedCString s_travelTimeToStart_0063f82b
//   TerminatedCString s_travelTimeToEnd_0063f83d
//   TerminatedCString s_groundType_0063f84d
//   TerminatedCString s_oneShot_0063f858
//   TerminatedCString s_blockVirtualDirectorFlag_0063f860
//   TerminatedCString s_renderInBackgroundWhenNo_0063f879
//   TerminatedCString s_cameraWhileMoving_0063f89d
//   TerminatedCString s_plotAsBoxInShadow_0063f8af
//   TerminatedCString s_goalParam_0063f8c1
//   TerminatedCString s_currentMovementRate_0063f8cb
//   TerminatedCString s_attachCount_0063f8df
//   TerminatedCString s_core_platfrm_cpp_0063f8eb
//   TerminatedCString s_CPlatform_archive_too_ma_0063f8ff
//   TerminatedCString s_attach_actor_0063f92e
//   TerminatedCString s_attachCount_0063f93b
//   TerminatedCString s_attach_actor_0063f947
//   TerminatedCString s_pushFlag_0063f954
//   TerminatedCString s_recomputeFog_0063f95d
//   TerminatedCString s_plotInShadowFlag_0063f96a
//   undefined4 g_CPlatformClassVersion
//   int g_ActorReadingMode
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeQuaternion_FUN_0040b520
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_CPlatform_load(CPlatform* pPlatform) */

void core_platfrm_cpp_CPlatform_load_FUN_0054dbc0(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000028;
  char *in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].create_event + 0x2c),"toStartEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].scale,"toEndEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].actor_name + 0x14),"stopEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)in_stack_00000004[3].create_event,"startSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].create_event + 0x14),"stopSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].create_event + 0x28),"activeSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient_matrix.m[0].y,"courseFilename");
  if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)&in_stack_00000004[2].field7_0x6c,"startPos");
    core_actor_cpp_serializeQuaternion_FUN_0040b520
              ((CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc),"origOrient");
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)in_stack_00000004[2].create_event,"endPos");
    core_actor_cpp_serializeQuaternion_FUN_0040b520
              ((CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c),"endOrient");
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"state");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].location.area_id,"param");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].orient_matrix,"travelTimeToStart");
  if (g_CPlatformClassVersion < 7) {
    in_stack_00000004[2].orient.heading = in_stack_00000004[2].orient_matrix.m[0].x;
  }
  else {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.heading,"travelTimeToEnd");
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"groundType");
  if (1 < g_CPlatformClassVersion) {
    in_stack_00000028 = "oneShot";
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].create_event + 0x40),"oneShot");
  }
  if (2 < g_CPlatformClassVersion) {
    in_stack_0000002c = "blockVirtualDirectorFlag";
    in_stack_00000028 = in_stack_00000004[3].create_event + 0x44;
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)in_stack_00000028,"blockVirtualDirectorFlag");
  }
  if (3 < g_CPlatformClassVersion) {
    in_stack_0000002c = "renderInBackgroundWhenNotMovingFlag";
    in_stack_00000028 = in_stack_00000004[3].create_event + 0x48;
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)in_stack_00000028,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < g_CPlatformClassVersion) {
    in_stack_0000002c = "cameraWhileMoving";
    in_stack_00000028 = in_stack_00000004[3].create_event + 0x4c;
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)in_stack_00000028,"cameraWhileMoving");
  }
  if (5 < g_CPlatformClassVersion) {
    in_stack_0000002c = "plotAsBoxInShadow";
    in_stack_00000028 = (char *)&in_stack_00000004[3].field17_0x104;
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)in_stack_00000028,"plotAsBoxInShadow");
  }
  if (7 < g_CPlatformClassVersion) {
    in_stack_0000002c = "goalParam";
    in_stack_00000028 = (char *)&in_stack_00000004[2].orient;
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000028,"goalParam");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.bank,"currentMovementRate");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0x00000028,"attachCount");
      if (10 < in_stack_00000030) {
        in_stack_00000028 = "CPlatform::archive - too many attached actors.";
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 0x316;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      pCVar1 = in_stack_00000004;
      if (0 < in_stack_00000030) {
        do {
          in_stack_0000002c = "attach actor";
          in_stack_00000028 = (char *)&stack0x00000034;
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)in_stack_00000028,"attach actor");
          pCVar1[3].field19_0x114 = in_stack_00000034;
          iVar2 = iVar2 + 1;
          pCVar1 = (CDemonActor *)&(pCVar1->orient).bank;
        } while (iVar2 < in_stack_00000030);
      }
    }
    else {
      in_stack_00000030 = 0;
      pCVar1 = in_stack_00000004;
      do {
        if (pCVar1[3].field19_0x114 != 0) {
          in_stack_00000030 = in_stack_00000030 + 1;
        }
        pCVar1 = (CDemonActor *)&(pCVar1->orient).bank;
      } while (pCVar1 != (CDemonActor *)(in_stack_00000004[1].create_event + 0x38));
      iVar2 = 0;
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&stack0x00000030,"attachCount");
      pCVar1 = in_stack_00000004;
      do {
        if (pCVar1[3].field19_0x114 != 0) {
          in_stack_00000028 = "attach actor";
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)(&in_stack_00000004[3].field19_0x114 + iVar2 * 0xd),
                     "attach actor");
        }
        iVar2 = iVar2 + 1;
        pCVar1 = (CDemonActor *)&(pCVar1->orient).bank;
      } while (iVar2 < 10);
    }
  }
  if (8 < g_CPlatformClassVersion) {
    in_stack_0000002c = "pushFlag";
    in_stack_00000028 = (char *)&in_stack_00000004[3].scale;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000028,"pushFlag");
  }
  if (9 < g_CPlatformClassVersion) {
    in_stack_0000002c = "recomputeFog";
    in_stack_00000028 = (char *)&in_stack_00000004[3].scale.y;
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)in_stack_00000028,"recomputeFog");
  }
  if (10 < g_CPlatformClassVersion) {
    in_stack_0000002c = "plotInShadowFlag";
    in_stack_00000028 = (char *)&in_stack_00000004[3].scale.z;
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)in_stack_00000028,"plotInShadowFlag");
    return;
  }
  return;
}


// Assembly code:
// 0054dbc0: PUSH EBX
//   Label: core_platfrm.cpp_CPlatform_load_FUN_0054dbc0
// 0054dbc1: PUSH ESI
// 0054dbc2: PUSH EDI
// 0054dbc3: PUSH EBP
// 0054dbc4: SUB ESP,0xc
// 0054dbc7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0054dbcb: PUSH EDI
// 0054dbcc: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0054dbd1: ADD ESP,0x4
// 0054dbd4: PUSH 0x63f79e
//   XREF to: 0063f79e (DATA)
// 0054dbd9: LEA EAX,[EDI + 0x158]
// 0054dbdf: PUSH EAX
// 0054dbe0: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 0054dbe5: ADD ESP,0x8
// 0054dbe8: PUSH 0x63f7a8
//   XREF to: 0063f7a8 (DATA)
// 0054dbed: LEA EAX,[EDI + 0x354]
// 0054dbf3: PUSH EAX
// 0054dbf4: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dbf9: ADD ESP,0x8
// 0054dbfc: PUSH 0x63f7b5
//   XREF to: 0063f7b5 (DATA)
// 0054dc01: LEA EAX,[EDI + 0x3b8]
// 0054dc07: PUSH EAX
// 0054dc08: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dc0d: ADD ESP,0x8
// 0054dc10: PUSH 0x63f7c0
//   XREF to: 0063f7c0 (DATA)
// 0054dc15: LEA EAX,[EDI + 0x41c]
// 0054dc1b: PUSH EAX
// 0054dc1c: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dc21: ADD ESP,0x8
// 0054dc24: PUSH 0x63f7ca
//   XREF to: 0063f7ca (DATA)
// 0054dc29: LEA EAX,[EDI + 0x480]
// 0054dc2f: PUSH EAX
// 0054dc30: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dc35: ADD ESP,0x8
// 0054dc38: PUSH 0x63f7d5
//   XREF to: 0063f7d5 (DATA)
// 0054dc3d: LEA EAX,[EDI + 0x494]
// 0054dc43: PUSH EAX
// 0054dc44: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dc49: ADD ESP,0x8
// 0054dc4c: PUSH 0x63f7df
//   XREF to: 0063f7df (DATA)
// 0054dc51: LEA EAX,[EDI + 0x4a8]
// 0054dc57: PUSH EAX
// 0054dc58: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dc5d: ADD ESP,0x8
// 0054dc60: PUSH 0x63f7eb
//   XREF to: 0063f7eb (DATA)
// 0054dc65: LEA EAX,[EDI + 0x2f0]
// 0054dc6b: PUSH EAX
// 0054dc6c: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dc71: MOV AH,byte ptr [EDI + 0x2f0]
// 0054dc77: ADD ESP,0x8
// 0054dc7a: TEST AH,AH
// 0054dc7c: JZ 0x0054de7f
//   XREF to: 0054de7f (CONDITIONAL_JUMP)
// 0054dc82: PUSH 0x63f81f
//   Label: LAB_0054dc82
//   XREF to: 0063f81f (DATA)
// 0054dc87: LEA EAX,[EDI + 0x2d4]
// 0054dc8d: PUSH EAX
// 0054dc8e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054dc93: ADD ESP,0x8
// 0054dc96: PUSH 0x63f825
//   XREF to: 0063f825 (DATA)
// 0054dc9b: LEA EAX,[EDI + 0x2dc]
// 0054dca1: PUSH EAX
// 0054dca2: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054dca7: ADD ESP,0x8
// 0054dcaa: PUSH 0x63f82b
//   XREF to: 0063f82b (DATA)
// 0054dcaf: LEA EAX,[EDI + 0x2ec]
// 0054dcb5: PUSH EAX
// 0054dcb6: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054dcbb: MOV EDX,dword ptr [0x00680cbc]
//   XREF to: 00680cbc (READ)
// 0054dcc1: ADD ESP,0x8
// 0054dcc4: CMP EDX,0x7
// 0054dcc7: JL 0x0054ded4
//   XREF to: 0054ded4 (CONDITIONAL_JUMP)
// 0054dccd: PUSH 0x63f83d
//   XREF to: 0063f83d (DATA)
// 0054dcd2: LEA EAX,[EDI + 0x2e8]
// 0054dcd8: PUSH EAX
// 0054dcd9: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054dcde: ADD ESP,0x8
// 0054dce1: PUSH 0x63f84d
//   Label: LAB_0054dce1
//   XREF to: 0063f84d (DATA)
// 0054dce6: LEA EAX,[EDI + 0x2d8]
// 0054dcec: PUSH EAX
// 0054dced: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054dcf2: MOV ECX,dword ptr [0x00680cbc]
//   XREF to: 00680cbc (READ)
// 0054dcf8: ADD ESP,0x8
// 0054dcfb: CMP ECX,0x2
// 0054dcfe: JL 0x0054dd14
//   XREF to: 0054dd14 (CONDITIONAL_JUMP)
// 0054dd00: PUSH 0x63f858
//   XREF to: 0063f858 (DATA)
// 0054dd05: LEA EAX,[EDI + 0x4c0]
// 0054dd0b: PUSH EAX
// 0054dd0c: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054dd11: ADD ESP,0x8
// 0054dd14: CMP dword ptr [0x00680cbc],0x3
//   Label: LAB_0054dd14
//   XREF to: 00680cbc (READ)
// 0054dd1b: JL 0x0054dd31
//   XREF to: 0054dd31 (CONDITIONAL_JUMP)
// 0054dd1d: PUSH 0x63f860
//   XREF to: 0063f860 (DATA)
// 0054dd22: LEA EAX,[EDI + 0x4c4]
// 0054dd28: PUSH EAX
// 0054dd29: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054dd2e: ADD ESP,0x8
// 0054dd31: CMP dword ptr [0x00680cbc],0x4
//   Label: LAB_0054dd31
//   XREF to: 00680cbc (READ)
// 0054dd38: JL 0x0054dd4e
//   XREF to: 0054dd4e (CONDITIONAL_JUMP)
// 0054dd3a: PUSH 0x63f879
//   XREF to: 0063f879 (DATA)
// 0054dd3f: LEA EAX,[EDI + 0x4c8]
// 0054dd45: PUSH EAX
// 0054dd46: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054dd4b: ADD ESP,0x8
// 0054dd4e: CMP dword ptr [0x00680cbc],0x5
//   Label: LAB_0054dd4e
//   XREF to: 00680cbc (READ)
// 0054dd55: JL 0x0054dd6b
//   XREF to: 0054dd6b (CONDITIONAL_JUMP)
// 0054dd57: PUSH 0x63f89d
//   XREF to: 0063f89d (DATA)
// 0054dd5c: LEA EAX,[EDI + 0x4cc]
// 0054dd62: PUSH EAX
// 0054dd63: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0054dd68: ADD ESP,0x8
// 0054dd6b: CMP dword ptr [0x00680cbc],0x6
//   Label: LAB_0054dd6b
//   XREF to: 00680cbc (READ)
// 0054dd72: JL 0x0054dd88
//   XREF to: 0054dd88 (CONDITIONAL_JUMP)
// 0054dd74: PUSH 0x63f8af
//   XREF to: 0063f8af (DATA)
// 0054dd79: LEA EAX,[EDI + 0x50c]
// 0054dd7f: PUSH EAX
// 0054dd80: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054dd85: ADD ESP,0x8
// 0054dd88: CMP dword ptr [0x00680cbc],0x8
//   Label: LAB_0054dd88
//   XREF to: 00680cbc (READ)
// 0054dd8f: JL 0x0054de30
//   XREF to: 0054de30 (CONDITIONAL_JUMP)
// 0054dd95: PUSH 0x63f8c1
//   XREF to: 0063f8c1 (DATA)
// 0054dd9a: LEA EAX,[EDI + 0x2e0]
// 0054dda0: PUSH EAX
// 0054dda1: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054dda6: ADD ESP,0x8
// 0054dda9: PUSH 0x63f8cb
//   XREF to: 0063f8cb (DATA)
// 0054ddae: LEA EAX,[EDI + 0x2e4]
// 0054ddb4: PUSH EAX
// 0054ddb5: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0054ddba: MOV ECX,dword ptr [0x00822038]
//   XREF to: 00822038 (READ)
// 0054ddc0: ADD ESP,0x8
// 0054ddc3: CMP ECX,0x1
// 0054ddc6: JZ 0x0054dee5
//   XREF to: 0054dee5 (CONDITIONAL_JUMP)
// 0054ddcc: MOV EAX,EDI
// 0054ddce: XOR EBX,EBX
// 0054ddd0: LEA ESI,[EDI + 0x208]
// 0054ddd6: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0054ddda: CMP dword ptr [EAX + 0x51c],0x0
//   Label: LAB_0054ddda
// 0054dde1: JZ 0x0054dde7
//   XREF to: 0054dde7 (CONDITIONAL_JUMP)
// 0054dde3: INC dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0054dde7: ADD EAX,0x34
//   Label: LAB_0054dde7
// 0054ddea: CMP EAX,ESI
// 0054ddec: JNZ 0x0054ddda
//   XREF to: 0054ddda (CONDITIONAL_JUMP)
// 0054ddee: PUSH 0x63f93b
//   XREF to: 0063f93b (DATA)
// 0054ddf3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x14] (DATA)
// 0054ddf7: PUSH EAX
// 0054ddf8: LEA EBP,[EDI + 0x51c]
// 0054ddfe: XOR EBX,EBX
// 0054de00: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054de05: MOV ESI,EDI
// 0054de07: ADD ESP,0x8
// 0054de0a: IMUL EAX,EBX,0x34
//   Label: LAB_0054de0a
// 0054de0d: CMP dword ptr [ESI + 0x51c],0x0
// 0054de14: JZ 0x0054de26
//   XREF to: 0054de26 (CONDITIONAL_JUMP)
// 0054de16: PUSH 0x63f947
//   XREF to: 0063f947 (DATA)
// 0054de1b: ADD EAX,EBP
// 0054de1d: PUSH EAX
// 0054de1e: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 0054de23: ADD ESP,0x8
// 0054de26: INC EBX
//   Label: LAB_0054de26
// 0054de27: ADD ESI,0x34
// 0054de2a: CMP EBX,0xa
// 0054de2d: JL 0x0054de0a
//   XREF to: 0054de0a (CONDITIONAL_JUMP)
// 0054de2f: NOP
// 0054de30: CMP dword ptr [0x00680cbc],0x9
//   Label: LAB_0054de30
//   XREF to: 00680cbc (READ)
// 0054de37: JL 0x0054de4d
//   XREF to: 0054de4d (CONDITIONAL_JUMP)
// 0054de39: PUSH 0x63f954
//   XREF to: 0063f954 (DATA)
// 0054de3e: LEA EAX,[EDI + 0x510]
// 0054de44: PUSH EAX
// 0054de45: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054de4a: ADD ESP,0x8
// 0054de4d: CMP dword ptr [0x00680cbc],0xa
//   Label: LAB_0054de4d
//   XREF to: 00680cbc (READ)
// 0054de54: JL 0x0054de6a
//   XREF to: 0054de6a (CONDITIONAL_JUMP)
// 0054de56: PUSH 0x63f95d
//   XREF to: 0063f95d (DATA)
// 0054de5b: LEA EAX,[EDI + 0x514]
// 0054de61: PUSH EAX
// 0054de62: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054de67: ADD ESP,0x8
// 0054de6a: CMP dword ptr [0x00680cbc],0xb
//   Label: LAB_0054de6a
//   XREF to: 00680cbc (READ)
// 0054de71: JGE 0x0054df5a
//   XREF to: 0054df5a (CONDITIONAL_JUMP)
// 0054de77: ADD ESP,0xc
// 0054de7a: POP EBP
// 0054de7b: POP EDI
// 0054de7c: POP ESI
// 0054de7d: POP EBX
// 0054de7e: RET
// 0054de7f: PUSH 0x63f7fa
//   Label: LAB_0054de7f
//   XREF to: 0063f7fa (DATA)
// 0054de84: LEA EAX,[EDI + 0x31c]
// 0054de8a: PUSH EAX
// 0054de8b: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0054de90: ADD ESP,0x8
// 0054de93: PUSH 0x63f803
//   XREF to: 0063f803 (DATA)
// 0054de98: LEA EAX,[EDI + 0x334]
// 0054de9e: PUSH EAX
// 0054de9f: CALL core_actor.cpp_serializeQuaternion_FUN_0040b520
//   XREF to: 0040b520 (UNCONDITIONAL_CALL)
// 0054dea4: ADD ESP,0x8
// 0054dea7: PUSH 0x63f80e
//   XREF to: 0063f80e (DATA)
// 0054deac: LEA EAX,[EDI + 0x328]
// 0054deb2: PUSH EAX
// 0054deb3: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0054deb8: ADD ESP,0x8
// 0054debb: PUSH 0x63f815
//   XREF to: 0063f815 (DATA)
// 0054dec0: LEA EAX,[EDI + 0x344]
// 0054dec6: PUSH EAX
// 0054dec7: CALL core_actor.cpp_serializeQuaternion_FUN_0040b520
//   XREF to: 0040b520 (UNCONDITIONAL_CALL)
// 0054decc: ADD ESP,0x8
// 0054decf: JMP 0x0054dc82
//   XREF to: 0054dc82 (UNCONDITIONAL_JUMP)
// 0054ded4: MOV EAX,dword ptr [EDI + 0x2ec]
//   Label: LAB_0054ded4
// 0054deda: MOV dword ptr [EDI + 0x2e8],EAX
// 0054dee0: JMP 0x0054dce1
//   XREF to: 0054dce1 (UNCONDITIONAL_JUMP)
// 0054dee5: PUSH 0x63f8df
//   Label: LAB_0054dee5
//   XREF to: 0063f8df (DATA)
// 0054deea: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 0054deee: PUSH EAX
// 0054deef: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054def4: ADD ESP,0x8
// 0054def7: CMP dword ptr [ESP],0xa
//   XREF to: Stack[-0x1c] (DATA)
// 0054defb: JLE 0x0054df1f
//   XREF to: 0054df1f (CONDITIONAL_JUMP)
// 0054defd: MOV EBP,0x63f8eb
//   XREF to: 0063f8eb (DATA)
// 0054df02: MOV EAX,0x316
// 0054df07: PUSH 0x63f8ff
//   XREF to: 0063f8ff (DATA)
// 0054df0c: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0054df12: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0054df17: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054df1c: ADD ESP,0x4
// 0054df1f: MOV EDX,dword ptr [ESP]
//   Label: LAB_0054df1f
//   XREF to: Stack[-0x1c] (DATA)
// 0054df22: XOR ESI,ESI
// 0054df24: TEST EDX,EDX
// 0054df26: JLE 0x0054de30
//   XREF to: 0054de30 (CONDITIONAL_JUMP)
// 0054df2c: MOV EBX,EDI
// 0054df2e: PUSH 0x63f92e
//   Label: LAB_0054df2e
//   XREF to: 0063f92e (DATA)
// 0054df33: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x18] (DATA)
// 0054df37: PUSH EAX
// 0054df38: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 0054df3d: ADD ESP,0x8
// 0054df40: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0054df44: MOV dword ptr [EBX + 0x51c],EAX
// 0054df4a: INC ESI
// 0054df4b: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0054df4e: ADD EBX,0x34
// 0054df51: CMP ESI,ECX
// 0054df53: JL 0x0054df2e
//   XREF to: 0054df2e (CONDITIONAL_JUMP)
// 0054df55: JMP 0x0054de30
//   XREF to: 0054de30 (UNCONDITIONAL_JUMP)
// 0054df5a: PUSH 0x63f96a
//   Label: LAB_0054df5a
//   XREF to: 0063f96a (DATA)
// 0054df5f: ADD EDI,0x518
// 0054df65: PUSH EDI
// 0054df66: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0054df6b: ADD ESP,0x8
// 0054df6e: ADD ESP,0xc
// 0054df71: POP EBP
// 0054df72: POP EDI
// 0054df73: POP ESI
// 0054df74: POP EBX
// 0054df75: RET
