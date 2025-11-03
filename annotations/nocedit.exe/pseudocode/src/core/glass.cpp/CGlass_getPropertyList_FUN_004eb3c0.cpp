// Name: core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0
// Address: 004eb3c0
// Address Range: [[004eb3c0, 004eb480]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0(CGlass * this_ptr, CActorPropertyList * property_list)
// Globals:
//   TerminatedCString s_Texture_0062e121
//   TerminatedCString s_Cause_shatter_condition_0062e129
//   TerminatedCString s_Allow_shatter_condition_0062e141
//   TerminatedCString s_Am_I_a_mirror_0062e159
//   TerminatedCString s_Opacity_0062e167
//   TerminatedCString s_backgroundFlag_0062e16f
//   TerminatedCString s_Broken_texture_0062e17e
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_getPropertyList_FUN_004eb3c0
          (CGlass *this_ptr,CActorPropertyList *property_list)

{
  int *piStack0000000c;
  undefined4 uStack00000010;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  piStack0000000c = &this_ptr->background_flag;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  if (this_ptr->background_flag == 0) {
    return;
  }
  uStack00000010 = 0;
  piStack0000000c = (int *)0x10;
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  return;
}


// Assembly code:
// 004eb3c0: PUSH EBX
//   Label: core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0
// 004eb3c1: PUSH ESI
// 004eb3c2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004eb3c6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004eb3ca: PUSH ESI
// 004eb3cb: PUSH EBX
// 004eb3cc: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004eb3d1: ADD ESP,0x8
// 004eb3d4: PUSH 0x0
// 004eb3d6: PUSH 0x10
// 004eb3d8: LEA EAX,[EBX + 0x16c]
// 004eb3de: PUSH EAX
// 004eb3df: PUSH 0x62e121
//   XREF to: 0062e121 (DATA)
// 004eb3e4: PUSH ESI
// 004eb3e5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004eb3ea: ADD ESP,0x14
// 004eb3ed: LEA EAX,[EBX + 0x184]
// 004eb3f3: PUSH EAX
// 004eb3f4: PUSH 0x62e129
//   XREF to: 0062e129 (DATA)
// 004eb3f9: PUSH ESI
// 004eb3fa: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004eb3ff: ADD ESP,0xc
// 004eb402: LEA EAX,[EBX + 0x30c]
// 004eb408: PUSH EAX
// 004eb409: PUSH 0x62e141
//   XREF to: 0062e141 (DATA)
// 004eb40e: PUSH ESI
// 004eb40f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004eb414: ADD ESP,0xc
// 004eb417: LEA EAX,[EBX + 0x1e8]
// 004eb41d: PUSH EAX
// 004eb41e: PUSH 0x62e159
//   XREF to: 0062e159 (DATA)
// 004eb423: PUSH ESI
// 004eb424: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004eb429: ADD ESP,0xc
// 004eb42c: PUSH 0x0
// 004eb42e: LEA EAX,[EBX + 0x17c]
// 004eb434: PUSH EAX
// 004eb435: PUSH 0x62e167
//   XREF to: 0062e167 (DATA)
// 004eb43a: PUSH ESI
// 004eb43b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004eb440: ADD ESP,0x10
// 004eb443: LEA EAX,[EBX + 0x370]
// 004eb449: PUSH EAX
// 004eb44a: PUSH 0x62e16f
//   XREF to: 0062e16f (DATA)
// 004eb44f: PUSH ESI
// 004eb450: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004eb455: MOV EDX,dword ptr [EBX + 0x370]
// 004eb45b: ADD ESP,0xc
// 004eb45e: TEST EDX,EDX
// 004eb460: JNZ 0x004eb465
//   XREF to: 004eb465 (CONDITIONAL_JUMP)
// 004eb462: POP ESI
// 004eb463: POP EBX
// 004eb464: RET
// 004eb465: PUSH 0x0
//   Label: LAB_004eb465
// 004eb467: PUSH 0x10
// 004eb469: ADD EBX,0x37c
// 004eb46f: PUSH EBX
// 004eb470: PUSH 0x62e17e
//   XREF to: 0062e17e (DATA)
// 004eb475: PUSH ESI
// 004eb476: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004eb47b: ADD ESP,0x14
// 004eb47e: POP ESI
// 004eb47f: POP EBX
// 004eb480: RET
