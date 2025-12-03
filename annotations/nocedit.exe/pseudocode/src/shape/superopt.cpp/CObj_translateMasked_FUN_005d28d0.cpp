// Name: shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0
// Address: 005d28d0
// Address Range: [[005d28d0, 005d2937]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0(CObj * this_ptr, uint flag_mask, CVec * offset)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_translateMasked_FUN_005d28d0(CObj *this_ptr,uint flag_mask,CVec *offset)

{
  int iVar1;
  CVert *pCVar2;
  uint uVar3;
  
  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    pCVar2 = this_ptr->vertex_data;
    uVar3 = 0;
    if (this_ptr->vertex_count != 0) {
      do {
        while ((pCVar2->state_flags & flag_mask) == flag_mask) {
          (pCVar2->position).impl.x = (offset->impl).x + (pCVar2->position).impl.x;
          (pCVar2->position).impl.y = (offset->impl).y + (pCVar2->position).impl.y;
          (pCVar2->position).impl.z = (offset->impl).z + (pCVar2->position).impl.z;
          uVar3 = uVar3 + 1;
          pCVar2 = pCVar2 + 1;
          if ((uint)this_ptr->vertex_count <= uVar3) {
            return;
          }
        }
        uVar3 = uVar3 + 1;
        pCVar2 = pCVar2 + 1;
      } while (uVar3 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}


// Assembly code:
// 005d28d0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0
// 005d28d1: PUSH ESI
// 005d28d2: PUSH EDI
// 005d28d3: PUSH EBP
// 005d28d4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d28d8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d28dc: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d28e0: PUSH EDI
// 005d28e1: MOV EAX,dword ptr [EDI + 0x18]
// 005d28e4: CALL dword ptr [EAX + 0x4]
// 005d28e7: ADD ESP,0x4
// 005d28ea: TEST EAX,EAX
// 005d28ec: JZ 0x005d290c
//   XREF to: 005d290c (CONDITIONAL_JUMP)
// 005d28ee: MOV ECX,dword ptr [EDI]
// 005d28f0: MOV EAX,dword ptr [EDI + 0x4]
// 005d28f3: XOR EDX,EDX
// 005d28f5: TEST ECX,ECX
// 005d28f7: JBE 0x005d290c
//   XREF to: 005d290c (CONDITIONAL_JUMP)
// 005d28f9: MOV ECX,dword ptr [EAX + 0x34]
//   Label: LAB_005d28f9
// 005d28fc: AND ECX,ESI
// 005d28fe: CMP ECX,ESI
// 005d2900: JZ 0x005d2911
//   XREF to: 005d2911 (CONDITIONAL_JUMP)
// 005d2902: INC EDX
// 005d2903: MOV EBP,dword ptr [EDI]
// 005d2905: ADD EAX,0x38
// 005d2908: CMP EDX,EBP
// 005d290a: JC 0x005d28f9
//   XREF to: 005d28f9 (CONDITIONAL_JUMP)
// 005d290c: POP EBP
//   Label: LAB_005d290c
// 005d290d: POP EDI
// 005d290e: POP ESI
// 005d290f: POP EBX
// 005d2910: RET
// 005d2911: FLD double ptr [EBX]
//   Label: LAB_005d2911
// 005d2913: FADD double ptr [EAX]
// 005d2915: FSTP double ptr [EAX]
// 005d2917: FLD double ptr [EBX + 0x8]
// 005d291a: FADD double ptr [EAX + 0x8]
// 005d291d: FSTP double ptr [EAX + 0x8]
// 005d2920: FLD double ptr [EBX + 0x10]
// 005d2923: FADD double ptr [EAX + 0x10]
// 005d2926: FSTP double ptr [EAX + 0x10]
// 005d2929: INC EDX
// 005d292a: MOV EBP,dword ptr [EDI]
// 005d292c: ADD EAX,0x38
// 005d292f: CMP EDX,EBP
// 005d2931: JC 0x005d28f9
//   XREF to: 005d28f9 (CONDITIONAL_JUMP)
// 005d2933: POP EBP
// 005d2934: POP EDI
// 005d2935: POP ESI
// 005d2936: POP EBX
// 005d2937: RET
