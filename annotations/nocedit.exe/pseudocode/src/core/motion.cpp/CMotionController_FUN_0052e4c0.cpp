// Name: core_motion.cpp_CMotionController_FUN_0052e4c0
// Address: 0052e4c0
// Address Range: [[0052e4c0, 0052e56f] [0052e571, 0052e5c0]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionController_FUN_0052e4c0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0 (0059e0a0) at 0059e0dd [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50 (0059eb50) at 0059eb92 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0ad0 (005a0ad0) at 005a0b06 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 core_motion.cpp_CMotionController_FUN_0052e4c0(CMotionController* param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4
   param_6) */

int core_motion_cpp_CMotionController_FUN_0052e4c0(void)

{
  float fVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  int *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  int *in_stack_00000010;
  int *in_stack_00000014;
  float *in_stack_00000018;
  
  iVar3 = in_stack_00000008 * 0x54c + *in_stack_00000004 + 0x968;
  if (in_stack_0000000c <= 0.0) {
    iVar3 = *(int *)(iVar3 + 0x60);
    *in_stack_00000010 = iVar3;
    *in_stack_00000014 = iVar3;
    *in_stack_00000018 = 0.0;
  }
  else {
    iVar2 = *(int *)(iVar3 + 100) + -1;
    fVar1 = (float)iVar2;
    if (fVar1 >= in_stack_0000000c && (fVar1 == in_stack_0000000c) == 0) {
      fVar5 = (float10)*(int *)(iVar3 + 0x60) + (float10)in_stack_0000000c;
      fVar4 = fVar5;
      dVar6 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44(iVar3,CONCAT22((short)((uint)iVar2 >> 0x10),
                                                         (ushort)(fVar1 < in_stack_0000000c) << 8 |
                                                         (ushort)(NAN(fVar1) ||
                                                                 NAN(in_stack_0000000c)) << 10 |
                                                         (ushort)(fVar1 == in_stack_0000000c) << 0xe
                                                        )));
      *extraout_ECX_00 = (int)ROUND(fVar5);
      *in_stack_00000014 = *extraout_ECX_00 + 1;
      *in_stack_00000018 = (float)(fVar4 - (float10)*extraout_ECX_00);
      return SUB84(dVar6,0);
    }
    *in_stack_00000010 = *(int *)(iVar3 + 0x60) + *(int *)(iVar3 + 100) + -1;
    if ((*(int *)(iVar3 + 0x28) < *(int *)(iVar3 + 100) + -1) || (*(int *)(iVar3 + 0x30) != 1)) {
      iVar3 = *in_stack_00000010;
      *in_stack_00000014 = iVar3;
      *in_stack_00000018 = 0.0;
      return iVar3;
    }
    iVar2 = *(int *)(iVar3 + 0x34) * 0x54c;
    fVar4 = (float10)*(int *)(*in_stack_00000004 + 0x9c8 + iVar2) +
            (float10)*(float *)(iVar3 + 0x38);
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,iVar2));
    *in_stack_00000014 = (int)ROUND(fVar4);
    iVar3 = *(int *)((int)((ulonglong)dVar6 >> 0x20) + 100) + -1;
    fVar1 = (float)in_stack_00000010 - (float)iVar3;
    *in_stack_00000018 = fVar1;
    iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     (ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 1.0) << 0xe);
    if (1.0 < fVar1 || (fVar1 == 1.0) != 0) {
      iVar3 = *in_stack_00000014;
      *extraout_ECX = iVar3;
      *in_stack_00000018 = 0.0;
    }
  }
  return iVar3;
}


// Assembly code:
// 0052e4c0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052e4c0
// 0052e4c1: PUSH ESI
// 0052e4c2: PUSH EDI
// 0052e4c3: PUSH EBP
// 0052e4c4: SUB ESP,0x8
// 0052e4c7: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052e4cb: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0052e4cf: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 0052e4d3: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 0052e4d7: IMUL EDX,dword ptr [ESP + 0x20],0x54c
//   XREF to: Stack[0x8] (READ)
// 0052e4df: MOV EAX,dword ptr [EDI]
// 0052e4e1: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0052e4e5: ADD EAX,0x968
// 0052e4ea: FLDZ
// 0052e4ec: ADD EDX,EAX
// 0052e4ee: FCOMPP
// 0052e4f0: FNSTSW AX
// 0052e4f2: SAHF
// 0052e4f3: JNC 0x0052e571
//   XREF to: 0052e571 (CONDITIONAL_JUMP)
// 0052e4f9: MOV EAX,dword ptr [EDX + 0x64]
// 0052e4fc: DEC EAX
// 0052e4fd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e501: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0052e505: FCOMP float ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0052e509: FNSTSW AX
// 0052e50b: SAHF
// 0052e50c: JA 0x0052e59e
//   XREF to: 0052e59e (CONDITIONAL_JUMP)
// 0052e512: MOV EBP,dword ptr [EDX + 0x64]
// 0052e515: MOV EAX,dword ptr [EDX + 0x60]
// 0052e518: ADD EAX,EBP
// 0052e51a: DEC EAX
// 0052e51b: MOV dword ptr [ECX],EAX
// 0052e51d: MOV EAX,dword ptr [EDX + 0x64]
// 0052e520: MOV EBP,dword ptr [EDX + 0x28]
// 0052e523: DEC EAX
// 0052e524: CMP EAX,EBP
// 0052e526: JG 0x0052e58c
//   XREF to: 0052e58c (CONDITIONAL_JUMP)
// 0052e528: CMP dword ptr [EDX + 0x30],0x1
// 0052e52c: JNZ 0x0052e58c
//   XREF to: 0052e58c (CONDITIONAL_JUMP)
// 0052e52e: IMUL EAX,dword ptr [EDX + 0x34],0x54c
// 0052e535: MOV EDI,dword ptr [EDI]
// 0052e537: FILD dword ptr [EDI + EAX*0x1 + 0x9c8]
// 0052e53e: FADD float ptr [EDX + 0x38]
// 0052e541: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052e546: FISTP dword ptr [ESI]
// 0052e548: MOV EAX,dword ptr [EDX + 0x64]
// 0052e54b: DEC EAX
// 0052e54c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e550: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0052e554: FSUBR float ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0052e558: FST float ptr [EBX]
// 0052e55a: FLD1
// 0052e55c: FCOMPP
// 0052e55e: FNSTSW AX
// 0052e560: SAHF
// 0052e561: JBE 0x0052e580
//   XREF to: 0052e580 (CONDITIONAL_JUMP)
// 0052e563: ADD ESP,0x8
//   Label: LAB_0052e563
// 0052e566: POP EBP
// 0052e567: POP EDI
// 0052e568: POP ESI
// 0052e569: POP EBX
// 0052e56a: LEA EAX,[EAX]
// 0052e571: MOV EAX,dword ptr [EDX + 0x60]
//   Label: LAB_0052e571
// 0052e574: MOV dword ptr [ECX],EAX
// 0052e576: MOV dword ptr [ESI],EAX
// 0052e578: MOV dword ptr [EBX],0x0
// 0052e57e: JMP 0x0052e563
//   XREF to: 0052e563 (UNCONDITIONAL_JUMP)
// 0052e580: MOV EAX,dword ptr [ESI]
//   Label: LAB_0052e580
// 0052e582: MOV dword ptr [ECX],EAX
// 0052e584: MOV dword ptr [EBX],0x0
// 0052e58a: JMP 0x0052e563
//   XREF to: 0052e563 (UNCONDITIONAL_JUMP)
// 0052e58c: MOV EAX,dword ptr [ECX]
//   Label: LAB_0052e58c
// 0052e58e: MOV dword ptr [ESI],EAX
// 0052e590: MOV dword ptr [EBX],0x0
// 0052e596: ADD ESP,0x8
// 0052e599: POP EBP
// 0052e59a: POP EDI
// 0052e59b: POP ESI
// 0052e59c: POP EBX
// 0052e59d: RET
// 0052e59e: FILD dword ptr [EDX + 0x60]
//   Label: LAB_0052e59e
// 0052e5a1: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0052e5a5: FLD ST0
// 0052e5a7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052e5ac: FISTP dword ptr [ECX]
// 0052e5ae: MOV EDX,dword ptr [ECX]
// 0052e5b0: INC EDX
// 0052e5b1: MOV dword ptr [ESI],EDX
// 0052e5b3: FILD dword ptr [ECX]
// 0052e5b5: FSUBP
// 0052e5b7: FSTP float ptr [EBX]
// 0052e5b9: ADD ESP,0x8
// 0052e5bc: POP EBP
// 0052e5bd: POP EDI
// 0052e5be: POP ESI
// 0052e5bf: POP EBX
// 0052e5c0: RET
