// Name: core_glass.cpp_CGlass_serialize_FUN_004ea090
// Address: 004ea090
// Address Range: [[004ea090, 004ea18d]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_serialize_FUN_004ea090(CGlass * this_ptr)
// Globals:
//   TerminatedCString s_glassSize_0062e069
//   TerminatedCString s_glassTexture_0062e073
//   TerminatedCString s_opacity_0062e080
//   TerminatedCString s_shattered_0062e088
//   TerminatedCString s_breakEvent_0062e092
//   TerminatedCString s_mirrorFlag_0062e09d
//   TerminatedCString s_breakableCondition_0062e0a8
//   TerminatedCString s_backgroundFlag_0062e0bb
//   TerminatedCString s_brokenTexture_0062e0ca
//   int g_CGlassClassVersion = 0x6
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_serialize_FUN_004ea090(CGlass *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->glass_size,"glassSize");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->glass_texture,"glassTexture");
  if (1 < g_CGlassClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->opacity,"opacity");
  }
  if (2 < g_CGlassClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->shattered,"shattered");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)this_ptr->break_event,"breakEvent");
  }
  if (3 < g_CGlassClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->mirror_flag,"mirrorFlag");
  }
  if (4 < g_CGlassClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)this_ptr->breakable_condition,"breakableCondition");
  }
  if (g_CGlassClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->background_flag,"backgroundFlag")
  ;
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->broken_texture,"brokenTexture");
  return;
}


// Assembly code:
// 004ea090: PUSH EBX
//   Label: core_glass.cpp_CGlass_serialize_FUN_004ea090
// 004ea091: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004ea095: PUSH EBX
// 004ea096: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004ea09b: ADD ESP,0x4
// 004ea09e: PUSH 0x62e069
//   XREF to: 0062e069 (DATA)
// 004ea0a3: LEA EAX,[EBX + 0x158]
// 004ea0a9: PUSH EAX
// 004ea0aa: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 004ea0af: ADD ESP,0x8
// 004ea0b2: PUSH 0x62e073
//   XREF to: 0062e073 (DATA)
// 004ea0b7: LEA EAX,[EBX + 0x16c]
// 004ea0bd: PUSH EAX
// 004ea0be: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004ea0c3: MOV EDX,dword ptr [0x0067b944]
//   XREF to: 0067b944 (READ)
// 004ea0c9: ADD ESP,0x8
// 004ea0cc: CMP EDX,0x2
// 004ea0cf: JGE 0x004ea14b
//   XREF to: 004ea14b (CONDITIONAL_JUMP)
// 004ea0d5: CMP dword ptr [0x0067b944],0x3
//   Label: LAB_004ea0d5
//   XREF to: 0067b944 (READ)
// 004ea0dc: JL 0x004ea106
//   XREF to: 004ea106 (CONDITIONAL_JUMP)
// 004ea0de: PUSH 0x62e088
//   XREF to: 0062e088 (DATA)
// 004ea0e3: LEA EAX,[EBX + 0x180]
// 004ea0e9: PUSH EAX
// 004ea0ea: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004ea0ef: ADD ESP,0x8
// 004ea0f2: PUSH 0x62e092
//   XREF to: 0062e092 (DATA)
// 004ea0f7: LEA EAX,[EBX + 0x184]
// 004ea0fd: PUSH EAX
// 004ea0fe: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004ea103: ADD ESP,0x8
// 004ea106: CMP dword ptr [0x0067b944],0x4
//   Label: LAB_004ea106
//   XREF to: 0067b944 (READ)
// 004ea10d: JL 0x004ea123
//   XREF to: 004ea123 (CONDITIONAL_JUMP)
// 004ea10f: PUSH 0x62e09d
//   XREF to: 0062e09d (DATA)
// 004ea114: LEA EAX,[EBX + 0x1e8]
// 004ea11a: PUSH EAX
// 004ea11b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004ea120: ADD ESP,0x8
// 004ea123: CMP dword ptr [0x0067b944],0x5
//   Label: LAB_004ea123
//   XREF to: 0067b944 (READ)
// 004ea12a: JL 0x004ea140
//   XREF to: 004ea140 (CONDITIONAL_JUMP)
// 004ea12c: PUSH 0x62e0a8
//   XREF to: 0062e0a8 (DATA)
// 004ea131: LEA EAX,[EBX + 0x30c]
// 004ea137: PUSH EAX
// 004ea138: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004ea13d: ADD ESP,0x8
// 004ea140: CMP dword ptr [0x0067b944],0x6
//   Label: LAB_004ea140
//   XREF to: 0067b944 (READ)
// 004ea147: JGE 0x004ea164
//   XREF to: 004ea164 (CONDITIONAL_JUMP)
// 004ea149: POP EBX
// 004ea14a: RET
// 004ea14b: PUSH 0x62e080
//   Label: LAB_004ea14b
//   XREF to: 0062e080 (DATA)
// 004ea150: LEA EAX,[EBX + 0x17c]
// 004ea156: PUSH EAX
// 004ea157: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004ea15c: ADD ESP,0x8
// 004ea15f: JMP 0x004ea0d5
//   XREF to: 004ea0d5 (UNCONDITIONAL_JUMP)
// 004ea164: PUSH 0x62e0bb
//   Label: LAB_004ea164
//   XREF to: 0062e0bb (DATA)
// 004ea169: LEA EAX,[EBX + 0x370]
// 004ea16f: PUSH EAX
// 004ea170: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004ea175: ADD ESP,0x8
// 004ea178: PUSH 0x62e0ca
//   XREF to: 0062e0ca (DATA)
// 004ea17d: ADD EBX,0x37c
// 004ea183: PUSH EBX
// 004ea184: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004ea189: ADD ESP,0x8
// 004ea18c: POP EBX
// 004ea18d: RET
