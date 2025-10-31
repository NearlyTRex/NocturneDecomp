// Name: shape_superopt.cpp_FUN_005c91e0
// Address: 005c91e0
// Address Range: [[005c91e0, 005c9339]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c91e0()
// Cross-references:
//   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 (005c84c0) at 005c8729 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065422a
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20
//   shape_superopt.cpp_FUN_005c8280
//   shape_superopt.cpp_FUN_005c9340
//   shape_superopt.cpp_FUN_005cb3a0
//   shape_superopt.cpp_FUN_005cbf90

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005c91e0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

uint shape_superopt_cpp_FUN_005c91e0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  uint uVar8;
  void *unaff_retaddr;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  
  iVar4 = shape_superopt_cpp_FUN_005c8280();
  if (iVar4 == 0) {
    return 0;
  }
  shape_superopt_cpp_FUN_005c9340();
  if (*in_stack_0000000c == 0) {
    return 1;
  }
  uVar8 = 0;
  do {
    iVar4 = uVar8 * 0x60 + in_stack_00000008;
    uVar6 = uVar8 + 1;
    if (uVar6 < *in_stack_0000000c) {
      pdVar7 = (double *)(uVar6 * 0x60 + 0x28 + in_stack_00000008);
      do {
        dVar1 = *(double *)(iVar4 + 0x10) - *pdVar7;
        dVar3 = *(double *)(iVar4 + 0x18) - pdVar7[1];
        dVar2 = *(double *)(iVar4 + 0x20) - pdVar7[2];
        if (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) < _DAT_0065422a) break;
        uVar6 = uVar6 + 1;
        pdVar7 = pdVar7 + 0xc;
      } while (uVar6 < *in_stack_0000000c);
    }
    if (uVar6 == *in_stack_0000000c) {
      return uVar6 ^ *in_stack_0000000c;
    }
    iVar4 = (uVar6 - uVar8) + 1;
    iVar5 = shape_superopt_cpp_FUN_005cb3a0();
    if ((iVar5 == 0) || (iVar5 = shape_superopt_cpp_FUN_005cbf90(), iVar5 != 0)) {
      uVar8 = uVar8 + iVar4;
    }
    else {
      iVar5 = shape_superopt_cpp_CondCallDebugMallocUnknownString_FUN_005cbe20();
      if (iVar5 == 0) {
        return 0;
      }
      crt_string_c_memmove_FUN_005fe5e0
                (unaff_retaddr,(void *)(iVar4 * 0x60 + (int)unaff_retaddr),
                 (*in_stack_0000000c - (uVar8 + iVar4)) * 0x60);
      *in_stack_0000000c = *in_stack_0000000c - iVar4;
    }
    if (*in_stack_0000000c <= uVar8) {
      return 1;
    }
  } while( true );
}


// Assembly code:
// 005c91e0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c91e0
// 005c91e1: PUSH ESI
// 005c91e2: PUSH EDI
// 005c91e3: PUSH EBP
// 005c91e4: MOV EBP,ESP
// 005c91e6: SUB ESP,0x20
// 005c91e9: AND ESP,0xfffffff8
// 005c91ec: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c91ef: MOV EDX,dword ptr [ESI]
// 005c91f1: PUSH EDX
// 005c91f2: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c91f5: PUSH ECX
// 005c91f6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c91f9: PUSH EBX
// 005c91fa: CALL shape_superopt.cpp_FUN_005c8280
//   XREF to: 005c8280 (UNCONDITIONAL_CALL)
// 005c91ff: ADD ESP,0xc
// 005c9202: TEST EAX,EAX
// 005c9204: JNZ 0x005c9211
//   XREF to: 005c9211 (CONDITIONAL_JUMP)
// 005c9206: XOR ECX,ECX
//   Label: LAB_005c9206
// 005c9208: MOV EAX,ECX
// 005c920a: MOV ESP,EBP
// 005c920c: POP EBP
// 005c920d: POP EDI
// 005c920e: POP ESI
// 005c920f: POP EBX
// 005c9210: RET
// 005c9211: PUSH ESI
//   Label: LAB_005c9211
// 005c9212: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c9215: PUSH EDI
// 005c9216: PUSH EBX
// 005c9217: CALL shape_superopt.cpp_FUN_005c9340
//   XREF to: 005c9340 (UNCONDITIONAL_CALL)
// 005c921c: MOV EDX,dword ptr [ESI]
// 005c921e: ADD ESP,0xc
// 005c9221: TEST EDX,EDX
// 005c9223: JZ 0x005c9283
//   XREF to: 005c9283 (CONDITIONAL_JUMP)
// 005c9225: LEA EAX,[EBX + 0x14]
// 005c9228: XOR EDI,EDI
// 005c922a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c922e: IMUL EAX,EDI,0x60
//   Label: LAB_005c922e
// 005c9231: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c9234: LEA EBX,[EAX + 0x10]
// 005c9237: LEA ECX,[EDI + 0x1]
// 005c923a: CMP ECX,dword ptr [ESI]
// 005c923c: JNC 0x005c9272
//   XREF to: 005c9272 (CONDITIONAL_JUMP)
// 005c923e: IMUL EDX,ECX,0x60
// 005c9241: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c9244: ADD EDX,0x28
// 005c9247: ADD EDX,EAX
// 005c9249: FLD double ptr [EBX]
//   Label: LAB_005c9249
// 005c924b: FSUB double ptr [EDX]
// 005c924d: FMUL ST0
// 005c924f: FLD double ptr [EBX + 0x8]
// 005c9252: FSUB double ptr [EDX + 0x8]
// 005c9255: FMUL ST0
// 005c9257: FLD double ptr [EBX + 0x10]
// 005c925a: FXCH
// 005c925c: FADDP ST2,ST0
// 005c925e: FSUB double ptr [EDX + 0x10]
// 005c9261: FMUL ST0
// 005c9263: FADDP
// 005c9265: FSQRT
// 005c9267: FCOMP double ptr [0x0065422a]
//   XREF to: 0065422a (READ)
// 005c926d: FNSTSW AX
// 005c926f: SAHF
// 005c9270: JNC 0x005c9291
//   XREF to: 005c9291 (CONDITIONAL_JUMP)
// 005c9272: MOV EDX,dword ptr [ESI]
//   Label: LAB_005c9272
// 005c9274: CMP ECX,EDX
// 005c9276: JNZ 0x005c929d
//   XREF to: 005c929d (CONDITIONAL_JUMP)
// 005c9278: XOR ECX,EDX
// 005c927a: MOV EAX,ECX
// 005c927c: MOV ESP,EBP
// 005c927e: POP EBP
// 005c927f: POP EDI
// 005c9280: POP ESI
// 005c9281: POP EBX
// 005c9282: RET
// 005c9283: MOV ECX,0x1
//   Label: LAB_005c9283
// 005c9288: MOV EAX,ECX
// 005c928a: MOV ESP,EBP
// 005c928c: POP EBP
// 005c928d: POP EDI
// 005c928e: POP ESI
// 005c928f: POP EBX
// 005c9290: RET
// 005c9291: INC ECX
//   Label: LAB_005c9291
// 005c9292: MOV EAX,dword ptr [ESI]
// 005c9294: ADD EDX,0x60
// 005c9297: CMP ECX,EAX
// 005c9299: JC 0x005c9249
//   XREF to: 005c9249 (CONDITIONAL_JUMP)
// 005c929b: JMP 0x005c9272
//   XREF to: 005c9272 (UNCONDITIONAL_JUMP)
// 005c929d: IMUL EAX,EDI,0x60
//   Label: LAB_005c929d
// 005c92a0: SUB ECX,EDI
// 005c92a2: LEA EBX,[ECX + 0x1]
// 005c92a5: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c92a8: PUSH EBX
// 005c92a9: ADD EDX,EAX
// 005c92ab: PUSH EDX
// 005c92ac: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c92af: PUSH EAX
// 005c92b0: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005c92b4: CALL shape_superopt.cpp_FUN_005cb3a0
//   XREF to: 005cb3a0 (UNCONDITIONAL_CALL)
// 005c92b9: ADD ESP,0xc
// 005c92bc: TEST EAX,EAX
// 005c92be: JZ 0x005c92e2
//   XREF to: 005c92e2 (CONDITIONAL_JUMP)
// 005c92c0: MOV EDX,dword ptr [ESI]
// 005c92c2: PUSH EDX
// 005c92c3: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c92c6: PUSH ECX
// 005c92c7: PUSH EBX
// 005c92c8: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005c92cc: PUSH EAX
// 005c92cd: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 005c92d1: PUSH EDX
// 005c92d2: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c92d5: PUSH ECX
// 005c92d6: CALL shape_superopt.cpp_FUN_005cbf90
//   XREF to: 005cbf90 (UNCONDITIONAL_CALL)
// 005c92db: ADD ESP,0x18
// 005c92de: TEST EAX,EAX
// 005c92e0: JZ 0x005c92fa
//   XREF to: 005c92fa (CONDITIONAL_JUMP)
// 005c92e2: ADD EDI,EBX
//   Label: LAB_005c92e2
// 005c92e4: CMP EDI,dword ptr [ESI]
//   Label: LAB_005c92e4
// 005c92e6: JC 0x005c922e
//   XREF to: 005c922e (CONDITIONAL_JUMP)
// 005c92ec: MOV ECX,0x1
// 005c92f1: MOV EAX,ECX
// 005c92f3: MOV ESP,EBP
// 005c92f5: POP EBP
// 005c92f6: POP EDI
// 005c92f7: POP ESI
// 005c92f8: POP EBX
// 005c92f9: RET
// 005c92fa: PUSH EBX
//   Label: LAB_005c92fa
// 005c92fb: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 005c92ff: PUSH EAX
// 005c9300: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c9303: PUSH EDX
// 005c9304: CALL shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20
//   XREF to: 005cbe20 (UNCONDITIONAL_CALL)
// 005c9309: ADD ESP,0xc
// 005c930c: TEST EAX,EAX
// 005c930e: JZ 0x005c9206
//   XREF to: 005c9206 (CONDITIONAL_JUMP)
// 005c9314: MOV EDX,dword ptr [ESI]
// 005c9316: LEA EAX,[EDI + EBX*0x1]
// 005c9319: SUB EDX,EAX
// 005c931b: IMUL EAX,EDX,0x60
// 005c931e: PUSH EAX
// 005c931f: IMUL EAX,EBX,0x60
// 005c9322: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 005c9326: ADD EAX,ECX
// 005c9328: PUSH EAX
// 005c9329: PUSH ECX
// 005c932a: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005c932f: MOV EDX,dword ptr [ESI]
// 005c9331: SUB EDX,EBX
// 005c9333: ADD ESP,0xc
// 005c9336: MOV dword ptr [ESI],EDX
// 005c9338: JMP 0x005c92e4
//   XREF to: 005c92e4 (UNCONDITIONAL_JUMP)
