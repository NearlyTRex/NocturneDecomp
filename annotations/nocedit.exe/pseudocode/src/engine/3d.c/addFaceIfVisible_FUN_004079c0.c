// Name: engine_3d.c_addFaceIfVisible_FUN_004079c0
// Address: 004079c0
// Address Range: [[004079c0, 00407a22]]
// Convention: __cdecl
// Signature: void engine_3d.c_addFaceIfVisible_FUN_004079c0(SMRGLHeaderPrimitive * cull_reference, SMRGLHeaderPrimitive * face_to_queue)
// Globals:
//   TerminatedCString s_engine_3d_c_006134f3
//   TerminatedCString s_renderFaceList_too_many__00613502
//   int g_RenderFaceCount
//   SMRGLHeaderPrimitive*[2000] g_RenderFaceArray
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_3d.c_isVisiblePlane_FUN_00403950

#include "nocturne.h"

void __cdecl
engine_3d_c_addFaceIfVisible_FUN_004079c0
          (SMRGLHeaderPrimitive *cull_reference,SMRGLHeaderPrimitive *face_to_queue)

{
  int iVar1;
  SMRGLHeaderPrimitive *in_stack_0000000c;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&cull_reference->surface_normal);
  if (iVar1 != 0) {
    if (1999 < g_RenderFaceCount) {
      g_CurrentFilename = "..\\engine\\3d.c";
      g_CurrentLineNumber = 0xca7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("renderFaceList - too many faces");
    }
    g_RenderFaceArray[g_RenderFaceCount] = in_stack_0000000c;
    g_RenderFaceCount = g_RenderFaceCount + 1;
  }
  return;
}


// Assembly code:
// 004079c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_addFaceIfVisible_FUN_004079c0
//   XREF to: Stack[0x4] (READ)
// 004079c4: ADD EAX,0x8
// 004079c7: PUSH EAX
// 004079c8: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004079cd: ADD ESP,0x4
// 004079d0: TEST EAX,EAX
// 004079d2: JZ 0x004079fb
//   XREF to: 004079fb (CONDITIONAL_JUMP)
// 004079d4: PUSH ESI
// 004079d5: CMP dword ptr [0x00820070],0x7d0
//   XREF to: 00820070 (READ)
// 004079df: JGE 0x004079fc
//   XREF to: 004079fc (CONDITIONAL_JUMP)
// 004079e1: MOV EAX,[0x00820070]
//   Label: LAB_004079e1
//   XREF to: 00820070 (READ)
// 004079e6: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004079ea: LEA ESI,[EAX + 0x1]
// 004079ed: MOV dword ptr [EAX*0x4 + 0x820074],EDX
//   XREF to: 00820074 (DATA)
// 004079f4: MOV dword ptr [0x00820070],ESI
//   XREF to: 00820070 (WRITE)
// 004079fa: POP ESI
// 004079fb: RET
//   Label: LAB_004079fb
// 004079fc: PUSH EBX
//   Label: LAB_004079fc
// 004079fd: MOV ECX,0x6134f3
//   XREF to: 006134f3 (DATA)
// 00407a02: MOV EBX,0xca7
// 00407a07: PUSH 0x613502
//   XREF to: 00613502 (DATA)
// 00407a0c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00407a12: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00407a18: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00407a1d: ADD ESP,0x4
// 00407a20: POP EBX
// 00407a21: JMP 0x004079e1
//   XREF to: 004079e1 (UNCONDITIONAL_JUMP)
