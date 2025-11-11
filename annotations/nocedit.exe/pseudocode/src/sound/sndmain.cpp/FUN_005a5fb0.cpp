// Name: sound_sndmain.cpp_FUN_005a5fb0
// Address: 005a5fb0
// Address Range: [[005a5fb0, 005a60ea]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a5fb0()
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 (005a75e0) at 005a7cad [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064fcb7 = 4294967296
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double sound_sndmain_cpp_FUN_005a5fb0(void)

{
  int iVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  uint uVar8;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar10;
  bool bVar11;
  float10 in_ST0;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  int in_stack_00000004;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined8 local_34;
  
  if (0 < in_stack_00000020) {
    dVar14 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar13 = (float10)dVar14;
    local_34 = (double)CONCAT44(extraout_EDX,extraout_EAX);
    fVar12 = (float10)local_34;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    iVar10 = (uint)local_34;
    local_34 = (double)((longlong)ROUND(fVar12) & 0xffffffff);
    fVar12 = ((float10)_in_stack_00000010 - (float10)(longlong)local_34) * (float10)DOUBLE_0064fcb7;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),iVar10));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar12);
    uVar8 = (uint)local_34;
    crt_math_c_floor_FUN_005feb90((double)fVar13);
    local_34 = (double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
    fVar13 = (float10)local_34;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar13);
    iVar7 = (uint)local_34;
    local_34 = (double)((longlong)ROUND(fVar13) & 0xffffffff);
    fVar13 = ((float10)(double)CONCAT44(in_stack_0000001c,in_stack_00000018) -
             (float10)(longlong)local_34) * (float10)DOUBLE_0064fcb7;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),iVar7));
    local_34._0_4_ = (uint)(longlong)ROUND(fVar13);
    fVar3 = *in_stack_0000000c;
    fVar4 = in_stack_0000000c[1];
    iVar5 = in_stack_00000008[1];
    iVar6 = *in_stack_00000008;
    iVar9 = 0;
    do {
      sVar2 = *(short *)(in_stack_00000004 + iVar10 * 4);
      iVar1 = iVar10 * 4;
      bVar11 = CARRY4(uVar8,(uint)local_34);
      uVar8 = uVar8 + (uint)local_34;
      iVar10 = iVar10 + iVar7 + (uint)bVar11;
      *(float *)(iVar6 + iVar9 * 4) =
           (float)*(short *)(in_stack_00000004 + 2 + iVar1) * fVar3 + *(float *)(iVar6 + iVar9 * 4);
      *(float *)(iVar5 + iVar9 * 4) = (float)sVar2 * fVar4 + *(float *)(iVar5 + iVar9 * 4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < in_stack_00000020);
    _in_stack_00000010 =
         (double)in_stack_00000020 * (double)CONCAT44(in_stack_0000001c,in_stack_00000018) +
         _in_stack_00000010;
  }
  return _in_stack_00000010;
}


// Assembly code:
// 005a5fb0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a5fb0
// 005a5fb1: PUSH ESI
// 005a5fb2: PUSH EDI
// 005a5fb3: PUSH EBP
// 005a5fb4: MOV EBP,ESP
// 005a5fb6: SUB ESP,0x2c
// 005a5fb9: CMP dword ptr [EBP + 0x30],0x1
//   XREF to: Stack[0x20] (READ)
// 005a5fbd: JGE 0x005a5fd8
//   XREF to: 005a5fd8 (CONDITIONAL_JUMP)
// 005a5fbf: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_005a5fbf
//   XREF to: Stack[0x10] (READ)
// 005a5fc2: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005a5fc5: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a5fc8: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005a5fcb: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 005a5fce: MOV EDX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 005a5fd1: MOV ESP,EBP
// 005a5fd3: POP EBP
// 005a5fd4: POP EDI
// 005a5fd5: POP ESI
// 005a5fd6: POP EBX
// 005a5fd7: RET
// 005a5fd8: MOV ECX,dword ptr [EBP + 0x24]
//   Label: LAB_005a5fd8
//   XREF to: Stack[0x14] (READ)
// 005a5fdb: PUSH ECX
// 005a5fdc: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5fdf: PUSH EBX
// 005a5fe0: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a5fe5: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a5fe8: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a5feb: ADD ESP,0x8
// 005a5fee: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5ff1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a5ff6: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a5ff9: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a5ffc: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005a5fff: XOR ESI,ESI
// 005a6001: MOV dword ptr [EBP + -0x20],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005a6004: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 005a6007: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a600a: FILD qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a600d: FSUBR double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a6010: FMUL double ptr [0x0064fcb7]
//   XREF to: 0064fcb7 (READ)
// 005a6016: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a601b: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a601e: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a6021: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a6024: MOV EDI,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005a6027: PUSH EDI
// 005a6028: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a602b: PUSH EAX
// 005a602c: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a6031: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a6034: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a6037: ADD ESP,0x8
// 005a603a: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a603d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a6042: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a6045: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a6048: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a604b: MOV dword ptr [EBP + -0x20],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005a604e: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005a6051: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a6054: FILD qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a6057: FSUBR double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a605a: FMUL double ptr [0x0064fcb7]
//   XREF to: 0064fcb7 (READ)
// 005a6060: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a6065: FISTP qword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 005a6068: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005a606b: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a606e: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a6071: MOV EAX,dword ptr [EAX]
// 005a6073: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a6076: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a6079: MOV EAX,dword ptr [EAX + 0x4]
// 005a607c: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a607f: PUSHAD
// 005a6080: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a6086: MOV EDX,dword ptr [EDI + 0x4]
// 005a6089: MOV EDI,dword ptr [EDI]
// 005a608b: MOV ESI,dword ptr [EBP + 0xffffffe8]
//   XREF to: Stack[-0x28] (READ)
// 005a6091: MOV EAX,dword ptr [EBP + 0xffffffec]
//   XREF to: Stack[-0x24] (READ)
// 005a6097: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a609d: XOR ECX,ECX
// 005a609f: FILD word ptr [EBX + ESI*0x4]
//   Label: LAB_005a609f
// 005a60a2: FILD word ptr [EBX + ESI*0x4 + 0x2]
// 005a60a6: ADD EAX,dword ptr [EBP + 0xffffffe4]
//   XREF to: Stack[-0x2c] (READ)
// 005a60ac: ADC ESI,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 005a60b2: FMUL float ptr [EBP + 0xfffffffc]
//   XREF to: Stack[-0x14] (READ)
// 005a60b8: FADD float ptr [EDI + ECX*0x4]
// 005a60bb: FSTP float ptr [EDI + ECX*0x4]
// 005a60be: FMUL float ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 005a60c4: FADD float ptr [EDX + ECX*0x4]
// 005a60c7: FSTP float ptr [EDX + ECX*0x4]
// 005a60ca: INC ECX
// 005a60cb: CMP ECX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 005a60d1: JL 0x005a609f
//   XREF to: 005a609f (CONDITIONAL_JUMP)
// 005a60d3: POPAD
// 005a60d4: MOV EAX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 005a60d7: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a60da: FILD dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 005a60dd: FMUL double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005a60e0: FADD double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a60e3: FSTP double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (WRITE)
// 005a60e6: JMP 0x005a5fbf
//   XREF to: 005a5fbf (UNCONDITIONAL_JUMP)
