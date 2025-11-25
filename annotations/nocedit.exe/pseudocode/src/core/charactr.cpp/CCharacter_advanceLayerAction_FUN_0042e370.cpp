// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
// Address: 0042e370
// Address Range: [[0042e370, 0042e56f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter * this_ptr)
// Cross-references:
//   core_scat.cpp_FUN_00558060 (00558060) at 00558111 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c530f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_006174de
//   TerminatedCString s_CCharacter_advanceLayerA_006174f3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  float *in_stack_00000008;
  int in_stack_00000010;
  float local_14;
  
  if ((*(int *)(this_ptr->field13_0x2620 + 0x46c) < 0) ||
     (*(int *)(this_ptr->field13_0x2620 + 8) <= *(int *)(this_ptr->field13_0x2620 + 0x46c))) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xeec;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  pcVar4 = this_ptr->field13_0x2620 + *(int *)(this_ptr->field13_0x2620 + 0x46c) * 0x38 + 0xc;
  if (*(float *)(this_ptr->field13_0x2620 + 0x470) < 0.0) {
    this_ptr->field13_0x2620[0x470] = '\0';
    this_ptr->field13_0x2620[0x471] = '\0';
    this_ptr->field13_0x2620[0x472] = '\0';
    this_ptr->field13_0x2620[0x473] = '\0';
  }
  if (1.0 < *(float *)(this_ptr->field13_0x2620 + 0x470)) {
    this_ptr->field13_0x2620[0x470] = '\0';
    this_ptr->field13_0x2620[0x471] = '\0';
    this_ptr->field13_0x2620[0x472] = -0x80;
    this_ptr->field13_0x2620[0x473] = '?';
  }
  fVar1 = *(float *)(this_ptr->field13_0x2620 + 0x470) * *(float *)(pcVar4 + 0x34);
  local_14 = *(float *)(pcVar4 + 0x34) * (1.0 - *(float *)(this_ptr->field13_0x2620 + 0x470));
  iVar5 = *(int *)(pcVar4 + 0x28);
  if (iVar5 != 0) goto LAB_0042e486;
  fVar2 = *(float *)(this_ptr->cloth_data +
                    in_stack_00000010 * 4 + *(int *)(pcVar4 + 4) * 0x50 + 0x8d4c) + local_14;
  fVar3 = *(float *)(this_ptr->cloth_data + in_stack_00000010 * 4 + *(int *)pcVar4 * 0x50 + 0x8d4c)
          + fVar1;
  if (fVar2 <= fVar3) {
    if (fVar2 < fVar3) {
      iVar5 = 1;
      goto LAB_0042e486;
    }
    if (*(float *)(this_ptr->cloth_data +
                  in_stack_00000010 * 4 + *(int *)(pcVar4 + 4) * 0x50 + 0x8d4c) <=
        *(float *)(this_ptr->cloth_data + in_stack_00000010 * 4 + *(int *)pcVar4 * 0x50 + 0x8d4c)) {
      iVar5 = 1;
      goto LAB_0042e486;
    }
  }
  iVar5 = -1;
LAB_0042e486:
  if (iVar5 < 0) {
    local_14 = fVar1;
  }
  if (*in_stack_00000008 < local_14) {
    fVar1 = ((float)iVar5 * *in_stack_00000008) / *(float *)(pcVar4 + 0x34) +
            *(float *)(this_ptr->field13_0x2620 + 0x470);
    *(float *)(this_ptr->field13_0x2620 + 0x470) = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->field13_0x2620[0x470] = '\0';
      this_ptr->field13_0x2620[0x471] = '\0';
      this_ptr->field13_0x2620[0x472] = '\0';
      this_ptr->field13_0x2620[0x473] = '\0';
    }
    if (1.0 < *(float *)(this_ptr->field13_0x2620 + 0x470)) {
      this_ptr->field13_0x2620[0x470] = '\0';
      this_ptr->field13_0x2620[0x471] = '\0';
      this_ptr->field13_0x2620[0x472] = -0x80;
      this_ptr->field13_0x2620[0x473] = '?';
    }
    *in_stack_00000008 = 0.0;
    return -1;
  }
  *in_stack_00000008 = *in_stack_00000008 - local_14;
  if (-1 < iVar5) {
    iVar5 = *(int *)(pcVar4 + 4);
    this_ptr->field13_0x2620[0x470] = '\0';
    this_ptr->field13_0x2620[0x471] = '\0';
    this_ptr->field13_0x2620[0x472] = -0x80;
    this_ptr->field13_0x2620[0x473] = '?';
    return iVar5;
  }
  iVar5 = *(int *)pcVar4;
  this_ptr->field13_0x2620[0x470] = '\0';
  this_ptr->field13_0x2620[0x471] = '\0';
  this_ptr->field13_0x2620[0x472] = '\0';
  this_ptr->field13_0x2620[0x473] = '\0';
  return iVar5;
}


// Assembly code:
// 0042e370: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
// 0042e371: PUSH ESI
// 0042e372: PUSH EDI
// 0042e373: PUSH EBP
// 0042e374: SUB ESP,0x20
// 0042e377: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0042e37b: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0042e37f: MOV EDX,dword ptr [EBX + 0x2a8c]
// 0042e385: TEST EDX,EDX
// 0042e387: JL 0x0042e391
//   XREF to: 0042e391 (CONDITIONAL_JUMP)
// 0042e389: CMP EDX,dword ptr [EBX + 0x2628]
// 0042e38f: JL 0x0042e3b4
//   XREF to: 0042e3b4 (CONDITIONAL_JUMP)
// 0042e391: MOV EDI,0x6174de
//   Label: LAB_0042e391
//   XREF to: 006174de (DATA)
// 0042e396: MOV EBP,0xeec
// 0042e39b: PUSH 0x6174f3
//   XREF to: 006174f3 (DATA)
// 0042e3a0: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0042e3a6: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0042e3ac: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042e3b1: ADD ESP,0x4
// 0042e3b4: MOV EAX,dword ptr [EBX + 0x2a8c]
//   Label: LAB_0042e3b4
// 0042e3ba: SHL EAX,0x3
// 0042e3bd: FLD float ptr [EBX + 0x2a90]
// 0042e3c3: MOV EDX,EAX
// 0042e3c5: SHL EAX,0x3
// 0042e3c8: LEA ECX,[EBX + 0x262c]
// 0042e3ce: SUB EAX,EDX
// 0042e3d0: FLDZ
// 0042e3d2: ADD ECX,EAX
// 0042e3d4: FCOMPP
// 0042e3d6: FNSTSW AX
// 0042e3d8: SAHF
// 0042e3d9: JBE 0x0042e3e5
//   XREF to: 0042e3e5 (CONDITIONAL_JUMP)
// 0042e3db: MOV dword ptr [EBX + 0x2a90],0x0
// 0042e3e5: FLD float ptr [EBX + 0x2a90]
//   Label: LAB_0042e3e5
// 0042e3eb: FLD1
// 0042e3ed: FCOMPP
// 0042e3ef: FNSTSW AX
// 0042e3f1: SAHF
// 0042e3f2: JNC 0x0042e3fe
//   XREF to: 0042e3fe (CONDITIONAL_JUMP)
// 0042e3f4: MOV dword ptr [EBX + 0x2a90],0x3f800000
// 0042e3fe: FLD float ptr [EBX + 0x2a90]
//   Label: LAB_0042e3fe
// 0042e404: FLD ST0
// 0042e406: FLD1
// 0042e408: FSUBRP ST2,ST0
// 0042e40a: FMUL float ptr [ECX + 0x34]
// 0042e40d: FLD float ptr [ECX + 0x34]
// 0042e410: FMULP ST2
// 0042e412: MOV EDX,dword ptr [ECX + 0x28]
// 0042e415: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 0042e419: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 0042e41d: TEST EDX,EDX
// 0042e41f: JNZ 0x0042e486
//   XREF to: 0042e486 (CONDITIONAL_JUMP)
// 0042e421: MOV EDX,dword ptr [ECX + 0x4]
// 0042e424: LEA EAX,[EDX*0x4 + 0x0]
// 0042e42b: ADD EAX,EDX
// 0042e42d: SHL EAX,0x4
// 0042e430: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 0042e434: ADD EAX,EBX
// 0042e436: MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb7e4]
// 0042e43d: MOV EDX,dword ptr [ECX]
// 0042e43f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0042e443: LEA EAX,[EDX*0x4 + 0x0]
// 0042e44a: ADD EAX,EDX
// 0042e44c: SHL EAX,0x4
// 0042e44f: ADD EAX,EBX
// 0042e451: MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb7e4]
// 0042e458: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0042e45c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0042e460: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0042e464: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0042e468: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0042e46c: FXCH
// 0042e46e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0042e471: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0042e475: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0042e478: FNSTSW AX
// 0042e47a: SAHF
// 0042e47b: JNC 0x0042e4fd
//   XREF to: 0042e4fd (CONDITIONAL_JUMP)
// 0042e481: MOV EDX,0xffffffff
//   Label: LAB_0042e481
// 0042e486: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0042e486
//   XREF to: Stack[-0x24] (READ)
// 0042e48a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042e48e: TEST EDX,EDX
// 0042e490: JL 0x0042e52e
//   XREF to: 0042e52e (CONDITIONAL_JUMP)
// 0042e496: FLD float ptr [ESI]
//   Label: LAB_0042e496
// 0042e498: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0042e49c: FNSTSW AX
// 0042e49e: SAHF
// 0042e49f: JNC 0x0042e53b
//   XREF to: 0042e53b (CONDITIONAL_JUMP)
// 0042e4a5: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0042e4a9: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0042e4ad: FMUL float ptr [ESI]
// 0042e4af: FDIV float ptr [ECX + 0x34]
// 0042e4b2: FADD float ptr [EBX + 0x2a90]
// 0042e4b8: FST float ptr [EBX + 0x2a90]
// 0042e4be: FLDZ
// 0042e4c0: FCOMPP
// 0042e4c2: FNSTSW AX
// 0042e4c4: SAHF
// 0042e4c5: JBE 0x0042e4d1
//   XREF to: 0042e4d1 (CONDITIONAL_JUMP)
// 0042e4c7: MOV dword ptr [EBX + 0x2a90],0x0
// 0042e4d1: FLD float ptr [EBX + 0x2a90]
//   Label: LAB_0042e4d1
// 0042e4d7: FLD1
// 0042e4d9: FCOMPP
// 0042e4db: FNSTSW AX
// 0042e4dd: SAHF
// 0042e4de: JNC 0x0042e4ea
//   XREF to: 0042e4ea (CONDITIONAL_JUMP)
// 0042e4e0: MOV dword ptr [EBX + 0x2a90],0x3f800000
// 0042e4ea: MOV EAX,0xffffffff
//   Label: LAB_0042e4ea
// 0042e4ef: MOV dword ptr [ESI],0x0
// 0042e4f5: ADD ESP,0x20
// 0042e4f8: POP EBP
// 0042e4f9: POP EDI
// 0042e4fa: POP ESI
// 0042e4fb: POP EBX
// 0042e4fc: RET
// 0042e4fd: FLD float ptr [ESP]
//   Label: LAB_0042e4fd
//   XREF to: Stack[-0x30] (DATA)
// 0042e500: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0042e504: FNSTSW AX
// 0042e506: SAHF
// 0042e507: JNC 0x0042e513
//   XREF to: 0042e513 (CONDITIONAL_JUMP)
// 0042e509: MOV EDX,0x1
// 0042e50e: JMP 0x0042e486
//   XREF to: 0042e486 (UNCONDITIONAL_JUMP)
// 0042e513: FLD float ptr [ESP + 0x8]
//   Label: LAB_0042e513
//   XREF to: Stack[-0x28] (READ)
// 0042e517: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0042e51b: FNSTSW AX
// 0042e51d: SAHF
// 0042e51e: JC 0x0042e481
//   XREF to: 0042e481 (CONDITIONAL_JUMP)
// 0042e524: MOV EDX,0x1
// 0042e529: JMP 0x0042e486
//   XREF to: 0042e486 (UNCONDITIONAL_JUMP)
// 0042e52e: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0042e52e
//   XREF to: Stack[-0x1c] (READ)
// 0042e532: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042e536: JMP 0x0042e496
//   XREF to: 0042e496 (UNCONDITIONAL_JUMP)
// 0042e53b: FLD float ptr [ESI]
//   Label: LAB_0042e53b
// 0042e53d: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0042e541: FSTP float ptr [ESI]
// 0042e543: TEST EDX,EDX
// 0042e545: JL 0x0042e55c
//   XREF to: 0042e55c (CONDITIONAL_JUMP)
// 0042e547: MOV EAX,dword ptr [ECX + 0x4]
// 0042e54a: MOV dword ptr [EBX + 0x2a90],0x3f800000
// 0042e554: ADD ESP,0x20
// 0042e557: POP EBP
// 0042e558: POP EDI
// 0042e559: POP ESI
// 0042e55a: POP EBX
// 0042e55b: RET
// 0042e55c: MOV EAX,dword ptr [ECX]
//   Label: LAB_0042e55c
// 0042e55e: MOV dword ptr [EBX + 0x2a90],0x0
// 0042e568: ADD ESP,0x20
// 0042e56b: POP EBP
// 0042e56c: POP EDI
// 0042e56d: POP ESI
// 0042e56e: POP EBX
// 0042e56f: RET
