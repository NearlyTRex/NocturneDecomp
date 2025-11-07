// Name: shape_meshlod.cpp_CLodMesh_FUN_0051a8c0
// Address: 0051a8c0
// Address Range: [[0051a8c0, 0051a97f]]
// Convention: __cdecl
// Signature: CLodMesh * shape_meshlod.cpp_CLodMesh_FUN_0051a8c0(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d68d [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00516f50 (00516f50) at 00516fa0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_copy_FUN_00515860 (00515860) at 00515874 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b940 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0

#include "nocturne.h"

CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_FUN_0051a8c0(CLodMesh *this_ptr)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  SLodVert *pSVar6;
  SLodTriangle *pSVar7;
  undefined4 *puVar8;
  byte bVar9;
  int *in_stack_00000008;
  
  bVar9 = 0;
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (this_ptr,*in_stack_00000008,in_stack_00000008[2],in_stack_00000008[4]);
  pcVar3 = (char *)in_stack_00000008[1];
  pSVar6 = this_ptr->vertex_data;
  for (uVar1 = (uint)(this_ptr->vertex_count * 0x4c4) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pSVar6->field0_0x0 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
    pSVar6 = (SLodVert *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar6->field0_0x0[0] = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
    pSVar6 = (SLodVert *)((int)pSVar6 + (uint)bVar9 * -2 + 1);
  }
  pcVar3 = (char *)in_stack_00000008[3];
  pSVar7 = this_ptr->triangle_data;
  for (uVar1 = this_ptr->tri_count * 0x23 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pSVar7->field0_0x0 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
    pSVar7 = (SLodTriangle *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar7->field0_0x0[0] = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
    pSVar7 = (SLodTriangle *)((int)pSVar7 + (uint)bVar9 * -2 + 1);
  }
  puVar4 = (undefined4 *)in_stack_00000008[5];
  puVar8 = (undefined4 *)this_ptr->submesh_data;
  for (uVar1 = (uint)(this_ptr->submesh_count * 0x48) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar9 * -2 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  this_ptr->field6_0x18 = in_stack_00000008[6];
  this_ptr->field7_0x1c = in_stack_00000008[7];
  this_ptr->field8_0x20 = in_stack_00000008[8];
  piVar5 = in_stack_00000008 + 9;
  pcVar3 = this_ptr->field9_0x24;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(int *)pcVar3 = *piVar5;
    piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar9 * -8 + 4;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pcVar3 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + (uint)bVar9 * -2 + 1);
    pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
  }
  return this_ptr;
}


// Assembly code:
// 0051a8c0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_0051a8c0
// 0051a8c1: PUSH ESI
// 0051a8c2: PUSH EDI
// 0051a8c3: PUSH EBP
// 0051a8c4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051a8c8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051a8cc: MOV EDX,dword ptr [EBP + 0x10]
// 0051a8cf: PUSH EDX
// 0051a8d0: MOV ECX,dword ptr [EBP + 0x8]
// 0051a8d3: PUSH ECX
// 0051a8d4: MOV ESI,dword ptr [EBP]
// 0051a8d7: PUSH ESI
// 0051a8d8: PUSH EBX
// 0051a8d9: CALL shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
//   XREF to: 00515ac0 (UNCONDITIONAL_CALL)
// 0051a8de: IMUL ECX,dword ptr [EBX],0x4c4
// 0051a8e4: ADD ESP,0x10
// 0051a8e7: MOV ESI,dword ptr [EBP + 0x4]
// 0051a8ea: MOV EDI,dword ptr [EBX + 0x4]
// 0051a8ed: PUSH EDI
// 0051a8ee: MOV EAX,ECX
// 0051a8f0: SHR ECX,0x2
// 0051a8f3: MOVSD.REP ES:EDI,ESI
// 0051a8f5: MOV CL,AL
// 0051a8f7: AND CL,0x3
// 0051a8fa: MOVSB.REP ES:EDI,ESI
// 0051a8fc: POP EDI
// 0051a8fd: MOV EDX,dword ptr [EBX + 0x8]
// 0051a900: LEA ECX,[EDX*0x8 + 0x0]
// 0051a907: ADD ECX,EDX
// 0051a909: SHL ECX,0x2
// 0051a90c: MOV ESI,dword ptr [EBP + 0xc]
// 0051a90f: SUB ECX,EDX
// 0051a911: MOV EDI,dword ptr [EBX + 0xc]
// 0051a914: SHL ECX,0x2
// 0051a917: PUSH EDI
// 0051a918: MOV EAX,ECX
// 0051a91a: SHR ECX,0x2
// 0051a91d: MOVSD.REP ES:EDI,ESI
// 0051a91f: MOV CL,AL
// 0051a921: AND CL,0x3
// 0051a924: MOVSB.REP ES:EDI,ESI
// 0051a926: POP EDI
// 0051a927: MOV EDX,dword ptr [EBX + 0x10]
// 0051a92a: LEA ECX,[EDX*0x8 + 0x0]
// 0051a931: MOV ESI,dword ptr [EBP + 0x14]
// 0051a934: ADD ECX,EDX
// 0051a936: MOV EDI,dword ptr [EBX + 0x14]
// 0051a939: SHL ECX,0x3
// 0051a93c: PUSH EDI
// 0051a93d: MOV EAX,ECX
// 0051a93f: SHR ECX,0x2
// 0051a942: MOVSD.REP ES:EDI,ESI
// 0051a944: MOV CL,AL
// 0051a946: AND CL,0x3
// 0051a949: MOVSB.REP ES:EDI,ESI
// 0051a94b: POP EDI
// 0051a94c: MOV EAX,dword ptr [EBP + 0x18]
// 0051a94f: MOV dword ptr [EBX + 0x18],EAX
// 0051a952: MOV EAX,dword ptr [EBP + 0x1c]
// 0051a955: MOV ECX,0x10
// 0051a95a: MOV dword ptr [EBX + 0x1c],EAX
// 0051a95d: LEA ESI,[EBP + 0x24]
// 0051a960: MOV EAX,dword ptr [EBP + 0x20]
// 0051a963: LEA EDI,[EBX + 0x24]
// 0051a966: MOV dword ptr [EBX + 0x20],EAX
// 0051a969: PUSH EDI
// 0051a96a: MOV EAX,ECX
// 0051a96c: SHR ECX,0x2
// 0051a96f: MOVSD.REP ES:EDI,ESI
// 0051a971: MOV CL,AL
// 0051a973: AND CL,0x3
// 0051a976: MOVSB.REP ES:EDI,ESI
// 0051a978: POP EDI
// 0051a979: MOV EAX,EBX
// 0051a97b: POP EBP
// 0051a97c: POP EDI
// 0051a97d: POP ESI
// 0051a97e: POP EBX
// 0051a97f: RET
