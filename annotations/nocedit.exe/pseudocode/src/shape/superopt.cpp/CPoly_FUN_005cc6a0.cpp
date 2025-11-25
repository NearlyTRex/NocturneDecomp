// Name: shape_superopt.cpp_CPoly_FUN_005cc6a0
// Address: 005cc6a0
// Address Range: [[005cc6a0, 005cc71e]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cc6a0(CPoly * this_ptr)
// Cross-references:
//   shape_superopt.cpp_CObj_FUN_005d47b0 (005d47b0) at 005d522a [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cc6a0(CPoly *this_ptr)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  CP2D *pCVar4;
  int *in_stack_00000008;
  CObj *in_stack_0000000c;
  
  this_ptr->parent_obj = in_stack_0000000c;
  piVar3 = &this_ptr->vertex_idx_0;
  piVar2 = in_stack_00000008;
  for (iVar1 = 3; piVar2 = piVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar3 = piVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)piVar3 = (char)*piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
    piVar3 = (int *)((int)piVar3 + 1);
  }
  piVar2 = in_stack_00000008 + 4;
  pCVar4 = this_ptr->uv_coords;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)&pCVar4->x = *piVar2;
    piVar2 = piVar2 + 1;
    pCVar4 = (CP2D *)((int)&pCVar4->x + 4);
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)&pCVar4->x = (char)*piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
    pCVar4 = (CP2D *)((int)&pCVar4->x + 1);
  }
  this_ptr->field7_0x5c = in_stack_00000008[0x17];
  this_ptr->field8_0x60 = in_stack_00000008[0x18];
  *(int *)&(this_ptr->normal).x = in_stack_00000008[0x10];
  *(int *)((int)&(this_ptr->normal).x + 4) = in_stack_00000008[0x11];
  *(int *)&(this_ptr->normal).y = in_stack_00000008[0x12];
  *(int *)((int)&(this_ptr->normal).y + 4) = in_stack_00000008[0x13];
  *(int *)&(this_ptr->normal).z = in_stack_00000008[0x14];
  *(int *)((int)&(this_ptr->normal).z + 4) = in_stack_00000008[0x15];
  return;
}


// Assembly code:
// 005cc6a0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cc6a0
// 005cc6a1: PUSH ESI
// 005cc6a2: PUSH EDI
// 005cc6a3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cc6a7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cc6ab: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cc6af: MOV ECX,0xc
// 005cc6b4: LEA ESI,[EBX + 0x4]
// 005cc6b7: LEA EDI,[EDX + 0x4]
// 005cc6ba: MOV dword ptr [EDX],EAX
// 005cc6bc: PUSH EDI
// 005cc6bd: MOV EAX,ECX
// 005cc6bf: SHR ECX,0x2
// 005cc6c2: MOVSD.REP ES:EDI,ESI
// 005cc6c4: MOV CL,AL
// 005cc6c6: AND CL,0x3
// 005cc6c9: MOVSB.REP ES:EDI,ESI
// 005cc6cb: POP EDI
// 005cc6cc: MOV ECX,0x30
// 005cc6d1: LEA ESI,[EBX + 0x10]
// 005cc6d4: LEA EDI,[EDX + 0x10]
// 005cc6d7: PUSH EDI
// 005cc6d8: MOV EAX,ECX
// 005cc6da: SHR ECX,0x2
// 005cc6dd: MOVSD.REP ES:EDI,ESI
// 005cc6df: MOV CL,AL
// 005cc6e1: AND CL,0x3
// 005cc6e4: MOVSB.REP ES:EDI,ESI
// 005cc6e6: POP EDI
// 005cc6e7: MOV EAX,dword ptr [EBX + 0x5c]
// 005cc6ea: MOV dword ptr [EDX + 0x5c],EAX
// 005cc6ed: MOV EAX,dword ptr [EBX + 0x60]
// 005cc6f0: MOV dword ptr [EDX + 0x60],EAX
// 005cc6f3: LEA EAX,[EDX + 0x40]
// 005cc6f6: LEA EDX,[EBX + 0x40]
// 005cc6f9: MOV ECX,dword ptr [EDX]
// 005cc6fb: MOV dword ptr [EAX],ECX
// 005cc6fd: MOV ECX,dword ptr [EDX + 0x4]
// 005cc700: MOV dword ptr [EAX + 0x4],ECX
// 005cc703: MOV ECX,dword ptr [EDX + 0x8]
// 005cc706: MOV dword ptr [EAX + 0x8],ECX
// 005cc709: MOV ECX,dword ptr [EDX + 0xc]
// 005cc70c: MOV dword ptr [EAX + 0xc],ECX
// 005cc70f: MOV ECX,dword ptr [EDX + 0x10]
// 005cc712: MOV dword ptr [EAX + 0x10],ECX
// 005cc715: MOV ECX,dword ptr [EDX + 0x14]
// 005cc718: MOV dword ptr [EAX + 0x14],ECX
// 005cc71b: POP EDI
// 005cc71c: POP ESI
// 005cc71d: POP EBX
// 005cc71e: RET
