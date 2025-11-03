// Name: core_stranger.cpp_CStranger_FUN_005bf800
// Address: 005bf800
// Address Range: [[005bf800, 005bfb09]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bf800()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc110 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0065389c = 10
//   double DOUBLE_006538a4 = 0.200000000000000
//   double DOUBLE_006538ac = 0.5
//   double DOUBLE_006538b4 = 0.318309886192889
//   double DOUBLE_006538bc = 0.00100000000000000
//   undefined4 DAT_03f6bb1c
//   undefined4 DAT_03f6bb20
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dd20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005bf800(CStranger* param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005bf800(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_30;
  
  *(undefined4 *)(in_stack_00000004 + 0x1fc80) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x1fc7c) = *(undefined4 *)(in_stack_00000004 + 0x1fc80);
  *(undefined4 *)(in_stack_00000004 + 0x1fc78) = *(undefined4 *)(in_stack_00000004 + 0x1fc7c);
  fVar3 = core_motion_cpp_CMotionController_FUN_0052dd20
                    ((CMotionController *)(in_stack_00000004 + 0x158));
  if ((fVar3 <= 0.0) || (1.0 <= *(float *)(in_stack_00000004 + 0x1fc54))) {
    *(undefined4 *)(in_stack_00000004 + 0x1fc50) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x1fc84) = 0xffffffff;
    *(undefined4 *)(in_stack_00000004 + 0x1fc58) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x1fc5c) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x1fc54) = 0;
    return;
  }
  if (fVar3 < 1.0) {
    fVar3 = (1.0 - fVar3) * in_stack_00000008 * (float)DOUBLE_0065389c;
    if (fVar3 <= ABS(*(float *)(in_stack_00000004 + 0x1fc50))) {
      if (0.0 <= *(float *)(in_stack_00000004 + 0x1fc50)) {
        *(float *)(in_stack_00000004 + 0x1fc50) = *(float *)(in_stack_00000004 + 0x1fc50) - fVar3;
      }
      else {
        *(float *)(in_stack_00000004 + 0x1fc50) = *(float *)(in_stack_00000004 + 0x1fc50) + fVar3;
      }
    }
    else {
      *(undefined4 *)(in_stack_00000004 + 0x1fc50) = 0;
    }
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x1fc84);
  *(undefined4 *)(in_stack_00000004 + 0x1fc84) = DAT_03f6bb1c;
  if (*(float *)(in_stack_00000004 + 0x1fc50) < 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x1fc84) = DAT_03f6bb20;
  }
  if (*(float *)(in_stack_00000004 + 0x1fc54) <= (float)DOUBLE_006538a4) {
    *(undefined4 *)(in_stack_00000004 + 0x1fc5c) = 0;
  }
  else {
    *(float *)(in_stack_00000004 + 0x1fc5c) =
         *(float *)(in_stack_00000004 + 0x1fc5c) + in_stack_00000008;
  }
  if ((*(float *)(in_stack_00000004 + 0x1fc58) <= 0.0) &&
     (((float)DOUBLE_006538ac <= *(float *)(in_stack_00000004 + 0x1fc54) ||
      (1.0 < *(float *)(in_stack_00000004 + 0x1fc5c))))) {
    *(float *)(in_stack_00000004 + 0x1fc58) = (1.0 - *(float *)(in_stack_00000004 + 0x1fc54)) * 1.6;
  }
  if (*(float *)(in_stack_00000004 + 0x1fc58) <= 0.0) {
    local_30 = ABS(*(float *)(in_stack_00000004 + 0x1fc50) * (float)DOUBLE_006538b4);
    if (iVar1 != *(int *)(in_stack_00000004 + 0x1fc84)) {
      local_30 = 0.0;
    }
    if (1.0 < local_30) {
      local_30 = 1.0;
    }
    fVar3 = (local_30 - *(float *)(in_stack_00000004 + 0x1fc54)) +
            *(float *)(in_stack_00000004 + 0x1fc54);
    *(float *)(in_stack_00000004 + 0x1fc54) = fVar3;
    if ((float)DOUBLE_006538bc < fVar3) {
      *(int *)(in_stack_00000004 + 0x1fc84) = iVar1;
      return;
    }
  }
  else {
    fVar3 = *(float *)(in_stack_00000004 + 0x1fc58);
    fVar2 = fVar3 - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x1fc58) = fVar2;
    if (0.0 < fVar2) {
      in_stack_00000008 = in_stack_00000008 / fVar3;
    }
    else {
      in_stack_00000008 = 1.0 - *(float *)(in_stack_00000004 + 0x1fc54);
      *(undefined4 *)(in_stack_00000004 + 0x1fc58) = 0;
    }
    fVar3 = *(float *)(in_stack_00000004 + 0x1fc54);
    fVar2 = fVar3 + in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x1fc54) = fVar2;
    if (fVar2 < 1.0) {
      *(float *)(in_stack_00000004 + 0x1fc50) =
           *(float *)(in_stack_00000004 + 0x1fc50) -
           (*(float *)(in_stack_00000004 + 0x1fc50) * in_stack_00000008) / (1.0 - fVar3);
      return;
    }
    *(undefined4 *)(in_stack_00000004 + 0x1fc50) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x1fc58) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x1fc5c) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x1fc54) = 0x3f800000;
  }
  return;
}


// Assembly code:
// 005bf800: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005bf800
// 005bf801: PUSH ESI
// 005bf802: PUSH EDI
// 005bf803: PUSH EBP
// 005bf804: MOV EBP,ESP
// 005bf806: SUB ESP,0x34
// 005bf809: AND ESP,0xfffffff8
// 005bf80c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005bf80f: LEA EAX,[EBX + 0x1fc78]
// 005bf815: MOV dword ptr [EAX + 0x8],0x0
// 005bf81c: PUSH 0x0
// 005bf81e: MOV EDX,dword ptr [EAX + 0x8]
// 005bf821: MOV dword ptr [EAX + 0x4],EDX
// 005bf824: MOV EDX,dword ptr [EAX + 0x4]
// 005bf827: MOV dword ptr [EAX],EDX
// 005bf829: LEA EAX,[EBX + 0x158]
// 005bf82f: PUSH EAX
// 005bf830: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005bf835: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005bf839: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 005bf83d: ADD ESP,0x8
// 005bf840: FLDZ
// 005bf842: FXCH
// 005bf844: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005bf847: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005bf84a: FNSTSW AX
// 005bf84c: SAHF
// 005bf84d: JNC 0x005bf9a5
//   XREF to: 005bf9a5 (CONDITIONAL_JUMP)
// 005bf853: FLD float ptr [EBX + 0x1fc54]
// 005bf859: FLD1
// 005bf85b: FCOMPP
// 005bf85d: FNSTSW AX
// 005bf85f: SAHF
// 005bf860: JBE 0x005bf9a5
//   XREF to: 005bf9a5 (CONDITIONAL_JUMP)
// 005bf866: FLD1
// 005bf868: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005bf86b: FNSTSW AX
// 005bf86d: SAHF
// 005bf86e: JA 0x005bf9de
//   XREF to: 005bf9de (CONDITIONAL_JUMP)
// 005bf874: MOV EAX,[0x03f6bb1c]
//   Label: LAB_005bf874
//   XREF to: 03f6bb1c (READ)
// 005bf879: MOV EDX,dword ptr [EBX + 0x1fc84]
// 005bf87f: MOV dword ptr [EBX + 0x1fc84],EAX
// 005bf885: FLDZ
// 005bf887: FCOMP float ptr [EBX + 0x1fc50]
// 005bf88d: FNSTSW AX
// 005bf88f: SAHF
// 005bf890: JBE 0x005bf89d
//   XREF to: 005bf89d (CONDITIONAL_JUMP)
// 005bf892: MOV EAX,[0x03f6bb20]
//   XREF to: 03f6bb20 (READ)
// 005bf897: MOV dword ptr [EBX + 0x1fc84],EAX
// 005bf89d: MOV ECX,0x3fcccccd
//   Label: LAB_005bf89d
// 005bf8a2: FLD float ptr [EBX + 0x1fc54]
// 005bf8a8: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005bf8ac: FCOMP double ptr [0x006538a4]
//   XREF to: 006538a4 (READ)
// 005bf8b2: FNSTSW AX
// 005bf8b4: SAHF
// 005bf8b5: JBE 0x005bfa47
//   XREF to: 005bfa47 (CONDITIONAL_JUMP)
// 005bf8bb: FLD float ptr [EBX + 0x1fc5c]
// 005bf8c1: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bf8c4: FSTP float ptr [EBX + 0x1fc5c]
// 005bf8ca: FLD float ptr [EBX + 0x1fc58]
//   Label: LAB_005bf8ca
// 005bf8d0: FLDZ
// 005bf8d2: FCOMPP
// 005bf8d4: FNSTSW AX
// 005bf8d6: SAHF
// 005bf8d7: JC 0x005bf902
//   XREF to: 005bf902 (CONDITIONAL_JUMP)
// 005bf8d9: FLD float ptr [EBX + 0x1fc54]
// 005bf8df: FCOMP double ptr [0x006538ac]
//   XREF to: 006538ac (READ)
// 005bf8e5: FNSTSW AX
// 005bf8e7: SAHF
// 005bf8e8: JC 0x005bfa56
//   XREF to: 005bfa56 (CONDITIONAL_JUMP)
// 005bf8ee: FLD float ptr [EBX + 0x1fc54]
//   Label: LAB_005bf8ee
// 005bf8f4: FLD1
// 005bf8f6: FSUBRP
// 005bf8f8: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 005bf8fc: FSTP float ptr [EBX + 0x1fc58]
// 005bf902: FLD float ptr [EBX + 0x1fc58]
//   Label: LAB_005bf902
// 005bf908: FLDZ
// 005bf90a: FCOMPP
// 005bf90c: FNSTSW AX
// 005bf90e: SAHF
// 005bf90f: JNC 0x005bfaa1
//   XREF to: 005bfaa1 (CONDITIONAL_JUMP)
// 005bf915: MOV EAX,dword ptr [EBX + 0x1fc58]
// 005bf91b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005bf91f: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005bf923: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bf926: FST float ptr [EBX + 0x1fc58]
// 005bf92c: FLDZ
// 005bf92e: FCOMPP
// 005bf930: FNSTSW AX
// 005bf932: SAHF
// 005bf933: JC 0x005bfa6e
//   XREF to: 005bfa6e (CONDITIONAL_JUMP)
// 005bf939: FLD float ptr [EBX + 0x1fc54]
// 005bf93f: FLD1
// 005bf941: FSUBRP
// 005bf943: MOV dword ptr [EBX + 0x1fc58],0x0
// 005bf94d: FSTP float ptr [ESP + 0x2c]
//   Label: LAB_005bf94d
//   XREF to: Stack[-0x1c] (WRITE)
// 005bf951: MOV EAX,dword ptr [EBX + 0x1fc54]
// 005bf957: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005bf95b: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 005bf95f: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 005bf963: FST float ptr [EBX + 0x1fc54]
// 005bf969: FLD1
// 005bf96b: FCOMPP
// 005bf96d: FNSTSW AX
// 005bf96f: SAHF
// 005bf970: JA 0x005bfa7a
//   XREF to: 005bfa7a (CONDITIONAL_JUMP)
// 005bf976: MOV dword ptr [EBX + 0x1fc50],0x0
// 005bf980: MOV dword ptr [EBX + 0x1fc58],0x0
// 005bf98a: MOV dword ptr [EBX + 0x1fc5c],0x0
// 005bf994: MOV dword ptr [EBX + 0x1fc54],0x3f800000
// 005bf99e: MOV ESP,EBP
//   Label: LAB_005bf99e
// 005bf9a0: POP EBP
// 005bf9a1: POP EDI
// 005bf9a2: POP ESI
// 005bf9a3: POP EBX
// 005bf9a4: RET
// 005bf9a5: MOV dword ptr [EBX + 0x1fc50],0x0
//   Label: LAB_005bf9a5
// 005bf9af: MOV dword ptr [EBX + 0x1fc84],0xffffffff
// 005bf9b9: MOV dword ptr [EBX + 0x1fc58],0x0
// 005bf9c3: MOV dword ptr [EBX + 0x1fc5c],0x0
// 005bf9cd: MOV dword ptr [EBX + 0x1fc54],0x0
// 005bf9d7: MOV ESP,EBP
// 005bf9d9: POP EBP
// 005bf9da: POP EDI
// 005bf9db: POP ESI
// 005bf9dc: POP EBX
// 005bf9dd: RET
// 005bf9de: FLD float ptr [EBX + 0x1fc50]
//   Label: LAB_005bf9de
// 005bf9e4: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 005bf9e8: FABS
// 005bf9ea: FLD1
// 005bf9ec: FSUB double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005bf9ef: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005bf9f2: FMUL double ptr [0x0065389c]
//   XREF to: 0065389c (READ)
// 005bf9f8: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (WRITE)
// 005bf9fc: FCOMPP
// 005bf9fe: FNSTSW AX
// 005bfa00: SAHF
// 005bfa01: JBE 0x005bfa12
//   XREF to: 005bfa12 (CONDITIONAL_JUMP)
// 005bfa03: MOV dword ptr [EBX + 0x1fc50],0x0
// 005bfa0d: JMP 0x005bf874
//   XREF to: 005bf874 (UNCONDITIONAL_JUMP)
// 005bfa12: FLDZ
//   Label: LAB_005bfa12
// 005bfa14: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 005bfa18: FNSTSW AX
// 005bfa1a: SAHF
// 005bfa1b: JBE 0x005bfa32
//   XREF to: 005bfa32 (CONDITIONAL_JUMP)
// 005bfa1d: FLD float ptr [EBX + 0x1fc50]
// 005bfa23: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005bfa27: FSTP float ptr [EBX + 0x1fc50]
// 005bfa2d: JMP 0x005bf874
//   XREF to: 005bf874 (UNCONDITIONAL_JUMP)
// 005bfa32: FLD float ptr [EBX + 0x1fc50]
//   Label: LAB_005bfa32
// 005bfa38: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005bfa3c: FSTP float ptr [EBX + 0x1fc50]
// 005bfa42: JMP 0x005bf874
//   XREF to: 005bf874 (UNCONDITIONAL_JUMP)
// 005bfa47: MOV dword ptr [EBX + 0x1fc5c],0x0
//   Label: LAB_005bfa47
// 005bfa51: JMP 0x005bf8ca
//   XREF to: 005bf8ca (UNCONDITIONAL_JUMP)
// 005bfa56: FLD float ptr [EBX + 0x1fc5c]
//   Label: LAB_005bfa56
// 005bfa5c: FLD1
// 005bfa5e: FCOMPP
// 005bfa60: FNSTSW AX
// 005bfa62: SAHF
// 005bfa63: JC 0x005bf8ee
//   XREF to: 005bf8ee (CONDITIONAL_JUMP)
// 005bfa69: JMP 0x005bf902
//   XREF to: 005bf902 (UNCONDITIONAL_JUMP)
// 005bfa6e: FLD float ptr [EBP + 0x18]
//   Label: LAB_005bfa6e
//   XREF to: Stack[0x8] (READ)
// 005bfa71: FDIV float ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005bfa75: JMP 0x005bf94d
//   XREF to: 005bf94d (UNCONDITIONAL_JUMP)
// 005bfa7a: FLD float ptr [EBX + 0x1fc50]
//   Label: LAB_005bfa7a
// 005bfa80: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 005bfa84: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 005bfa88: FLD1
// 005bfa8a: FSUBRP
// 005bfa8c: FDIVP
// 005bfa8e: FSUBR float ptr [EBX + 0x1fc50]
// 005bfa94: FSTP float ptr [EBX + 0x1fc50]
// 005bfa9a: MOV ESP,EBP
// 005bfa9c: POP EBP
// 005bfa9d: POP EDI
// 005bfa9e: POP ESI
// 005bfa9f: POP EBX
// 005bfaa0: RET
// 005bfaa1: FLD float ptr [EBX + 0x1fc50]
//   Label: LAB_005bfaa1
// 005bfaa7: FMUL double ptr [0x006538b4]
//   XREF to: 006538b4 (READ)
// 005bfaad: FABS
// 005bfaaf: MOV ESI,dword ptr [EBX + 0x1fc84]
// 005bfab5: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (WRITE)
// 005bfab9: CMP EDX,ESI
// 005bfabb: JZ 0x005bfac3
//   XREF to: 005bfac3 (CONDITIONAL_JUMP)
// 005bfabd: XOR EDI,EDI
// 005bfabf: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005bfac3: FLD float ptr [ESP + 0x14]
//   Label: LAB_005bfac3
//   XREF to: Stack[-0x34] (READ)
// 005bfac7: FLD1
// 005bfac9: FCOMPP
// 005bfacb: FNSTSW AX
// 005bfacd: SAHF
// 005bface: JNC 0x005bfad8
//   XREF to: 005bfad8 (CONDITIONAL_JUMP)
// 005bfad0: MOV dword ptr [ESP + 0x14],0x3f800000
//   XREF to: Stack[-0x34] (WRITE)
// 005bfad8: FLD float ptr [ESP + 0x14]
//   Label: LAB_005bfad8
//   XREF to: Stack[-0x34] (READ)
// 005bfadc: FSUB float ptr [EBX + 0x1fc54]
// 005bfae2: FADD float ptr [EBX + 0x1fc54]
// 005bfae8: FST float ptr [EBX + 0x1fc54]
// 005bfaee: FCOMP double ptr [0x006538bc]
//   XREF to: 006538bc (READ)
// 005bfaf4: FNSTSW AX
// 005bfaf6: SAHF
// 005bfaf7: JBE 0x005bf99e
//   XREF to: 005bf99e (CONDITIONAL_JUMP)
// 005bfafd: MOV dword ptr [EBX + 0x1fc84],EDX
// 005bfb03: MOV ESP,EBP
// 005bfb05: POP EBP
// 005bfb06: POP EDI
// 005bfb07: POP ESI
// 005bfb08: POP EBX
// 005bfb09: RET
