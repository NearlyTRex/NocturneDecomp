// Name: core_flies.cpp_FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc7ee] [004cc808, 004cc819]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc760()
// Cross-references:
//   core_flies.cpp_FUN_004cbf00 (004cbf00) at 004cc147 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_flies.cpp_FUN_004cc820

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004cc760(undefined4 param_1, undefined4 param_2)
    */

void core_flies_cpp_FUN_004cc760(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  float *unaff_EDI;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_14;
  
  iVar4 = in_stack_00000004 + 0x168 + in_stack_00000008 * 0x34;
  puVar1 = (undefined4 *)core_flies_cpp_FUN_004cc820();
  if ((undefined4 *)(iVar4 + 4) != puVar1) {
    *(undefined4 *)(iVar4 + 4) = *puVar1;
    *(undefined4 *)(iVar4 + 8) = puVar1[1];
    *(undefined4 *)(iVar4 + 0xc) = puVar1[2];
  }
  iVar4 = local_14 + 4;
  puVar1 = (undefined4 *)(local_14 + 0x10);
  do {
    puVar2 = (undefined4 *)core_flies_cpp_FUN_004cc820();
    if (puVar1 != puVar2) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
    }
    iVar4 = iVar4 + 0xc;
    puVar1 = puVar1 + 3;
  } while (iVar4 != local_14 + 0x28);
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  *unaff_EDI = fVar3;
  return;
}


// Assembly code:
// 004cc760: PUSH EBX
//   Label: core_flies.cpp_FUN_004cc760
// 004cc761: PUSH ESI
// 004cc762: PUSH EDI
// 004cc763: PUSH EBP
// 004cc764: SUB ESP,0x20
// 004cc767: MOV EBP,dword ptr [ESP + 0x34]
// 004cc76b: MOV EBX,dword ptr [ESP + 0x38]
// 004cc76f: LEA EAX,[EBX*0x4 + 0x0]
// 004cc776: SUB EAX,EBX
// 004cc778: SHL EAX,0x2
// 004cc77b: ADD EAX,EBX
// 004cc77d: SHL EAX,0x2
// 004cc780: LEA EBX,[EBP + 0x168]
// 004cc786: PUSH 0x0
// 004cc788: ADD EBX,EAX
// 004cc78a: LEA EAX,[ESP + 0x4]
// 004cc78e: PUSH EAX
// 004cc78f: PUSH EBP
// 004cc790: MOV dword ptr [ESP + 0x24],EBX
// 004cc794: ADD EBX,0x4
// 004cc797: CALL core_flies.cpp_FUN_004cc820
//   XREF to: 004cc820 (UNCONDITIONAL_CALL)
// 004cc79c: ADD ESP,0xc
// 004cc79f: CMP EBX,EAX
// 004cc7a1: JNZ 0x004cc808
//   XREF to: 004cc808 (CONDITIONAL_JUMP)
// 004cc7a3: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_004cc7a3
// 004cc7a7: MOV EBX,dword ptr [ESP + 0x18]
// 004cc7ab: ADD EDI,0x4
// 004cc7ae: ADD EBX,0x10
// 004cc7b1: MOV ESI,EDI
// 004cc7b3: ADD EDI,0x24
// 004cc7b6: PUSH ESI
//   Label: LAB_004cc7b6
// 004cc7b7: LEA EAX,[ESP + 0x10]
// 004cc7bb: PUSH EAX
// 004cc7bc: PUSH EBP
// 004cc7bd: CALL core_flies.cpp_FUN_004cc820
//   XREF to: 004cc820 (UNCONDITIONAL_CALL)
// 004cc7c2: ADD ESP,0xc
// 004cc7c5: CMP EBX,EAX
// 004cc7c7: JZ 0x004cc7d9
//   XREF to: 004cc7d9 (CONDITIONAL_JUMP)
// 004cc7c9: MOV EDX,dword ptr [EAX]
// 004cc7cb: MOV dword ptr [EBX],EDX
// 004cc7cd: MOV EDX,dword ptr [EAX + 0x4]
// 004cc7d0: MOV dword ptr [EBX + 0x4],EDX
// 004cc7d3: MOV EDX,dword ptr [EAX + 0x8]
// 004cc7d6: MOV dword ptr [EBX + 0x8],EDX
// 004cc7d9: ADD ESI,0xc
//   Label: LAB_004cc7d9
// 004cc7dc: ADD EBX,0xc
// 004cc7df: CMP ESI,EDI
// 004cc7e1: JNZ 0x004cc7b6
//   XREF to: 004cc7b6 (CONDITIONAL_JUMP)
// 004cc7e3: PUSH 0x3f800000
// 004cc7e8: PUSH 0x0
// 004cc7ea: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004cc808: MOV EDX,dword ptr [EAX]
//   Label: LAB_004cc808
// 004cc80a: MOV dword ptr [EBX],EDX
// 004cc80c: MOV EDX,dword ptr [EAX + 0x4]
// 004cc80f: MOV dword ptr [EBX + 0x4],EDX
// 004cc812: MOV EDX,dword ptr [EAX + 0x8]
// 004cc815: MOV dword ptr [EBX + 0x8],EDX
// 004cc818: JMP 0x004cc7a3
//   XREF to: 004cc7a3 (UNCONDITIONAL_JUMP)
