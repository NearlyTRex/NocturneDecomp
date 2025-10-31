// Name: core_marquee.cpp_FUN_0050c4c0
// Address: 0050c4c0
// Address Range: [[0050c4c0, 0050c524]]
// Convention: __cdecl
// Signature: CMarquee * core_marquee.cpp_FUN_0050c4c0(CMarquee * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CMarqueeTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_FUN_0050c4c0(CMarquee *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CMarquee *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMarqueeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)this_ptr->field8_0x1a4);
  ptr = (CMarquee *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(pCVar1 + -0x23),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0050c4c0: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050c4c0
// 0050c4c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050c4c5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0050c4ca: JNZ 0x0050c4fd
//   XREF to: 0050c4fd (CONDITIONAL_JUMP)
// 0050c4cc: PUSH 0x0
// 0050c4ce: ADD EBX,0x1a4
// 0050c4d4: PUSH EBX
// 0050c4d5: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 0050c4da: ADD ESP,0x8
// 0050c4dd: PUSH 0x1
// 0050c4df: LEA EBX,[EAX + 0xfffffe5c]
// 0050c4e5: PUSH EBX
// 0050c4e6: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0050c4eb: ADD ESP,0x8
// 0050c4ee: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050c4f2: MOV EBX,EAX
// 0050c4f4: TEST DL,0x2
// 0050c4f7: JNZ 0x0050c518
//   XREF to: 0050c518 (CONDITIONAL_JUMP)
// 0050c4f9: MOV EAX,EBX
// 0050c4fb: POP EBX
// 0050c4fc: RET
// 0050c4fd: PUSH 0x661130
//   Label: LAB_0050c4fd
//   XREF to: 00661130 (DATA)
// 0050c502: PUSH EBX
// 0050c503: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0050c508: ADD ESP,0x8
// 0050c50b: PUSH EAX
// 0050c50c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0050c511: ADD ESP,0x4
// 0050c514: MOV EAX,EBX
// 0050c516: POP EBX
// 0050c517: RET
// 0050c518: PUSH EAX
//   Label: LAB_0050c518
// 0050c519: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0050c51e: ADD ESP,0x4
// 0050c521: MOV EAX,EBX
// 0050c523: POP EBX
// 0050c524: RET
