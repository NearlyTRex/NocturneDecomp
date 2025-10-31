// Name: core_course.cpp_CCourse_allocMemory_FUN_00442500
// Address: 00442500
// Address Range: [[00442500, 00442577]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_allocMemory_FUN_00442500(CCourse * this_ptr)
// Cross-references:
//   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 (00442ea0) at 00442eb1 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_load_FUN_00442580 (00442580) at 0044260b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\course.cpp_00618edb
//   TerminatedCString s_core_course_cpp_00618eee
//   TerminatedCString s_CCourse_allocMemory_out__00618f01
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_course.cpp_CCourse_free_FUN_004426c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0044253f) */

void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00442500(CCourse *this_ptr)

{
  int *piVar1;
  int in_stack_0000000c;
  
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  this_ptr->len = in_stack_0000000c;
  piVar1 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            (in_stack_0000000c * 0x1c + 4,"@..\\core\\course.cpp" + 1,0x6d);
  if (piVar1 == (int *)0x0) {
    this_ptr->frame_list = (CCourseFrameList *)0x0;
  }
  else {
    *piVar1 = in_stack_0000000c;
    this_ptr->frame_list = (CCourseFrameList *)(piVar1 + 1);
    if ((CCourseFrameList *)(piVar1 + 1) != (CCourseFrameList *)0x0) {
      return;
    }
  }
  g_CurrentFilename = "..\\core\\course.cpp";
  g_CurrentLineNumber = 0x6e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::allocMemory - out of hunk!");
  return;
}


// Assembly code:
// 00442500: PUSH EBX
//   Label: core_course.cpp_CCourse_allocMemory_FUN_00442500
// 00442501: PUSH ESI
// 00442502: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00442506: PUSH EBX
// 00442507: CALL core_course.cpp_CCourse_free_FUN_004426c0
//   XREF to: 004426c0 (UNCONDITIONAL_CALL)
// 0044250c: ADD ESP,0x4
// 0044250f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00442513: MOV ESI,EAX
// 00442515: MOV dword ptr [EBX],EAX
// 00442517: SHL EAX,0x2
// 0044251a: MOV EDX,EAX
// 0044251c: SHL EAX,0x3
// 0044251f: PUSH 0x6d
// 00442521: SUB EAX,EDX
// 00442523: PUSH 0x618edb
//   XREF to: 00618edb (DATA)
// 00442528: ADD EAX,0x4
// 0044252b: PUSH EAX
// 0044252c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00442531: ADD ESP,0xc
// 00442534: TEST EAX,EAX
// 00442536: JNZ 0x00442542
//   XREF to: 00442542 (CONDITIONAL_JUMP)
// 00442538: MOV dword ptr [EBX + 0x4],EAX
// 0044253b: TEST EAX,EAX
// 0044253d: JZ 0x00442552
//   XREF to: 00442552 (CONDITIONAL_JUMP)
// 0044253f: POP ESI
// 00442540: POP EBX
// 00442541: RET
// 00442542: ADD EAX,0x4
//   Label: LAB_00442542
// 00442545: MOV dword ptr [EAX + -0x4],ESI
// 00442548: MOV dword ptr [EBX + 0x4],EAX
// 0044254b: TEST EAX,EAX
// 0044254d: JZ 0x00442552
//   XREF to: 00442552 (CONDITIONAL_JUMP)
// 0044254f: POP ESI
// 00442550: POP EBX
// 00442551: RET
// 00442552: MOV ECX,0x618eee
//   Label: LAB_00442552
//   XREF to: 00618eee (PARAM)
// 00442557: MOV EBX,0x6e
// 0044255c: PUSH 0x618f01
//   XREF to: 00618f01 (DATA)
// 00442561: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00442567: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0044256d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00442572: ADD ESP,0x4
// 00442575: POP ESI
// 00442576: POP EBX
// 00442577: RET
