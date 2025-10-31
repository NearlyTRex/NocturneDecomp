// Name: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
// Address: 004566e0
// Address Range: [[004566e0, 0045674e]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0(CVector3f * * triangle_vertex_pointers, CVector3f * vertex_buffer)
// Cross-references:
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 (00457650) at 0045781a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0

#include "nocturne.h"

void __cdecl
core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
          (CVector3f **triangle_vertex_pointers,CVector3f *vertex_buffer)

{
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive local_30;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_30.base.count = 3;
  local_30.surface_normal.D = 0;
  local_30.surface_normal.C = 0;
  local_30.surface_normal.B = 0;
  local_30.surface_normal.A = 0;
  local_18 = (uint)((int)*triangle_vertex_pointers - (int)vertex_buffer) / 0xc;
  local_14 = (uint)((int)triangle_vertex_pointers[1] - (int)vertex_buffer) / 0xc;
  local_10 = (uint)((int)triangle_vertex_pointers[2] - (int)vertex_buffer) / 0xc;
  core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005708e0(g_CDemonSetPtr,&local_30,1);
  return;
}


// Assembly code:
// 004566e0: PUSH EBX
//   Label: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0
// 004566e1: PUSH ESI
// 004566e2: SUB ESP,0x28
// 004566e5: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 004566e9: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 004566ed: MOV EDX,0x3
// 004566f2: XOR ECX,ECX
// 004566f4: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004566f8: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004566fc: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00456700: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00456704: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00456708: MOV ECX,0xc
// 0045670d: MOV EAX,dword ptr [ESI]
// 0045670f: XOR EDX,EDX
// 00456711: SUB EAX,EBX
// 00456713: DIV ECX
// 00456715: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00456719: MOV EAX,dword ptr [ESI + 0x4]
// 0045671c: XOR EDX,EDX
// 0045671e: SUB EAX,EBX
// 00456720: DIV ECX
// 00456722: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00456726: MOV EAX,dword ptr [ESI + 0x8]
// 00456729: XOR EDX,EDX
// 0045672b: SUB EAX,EBX
// 0045672d: DIV ECX
// 0045672f: PUSH 0x1
// 00456731: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00456735: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00456739: PUSH EAX
// 0045673a: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00456740: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00456741: CALL core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0
//   XREF to: 005708e0 (UNCONDITIONAL_CALL)
// 00456746: ADD ESP,0xc
// 00456749: ADD ESP,0x28
// 0045674c: POP ESI
// 0045674d: POP EBX
// 0045674e: RET
