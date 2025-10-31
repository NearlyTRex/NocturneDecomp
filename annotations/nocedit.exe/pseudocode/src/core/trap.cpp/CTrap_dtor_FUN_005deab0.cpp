// Name: core_trap.cpp_CTrap_dtor_FUN_005deab0
// Address: 005deab0
// Address Range: [[005deab0, 005deafd]]
// Convention: __cdecl
// Signature: CTrap * core_trap.cpp_CTrap_dtor_FUN_005deab0(CTrap * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CTrapTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_005deab0(CTrap *this_ptr,uint d1,uint d2)

{
  CTrap *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTrapTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005deab0: PUSH EBX
//   Label: core_trap.cpp_CTrap_dtor_FUN_005deab0
// 005deab1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005deab5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005deaba: JNZ 0x005dead6
//   XREF to: 005dead6 (CONDITIONAL_JUMP)
// 005deabc: PUSH 0x1
// 005deabe: PUSH EBX
// 005deabf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005deac4: ADD ESP,0x8
// 005deac7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005deacb: MOV EBX,EAX
// 005deacd: TEST DL,0x2
// 005dead0: JNZ 0x005deaf1
//   XREF to: 005deaf1 (CONDITIONAL_JUMP)
// 005dead2: MOV EAX,EBX
// 005dead4: POP EBX
// 005dead5: RET
// 005dead6: PUSH 0x6648b0
//   Label: LAB_005dead6
//   XREF to: 006648b0 (DATA)
// 005deadb: PUSH EBX
// 005deadc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005deae1: ADD ESP,0x8
// 005deae4: PUSH EAX
// 005deae5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005deaea: ADD ESP,0x4
// 005deaed: MOV EAX,EBX
// 005deaef: POP EBX
// 005deaf0: RET
// 005deaf1: PUSH EAX
//   Label: LAB_005deaf1
// 005deaf2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005deaf7: ADD ESP,0x4
// 005deafa: MOV EAX,EBX
// 005deafc: POP EBX
// 005deafd: RET
