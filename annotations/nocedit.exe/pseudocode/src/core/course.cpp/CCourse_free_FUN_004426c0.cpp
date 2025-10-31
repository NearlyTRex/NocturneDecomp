// Name: core_course.cpp_CCourse_free_FUN_004426c0
// Address: 004426c0
// Address Range: [[004426c0, 0044270b]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)
// Cross-references:
//   core_course.cpp_CCourse_allocMemory_FUN_00442500 (00442500) at 00442507 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_dtor_FUN_004424e0 (004424e0) at 004424e6 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_load_FUN_00442580 (00442580) at 00442590 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_free_FUN_00529ce0 (00529ce0) at 00529cf5 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e530 (0054e530) at 0054e61f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_course_cpp_00618f98
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_free_FUN_004426c0(CCourse *this_ptr)

{
  g_CurrentDebugLine = 0xa8;
  g_CurrentDebugFilename = "..\\core\\course.cpp";
  if (this_ptr->frame_list == (CCourseFrameList *)0x0) {
    this_ptr->len = 0;
    this_ptr->frame_list = (CCourseFrameList *)0x0;
    return;
  }
  crt_memory_c_free_FUN_005fe659(&this_ptr->frame_list[-1].frame4.orient.z);
  this_ptr->len = 0;
  this_ptr->frame_list = (CCourseFrameList *)0x0;
  return;
}


// Assembly code:
// 004426c0: PUSH EBX
//   Label: core_course.cpp_CCourse_free_FUN_004426c0
// 004426c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004426c5: MOV ECX,0xa8
// 004426ca: MOV EDX,0x618f98
//   XREF to: 00618f98 (PARAM)
// 004426cf: MOV EAX,dword ptr [EBX + 0x4]
// 004426d2: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 004426d8: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 004426de: TEST EAX,EAX
// 004426e0: JNZ 0x004426f1
//   XREF to: 004426f1 (CONDITIONAL_JUMP)
// 004426e2: MOV dword ptr [EBX],0x0
// 004426e8: MOV dword ptr [EBX + 0x4],0x0
// 004426ef: POP EBX
// 004426f0: RET
// 004426f1: SUB EAX,0x4
//   Label: LAB_004426f1
// 004426f4: PUSH EAX
// 004426f5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004426fa: ADD ESP,0x4
// 004426fd: MOV dword ptr [EBX],0x0
// 00442703: MOV dword ptr [EBX + 0x4],0x0
// 0044270a: POP EBX
// 0044270b: RET
