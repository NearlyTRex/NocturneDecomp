// Name: shape_superopt.cpp_FUN_005d37b0
// Address: 005d37b0
// Address Range: [[005d37b0, 005d385c]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d37b0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d37b0(undefined4 param_1, undefined4 param_2) */

undefined4 * shape_superopt_cpp_FUN_005d37b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  puVar1 = (undefined4 *)(in_stack_00000004[4] & (uint)in_stack_00000008);
  if (puVar1 == in_stack_00000008) {
    puVar1 = (undefined4 *)(**(code **)(in_stack_00000004[6] + 0x90))();
    return puVar1;
  }
  uVar3 = 0;
  if (in_stack_00000004[2] != 0) {
    iVar4 = 0;
    do {
      iVar2 = in_stack_00000004[3] + iVar4;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x68;
      puVar1 = (undefined4 *)(**(code **)(*(int *)(iVar2 + 100) + 0x38))();
    } while (uVar3 < in_stack_00000004[2]);
  }
  uVar3 = 0;
  if (*in_stack_00000004 != 0) {
    iVar4 = 0;
    do {
      while (puVar1 = (undefined4 *)(in_stack_00000004[1] + iVar4),
            (undefined4 *)(puVar1[0xd] & (uint)in_stack_00000008) == in_stack_00000008) {
        puVar1[6] = *puVar1;
        puVar1[7] = puVar1[1];
        puVar1[8] = puVar1[2];
        puVar1[9] = puVar1[3];
        puVar1[10] = puVar1[4];
        puVar1[0xb] = puVar1[5];
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x38;
        if (*in_stack_00000004 <= uVar3) {
          return puVar1;
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x38;
    } while (uVar3 < *in_stack_00000004);
  }
  return puVar1;
}


// Assembly code:
// 005d37b0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d37b0
// 005d37b1: PUSH ESI
// 005d37b2: PUSH EDI
// 005d37b3: PUSH EBP
// 005d37b4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d37b8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d37bc: MOV EAX,dword ptr [EBX + 0x10]
// 005d37bf: AND EAX,ESI
// 005d37c1: CMP EAX,ESI
// 005d37c3: JZ 0x005d3817
//   XREF to: 005d3817 (CONDITIONAL_JUMP)
// 005d37c5: MOV EDX,dword ptr [EBX + 0x8]
// 005d37c8: XOR EBP,EBP
// 005d37ca: TEST EDX,EDX
// 005d37cc: JBE 0x005d37f0
//   XREF to: 005d37f0 (CONDITIONAL_JUMP)
// 005d37ce: XOR EDI,EDI
// 005d37d0: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_005d37d0
// 005d37d3: PUSH ESI
// 005d37d4: ADD EAX,EDI
// 005d37d6: PUSH EAX
// 005d37d7: MOV EDX,dword ptr [EAX + 0x64]
// 005d37da: INC EBP
// 005d37db: ADD EDI,0x68
// 005d37de: CALL dword ptr [EDX + 0x38]
// 005d37e1: MOV ECX,dword ptr [EBX + 0x8]
// 005d37e4: ADD ESP,0x8
// 005d37e7: CMP EBP,ECX
// 005d37e9: JC 0x005d37d0
//   XREF to: 005d37d0 (CONDITIONAL_JUMP)
// 005d37eb: LEA EAX,[EAX]
// 005d37ee: MOV ECX,ECX
// 005d37f0: MOV EDI,dword ptr [EBX]
//   Label: LAB_005d37f0
// 005d37f2: XOR ECX,ECX
// 005d37f4: TEST EDI,EDI
// 005d37f6: JBE 0x005d3812
//   XREF to: 005d3812 (CONDITIONAL_JUMP)
// 005d37f8: XOR EDI,EDI
// 005d37fa: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_005d37fa
// 005d37fd: ADD EAX,EDI
// 005d37ff: MOV EDX,dword ptr [EAX + 0x34]
// 005d3802: AND EDX,ESI
// 005d3804: CMP EDX,ESI
// 005d3806: JZ 0x005d3829
//   XREF to: 005d3829 (CONDITIONAL_JUMP)
// 005d3808: INC ECX
// 005d3809: MOV EBP,dword ptr [EBX]
// 005d380b: ADD EDI,0x38
// 005d380e: CMP ECX,EBP
// 005d3810: JC 0x005d37fa
//   XREF to: 005d37fa (CONDITIONAL_JUMP)
// 005d3812: POP EBP
//   Label: LAB_005d3812
// 005d3813: POP EDI
// 005d3814: POP ESI
// 005d3815: POP EBX
// 005d3816: RET
// 005d3817: PUSH EBX
//   Label: LAB_005d3817
// 005d3818: MOV EAX,dword ptr [EBX + 0x18]
// 005d381b: CALL dword ptr [EAX + 0x90]
// 005d3821: ADD ESP,0x4
// 005d3824: POP EBP
// 005d3825: POP EDI
// 005d3826: POP ESI
// 005d3827: POP EBX
// 005d3828: RET
// 005d3829: LEA EDX,[EAX + 0x18]
//   Label: LAB_005d3829
// 005d382c: MOV EBP,dword ptr [EAX]
// 005d382e: MOV dword ptr [EDX],EBP
// 005d3830: MOV EBP,dword ptr [EAX + 0x4]
// 005d3833: MOV dword ptr [EDX + 0x4],EBP
// 005d3836: MOV EBP,dword ptr [EAX + 0x8]
// 005d3839: MOV dword ptr [EDX + 0x8],EBP
// 005d383c: MOV EBP,dword ptr [EAX + 0xc]
// 005d383f: MOV dword ptr [EDX + 0xc],EBP
// 005d3842: MOV EBP,dword ptr [EAX + 0x10]
// 005d3845: MOV dword ptr [EDX + 0x10],EBP
// 005d3848: MOV EBP,dword ptr [EAX + 0x14]
// 005d384b: MOV dword ptr [EDX + 0x14],EBP
// 005d384e: INC ECX
// 005d384f: MOV EBP,dword ptr [EBX]
// 005d3851: ADD EDI,0x38
// 005d3854: CMP ECX,EBP
// 005d3856: JC 0x005d37fa
//   XREF to: 005d37fa (CONDITIONAL_JUMP)
// 005d3858: POP EBP
// 005d3859: POP EDI
// 005d385a: POP ESI
// 005d385b: POP EBX
// 005d385c: RET
