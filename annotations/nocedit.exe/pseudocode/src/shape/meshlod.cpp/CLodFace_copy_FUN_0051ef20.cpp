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
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_ptr->vertex_indices[0] = other->vertex_indices[0];
  this_ptr->vertex_indices[1] = other->vertex_indices[1];
  this_ptr->vertex_indices[2] = other->vertex_indices[2];
  this_ptr->field1_0xc = other->field1_0xc;
  this_ptr->field2_0x10 = other->field2_0x10;
  this_ptr->field3_0x14 = other->field3_0x14;
  this_ptr->field4_0x18 = other->field4_0x18;
  pcVar3 = other->field5_0x1c;
  pcVar5 = this_ptr->field5_0x1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  this_ptr->field6_0x34 = other->field6_0x34;
  this_ptr->field7_0x38 = other->field7_0x38;
  this_ptr->field8_0x3c = other->field8_0x3c;
  this_ptr->field9_0x40 = other->field9_0x40;
  this_ptr->field10_0x44 = other->field10_0x44;
  this_ptr->field11_0x48 = other->field11_0x48;
  this_ptr->field12_0x4c = other->field12_0x4c;
  this_ptr->field13_0x50 = other->field13_0x50;
  pvVar1 = crt_memory_c_copyObjectArray_FUN_00600bc2
                     (this_ptr->vertices,other->vertices,3,&g_CVectorTypeInfo);
  puVar6 = (undefined4 *)((int)pvVar1 + (uint)bVar7 * -8 + 0x28);
  puVar4 = (undefined4 *)((int)other + (uint)bVar7 * -8 + 0x7c);
  *(float *)((int)pvVar1 + 0x24) = (other->field15_0x78).x;
  *puVar6 = *puVar4;
  puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
  *(int *)((int)pvVar1 + 0x30) = other->field16_0x84;
  *(int *)((int)pvVar1 + 0x34) = other->field17_0x88;
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
