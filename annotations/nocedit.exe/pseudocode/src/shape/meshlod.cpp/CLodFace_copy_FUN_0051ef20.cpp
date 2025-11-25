// Name: shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20
// Address: 0051ef20
// Address Range: [[0051ef20, 0051efb8]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20(CLodFace * this_ptr, CLodFace * other)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_copyObjectArray_FUN_00600bc2

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20(CLodFace *this_ptr,CLodFace *other)

{
  void *pvVar1;
  int iVar2;
  float (*pafVar3) [2];
  undefined4 *puVar4;
  float (*pafVar5) [2];
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_ptr->attribute_indices[0] = other->attribute_indices[0];
  this_ptr->attribute_indices[1] = other->attribute_indices[1];
  this_ptr->attribute_indices[2] = other->attribute_indices[2];
  this_ptr->submesh_id = other->submesh_id;
  this_ptr->vertex_idx_0 = other->vertex_idx_0;
  this_ptr->vertex_idx_1 = other->vertex_idx_1;
  this_ptr->vertex_idx_2 = other->vertex_idx_2;
  pafVar3 = other->uv_coords;
  pafVar5 = this_ptr->uv_coords;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (*pafVar5)[0] = (*pafVar3)[0];
    pafVar3 = (float (*) [2])(*pafVar3 + 1);
    pafVar5 = (float (*) [2])(*pafVar5 + 1);
  }
  this_ptr->edge_idx_0 = other->edge_idx_0;
  this_ptr->edge_idx_1 = other->edge_idx_1;
  this_ptr->edge_idx_2 = other->edge_idx_2;
  this_ptr->processed_flag = other->processed_flag;
  (this_ptr->normal).x = (other->normal).x;
  (this_ptr->normal).y = (other->normal).y;
  (this_ptr->normal).z = (other->normal).z;
  this_ptr->plane_distance = other->plane_distance;
  pvVar1 = crt_memory_c_copyObjectArray_FUN_00600bc2
                     (this_ptr->edge_perpendiculars,other->edge_perpendiculars,3,&g_CVectorTypeInfo)
  ;
  puVar6 = (undefined4 *)((int)pvVar1 + (uint)bVar7 * -8 + 0x28);
  puVar4 = (undefined4 *)((int)other + (uint)bVar7 * -8 + 0x7c);
  *(float *)((int)pvVar1 + 0x24) = other->edge_dot_products[0];
  *puVar6 = *puVar4;
  puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
  *(int *)((int)pvVar1 + 0x30) = other->visited_stamp;
  *(int *)((int)pvVar1 + 0x34) = other->affected_by_edge_stamp;
  return;
}


// Assembly code:
// 0051ef20: PUSH EBX
//   Label: shape_meshlod.cpp_CLodFace_copy_FUN_0051ef20
// 0051ef21: PUSH ESI
// 0051ef22: PUSH EDI
// 0051ef23: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0051ef27: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0051ef2b: MOV EDI,EAX
// 0051ef2d: MOV ESI,EBX
// 0051ef2f: MOVSD ES:EDI,ESI
// 0051ef30: MOVSD ES:EDI,ESI
// 0051ef31: MOVSD ES:EDI,ESI
// 0051ef32: MOVSD ES:EDI,ESI
// 0051ef33: LEA EDI,[EAX + 0x10]
// 0051ef36: LEA ESI,[EBX + 0x10]
// 0051ef39: MOVSD ES:EDI,ESI
// 0051ef3a: MOVSD ES:EDI,ESI
// 0051ef3b: MOVSD ES:EDI,ESI
// 0051ef3c: MOV ECX,0x6
// 0051ef41: LEA EDI,[EAX + 0x1c]
// 0051ef44: LEA ESI,[EBX + 0x1c]
// 0051ef47: MOVSD.REP ES:EDI,ESI
// 0051ef49: LEA EDI,[EAX + 0x34]
// 0051ef4c: LEA ESI,[EBX + 0x34]
// 0051ef4f: MOVSD ES:EDI,ESI
// 0051ef50: MOVSD ES:EDI,ESI
// 0051ef51: MOVSD ES:EDI,ESI
// 0051ef52: MOV EDX,dword ptr [EBX + 0x40]
// 0051ef55: MOV dword ptr [EAX + 0x40],EDX
// 0051ef58: LEA EDX,[EAX + 0x44]
// 0051ef5b: LEA EAX,[EBX + 0x44]
// 0051ef5e: MOV ECX,dword ptr [EAX]
// 0051ef60: MOV dword ptr [EDX],ECX
// 0051ef62: LEA ECX,[EAX + 0x4]
// 0051ef65: ADD EDX,0x4
// 0051ef68: MOV ECX,dword ptr [ECX]
// 0051ef6a: MOV dword ptr [EDX],ECX
// 0051ef6c: ADD EDX,0x4
// 0051ef6f: MOV EAX,dword ptr [EAX + 0x8]
// 0051ef72: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0051ef77: MOV dword ptr [EDX],EAX
// 0051ef79: LEA EAX,[EDX + -0x4c]
// 0051ef7c: PUSH 0x3
// 0051ef7e: LEA EDX,[EBX + 0x54]
// 0051ef81: ADD EAX,0x54
// 0051ef84: PUSH EDX
// 0051ef85: FLD float ptr [EBX + 0x50]
// 0051ef88: PUSH EAX
// 0051ef89: FSTP float ptr [EAX + -0x4]
// 0051ef8c: CALL crt_memory.c_copyObjectArray_FUN_00600bc2
//   XREF to: 00600bc2 (UNCONDITIONAL_CALL)
// 0051ef91: LEA EDI,[EAX + 0x24]
// 0051ef94: LEA ESI,[EBX + 0x78]
// 0051ef97: MOVSD ES:EDI,ESI
// 0051ef98: MOVSD ES:EDI,ESI
// 0051ef99: MOVSD ES:EDI,ESI
// 0051ef9a: MOV EDX,dword ptr [EBX + 0x84]
// 0051efa0: MOV dword ptr [EAX + 0x30],EDX
// 0051efa3: SUB EAX,0x54
// 0051efa6: MOV EDX,dword ptr [EBX + 0x88]
// 0051efac: ADD ESP,0x10
// 0051efaf: MOV dword ptr [EAX + 0x88],EDX
// 0051efb5: POP EDI
// 0051efb6: POP ESI
// 0051efb7: POP EBX
// 0051efb8: RET
