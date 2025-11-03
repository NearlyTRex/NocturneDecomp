// Name: core_morph.cpp_FUN_0052b280
// Address: 0052b280
// Address Range: [[0052b280, 0052b30c]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b280()
// Cross-references:
//   core_morph.cpp_CMorph_getReady_FUN_0052b680 (0052b680) at 0052ba10 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int core_morph_cpp_FUN_0052b280(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  float *in_stack_00000008;
  float local_18;
  
  iVar7 = 0;
  local_18 = 1e+30;
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x54)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(in_stack_00000004 + 0x58);
      fVar2 = *in_stack_00000008 - *(float *)(iVar5 + 4 + iVar1);
      fVar3 = in_stack_00000008[1] - *(float *)(iVar5 + 8 + iVar1);
      fVar4 = in_stack_00000008[2] - *(float *)(iVar5 + 0xc + iVar1);
      fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < local_18) {
        iVar7 = iVar6;
        local_18 = fVar2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0x54));
  }
  return iVar7;
}


// Assembly code:
// 0052b280: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b280
// 0052b281: PUSH ESI
// 0052b282: PUSH EDI
// 0052b283: PUSH EBP
// 0052b284: SUB ESP,0x14
// 0052b287: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0052b28b: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0052b28f: MOV EDX,0x7149f2ca
// 0052b294: MOV ECX,dword ptr [ESI + 0x54]
// 0052b297: XOR EDI,EDI
// 0052b299: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052b29d: XOR EDX,EDX
// 0052b29f: TEST ECX,ECX
// 0052b2a1: JLE 0x0052b2f2
//   XREF to: 0052b2f2 (CONDITIONAL_JUMP)
// 0052b2a3: XOR ECX,ECX
// 0052b2a5: MOV EAX,dword ptr [ESI + 0x58]
//   Label: LAB_0052b2a5
// 0052b2a8: FLD float ptr [EBX]
// 0052b2aa: FSUB float ptr [ECX + EAX*0x1 + 0x4]
// 0052b2ae: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0052b2b1: FLD float ptr [EBX + 0x4]
// 0052b2b4: FSUB float ptr [ECX + EAX*0x1 + 0x8]
// 0052b2b8: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 0052b2bc: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0052b2c0: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0052b2c3: FMUL ST0
// 0052b2c5: FLD float ptr [EBX + 0x8]
// 0052b2c8: FSUB float ptr [ECX + EAX*0x1 + 0xc]
// 0052b2cc: FXCH
// 0052b2ce: FADDP ST2,ST0
// 0052b2d0: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 0052b2d4: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0052b2d8: FADDP
// 0052b2da: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 0052b2de: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0052b2e2: FNSTSW AX
// 0052b2e4: SAHF
// 0052b2e5: JC 0x0052b301
//   XREF to: 0052b301 (CONDITIONAL_JUMP)
// 0052b2e7: INC EDX
//   Label: LAB_0052b2e7
// 0052b2e8: MOV EBP,dword ptr [ESI + 0x54]
// 0052b2eb: ADD ECX,0x10
// 0052b2ee: CMP EDX,EBP
// 0052b2f0: JL 0x0052b2a5
//   XREF to: 0052b2a5 (CONDITIONAL_JUMP)
// 0052b2f2: MOV EAX,EDI
//   Label: LAB_0052b2f2
// 0052b2f4: ADD ESP,0x14
// 0052b2f7: POP EBP
// 0052b2f8: POP EDI
// 0052b2f9: POP ESI
// 0052b2fa: POP EBX
// 0052b2fb: LEA EAX,[EAX]
// 0052b2fe: MOV ECX,ECX
// 0052b300: RET
// 0052b301: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0052b301
//   XREF to: Stack[-0x14] (READ)
// 0052b305: MOV EDI,EDX
// 0052b307: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052b30b: JMP 0x0052b2e7
//   XREF to: 0052b2e7 (UNCONDITIONAL_JUMP)
