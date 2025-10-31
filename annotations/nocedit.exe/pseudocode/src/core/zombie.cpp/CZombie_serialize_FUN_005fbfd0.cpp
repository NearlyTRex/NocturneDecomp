// Name: core_zombie.cpp_CZombie_serialize_FUN_005fbfd0
// Address: 005fbfd0
// Address Range: [[005fbfd0, 005fc118]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_serialize_FUN_005fbfd0(CZombie * this_ptr)
// Globals:
//   TerminatedCString s_speed_00658926
//   TerminatedCString s_modelName_0065892c
//   TerminatedCString s_guardDistance_00658936
//   TerminatedCString s_motion_state_00658944
//   TerminatedCString s_partStatus_00658951
//   TerminatedCString s_carriedActor_0065895c
//   TerminatedCString s_riseFromGraveCondition_00658969
//   TerminatedCString s_graveActor_00658980
//   TerminatedCString s_clothList_0065898b
//   TerminatedCString s_isMinerZombie_00658995
//   TerminatedCString s_alwaysChaseFast_006589a3
//   int g_CZombieClassVersion = 0xb
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeClothList_FUN_0040be60
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializePartStatus_FUN_0040bae0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_serialize_FUN_005fbfd0(CZombie *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base_enemy).speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base_enemy).base_character.model,"modelName");
  if (1 < g_CZombieClassVersion) {
    if (g_CZombieClassVersion < 0xb) {
      core_actor_cpp_serializeFloat_FUN_0040b770
                (&(this_ptr->base_enemy).guard_distance,"guardDistance");
    }
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(this_ptr->base_enemy).base_character.model,"motion state");
  }
  if (2 < g_CZombieClassVersion) {
    core_actor_cpp_serializePartStatus_FUN_0040bae0
              (&(this_ptr->base_enemy).base_character.model,"partStatus");
    if (g_CZombieClassVersion < 7) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)&(this_ptr->base_enemy).base_character.carry_hands[1].carry_actor,
                 "carriedActor");
    }
  }
  if (3 < g_CZombieClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->field1_0xbeb4 + 0x28),"riseFromGraveCondition");
  }
  if (4 < g_CZombieClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field1_0xbeb4 + 0x20),"graveActor");
  }
  if ((5 < g_CZombieClassVersion) && (g_CZombieClassVersion < 9)) {
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&(this_ptr->base_enemy).base_character.cloth_count,"clothList"
              );
  }
  if (7 < g_CZombieClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->is_miner_zombie,"isMinerZombie");
  }
  if (g_CZombieClassVersion < 10) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&this_ptr->always_chase_fast,"alwaysChaseFast");
  return;
}


// Assembly code:
// 005fbfd0: PUSH EBX
//   Label: core_zombie.cpp_CZombie_serialize_FUN_005fbfd0
// 005fbfd1: PUSH EDI
// 005fbfd2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fbfd6: PUSH EBX
// 005fbfd7: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 005fbfdc: ADD ESP,0x4
// 005fbfdf: PUSH 0x658926
//   XREF to: 00658926 (DATA)
// 005fbfe4: LEA EAX,[EBX + 0xbe24]
// 005fbfea: PUSH EAX
// 005fbfeb: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005fbff0: ADD ESP,0x8
// 005fbff3: PUSH 0x65892c
//   XREF to: 0065892c (DATA)
// 005fbff8: LEA EAX,[EBX + 0x158]
// 005fbffe: PUSH EAX
// 005fbfff: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 005fc004: MOV EDX,dword ptr [0x006849b0]
//   XREF to: 006849b0 (READ)
// 005fc00a: ADD ESP,0x8
// 005fc00d: CMP EDX,0x2
// 005fc010: JL 0x005fc03f
//   XREF to: 005fc03f (CONDITIONAL_JUMP)
// 005fc012: CMP EDX,0xb
// 005fc015: JGE 0x005fc02b
//   XREF to: 005fc02b (CONDITIONAL_JUMP)
// 005fc017: PUSH 0x658936
//   XREF to: 00658936 (DATA)
// 005fc01c: LEA EAX,[EBX + 0xbe34]
// 005fc022: PUSH EAX
// 005fc023: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005fc028: ADD ESP,0x8
// 005fc02b: PUSH 0x658944
//   Label: LAB_005fc02b
//   XREF to: 00658944 (DATA)
// 005fc030: LEA EAX,[EBX + 0x158]
// 005fc036: PUSH EAX
// 005fc037: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005fc03c: ADD ESP,0x8
// 005fc03f: CMP dword ptr [0x006849b0],0x3
//   Label: LAB_005fc03f
//   XREF to: 006849b0 (READ)
// 005fc046: JL 0x005fc07b
//   XREF to: 005fc07b (CONDITIONAL_JUMP)
// 005fc048: PUSH 0x658951
//   XREF to: 00658951 (DATA)
// 005fc04d: LEA EAX,[EBX + 0x158]
// 005fc053: PUSH EAX
// 005fc054: CALL core_actor.cpp_serializePartStatus_FUN_0040bae0
//   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
// 005fc059: MOV EDI,dword ptr [0x006849b0]
//   XREF to: 006849b0 (READ)
// 005fc05f: ADD ESP,0x8
// 005fc062: CMP EDI,0x7
// 005fc065: JGE 0x005fc07b
//   XREF to: 005fc07b (CONDITIONAL_JUMP)
// 005fc067: PUSH 0x65895c
//   XREF to: 0065895c (DATA)
// 005fc06c: LEA EAX,[EBX + 0x24f8]
// 005fc072: PUSH EAX
// 005fc073: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005fc078: ADD ESP,0x8
// 005fc07b: CMP dword ptr [0x006849b0],0x4
//   Label: LAB_005fc07b
//   XREF to: 006849b0 (READ)
// 005fc082: JL 0x005fc098
//   XREF to: 005fc098 (CONDITIONAL_JUMP)
// 005fc084: PUSH 0x658969
//   XREF to: 00658969 (DATA)
// 005fc089: LEA EAX,[EBX + 0xbedc]
// 005fc08f: PUSH EAX
// 005fc090: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005fc095: ADD ESP,0x8
// 005fc098: CMP dword ptr [0x006849b0],0x5
//   Label: LAB_005fc098
//   XREF to: 006849b0 (READ)
// 005fc09f: JL 0x005fc0b5
//   XREF to: 005fc0b5 (CONDITIONAL_JUMP)
// 005fc0a1: PUSH 0x658980
//   XREF to: 00658980 (DATA)
// 005fc0a6: LEA EAX,[EBX + 0xbed4]
// 005fc0ac: PUSH EAX
// 005fc0ad: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005fc0b2: ADD ESP,0x8
// 005fc0b5: MOV EDX,dword ptr [0x006849b0]
//   Label: LAB_005fc0b5
//   XREF to: 006849b0 (READ)
// 005fc0bb: CMP EDX,0x6
// 005fc0be: JL 0x005fc0d9
//   XREF to: 005fc0d9 (CONDITIONAL_JUMP)
// 005fc0c0: CMP EDX,0x9
// 005fc0c3: JGE 0x005fc0d9
//   XREF to: 005fc0d9 (CONDITIONAL_JUMP)
// 005fc0c5: PUSH 0x65898b
//   XREF to: 0065898b (DATA)
// 005fc0ca: LEA EAX,[EBX + 0x2a94]
// 005fc0d0: PUSH EAX
// 005fc0d1: CALL core_actor.cpp_serializeClothList_FUN_0040be60
//   XREF to: 0040be60 (UNCONDITIONAL_CALL)
// 005fc0d6: ADD ESP,0x8
// 005fc0d9: CMP dword ptr [0x006849b0],0x8
//   Label: LAB_005fc0d9
//   XREF to: 006849b0 (READ)
// 005fc0e0: JL 0x005fc0f6
//   XREF to: 005fc0f6 (CONDITIONAL_JUMP)
// 005fc0e2: PUSH 0x658995
//   XREF to: 00658995 (DATA)
// 005fc0e7: LEA EAX,[EBX + 0xbf40]
// 005fc0ed: PUSH EAX
// 005fc0ee: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005fc0f3: ADD ESP,0x8
// 005fc0f6: CMP dword ptr [0x006849b0],0xa
//   Label: LAB_005fc0f6
//   XREF to: 006849b0 (READ)
// 005fc0fd: JGE 0x005fc102
//   XREF to: 005fc102 (CONDITIONAL_JUMP)
// 005fc0ff: POP EDI
// 005fc100: POP EBX
// 005fc101: RET
// 005fc102: PUSH 0x6589a3
//   Label: LAB_005fc102
//   XREF to: 006589a3 (DATA)
// 005fc107: ADD EBX,0xbf44
// 005fc10d: PUSH EBX
// 005fc10e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005fc113: ADD ESP,0x8
// 005fc116: POP EDI
// 005fc117: POP EBX
// 005fc118: RET
