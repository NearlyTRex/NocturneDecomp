// Name: shape_superopt.cpp_CPoly_FUN_005cd560
// Address: 005cd560
// Address Range: [[005cd560, 005cd630]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cd560(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cd560(CPoly *this_ptr)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint in_stack_00000008;
  
  pvVar1 = this_ptr->parent_obj->vertex_data;
  puVar2 = (undefined4 *)(this_ptr->vertex_idx_0 * 0x38 + (int)pvVar1);
  if ((puVar2[0xd] & in_stack_00000008) == in_stack_00000008) {
    puVar2[6] = *puVar2;
    puVar2[7] = puVar2[1];
    puVar2[8] = puVar2[2];
    puVar2[9] = puVar2[3];
    puVar2[10] = puVar2[4];
    puVar2[0xb] = puVar2[5];
  }
  puVar2 = (undefined4 *)(this_ptr->vertex_idx_1 * 0x38 + (int)pvVar1);
  if ((puVar2[0xd] & in_stack_00000008) == in_stack_00000008) {
    puVar2[6] = *puVar2;
    puVar2[7] = puVar2[1];
    puVar2[8] = puVar2[2];
    puVar2[9] = puVar2[3];
    puVar2[10] = puVar2[4];
    puVar2[0xb] = puVar2[5];
  }
  puVar2 = (undefined4 *)(this_ptr->vertex_idx_2 * 0x38 + (int)pvVar1);
  if ((puVar2[0xd] & in_stack_00000008) != in_stack_00000008) {
    return;
  }
  puVar2[6] = *puVar2;
  puVar2[7] = puVar2[1];
  puVar2[8] = puVar2[2];
  puVar2[9] = puVar2[3];
  puVar2[10] = puVar2[4];
  puVar2[0xb] = puVar2[5];
  return;
}


// Assembly code:
// 005cd560: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd560
// 005cd561: PUSH ESI
// 005cd562: PUSH EDI
// 005cd563: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cd567: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cd56b: MOV EAX,dword ptr [ESI + 0x4]
// 005cd56e: SHL EAX,0x3
// 005cd571: MOV EBX,dword ptr [ESI]
// 005cd573: MOV ECX,EAX
// 005cd575: SHL EAX,0x3
// 005cd578: MOV EBX,dword ptr [EBX + 0x4]
// 005cd57b: SUB EAX,ECX
// 005cd57d: ADD EAX,EBX
// 005cd57f: MOV ECX,dword ptr [EAX + 0x34]
// 005cd582: AND ECX,EDX
// 005cd584: CMP ECX,EDX
// 005cd586: JZ 0x005cd5e1
//   XREF to: 005cd5e1 (CONDITIONAL_JUMP)
// 005cd588: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_005cd588
// 005cd58b: SHL EAX,0x3
// 005cd58e: MOV ECX,EAX
// 005cd590: SHL EAX,0x3
// 005cd593: SUB EAX,ECX
// 005cd595: ADD EAX,EBX
// 005cd597: MOV ECX,dword ptr [EAX + 0x34]
// 005cd59a: AND ECX,EDX
// 005cd59c: CMP ECX,EDX
// 005cd59e: JNZ 0x005cd5c5
//   XREF to: 005cd5c5 (CONDITIONAL_JUMP)
// 005cd5a0: LEA ECX,[EAX + 0x18]
// 005cd5a3: MOV EDI,dword ptr [EAX]
// 005cd5a5: MOV dword ptr [ECX],EDI
// 005cd5a7: MOV EDI,dword ptr [EAX + 0x4]
// 005cd5aa: MOV dword ptr [ECX + 0x4],EDI
// 005cd5ad: MOV EDI,dword ptr [EAX + 0x8]
// 005cd5b0: MOV dword ptr [ECX + 0x8],EDI
// 005cd5b3: MOV EDI,dword ptr [EAX + 0xc]
// 005cd5b6: MOV dword ptr [ECX + 0xc],EDI
// 005cd5b9: MOV EDI,dword ptr [EAX + 0x10]
// 005cd5bc: MOV dword ptr [ECX + 0x10],EDI
// 005cd5bf: MOV EDI,dword ptr [EAX + 0x14]
// 005cd5c2: MOV dword ptr [ECX + 0x14],EDI
// 005cd5c5: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_005cd5c5
// 005cd5c8: SHL EAX,0x3
// 005cd5cb: MOV ECX,EAX
// 005cd5cd: SHL EAX,0x3
// 005cd5d0: SUB EAX,ECX
// 005cd5d2: ADD EAX,EBX
// 005cd5d4: MOV ECX,dword ptr [EAX + 0x34]
// 005cd5d7: AND ECX,EDX
// 005cd5d9: CMP ECX,EDX
// 005cd5db: JZ 0x005cd608
//   XREF to: 005cd608 (CONDITIONAL_JUMP)
// 005cd5dd: POP EDI
// 005cd5de: POP ESI
// 005cd5df: POP EBX
// 005cd5e0: RET
// 005cd5e1: LEA ECX,[EAX + 0x18]
//   Label: LAB_005cd5e1
// 005cd5e4: MOV EDI,dword ptr [EAX]
// 005cd5e6: MOV dword ptr [ECX],EDI
// 005cd5e8: MOV EDI,dword ptr [EAX + 0x4]
// 005cd5eb: MOV dword ptr [ECX + 0x4],EDI
// 005cd5ee: MOV EDI,dword ptr [EAX + 0x8]
// 005cd5f1: MOV dword ptr [ECX + 0x8],EDI
// 005cd5f4: MOV EDI,dword ptr [EAX + 0xc]
// 005cd5f7: MOV dword ptr [ECX + 0xc],EDI
// 005cd5fa: MOV EDI,dword ptr [EAX + 0x10]
// 005cd5fd: MOV dword ptr [ECX + 0x10],EDI
// 005cd600: MOV EDI,dword ptr [EAX + 0x14]
// 005cd603: MOV dword ptr [ECX + 0x14],EDI
// 005cd606: JMP 0x005cd588
//   XREF to: 005cd588 (UNCONDITIONAL_JUMP)
// 005cd608: LEA EDX,[EAX + 0x18]
//   Label: LAB_005cd608
// 005cd60b: MOV ECX,dword ptr [EAX]
// 005cd60d: MOV dword ptr [EDX],ECX
// 005cd60f: MOV ECX,dword ptr [EAX + 0x4]
// 005cd612: MOV dword ptr [EDX + 0x4],ECX
// 005cd615: MOV ECX,dword ptr [EAX + 0x8]
// 005cd618: MOV dword ptr [EDX + 0x8],ECX
// 005cd61b: MOV ECX,dword ptr [EAX + 0xc]
// 005cd61e: MOV dword ptr [EDX + 0xc],ECX
// 005cd621: MOV ECX,dword ptr [EAX + 0x10]
// 005cd624: MOV dword ptr [EDX + 0x10],ECX
// 005cd627: MOV ECX,dword ptr [EAX + 0x14]
// 005cd62a: MOV dword ptr [EDX + 0x14],ECX
// 005cd62d: POP EDI
// 005cd62e: POP ESI
// 005cd62f: POP EBX
// 005cd630: RET
