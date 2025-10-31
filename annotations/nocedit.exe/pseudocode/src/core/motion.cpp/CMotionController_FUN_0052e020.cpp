// Name: core_motion.cpp_CMotionController_FUN_0052e020
// Address: 0052e020
// Address Range: [[0052e020, 0052e1cc]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionController_FUN_0052e020()
// Cross-references:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d91c [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063ab17
//   undefined4 DAT_0063ab1f

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_motion.cpp_CMotionController_FUN_0052e020(CMotionController* param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) */

undefined4 core_motion_cpp_CMotionController_FUN_0052e020(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  undefined4 *in_stack_00000014;
  float local_24;
  undefined4 local_20;
  
  bVar8 = 0;
  iVar4 = in_stack_00000008 * 0x54c + *in_stack_00000004 + 0x968;
  iVar5 = 0;
  fVar2 = *in_stack_00000010 * *(float *)(iVar4 + 0x20) + in_stack_0000000c;
  local_20 = 0;
  iVar3 = iVar4;
  local_24 = fVar2;
  if (0 < *(int *)(iVar4 + 0x4a4)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x4a8);
      if ((in_stack_0000000c <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)_DAT_0063ab1f))
      {
        local_20 = *(undefined4 *)(iVar3 + 0x4ac);
        local_24 = (float)iVar1 + (float)_DAT_0063ab1f;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar5 < *(int *)(iVar4 + 0x4a4));
  }
  if ((double)local_24 < (double)*(int *)(iVar4 + 0x28) + _DAT_0063ab17) {
    (**(code **)(in_stack_00000004[0x14] + 8))();
    in_stack_00000014[1] = 1;
    in_stack_00000014[5] = 0;
    in_stack_00000014[2] = in_stack_00000008;
    in_stack_00000014[3] = local_24;
    if (fVar2 <= (float)in_stack_00000014[3]) {
      return local_20;
    }
    fVar2 = (float)in_stack_00000014[3];
  }
  else {
    (**(code **)(in_stack_00000004[0x14] + 8))();
    puVar6 = (undefined4 *)(iVar4 + 0x2c);
    puVar7 = in_stack_00000014;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    iVar3 = in_stack_00000004[0xb];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 2)) {
      in_stack_00000014[2] = *(undefined4 *)(iVar3 + 8);
      in_stack_00000014[3] = *(undefined4 *)(in_stack_00000004[0xb] + 0xc);
    }
    fVar2 = (float)*(int *)(iVar4 + 0x28);
  }
  *in_stack_00000010 = (fVar2 - in_stack_0000000c) / *(float *)(iVar4 + 0x20);
  return local_20;
}


// Assembly code:
// 0052e020: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052e020
// 0052e021: PUSH ESI
// 0052e022: PUSH EDI
// 0052e023: PUSH EBP
// 0052e024: MOV EBP,ESP
// 0052e026: SUB ESP,0x1c
// 0052e029: AND ESP,0xfffffff8
// 0052e02c: IMUL EBX,dword ptr [EBP + 0x18],0x54c
//   XREF to: Stack[0x8] (READ)
// 0052e033: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e036: MOV EAX,dword ptr [EAX]
// 0052e038: ADD EAX,0x968
// 0052e03d: ADD EBX,EAX
// 0052e03f: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052e042: FLD float ptr [EAX]
// 0052e044: FMUL float ptr [EBX + 0x20]
// 0052e047: XOR ECX,ECX
// 0052e049: XOR ESI,ESI
// 0052e04b: FADD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052e04e: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0052e052: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 0052e056: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0052e05a: MOV EDI,dword ptr [EBX + 0x4a4]
// 0052e060: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052e064: TEST EDI,EDI
// 0052e066: JLE 0x0052e092
//   XREF to: 0052e092 (CONDITIONAL_JUMP)
// 0052e068: MOV ECX,EBX
// 0052e06a: FLD float ptr [EBP + 0x1c]
//   Label: LAB_0052e06a
//   XREF to: Stack[0xc] (READ)
// 0052e06d: FILD dword ptr [ECX + 0x4a8]
// 0052e073: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 0052e077: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0052e07b: FNSTSW AX
// 0052e07d: SAHF
// 0052e07e: JBE 0x0052e12e
//   XREF to: 0052e12e (CONDITIONAL_JUMP)
// 0052e084: INC ESI
//   Label: LAB_0052e084
// 0052e085: MOV EAX,dword ptr [EBX + 0x4a4]
// 0052e08b: ADD ECX,0x8
// 0052e08e: CMP ESI,EAX
// 0052e090: JL 0x0052e06a
//   XREF to: 0052e06a (CONDITIONAL_JUMP)
// 0052e092: FILD dword ptr [EBX + 0x28]
//   Label: LAB_0052e092
// 0052e095: FADD double ptr [0x0063ab17]
//   XREF to: 0063ab17 (READ)
// 0052e09b: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0052e09f: FCOMPP
// 0052e0a1: FNSTSW AX
// 0052e0a3: SAHF
// 0052e0a4: JC 0x0052e167
//   XREF to: 0052e167 (CONDITIONAL_JUMP)
// 0052e0aa: MOV ECX,dword ptr [EBX + 0x60]
// 0052e0ad: ADD ECX,dword ptr [EBX + 0x28]
// 0052e0b0: PUSH 0x3f800000
// 0052e0b5: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e0b9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e0bc: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0052e0c0: SUB ESP,0x4
// 0052e0c3: MOV EAX,dword ptr [EAX + 0x50]
// 0052e0c6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0052e0c9: FILD dword ptr [EBX + 0x60]
// 0052e0cc: FADD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052e0cf: SUB ESP,0x4
// 0052e0d2: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e0d5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0052e0d8: PUSH EDI
// 0052e0d9: CALL dword ptr [EAX + 0x8]
// 0052e0dc: MOV ECX,0x6
// 0052e0e1: ADD ESP,0x10
// 0052e0e4: LEA ESI,[EBX + 0x2c]
// 0052e0e7: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0052e0ea: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e0ed: MOVSD.REP ES:EDI,ESI
// 0052e0ef: MOV EDX,dword ptr [EAX + 0x2c]
// 0052e0f2: TEST EDX,EDX
// 0052e0f4: JZ 0x0052e115
//   XREF to: 0052e115 (CONDITIONAL_JUMP)
// 0052e0f6: MOV ESI,dword ptr [EDX + 0x4]
// 0052e0f9: MOV ECX,EDX
// 0052e0fb: CMP ESI,0x2
// 0052e0fe: JNZ 0x0052e115
//   XREF to: 0052e115 (CONDITIONAL_JUMP)
// 0052e100: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0052e103: MOV ECX,dword ptr [EDX + 0x8]
// 0052e106: MOV dword ptr [EAX + 0x8],ECX
// 0052e109: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e10c: MOV ECX,dword ptr [ECX + 0x2c]
// 0052e10f: MOV EDX,dword ptr [ECX + 0xc]
// 0052e112: MOV dword ptr [EAX + 0xc],EDX
// 0052e115: FILD dword ptr [EBX + 0x28]
//   Label: LAB_0052e115
// 0052e118: FSUB float ptr [EBP + 0x1c]
//   Label: LAB_0052e118
//   XREF to: Stack[0xc] (READ)
// 0052e11b: FDIV float ptr [EBX + 0x20]
// 0052e11e: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052e121: FSTP float ptr [EAX]
// 0052e123: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0052e123
// 0052e127: MOV ESP,EBP
// 0052e129: POP EBP
// 0052e12a: POP EDI
// 0052e12b: POP ESI
// 0052e12c: POP EBX
// 0052e12d: RET
// 0052e12e: FLD float ptr [ESP + 0xc]
//   Label: LAB_0052e12e
//   XREF to: Stack[-0x24] (READ)
// 0052e132: FADD double ptr [0x0063ab1f]
//   XREF to: 0063ab1f (READ)
// 0052e138: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0052e13c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0052e13f: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0052e142: FNSTSW AX
// 0052e144: SAHF
// 0052e145: JC 0x0052e084
//   XREF to: 0052e084 (CONDITIONAL_JUMP)
// 0052e14b: FLD double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0052e14e: MOV EAX,dword ptr [ECX + 0x4ac]
// 0052e154: FADD double ptr [0x0063ab1f]
//   XREF to: 0063ab1f (READ)
// 0052e15a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052e15e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 0052e162: JMP 0x0052e084
//   XREF to: 0052e084 (UNCONDITIONAL_JUMP)
// 0052e167: PUSH 0x3f800000
//   Label: LAB_0052e167
// 0052e16c: FILD dword ptr [EBX + 0x60]
// 0052e16f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e172: FLD ST0
// 0052e174: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0052e178: SUB ESP,0x4
// 0052e17b: MOV EAX,dword ptr [EAX + 0x50]
// 0052e17e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0052e181: FADD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052e184: SUB ESP,0x4
// 0052e187: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052e18a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0052e18d: PUSH EDX
// 0052e18e: CALL dword ptr [EAX + 0x8]
// 0052e191: ADD ESP,0x10
// 0052e194: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0052e197: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0052e19a: MOV dword ptr [EAX + 0x4],0x1
// 0052e1a1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052e1a4: MOV dword ptr [ECX + 0x14],0x0
// 0052e1ab: MOV dword ptr [ECX + 0x8],EAX
// 0052e1ae: MOV EAX,dword ptr [ESP + 0xc]
// 0052e1b2: MOV dword ptr [ECX + 0xc],EAX
// 0052e1b5: FLD float ptr [ECX + 0xc]
// 0052e1b8: FCOMP float ptr [ESP + 0x14]
// 0052e1bc: FNSTSW AX
// 0052e1be: SAHF
// 0052e1bf: JNC 0x0052e123
//   XREF to: 0052e123 (CONDITIONAL_JUMP)
// 0052e1c5: FLD float ptr [ECX + 0xc]
// 0052e1c8: JMP 0x0052e118
//   XREF to: 0052e118 (UNCONDITIONAL_JUMP)
