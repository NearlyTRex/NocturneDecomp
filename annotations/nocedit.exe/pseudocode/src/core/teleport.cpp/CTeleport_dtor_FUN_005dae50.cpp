// Name: core_teleport.cpp_CTeleport_dtor_FUN_005dae50
// Address: 005dae50
// Address Range: [[005dae50, 005dae9d]]
// Convention: __cdecl
// Signature: CTeleport * core_teleport.cpp_CTeleport_dtor_FUN_005dae50(CTeleport * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CTeleportTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTeleport * __cdecl
core_teleport_cpp_CTeleport_dtor_FUN_005dae50(CTeleport *this_ptr,uint d1,uint d2)

{
  CTeleport *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTeleportTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTeleport *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005dae50: PUSH EBX
//   Label: core_teleport.cpp_CTeleport_dtor_FUN_005dae50
// 005dae51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dae55: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005dae5a: JNZ 0x005dae76
//   XREF to: 005dae76 (CONDITIONAL_JUMP)
// 005dae5c: PUSH 0x1
// 005dae5e: PUSH EBX
// 005dae5f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005dae64: ADD ESP,0x8
// 005dae67: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dae6b: MOV EBX,EAX
// 005dae6d: TEST DL,0x2
// 005dae70: JNZ 0x005dae91
//   XREF to: 005dae91 (CONDITIONAL_JUMP)
// 005dae72: MOV EAX,EBX
// 005dae74: POP EBX
// 005dae75: RET
// 005dae76: PUSH 0x664410
//   Label: LAB_005dae76
//   XREF to: 00664410 (DATA)
// 005dae7b: PUSH EBX
// 005dae7c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005dae81: ADD ESP,0x8
// 005dae84: PUSH EAX
// 005dae85: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005dae8a: ADD ESP,0x4
// 005dae8d: MOV EAX,EBX
// 005dae8f: POP EBX
// 005dae90: RET
// 005dae91: PUSH EAX
//   Label: LAB_005dae91
// 005dae92: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005dae97: ADD ESP,0x4
// 005dae9a: MOV EAX,EBX
// 005dae9c: POP EBX
// 005dae9d: RET
