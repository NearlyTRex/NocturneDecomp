// Name: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// Address: 0050a290
// Address Range: [[0050a290, 0050a41c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290()
// Cross-references:
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 005091f7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_manpuz_cpp_0063571d
//   TerminatedCString s_CMansionPuzzleCircle_pro_00635730
//   undefined4 DAT_00660d90
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_manpuz.cpp_FUN_0050aee0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_CMansionPuzzleCircle_processPanel(undefined4
   param_1, undefined4 param_2, undefined4 param_3) */

void core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  piVar3 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  if (*piVar3 != 0) {
    fVar1 = ((float)piVar3[2] * in_stack_0000000c) / _DAT_00660d90 + (float)piVar3[1];
    piVar3[1] = (int)fVar1;
    if (fVar1 < 0.0) {
      piVar3[2] = 0;
      piVar3[1] = 0;
    }
    if (1.0 <= (float)piVar3[1]) {
      iVar2 = core_manpuz_cpp_FUN_0050aee0();
      piVar4 = (int *)(in_stack_00000004 + 0x5f0 + iVar2 * 100);
      if (*piVar4 != 0) {
        g_CurrentFilename = "..\\core\\manpuz.cpp";
        g_CurrentLineNumber = 0x45d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::processPanel - Panel collision!");
      }
      *piVar4 = *piVar3;
      piVar4[1] = piVar3[1];
      piVar4[2] = piVar3[2];
      if (piVar4 + 3 != piVar3 + 3) {
        piVar4[3] = piVar3[3];
        piVar4[4] = piVar3[4];
        piVar4[5] = piVar3[5];
      }
      if (piVar4 + 6 != piVar3 + 6) {
        piVar4[6] = piVar3[6];
        piVar4[7] = piVar3[7];
        piVar4[8] = piVar3[8];
      }
      piVar4[9] = piVar3[9];
      piVar4[10] = piVar3[10];
      piVar4[0xb] = piVar3[0xb];
      piVar4[0xc] = piVar3[0xc];
      piVar4[0xd] = piVar3[0xd];
      piVar4[0xe] = piVar3[0xe];
      piVar4[0xf] = piVar3[0xf];
      piVar4[0x10] = piVar3[0x10];
      piVar4[0x11] = piVar3[0x11];
      piVar4[0x12] = piVar3[0x12];
      piVar4[0x13] = piVar3[0x13];
      piVar4[0x14] = piVar3[0x14];
      piVar4[0x15] = piVar3[0x15];
      if (piVar4 + 0x16 != piVar3 + 0x16) {
        piVar4[0x16] = piVar3[0x16];
        piVar4[0x17] = piVar3[0x17];
        piVar4[0x18] = piVar3[0x18];
      }
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar3 = 0;
      goto LAB_0050a40b;
    }
  }
  if (*piVar3 != 0) {
    return;
  }
LAB_0050a40b:
  piVar3[2] = 0;
  piVar3[1] = 0;
  return;
}


// Assembly code:
// 0050a290: PUSH EBX
//   Label: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// 0050a291: PUSH ESI
// 0050a292: PUSH EBP
// 0050a293: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050a297: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050a29b: LEA EAX,[ECX*0x4 + 0x0]
// 0050a2a2: SUB EAX,ECX
// 0050a2a4: SHL EAX,0x3
// 0050a2a7: ADD EAX,ECX
// 0050a2a9: LEA EBX,[ESI + 0x5f0]
// 0050a2af: SHL EAX,0x2
// 0050a2b2: ADD EBX,EAX
// 0050a2b4: CMP dword ptr [EBX],0x0
// 0050a2b7: JNZ 0x0050a2c6
//   XREF to: 0050a2c6 (CONDITIONAL_JUMP)
// 0050a2b9: CMP dword ptr [EBX],0x0
//   Label: LAB_0050a2b9
// 0050a2bc: JZ 0x0050a40b
//   XREF to: 0050a40b (CONDITIONAL_JUMP)
// 0050a2c2: POP EBP
// 0050a2c3: POP ESI
// 0050a2c4: POP EBX
// 0050a2c5: RET
// 0050a2c6: FLD float ptr [EBX + 0x8]
//   Label: LAB_0050a2c6
// 0050a2c9: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0050a2cd: FDIV float ptr [0x00660d90]
//   XREF to: 00660d90 (READ)
// 0050a2d3: FADD float ptr [EBX + 0x4]
// 0050a2d6: FST float ptr [EBX + 0x4]
// 0050a2d9: FLDZ
// 0050a2db: FCOMPP
// 0050a2dd: FNSTSW AX
// 0050a2df: SAHF
// 0050a2e0: JBE 0x0050a2f0
//   XREF to: 0050a2f0 (CONDITIONAL_JUMP)
// 0050a2e2: MOV dword ptr [EBX + 0x8],0x0
// 0050a2e9: MOV dword ptr [EBX + 0x4],0x0
// 0050a2f0: FLD float ptr [EBX + 0x4]
//   Label: LAB_0050a2f0
// 0050a2f3: FLD1
// 0050a2f5: FCOMPP
// 0050a2f7: FNSTSW AX
// 0050a2f9: SAHF
// 0050a2fa: JA 0x0050a2b9
//   XREF to: 0050a2b9 (CONDITIONAL_JUMP)
// 0050a2fc: PUSH EDI
// 0050a2fd: PUSH ECX
// 0050a2fe: PUSH ESI
// 0050a2ff: CALL core_manpuz.cpp_FUN_0050aee0
//   XREF to: 0050aee0 (UNCONDITIONAL_CALL)
// 0050a304: MOV EDX,EAX
// 0050a306: SHL EAX,0x2
// 0050a309: SUB EAX,EDX
// 0050a30b: SHL EAX,0x3
// 0050a30e: ADD EAX,EDX
// 0050a310: ADD ESI,0x5f0
// 0050a316: SHL EAX,0x2
// 0050a319: ADD ESI,EAX
// 0050a31b: MOV EDI,dword ptr [ESI]
// 0050a31d: ADD ESP,0x8
// 0050a320: TEST EDI,EDI
// 0050a322: JZ 0x0050a346
//   XREF to: 0050a346 (CONDITIONAL_JUMP)
// 0050a324: MOV EBP,0x63571d
//   XREF to: 0063571d (DATA)
// 0050a329: MOV EAX,0x45d
// 0050a32e: PUSH 0x635730
//   XREF to: 00635730 (DATA)
// 0050a333: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0050a339: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0050a33e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050a343: ADD ESP,0x4
// 0050a346: MOV EAX,ESI
//   Label: LAB_0050a346
// 0050a348: MOV ECX,dword ptr [EBX]
// 0050a34a: MOV EDX,EBX
// 0050a34c: MOV dword ptr [ESI],ECX
// 0050a34e: LEA EDI,[EBX + 0xc]
// 0050a351: FLD float ptr [EBX + 0x4]
// 0050a354: LEA ECX,[ESI + 0xc]
// 0050a357: FSTP float ptr [ESI + 0x4]
// 0050a35a: MOV EBP,dword ptr [EBX + 0x8]
// 0050a35d: MOV dword ptr [ESI + 0x8],EBP
// 0050a360: CMP ECX,EDI
// 0050a362: JZ 0x0050a374
//   XREF to: 0050a374 (CONDITIONAL_JUMP)
// 0050a364: MOV EBP,dword ptr [EDI]
// 0050a366: MOV dword ptr [ECX],EBP
// 0050a368: MOV EBP,dword ptr [EDI + 0x4]
// 0050a36b: MOV dword ptr [ECX + 0x4],EBP
// 0050a36e: MOV EBP,dword ptr [EDI + 0x8]
// 0050a371: MOV dword ptr [ECX + 0x8],EBP
// 0050a374: LEA ECX,[EDX + 0x18]
//   Label: LAB_0050a374
// 0050a377: LEA EDI,[EAX + 0x18]
// 0050a37a: CMP EDI,ECX
// 0050a37c: JZ 0x0050a38e
//   XREF to: 0050a38e (CONDITIONAL_JUMP)
// 0050a37e: MOV EBP,dword ptr [ECX]
// 0050a380: MOV dword ptr [EDI],EBP
// 0050a382: MOV EBP,dword ptr [ECX + 0x4]
// 0050a385: MOV dword ptr [EDI + 0x4],EBP
// 0050a388: MOV EBP,dword ptr [ECX + 0x8]
// 0050a38b: MOV dword ptr [EDI + 0x8],EBP
// 0050a38e: MOV ECX,dword ptr [EDX + 0x24]
//   Label: LAB_0050a38e
// 0050a391: MOV dword ptr [EAX + 0x24],ECX
// 0050a394: MOV ECX,dword ptr [EDX + 0x28]
// 0050a397: MOV dword ptr [EAX + 0x28],ECX
// 0050a39a: MOV ECX,dword ptr [EDX + 0x2c]
// 0050a39d: MOV dword ptr [EAX + 0x2c],ECX
// 0050a3a0: MOV ECX,dword ptr [EDX + 0x30]
// 0050a3a3: MOV dword ptr [EAX + 0x30],ECX
// 0050a3a6: MOV ECX,dword ptr [EDX + 0x34]
// 0050a3a9: MOV dword ptr [EAX + 0x34],ECX
// 0050a3ac: MOV ECX,dword ptr [EDX + 0x38]
// 0050a3af: MOV dword ptr [EAX + 0x38],ECX
// 0050a3b2: MOV ECX,dword ptr [EDX + 0x3c]
// 0050a3b5: MOV dword ptr [EAX + 0x3c],ECX
// 0050a3b8: MOV ECX,dword ptr [EDX + 0x40]
// 0050a3bb: MOV dword ptr [EAX + 0x40],ECX
// 0050a3be: MOV ECX,dword ptr [EDX + 0x44]
// 0050a3c1: MOV dword ptr [EAX + 0x44],ECX
// 0050a3c4: MOV ECX,dword ptr [EDX + 0x48]
// 0050a3c7: MOV dword ptr [EAX + 0x48],ECX
// 0050a3ca: MOV ECX,dword ptr [EDX + 0x4c]
// 0050a3cd: MOV dword ptr [EAX + 0x4c],ECX
// 0050a3d0: MOV ECX,dword ptr [EDX + 0x50]
// 0050a3d3: MOV dword ptr [EAX + 0x50],ECX
// 0050a3d6: ADD EAX,0x58
// 0050a3d9: MOV ECX,dword ptr [EDX + 0x54]
// 0050a3dc: ADD EDX,0x58
// 0050a3df: MOV dword ptr [EAX + -0x4],ECX
// 0050a3e2: CMP EAX,EDX
// 0050a3e4: JZ 0x0050a3f6
//   XREF to: 0050a3f6 (CONDITIONAL_JUMP)
// 0050a3e6: MOV ECX,dword ptr [EDX]
// 0050a3e8: MOV dword ptr [EAX],ECX
// 0050a3ea: MOV ECX,dword ptr [EDX + 0x4]
// 0050a3ed: MOV dword ptr [EAX + 0x4],ECX
// 0050a3f0: MOV ECX,dword ptr [EDX + 0x8]
// 0050a3f3: MOV dword ptr [EAX + 0x8],ECX
// 0050a3f6: MOV dword ptr [ESI + 0x8],0x0
//   Label: LAB_0050a3f6
// 0050a3fd: MOV dword ptr [ESI + 0x4],0x0
// 0050a404: MOV dword ptr [EBX],0x0
// 0050a40a: POP EDI
// 0050a40b: MOV dword ptr [EBX + 0x8],0x0
//   Label: LAB_0050a40b
// 0050a412: MOV dword ptr [EBX + 0x4],0x0
// 0050a419: POP EBP
// 0050a41a: POP ESI
// 0050a41b: POP EBX
// 0050a41c: RET
