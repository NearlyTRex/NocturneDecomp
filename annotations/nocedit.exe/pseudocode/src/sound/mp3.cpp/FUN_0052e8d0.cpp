// Name: sound_mp3.cpp_FUN_0052e8d0
// Address: 0052e8d0
// Address Range: [[0052e8d0, 0052ea0d]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052e8d0()
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ac5a
//   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
//   undefined4 DAT_0067e218
//   undefined4 DAT_0067e258
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_02f68188
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int sound_mp3_cpp_FUN_0052e8d0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  int *in_stack_00000004;
  
  piVar2 = (int *)*in_stack_00000004;
  iVar3 = *piVar2;
  iVar4 = in_stack_00000004[6];
  fVar6 = (float10)*(double *)(&DAT_0067e218 + piVar2[4] * 8 + iVar3 * 0x20);
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(*(int *)(&DAT_0067e258 +
                                              piVar2[3] * 4 + iVar3 * 0xb4 + (piVar2[1] + -1) * 0x3c
                                              ) / in_stack_00000004[4],piVar2[4]));
  iVar5 = (int)((ulonglong)dVar7 >> 0x20);
  iVar1 = (int)ROUND(fVar6);
  if (iVar3 == 1) {
    if (((iVar1 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
      if (in_stack_00000004[3] == 0) {
        return iVar4;
      }
    }
    else if ((iVar1 == 0x30) || (iVar5 < 0x60)) {
      if ((iVar1 == 0x20) || (0x30 < iVar5)) {
        if (in_stack_00000004[3] == 3) {
          return iVar4;
        }
      }
      else if (in_stack_00000004[3] == 2) {
        return iVar4;
      }
    }
    else if (in_stack_00000004[3] == 1) {
      return iVar4;
    }
  }
  else if (in_stack_00000004[3] == 4) {
    return iVar4;
  }
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 0x1a2;
  core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_02f68188);
  return iVar4;
}


// Assembly code:
// 0052e8d0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052e8d0
// 0052e8d1: PUSH ESI
// 0052e8d2: PUSH EDI
// 0052e8d3: PUSH EBP
// 0052e8d4: SUB ESP,0xc
// 0052e8d7: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0052e8db: MOV ECX,dword ptr [ESI]
// 0052e8dd: MOV EAX,dword ptr [ECX + 0x4]
// 0052e8e0: DEC EAX
// 0052e8e1: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 0052e8e4: MOV EAX,dword ptr [ECX + 0xc]
// 0052e8e7: MOV EBX,dword ptr [ECX]
// 0052e8e9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e8ed: LEA EAX,[EBX*0x4 + 0x0]
// 0052e8f4: SUB EAX,EBX
// 0052e8f6: SHL EAX,0x2
// 0052e8f9: MOV EBP,EAX
// 0052e8fb: SHL EBP,0x4
// 0052e8fe: SUB EBP,EAX
// 0052e900: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0052e903: SHL EAX,0x2
// 0052e906: MOV EDX,EAX
// 0052e908: SHL EAX,0x4
// 0052e90b: SUB EAX,EDX
// 0052e90d: ADD EBP,EAX
// 0052e90f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0052e913: MOV EDX,dword ptr [EBP + EAX*0x4 + 0x67e258]
//   XREF to: 0067e258 (DATA)
// 0052e91a: MOV EAX,EDX
// 0052e91c: MOV EBP,dword ptr [ESI + 0x10]
// 0052e91f: SAR EDX,0x1f
// 0052e922: IDIV EBP
// 0052e924: MOV EDX,EAX
// 0052e926: MOV EAX,dword ptr [ECX + 0x10]
// 0052e929: MOV ECX,EBX
// 0052e92b: SHL ECX,0x5
// 0052e92e: MOV EDI,dword ptr [ESI + 0x18]
// 0052e931: FLD double ptr [ECX + EAX*0x8 + 0x67e218]
//   XREF to: 0067e218 (DATA)
// 0052e938: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052e93d: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0052e941: CMP EBX,0x1
// 0052e944: JNZ 0x0052e9c9
//   XREF to: 0052e9c9 (CONDITIONAL_JUMP)
// 0052e94a: CMP dword ptr [ESP + 0x8],0x30
//   XREF to: Stack[-0x14] (READ)
// 0052e94f: JNZ 0x0052e96b
//   XREF to: 0052e96b (CONDITIONAL_JUMP)
// 0052e951: CMP EDX,0x38
// 0052e954: JL 0x0052e96b
//   XREF to: 0052e96b (CONDITIONAL_JUMP)
// 0052e956: XOR EAX,EAX
//   Label: LAB_0052e956
// 0052e958: CMP EAX,dword ptr [ESI + 0xc]
// 0052e95b: JNZ 0x0052e9dd
//   XREF to: 0052e9dd (CONDITIONAL_JUMP)
// 0052e961: MOV EAX,EDI
// 0052e963: ADD ESP,0xc
// 0052e966: POP EBP
// 0052e967: POP EDI
// 0052e968: POP ESI
// 0052e969: POP EBX
// 0052e96a: RET
// 0052e96b: CMP EDX,0x38
//   Label: LAB_0052e96b
// 0052e96e: JL 0x0052e975
//   XREF to: 0052e975 (CONDITIONAL_JUMP)
// 0052e970: CMP EDX,0x50
// 0052e973: JLE 0x0052e956
//   XREF to: 0052e956 (CONDITIONAL_JUMP)
// 0052e975: CMP dword ptr [ESP + 0x8],0x30
//   Label: LAB_0052e975
//   XREF to: Stack[-0x14] (READ)
// 0052e97a: JZ 0x0052e995
//   XREF to: 0052e995 (CONDITIONAL_JUMP)
// 0052e97c: CMP EDX,0x60
// 0052e97f: JL 0x0052e995
//   XREF to: 0052e995 (CONDITIONAL_JUMP)
// 0052e981: MOV EAX,0x1
// 0052e986: CMP EAX,dword ptr [ESI + 0xc]
// 0052e989: JNZ 0x0052e9dd
//   XREF to: 0052e9dd (CONDITIONAL_JUMP)
// 0052e98b: MOV EAX,EDI
// 0052e98d: ADD ESP,0xc
// 0052e990: POP EBP
// 0052e991: POP EDI
// 0052e992: POP ESI
// 0052e993: POP EBX
// 0052e994: RET
// 0052e995: CMP dword ptr [ESP + 0x8],0x20
//   Label: LAB_0052e995
//   XREF to: Stack[-0x14] (READ)
// 0052e99a: JZ 0x0052e9b5
//   XREF to: 0052e9b5 (CONDITIONAL_JUMP)
// 0052e99c: CMP EDX,0x30
// 0052e99f: JG 0x0052e9b5
//   XREF to: 0052e9b5 (CONDITIONAL_JUMP)
// 0052e9a1: MOV EAX,0x2
// 0052e9a6: CMP EAX,dword ptr [ESI + 0xc]
// 0052e9a9: JNZ 0x0052e9dd
//   XREF to: 0052e9dd (CONDITIONAL_JUMP)
// 0052e9ab: MOV EAX,EDI
// 0052e9ad: ADD ESP,0xc
// 0052e9b0: POP EBP
// 0052e9b1: POP EDI
// 0052e9b2: POP ESI
// 0052e9b3: POP EBX
// 0052e9b4: RET
// 0052e9b5: MOV EAX,0x3
//   Label: LAB_0052e9b5
// 0052e9ba: CMP EAX,dword ptr [ESI + 0xc]
// 0052e9bd: JNZ 0x0052e9dd
//   XREF to: 0052e9dd (CONDITIONAL_JUMP)
// 0052e9bf: MOV EAX,EDI
// 0052e9c1: ADD ESP,0xc
// 0052e9c4: POP EBP
// 0052e9c5: POP EDI
// 0052e9c6: POP ESI
// 0052e9c7: POP EBX
// 0052e9c8: RET
// 0052e9c9: MOV EAX,0x4
//   Label: LAB_0052e9c9
// 0052e9ce: CMP EAX,dword ptr [ESI + 0xc]
// 0052e9d1: JNZ 0x0052e9dd
//   XREF to: 0052e9dd (CONDITIONAL_JUMP)
// 0052e9d3: MOV EAX,EDI
// 0052e9d5: ADD ESP,0xc
// 0052e9d8: POP EBP
// 0052e9d9: POP EDI
// 0052e9da: POP ESI
// 0052e9db: POP EBX
// 0052e9dc: RET
// 0052e9dd: PUSH 0x2f68188
//   Label: LAB_0052e9dd
//   XREF to: 02f68188 (DATA)
// 0052e9e2: MOV EAX,0x63ac5a
//   XREF to: 0063ac5a (DATA)
// 0052e9e7: MOV EDX,0x1a2
// 0052e9ec: PUSH 0x63ac6b
//   XREF to: 0063ac6b (DATA)
// 0052e9f1: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0052e9f6: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0052e9fc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052ea01: ADD ESP,0x8
// 0052ea04: MOV EAX,EDI
// 0052ea06: ADD ESP,0xc
// 0052ea09: POP EBP
// 0052ea0a: POP EDI
// 0052ea0b: POP ESI
// 0052ea0c: POP EBX
// 0052ea0d: RET
