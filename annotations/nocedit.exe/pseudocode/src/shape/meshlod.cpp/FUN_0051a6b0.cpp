// Name: shape_meshlod.cpp_FUN_0051a6b0
// Address: 0051a6b0
// Address Range: [[0051a6b0, 0051a766] [0051a882, 0051a8bd]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a6b0()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a300 (0051a300) at 0051a370 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_shape_meshlod.cpp_FUN_0051a7ff_0051a6a0 = 0051a7ff
//   void* PTR_shape_meshlod.cpp_FUN_0051a83f_0051a6a8 = 0051a83f
//   TerminatedCString s_shape_meshlod_cpp_00637abc
//   TerminatedCString s_anon_00637ad1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_meshlod.cpp_FUN_00518870

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051a6b0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

float * shape_meshlod_cpp_FUN_0051a6b0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  byte bVar6;
  float *pfVar7;
  float *pfVar8;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  
  iVar4 = *(int *)(in_stack_00000004 + 4);
  pfVar7 = (float *)(*(int *)(in_stack_00000010 + 0x10) * 0x4c4 + iVar4);
  pfVar1 = (float *)(iVar4 + *(int *)(in_stack_00000010 + 0x14) * 0x4c4);
  pfVar8 = (float *)(iVar4 + *(int *)(in_stack_00000010 + 0x18) * 0x4c4);
  bVar6 = *(float *)(in_stack_00000010 + 0x78) <
          in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x5c) +
          *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x54) +
          in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 0x58);
  if (*(float *)(in_stack_00000010 + 0x7c) <
      in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x68) +
      *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x60) +
      in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 100)) {
    bVar6 = bVar6 | 2;
  }
  if (*(float *)(in_stack_00000010 + 0x80) <
      in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x74) +
      *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x6c) +
      in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 0x70)) {
    bVar6 = bVar6 | 4;
  }
  switch(bVar6) {
  case 0:
    fVar5 = *(float *)(in_stack_00000010 + 0x50) -
            (in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x4c) +
            *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x44) +
            in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 0x48));
    fVar2 = *(float *)(in_stack_00000010 + 0x48);
    fVar3 = *(float *)(in_stack_00000010 + 0x4c);
    *in_stack_00000008 = *in_stack_0000000c - *(float *)(in_stack_00000010 + 0x44) * fVar5;
    in_stack_00000008[1] = in_stack_0000000c[1] - fVar2 * fVar5;
    in_stack_00000008[2] = in_stack_0000000c[2] - fVar3 * fVar5;
    return in_stack_00000008;
  case 1:
    shape_meshlod_cpp_FUN_00514f90();
    return in_stack_00000008;
  case 2:
    shape_meshlod_cpp_FUN_00514f90();
    return in_stack_00000008;
  case 3:
    *in_stack_00000008 = *pfVar1;
    in_stack_00000008[1] = pfVar1[1];
    in_stack_00000008[2] = pfVar1[2];
    return in_stack_00000008;
  case 4:
    shape_meshlod_cpp_FUN_00514f90();
    return in_stack_00000008;
  case 5:
    *in_stack_00000008 = *pfVar7;
    in_stack_00000008[1] = pfVar7[1];
    in_stack_00000008[2] = pfVar7[2];
    return in_stack_00000008;
  case 6:
    *in_stack_00000008 = *pfVar8;
    in_stack_00000008[1] = pfVar8[1];
    in_stack_00000008[2] = pfVar8[2];
    return in_stack_00000008;
  default:
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xf22;
    core_main_c_displayErrorAndQuit_FUN_00506f10("!");
    shape_meshlod_cpp_FUN_00518870();
    return in_stack_00000008;
  }
}


// Assembly code:
// 0051a6b0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051a6b0
// 0051a6b1: PUSH ESI
// 0051a6b2: PUSH EDI
// 0051a6b3: PUSH EBP
// 0051a6b4: SUB ESP,0x14
// 0051a6b7: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0051a6bb: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0051a6bf: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 0051a6c3: IMUL EBP,dword ptr [ESI + 0x10],0x4c4
// 0051a6ca: IMUL ECX,dword ptr [ESI + 0x14],0x4c4
// 0051a6d1: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0051a6d5: MOV EDI,dword ptr [EDI + 0x4]
// 0051a6d8: ADD EBP,EDI
// 0051a6da: LEA EAX,[EDI + ECX*0x1]
// 0051a6dd: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051a6e1: IMUL ECX,dword ptr [ESI + 0x18],0x4c4
// 0051a6e8: LEA EAX,[ESI + 0x54]
// 0051a6eb: FLD float ptr [EDX + 0x4]
// 0051a6ee: FMUL float ptr [EAX + 0x4]
// 0051a6f1: FLD float ptr [EDX]
// 0051a6f3: FMUL float ptr [EAX]
// 0051a6f5: FADDP
// 0051a6f7: FLD float ptr [EDX + 0x8]
// 0051a6fa: FMUL float ptr [EAX + 0x8]
// 0051a6fd: ADD EDI,ECX
// 0051a6ff: FADDP
// 0051a701: XOR ECX,ECX
// 0051a703: FCOMP float ptr [ESI + 0x78]
// 0051a706: FNSTSW AX
// 0051a708: SAHF
// 0051a709: JBE 0x0051a710
//   XREF to: 0051a710 (CONDITIONAL_JUMP)
// 0051a70b: MOV ECX,0x1
// 0051a710: LEA EAX,[ESI + 0x60]
//   Label: LAB_0051a710
// 0051a713: FLD float ptr [EDX + 0x4]
// 0051a716: FMUL float ptr [EAX + 0x4]
// 0051a719: FLD float ptr [EDX]
// 0051a71b: FMUL float ptr [EAX]
// 0051a71d: FADDP
// 0051a71f: FLD float ptr [EDX + 0x8]
// 0051a722: FMUL float ptr [EAX + 0x8]
// 0051a725: FADDP
// 0051a727: FCOMP float ptr [ESI + 0x7c]
// 0051a72a: FNSTSW AX
// 0051a72c: SAHF
// 0051a72d: JBE 0x0051a732
//   XREF to: 0051a732 (CONDITIONAL_JUMP)
// 0051a72f: OR CL,0x2
// 0051a732: LEA EAX,[ESI + 0x6c]
//   Label: LAB_0051a732
// 0051a735: FLD float ptr [EDX + 0x4]
// 0051a738: FMUL float ptr [EAX + 0x4]
// 0051a73b: FLD float ptr [EDX]
// 0051a73d: FMUL float ptr [EAX]
// 0051a73f: FADDP
// 0051a741: FLD float ptr [EDX + 0x8]
// 0051a744: FMUL float ptr [EAX + 0x8]
// 0051a747: FADDP
// 0051a749: FCOMP float ptr [ESI + 0x80]
// 0051a74f: FNSTSW AX
// 0051a751: SAHF
// 0051a752: JBE 0x0051a757
//   XREF to: 0051a757 (CONDITIONAL_JUMP)
// 0051a754: OR CL,0x4
// 0051a757: CMP ECX,0x6
//   Label: LAB_0051a757
// 0051a75a: JA 0x0051a882
//   XREF to: 0051a882 (CONDITIONAL_JUMP)
// 0051a760: JMP dword ptr [ECX*0x4 + 0x51a694]
//   Label: switchD
//   XREF to: 0051a767 (COMPUTED_JUMP)
//   XREF to: 0051a7cb (COMPUTED_JUMP)
//   XREF to: 0051a7e5 (COMPUTED_JUMP)
//   XREF to: 0051a7ff (COMPUTED_JUMP)
//   XREF to: 0051a829 (COMPUTED_JUMP)
//   XREF to: 0051a83f (COMPUTED_JUMP)
//   XREF to: 0051a862 (COMPUTED_JUMP)
//   XREF to: 0051a6a0 (READ)
//   XREF to: 0051a6a8 (READ)
//   XREF to: 0051a6b0 (READ)
// 0051a882: MOV EDX,0x637abc
//   Label: default
//   XREF to: 00637abc (PARAM)
// 0051a887: MOV ECX,0xf22
// 0051a88c: PUSH 0x637ad1
//   XREF to: 00637ad1 (DATA)
// 0051a891: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0051a897: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0051a89d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051a8a2: ADD ESP,0x4
// 0051a8a5: PUSH ESI
// 0051a8a6: PUSH EBX
// 0051a8a7: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0051a8ab: PUSH ESI
// 0051a8ac: CALL shape_meshlod.cpp_FUN_00518870
//   XREF to: 00518870 (UNCONDITIONAL_CALL)
// 0051a8b1: ADD ESP,0xc
// 0051a8b4: MOV EAX,EBX
// 0051a8b6: ADD ESP,0x14
// 0051a8b9: POP EBP
// 0051a8ba: POP EDI
// 0051a8bb: POP ESI
// 0051a8bc: POP EBX
// 0051a8bd: RET
