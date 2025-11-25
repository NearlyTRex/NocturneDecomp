// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
// Address: 0042e8c0
// Address Range: [[0042e8c0, 0042ea31]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter * this_ptr)
// Cross-references:
//   core_scat.cpp_FUN_00558060 (00558060) at 005581d3 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c550f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_charactr_cpp_00617568
//   TerminatedCString s_CCharacter_chooseNextLay_0061757d
//   double DOUBLE_006175ba = 0.0000100000000000000
//   double DOUBLE_006175c2 = 0.999990000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int in_stack_00000008;
  float fVar5;
  
  if ((*(int *)(this_ptr->field13_0x2620 + 0x46c) < 0) ||
     (*(int *)(this_ptr->field13_0x2620 + 8) <= *(int *)(this_ptr->field13_0x2620 + 0x46c))) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 4000;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)DOUBLE_006175ba <= *(float *)(this_ptr->field13_0x2620 + 0x470)) {
    if (*(float *)(this_ptr->field13_0x2620 + 0x470) <= (float)DOUBLE_006175c2) {
      return;
    }
    iVar2 = *(int *)(this_ptr->field13_0x2620 +
                    *(int *)(this_ptr->field13_0x2620 + 0x46c) * 0x38 + 0x10);
  }
  else {
    iVar2 = *(int *)(this_ptr->field13_0x2620 +
                    *(int *)(this_ptr->field13_0x2620 + 0x46c) * 0x38 + 0xc);
  }
  if (in_stack_00000008 != iVar2) {
    fVar5 = 999.0;
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field13_0x2620 + 8)) {
      pcVar4 = this_ptr->field13_0x2620 + 0xc;
      do {
        if ((*(int *)(pcVar4 + 0x28) < 0) || (*(int *)pcVar4 != iVar2)) {
          if ((*(int *)(pcVar4 + 0x28) < 1) &&
             ((*(int *)(pcVar4 + 4) == iVar2 &&
              (fVar1 = *(float *)(pcVar4 + 0x34) +
                       *(float *)(this_ptr->cloth_data +
                                 in_stack_00000008 * 4 + *(int *)pcVar4 * 0x50 + 0x8d4c),
              fVar1 < fVar5)))) {
            this_ptr->field13_0x2620[0x470] = '\0';
            this_ptr->field13_0x2620[0x471] = '\0';
            this_ptr->field13_0x2620[0x472] = -0x80;
            this_ptr->field13_0x2620[0x473] = '?';
            *(int *)(this_ptr->field13_0x2620 + 0x46c) = iVar3;
            fVar5 = fVar1;
          }
        }
        else {
          fVar1 = *(float *)(pcVar4 + 0x34) +
                  *(float *)(this_ptr->cloth_data +
                            in_stack_00000008 * 4 + *(int *)(pcVar4 + 4) * 0x50 + 0x8d4c);
          if (fVar1 < fVar5) {
            this_ptr->field13_0x2620[0x470] = '\0';
            this_ptr->field13_0x2620[0x471] = '\0';
            this_ptr->field13_0x2620[0x472] = '\0';
            this_ptr->field13_0x2620[0x473] = '\0';
            *(int *)(this_ptr->field13_0x2620 + 0x46c) = iVar3;
            fVar5 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x38;
      } while (iVar3 < *(int *)(this_ptr->field13_0x2620 + 8));
    }
  }
  return;
}


// Assembly code:
// 0042e8c0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
// 0042e8c1: PUSH ESI
// 0042e8c2: PUSH EDI
// 0042e8c3: PUSH EBP
// 0042e8c4: MOV EBP,ESP
// 0042e8c6: SUB ESP,0x18
// 0042e8c9: AND ESP,0xfffffff8
// 0042e8cc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042e8cf: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042e8d2: MOV EDX,dword ptr [EBX + 0x2a8c]
// 0042e8d8: TEST EDX,EDX
// 0042e8da: JL 0x0042e8e4
//   XREF to: 0042e8e4 (CONDITIONAL_JUMP)
// 0042e8dc: CMP EDX,dword ptr [EBX + 0x2628]
// 0042e8e2: JL 0x0042e906
//   XREF to: 0042e906 (CONDITIONAL_JUMP)
// 0042e8e4: MOV EDI,0x617568
//   Label: LAB_0042e8e4
//   XREF to: 00617568 (DATA)
// 0042e8e9: MOV EAX,0xfa0
// 0042e8ee: PUSH 0x61757d
//   XREF to: 0061757d (DATA)
// 0042e8f3: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0042e8f9: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0042e8fe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042e903: ADD ESP,0x4
// 0042e906: FLD float ptr [EBX + 0x2a90]
//   Label: LAB_0042e906
// 0042e90c: FST double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0042e90f: FCOMP double ptr [0x006175ba]
//   XREF to: 006175ba (READ)
// 0042e915: FNSTSW AX
// 0042e917: SAHF
// 0042e918: JNC 0x0042e98d
//   XREF to: 0042e98d (CONDITIONAL_JUMP)
// 0042e91e: MOV EAX,dword ptr [EBX + 0x2a8c]
// 0042e924: SHL EAX,0x3
// 0042e927: MOV EDX,EAX
// 0042e929: SHL EAX,0x3
// 0042e92c: SUB EAX,EDX
// 0042e92e: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x262c]
// 0042e935: MOV dword ptr [ESP + 0x8],EAX
//   Label: LAB_0042e935
//   XREF to: Stack[-0x20] (WRITE)
// 0042e939: CMP ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0042e93d: JZ 0x0042e986
//   XREF to: 0042e986 (CONDITIONAL_JUMP)
// 0042e93f: MOV ECX,0x4479c000
// 0042e944: MOV EDI,dword ptr [EBX + 0x2628]
// 0042e94a: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0042e94e: XOR ECX,ECX
// 0042e950: TEST EDI,EDI
// 0042e952: JLE 0x0042e986
//   XREF to: 0042e986 (CONDITIONAL_JUMP)
// 0042e954: SHL ESI,0x2
// 0042e957: LEA EDX,[EBX + 0x262c]
// 0042e95d: MOV EDI,dword ptr [EDX + 0x28]
//   Label: LAB_0042e95d
// 0042e960: MOV EAX,EDX
// 0042e962: TEST EDI,EDI
// 0042e964: JL 0x0042e96e
//   XREF to: 0042e96e (CONDITIONAL_JUMP)
// 0042e966: MOV EDI,dword ptr [EDX]
// 0042e968: CMP EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0042e96c: JZ 0x0042e9b4
//   XREF to: 0042e9b4 (CONDITIONAL_JUMP)
// 0042e96e: CMP dword ptr [EAX + 0x28],0x0
//   Label: LAB_0042e96e
// 0042e972: JLE 0x0042e9eb
//   XREF to: 0042e9eb (CONDITIONAL_JUMP)
// 0042e978: INC ECX
//   Label: LAB_0042e978
// 0042e979: MOV EAX,dword ptr [EBX + 0x2628]
// 0042e97f: ADD EDX,0x38
// 0042e982: CMP ECX,EAX
// 0042e984: JL 0x0042e95d
//   XREF to: 0042e95d (CONDITIONAL_JUMP)
// 0042e986: MOV ESP,EBP
//   Label: LAB_0042e986
// 0042e988: POP EBP
// 0042e989: POP EDI
// 0042e98a: POP ESI
// 0042e98b: POP EBX
// 0042e98c: RET
// 0042e98d: FLD double ptr [ESP]
//   Label: LAB_0042e98d
//   XREF to: Stack[-0x28] (DATA)
// 0042e990: FCOMP double ptr [0x006175c2]
//   XREF to: 006175c2 (READ)
// 0042e996: FNSTSW AX
// 0042e998: SAHF
// 0042e999: JBE 0x0042e986
//   XREF to: 0042e986 (CONDITIONAL_JUMP)
// 0042e99b: MOV EAX,dword ptr [EBX + 0x2a8c]
// 0042e9a1: SHL EAX,0x3
// 0042e9a4: MOV EDX,EAX
// 0042e9a6: SHL EAX,0x3
// 0042e9a9: SUB EAX,EDX
// 0042e9ab: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2630]
// 0042e9b2: JMP 0x0042e935
//   XREF to: 0042e935 (UNCONDITIONAL_JUMP)
// 0042e9b4: IMUL EAX,dword ptr [EDX + 0x4],0x50
//   Label: LAB_0042e9b4
// 0042e9b8: ADD EAX,EBX
// 0042e9ba: FLD float ptr [EDX + 0x34]
// 0042e9bd: FADD float ptr [ESI + EAX*0x1 + 0xb7e4]
// 0042e9c4: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0042e9c8: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0042e9cc: FNSTSW AX
// 0042e9ce: SAHF
// 0042e9cf: JNC 0x0042e978
//   XREF to: 0042e978 (CONDITIONAL_JUMP)
// 0042e9d1: MOV dword ptr [EBX + 0x2a90],0x0
// 0042e9db: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0042e9df: MOV dword ptr [EBX + 0x2a8c],ECX
// 0042e9e5: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042e9e9: JMP 0x0042e978
//   XREF to: 0042e978 (UNCONDITIONAL_JUMP)
// 0042e9eb: MOV EDI,dword ptr [EAX + 0x4]
//   Label: LAB_0042e9eb
// 0042e9ee: CMP EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0042e9f2: JNZ 0x0042e978
//   XREF to: 0042e978 (CONDITIONAL_JUMP)
// 0042e9f4: IMUL EDI,dword ptr [EAX],0x50
// 0042e9f7: ADD EDI,EBX
// 0042e9f9: ADD EDI,ESI
// 0042e9fb: FLD float ptr [EAX + 0x34]
// 0042e9fe: FADD float ptr [EDI + 0xb7e4]
// 0042ea04: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 0042ea08: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0042ea0c: FNSTSW AX
// 0042ea0e: SAHF
// 0042ea0f: JNC 0x0042e978
//   XREF to: 0042e978 (CONDITIONAL_JUMP)
// 0042ea15: MOV dword ptr [EBX + 0x2a90],0x3f800000
// 0042ea1f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0042ea23: MOV dword ptr [EBX + 0x2a8c],ECX
// 0042ea29: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042ea2d: JMP 0x0042e978
//   XREF to: 0042e978 (UNCONDITIONAL_JUMP)
