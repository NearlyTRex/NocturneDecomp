// Name: core_manpuz.cpp_FUN_00509c60
// Address: 00509c60
// Address Range: [[00509c60, 00509d12] [00509d3a, 00509d4c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509c60()
// Cross-references:
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 005091bb [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00660d8c
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02f0cb1c
//   CVector3f g_ZeroVector
// Function calls:
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_FUN_00509c60(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_00509c60(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffe4,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)&stack0xffffffdc);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)(in_stack_00000004 + 0x5e4)
            );
  if (DAT_02f0cb1c == 1) {
    shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
  }
  shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,1.0,0xfb);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 00509c60: PUSH EBX
//   Label: core_manpuz.cpp_FUN_00509c60
// 00509c61: PUSH EDI
// 00509c62: PUSH EBP
// 00509c63: SUB ESP,0x1c
// 00509c66: MOV EBX,dword ptr [ESP + 0x2c]
// 00509c6a: MOV EAX,dword ptr [ESP + 0x30]
// 00509c6e: MOV dword ptr [ESP + 0x18],EAX
// 00509c72: XOR EDX,EDX
// 00509c74: FILD dword ptr [ESP + 0x18]
// 00509c78: FMUL float ptr [0x00660d8c]
//   XREF to: 00660d8c (READ)
// 00509c7e: MOV dword ptr [ESP + 0xc],EDX
// 00509c82: MOV dword ptr [ESP + 0x14],EDX
// 00509c86: FSTP float ptr [ESP + 0x10]
// 00509c8a: MOV EAX,dword ptr [EBX + 0x150c]
// 00509c90: PUSH EDX
// 00509c91: MOV dword ptr [ESP + 0xc],EAX
// 00509c95: LEA EAX,[ESP + 0x10]
// 00509c99: PUSH EAX
// 00509c9a: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509ca0: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00509ca1: MOV dword ptr [ESP + 0xc],EDX
// 00509ca5: MOV dword ptr [ESP + 0x10],EDX
// 00509ca9: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00509cae: ADD ESP,0xc
// 00509cb1: MOV EAX,ESP
// 00509cb3: PUSH EAX
// 00509cb4: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00509cb9: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00509cbe: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00509cbf: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00509cc4: ADD ESP,0xc
// 00509cc7: LEA EAX,[EBX + 0x5e4]
// 00509ccd: PUSH EAX
// 00509cce: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00509cd3: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509cd9: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00509cda: MOV EBX,0xfb
// 00509cdf: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00509ce4: MOV ECX,dword ptr [0x02f0cb1c]
//   XREF to: 02f0cb1c (READ)
// 00509cea: ADD ESP,0xc
// 00509ced: CMP ECX,0x1
// 00509cf0: JZ 0x00509d3a
//   XREF to: 00509d3a (CONDITIONAL_JUMP)
// 00509cf2: PUSH EBX
//   Label: LAB_00509cf2
// 00509cf3: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00509cf9: PUSH 0x3f800000
// 00509cfe: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00509cff: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 00509d04: ADD ESP,0xc
// 00509d07: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509d0d: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00509d0e: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00509d3a: PUSH ESI
//   Label: LAB_00509d3a
// 00509d3b: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00509d41: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00509d42: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 00509d47: ADD ESP,0x4
// 00509d4a: POP ESI
// 00509d4b: JMP 0x00509cf2
//   XREF to: 00509cf2 (UNCONDITIONAL_JUMP)
