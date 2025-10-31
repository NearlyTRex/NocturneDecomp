// Name: core_mirror.cpp_renderMirroredPrimitive_FUN_005225e0
// Address: 005225e0
// Address Range: [[005225e0, 00522664]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_renderMirroredPrimitive_FUN_005225e0(SMirror * mirror, SMRGLHeaderPrimitive * prim)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   SMRGLHeaderPrimitive g_MirrorTempPrimitive
//   undefined4 g_MirrorTempPrimitive.base.count
//   undefined4 g_MirrorTempPrimitive.surface_normal.A
//   undefined4 g_MirrorTempPrimitive.surface_normal.B
//   undefined4 g_MirrorTempPrimitive.surface_normal.C
//   undefined4 g_MirrorTempPrimitive.surface_normal.D
//   undefined4 DAT_02f33724
//   undefined4 DAT_02f33728
//   undefined4 DAT_02f3372c
//   undefined4 DAT_02f33730
// Function calls:
//   core_mirror.cpp_reflectAndClipPrimitive_FUN_00522310
//   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
core_mirror_cpp_renderMirroredPrimitive_FUN_005225e0(SMirror *mirror,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  g_MirrorTempPrimitive.base.count = (prim->base).count;
  g_MirrorTempPrimitive.surface_normal.A = (prim->surface_normal).A;
  g_MirrorTempPrimitive.surface_normal.B = (prim->surface_normal).B;
  g_MirrorTempPrimitive.surface_normal.C = (prim->surface_normal).C;
  g_MirrorTempPrimitive.surface_normal.D = (prim->surface_normal).D;
  _DAT_02f33724 = prim[1].base.type;
  _DAT_02f33728 = prim[1].surface_normal.B;
  _DAT_02f3372c = prim[2].base.type;
  _DAT_02f33730 = prim[2].surface_normal.B;
  uVar1 = core_mirror_cpp_reflectAndClipPrimitive_FUN_00522310(mirror,&g_MirrorTempPrimitive);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&prim[9].surface_normal.C);
  return;
}


// Assembly code:
// 005225e0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_mirror.cpp_renderMirroredPrimitive_FUN_005225e0
//   XREF to: Stack[0x8] (READ)
// 005225e4: MOV EDX,dword ptr [EAX + 0x4]
// 005225e7: MOV dword ptr [0x02f33710],EDX
//   XREF to: 02f33710 (WRITE)
// 005225ed: MOV EDX,dword ptr [EAX + 0x8]
// 005225f0: MOV dword ptr [0x02f33714],EDX
//   XREF to: 02f33714 (WRITE)
// 005225f6: MOV EDX,dword ptr [EAX + 0xc]
// 005225f9: MOV dword ptr [0x02f33718],EDX
//   XREF to: 02f33718 (WRITE)
// 005225ff: MOV EDX,dword ptr [EAX + 0x10]
// 00522602: MOV dword ptr [0x02f3371c],EDX
//   XREF to: 02f3371c (WRITE)
// 00522608: MOV EDX,dword ptr [EAX + 0x14]
// 0052260b: MOV dword ptr [0x02f33720],EDX
//   XREF to: 02f33720 (WRITE)
// 00522611: MOV EDX,dword ptr [EAX + 0x18]
// 00522614: MOV dword ptr [0x02f33724],EDX
//   XREF to: 02f33724 (WRITE)
// 0052261a: MOV EDX,dword ptr [EAX + 0x24]
// 0052261d: MOV dword ptr [0x02f33728],EDX
//   XREF to: 02f33728 (WRITE)
// 00522623: MOV EDX,dword ptr [EAX + 0x30]
// 00522626: PUSH 0x2f3370c
//   XREF to: 02f3370c (DATA)
// 0052262b: MOV dword ptr [0x02f3372c],EDX
//   XREF to: 02f3372c (WRITE)
// 00522631: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00522635: MOV EAX,dword ptr [EAX + 0x3c]
// 00522638: PUSH EDX
// 00522639: MOV [0x02f33730],EAX
//   XREF to: 02f33730 (WRITE)
// 0052263e: CALL core_mirror.cpp_reflectAndClipPrimitive_FUN_00522310
//   XREF to: 00522310 (UNCONDITIONAL_CALL)
// 00522643: ADD ESP,0x8
// 00522646: TEST EAX,EAX
// 00522648: JNZ 0x0052264b
//   XREF to: 0052264b (CONDITIONAL_JUMP)
// 0052264a: RET
// 0052264b: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0052264b
//   XREF to: Stack[0x4] (READ)
// 0052264f: ADD EAX,0xe8
// 00522654: PUSH EAX
// 00522655: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0052265b: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052265c: CALL engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
//   XREF to: 0048a820 (UNCONDITIONAL_CALL)
// 00522661: ADD ESP,0x8
// 00522664: RET
