// Name: core_mirror.cpp_clipAndRenderReflectedPrimitive_FUN_00522560
// Address: 00522560
// Address Range: [[00522560, 00522592]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_clipAndRenderReflectedPrimitive_FUN_00522560(SMirror * mirror, SMRGLHeaderPrimitive * prim)
// Cross-references:
//   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0 (005708e0) at 0057091d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_mirror.cpp_reflectAndClipPrimitive_FUN_00522310
//   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820

#include "nocturne.h"

void __cdecl
core_mirror_cpp_clipAndRenderReflectedPrimitive_FUN_00522560
          (SMirror *mirror,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_reflectAndClipPrimitive_FUN_00522310(mirror,prim);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&prim[9].surface_normal.C);
  return;
}


// Assembly code:
// 00522560: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_mirror.cpp_clipAndRenderReflectedPrimitive_FUN_00522560
//   XREF to: Stack[0x8] (READ)
// 00522564: PUSH EDX
// 00522565: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00522569: PUSH ECX
// 0052256a: CALL core_mirror.cpp_reflectAndClipPrimitive_FUN_00522310
//   XREF to: 00522310 (UNCONDITIONAL_CALL)
// 0052256f: ADD ESP,0x8
// 00522572: TEST EAX,EAX
// 00522574: JNZ 0x00522577
//   XREF to: 00522577 (CONDITIONAL_JUMP)
// 00522576: RET
// 00522577: PUSH EBX
//   Label: LAB_00522577
// 00522578: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052257c: ADD EAX,0xe8
// 00522581: PUSH EAX
// 00522582: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00522588: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00522589: CALL engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
//   XREF to: 0048a820 (UNCONDITIONAL_CALL)
// 0052258e: ADD ESP,0x8
// 00522591: POP EBX
// 00522592: RET
