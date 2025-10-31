// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
// Address: 00470260
// Address Range: [[00470260, 004702b6]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter * this_ptr)
// Cross-references:
//   core_dfilter.cpp_CDemonFilter_init_FUN_004705a0 (004705a0) at 00470688 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 (004702f0) at 004703ec [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dfilter_cpp_0061e549
//   TerminatedCString s_core_dfilter_cpp_0061e55d
//   TerminatedCString s_CDemonFilter_allocMemory_0061e571
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter *this_ptr)

{
  void *pvVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->size * this_ptr->count,"..\\core\\dfilter.cpp",0x8c);
  this_ptr->data_buffer = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dfilter.cpp";
  g_CurrentLineNumber = 0x8d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::allocMemory - Out of memory");
  return;
}


// Assembly code:
// 00470260: PUSH EBX
//   Label: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
// 00470261: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00470265: PUSH EBX
// 00470266: CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
//   XREF to: 004702c0 (UNCONDITIONAL_CALL)
// 0047026b: MOV EAX,dword ptr [EBX]
// 0047026d: IMUL EAX,dword ptr [EBX + 0x4]
// 00470271: ADD ESP,0x4
// 00470274: PUSH 0x8c
// 00470279: PUSH 0x61e549
//   XREF to: 0061e549 (DATA)
// 0047027e: PUSH EAX
// 0047027f: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00470284: ADD ESP,0xc
// 00470287: MOV dword ptr [EBX + 0x48],EAX
// 0047028a: TEST EAX,EAX
// 0047028c: JZ 0x00470290
//   XREF to: 00470290 (CONDITIONAL_JUMP)
// 0047028e: POP EBX
// 0047028f: RET
// 00470290: PUSH ESI
//   Label: LAB_00470290
// 00470291: MOV EBX,0x61e55d
//   XREF to: 0061e55d (PARAM)
// 00470296: MOV ESI,0x8d
// 0047029b: PUSH 0x61e571
//   XREF to: 0061e571 (DATA)
// 004702a0: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004702a6: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004702ac: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004702b1: ADD ESP,0x4
// 004702b4: POP ESI
// 004702b5: POP EBX
// 004702b6: RET
