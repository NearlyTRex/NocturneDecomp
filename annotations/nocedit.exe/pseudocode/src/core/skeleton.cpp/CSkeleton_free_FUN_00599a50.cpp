// Name: core_skeleton.cpp_CSkeleton_free_FUN_00599a50
// Address: 00599a50
// Address Range: [[00599a50, 00599b0e]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005926b0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910 (00599910) at 0059991c [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0 (005998e0) at 005998f0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 (00599bb0) at 00599bbc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 (005a1ea0) at 005a1eb3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064e25f
//   TerminatedCString s_core_skeleton_cpp_0064e274
//   TerminatedCString s_core_skeleton_cpp_0064e289
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_free_FUN_00599a50(CSkeleton *this_ptr)

{
  this_ptr->bone_count = 0;
  this_ptr->frame_count = 0;
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0xe6;
  crt_memory_c_free_FUN_005fe659(this_ptr->bone_angle_frames);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0xe7;
  if (this_ptr->frame_positions_1 != (CVector3f *)0x0) {
    crt_memory_c_free_FUN_005fe659(&this_ptr->frame_positions_1[-1].z);
  }
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0xe8;
  if (this_ptr->frame_positions_2 != (CVector3f *)0x0) {
    crt_memory_c_free_FUN_005fe659(&this_ptr->frame_positions_2[-1].z);
  }
  this_ptr->frame_positions_1 = (CVector3f *)0x0;
  this_ptr->frame_positions_2 = (CVector3f *)0x0;
  this_ptr->bone_angle_frames = (CQuaternion4f *)0x0;
  return;
}


// Assembly code:
// 00599a50: PUSH EBX
//   Label: core_skeleton.cpp_CSkeleton_free_FUN_00599a50
// 00599a51: PUSH ESI
// 00599a52: PUSH EDI
// 00599a53: PUSH EBP
// 00599a54: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00599a58: MOV EDX,0x64e25f
//   XREF to: 0064e25f (PARAM)
// 00599a5d: MOV ECX,0xe6
// 00599a62: MOV EDI,0x64e274
//   XREF to: 0064e274 (DATA)
// 00599a67: MOV dword ptr [EBX + 0x28558],0x0
// 00599a71: MOV EBP,0xe7
// 00599a76: MOV ESI,dword ptr [EBX + 0x29370]
// 00599a7c: MOV dword ptr [EBX + 0x2936c],0x0
// 00599a86: PUSH ESI
// 00599a87: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00599a8d: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00599a93: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00599a98: ADD ESP,0x4
// 00599a9b: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00599aa1: MOV EAX,dword ptr [EBX + 0x29374]
// 00599aa7: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 00599aad: TEST EAX,EAX
// 00599aaf: JNZ 0x00599af3
//   XREF to: 00599af3 (CONDITIONAL_JUMP)
// 00599ab1: MOV EAX,0x64e289
//   Label: LAB_00599ab1
//   XREF to: 0064e289 (DATA)
// 00599ab6: MOV EDX,0xe8
// 00599abb: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 00599ac0: MOV EAX,dword ptr [EBX + 0x29378]
// 00599ac6: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00599acc: TEST EAX,EAX
// 00599ace: JNZ 0x00599b01
//   XREF to: 00599b01 (CONDITIONAL_JUMP)
// 00599ad0: MOV dword ptr [EBX + 0x29374],0x0
//   Label: LAB_00599ad0
// 00599ada: MOV dword ptr [EBX + 0x29378],0x0
// 00599ae4: MOV dword ptr [EBX + 0x29370],0x0
// 00599aee: POP EBP
// 00599aef: POP EDI
// 00599af0: POP ESI
// 00599af1: POP EBX
// 00599af2: RET
// 00599af3: SUB EAX,0x4
//   Label: LAB_00599af3
// 00599af6: PUSH EAX
// 00599af7: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00599afc: ADD ESP,0x4
// 00599aff: JMP 0x00599ab1
//   XREF to: 00599ab1 (UNCONDITIONAL_JUMP)
// 00599b01: SUB EAX,0x4
//   Label: LAB_00599b01
// 00599b04: PUSH EAX
// 00599b05: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00599b0a: ADD ESP,0x4
// 00599b0d: JMP 0x00599ad0
//   XREF to: 00599ad0 (UNCONDITIONAL_JUMP)
