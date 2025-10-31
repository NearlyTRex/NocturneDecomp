// Name: core_minecar.cpp_FUN_00520f40
// Address: 00520f40
// Address Range: [[00520f40, 00520fa4]]
// Convention: __cdecl
// Signature: CMineCar * core_minecar.cpp_FUN_00520f40(CMineCar * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CMineCarTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_FUN_00520f40(CMineCar *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CMineCar *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMineCarTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0
                     ((CCourse *)((this_ptr->base_platform).field9_0x2f0 + 0x20));
  ptr = (CMineCar *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00520f40: PUSH EBX
//   Label: core_minecar.cpp_FUN_00520f40
// 00520f41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00520f45: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00520f4a: JNZ 0x00520f7d
//   XREF to: 00520f7d (CONDITIONAL_JUMP)
// 00520f4c: PUSH 0x0
// 00520f4e: ADD EBX,0x310
// 00520f54: PUSH EBX
// 00520f55: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 00520f5a: ADD ESP,0x8
// 00520f5d: PUSH 0x1
// 00520f5f: LEA EBX,[EAX + 0xfffffcf0]
// 00520f65: PUSH EBX
// 00520f66: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00520f6b: ADD ESP,0x8
// 00520f6e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00520f72: MOV EBX,EAX
// 00520f74: TEST DL,0x2
// 00520f77: JNZ 0x00520f98
//   XREF to: 00520f98 (CONDITIONAL_JUMP)
// 00520f79: MOV EAX,EBX
// 00520f7b: POP EBX
// 00520f7c: RET
// 00520f7d: PUSH 0x6616c0
//   Label: LAB_00520f7d
//   XREF to: 006616c0 (DATA)
// 00520f82: PUSH EBX
// 00520f83: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00520f88: ADD ESP,0x8
// 00520f8b: PUSH EAX
// 00520f8c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00520f91: ADD ESP,0x4
// 00520f94: MOV EAX,EBX
// 00520f96: POP EBX
// 00520f97: RET
// 00520f98: PUSH EAX
//   Label: LAB_00520f98
// 00520f99: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00520f9e: ADD ESP,0x4
// 00520fa1: MOV EAX,EBX
// 00520fa3: POP EBX
// 00520fa4: RET
