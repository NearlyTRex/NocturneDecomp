// Name: shape_meshlod.cpp_FUN_00519480
// Address: 00519480
// Address Range: [[00519480, 0051967b]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00519480()
// Cross-references:
//   shape_meshlod.cpp_NeighboringFacesEdgesCheck_FUN_00518910 (00518910) at 0051897a [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006379e5 = 0.900000000000000

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00519480(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 shape_meshlod_cpp_FUN_00519480(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  piVar4 = (int *)(*(int *)(in_stack_00000004 + 0x48) + in_stack_00000008 * 0xf0);
  iVar6 = *(int *)(in_stack_00000004 + 4);
  iVar1 = iVar6 + in_stack_0000000c * 0x4c4;
  iVar5 = *piVar4 * 0x4c4;
  iVar7 = piVar4[1] * 0x4c4;
  local_24 = *(float *)(iVar5 + iVar6) - *(float *)(iVar7 + iVar6);
  local_20 = *(float *)(iVar5 + 4 + iVar6) - *(float *)(iVar7 + 4 + iVar6);
  local_1c = *(float *)(iVar5 + 8 + iVar6) - *(float *)(iVar7 + 8 + iVar6);
  fVar2 = SQRT(local_1c * local_1c + local_24 * local_24 + local_20 * local_20);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    local_24 = local_24 * fVar2;
    local_20 = local_20 * fVar2;
    local_1c = local_1c * fVar2;
  }
  else {
    local_20 = 0.0;
    local_24 = 0.0;
    local_1c = 0.0;
  }
  iVar5 = 0;
  iVar6 = iVar1;
  if (0 < *(int *)(iVar1 + 0x3f8)) {
    do {
      if (*(int *)(iVar6 + 0x3fc) != in_stack_00000008) {
        piVar4 = (int *)(*(int *)(iVar6 + 0x3fc) * 0xf0 + *(int *)(in_stack_00000004 + 0x48));
        if ((1 < piVar4[6]) || (1 < piVar4[7])) {
          return 1;
        }
        if ((piVar4[6] != 0) || (piVar4[7] != 0)) {
          iVar8 = piVar4[1] * 0x4c4;
          iVar3 = *piVar4 * 0x4c4;
          iVar7 = *(int *)(in_stack_00000004 + 4);
          local_30 = *(float *)(iVar7 + iVar3) - *(float *)(iVar8 + iVar7);
          local_2c = *(float *)(iVar7 + 4 + iVar3) - *(float *)(iVar8 + 4 + iVar7);
          local_28 = *(float *)(iVar7 + 8 + iVar3) - *(float *)(iVar8 + 8 + iVar7);
          fVar2 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c);
          if (fVar2 <= 0.0) {
            local_2c = 0.0;
            local_30 = 0.0;
            local_28 = 0.0;
          }
          else {
            fVar2 = 1.0 / fVar2;
            local_30 = local_30 * fVar2;
            local_2c = local_2c * fVar2;
            local_28 = local_28 * fVar2;
          }
          if (ABS(local_1c * local_28 + local_24 * local_30 + local_20 * local_2c) <
              (float)DOUBLE_006379e5) {
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(iVar1 + 0x3f8));
  }
  return 0;
}


// Assembly code:
// 00519480: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00519480
// 00519481: PUSH ESI
// 00519482: PUSH EDI
// 00519483: PUSH EBP
// 00519484: MOV EBP,ESP
// 00519486: SUB ESP,0x28
// 00519489: AND ESP,0xfffffff8
// 0051948c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051948f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00519492: SHL EAX,0x4
// 00519495: MOV EDX,EAX
// 00519497: SHL EAX,0x4
// 0051949a: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051949d: SUB EAX,EDX
// 0051949f: IMUL EDX,EBX,0x4c4
// 005194a5: MOV ECX,dword ptr [EDI + 0x48]
// 005194a8: ADD ECX,EAX
// 005194aa: MOV EAX,dword ptr [EDI + 0x4]
// 005194ad: LEA EBX,[EAX + EDX*0x1]
// 005194b0: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005194b4: MOV EBX,dword ptr [ECX]
// 005194b6: MOV ESI,dword ptr [ECX + 0x4]
// 005194b9: IMUL ECX,EBX,0x4c4
// 005194bf: IMUL EDX,ESI,0x4c4
// 005194c5: FLD float ptr [ECX + EAX*0x1]
// 005194c8: FSUB float ptr [EDX + EAX*0x1]
// 005194cb: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 005194cf: FLD float ptr [ECX + EAX*0x1 + 0x4]
// 005194d3: FSUB float ptr [EDX + EAX*0x1 + 0x4]
// 005194d7: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 005194db: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 005194df: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 005194e3: FMUL ST0
// 005194e5: FLD float ptr [ECX + EAX*0x1 + 0x8]
// 005194e9: FSUB float ptr [EDX + EAX*0x1 + 0x8]
// 005194ed: FXCH
// 005194ef: FADDP ST2,ST0
// 005194f1: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005194f5: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005194f9: FADDP
// 005194fb: FSQRT
// 005194fd: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 00519501: FLDZ
// 00519503: FCOMPP
// 00519505: FNSTSW AX
// 00519507: SAHF
// 00519508: JC 0x00519552
//   XREF to: 00519552 (CONDITIONAL_JUMP)
// 0051950a: XOR ESI,ESI
// 0051950c: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00519510: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00519514: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00519518: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00519518
//   XREF to: Stack[-0x14] (READ)
// 0051951c: MOV ECX,dword ptr [EAX + 0x3f8]
// 00519522: XOR EBX,EBX
// 00519524: TEST ECX,ECX
// 00519526: JLE 0x00519549
//   XREF to: 00519549 (CONDITIONAL_JUMP)
// 00519528: MOV ECX,EAX
// 0051952a: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_0051952a
//   XREF to: Stack[0x8] (READ)
// 0051952d: MOV EAX,dword ptr [ECX + 0x3fc]
// 00519533: CMP EAX,EDX
// 00519535: JNZ 0x0051957e
//   XREF to: 0051957e (CONDITIONAL_JUMP)
// 00519537: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00519537
//   XREF to: Stack[-0x14] (READ)
// 0051953b: INC EBX
// 0051953c: MOV ESI,dword ptr [EAX + 0x3f8]
// 00519542: ADD ECX,0x4
// 00519545: CMP EBX,ESI
// 00519547: JL 0x0051952a
//   XREF to: 0051952a (CONDITIONAL_JUMP)
// 00519549: XOR EAX,EAX
//   Label: LAB_00519549
// 0051954b: MOV ESP,EBP
// 0051954d: POP EBP
// 0051954e: POP EDI
// 0051954f: POP ESI
// 00519550: POP EBX
// 00519551: RET
// 00519552: FLD1
//   Label: LAB_00519552
// 00519554: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00519558: FXCH
// 0051955a: FDIV float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 0051955e: FXCH
// 00519560: FMUL ST1
// 00519562: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00519566: FMUL ST2
// 00519568: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0051956c: FMULP ST3
// 0051956e: FXCH
// 00519570: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00519574: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 00519578: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0051957c: JMP 0x00519518
//   XREF to: 00519518 (UNCONDITIONAL_JUMP)
// 0051957e: IMUL EAX,EAX,0xf0
//   Label: LAB_0051957e
// 00519584: MOV EDX,dword ptr [EDI + 0x48]
// 00519587: ADD EAX,EDX
// 00519589: MOV ESI,dword ptr [EAX + 0x18]
// 0051958c: CMP ESI,0x1
// 0051958f: JG 0x00519653
//   XREF to: 00519653 (CONDITIONAL_JUMP)
// 00519595: MOV EDX,dword ptr [EAX + 0x1c]
// 00519598: CMP EDX,0x1
// 0051959b: JG 0x00519653
//   XREF to: 00519653 (CONDITIONAL_JUMP)
// 005195a1: TEST ESI,ESI
// 005195a3: JZ 0x0051965f
//   XREF to: 0051965f (CONDITIONAL_JUMP)
// 005195a9: IMUL EDX,dword ptr [EAX + 0x4],0x4c4
//   Label: LAB_005195a9
// 005195b0: IMUL EAX,dword ptr [EAX],0x4c4
// 005195b6: MOV ESI,dword ptr [EDI + 0x4]
// 005195b9: FLD float ptr [ESI + EAX*0x1]
// 005195bc: FSUB float ptr [EDX + ESI*0x1]
// 005195bf: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 005195c3: FLD float ptr [ESI + EAX*0x1 + 0x4]
// 005195c7: FSUB float ptr [EDX + ESI*0x1 + 0x4]
// 005195cb: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 005195cf: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 005195d3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 005195d7: FMUL ST0
// 005195d9: FLD float ptr [ESI + EAX*0x1 + 0x8]
// 005195dd: FSUB float ptr [EDX + ESI*0x1 + 0x8]
// 005195e1: FXCH
// 005195e3: FADDP ST2,ST0
// 005195e5: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 005195e9: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 005195ed: FADDP
// 005195ef: FSQRT
// 005195f1: FST float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 005195f4: FLDZ
// 005195f6: FCOMPP
// 005195f8: FNSTSW AX
// 005195fa: SAHF
// 005195fb: JNC 0x0051966c
//   XREF to: 0051966c (CONDITIONAL_JUMP)
// 005195fd: FLD1
// 005195ff: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00519603: FXCH
// 00519605: FDIV float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00519608: FXCH
// 0051960a: FMUL ST1
// 0051960c: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 00519610: FMUL ST2
// 00519612: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00519616: FMULP ST3
// 00519618: FXCH
// 0051961a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0051961e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 00519622: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 00519626: FLD float ptr [ESP + 0x18]
//   Label: LAB_00519626
//   XREF to: Stack[-0x20] (READ)
// 0051962a: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0051962e: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00519632: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00519636: FADDP
// 00519638: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0051963c: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00519640: FADDP
// 00519642: FABS
// 00519644: FCOMP double ptr [0x006379e5]
//   XREF to: 006379e5 (READ)
// 0051964a: FNSTSW AX
// 0051964c: SAHF
// 0051964d: JNC 0x00519537
//   XREF to: 00519537 (CONDITIONAL_JUMP)
// 00519653: MOV EAX,0x1
//   Label: LAB_00519653
// 00519658: MOV ESP,EBP
// 0051965a: POP EBP
// 0051965b: POP EDI
// 0051965c: POP ESI
// 0051965d: POP EBX
// 0051965e: RET
// 0051965f: TEST EDX,EDX
//   Label: LAB_0051965f
// 00519661: JNZ 0x005195a9
//   XREF to: 005195a9 (CONDITIONAL_JUMP)
// 00519667: JMP 0x00519537
//   XREF to: 00519537 (UNCONDITIONAL_JUMP)
// 0051966c: XOR EAX,EAX
//   Label: LAB_0051966c
// 0051966e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00519672: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00519676: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0051967a: JMP 0x00519626
//   XREF to: 00519626 (UNCONDITIONAL_JUMP)
