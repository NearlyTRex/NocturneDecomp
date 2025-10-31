// Name: core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30
// Address: 00411b30
// Address Range: [[00411b30, 00411bfb]]
// Convention: __cdecl
// Signature: void core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30(CAmmoBox * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_00614c8d
//   TerminatedCString s_Weapon_00614c9f
//   TerminatedCString s_Amount_of_ammo_00614ca6
//   TerminatedCString s_Ammo_type_00614cb5
//   TerminatedCString s_CDemonActor_00614cbf
//   TerminatedCString s_Inventory_item_00614ccb
//   TerminatedCString s_Has_collision_00614cda
//   TerminatedCString s_Open_sound_00614ce8
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30(CAmmoBox *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  if (this_ptr->item == (char *)0x0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pcStack0000000c = (char *)&this_ptr->has_collision;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  pcStack00000010 = this_ptr->open_sound;
  pcStack0000000c = "Open sound";
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  return;
}


// Assembly code:
// 00411b30: PUSH EBX
//   Label: core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30
// 00411b31: PUSH ESI
// 00411b32: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00411b36: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00411b3a: PUSH ESI
// 00411b3b: PUSH EBX
// 00411b3c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00411b41: ADD ESP,0x8
// 00411b44: PUSH 0x0
// 00411b46: LEA EAX,[EBX + 0x158]
// 00411b4c: PUSH EAX
// 00411b4d: PUSH 0x614c8d
//   XREF to: 00614c8d (DATA)
// 00411b52: PUSH ESI
// 00411b53: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00411b58: MOV EDX,dword ptr [EBX + 0x320]
// 00411b5e: ADD ESP,0x10
// 00411b61: TEST EDX,EDX
// 00411b63: JZ 0x00411bb0
//   XREF to: 00411bb0 (CONDITIONAL_JUMP)
// 00411b65: PUSH 0x0
//   Label: LAB_00411b65
// 00411b67: PUSH 0x614cbf
//   XREF to: 00614cbf (DATA)
// 00411b6c: PUSH 0x1
// 00411b6e: LEA EAX,[EBX + 0x320]
// 00411b74: PUSH EAX
// 00411b75: PUSH 0x614ccb
//   XREF to: 00614ccb (DATA)
// 00411b7a: PUSH ESI
// 00411b7b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 00411b80: ADD ESP,0x18
// 00411b83: LEA EAX,[EBX + 0x324]
// 00411b89: PUSH EAX
// 00411b8a: PUSH 0x614cda
//   XREF to: 00614cda (DATA)
// 00411b8f: PUSH ESI
// 00411b90: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00411b95: ADD ESP,0xc
// 00411b98: ADD EBX,0x328
// 00411b9e: PUSH EBX
// 00411b9f: PUSH 0x614ce8
//   XREF to: 00614ce8 (DATA)
// 00411ba4: PUSH ESI
// 00411ba5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 00411baa: ADD ESP,0xc
// 00411bad: POP ESI
// 00411bae: POP EBX
// 00411baf: RET
// 00411bb0: PUSH EDX
//   Label: LAB_00411bb0
// 00411bb1: PUSH 0x40
// 00411bb3: LEA EAX,[EBX + 0x2d4]
// 00411bb9: PUSH EAX
// 00411bba: PUSH 0x614c9f
//   XREF to: 00614c9f (DATA)
// 00411bbf: PUSH ESI
// 00411bc0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 00411bc5: ADD ESP,0x14
// 00411bc8: PUSH 0x0
// 00411bca: LEA EAX,[EBX + 0x314]
// 00411bd0: PUSH EAX
// 00411bd1: PUSH 0x614ca6
//   XREF to: 00614ca6 (DATA)
// 00411bd6: PUSH ESI
// 00411bd7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 00411bdc: ADD ESP,0x10
// 00411bdf: PUSH 0x411ab0
//   XREF to: 00411ab0 (DATA)
// 00411be4: PUSH 0x411a30
//   XREF to: 00411a30 (DATA)
// 00411be9: PUSH 0x614cb5
//   XREF to: 00614cb5 (DATA)
// 00411bee: PUSH ESI
// 00411bef: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 00411bf4: ADD ESP,0x10
// 00411bf7: JMP 0x00411b65
//   XREF to: 00411b65 (UNCONDITIONAL_JUMP)
