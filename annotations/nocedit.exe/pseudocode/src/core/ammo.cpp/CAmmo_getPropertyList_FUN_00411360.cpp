// Name: core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360
// Address: 00411360
// Address Range: [[00411360, 004113d5]]
// Convention: __cdecl
// Signature: void core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo * this_ptr, CActorPropertyList * property_list)
// Globals:
//   TerminatedCString s_Model_file_kfm_00614aca
//   TerminatedCString s_Weapon_00614adc
//   TerminatedCString s_Amount_of_ammo_00614ae3
//   TerminatedCString s_Ammo_type_00614af2
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl
core_ammo_cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
  return;
}


// Assembly code:
// 00411360: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360
// 00411361: PUSH ESI
// 00411362: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00411366: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041136a: PUSH EBX
// 0041136b: PUSH ESI
// 0041136c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00411371: ADD ESP,0x8
// 00411374: PUSH 0x0
// 00411376: LEA EAX,[ESI + 0x158]
// 0041137c: PUSH EAX
// 0041137d: PUSH 0x614aca
//   XREF to: 00614aca (DATA)
// 00411382: PUSH EBX
// 00411383: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00411388: ADD ESP,0x10
// 0041138b: PUSH 0x0
// 0041138d: PUSH 0x40
// 0041138f: LEA EAX,[ESI + 0x2d4]
// 00411395: PUSH EAX
// 00411396: PUSH 0x614adc
//   XREF to: 00614adc (DATA)
// 0041139b: PUSH EBX
// 0041139c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004113a1: ADD ESP,0x14
// 004113a4: PUSH 0x0
// 004113a6: ADD ESI,0x314
// 004113ac: PUSH ESI
// 004113ad: PUSH 0x614ae3
//   XREF to: 00614ae3 (DATA)
// 004113b2: PUSH EBX
// 004113b3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004113b8: ADD ESP,0x10
// 004113bb: PUSH 0x4112b0
//   XREF to: 004112b0 (DATA)
// 004113c0: PUSH 0x411200
//   XREF to: 00411200 (DATA)
// 004113c5: PUSH 0x614af2
//   XREF to: 00614af2 (DATA)
// 004113ca: PUSH EBX
// 004113cb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 004113d0: ADD ESP,0x10
// 004113d3: POP ESI
// 004113d4: POP EBX
// 004113d5: RET
