// Name: shape_superopt.cpp_CPoly_FUN_005cd6f0
// Address: 005cd6f0
// Address Range: [[005cd6f0, 005cd7c0]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cd6f0(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cd6f0(CPoly *this_ptr)

{
  CVert *pCVar1;
  CVert *pCVar2;
  uint in_stack_00000008;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_0;
  if ((pCVar1->flags & in_stack_00000008) == in_stack_00000008) {
    *(undefined4 *)&(pCVar1->position).impl.x = *(undefined4 *)&(pCVar1->orig_position).impl.x;
    *(undefined4 *)((int)&(pCVar1->position).impl.x + 4) =
         *(undefined4 *)((int)&(pCVar1->orig_position).impl.x + 4);
    *(undefined4 *)&(pCVar1->position).impl.y = *(undefined4 *)&(pCVar1->orig_position).impl.y;
    *(undefined4 *)((int)&(pCVar1->position).impl.y + 4) =
         *(undefined4 *)((int)&(pCVar1->orig_position).impl.y + 4);
    *(undefined4 *)&(pCVar1->position).impl.z = *(undefined4 *)&(pCVar1->orig_position).impl.z;
    *(undefined4 *)((int)&(pCVar1->position).impl.z + 4) =
         *(undefined4 *)((int)&(pCVar1->orig_position).impl.z + 4);
  }
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  if ((pCVar1->flags & in_stack_00000008) == in_stack_00000008) {
    *(undefined4 *)&(pCVar1->position).impl.x = *(undefined4 *)&(pCVar1->orig_position).impl.x;
    *(undefined4 *)((int)&(pCVar1->position).impl.x + 4) =
         *(undefined4 *)((int)&(pCVar1->orig_position).impl.x + 4);
    *(undefined4 *)&(pCVar1->position).impl.y = *(undefined4 *)&(pCVar1->orig_position).impl.y;
    *(undefined4 *)((int)&(pCVar1->position).impl.y + 4) =
         *(undefined4 *)((int)&(pCVar1->orig_position).impl.y + 4);
    *(undefined4 *)&(pCVar1->position).impl.z = *(undefined4 *)&(pCVar1->orig_position).impl.z;
    *(undefined4 *)((int)&(pCVar1->position).impl.z + 4) =
         *(undefined4 *)((int)&(pCVar1->orig_position).impl.z + 4);
  }
  pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
  if ((pCVar2->flags & in_stack_00000008) != in_stack_00000008) {
    return;
  }
  *(undefined4 *)&(pCVar2->position).impl.x = *(undefined4 *)&(pCVar2->orig_position).impl.x;
  *(undefined4 *)((int)&(pCVar2->position).impl.x + 4) =
       *(undefined4 *)((int)&(pCVar2->orig_position).impl.x + 4);
  *(undefined4 *)&(pCVar2->position).impl.y = *(undefined4 *)&(pCVar2->orig_position).impl.y;
  *(undefined4 *)((int)&(pCVar2->position).impl.y + 4) =
       *(undefined4 *)((int)&(pCVar2->orig_position).impl.y + 4);
  *(undefined4 *)&(pCVar2->position).impl.z = *(undefined4 *)&(pCVar2->orig_position).impl.z;
  *(undefined4 *)((int)&(pCVar2->position).impl.z + 4) =
       *(undefined4 *)((int)&(pCVar2->orig_position).impl.z + 4);
  return;
}


// Assembly code:
// 005cd6f0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd6f0
// 005cd6f1: PUSH ESI
// 005cd6f2: PUSH EDI
// 005cd6f3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005cd6f7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005cd6fb: MOV EAX,dword ptr [ESI + 0x4]
// 005cd6fe: SHL EAX,0x3
// 005cd701: MOV EBX,dword ptr [ESI]
// 005cd703: MOV ECX,EAX
// 005cd705: SHL EAX,0x3
// 005cd708: MOV EBX,dword ptr [EBX + 0x4]
// 005cd70b: SUB EAX,ECX
// 005cd70d: ADD EAX,EBX
// 005cd70f: MOV ECX,dword ptr [EAX + 0x34]
// 005cd712: AND ECX,EDX
// 005cd714: CMP ECX,EDX
// 005cd716: JZ 0x005cd771
//   XREF to: 005cd771 (CONDITIONAL_JUMP)
// 005cd718: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_005cd718
// 005cd71b: SHL EAX,0x3
// 005cd71e: MOV ECX,EAX
// 005cd720: SHL EAX,0x3
// 005cd723: SUB EAX,ECX
// 005cd725: ADD EAX,EBX
// 005cd727: MOV ECX,dword ptr [EAX + 0x34]
// 005cd72a: AND ECX,EDX
// 005cd72c: CMP ECX,EDX
// 005cd72e: JNZ 0x005cd755
//   XREF to: 005cd755 (CONDITIONAL_JUMP)
// 005cd730: LEA ECX,[EAX + 0x18]
// 005cd733: MOV EDI,dword ptr [ECX]
// 005cd735: MOV dword ptr [EAX],EDI
// 005cd737: MOV EDI,dword ptr [ECX + 0x4]
// 005cd73a: MOV dword ptr [EAX + 0x4],EDI
// 005cd73d: MOV EDI,dword ptr [ECX + 0x8]
// 005cd740: MOV dword ptr [EAX + 0x8],EDI
// 005cd743: MOV EDI,dword ptr [ECX + 0xc]
// 005cd746: MOV dword ptr [EAX + 0xc],EDI
// 005cd749: MOV EDI,dword ptr [ECX + 0x10]
// 005cd74c: MOV dword ptr [EAX + 0x10],EDI
// 005cd74f: MOV EDI,dword ptr [ECX + 0x14]
// 005cd752: MOV dword ptr [EAX + 0x14],EDI
// 005cd755: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_005cd755
// 005cd758: SHL EAX,0x3
// 005cd75b: MOV ECX,EAX
// 005cd75d: SHL EAX,0x3
// 005cd760: SUB EAX,ECX
// 005cd762: ADD EAX,EBX
// 005cd764: MOV ECX,dword ptr [EAX + 0x34]
// 005cd767: AND ECX,EDX
// 005cd769: CMP ECX,EDX
// 005cd76b: JZ 0x005cd798
//   XREF to: 005cd798 (CONDITIONAL_JUMP)
// 005cd76d: POP EDI
// 005cd76e: POP ESI
// 005cd76f: POP EBX
// 005cd770: RET
// 005cd771: LEA ECX,[EAX + 0x18]
//   Label: LAB_005cd771
// 005cd774: MOV EDI,dword ptr [ECX]
// 005cd776: MOV dword ptr [EAX],EDI
// 005cd778: MOV EDI,dword ptr [ECX + 0x4]
// 005cd77b: MOV dword ptr [EAX + 0x4],EDI
// 005cd77e: MOV EDI,dword ptr [ECX + 0x8]
// 005cd781: MOV dword ptr [EAX + 0x8],EDI
// 005cd784: MOV EDI,dword ptr [ECX + 0xc]
// 005cd787: MOV dword ptr [EAX + 0xc],EDI
// 005cd78a: MOV EDI,dword ptr [ECX + 0x10]
// 005cd78d: MOV dword ptr [EAX + 0x10],EDI
// 005cd790: MOV EDI,dword ptr [ECX + 0x14]
// 005cd793: MOV dword ptr [EAX + 0x14],EDI
// 005cd796: JMP 0x005cd718
//   XREF to: 005cd718 (UNCONDITIONAL_JUMP)
// 005cd798: LEA EDX,[EAX + 0x18]
//   Label: LAB_005cd798
// 005cd79b: MOV ECX,dword ptr [EDX]
// 005cd79d: MOV dword ptr [EAX],ECX
// 005cd79f: MOV ECX,dword ptr [EDX + 0x4]
// 005cd7a2: MOV dword ptr [EAX + 0x4],ECX
// 005cd7a5: MOV ECX,dword ptr [EDX + 0x8]
// 005cd7a8: MOV dword ptr [EAX + 0x8],ECX
// 005cd7ab: MOV ECX,dword ptr [EDX + 0xc]
// 005cd7ae: MOV dword ptr [EAX + 0xc],ECX
// 005cd7b1: MOV ECX,dword ptr [EDX + 0x10]
// 005cd7b4: MOV dword ptr [EAX + 0x10],ECX
// 005cd7b7: MOV ECX,dword ptr [EDX + 0x14]
// 005cd7ba: MOV dword ptr [EAX + 0x14],ECX
// 005cd7bd: POP EDI
// 005cd7be: POP ESI
// 005cd7bf: POP EBX
// 005cd7c0: RET
