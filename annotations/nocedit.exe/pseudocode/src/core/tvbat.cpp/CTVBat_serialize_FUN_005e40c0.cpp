// Name: core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0
// Address: 005e40c0
// Address Range: [[005e40c0, 005e4208]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0(CTVBat * this_ptr)
// Globals:
//   undefined4 s_homePos_006568ae
//   TerminatedCString s_modelName_006568b6
//   TerminatedCString s_speed_006568c0
//   TerminatedCString s_maxDistance_006568c6
//   TerminatedCString s_maxHeight_006568d2
//   TerminatedCString s_rotSpeed_006568dc
//   TerminatedCString s_moveSpeed_006568e5
//   TerminatedCString s_followOrders_006568ef
//   TerminatedCString s_state_006568fc
//   TerminatedCString s_periodicSoundTimerMin_00656902
//   TerminatedCString s_periodicSoundTimerMax_00656918
//   int g_CTVBatClassVersion = 0x5
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_serialize_FUN_005e40c0(CTVBat *this_ptr)

{
  if (g_CTVBatClassVersion < 3) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)this_ptr);
  }
  else {
    core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  }
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->home_pos,"@homePos" + 1);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(this_ptr->field1_0xbeb4 + 0xc),"modelName");
  if (1 < g_CTVBatClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->speed,"speed");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->max_distance,"maxDistance");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->max_height,"maxHeight");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->rot_speed,"rotSpeed");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->move_speed,"moveSpeed");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->follow_orders,"followOrders");
  }
  if (g_CTVBatClassVersion < 4) {
    this_ptr->state = 0;
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->state,"state");
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->field13_0xc07c,(char *)0x0);
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}


// Assembly code:
// 005e40c0: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0
// 005e40c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e40c5: CMP dword ptr [0x00684450],0x3
//   XREF to: 00684450 (READ)
// 005e40cc: JL 0x005e41ae
//   XREF to: 005e41ae (CONDITIONAL_JUMP)
// 005e40d2: PUSH EBX
// 005e40d3: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 005e40d8: ADD ESP,0x4
//   Label: LAB_005e40d8
// 005e40db: PUSH 0x6568ae
//   XREF to: 006568ae (DATA)
// 005e40e0: LEA EAX,[EBX + 0xc044]
// 005e40e6: PUSH EAX
// 005e40e7: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 005e40ec: ADD ESP,0x8
// 005e40ef: PUSH 0x6568b6
//   XREF to: 006568b6 (DATA)
// 005e40f4: LEA EAX,[EBX + 0xbec0]
// 005e40fa: PUSH EAX
// 005e40fb: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005e4100: MOV ECX,dword ptr [0x00684450]
//   XREF to: 00684450 (READ)
// 005e4106: ADD ESP,0x8
// 005e4109: CMP ECX,0x2
// 005e410c: JL 0x005e4186
//   XREF to: 005e4186 (CONDITIONAL_JUMP)
// 005e410e: PUSH 0x6568c0
//   XREF to: 006568c0 (DATA)
// 005e4113: LEA EAX,[EBX + 0xc03c]
// 005e4119: PUSH EAX
// 005e411a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e411f: ADD ESP,0x8
// 005e4122: PUSH 0x6568c6
//   XREF to: 006568c6 (DATA)
// 005e4127: LEA EAX,[EBX + 0xc050]
// 005e412d: PUSH EAX
// 005e412e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e4133: ADD ESP,0x8
// 005e4136: PUSH 0x6568d2
//   XREF to: 006568d2 (DATA)
// 005e413b: LEA EAX,[EBX + 0xc054]
// 005e4141: PUSH EAX
// 005e4142: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e4147: ADD ESP,0x8
// 005e414a: PUSH 0x6568dc
//   XREF to: 006568dc (DATA)
// 005e414f: LEA EAX,[EBX + 0xc058]
// 005e4155: PUSH EAX
// 005e4156: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e415b: ADD ESP,0x8
// 005e415e: PUSH 0x6568e5
//   XREF to: 006568e5 (DATA)
// 005e4163: LEA EAX,[EBX + 0xc05c]
// 005e4169: PUSH EAX
// 005e416a: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e416f: ADD ESP,0x8
// 005e4172: PUSH 0x6568ef
//   XREF to: 006568ef (DATA)
// 005e4177: LEA EAX,[EBX + 0xc064]
// 005e417d: PUSH EAX
// 005e417e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e4183: ADD ESP,0x8
// 005e4186: CMP dword ptr [0x00684450],0x4
//   Label: LAB_005e4186
//   XREF to: 00684450 (READ)
// 005e418d: JL 0x005e41b9
//   XREF to: 005e41b9 (CONDITIONAL_JUMP)
// 005e418f: PUSH 0x6568fc
//   XREF to: 006568fc (DATA)
// 005e4194: LEA EAX,[EBX + 0xc078]
// 005e419a: PUSH EAX
// 005e419b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e41a0: ADD ESP,0x8
// 005e41a3: CMP dword ptr [0x00684450],0x5
//   XREF to: 00684450 (READ)
// 005e41aa: JGE 0x005e41ce
//   XREF to: 005e41ce (CONDITIONAL_JUMP)
// 005e41ac: POP EBX
// 005e41ad: RET
// 005e41ae: PUSH EBX
//   Label: LAB_005e41ae
// 005e41af: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005e41b4: JMP 0x005e40d8
//   XREF to: 005e40d8 (UNCONDITIONAL_JUMP)
// 005e41b9: MOV dword ptr [EBX + 0xc078],0x0
//   Label: LAB_005e41b9
// 005e41c3: CMP dword ptr [0x00684450],0x5
//   XREF to: 00684450 (READ)
// 005e41ca: JGE 0x005e41ce
//   XREF to: 005e41ce (CONDITIONAL_JUMP)
// 005e41cc: POP EBX
// 005e41cd: RET
// 005e41ce: PUSH 0x0
//   Label: LAB_005e41ce
// 005e41d0: LEA EAX,[EBX + 0xc07c]
// 005e41d6: PUSH EAX
// 005e41d7: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e41dc: ADD ESP,0x8
// 005e41df: PUSH 0x656902
//   XREF to: 00656902 (DATA)
// 005e41e4: LEA EAX,[EBX + 0xc0e0]
// 005e41ea: PUSH EAX
// 005e41eb: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e41f0: ADD ESP,0x8
// 005e41f3: PUSH 0x656918
//   XREF to: 00656918 (DATA)
// 005e41f8: ADD EBX,0xc0e4
// 005e41fe: PUSH EBX
// 005e41ff: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e4204: ADD ESP,0x8
// 005e4207: POP EBX
// 005e4208: RET
