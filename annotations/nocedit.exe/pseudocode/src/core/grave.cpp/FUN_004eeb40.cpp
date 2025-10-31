// Name: core_grave.cpp_FUN_004eeb40
// Address: 004eeb40
// Address Range: [[004eeb40, 004eeb8d]]
// Convention: __cdecl
// Signature: CGrave * core_grave.cpp_FUN_004eeb40(CGrave * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CGraveTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_FUN_004eeb40(CGrave *this_ptr,uint d1,uint d2)

{
  CGrave *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGraveTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CGrave *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004eeb40: PUSH EBX
//   Label: core_grave.cpp_FUN_004eeb40
// 004eeb41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eeb45: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004eeb4a: JNZ 0x004eeb66
//   XREF to: 004eeb66 (CONDITIONAL_JUMP)
// 004eeb4c: PUSH 0x1
// 004eeb4e: PUSH EBX
// 004eeb4f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004eeb54: ADD ESP,0x8
// 004eeb57: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004eeb5b: MOV EBX,EAX
// 004eeb5d: TEST DL,0x2
// 004eeb60: JNZ 0x004eeb81
//   XREF to: 004eeb81 (CONDITIONAL_JUMP)
// 004eeb62: MOV EAX,EBX
// 004eeb64: POP EBX
// 004eeb65: RET
// 004eeb66: PUSH 0x65f210
//   Label: LAB_004eeb66
//   XREF to: 0065f210 (DATA)
// 004eeb6b: PUSH EBX
// 004eeb6c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004eeb71: ADD ESP,0x8
// 004eeb74: PUSH EAX
// 004eeb75: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004eeb7a: ADD ESP,0x4
// 004eeb7d: MOV EAX,EBX
// 004eeb7f: POP EBX
// 004eeb80: RET
// 004eeb81: PUSH EAX
//   Label: LAB_004eeb81
// 004eeb82: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004eeb87: ADD ESP,0x4
// 004eeb8a: MOV EAX,EBX
// 004eeb8c: POP EBX
// 004eeb8d: RET
