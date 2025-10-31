// Name: core_dest.cpp_FUN_0046ff00
// Address: 0046ff00
// Address Range: [[0046ff00, 0046ff4d]]
// Convention: __cdecl
// Signature: CActorDestination * core_dest.cpp_FUN_0046ff00(CActorDestination * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CActorDestination
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_FUN_0046ff00(CActorDestination *this_ptr,uint d1,uint d2)

{
  CActorDestination *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CActorDestination);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CActorDestination *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0046ff00: PUSH EBX
//   Label: core_dest.cpp_FUN_0046ff00
// 0046ff01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0046ff05: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0046ff0a: JNZ 0x0046ff26
//   XREF to: 0046ff26 (CONDITIONAL_JUMP)
// 0046ff0c: PUSH 0x1
// 0046ff0e: PUSH EBX
// 0046ff0f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0046ff14: ADD ESP,0x8
// 0046ff17: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0046ff1b: MOV EBX,EAX
// 0046ff1d: TEST DL,0x2
// 0046ff20: JNZ 0x0046ff41
//   XREF to: 0046ff41 (CONDITIONAL_JUMP)
// 0046ff22: MOV EAX,EBX
// 0046ff24: POP EBX
// 0046ff25: RET
// 0046ff26: PUSH 0x65c810
//   Label: LAB_0046ff26
//   XREF to: 0065c810 (DATA)
// 0046ff2b: PUSH EBX
// 0046ff2c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0046ff31: ADD ESP,0x8
// 0046ff34: PUSH EAX
// 0046ff35: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0046ff3a: ADD ESP,0x4
// 0046ff3d: MOV EAX,EBX
// 0046ff3f: POP EBX
// 0046ff40: RET
// 0046ff41: PUSH EAX
//   Label: LAB_0046ff41
// 0046ff42: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0046ff47: ADD ESP,0x4
// 0046ff4a: MOV EAX,EBX
// 0046ff4c: POP EBX
// 0046ff4d: RET
