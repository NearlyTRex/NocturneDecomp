// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
// Address: 00494270
// Address Range: [[00494270, 004942c7]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494927 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_0062258a
//   TerminatedCString s_core_dtrace_cpp_0062259d
//   TerminatedCString s_CDemonRaytrace_allocCube_006225b0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00494270(CDemonRaytrace *this_ptr)

{
  SVoxelCubeMetadata *pSVar1;
  
  pSVar1 = (SVoxelCubeMetadata *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (0x58,(this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                           (this_ptr->grid_coord).z,"..\\core\\dtrace.cpp",0x87);
  this_ptr->cube_list = pSVar1;
  if (pSVar1 != (SVoxelCubeMetadata *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0x88;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}


// Assembly code:
// 00494270: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
// 00494271: PUSH EBP
// 00494272: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00494276: MOV EAX,dword ptr [EBX + 0x40]
// 00494279: IMUL EAX,dword ptr [EBX + 0x44]
// 0049427d: IMUL EAX,dword ptr [EBX + 0x48]
// 00494281: PUSH 0x87
// 00494286: PUSH 0x62258a
//   XREF to: 0062258a (DATA)
// 0049428b: PUSH EAX
// 0049428c: PUSH 0x58
// 0049428e: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 00494293: ADD ESP,0x10
// 00494296: MOV dword ptr [EBX + 0x4c],EAX
// 00494299: TEST EAX,EAX
// 0049429b: JZ 0x004942a0
//   XREF to: 004942a0 (CONDITIONAL_JUMP)
// 0049429d: POP EBP
// 0049429e: POP EBX
// 0049429f: RET
// 004942a0: PUSH EDI
//   Label: LAB_004942a0
// 004942a1: MOV EDI,0x62259d
//   XREF to: 0062259d (DATA)
// 004942a6: MOV EBP,0x88
// 004942ab: PUSH 0x6225b0
//   XREF to: 006225b0 (DATA)
// 004942b0: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004942b6: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004942bc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004942c1: ADD ESP,0x4
// 004942c4: POP EDI
// 004942c5: POP EBP
// 004942c6: POP EBX
// 004942c7: RET
