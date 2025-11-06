// Name: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60
// Address: 0059dd60
// Address Range: [[0059dd60, 0059dda0]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(CDeformableModel * this_ptr)
// Cross-references:
//   core_skeleton.cpp_getMemoryStats_FUN_005a1ed0 (005a1ed0) at 005a1f24 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(CDeformableModel *this_ptr)

{
  int iVar1;
  CDeformableModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->num_lods) {
    do {
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + (pCVar2->tri_count[0] + pCVar2->cap_tri_count[0]) * 0x16 +
              pCVar2->cap_tri_count[0] * 4 + pCVar2->vertex_count[0] * 0x34;
      pCVar2 = (CDeformableModel *)pCVar2->lod_info;
    } while (iVar3 < this_ptr->num_lods);
  }
  return iVar1;
}


// Assembly code:
// 0059dd60: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60
// 0059dd61: PUSH ESI
// 0059dd62: PUSH EBP
// 0059dd63: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0059dd67: MOV EDX,dword ptr [ESI]
// 0059dd69: XOR EBX,EBX
// 0059dd6b: XOR EAX,EAX
// 0059dd6d: TEST EDX,EDX
// 0059dd6f: JLE 0x0059dd9d
//   XREF to: 0059dd9d (CONDITIONAL_JUMP)
// 0059dd71: PUSH EDI
// 0059dd72: MOV EDX,ESI
// 0059dd74: MOV ECX,dword ptr [EDX + 0x54]
//   Label: LAB_0059dd74
// 0059dd77: MOV EDI,dword ptr [EDX + 0x68]
// 0059dd7a: ADD ECX,EDI
// 0059dd7c: IMUL ECX,ECX,0x16
// 0059dd7f: ADD EAX,ECX
// 0059dd81: LEA ECX,[EDI*0x4 + 0x0]
// 0059dd88: MOV EBP,dword ptr [EDX + 0x2c]
// 0059dd8b: ADD EAX,ECX
// 0059dd8d: IMUL ECX,EBP,0x34
// 0059dd90: INC EBX
// 0059dd91: ADD EAX,ECX
// 0059dd93: MOV ECX,dword ptr [ESI]
// 0059dd95: ADD EDX,0x4
// 0059dd98: CMP EBX,ECX
// 0059dd9a: JL 0x0059dd74
//   XREF to: 0059dd74 (CONDITIONAL_JUMP)
// 0059dd9c: POP EDI
// 0059dd9d: POP EBP
//   Label: LAB_0059dd9d
// 0059dd9e: POP ESI
// 0059dd9f: POP EBX
// 0059dda0: RET
