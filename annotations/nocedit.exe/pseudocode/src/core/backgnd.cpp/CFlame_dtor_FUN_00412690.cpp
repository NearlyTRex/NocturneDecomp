// Name: core_backgnd.cpp_CFlame_dtor_FUN_00412690
// Address: 00412690
// Address Range: [[00412690, 004126dd]]
// Convention: __cdecl
// Signature: CFlame * core_backgnd.cpp_CFlame_dtor_FUN_00412690(CFlame * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CFlameTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFlame * __cdecl core_backgnd_cpp_CFlame_dtor_FUN_00412690(CFlame *this_ptr,uint d1,uint d2)

{
  CFlame *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFlameTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFlame *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00412690: PUSH EBX
//   Label: core_backgnd.cpp_CFlame_dtor_FUN_00412690
// 00412691: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412695: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041269a: JNZ 0x004126b6
//   XREF to: 004126b6 (CONDITIONAL_JUMP)
// 0041269c: PUSH 0x1
// 0041269e: PUSH EBX
// 0041269f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004126a4: ADD ESP,0x8
// 004126a7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004126ab: MOV EBX,EAX
// 004126ad: TEST DL,0x2
// 004126b0: JNZ 0x004126d1
//   XREF to: 004126d1 (CONDITIONAL_JUMP)
// 004126b2: MOV EAX,EBX
// 004126b4: POP EBX
// 004126b5: RET
// 004126b6: PUSH 0x659ee0
//   Label: LAB_004126b6
//   XREF to: 00659ee0 (DATA)
// 004126bb: PUSH EBX
// 004126bc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004126c1: ADD ESP,0x8
// 004126c4: PUSH EAX
// 004126c5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004126ca: ADD ESP,0x4
// 004126cd: MOV EAX,EBX
// 004126cf: POP EBX
// 004126d0: RET
// 004126d1: PUSH EAX
//   Label: LAB_004126d1
// 004126d2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004126d7: ADD ESP,0x4
// 004126da: MOV EAX,EBX
// 004126dc: POP EBX
// 004126dd: RET
