// Name: core_motion.cpp_CMotionController_FUN_0052e3a0
// Address: 0052e3a0
// Address Range: [[0052e3a0, 0052e4b7]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionController_FUN_0052e3a0()
// Cross-references:
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d51e0 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e68c0 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5eda [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005582c0 (005582c0) at 00558431 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf6cc [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfda9 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c03b3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 core_motion.cpp_CMotionController_FUN_0052e3a0(CMotionController* param_1,
   undefined4 param_2, undefined4 param_3) */

float core_motion_cpp_CMotionController_FUN_0052e3a0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  float local_14;
  
  iVar4 = in_stack_00000008 * 0x54c + *in_stack_00000004 + 0x968;
  if (0.0 < in_stack_0000000c) {
    iVar2 = *(int *)(iVar4 + 0x520) + 1;
    fVar1 = (float)iVar2;
    if (fVar1 < in_stack_0000000c || (fVar1 == in_stack_0000000c) != 0) {
      local_14 = (float)(*(int *)(iVar4 + 100) + -1);
    }
    else {
      fVar6 = (float10)in_stack_0000000c;
      fVar7 = fVar6;
      dVar8 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44(iVar4,CONCAT22((short)((uint)iVar2 >> 0x10),
                                                         (ushort)(fVar1 < in_stack_0000000c) << 8 |
                                                         (ushort)(NAN(fVar1) ||
                                                                 NAN(in_stack_0000000c)) << 10 |
                                                         (ushort)(fVar1 == in_stack_0000000c) << 0xe
                                                        )));
      iVar5 = (int)((ulonglong)dVar8 >> 0x20);
      iVar4 = (int)ROUND(fVar6);
      iVar2 = 0;
      if (0 < iVar4) {
        iVar2 = *(int *)(iVar5 + 0x520 + iVar4 * 4);
      }
      iVar3 = *(int *)(iVar5 + 100);
      if (iVar4 < *(int *)(iVar5 + 0x520)) {
        iVar3 = *(int *)(iVar5 + 0x524 + iVar4 * 4);
      }
      fVar1 = (float)iVar2 * (1.0 - (float)(fVar7 - (float10)iVar4)) +
              (float)iVar3 * (float)(fVar7 - (float10)iVar4);
      if (fVar1 < 0.0) {
        local_14 = 0.0;
      }
      else {
        local_14 = (float)(*(int *)(iVar5 + 100) + -1);
        if (fVar1 <= local_14) {
          return fVar1;
        }
      }
    }
  }
  return local_14;
}


// Assembly code:
// 0052e3a0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052e3a0
// 0052e3a1: PUSH EDI
// 0052e3a2: PUSH EBP
// 0052e3a3: MOV EBP,ESP
// 0052e3a5: SUB ESP,0x18
// 0052e3a8: AND ESP,0xfffffff8
// 0052e3ab: IMUL EDX,dword ptr [EBP + 0x14],0x54c
//   XREF to: Stack[0x8] (READ)
// 0052e3b2: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052e3b5: MOV EAX,dword ptr [EAX]
// 0052e3b7: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0052e3ba: ADD EAX,0x968
// 0052e3bf: FLDZ
// 0052e3c1: ADD EDX,EAX
// 0052e3c3: FCOMPP
// 0052e3c5: FNSTSW AX
// 0052e3c7: SAHF
// 0052e3c8: JNC 0x0052e488
//   XREF to: 0052e488 (CONDITIONAL_JUMP)
// 0052e3ce: MOV EAX,dword ptr [EDX + 0x520]
// 0052e3d4: INC EAX
// 0052e3d5: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e3d9: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e3dd: FCOMP float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0052e3e0: FNSTSW AX
// 0052e3e2: SAHF
// 0052e3e3: JBE 0x0052e490
//   XREF to: 0052e490 (CONDITIONAL_JUMP)
// 0052e3e9: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0052e3ec: FLD ST0
// 0052e3ee: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052e3f3: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0052e3f7: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052e3fb: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e3ff: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e403: FSUBP
// 0052e405: XOR EBX,EBX
// 0052e407: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052e40a: TEST EAX,EAX
// 0052e40c: JLE 0x0052e415
//   XREF to: 0052e415 (CONDITIONAL_JUMP)
// 0052e40e: MOV EBX,dword ptr [EDX + EAX*0x4 + 0x520]
// 0052e415: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0052e415
//   XREF to: Stack[-0x1c] (READ)
// 0052e419: MOV EDI,dword ptr [EDX + 0x520]
// 0052e41f: MOV ECX,dword ptr [EDX + 0x64]
// 0052e422: CMP EAX,EDI
// 0052e424: JGE 0x0052e42d
//   XREF to: 0052e42d (CONDITIONAL_JUMP)
// 0052e426: MOV ECX,dword ptr [EDX + EAX*0x4 + 0x524]
// 0052e42d: FLD float ptr [ESP]
//   Label: LAB_0052e42d
//   XREF to: Stack[-0x28] (DATA)
// 0052e430: FLD ST0
// 0052e432: FLD1
// 0052e434: FSUBRP
// 0052e436: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e43a: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e43e: FMULP
// 0052e440: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e444: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e448: FMULP ST2
// 0052e44a: FADDP
// 0052e44c: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 0052e450: FLDZ
// 0052e452: FCOMPP
// 0052e454: FNSTSW AX
// 0052e456: SAHF
// 0052e457: JA 0x0052e4a2
//   XREF to: 0052e4a2 (CONDITIONAL_JUMP)
// 0052e459: MOV EAX,dword ptr [EDX + 0x64]
// 0052e45c: DEC EAX
// 0052e45d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e461: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0052e465: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e469: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0052e46d: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0052e471: FNSTSW AX
// 0052e473: SAHF
// 0052e474: JBE 0x0052e4a6
//   XREF to: 0052e4a6 (CONDITIONAL_JUMP)
// 0052e476: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0052e47a: MOV dword ptr [ESP + 0x10],EAX
//   Label: LAB_0052e47a
//   XREF to: Stack[-0x18] (WRITE)
// 0052e47e: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0052e47e
//   XREF to: Stack[-0x18] (READ)
// 0052e482: MOV ESP,EBP
// 0052e484: POP EBP
// 0052e485: POP EDI
// 0052e486: POP EBX
// 0052e487: RET
// 0052e488: XOR EDX,EDX
//   Label: LAB_0052e488
// 0052e48a: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e48e: JMP 0x0052e47e
//   XREF to: 0052e47e (UNCONDITIONAL_JUMP)
// 0052e490: MOV EAX,dword ptr [EDX + 0x64]
//   Label: LAB_0052e490
// 0052e493: DEC EAX
// 0052e494: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e498: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052e49c: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 0052e4a0: JMP 0x0052e47e
//   XREF to: 0052e47e (UNCONDITIONAL_JUMP)
// 0052e4a2: XOR EAX,EAX
//   Label: LAB_0052e4a2
// 0052e4a4: JMP 0x0052e47a
//   XREF to: 0052e47a (UNCONDITIONAL_JUMP)
// 0052e4a6: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0052e4a6
//   XREF to: Stack[-0x24] (READ)
// 0052e4aa: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e4ae: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052e4b2: MOV ESP,EBP
// 0052e4b4: POP EBP
// 0052e4b5: POP EDI
// 0052e4b6: POP EBX
// 0052e4b7: RET
