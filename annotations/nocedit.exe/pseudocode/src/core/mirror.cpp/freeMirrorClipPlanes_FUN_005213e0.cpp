// Name: core_mirror.cpp_freeMirrorClipPlanes_FUN_005213e0
// Address: 005213e0
// Address Range: [[005213e0, 005213f9]]
// Convention: __cdecl
// Signature: SMirror * core_mirror.cpp_freeMirrorClipPlanes_FUN_005213e0(SMirror * mirror)
// Cross-references:
//   core_glass.cpp_CGlass_dtor_FUN_004eb820 (004eb820) at 004eb845 [UNCONDITIONAL_CALL]
// Function calls:
//   core_mirror.cpp_freeClipPlaneArray_FUN_00522c10

#include "nocturne.h"

SMirror * __cdecl core_mirror_cpp_freeMirrorClipPlanes_FUN_005213e0(SMirror *mirror)

{
  int extraout_EAX;
  
  core_mirror_cpp_freeClipPlaneArray_FUN_00522c10((SClipPlane **)mirror->clip_planes);
  return (SMirror *)(extraout_EAX + -0x98);
}


// Assembly code:
// 005213e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mirror.cpp_freeMirrorClipPlanes_FUN_005213e0
//   XREF to: Stack[0x4] (READ)
// 005213e4: PUSH 0x0
// 005213e6: ADD EAX,0x98
// 005213eb: PUSH EAX
// 005213ec: CALL core_mirror.cpp_freeClipPlaneArray_FUN_00522c10
//   XREF to: 00522c10 (UNCONDITIONAL_CALL)
// 005213f1: ADD ESP,0x8
// 005213f4: SUB EAX,0x98
// 005213f9: RET
