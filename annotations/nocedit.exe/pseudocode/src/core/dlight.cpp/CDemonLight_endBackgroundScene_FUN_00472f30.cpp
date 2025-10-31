// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
// Address: 00472f30
// Address Range: [[00472f30, 00472f7d]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b609 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BackgroundSceneNestingCount
//   void*[1024] g_SavedScreenBufferArray
//   undefined4 DAT_026a5818
//   undefined4 DAT_026a5819
//   CDemonRenderer g_CDemonRendererInstance
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   undefined4 g_ScreenBufferArray[1]+1
// Function calls:
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + -1;
  if (g_BackgroundSceneNestingCount != 0) {
    return;
  }
  g_BackgroundSceneNestingCount = 0;
  ppvVar3 = g_SavedScreenBufferArray;
  ppvVar4 = g_ScreenBufferArray;
  for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *ppvVar4 = *ppvVar3;
    ppvVar3 = ppvVar3 + 1;
    ppvVar4 = ppvVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)ppvVar4 = *(undefined1 *)ppvVar3;
    ppvVar3 = (void **)((int)ppvVar3 + 1);
    ppvVar4 = (void **)((int)ppvVar4 + 1);
  }
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 00472f30: MOV EDX,dword ptr [0x026a5810]
//   Label: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
//   XREF to: 026a5810 (READ)
// 00472f36: DEC EDX
// 00472f37: MOV dword ptr [0x026a5810],EDX
//   XREF to: 026a5810 (WRITE)
// 00472f3d: JZ 0x00472f40
//   XREF to: 00472f40 (CONDITIONAL_JUMP)
// 00472f3f: RET
// 00472f40: PUSH EDI
//   Label: LAB_00472f40
// 00472f41: PUSH ESI
// 00472f42: PUSH EBX
// 00472f43: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00472f47: MOV ESI,0x26a5814
//   XREF to: 026a5814 (DATA)
// 00472f4c: MOV ECX,dword ptr [ECX + 0x1cc4]
// 00472f52: MOV EDI,0x2cf6a9c
//   XREF to: 02cf6a9c (DATA)
// 00472f57: SHL ECX,0x2
// 00472f5a: PUSH EDI
//   XREF to: 02cf6a9c (DATA)
// 00472f5b: MOV EAX,ECX
// 00472f5d: SHR ECX,0x2
// 00472f60: MOVSD.REP ES:EDI,ESI
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
//   XREF to: 026a5814 (READ)
//   XREF to: 026a5818 (READ)
// 00472f62: MOV CL,AL
// 00472f64: AND CL,0x3
// 00472f67: MOVSB.REP ES:EDI,ESI
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
//   XREF to: 02cf6aa1 (WRITE)
//   XREF to: 026a5814 (READ)
//   XREF to: 026a5818 (READ)
//   XREF to: 026a5819 (READ)
// 00472f69: POP EDI
// 00472f6a: PUSH EDX
// 00472f6b: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00472f71: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00472f72: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 00472f77: ADD ESP,0x8
// 00472f7a: POP EBX
// 00472f7b: POP ESI
// 00472f7c: POP EDI
// 00472f7d: RET
