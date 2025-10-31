// Name: core_keyactor.cpp_FUN_005019b0
// Address: 005019b0
// Address Range: [[005019b0, 005019fd]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_005019b0()
// Globals:
//   WatcomTypeInfo g_CKeyActorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_005019b0(undefined4 param_1, undefined1
   param_2) */

CDemonActor * core_keyactor_cpp_FUN_005019b0(void)

{
  CDemonActor *ptr;
  void *ptr_00;
  CDemonActor *in_stack_00000004;
  byte in_stack_00000008;
  byte in_stack_0000000c;
  
  if ((in_stack_00000008 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(in_stack_00000004,&g_CKeyActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return in_stack_00000004;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(in_stack_00000004,1);
  if ((in_stack_0000000c & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005019b0: PUSH EBX
//   Label: core_keyactor.cpp_FUN_005019b0
// 005019b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005019b5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005019ba: JNZ 0x005019d6
//   XREF to: 005019d6 (CONDITIONAL_JUMP)
// 005019bc: PUSH 0x1
// 005019be: PUSH EBX
// 005019bf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005019c4: ADD ESP,0x8
// 005019c7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005019cb: MOV EBX,EAX
// 005019cd: TEST DL,0x2
// 005019d0: JNZ 0x005019f1
//   XREF to: 005019f1 (CONDITIONAL_JUMP)
// 005019d2: MOV EAX,EBX
// 005019d4: POP EBX
// 005019d5: RET
// 005019d6: PUSH 0x6605a0
//   Label: LAB_005019d6
//   XREF to: 006605a0 (DATA)
// 005019db: PUSH EBX
// 005019dc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005019e1: ADD ESP,0x8
// 005019e4: PUSH EAX
// 005019e5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005019ea: ADD ESP,0x4
// 005019ed: MOV EAX,EBX
// 005019ef: POP EBX
// 005019f0: RET
// 005019f1: PUSH EAX
//   Label: LAB_005019f1
// 005019f2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005019f7: ADD ESP,0x4
// 005019fa: MOV EAX,EBX
// 005019fc: POP EBX
// 005019fd: RET
