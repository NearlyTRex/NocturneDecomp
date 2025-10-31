// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
// Address: 00474720
// Address Range: [[00474720, 0047476b]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720(CDemonLight * this_ptr)
// Cross-references:
//   core_setutil.cpp_C3DSLight_apply_FUN_00586bf0 (00586bf0) at 00586ca2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061f193
//   TerminatedCString s_core_dlight_cpp_0061f1a6
//   TerminatedCString s_CDemonLight_allocateFilt_0061f1b9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(CDemonLight *this_ptr)

{
  void *pvVar1;
  int in_stack_00000008;
  
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x10000,"..\\core\\dlight.cpp",0x53f);
  *(void **)(in_stack_00000008 + 0x1c6c) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dlight.cpp";
  g_CurrentLineNumber = 0x541;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::allocateFilter - Out of memory");
  return;
}


// Assembly code:
// 00474720: PUSH 0x53f
//   Label: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
// 00474725: PUSH 0x61f193
//   XREF to: 0061f193 (DATA)
// 0047472a: PUSH 0x10000
// 0047472f: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00474734: ADD ESP,0xc
// 00474737: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0047473b: MOV dword ptr [EDX + 0x1c6c],EAX
// 00474741: TEST EAX,EAX
// 00474743: JZ 0x00474746
//   XREF to: 00474746 (CONDITIONAL_JUMP)
// 00474745: RET
// 00474746: PUSH EBX
//   Label: LAB_00474746
// 00474747: MOV ECX,0x61f1a6
//   Label: LAB_00474747
//   XREF to: 0061f1a6 (PARAM)
// 0047474c: MOV EBX,0x541
// 00474751: PUSH 0x61f1b9
//   XREF to: 0061f1b9 (DATA)
// 00474756: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0047475c: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00474762: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00474767: ADD ESP,0x4
// 0047476a: POP EBX
// 0047476b: RET
