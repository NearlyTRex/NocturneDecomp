// Name: core_bat.cpp_CBat_FUN_00414dc0
// Address: 00414dc0
// Address Range: [[00414dc0, 00414ebe]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414dc0(CBat * this_ptr)
// Globals:
//   TerminatedCString s_pth_0061538e
//   TerminatedCString s_data_00615394
//   TerminatedCString s_Course_file_00615399
//   TerminatedCString s_Parameter_0_d_006153a5
//   TerminatedCString s_Model_file_kfm_006153b7
//   TerminatedCString s_Course_Speed_006153c9
//   TerminatedCString s_Flap_speed_mult_006153d6
//   TerminatedCString s_Periodic_sound_006153e6
//   TerminatedCString s_Sound_period_min_006153f5
//   TerminatedCString s_Sound_period_max_00615406
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e3e0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414dc0(CBat *this_ptr)

{
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3e0(in_stack_00000008);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xffffff9c,"Parameter (0..%d)",
             *(undefined4 *)(this_ptr->course_filename + 0x20));
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  *(undefined4 *)(extraout_EAX + 0x58) = 1;
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}


// Assembly code:
// 00414dc0: PUSH EBX
//   Label: core_bat.cpp_CBat_FUN_00414dc0
// 00414dc1: PUSH ESI
// 00414dc2: SUB ESP,0x64
// 00414dc5: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 00414dc9: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 00414dcd: PUSH ESI
// 00414dce: PUSH EBX
// 00414dcf: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00414dd4: ADD ESP,0x8
// 00414dd7: PUSH 0x0
// 00414dd9: PUSH 0x61538e
//   XREF to: 0061538e (DATA)
// 00414dde: PUSH 0x615394
//   XREF to: 00615394 (DATA)
// 00414de3: LEA EAX,[EBX + 0x158]
// 00414de9: PUSH EAX
// 00414dea: PUSH 0x615399
//   XREF to: 00615399 (DATA)
// 00414def: PUSH ESI
// 00414df0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3e0
//   XREF to: 0040e3e0 (UNCONDITIONAL_CALL)
// 00414df5: LEA EAX,[EBX + 0x178]
// 00414dfb: ADD ESP,0x18
// 00414dfe: MOV EAX,dword ptr [EAX]
// 00414e00: PUSH EAX
// 00414e01: PUSH 0x6153a5
//   XREF to: 006153a5 (DATA)
// 00414e06: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 00414e0a: PUSH EAX
// 00414e0b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00414e10: ADD ESP,0xc
// 00414e13: PUSH 0x0
// 00414e15: LEA EAX,[EBX + 0x304]
// 00414e1b: PUSH EAX
// 00414e1c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 00414e20: PUSH EAX
// 00414e21: PUSH ESI
// 00414e22: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00414e27: ADD ESP,0x10
// 00414e2a: PUSH 0x0
// 00414e2c: MOV dword ptr [EAX + 0x58],0x1
// 00414e33: LEA EAX,[EBX + 0x188]
// 00414e39: PUSH EAX
// 00414e3a: PUSH 0x6153b7
//   XREF to: 006153b7 (DATA)
// 00414e3f: PUSH ESI
// 00414e40: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00414e45: ADD ESP,0x10
// 00414e48: PUSH 0x0
// 00414e4a: LEA EAX,[EBX + 0x308]
// 00414e50: PUSH EAX
// 00414e51: PUSH 0x6153c9
//   XREF to: 006153c9 (DATA)
// 00414e56: PUSH ESI
// 00414e57: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00414e5c: ADD ESP,0x10
// 00414e5f: PUSH 0x0
// 00414e61: LEA EAX,[EBX + 0x30c]
// 00414e67: PUSH EAX
// 00414e68: PUSH 0x6153d6
//   XREF to: 006153d6 (DATA)
// 00414e6d: PUSH ESI
// 00414e6e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00414e73: ADD ESP,0x10
// 00414e76: LEA EAX,[EBX + 0x314]
// 00414e7c: PUSH EAX
// 00414e7d: PUSH 0x6153e6
//   XREF to: 006153e6 (DATA)
// 00414e82: PUSH ESI
// 00414e83: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 00414e88: ADD ESP,0xc
// 00414e8b: PUSH 0x0
// 00414e8d: LEA EAX,[EBX + 0x378]
// 00414e93: PUSH EAX
// 00414e94: PUSH 0x6153f5
//   XREF to: 006153f5 (DATA)
// 00414e99: PUSH ESI
// 00414e9a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00414e9f: ADD ESP,0x10
// 00414ea2: PUSH 0x0
// 00414ea4: ADD EBX,0x37c
// 00414eaa: PUSH EBX
// 00414eab: PUSH 0x615406
//   XREF to: 00615406 (DATA)
// 00414eb0: PUSH ESI
// 00414eb1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00414eb6: ADD ESP,0x10
// 00414eb9: ADD ESP,0x64
// 00414ebc: POP ESI
// 00414ebd: POP EBX
// 00414ebe: RET
