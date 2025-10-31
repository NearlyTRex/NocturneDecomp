// Name: core_fire.cpp_CFireEffect_FUN_004c90c0
// Address: 004c90c0
// Address Range: [[004c90c0, 004c91d6]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c90c0(CFireEffect * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 00413336 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062a0bb = 8
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c9060
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c90c0(CFireEffect *this_ptr)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  float10 fVar4;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  
  fVar4 = (float10)1 +
          (SQRT((float10)(in_stack_0000000c[2] - in_stack_00000008[2]) *
                (float10)(in_stack_0000000c[2] - in_stack_00000008[2]) +
                (float10)(*in_stack_0000000c - *in_stack_00000008) *
                (float10)(*in_stack_0000000c - *in_stack_00000008) +
                ((float10)in_stack_0000000c[1] - (float10)in_stack_00000008[1]) *
                (float10)(float)((float10)in_stack_0000000c[1] - (float10)in_stack_00000008[1])) *
          (float10)DOUBLE_0062a0bb) / (float10)in_stack_00000010;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_stack_00000008[2]));
  iVar1 = (int)ROUND(fVar4);
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < iVar1) {
    do {
      core_fire_cpp_CFireEffect_FUN_004c9060(this_ptr);
      iVar3 = iVar3 + 1;
      iVar2 = extraout_EAX;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}


// Assembly code:
// 004c90c0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c90c0
// 004c90c1: PUSH ESI
// 004c90c2: PUSH EDI
// 004c90c3: PUSH EBP
// 004c90c4: MOV EBP,ESP
// 004c90c6: SUB ESP,0x24
// 004c90c9: AND ESP,0xfffffff8
// 004c90cc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c90cf: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c90d2: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c90d5: MOV ESI,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 004c90d8: FLD float ptr [EAX]
// 004c90da: FSUB float ptr [EBX]
// 004c90dc: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 004c90e0: FLD float ptr [EAX + 0x4]
// 004c90e3: FSUB float ptr [EBX + 0x4]
// 004c90e6: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 004c90ea: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 004c90ee: FLD float ptr [EAX + 0x8]
// 004c90f1: FSUB float ptr [EBX + 0x8]
// 004c90f4: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 004c90f8: FXCH
// 004c90fa: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 004c90fe: MOV EAX,dword ptr [EBX]
// 004c9100: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 004c9104: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004c9108: LEA EAX,[EBX + 0x4]
// 004c910b: FADDP
// 004c910d: MOV EAX,dword ptr [EAX]
// 004c910f: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004c9113: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004c9117: LEA EAX,[EBX + 0x8]
// 004c911a: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004c911e: MOV EAX,dword ptr [EAX]
// 004c9120: FADDP
// 004c9122: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004c9126: FSQRT
// 004c9128: FMUL double ptr [0x0062a0bb]
//   XREF to: 0062a0bb (READ)
// 004c912e: FDIV float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c9131: FLD1
// 004c9133: FADDP
// 004c9135: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c913a: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 004c913d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 004c9140: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004c9144: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 004c9148: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 004c914c: FLD1
// 004c914e: FDIVRP
// 004c9150: FXCH
// 004c9152: FMUL ST1
// 004c9154: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 004c9158: FMUL ST2
// 004c915a: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004c915e: FMULP ST3
// 004c9160: XOR EBX,EBX
// 004c9162: FXCH
// 004c9164: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 004c9168: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 004c916c: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 004c9170: TEST EAX,EAX
// 004c9172: JLE 0x004c91d0
//   XREF to: 004c91d0 (CONDITIONAL_JUMP)
// 004c9174: PUSH ESI
//   Label: LAB_004c9174
// 004c9175: PUSH dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004c9178: PUSH dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c917b: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x34] (DATA)
// 004c917f: PUSH dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c9182: PUSH EAX
// 004c9183: PUSH EDI
// 004c9184: CALL core_fire.cpp_CFireEffect_FUN_004c9060
//   XREF to: 004c9060 (UNCONDITIONAL_CALL)
// 004c9189: ADD ESP,0x18
// 004c918c: INC EBX
// 004c918d: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 004c9191: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 004c9195: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 004c9199: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 004c919c: FXCH ST2
// 004c919e: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 004c91a2: FXCH
// 004c91a4: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 004c91a8: FXCH ST2
// 004c91aa: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 004c91ae: FXCH
// 004c91b0: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 004c91b4: FXCH
// 004c91b6: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 004c91ba: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 004c91be: CMP EBX,ECX
// 004c91c0: JL 0x004c9174
//   XREF to: 004c9174 (CONDITIONAL_JUMP)
// 004c91c2: LEA EAX,[EAX]
// 004c91c8: LEA EDX,[EDX]
// 004c91ce: MOV EAX,EAX
// 004c91d0: MOV ESP,EBP
//   Label: LAB_004c91d0
// 004c91d2: POP EBP
// 004c91d3: POP EDI
// 004c91d4: POP ESI
// 004c91d5: POP EBX
// 004c91d6: RET
