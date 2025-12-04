// Name: shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350
// Address: 005cd350
// Address Range: [[005cd350, 005cd3be]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350(CPoly * this_ptr, uint flag_to_set, uint attrib_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350
          (CPoly *this_ptr,uint flag_to_set,uint attrib_mask)

{
  CVert *pCVar1;
  
  pCVar1 = this_ptr->parent_obj->vertex_data;
  if ((pCVar1[this_ptr->vertex_idx_0].attrib_flags & attrib_mask) == attrib_mask) {
    pCVar1[this_ptr->vertex_idx_0].state_flags =
         pCVar1[this_ptr->vertex_idx_0].state_flags | flag_to_set;
  }
  if ((pCVar1[this_ptr->vertex_idx_1].attrib_flags & attrib_mask) == attrib_mask) {
    pCVar1[this_ptr->vertex_idx_1].state_flags =
         pCVar1[this_ptr->vertex_idx_1].state_flags | flag_to_set;
  }
  if ((pCVar1[this_ptr->vertex_idx_2].attrib_flags & attrib_mask) != attrib_mask) {
    return;
  }
  pCVar1[this_ptr->vertex_idx_2].state_flags =
       pCVar1[this_ptr->vertex_idx_2].state_flags | flag_to_set;
  return;
}


// Assembly code:
// 005cd350: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350
// 005cd351: PUSH ESI
// 005cd352: PUSH EDI
// 005cd353: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cd357: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cd35b: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005cd35f: MOV EAX,dword ptr [ESI + 0x4]
// 005cd362: SHL EAX,0x3
// 005cd365: MOV EBX,dword ptr [ESI]
// 005cd367: MOV ECX,EAX
// 005cd369: SHL EAX,0x3
// 005cd36c: MOV EBX,dword ptr [EBX + 0x4]
// 005cd36f: SUB EAX,ECX
// 005cd371: ADD EAX,EBX
// 005cd373: MOV ECX,dword ptr [EAX + 0x30]
// 005cd376: AND ECX,EDX
// 005cd378: CMP ECX,EDX
// 005cd37a: JZ 0x005cd3b3
//   XREF to: 005cd3b3 (CONDITIONAL_JUMP)
// 005cd37c: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_005cd37c
// 005cd37f: SHL EAX,0x3
// 005cd382: MOV ECX,EAX
// 005cd384: SHL EAX,0x3
// 005cd387: SUB EAX,ECX
// 005cd389: ADD EAX,EBX
// 005cd38b: MOV ECX,dword ptr [EAX + 0x30]
// 005cd38e: AND ECX,EDX
// 005cd390: CMP ECX,EDX
// 005cd392: JNZ 0x005cd397
//   XREF to: 005cd397 (CONDITIONAL_JUMP)
// 005cd394: OR dword ptr [EAX + 0x34],EDI
// 005cd397: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_005cd397
// 005cd39a: SHL EAX,0x3
// 005cd39d: MOV ECX,EAX
// 005cd39f: SHL EAX,0x3
// 005cd3a2: SUB EAX,ECX
// 005cd3a4: ADD EBX,EAX
// 005cd3a6: MOV EAX,dword ptr [EBX + 0x30]
// 005cd3a9: AND EAX,EDX
// 005cd3ab: CMP EAX,EDX
// 005cd3ad: JZ 0x005cd3b8
//   XREF to: 005cd3b8 (CONDITIONAL_JUMP)
// 005cd3af: POP EDI
// 005cd3b0: POP ESI
// 005cd3b1: POP EBX
// 005cd3b2: RET
// 005cd3b3: OR dword ptr [EAX + 0x34],EDI
//   Label: LAB_005cd3b3
// 005cd3b6: JMP 0x005cd37c
//   XREF to: 005cd37c (UNCONDITIONAL_JUMP)
// 005cd3b8: OR dword ptr [EBX + 0x34],EDI
//   Label: LAB_005cd3b8
// 005cd3bb: POP EDI
// 005cd3bc: POP ESI
// 005cd3bd: POP EBX
// 005cd3be: RET
