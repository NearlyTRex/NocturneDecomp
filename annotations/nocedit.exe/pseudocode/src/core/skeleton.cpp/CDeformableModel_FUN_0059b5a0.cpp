// Name: core_skeleton.cpp_CDeformableModel_FUN_0059b5a0
// Address: 0059b5a0
// Address Range: [[0059b5a0, 0059b635]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059b5a0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0 (005a03b0) at 005a03d0 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059b5a0(undefined4 param_1,
   undefined4 param_2) */

void core_skeleton_cpp_CDeformableModel_FUN_0059b5a0(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar5 = 0;
  for (iVar4 = 0; iVar3 = in_stack_00000004 + in_stack_00000008 * 4, iVar4 < *(int *)(iVar3 + 0x54);
      iVar4 = iVar4 + 1) {
    iVar2 = *(int *)(iVar3 + 0x7c);
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
              (g_CDemonRendererPtr,(uint)*(ushort *)(iVar5 + iVar2),
               (uint)*(ushort *)(iVar5 + 2 + iVar2));
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
              (g_CDemonRendererPtr,(uint)*(ushort *)(iVar5 + 2 + iVar2),
               (uint)*(ushort *)(iVar5 + 4 + iVar2));
    puVar1 = (ushort *)(iVar5 + iVar2);
    iVar3 = iVar5 + 4;
    iVar5 = iVar5 + 0x12;
    engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
              (g_CDemonRendererPtr,(uint)*(ushort *)(iVar3 + iVar2),(uint)*puVar1);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}


// Assembly code:
// 0059b5a0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059b5a0
// 0059b5a1: PUSH ESI
// 0059b5a2: PUSH EDI
// 0059b5a3: PUSH EBP
// 0059b5a4: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059b5a8: XOR EDI,EDI
// 0059b5aa: XOR ESI,ESI
// 0059b5ac: SHL EBP,0x2
// 0059b5af: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_0059b5af
//   XREF to: Stack[0x4] (READ)
// 0059b5b3: ADD EBX,EBP
// 0059b5b5: CMP ESI,dword ptr [EBX + 0x54]
// 0059b5b8: JL 0x0059b5d0
//   XREF to: 0059b5d0 (CONDITIONAL_JUMP)
// 0059b5ba: PUSH 0x1
// 0059b5bc: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b5c2: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0059b5c3: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0059b5c8: ADD ESP,0x8
// 0059b5cb: POP EBP
// 0059b5cc: POP EDI
// 0059b5cd: POP ESI
// 0059b5ce: POP EBX
// 0059b5cf: RET
// 0059b5d0: MOV EBX,dword ptr [EBX + 0x7c]
//   Label: LAB_0059b5d0
// 0059b5d3: XOR EAX,EAX
// 0059b5d5: MOV AX,word ptr [EDI + EBX*0x1 + 0x2]
// 0059b5da: PUSH EAX
// 0059b5db: XOR EAX,EAX
// 0059b5dd: MOV AX,word ptr [EDI + EBX*0x1]
// 0059b5e1: PUSH EAX
// 0059b5e2: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b5e8: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0059b5e9: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 0059b5ee: XOR EAX,EAX
// 0059b5f0: ADD ESP,0xc
// 0059b5f3: MOV AX,word ptr [EDI + EBX*0x1 + 0x4]
// 0059b5f8: PUSH EAX
// 0059b5f9: XOR EAX,EAX
// 0059b5fb: MOV AX,word ptr [EDI + EBX*0x1 + 0x2]
// 0059b600: PUSH EAX
// 0059b601: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b606: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0059b607: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 0059b60c: XOR EAX,EAX
// 0059b60e: ADD ESP,0xc
// 0059b611: MOV AX,word ptr [EDI + EBX*0x1]
// 0059b615: PUSH EAX
// 0059b616: XOR EAX,EAX
// 0059b618: MOV AX,word ptr [EDI + EBX*0x1 + 0x4]
// 0059b61d: PUSH EAX
// 0059b61e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b624: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0059b625: ADD EDI,0x12
// 0059b628: INC ESI
// 0059b629: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 0059b62e: ADD ESP,0xc
// 0059b631: JMP 0x0059b5af
//   XREF to: 0059b5af (UNCONDITIONAL_JUMP)
