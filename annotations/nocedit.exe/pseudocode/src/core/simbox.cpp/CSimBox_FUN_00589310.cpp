// Name: core_simbox.cpp_CSimBox_FUN_00589310
// Address: 00589310
// Address Range: [[00589310, 005893bd]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_FUN_00589310(CSimBox * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_00649c78
//   TerminatedCString s_Weight_lbs_00649c8a
//   TerminatedCString s_Type_00649c97
//   TerminatedCString s_Event_condition_00649c9c
//   TerminatedCString s_Initial_velocity_00649caf
//   TerminatedCString s_Initial_rotation_velocit_00649cc0
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_00589310(CSimBox *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  undefined4 uStack0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  if (*(int *)(this_ptr->field1_0x158 + 0x17c) != 1) {
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  uStack0000000c = 0;
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  return;
}


// Assembly code:
// 00589310: PUSH EBX
//   Label: core_simbox.cpp_CSimBox_FUN_00589310
// 00589311: PUSH ESI
// 00589312: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00589316: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0058931a: PUSH ESI
// 0058931b: PUSH EBX
// 0058931c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00589321: ADD ESP,0x8
// 00589324: PUSH 0x0
// 00589326: LEA EAX,[EBX + 0x158]
// 0058932c: PUSH EAX
// 0058932d: PUSH 0x649c78
//   XREF to: 00649c78 (DATA)
// 00589332: PUSH ESI
// 00589333: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00589338: ADD ESP,0x10
// 0058933b: PUSH 0x0
// 0058933d: LEA EAX,[EBX + 0x2d8]
// 00589343: PUSH EAX
// 00589344: PUSH 0x649c8a
//   XREF to: 00649c8a (DATA)
// 00589349: PUSH ESI
// 0058934a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0058934f: ADD ESP,0x10
// 00589352: PUSH 0x5892d0
//   XREF to: 005892d0 (DATA)
// 00589357: PUSH 0x589270
//   XREF to: 00589270 (DATA)
// 0058935c: PUSH 0x649c97
//   XREF to: 00649c97 (DATA)
// 00589361: PUSH ESI
// 00589362: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 00589367: MOV EDX,dword ptr [EBX + 0x2d4]
// 0058936d: ADD ESP,0x10
// 00589370: CMP EDX,0x1
// 00589373: JZ 0x00589378
//   XREF to: 00589378 (CONDITIONAL_JUMP)
// 00589375: POP ESI
// 00589376: POP EBX
// 00589377: RET
// 00589378: LEA EAX,[EBX + 0x2dc]
//   Label: LAB_00589378
// 0058937e: PUSH EAX
// 0058937f: PUSH 0x649c9c
//   XREF to: 00649c9c (DATA)
// 00589384: PUSH ESI
// 00589385: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0058938a: ADD ESP,0xc
// 0058938d: PUSH 0x0
// 0058938f: LEA EAX,[EBX + 0x340]
// 00589395: PUSH EAX
// 00589396: PUSH 0x649caf
//   XREF to: 00649caf (DATA)
// 0058939b: PUSH ESI
// 0058939c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 005893a1: ADD ESP,0x10
// 005893a4: PUSH 0x0
// 005893a6: ADD EBX,0x34c
// 005893ac: PUSH EBX
// 005893ad: PUSH 0x649cc0
//   XREF to: 00649cc0 (DATA)
// 005893b2: PUSH ESI
// 005893b3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 005893b8: ADD ESP,0x10
// 005893bb: POP ESI
// 005893bc: POP EBX
// 005893bd: RET
