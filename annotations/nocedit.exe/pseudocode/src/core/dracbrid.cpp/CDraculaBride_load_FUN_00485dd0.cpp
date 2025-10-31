// Name: core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0
// Address: 00485dd0
// Address Range: [[00485dd0, 00486019]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0()
// Globals:
//   TerminatedCString s_speed_00621b1e
//   TerminatedCString s_modelName_00621b24
//   TerminatedCString s_guardDistance_00621b2e
//   TerminatedCString s_riseEvent_00621b3c
//   TerminatedCString s_initialState_00621b46
//   TerminatedCString s_vincoffin_00621b53
//   TerminatedCString s_incoffin_00621b5d
//   TerminatedCString s_motionState_00621b66
//   TerminatedCString s_clothCount_00621b72
//   TerminatedCString s_freakyVoiceNumber_00621b7d
//   TerminatedCString s_exploded_00621b8f
//   TerminatedCString s_partCount_00621b98
//   TerminatedCString s_fadeTimer_00621ba2
//   TerminatedCString s_partList_00621bac
//   TerminatedCString s_mistState_00621bb5
//   TerminatedCString s_vanishTimer_00621bbf
//   TerminatedCString s_newPos_00621bcb
//   int g_CDraculaBrideClassVersion = 0x9
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   core_motion.cpp_CMotionController_FUN_0052ddb0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_CDraculaBride_load(CDraculaBride*
   pDraculaBride) */

void core_dracbrid_cpp_CDraculaBride_load_FUN_00485dd0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *string_buffer;
  CDemonActor *actor_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  if (g_CDraculaBrideClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  }
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if ((1 < g_CDraculaBrideClassVersion) && (g_CDraculaBrideClassVersion < 6)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  if (2 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base_character.base_actor.location.area_id,
               "riseEvent");
    if ((g_CDraculaBrideClassVersion < 4) &&
       (core_actor_cpp_serializeInteger_FUN_0040b7f0
                  ((int *)&stack0xfffffffc,"initialState"), g_ActorReadingMode == 1)) {
      core_motion_cpp_CMotionController_FUN_0052ddb0();
    }
  }
  if (3 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(in_stack_00000004->base_character).model,"motionState");
  }
  if (g_CDraculaBrideClassVersion == 4) {
    iVar1 = 0;
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&(in_stack_00000004->base_character).cloth_count,"clothCount");
    if (0 < (in_stack_00000004->base_character).cloth_count) {
      string_buffer = (in_stack_00000004->base_character).cloth_data;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_serializeString_FUN_0040b5c0((char **)string_buffer,(char *)0x0);
        string_buffer = string_buffer + 0x28;
      } while (iVar1 < (in_stack_00000004->base_character).cloth_count);
    }
  }
  if (6 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x18),
               "freakyVoiceNumber");
  }
  if (7 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base_character.base_actor.metadata.runtime_vector1.z,
               "exploded");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c),
               "partCount");
    iVar1 = 0;
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].base_character.base_actor.metadata.runtime_vector2.x,
               "fadeTimer");
    if (0 < *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c)) {
      actor_ptr = (CDemonActor *)
                  (in_stack_00000004[1].base_character.base_actor.create_event + 0x40);
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_serializeActor_FUN_0040b870(actor_ptr,"partList");
        actor_ptr = (CDemonActor *)(actor_ptr->actor_name + 4);
      } while (iVar1 < *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c))
      ;
    }
  }
  if (g_CDraculaBrideClassVersion < 9) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x1c),
             "mistState");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x20),
             "vanishTimer");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x2c),
             "newPos");
  return;
}


// Assembly code:
// 00485dd0: PUSH EBX
//   Label: core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0
// 00485dd1: PUSH ESI
// 00485dd2: PUSH EDI
// 00485dd3: PUSH EBP
// 00485dd4: SUB ESP,0x4
// 00485dd7: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00485ddb: PUSH EDI
// 00485ddc: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 00485de1: MOV EDX,dword ptr [0x006703b0]
//   XREF to: 006703b0 (READ)
// 00485de7: ADD ESP,0x4
// 00485dea: CMP EDX,0x2
// 00485ded: JL 0x00485fb1
//   XREF to: 00485fb1 (CONDITIONAL_JUMP)
// 00485df3: PUSH 0x621b24
//   Label: LAB_00485df3
//   XREF to: 00621b24 (DATA)
// 00485df8: LEA EAX,[EDI + 0x158]
// 00485dfe: PUSH EAX
// 00485dff: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00485e04: MOV ECX,dword ptr [0x006703b0]
//   XREF to: 006703b0 (READ)
// 00485e0a: ADD ESP,0x8
// 00485e0d: CMP ECX,0x2
// 00485e10: JL 0x00485e2b
//   XREF to: 00485e2b (CONDITIONAL_JUMP)
// 00485e12: CMP ECX,0x6
// 00485e15: JGE 0x00485e2b
//   XREF to: 00485e2b (CONDITIONAL_JUMP)
// 00485e17: PUSH 0x621b2e
//   XREF to: 00621b2e (DATA)
// 00485e1c: LEA EAX,[EDI + 0xbe34]
// 00485e22: PUSH EAX
// 00485e23: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00485e28: ADD ESP,0x8
// 00485e2b: CMP dword ptr [0x006703b0],0x3
//   Label: LAB_00485e2b
//   XREF to: 006703b0 (READ)
// 00485e32: JL 0x00485e91
//   XREF to: 00485e91 (CONDITIONAL_JUMP)
// 00485e34: PUSH 0x621b3c
//   XREF to: 00621b3c (DATA)
// 00485e39: LEA EAX,[EDI + 0xbee0]
// 00485e3f: PUSH EAX
// 00485e40: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00485e45: MOV EBP,dword ptr [0x006703b0]
//   XREF to: 006703b0 (READ)
// 00485e4b: ADD ESP,0x8
// 00485e4e: CMP EBP,0x4
// 00485e51: JGE 0x00485e91
//   XREF to: 00485e91 (CONDITIONAL_JUMP)
// 00485e53: PUSH 0x621b46
//   XREF to: 00621b46 (DATA)
// 00485e58: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00485e5c: PUSH EAX
// 00485e5d: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00485e62: MOV EAX,[0x00822038]
//   XREF to: 00822038 (READ)
// 00485e67: ADD ESP,0x8
// 00485e6a: CMP EAX,0x1
// 00485e6d: JNZ 0x00485e91
//   XREF to: 00485e91 (CONDITIONAL_JUMP)
// 00485e6f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00485e72: LEA EAX,[EDI + 0x158]
// 00485e78: CMP EDX,0x1
// 00485e7b: JNZ 0x00485fca
//   XREF to: 00485fca (CONDITIONAL_JUMP)
// 00485e81: PUSH 0x0
// 00485e83: PUSH 0x621b53
//   XREF to: 00621b53 (DATA)
// 00485e88: PUSH EAX
//   Label: LAB_00485e88
// 00485e89: CALL core_motion.cpp_CMotionController_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 00485e8e: ADD ESP,0xc
// 00485e91: CMP dword ptr [0x006703b0],0x4
//   Label: LAB_00485e91
//   XREF to: 006703b0 (READ)
// 00485e98: JL 0x00485eae
//   XREF to: 00485eae (CONDITIONAL_JUMP)
// 00485e9a: PUSH 0x621b66
//   XREF to: 00621b66 (DATA)
// 00485e9f: LEA EAX,[EDI + 0x158]
// 00485ea5: PUSH EAX
// 00485ea6: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00485eab: ADD ESP,0x8
// 00485eae: CMP dword ptr [0x006703b0],0x4
//   Label: LAB_00485eae
//   XREF to: 006703b0 (READ)
// 00485eb5: JNZ 0x00485f00
//   XREF to: 00485f00 (CONDITIONAL_JUMP)
// 00485eb7: PUSH 0x621b72
//   XREF to: 00621b72 (DATA)
// 00485ebc: LEA EAX,[EDI + 0x2a94]
// 00485ec2: PUSH EAX
// 00485ec3: XOR EBX,EBX
// 00485ec5: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00485eca: MOV ESI,dword ptr [EDI + 0x2a94]
// 00485ed0: ADD ESP,0x8
// 00485ed3: TEST ESI,ESI
// 00485ed5: JLE 0x00485f00
//   XREF to: 00485f00 (CONDITIONAL_JUMP)
// 00485ed7: LEA ESI,[EDI + 0x2a98]
// 00485edd: PUSH 0x0
//   Label: LAB_00485edd
// 00485edf: PUSH ESI
// 00485ee0: INC EBX
// 00485ee1: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00485ee6: ADD ESP,0x8
// 00485ee9: MOV EBP,dword ptr [EDI + 0x2a94]
// 00485eef: ADD ESI,0x28
// 00485ef2: CMP EBX,EBP
// 00485ef4: JL 0x00485edd
//   XREF to: 00485edd (CONDITIONAL_JUMP)
// 00485ef6: LEA EAX,[EAX]
// 00485efc: LEA EDX,[EDX]
// 00485f00: CMP dword ptr [0x006703b0],0x7
//   Label: LAB_00485f00
//   XREF to: 006703b0 (READ)
// 00485f07: JL 0x00485f1d
//   XREF to: 00485f1d (CONDITIONAL_JUMP)
// 00485f09: PUSH 0x621b7d
//   XREF to: 00621b7d (DATA)
// 00485f0e: LEA EAX,[EDI + 0xbf44]
// 00485f14: PUSH EAX
// 00485f15: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00485f1a: ADD ESP,0x8
// 00485f1d: CMP dword ptr [0x006703b0],0x8
//   Label: LAB_00485f1d
//   XREF to: 006703b0 (READ)
// 00485f24: JL 0x00485fa0
//   XREF to: 00485fa0 (CONDITIONAL_JUMP)
// 00485f2a: PUSH 0x621b8f
//   XREF to: 00621b8f (DATA)
// 00485f2f: LEA EAX,[EDI + 0xbfe4]
// 00485f35: PUSH EAX
// 00485f36: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00485f3b: ADD ESP,0x8
// 00485f3e: PUSH 0x621b98
//   XREF to: 00621b98 (DATA)
// 00485f43: LEA EAX,[EDI + 0xbf68]
// 00485f49: PUSH EAX
// 00485f4a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00485f4f: ADD ESP,0x8
// 00485f52: PUSH 0x621ba2
//   XREF to: 00621ba2 (DATA)
// 00485f57: LEA EAX,[EDI + 0xbfe8]
// 00485f5d: PUSH EAX
// 00485f5e: XOR EBX,EBX
// 00485f60: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00485f65: MOV ECX,dword ptr [EDI + 0xbf68]
// 00485f6b: ADD ESP,0x8
// 00485f6e: TEST ECX,ECX
// 00485f70: JLE 0x00485fa0
//   XREF to: 00485fa0 (CONDITIONAL_JUMP)
// 00485f72: LEA ESI,[EDI + 0xbf6c]
// 00485f78: PUSH 0x621bac
//   Label: LAB_00485f78
//   XREF to: 00621bac (DATA)
// 00485f7d: PUSH ESI
// 00485f7e: INC EBX
// 00485f7f: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00485f84: ADD ESP,0x8
// 00485f87: MOV EBP,dword ptr [EDI + 0xbf68]
// 00485f8d: ADD ESI,0x4
// 00485f90: CMP EBX,EBP
// 00485f92: JL 0x00485f78
//   XREF to: 00485f78 (CONDITIONAL_JUMP)
// 00485f94: LEA EAX,[EAX]
// 00485f9a: LEA EDX,[EDX]
// 00485fa0: CMP dword ptr [0x006703b0],0x9
//   Label: LAB_00485fa0
//   XREF to: 006703b0 (READ)
// 00485fa7: JGE 0x00485fd6
//   XREF to: 00485fd6 (CONDITIONAL_JUMP)
// 00485fa9: ADD ESP,0x4
// 00485fac: POP EBP
// 00485fad: POP EDI
// 00485fae: POP ESI
// 00485faf: POP EBX
// 00485fb0: RET
// 00485fb1: PUSH 0x621b1e
//   Label: LAB_00485fb1
//   XREF to: 00621b1e (DATA)
// 00485fb6: LEA EAX,[EDI + 0xbe24]
// 00485fbc: PUSH EAX
// 00485fbd: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00485fc2: ADD ESP,0x8
// 00485fc5: JMP 0x00485df3
//   XREF to: 00485df3 (UNCONDITIONAL_JUMP)
// 00485fca: PUSH 0x0
//   Label: LAB_00485fca
// 00485fcc: PUSH 0x621b5d
//   XREF to: 00621b5d (DATA)
// 00485fd1: JMP 0x00485e88
//   XREF to: 00485e88 (UNCONDITIONAL_JUMP)
// 00485fd6: PUSH 0x621bb5
//   Label: LAB_00485fd6
//   XREF to: 00621bb5 (DATA)
// 00485fdb: LEA EAX,[EDI + 0xbf48]
// 00485fe1: PUSH EAX
// 00485fe2: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00485fe7: ADD ESP,0x8
// 00485fea: PUSH 0x621bbf
//   XREF to: 00621bbf (DATA)
// 00485fef: LEA EAX,[EDI + 0xbf4c]
// 00485ff5: PUSH EAX
// 00485ff6: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00485ffb: ADD ESP,0x8
// 00485ffe: PUSH 0x621bcb
//   XREF to: 00621bcb (DATA)
// 00486003: ADD EDI,0xbf58
// 00486009: PUSH EDI
// 0048600a: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0048600f: ADD ESP,0x8
// 00486012: ADD ESP,0x4
// 00486015: POP EBP
// 00486016: POP EDI
// 00486017: POP ESI
// 00486018: POP EBX
// 00486019: RET
