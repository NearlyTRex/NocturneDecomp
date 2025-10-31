// Name: core_weapon.cpp_CWeapon_serialize_FUN_005ee250
// Address: 005ee250
// Address Range: [[005ee250, 005ee32b]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_serialize_FUN_005ee250(CWeapon * this_ptr)
// Cross-references:
//   core_melee.cpp_CMelee_load_FUN_0050e920 (0050e920) at 0050e926 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_serialize_FUN_005e2c40 (005e2c40) at 005e2c46 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_modelName_00657ab9
//   TerminatedCString s_carriedByActor_00657ac3
//   TerminatedCString s_weaponState_00657ad2
//   TerminatedCString s_ammoCount_00657ade
//   TerminatedCString s_ammoType_00657ae8
//   TerminatedCString s_descriptiveName_00657af1
//   TerminatedCString s_simTimer_00657b01
//   int g_CWeaponClassVersion = 0x7
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_serialize_FUN_005ee250(CWeapon *this_ptr)

{
  BADSPACEBASE *in_ESP;
  char *apcStack_f8 [61];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)&this_ptr->model_instance,"modelName");
  if (2 < g_CWeaponClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (3 < g_CWeaponClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->weapon_state,"weaponState");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ammo_count,"ammoCount");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ammo_type,"ammoType");
  }
  if (g_CWeaponClassVersion == 5) {
    core_actor_cpp_serializeLocalizedString_FUN_0040b6e0(apcStack_f8,"descriptiveName");
  }
  if (g_CWeaponClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->sim_timer,"simTimer");
  return;
}


// Assembly code:
// 005ee250: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_serialize_FUN_005ee250
// 005ee251: SUB ESP,0x100
// 005ee257: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 005ee25e: PUSH EBX
// 005ee25f: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005ee264: ADD ESP,0x4
// 005ee267: PUSH 0x657ab9
//   XREF to: 00657ab9 (DATA)
// 005ee26c: LEA EAX,[EBX + 0x158]
// 005ee272: PUSH EAX
// 005ee273: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005ee278: MOV EDX,dword ptr [0x006848d4]
//   XREF to: 006848d4 (READ)
// 005ee27e: ADD ESP,0x8
// 005ee281: CMP EDX,0x3
// 005ee284: JGE 0x005ee2f7
//   XREF to: 005ee2f7 (CONDITIONAL_JUMP)
// 005ee286: CMP dword ptr [0x006848d4],0x4
//   Label: LAB_005ee286
//   XREF to: 006848d4 (READ)
// 005ee28d: JL 0x005ee2cb
//   XREF to: 005ee2cb (CONDITIONAL_JUMP)
// 005ee28f: PUSH 0x657ad2
//   XREF to: 00657ad2 (DATA)
// 005ee294: LEA EAX,[EBX + 0x2d4]
// 005ee29a: PUSH EAX
// 005ee29b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005ee2a0: ADD ESP,0x8
// 005ee2a3: PUSH 0x657ade
//   XREF to: 00657ade (DATA)
// 005ee2a8: LEA EAX,[EBX + 0x568]
// 005ee2ae: PUSH EAX
// 005ee2af: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005ee2b4: ADD ESP,0x8
// 005ee2b7: PUSH 0x657ae8
//   XREF to: 00657ae8 (DATA)
// 005ee2bc: LEA EAX,[EBX + 0x56c]
// 005ee2c2: PUSH EAX
// 005ee2c3: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005ee2c8: ADD ESP,0x8
// 005ee2cb: CMP dword ptr [0x006848d4],0x5
//   Label: LAB_005ee2cb
//   XREF to: 006848d4 (READ)
// 005ee2d2: JNZ 0x005ee2e6
//   XREF to: 005ee2e6 (CONDITIONAL_JUMP)
// 005ee2d4: PUSH 0x657af1
//   XREF to: 00657af1 (DATA)
// 005ee2d9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 005ee2dd: PUSH EAX
// 005ee2de: CALL core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
//   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)
// 005ee2e3: ADD ESP,0x8
// 005ee2e6: CMP dword ptr [0x006848d4],0x7
//   Label: LAB_005ee2e6
//   XREF to: 006848d4 (READ)
// 005ee2ed: JGE 0x005ee310
//   XREF to: 005ee310 (CONDITIONAL_JUMP)
// 005ee2ef: ADD ESP,0x100
// 005ee2f5: POP EBX
// 005ee2f6: RET
// 005ee2f7: PUSH 0x657ac3
//   Label: LAB_005ee2f7
//   XREF to: 00657ac3 (DATA)
// 005ee2fc: LEA EAX,[EBX + 0x304]
// 005ee302: PUSH EAX
// 005ee303: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005ee308: ADD ESP,0x8
// 005ee30b: JMP 0x005ee286
//   XREF to: 005ee286 (UNCONDITIONAL_JUMP)
// 005ee310: PUSH 0x657b01
//   Label: LAB_005ee310
//   XREF to: 00657b01 (DATA)
// 005ee315: ADD EBX,0x570
// 005ee31b: PUSH EBX
// 005ee31c: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005ee321: ADD ESP,0x8
// 005ee324: ADD ESP,0x100
// 005ee32a: POP EBX
// 005ee32b: RET
