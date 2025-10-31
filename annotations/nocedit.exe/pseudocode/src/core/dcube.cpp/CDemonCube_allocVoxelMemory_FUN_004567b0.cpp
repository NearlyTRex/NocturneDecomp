// Name: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
// Address: 004567b0
// Address Range: [[004567b0, 0045683b]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 (0049a160) at 0049a24c [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280 (0049a280) at 0049a36b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcube_cpp_0061a51a
//   TerminatedCString s_core_dcube_cpp_0061a52c
//   TerminatedCString s_CDemonCube_allocMemory_O_0061a53e
//   TerminatedCString s_core_dcube_cpp_0061a56c
//   TerminatedCString s_core_dcube_cpp_0061a57e
//   TerminatedCString s_CDemonCube_allocMemory_O_0061a590
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube *this_ptr)

{
  SVoxelGrid *pSVar1;
  
  pSVar1 = (SVoxelGrid *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350(0x40,1,"..\\core\\dcube.cpp",0x5f2);
  this_ptr->voxel_buffer1 = pSVar1;
  if (pSVar1 == (SVoxelGrid *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x5f3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar1 = (SVoxelGrid *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350(0x40,1,"..\\core\\dcube.cpp",0x5f4);
  this_ptr->voxel_buffer2 = pSVar1;
  if (pSVar1 != (SVoxelGrid *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dcube.cpp";
  g_CurrentLineNumber = 0x5f5;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  return;
}


// Assembly code:
// 004567b0: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
// 004567b1: PUSH EBP
// 004567b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004567b6: PUSH 0x5f2
// 004567bb: PUSH 0x61a51a
//   XREF to: 0061a51a (DATA)
// 004567c0: PUSH 0x1
// 004567c2: PUSH 0x40
// 004567c4: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 004567c9: ADD ESP,0x10
// 004567cc: MOV dword ptr [EBX],EAX
// 004567ce: TEST EAX,EAX
// 004567d0: JNZ 0x004567f7
//   XREF to: 004567f7 (CONDITIONAL_JUMP)
// 004567d2: PUSH ESI
// 004567d3: MOV ECX,0x61a52c
//   XREF to: 0061a52c (PARAM)
// 004567d8: MOV ESI,0x5f3
// 004567dd: PUSH 0x61a53e
//   XREF to: 0061a53e (DATA)
// 004567e2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004567e8: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004567ee: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004567f3: ADD ESP,0x4
// 004567f6: POP ESI
// 004567f7: PUSH 0x5f4
//   Label: LAB_004567f7
// 004567fc: PUSH 0x61a56c
//   XREF to: 0061a56c (DATA)
// 00456801: PUSH 0x1
// 00456803: PUSH 0x40
// 00456805: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 0045680a: ADD ESP,0x10
// 0045680d: MOV dword ptr [EBX + 0x4],EAX
// 00456810: TEST EAX,EAX
// 00456812: JZ 0x00456817
//   XREF to: 00456817 (CONDITIONAL_JUMP)
// 00456814: POP EBP
// 00456815: POP EBX
// 00456816: RET
// 00456817: MOV EBP,0x61a57e
//   Label: LAB_00456817
//   XREF to: 0061a57e (DATA)
// 0045681c: MOV EAX,0x5f5
// 00456821: PUSH 0x61a590
//   XREF to: 0061a590 (DATA)
// 00456826: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0045682c: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00456831: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00456836: ADD ESP,0x4
// 00456839: POP EBP
// 0045683a: POP EBX
// 0045683b: RET
