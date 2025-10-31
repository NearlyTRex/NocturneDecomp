// Name: core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0
// Address: 0054a7d0
// Address Range: [[0054a7d0, 0054a81d]]
// Convention: __cdecl
// Signature: CPendulum * core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0(CPendulum * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CPendulumTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CPendulum * __cdecl
core_pendulum_cpp_CPendulum_dtor_FUN_0054a7d0(CPendulum *this_ptr,uint d1,uint d2)

{
  CPendulum *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CPendulumTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CPendulum *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0054a7d0: PUSH EBX
//   Label: core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0
// 0054a7d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054a7d5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0054a7da: JNZ 0x0054a7f6
//   XREF to: 0054a7f6 (CONDITIONAL_JUMP)
// 0054a7dc: PUSH 0x1
// 0054a7de: PUSH EBX
// 0054a7df: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0054a7e4: ADD ESP,0x8
// 0054a7e7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054a7eb: MOV EBX,EAX
// 0054a7ed: TEST DL,0x2
// 0054a7f0: JNZ 0x0054a811
//   XREF to: 0054a811 (CONDITIONAL_JUMP)
// 0054a7f2: MOV EAX,EBX
// 0054a7f4: POP EBX
// 0054a7f5: RET
// 0054a7f6: PUSH 0x662240
//   Label: LAB_0054a7f6
//   XREF to: 00662240 (DATA)
// 0054a7fb: PUSH EBX
// 0054a7fc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0054a801: ADD ESP,0x8
// 0054a804: PUSH EAX
// 0054a805: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0054a80a: ADD ESP,0x4
// 0054a80d: MOV EAX,EBX
// 0054a80f: POP EBX
// 0054a810: RET
// 0054a811: PUSH EAX
//   Label: LAB_0054a811
// 0054a812: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0054a817: ADD ESP,0x4
// 0054a81a: MOV EAX,EBX
// 0054a81c: POP EBX
// 0054a81d: RET
