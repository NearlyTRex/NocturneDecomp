// Name: shape_superopt.cpp_FUN_005d28d0
// Address: 005d28d0
// Address Range: [[005d28d0, 005d2937]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d28d0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d28d0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void shape_superopt_cpp_FUN_005d28d0(void)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  double *in_stack_0000000c;
  
  iVar1 = (**(code **)(in_stack_00000004[6] + 4))();
  if (iVar1 != 0) {
    pdVar2 = (double *)in_stack_00000004[1];
    uVar3 = 0;
    if (*in_stack_00000004 != 0) {
      do {
        while ((*(uint *)((int)pdVar2 + 0x34) & in_stack_00000008) == in_stack_00000008) {
          *pdVar2 = *in_stack_0000000c + *pdVar2;
          pdVar2[1] = in_stack_0000000c[1] + pdVar2[1];
          pdVar2[2] = in_stack_0000000c[2] + pdVar2[2];
          uVar3 = uVar3 + 1;
          pdVar2 = pdVar2 + 7;
          if (*in_stack_00000004 <= uVar3) {
            return;
          }
        }
        uVar3 = uVar3 + 1;
        pdVar2 = pdVar2 + 7;
      } while (uVar3 < *in_stack_00000004);
    }
  }
  return;
}


// Assembly code:
// 005d28d0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d28d0
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
