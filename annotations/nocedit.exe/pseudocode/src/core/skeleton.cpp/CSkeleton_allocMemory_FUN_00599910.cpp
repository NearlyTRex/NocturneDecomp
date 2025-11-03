// Name: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
// Address: 00599910
// Address Range: [[00599910, 00599a4d]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910(CSkeleton * this_ptr, int bone_count, int frame_count)
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592b10 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 (00599bb0) at 00599c9e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064e1a8
//   TerminatedCString s_Too_bony_0064e1bd
//   TerminatedCString s_core_skeleton_cpp_0064e1c7
//   TerminatedCString s_core_skeleton_cpp_0064e1dc
//   TerminatedCString s_core_skeleton_cpp_0064e1f1
//   TerminatedCString s_core_skeleton_cpp_0064e206
//   TerminatedCString s_Out_of_hunk_in_CSkeleton_0064e21b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910
          (CSkeleton *this_ptr,int bone_count,int frame_count)

{
  float fVar1;
  CQuaternion4f *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  int in_stack_00000014;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
  if (100 < bone_count) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too bony!");
  }
  this_ptr->bone_count = bone_count;
  this_ptr->frame_count = in_stack_00000014;
  pCVar2 = (CQuaternion4f *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (this_ptr->bone_count * this_ptr->frame_count * 0x10,
                      "..\\core\\skeleton.cpp",0xcf);
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->bone_angle_frames = pCVar2;
  pCVar3 = (CVector3f *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar1 * 0xc + 4,"..\\core\\skeleton.cpp",0xd0);
  pCVar4 = pCVar3;
  if (pCVar3 != (CVector3f *)0x0) {
    pCVar4 = (CVector3f *)&pCVar3->y;
    pCVar3->x = fVar1;
  }
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->frame_positions_1 = pCVar4;
  pCVar3 = (CVector3f *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar1 * 0xc + 4,"..\\core\\skeleton.cpp",0xd1);
  pCVar4 = pCVar3;
  if (pCVar3 != (CVector3f *)0x0) {
    pCVar4 = (CVector3f *)&pCVar3->y;
    pCVar3->x = fVar1;
  }
  this_ptr->frame_positions_2 = pCVar4;
  if (((this_ptr->bone_angle_frames != (CQuaternion4f *)0x0) &&
      (this_ptr->frame_positions_1 != (CVector3f *)0x0)) && (pCVar4 != (CVector3f *)0x0)) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0xda;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of hunk in CSkeleton::allocMemory.  boneCount=%d, frameCount=%d");
  return;
}


// Assembly code:
// 00599910: PUSH EBX
//   Label: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
// 00599911: PUSH ESI
// 00599912: PUSH EDI
// 00599913: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00599917: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0059991b: PUSH EBX
// 0059991c: CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50
//   XREF to: 00599a50 (UNCONDITIONAL_CALL)
// 00599921: ADD ESP,0x4
// 00599924: CMP ESI,0x64
// 00599927: JG 0x005999f1
//   XREF to: 005999f1 (CONDITIONAL_JUMP)
// 0059992d: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0059992d
//   XREF to: Stack[0xc] (READ)
// 00599931: MOV dword ptr [EBX + 0x28558],ESI
// 00599937: MOV dword ptr [EBX + 0x2936c],EAX
// 0059993d: MOV EAX,dword ptr [EBX + 0x28558]
// 00599943: IMUL EAX,dword ptr [EBX + 0x2936c]
// 0059994a: PUSH 0xcf
// 0059994f: PUSH 0x64e1c7
//   XREF to: 0064e1c7 (DATA)
// 00599954: SHL EAX,0x4
// 00599957: PUSH EAX
// 00599958: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059995d: MOV ESI,dword ptr [EBX + 0x2936c]
// 00599963: MOV dword ptr [EBX + 0x29370],EAX
// 00599969: LEA EAX,[ESI*0x4 + 0x0]
// 00599970: ADD ESP,0xc
// 00599973: SUB EAX,ESI
// 00599975: PUSH 0xd0
// 0059997a: SHL EAX,0x2
// 0059997d: PUSH 0x64e1dc
//   XREF to: 0064e1dc (DATA)
// 00599982: ADD EAX,0x4
// 00599985: PUSH EAX
// 00599986: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059998b: ADD ESP,0xc
// 0059998e: TEST EAX,EAX
// 00599990: JZ 0x00599998
//   XREF to: 00599998 (CONDITIONAL_JUMP)
// 00599992: ADD EAX,0x4
// 00599995: MOV dword ptr [EAX + -0x4],ESI
// 00599998: MOV ESI,dword ptr [EBX + 0x2936c]
//   Label: LAB_00599998
// 0059999e: MOV dword ptr [EBX + 0x29374],EAX
// 005999a4: LEA EAX,[ESI*0x4 + 0x0]
// 005999ab: SUB EAX,ESI
// 005999ad: PUSH 0xd1
// 005999b2: SHL EAX,0x2
// 005999b5: PUSH 0x64e1f1
//   XREF to: 0064e1f1 (DATA)
// 005999ba: ADD EAX,0x4
// 005999bd: PUSH EAX
// 005999be: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 005999c3: ADD ESP,0xc
// 005999c6: TEST EAX,EAX
// 005999c8: JZ 0x005999d0
//   XREF to: 005999d0 (CONDITIONAL_JUMP)
// 005999ca: ADD EAX,0x4
// 005999cd: MOV dword ptr [EAX + -0x4],ESI
// 005999d0: MOV EDI,dword ptr [EBX + 0x29370]
//   Label: LAB_005999d0
// 005999d6: MOV dword ptr [EBX + 0x29378],EAX
// 005999dc: TEST EDI,EDI
// 005999de: JZ 0x00599a19
//   XREF to: 00599a19 (CONDITIONAL_JUMP)
// 005999e0: CMP dword ptr [EBX + 0x29374],0x0
// 005999e7: JZ 0x00599a19
//   XREF to: 00599a19 (CONDITIONAL_JUMP)
// 005999e9: TEST EAX,EAX
// 005999eb: JZ 0x00599a19
//   XREF to: 00599a19 (CONDITIONAL_JUMP)
// 005999ed: POP EDI
// 005999ee: POP ESI
// 005999ef: POP EBX
// 005999f0: RET
// 005999f1: MOV EDX,0x64e1a8
//   Label: LAB_005999f1
//   XREF to: 0064e1a8 (PARAM)
// 005999f6: MOV ECX,0xc6
// 005999fb: PUSH 0x64e1bd
//   XREF to: 0064e1bd (DATA)
// 00599a00: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00599a06: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00599a0c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599a11: ADD ESP,0x4
// 00599a14: JMP 0x0059992d
//   XREF to: 0059992d (UNCONDITIONAL_JUMP)
// 00599a19: MOV ESI,dword ptr [EBX + 0x2936c]
//   Label: LAB_00599a19
// 00599a1f: PUSH ESI
// 00599a20: MOV EDI,dword ptr [EBX + 0x28558]
// 00599a26: PUSH EDI
// 00599a27: MOV EDX,0x64e206
//   XREF to: 0064e206 (PARAM)
// 00599a2c: MOV ECX,0xda
// 00599a31: PUSH 0x64e21b
//   XREF to: 0064e21b (DATA)
// 00599a36: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00599a3c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00599a42: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599a47: ADD ESP,0xc
// 00599a4a: POP EDI
// 00599a4b: POP ESI
// 00599a4c: POP EBX
// 00599a4d: RET
