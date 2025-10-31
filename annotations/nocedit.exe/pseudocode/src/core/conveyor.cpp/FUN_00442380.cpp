// Name: core_conveyor.cpp_FUN_00442380
// Address: 00442380
// Address Range: [[00442380, 004423e4]]
// Convention: __cdecl
// Signature: CPlatform * core_conveyor.cpp_FUN_00442380(CPlatform * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CPlatformTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CPlatform * __cdecl core_conveyor_cpp_FUN_00442380(CPlatform *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CPlatform *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CPlatformTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)(this_ptr->field9_0x2f0 + 0x20));
  ptr = (CPlatform *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00442380: PUSH EBX
//   Label: core_conveyor.cpp_FUN_00442380
// 00442381: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00442385: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0044238a: JNZ 0x004423bd
//   XREF to: 004423bd (CONDITIONAL_JUMP)
// 0044238c: PUSH 0x0
// 0044238e: ADD EBX,0x310
// 00442394: PUSH EBX
// 00442395: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 0044239a: ADD ESP,0x8
// 0044239d: PUSH 0x1
// 0044239f: LEA EBX,[EAX + 0xfffffcf0]
// 004423a5: PUSH EBX
// 004423a6: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004423ab: ADD ESP,0x8
// 004423ae: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004423b2: MOV EBX,EAX
// 004423b4: TEST DL,0x2
// 004423b7: JNZ 0x004423d8
//   XREF to: 004423d8 (CONDITIONAL_JUMP)
// 004423b9: MOV EAX,EBX
// 004423bb: POP EBX
// 004423bc: RET
// 004423bd: PUSH 0x65c040
//   Label: LAB_004423bd
//   XREF to: 0065c040 (DATA)
// 004423c2: PUSH EBX
// 004423c3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004423c8: ADD ESP,0x8
// 004423cb: PUSH EAX
// 004423cc: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004423d1: ADD ESP,0x4
// 004423d4: MOV EAX,EBX
// 004423d6: POP EBX
// 004423d7: RET
// 004423d8: PUSH EAX
//   Label: LAB_004423d8
// 004423d9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004423de: ADD ESP,0x4
// 004423e1: MOV EAX,EBX
// 004423e3: POP EBX
// 004423e4: RET
