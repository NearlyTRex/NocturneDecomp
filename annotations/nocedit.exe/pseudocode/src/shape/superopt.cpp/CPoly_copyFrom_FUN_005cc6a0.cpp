// Name: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
// Address: 005cc6a0
// Address Range: [[005cc6a0, 005cc71e]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly * this_ptr, CPoly * source, CObj * parent_obj)
// Cross-references:
//   shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0 (005d47b0) at 005d522a [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj)

{
  int iVar1;
  CPoly *pCVar2;
  CVector2d *pCVar3;
  int *piVar4;
  CVector2d *pCVar5;
  
  this_ptr->parent_obj = parent_obj;
  piVar4 = &this_ptr->vertex_idx_0;
  pCVar2 = source;
  for (iVar1 = 3; pCVar2 = (CPoly *)&pCVar2->vertex_idx_0, iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *(int *)pCVar2;
    piVar4 = piVar4 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)piVar4 = (char)*(int *)pCVar2;
    pCVar2 = (CPoly *)((int)pCVar2 + 1);
    piVar4 = (int *)((int)piVar4 + 1);
  }
  pCVar3 = source->uv_coords;
  pCVar5 = this_ptr->uv_coords;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pCVar5->x = *(undefined4 *)&pCVar3->x;
    pCVar3 = (CVector2d *)((int)&pCVar3->x + 4);
    pCVar5 = (CVector2d *)((int)&pCVar5->x + 4);
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)&pCVar5->x = *(undefined1 *)&pCVar3->x;
    pCVar3 = (CVector2d *)((int)&pCVar3->x + 1);
    pCVar5 = (CVector2d *)((int)&pCVar5->x + 1);
  }
  this_ptr->material_id = source->material_id;
  this_ptr->flags = source->flags;
  *(undefined4 *)&(this_ptr->normal).x = *(undefined4 *)&(source->normal).x;
  *(undefined4 *)((int)&(this_ptr->normal).x + 4) = *(undefined4 *)((int)&(source->normal).x + 4);
  *(undefined4 *)&(this_ptr->normal).y = *(undefined4 *)&(source->normal).y;
  *(undefined4 *)((int)&(this_ptr->normal).y + 4) = *(undefined4 *)((int)&(source->normal).y + 4);
  *(undefined4 *)&(this_ptr->normal).z = *(undefined4 *)&(source->normal).z;
  *(undefined4 *)((int)&(this_ptr->normal).z + 4) = *(undefined4 *)((int)&(source->normal).z + 4);
  return;
}


// Assembly code:
// 005cc6a0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
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
