// Name: core_gore.cpp_CGore_FUN_004ee0f0
// Address: 004ee0f0
// Address Range: [[004ee0f0, 004ee1df]]
// Convention: __cdecl
// Signature: int core_gore.cpp_CGore_FUN_004ee0f0(CGore * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 (0040ca10) at 0040caaa [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062e43a = 0.5
//   double DOUBLE_0062e442 = 1.33300000000000
//   undefined4 DAT_02d873d8
//   CBloodSplat[2000] DAT_02d873dc
//   undefined4 DAT_02d873e0
//   undefined4 DAT_02d873e4
//   undefined4 DAT_02d873e8
//   undefined4 DAT_02d873ec
//   undefined4 DAT_02d873f0
//   undefined4 DAT_02d87424
//   undefined4 DAT_02d87428
//   undefined4 DAT_02d8742c
//   undefined4 DAT_02d87430
//   undefined4 DAT_02d87434
//   undefined4 DAT_02da8720
//   CBloodPool[32] DAT_02da8724
//   undefined4 DAT_02da8728
//   undefined4 DAT_02da872c
//   undefined4 DAT_02da8730
//   undefined4 DAT_02da8734
//   undefined4 DAT_02da8750
//   undefined4 DAT_02da8754
//   undefined4 DAT_02da8758
//   undefined4 DAT_02da875c

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_FUN_004ee0f0(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  CBloodSplat *pCVar2;
  int iVar3;
  float *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  
  iVar3 = 0;
  if (0 < DAT_02da8720) {
    pCVar1 = DAT_02da8724;
    do {
      if (((ABS(in_stack_00000008[1] - *(float *)(pCVar1->field0_0x0 + 8)) <= (float)DOUBLE_0062e43a
           ) && (ABS(*in_stack_00000008 - *(float *)(pCVar1->field0_0x0 + 4)) <=
                 (float)DOUBLE_0062e442)) &&
         (ABS(in_stack_00000008[2] - *(float *)(pCVar1->field0_0x0 + 0xc)) <= (float)DOUBLE_0062e442
         )) {
        *in_stack_0000000c = *(undefined4 *)(pCVar1->field0_0x0 + 0x10);
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar3 < DAT_02da8720);
  }
  iVar3 = 0;
  if (0 < DAT_02d873d8) {
    pCVar2 = DAT_02d873dc;
    do {
      if (((*(int *)(pCVar2->field0_0x0 + 0x10) == 0) &&
          (ABS(in_stack_00000008[1] - *(float *)(pCVar2->field0_0x0 + 8)) <= (float)DOUBLE_0062e43a)
          ) && ((ABS(*in_stack_00000008 - *(float *)(pCVar2->field0_0x0 + 4)) <=
                 (float)DOUBLE_0062e43a &&
                (ABS(in_stack_00000008[2] - *(float *)(pCVar2->field0_0x0 + 0xc)) <=
                 (float)DOUBLE_0062e43a)))) {
        *in_stack_0000000c = *(undefined4 *)(pCVar2->field0_0x0 + 0x14);
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < DAT_02d873d8);
  }
  return 0;
}


// Assembly code:
// 004ee0f0: PUSH EBX
//   Label: core_gore.cpp_CGore_FUN_004ee0f0
// 004ee0f1: PUSH ESI
// 004ee0f2: PUSH EDI
// 004ee0f3: PUSH EBP
// 004ee0f4: MOV EBP,ESP
// 004ee0f6: AND ESP,0xfffffff8
// 004ee0f9: MOV ESI,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004ee0ff: MOV EDI,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ee105: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ee108: XOR EBX,EBX
// 004ee10a: TEST EDI,EDI
// 004ee10c: JLE 0x004ee12e
//   XREF to: 004ee12e (CONDITIONAL_JUMP)
// 004ee10e: MOV EDX,0x2da8724
//   XREF to: 02da8724 (DATA)
// 004ee113: FLD float ptr [ECX + 0x4]
//   Label: LAB_004ee113
// 004ee116: FSUB float ptr [EDX + 0x8]
//   XREF to: 02da872c (READ)
//   XREF to: 02da8754 (READ)
// 004ee119: FABS
// 004ee11b: FCOMP double ptr [0x0062e43a]
//   XREF to: 0062e43a (READ)
// 004ee121: FNSTSW AX
// 004ee123: SAHF
// 004ee124: JBE 0x004ee15e
//   XREF to: 004ee15e (CONDITIONAL_JUMP)
// 004ee126: INC EBX
//   Label: LAB_004ee126
// 004ee127: ADD EDX,0x28
// 004ee12a: CMP EBX,EDI
// 004ee12c: JL 0x004ee113
//   XREF to: 004ee113 (CONDITIONAL_JUMP)
// 004ee12e: XOR EBX,EBX
//   Label: LAB_004ee12e
// 004ee130: TEST ESI,ESI
// 004ee132: JLE 0x004ee147
//   XREF to: 004ee147 (CONDITIONAL_JUMP)
// 004ee134: MOV EDX,0x2d873dc
//   XREF to: 02d873dc (DATA)
// 004ee139: CMP dword ptr [EDX + 0x10],0x0
//   Label: LAB_004ee139
//   XREF to: 02d873ec (READ)
//   XREF to: 02d87430 (READ)
// 004ee13d: JZ 0x004ee192
//   XREF to: 004ee192 (CONDITIONAL_JUMP)
// 004ee13f: INC EBX
//   Label: LAB_004ee13f
// 004ee140: ADD EDX,0x44
// 004ee143: CMP EBX,ESI
// 004ee145: JL 0x004ee139
//   XREF to: 004ee139 (CONDITIONAL_JUMP)
// 004ee147: XOR EDX,EDX
//   Label: LAB_004ee147
// 004ee149: MOV EAX,EDX
//   Label: LAB_004ee149
// 004ee14b: MOV dword ptr [0x02da8720],EDI
//   XREF to: 02da8720 (WRITE)
// 004ee151: MOV dword ptr [0x02d873d8],ESI
//   XREF to: 02d873d8 (WRITE)
// 004ee157: MOV ESP,EBP
// 004ee159: POP EBP
// 004ee15a: POP EDI
// 004ee15b: POP ESI
// 004ee15c: POP EBX
// 004ee15d: RET
// 004ee15e: FLD float ptr [ECX]
//   Label: LAB_004ee15e
// 004ee160: FSUB float ptr [EDX + 0x4]
//   XREF to: 02da8728 (READ)
//   XREF to: 02da8750 (READ)
// 004ee163: FABS
// 004ee165: FCOMP double ptr [0x0062e442]
//   XREF to: 0062e442 (READ)
// 004ee16b: FNSTSW AX
// 004ee16d: SAHF
// 004ee16e: JA 0x004ee126
//   XREF to: 004ee126 (CONDITIONAL_JUMP)
// 004ee170: FLD float ptr [ECX + 0x8]
// 004ee173: FSUB float ptr [EDX + 0xc]
//   XREF to: 02da8730 (READ)
//   XREF to: 02da8758 (READ)
// 004ee176: FABS
// 004ee178: FCOMP double ptr [0x0062e442]
//   XREF to: 0062e442 (READ)
// 004ee17e: FNSTSW AX
// 004ee180: SAHF
// 004ee181: JA 0x004ee126
//   XREF to: 004ee126 (CONDITIONAL_JUMP)
// 004ee183: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ee186: MOV EDX,dword ptr [EDX + 0x10]
//   XREF to: 02da8734 (READ)
//   XREF to: 02da875c (READ)
// 004ee189: MOV dword ptr [ECX],EDX
// 004ee18b: MOV EDX,0x1
// 004ee190: JMP 0x004ee149
//   XREF to: 004ee149 (UNCONDITIONAL_JUMP)
// 004ee192: FLD float ptr [ECX + 0x4]
//   Label: LAB_004ee192
// 004ee195: FSUB float ptr [EDX + 0x8]
//   XREF to: 02d873e4 (READ)
//   XREF to: 02d87428 (READ)
// 004ee198: FABS
// 004ee19a: FCOMP double ptr [0x0062e43a]
//   XREF to: 0062e43a (READ)
// 004ee1a0: FNSTSW AX
// 004ee1a2: SAHF
// 004ee1a3: JA 0x004ee13f
//   XREF to: 004ee13f (CONDITIONAL_JUMP)
// 004ee1a5: FLD float ptr [ECX]
// 004ee1a7: FSUB float ptr [EDX + 0x4]
//   XREF to: 02d873e0 (READ)
//   XREF to: 02d87424 (READ)
// 004ee1aa: FABS
// 004ee1ac: FCOMP double ptr [0x0062e43a]
//   XREF to: 0062e43a (READ)
// 004ee1b2: FNSTSW AX
// 004ee1b4: SAHF
// 004ee1b5: JA 0x004ee13f
//   XREF to: 004ee13f (CONDITIONAL_JUMP)
// 004ee1b7: FLD float ptr [ECX + 0x8]
// 004ee1ba: FSUB float ptr [EDX + 0xc]
//   XREF to: 02d873e8 (READ)
//   XREF to: 02d8742c (READ)
// 004ee1bd: FABS
// 004ee1bf: FCOMP double ptr [0x0062e43a]
//   XREF to: 0062e43a (READ)
// 004ee1c5: FNSTSW AX
// 004ee1c7: SAHF
// 004ee1c8: JA 0x004ee13f
//   XREF to: 004ee13f (CONDITIONAL_JUMP)
// 004ee1ce: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ee1d1: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 02d873f0 (READ)
//   XREF to: 02d87434 (READ)
// 004ee1d4: MOV dword ptr [ECX],EDX
// 004ee1d6: MOV EDX,0x1
// 004ee1db: JMP 0x004ee149
//   XREF to: 004ee149 (UNCONDITIONAL_JUMP)
