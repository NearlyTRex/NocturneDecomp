// Name: shape_meshlod.cpp_FUN_0051a400
// Address: 0051a400
// Address Range: [[0051a400, 0051a4b7] [0051a62f, 0051a690]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a400()
// Cross-references:
//   shape_meshlod.cpp_FUN_00518300 (00518300) at 00518378 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a030 (0051a030) at 0051a0eb [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_NeighboringFacesEdgesCheck_FUN_00518910 (00518910) at 00519408 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_shape_meshlod.cpp_FUN_0051a567_0051a3e4 = 0051a567
//   void* PTR_shape_meshlod.cpp_FUN_0051a5d5_0051a3ec = 0051a5d5
//   undefined4 DAT_0051a3f4
//   undefined4 s_..\shape\meshlod.cpp_00637aa5
//   TerminatedCString s_anon_00637aba
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_meshlod.cpp_FUN_00518870

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051a400(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

double shape_meshlod_cpp_FUN_0051a400(void)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float *pfVar6;
  int in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = *(int *)(in_stack_00000004 + 4);
  pfVar6 = (float *)(*(int *)(in_stack_0000000c + 0x10) * 0x4c4 + iVar1);
  pfVar3 = (float *)(iVar1 + *(int *)(in_stack_0000000c + 0x14) * 0x4c4);
  pfVar4 = (float *)(iVar1 + *(int *)(in_stack_0000000c + 0x18) * 0x4c4);
  bVar5 = *(float *)(in_stack_0000000c + 0x78) <
          in_stack_00000008[2] * *(float *)(in_stack_0000000c + 0x5c) +
          *in_stack_00000008 * *(float *)(in_stack_0000000c + 0x54) +
          in_stack_00000008[1] * *(float *)(in_stack_0000000c + 0x58);
  if (*(float *)(in_stack_0000000c + 0x7c) <
      in_stack_00000008[2] * *(float *)(in_stack_0000000c + 0x68) +
      *in_stack_00000008 * *(float *)(in_stack_0000000c + 0x60) +
      in_stack_00000008[1] * *(float *)(in_stack_0000000c + 100)) {
    bVar5 = bVar5 | 2;
  }
  if (*(float *)(in_stack_0000000c + 0x80) <
      in_stack_00000008[2] * *(float *)(in_stack_0000000c + 0x74) +
      *in_stack_00000008 * *(float *)(in_stack_0000000c + 0x6c) +
      in_stack_00000008[1] * *(float *)(in_stack_0000000c + 0x70)) {
    bVar5 = bVar5 | 4;
  }
  switch(bVar5) {
  case 0:
    fVar2 = *(float *)(in_stack_0000000c + 0x50) -
            (in_stack_00000008[2] * *(float *)(in_stack_0000000c + 0x4c) +
            *in_stack_00000008 * *(float *)(in_stack_0000000c + 0x44) +
            in_stack_00000008[1] * *(float *)(in_stack_0000000c + 0x48));
    return (double)(fVar2 * fVar2);
  case 1:
    pfVar3 = (float *)shape_meshlod_cpp_FUN_00514f90();
    return (double)((in_stack_00000008[2] - pfVar3[2]) * (in_stack_00000008[2] - pfVar3[2]) +
                   (in_stack_00000008[1] - pfVar3[1]) * (in_stack_00000008[1] - pfVar3[1]) +
                   (*in_stack_00000008 - *pfVar3) * (*in_stack_00000008 - *pfVar3));
  case 2:
    pfVar3 = (float *)shape_meshlod_cpp_FUN_00514f90();
    return (double)((in_stack_00000008[2] - pfVar3[2]) * (in_stack_00000008[2] - pfVar3[2]) +
                   (in_stack_00000008[1] - pfVar3[1]) * (in_stack_00000008[1] - pfVar3[1]) +
                   (*in_stack_00000008 - *pfVar3) * (*in_stack_00000008 - *pfVar3));
  case 3:
    return (double)((in_stack_00000008[2] - pfVar3[2]) * (in_stack_00000008[2] - pfVar3[2]) +
                   (in_stack_00000008[1] - pfVar3[1]) * (in_stack_00000008[1] - pfVar3[1]) +
                   (*in_stack_00000008 - *pfVar3) * (*in_stack_00000008 - *pfVar3));
  case 4:
    pfVar3 = (float *)shape_meshlod_cpp_FUN_00514f90();
    return (double)((in_stack_00000008[2] - pfVar3[2]) * (in_stack_00000008[2] - pfVar3[2]) +
                   (in_stack_00000008[1] - pfVar3[1]) * (in_stack_00000008[1] - pfVar3[1]) +
                   (*in_stack_00000008 - *pfVar3) * (*in_stack_00000008 - *pfVar3));
  case 5:
    return (double)((in_stack_00000008[2] - pfVar6[2]) * (in_stack_00000008[2] - pfVar6[2]) +
                   (in_stack_00000008[1] - pfVar6[1]) * (in_stack_00000008[1] - pfVar6[1]) +
                   (*in_stack_00000008 - *pfVar6) * (*in_stack_00000008 - *pfVar6));
  case 6:
    return (double)((in_stack_00000008[2] - pfVar4[2]) * (in_stack_00000008[2] - pfVar4[2]) +
                   (in_stack_00000008[1] - pfVar4[1]) * (in_stack_00000008[1] - pfVar4[1]) +
                   (*in_stack_00000008 - *pfVar4) * (*in_stack_00000008 - *pfVar4));
  default:
    g_CurrentFilename = "0@..\\shape\\meshlod.cpp" + 2;
    g_CurrentLineNumber = 0xec8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("!");
    pfVar3 = (float *)shape_meshlod_cpp_FUN_00518870();
    return (double)((in_stack_00000008[2] - pfVar3[2]) * (in_stack_00000008[2] - pfVar3[2]) +
                   (in_stack_00000008[1] - pfVar3[1]) * (in_stack_00000008[1] - pfVar3[1]) +
                   (*in_stack_00000008 - *pfVar3) * (*in_stack_00000008 - *pfVar3));
  }
}


// Assembly code:
// 0051a400: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051a400
// 0051a401: PUSH ESI
// 0051a402: PUSH EDI
// 0051a403: PUSH EBP
// 0051a404: MOV EBP,ESP
// 0051a406: SUB ESP,0x90
// 0051a40c: AND ESP,0xfffffff8
// 0051a40f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051a412: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0051a415: IMUL EDI,dword ptr [ESI + 0x10],0x4c4
// 0051a41c: IMUL EAX,dword ptr [ESI + 0x14],0x4c4
// 0051a423: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051a426: MOV ECX,dword ptr [ECX + 0x4]
// 0051a429: ADD EDI,ECX
// 0051a42b: LEA EDX,[ECX + EAX*0x1]
// 0051a42e: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0051a432: IMUL EAX,dword ptr [ESI + 0x18],0x4c4
// 0051a439: ADD ECX,EAX
// 0051a43b: LEA EAX,[ESI + 0x54]
// 0051a43e: FLD float ptr [EBX + 0x4]
// 0051a441: FMUL float ptr [EAX + 0x4]
// 0051a444: FLD float ptr [EBX]
// 0051a446: FMUL float ptr [EAX]
// 0051a448: FADDP
// 0051a44a: FLD float ptr [EBX + 0x8]
// 0051a44d: FMUL float ptr [EAX + 0x8]
// 0051a450: XOR EDX,EDX
// 0051a452: FADDP
// 0051a454: FCOMP float ptr [ESI + 0x78]
// 0051a457: FNSTSW AX
// 0051a459: SAHF
// 0051a45a: JBE 0x0051a461
//   XREF to: 0051a461 (CONDITIONAL_JUMP)
// 0051a45c: MOV EDX,0x1
// 0051a461: LEA EAX,[ESI + 0x60]
//   Label: LAB_0051a461
// 0051a464: FLD float ptr [EBX + 0x4]
// 0051a467: FMUL float ptr [EAX + 0x4]
// 0051a46a: FLD float ptr [EBX]
// 0051a46c: FMUL float ptr [EAX]
// 0051a46e: FADDP
// 0051a470: FLD float ptr [EBX + 0x8]
// 0051a473: FMUL float ptr [EAX + 0x8]
// 0051a476: FADDP
// 0051a478: FCOMP float ptr [ESI + 0x7c]
// 0051a47b: FNSTSW AX
// 0051a47d: SAHF
// 0051a47e: JBE 0x0051a483
//   XREF to: 0051a483 (CONDITIONAL_JUMP)
// 0051a480: OR DL,0x2
// 0051a483: LEA EAX,[ESI + 0x6c]
//   Label: LAB_0051a483
// 0051a486: FLD float ptr [EBX + 0x4]
// 0051a489: FMUL float ptr [EAX + 0x4]
// 0051a48c: FLD float ptr [EBX]
// 0051a48e: FMUL float ptr [EAX]
// 0051a490: FADDP
// 0051a492: FLD float ptr [EBX + 0x8]
// 0051a495: FMUL float ptr [EAX + 0x8]
// 0051a498: FADDP
// 0051a49a: FCOMP float ptr [ESI + 0x80]
// 0051a4a0: FNSTSW AX
// 0051a4a2: SAHF
// 0051a4a3: JBE 0x0051a4a8
//   XREF to: 0051a4a8 (CONDITIONAL_JUMP)
// 0051a4a5: OR DL,0x4
// 0051a4a8: CMP EDX,0x6
//   Label: LAB_0051a4a8
// 0051a4ab: JA 0x0051a62f
//   XREF to: 0051a62f (CONDITIONAL_JUMP)
// 0051a4b1: JMP dword ptr [EDX*0x4 + 0x51a3d8]
//   Label: switchD
//   XREF to: 0051a4b8 (COMPUTED_JUMP)
//   XREF to: 0051a4e5 (COMPUTED_JUMP)
//   XREF to: 0051a526 (COMPUTED_JUMP)
//   XREF to: 0051a567 (COMPUTED_JUMP)
//   XREF to: 0051a598 (COMPUTED_JUMP)
//   XREF to: 0051a5d5 (COMPUTED_JUMP)
//   XREF to: 0051a602 (COMPUTED_JUMP)
//   XREF to: 0051a3e4 (READ)
//   XREF to: 0051a3ec (READ)
//   XREF to: 0051a3f4 (READ)
// 0051a62f: MOV ECX,0x637aa5
//   Label: default
//   XREF to: 00637aa5 (PARAM)
// 0051a634: MOV EDI,0xec8
// 0051a639: PUSH 0x637aba
//   XREF to: 00637aba (DATA)
// 0051a63e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051a644: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0051a64a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051a64f: ADD ESP,0x4
// 0051a652: PUSH ESI
// 0051a653: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x80] (DATA)
// 0051a657: PUSH EAX
// 0051a658: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051a65b: PUSH EAX
// 0051a65c: CALL shape_meshlod.cpp_FUN_00518870
//   XREF to: 00518870 (UNCONDITIONAL_CALL)
// 0051a661: FLD float ptr [EBX]
// 0051a663: ADD ESP,0xc
// 0051a666: FSUB float ptr [EAX]
// 0051a668: FMUL ST0
// 0051a66a: FLD float ptr [EBX + 0x4]
// 0051a66d: FSUB float ptr [EAX + 0x4]
// 0051a670: FMUL ST0
// 0051a672: FLD float ptr [EBX + 0x8]
// 0051a675: FXCH
// 0051a677: FADDP ST2,ST0
// 0051a679: FSUB float ptr [EAX + 0x8]
// 0051a67c: FMUL ST0
// 0051a67e: FADDP
// 0051a680: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a683: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0051a686: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 0051a68a: MOV ESP,EBP
// 0051a68c: POP EBP
// 0051a68d: POP EDI
// 0051a68e: POP ESI
// 0051a68f: POP EBX
// 0051a690: RET
