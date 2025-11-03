// Name: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
// Address: 005225a0
// Address Range: [[005225a0, 005225d2]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_00570df0 (00570df0) at 00570e0c [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50

#include "nocturne.h"

void __cdecl
core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
          (CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(this_ptr,prim);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&prim[9].surface_normal.C);
  return;
}


// Assembly code:
// 005225a0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
//   XREF to: Stack[0x8] (READ)
// 005225a4: PUSH EDX
// 005225a5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005225a9: PUSH ECX
// 005225aa: CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
//   XREF to: 00522310 (UNCONDITIONAL_CALL)
// 005225af: ADD ESP,0x8
// 005225b2: TEST EAX,EAX
// 005225b4: JNZ 0x005225b7
//   XREF to: 005225b7 (CONDITIONAL_JUMP)
// 005225b6: RET
// 005225b7: PUSH EBX
//   Label: LAB_005225b7
// 005225b8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005225bc: ADD EAX,0xe8
// 005225c1: PUSH EAX
// 005225c2: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005225c8: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005225c9: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 005225ce: ADD ESP,0x8
// 005225d1: POP EBX
// 005225d2: RET
