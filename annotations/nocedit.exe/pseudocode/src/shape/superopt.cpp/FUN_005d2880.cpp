// Name: shape_superopt.cpp_FUN_005d2880
// Address: 005d2880
// Address Range: [[005d2880, 005d28c9]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d2880()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d2880(undefined4 param_1, undefined4 param_2) */

void shape_superopt_cpp_FUN_005d2880(void)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  uint *in_stack_00000004;
  double *in_stack_00000008;
  
  iVar1 = (**(code **)(in_stack_00000004[6] + 4))();
  if (iVar1 != 0) {
    pdVar2 = (double *)in_stack_00000004[1];
    uVar3 = 0;
    if (*in_stack_00000004 != 0) {
      do {
        *pdVar2 = *in_stack_00000008 + *pdVar2;
        pdVar2[1] = in_stack_00000008[1] + pdVar2[1];
        uVar3 = uVar3 + 1;
        pdVar2[2] = in_stack_00000008[2] + pdVar2[2];
        pdVar2 = pdVar2 + 7;
      } while (uVar3 < *in_stack_00000004);
    }
  }
  return;
}


// Assembly code:
// 005d2880: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d2880
// 005d2881: PUSH ESI
// 005d2882: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d2886: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d288a: PUSH ESI
// 005d288b: MOV EAX,dword ptr [ESI + 0x18]
// 005d288e: CALL dword ptr [EAX + 0x4]
// 005d2891: ADD ESP,0x4
// 005d2894: TEST EAX,EAX
// 005d2896: JZ 0x005d28c7
//   XREF to: 005d28c7 (CONDITIONAL_JUMP)
// 005d2898: MOV ECX,dword ptr [ESI]
// 005d289a: MOV EAX,dword ptr [ESI + 0x4]
// 005d289d: XOR EDX,EDX
// 005d289f: TEST ECX,ECX
// 005d28a1: JBE 0x005d28c7
//   XREF to: 005d28c7 (CONDITIONAL_JUMP)
// 005d28a3: PUSH EDI
// 005d28a4: FLD double ptr [EBX]
//   Label: LAB_005d28a4
// 005d28a6: FADD double ptr [EAX]
// 005d28a8: FSTP double ptr [EAX]
// 005d28aa: FLD double ptr [EBX + 0x8]
// 005d28ad: FADD double ptr [EAX + 0x8]
// 005d28b0: FSTP double ptr [EAX + 0x8]
// 005d28b3: FLD double ptr [EBX + 0x10]
// 005d28b6: FADD double ptr [EAX + 0x10]
// 005d28b9: INC EDX
// 005d28ba: FSTP double ptr [EAX + 0x10]
// 005d28bd: MOV EDI,dword ptr [ESI]
// 005d28bf: ADD EAX,0x38
// 005d28c2: CMP EDX,EDI
// 005d28c4: JC 0x005d28a4
//   XREF to: 005d28a4 (CONDITIONAL_JUMP)
// 005d28c6: POP EDI
// 005d28c7: POP ESI
//   Label: LAB_005d28c7
// 005d28c8: POP EBX
// 005d28c9: RET
