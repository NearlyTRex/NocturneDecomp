// Name: core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
// Address: 004719e0
// Address Range: [[004719e0, 00471a3d]]
// Convention: __cdecl
// Signature: void core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0(CDemonImage * this_ptr)
// Cross-references:
//   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 (00471ad0) at 00471b47 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dimage_cpp_0061ec5a
//   TerminatedCString s_core_dimage_cpp_0061ec6d
//   TerminatedCString s_CDemonImage_allocMemory__0061ec80
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_004719e0(CDemonImage *this_ptr)

{
  void *pvVar1;
  
  core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->width * this_ptr->height,"..\\core\\dimage.cpp",0x30);
  this_ptr->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dimage.cpp";
  g_CurrentLineNumber = 0x31;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::allocMemory - Out of memory!");
  return;
}


// Assembly code:
// 004719e0: PUSH EBX
//   Label: core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
// 004719e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004719e5: PUSH EBX
// 004719e6: CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
//   XREF to: 00471a40 (UNCONDITIONAL_CALL)
// 004719eb: MOV EAX,dword ptr [EBX + 0x304]
// 004719f1: IMUL EAX,dword ptr [EBX + 0x308]
// 004719f8: ADD ESP,0x4
// 004719fb: PUSH 0x30
// 004719fd: PUSH 0x61ec5a
//   XREF to: 0061ec5a (DATA)
// 00471a02: PUSH EAX
// 00471a03: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00471a08: ADD ESP,0xc
// 00471a0b: MOV dword ptr [EBX + 0x300],EAX
// 00471a11: TEST EAX,EAX
// 00471a13: JZ 0x00471a17
//   XREF to: 00471a17 (CONDITIONAL_JUMP)
// 00471a15: POP EBX
// 00471a16: RET
// 00471a17: PUSH ESI
//   Label: LAB_00471a17
// 00471a18: MOV EBX,0x61ec6d
//   XREF to: 0061ec6d (DATA)
// 00471a1d: MOV ESI,0x31
// 00471a22: PUSH 0x61ec80
//   XREF to: 0061ec80 (DATA)
// 00471a27: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00471a2d: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00471a33: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00471a38: ADD ESP,0x4
// 00471a3b: POP ESI
// 00471a3c: POP EBX
// 00471a3d: RET
