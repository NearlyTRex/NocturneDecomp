// Name: shape_meshlod.cpp_FUN_0051a6b0
// Address: 0051a6b0
// Address Range: [[0051a6b0, 0051a8bd]]
// Convention: __cdecl
// Signature: float * shape_meshlod.cpp_FUN_0051a6b0(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_FUN_0051a300 (0051a300) at 0051a370 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_3_0051a6a0 = 0051a7ff
//   void* PTR_caseD_5_0051a6a8 = 0051a83f
//   TerminatedCString s_shape_meshlod_cpp_00637abc
//   TerminatedCString s_anon_00637ad1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_meshlod.cpp_FUN_00514f90
//   shape_meshlod.cpp_FUN_00518870

#include "nocturne.h"

float * __cdecl shape_meshlod_cpp_FUN_0051a6b0(CLodMesh *this_ptr)

{
  SLodVert *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  SLodVert *pSVar6;
  SLodVert *pSVar7;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  
  pSVar7 = this_ptr->vertex_data;
  pSVar6 = pSVar7 + *(int *)(in_stack_00000010 + 0x10);
  pSVar1 = pSVar7 + *(int *)(in_stack_00000010 + 0x14);
  pSVar7 = pSVar7 + *(int *)(in_stack_00000010 + 0x18);
  bVar5 = *(float *)(in_stack_00000010 + 0x78) <
          in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x5c) +
          *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x54) +
          in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 0x58);
  if (*(float *)(in_stack_00000010 + 0x7c) <
      in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x68) +
      *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x60) +
      in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 100)) {
    bVar5 = bVar5 | 2;
  }
  if (*(float *)(in_stack_00000010 + 0x80) <
      in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x74) +
      *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x6c) +
      in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 0x70)) {
    bVar5 = bVar5 | 4;
  }
  switch(bVar5) {
  case 0:
    fVar4 = *(float *)(in_stack_00000010 + 0x50) -
            (in_stack_0000000c[2] * *(float *)(in_stack_00000010 + 0x4c) +
            *in_stack_0000000c * *(float *)(in_stack_00000010 + 0x44) +
            in_stack_0000000c[1] * *(float *)(in_stack_00000010 + 0x48));
    fVar2 = *(float *)(in_stack_00000010 + 0x48);
    fVar3 = *(float *)(in_stack_00000010 + 0x4c);
    *in_stack_00000008 = *in_stack_0000000c - *(float *)(in_stack_00000010 + 0x44) * fVar4;
    in_stack_00000008[1] = in_stack_0000000c[1] - fVar2 * fVar4;
    in_stack_00000008[2] = in_stack_0000000c[2] - fVar3 * fVar4;
    return in_stack_00000008;
  case 1:
    shape_meshlod_cpp_FUN_00514f90();
    return in_stack_00000008;
  case 2:
    shape_meshlod_cpp_FUN_00514f90();
    return in_stack_00000008;
  case 3:
    *in_stack_00000008 = *(float *)pSVar1->field0_0x0;
    in_stack_00000008[1] = *(float *)(pSVar1->field0_0x0 + 4);
    in_stack_00000008[2] = *(float *)(pSVar1->field0_0x0 + 8);
    return in_stack_00000008;
  case 4:
    shape_meshlod_cpp_FUN_00514f90();
    return in_stack_00000008;
  case 5:
    *in_stack_00000008 = *(float *)pSVar6->field0_0x0;
    in_stack_00000008[1] = *(float *)(pSVar6->field0_0x0 + 4);
    in_stack_00000008[2] = *(float *)(pSVar6->field0_0x0 + 8);
    return in_stack_00000008;
  case 6:
    *in_stack_00000008 = *(float *)pSVar7->field0_0x0;
    in_stack_00000008[1] = *(float *)(pSVar7->field0_0x0 + 4);
    in_stack_00000008[2] = *(float *)(pSVar7->field0_0x0 + 8);
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
//   XREF to: 0051a6b0 (READ)
//   XREF to: 0051a6a0 (READ)
//   XREF to: 0051a6a8 (READ)
// 0051a767: LEA ECX,[ESI + 0x44]
//   Label: caseD_0
// 0051a76a: FLD float ptr [EDX + 0x4]
// 0051a76d: FMUL float ptr [ECX + 0x4]
// 0051a770: FLD float ptr [EDX]
// 0051a772: FMUL float ptr [ECX]
// 0051a774: FADDP
// 0051a776: FLD float ptr [EDX + 0x8]
// 0051a779: FMUL float ptr [ECX + 0x8]
// 0051a77c: FADDP
// 0051a77e: FSUBR float ptr [ESI + 0x50]
// 0051a781: FLD float ptr [ECX]
// 0051a783: FXCH
// 0051a785: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (WRITE)
// 0051a789: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0051a78d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0051a790: FLD float ptr [ECX + 0x4]
// 0051a793: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0051a797: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 0051a79b: FLD float ptr [ECX + 0x8]
// 0051a79e: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0051a7a2: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 0051a7a6: FLD float ptr [EDX]
// 0051a7a8: FSUB float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0051a7ab: FSTP float ptr [EBX]
// 0051a7ad: FLD float ptr [EDX + 0x4]
// 0051a7b0: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0051a7b4: FSTP float ptr [EBX + 0x4]
// 0051a7b7: FLD float ptr [EDX + 0x8]
// 0051a7ba: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0051a7be: FSTP float ptr [EBX + 0x8]
// 0051a7c1: MOV EAX,EBX
// 0051a7c3: ADD ESP,0x14
// 0051a7c6: POP EBP
// 0051a7c7: POP EDI
// 0051a7c8: POP ESI
// 0051a7c9: POP EBX
// 0051a7ca: RET
// 0051a7cb: MOV EAX,dword ptr [ESP + 0x10]
//   Label: caseD_1
//   XREF to: Stack[-0x14] (READ)
// 0051a7cf: PUSH EAX
// 0051a7d0: PUSH EBP
// 0051a7d1: PUSH EDX
// 0051a7d2: PUSH EBX
// 0051a7d3: CALL shape_meshlod.cpp_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a7d8: ADD ESP,0x10
// 0051a7db: MOV EAX,EBX
// 0051a7dd: ADD ESP,0x14
// 0051a7e0: POP EBP
// 0051a7e1: POP EDI
// 0051a7e2: POP ESI
// 0051a7e3: POP EBX
// 0051a7e4: RET
// 0051a7e5: PUSH EDI
//   Label: caseD_2
// 0051a7e6: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0051a7ea: PUSH EDI
// 0051a7eb: PUSH EDX
// 0051a7ec: PUSH EBX
// 0051a7ed: CALL shape_meshlod.cpp_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a7f2: ADD ESP,0x10
// 0051a7f5: MOV EAX,EBX
// 0051a7f7: ADD ESP,0x14
// 0051a7fa: POP EBP
// 0051a7fb: POP EDI
// 0051a7fc: POP ESI
// 0051a7fd: POP EBX
// 0051a7fe: RET
// 0051a7ff: MOV EDX,dword ptr [ESP + 0x10]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 0051a803: MOV EDX,dword ptr [EDX]
// 0051a805: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0051a809: MOV dword ptr [EBX],EDX
// 0051a80b: LEA EDX,[EBX + 0x4]
// 0051a80e: MOV ECX,dword ptr [ECX + 0x4]
// 0051a811: MOV dword ptr [EDX],ECX
// 0051a813: LEA ECX,[EDX + 0x4]
// 0051a816: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0051a81a: MOV EDX,dword ptr [EDX + 0x8]
// 0051a81d: MOV dword ptr [ECX],EDX
// 0051a81f: MOV EAX,EBX
// 0051a821: ADD ESP,0x14
// 0051a824: POP EBP
// 0051a825: POP EDI
// 0051a826: POP ESI
// 0051a827: POP EBX
// 0051a828: RET
// 0051a829: PUSH EBP
//   Label: caseD_4
// 0051a82a: PUSH EDI
// 0051a82b: PUSH EDX
// 0051a82c: PUSH EBX
// 0051a82d: CALL shape_meshlod.cpp_FUN_00514f90
//   XREF to: 00514f90 (UNCONDITIONAL_CALL)
// 0051a832: ADD ESP,0x10
// 0051a835: MOV EAX,EBX
// 0051a837: ADD ESP,0x14
// 0051a83a: POP EBP
// 0051a83b: POP EDI
// 0051a83c: POP ESI
// 0051a83d: POP EBX
// 0051a83e: RET
// 0051a83f: MOV EDX,dword ptr [EBP]
//   Label: caseD_5
// 0051a842: LEA ECX,[EBP + 0x4]
// 0051a845: MOV dword ptr [EBX],EDX
// 0051a847: LEA EDX,[EBX + 0x4]
// 0051a84a: MOV ECX,dword ptr [ECX]
// 0051a84c: MOV dword ptr [EDX],ECX
// 0051a84e: LEA ECX,[EDX + 0x4]
// 0051a851: LEA EDX,[EBP + 0x8]
// 0051a854: MOV EDX,dword ptr [EDX]
// 0051a856: MOV dword ptr [ECX],EDX
// 0051a858: MOV EAX,EBX
// 0051a85a: ADD ESP,0x14
// 0051a85d: POP EBP
// 0051a85e: POP EDI
// 0051a85f: POP ESI
// 0051a860: POP EBX
// 0051a861: RET
// 0051a862: MOV EDX,dword ptr [EDI]
//   Label: caseD_6
// 0051a864: LEA ECX,[EDI + 0x4]
// 0051a867: MOV dword ptr [EBX],EDX
// 0051a869: LEA EDX,[EBX + 0x4]
// 0051a86c: MOV ECX,dword ptr [ECX]
// 0051a86e: MOV dword ptr [EDX],ECX
// 0051a870: LEA ECX,[EDI + 0x8]
// 0051a873: MOV ECX,dword ptr [ECX]
// 0051a875: MOV dword ptr [EDX + 0x4],ECX
// 0051a878: MOV EAX,EBX
// 0051a87a: ADD ESP,0x14
// 0051a87d: POP EBP
// 0051a87e: POP EDI
// 0051a87f: POP ESI
// 0051a880: POP EBX
// 0051a881: RET
// 0051a882: MOV EDX,0x637abc
//   Label: default
//   XREF to: 00637abc (DATA)
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
