// Name: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
// Address: 00494380
// Address Range: [[00494380, 004943f7]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 004953e2 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 004948c5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622605
//   TerminatedCString s_core_dtrace_cpp_00622618
//   TerminatedCString s_CDemonRaytrace_allocNewC_0062262b
//   WatcomTypeInfo g_CDemonCubeTypeInfo
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_constructTypedObjectArray_FUN_00601272
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace *this_ptr)

{
  void *array_memory;
  CDemonCube *pCVar1;
  WatcomTypeInfo *unaff_EBX;
  WatcomTypeInfo *element_count;
  
  element_count = &g_CDemonCubeTypeInfo;
  array_memory = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((this_ptr->grid_coord).z *
                            (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * 0x34 + 4,
                            "..\\core\\dtrace.cpp",0xad);
  pCVar1 = (CDemonCube *)
           crt_memory_c_constructTypedObjectArray_FUN_00601272
                     (array_memory,(int)element_count,unaff_EBX);
  this_ptr->cube_data = pCVar1;
  if (pCVar1 != (CDemonCube *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0xae;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}


// Assembly code:
// 00494380: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
// 00494381: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00494385: MOV EAX,dword ptr [EBX + 0x40]
// 00494388: IMUL EAX,dword ptr [EBX + 0x44]
// 0049438c: MOV EDX,dword ptr [EBX + 0x48]
// 0049438f: IMUL EDX,EAX
// 00494392: PUSH 0x65d290
//   XREF to: 0065d290 (DATA)
// 00494397: PUSH EDX
// 00494398: LEA EAX,[EDX*0x4 + 0x0]
// 0049439f: SUB EAX,EDX
// 004943a1: SHL EAX,0x2
// 004943a4: ADD EAX,EDX
// 004943a6: PUSH 0xad
// 004943ab: SHL EAX,0x2
// 004943ae: PUSH 0x622605
//   XREF to: 00622605 (DATA)
// 004943b3: ADD EAX,0x4
// 004943b6: PUSH EAX
// 004943b7: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004943bc: ADD ESP,0xc
// 004943bf: PUSH EAX
// 004943c0: CALL crt_memory.c_constructTypedObjectArray_FUN_00601272
//   XREF to: 00601272 (UNCONDITIONAL_CALL)
// 004943c5: ADD ESP,0xc
// 004943c8: TEST EAX,EAX
// 004943ca: MOV dword ptr [EBX + 0x50],EAX
// 004943cd: JZ 0x004943d1
//   XREF to: 004943d1 (CONDITIONAL_JUMP)
// 004943cf: POP EBX
// 004943d0: RET
// 004943d1: PUSH ESI
//   Label: LAB_004943d1
// 004943d2: MOV EBX,0x622618
//   XREF to: 00622618 (PARAM)
// 004943d7: MOV ESI,0xae
// 004943dc: PUSH 0x62262b
//   XREF to: 0062262b (DATA)
// 004943e1: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004943e7: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004943ed: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004943f2: ADD ESP,0x4
// 004943f5: POP ESI
// 004943f6: POP EBX
// 004943f7: RET
