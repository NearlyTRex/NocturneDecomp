// Name: shape_design.c_applyVertexCentering_FUN_004680f0
// Address: 004680f0
// Address Range: [[004680f0, 0046819a]]
// Convention: __cdecl
// Signature: void shape_design.c_applyVertexCentering_FUN_004680f0(SMRGLHeaderExtended * target_model, CVector3i * reference_vertex_list, int reference_vertex_id)
// Cross-references:
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 00468257 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_design.c_findVertexListInModel_FUN_00468000
//   shape_design.c_getVertexCountFromModel_FUN_00468080

#include "nocturne.h"

void __cdecl
shape_design_c_applyVertexCentering_FUN_004680f0
          (SMRGLHeaderExtended *target_model,CVector3i *reference_vertex_list,
          int reference_vertex_id)

{
  BADSPACEBASE *in_ESP;
  undefined4 *puVar1;
  byte bVar2;
  int aiStackY_1010 [1017];
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CVector3i *local_14;
  
  bVar2 = 0;
  local_14 = shape_design_c_findVertexListInModel_FUN_00468000(target_model);
  local_18 = shape_design_c_getVertexCountFromModel_FUN_00468080(target_model);
  puVar1 = (undefined4 *)((int)(local_14 + reference_vertex_id) + (uint)bVar2 * -8 + 4);
  iVar3 = local_14[reference_vertex_id].x;
  *(undefined4 *)((int)&stack0xffffffdc + (uint)bVar2 * -8) = *puVar1;
  *(undefined4 *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       puVar1[(uint)bVar2 * -2 + 1];
  for (local_1c = 0; local_1c < local_18; local_1c = local_1c + 1) {
    local_14[local_1c].x = (local_14[local_1c].x - iVar3) + reference_vertex_list->x;
    local_14[local_1c].y = (local_14[local_1c].y - local_24) + reference_vertex_list->y;
    local_14[local_1c].z = (local_14[local_1c].z - local_20) + reference_vertex_list->z;
  }
  return;
}


// Assembly code:
// 004680f0: PUSH EBX
//   Label: shape_design.c_applyVertexCentering_FUN_004680f0
// 004680f1: PUSH ESI
// 004680f2: PUSH EDI
// 004680f3: PUSH EBP
// 004680f4: MOV EBP,ESP
// 004680f6: SUB ESP,0x18
// 004680fc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004680ff: PUSH EAX
// 00468100: CALL shape_design.c_findVertexListInModel_FUN_00468000
//   XREF to: 00468000 (UNCONDITIONAL_CALL)
// 00468105: ADD ESP,0x4
// 00468108: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046810b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046810e: PUSH EAX
// 0046810f: CALL shape_design.c_getVertexCountFromModel_FUN_00468080
//   XREF to: 00468080 (UNCONDITIONAL_CALL)
// 00468114: ADD ESP,0x4
// 00468117: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046811a: IMUL ESI,dword ptr [EBP + 0x1c],0xc
//   XREF to: Stack[0xc] (READ)
// 0046811e: ADD ESI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468121: LEA EDI,[EBP + -0x18]
//   XREF to: Stack[-0x28] (DATA)
// 00468124: MOVSD ES:EDI,ESI
// 00468125: MOVSD ES:EDI,ESI
// 00468126: MOVSD ES:EDI,ESI
// 00468127: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 0046812e: JMP 0x00468136
//   XREF to: 00468136 (UNCONDITIONAL_JUMP)
// 00468130: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00468130
//   XREF to: Stack[-0x1c] (READ)
// 00468133: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00468136: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00468136
//   XREF to: Stack[-0x1c] (READ)
// 00468139: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046813c: JGE 0x00468194
//   XREF to: 00468194 (CONDITIONAL_JUMP)
// 0046813e: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00468142: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468145: MOV EDX,dword ptr [EAX]
// 00468147: SUB EDX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046814a: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046814d: ADD EDX,dword ptr [EAX]
// 0046814f: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00468153: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468156: MOV dword ptr [EAX],EDX
// 00468158: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 0046815c: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046815f: MOV EDX,dword ptr [EAX + 0x4]
// 00468162: SUB EDX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00468165: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468168: ADD EDX,dword ptr [EAX + 0x4]
// 0046816b: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 0046816f: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468172: MOV dword ptr [EAX + 0x4],EDX
// 00468175: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00468179: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046817c: MOV EDX,dword ptr [EAX + 0x8]
// 0046817f: SUB EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468182: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468185: ADD EDX,dword ptr [EAX + 0x8]
// 00468188: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 0046818c: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046818f: MOV dword ptr [EAX + 0x8],EDX
// 00468192: JMP 0x00468130
//   XREF to: 00468130 (UNCONDITIONAL_JUMP)
// 00468194: MOV ESP,EBP
//   Label: LAB_00468194
// 00468196: POP EBP
// 00468197: POP EDI
// 00468198: POP ESI
// 00468199: POP EBX
// 0046819a: RET
