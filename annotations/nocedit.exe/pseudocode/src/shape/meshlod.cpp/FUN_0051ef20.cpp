// Name: shape_meshlod.cpp_FUN_0051ef20
// Address: 0051ef20
// Address Range: [[0051ef20, 0051efb8]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_FUN_0051ef20(SLodFace * this_ptr, SLodFace * other)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_unknown.c_FUN_00600bc2

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_FUN_0051ef20(SLodFace *this_ptr,SLodFace *other)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  *(undefined4 *)this_ptr->field0_0x0 = *(undefined4 *)other->field0_0x0;
  *(undefined4 *)(this_ptr->field0_0x0 + 4) = *(undefined4 *)(other->field0_0x0 + 4);
  *(undefined4 *)(this_ptr->field0_0x0 + 8) = *(undefined4 *)(other->field0_0x0 + 8);
  *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = *(undefined4 *)(other->field0_0x0 + 0xc);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = *(undefined4 *)(other->field0_0x0 + 0x10);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = *(undefined4 *)(other->field0_0x0 + 0x14);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = *(undefined4 *)(other->field0_0x0 + 0x18);
  pcVar2 = other->field0_0x0 + 0x1c;
  pcVar4 = this_ptr->field0_0x0 + 0x1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *(undefined4 *)(this_ptr->field0_0x0 + 0x34) = *(undefined4 *)(other->field0_0x0 + 0x34);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x38) = *(undefined4 *)(other->field0_0x0 + 0x38);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x3c) = *(undefined4 *)(other->field0_0x0 + 0x3c);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x40) = *(undefined4 *)(other->field0_0x0 + 0x40);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x44) = *(undefined4 *)(other->field0_0x0 + 0x44);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x48) = *(undefined4 *)(other->field0_0x0 + 0x48);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x4c) = *(undefined4 *)(other->field0_0x0 + 0x4c);
  *(undefined4 *)(this_ptr->field0_0x0 + 0x50) = *(undefined4 *)(other->field0_0x0 + 0x50);
  iVar1 = crt_unknown_c_FUN_00600bc2();
  puVar5 = (undefined4 *)(iVar1 + 0x28 + (uint)bVar6 * -8);
  puVar3 = (undefined4 *)((int)other + (uint)bVar6 * -8 + 0x7c);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(other->field0_0x0 + 0x78);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(other->field0_0x0 + 0x84);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(other->field0_0x0 + 0x88);
  return;
}


// Assembly code:
// 0051ef20: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051ef20
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
// 0051ef8c: CALL crt_unknown.c_FUN_00600bc2
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
