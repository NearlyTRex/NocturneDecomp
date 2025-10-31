// Name: core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0
// Address: 00412ad0
// Address Range: [[00412ad0, 00412b1d]]
// Convention: __cdecl
// Signature: CBackgroundActor * core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0(CBackgroundActor * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CBackgroundActorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBackgroundActor * __cdecl
core_backgnd_cpp_CBackgroundActor_dtor_FUN_00412ad0(CBackgroundActor *this_ptr,uint d1,uint d2)

{
  CBackgroundActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBackgroundActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBackgroundActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00412ad0: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0
// 00412ad1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412ad5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00412ada: JNZ 0x00412af6
//   XREF to: 00412af6 (CONDITIONAL_JUMP)
// 00412adc: PUSH 0x1
// 00412ade: PUSH EBX
// 00412adf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00412ae4: ADD ESP,0x8
// 00412ae7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00412aeb: MOV EBX,EAX
// 00412aed: TEST DL,0x2
// 00412af0: JNZ 0x00412b11
//   XREF to: 00412b11 (CONDITIONAL_JUMP)
// 00412af2: MOV EAX,EBX
// 00412af4: POP EBX
// 00412af5: RET
// 00412af6: PUSH 0x65a030
//   Label: LAB_00412af6
//   XREF to: 0065a030 (DATA)
// 00412afb: PUSH EBX
// 00412afc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00412b01: ADD ESP,0x8
// 00412b04: PUSH EAX
// 00412b05: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00412b0a: ADD ESP,0x4
// 00412b0d: MOV EAX,EBX
// 00412b0f: POP EBX
// 00412b10: RET
// 00412b11: PUSH EAX
//   Label: LAB_00412b11
// 00412b12: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00412b17: ADD ESP,0x4
// 00412b1a: MOV EAX,EBX
// 00412b1c: POP EBX
// 00412b1d: RET
