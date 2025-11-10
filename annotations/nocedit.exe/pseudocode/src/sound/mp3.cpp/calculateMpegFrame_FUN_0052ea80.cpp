// Name: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
// Address: 0052ea80
// Address Range: [[0052ea80, 0052ec37]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame * frame)
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ac5a
//   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
//   TerminatedCString s_sound_mp3_cpp_0063aca4
//   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
//   void*[4][4] g_MpegLayer2AllocationTables
//   double[2][4] g_MpegSampleRateTable
//   int[2][3][15] g_MpegBitrateTable
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[256] g_CurrentMp3Filename
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame)

{
  SMpegFrameHeader *pSVar1;
  int iVar2;
  int iVar3;
  SMpegFrameHeader *pSVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  int iVar9;
  SMpegFrame *pSVar10;
  
  pSVar1 = frame->header;
  iVar2 = pSVar1->channel_mode;
  frame->channel_mode = iVar2;
  frame->samples_per_granule = (iVar2 != 3) + 1;
  if (pSVar1->layer == 2) {
    iVar3 = frame->sblimit;
    pSVar4 = frame->header;
    iVar5 = pSVar4->mpeg_version;
    iVar9 = iVar5 * 0xb4;
    fVar7 = (float10)g_MpegSampleRateTable[iVar5][pSVar4->sampling_rate_index];
    pSVar10 = frame;
    dVar8 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44(g_MpegBitrateTable[iVar5 + -1][pSVar4->layer + 2]
                                        [pSVar4->bitrate_index] / frame->samples_per_granule,
                                        pSVar4->sampling_rate_index));
    iVar6 = (int)((ulonglong)dVar8 >> 0x20);
    iVar2 = (int)ROUND(fVar7);
    if (iVar5 == 1) {
      if (((iVar2 == 0x30) && (0x37 < iVar6)) || ((0x37 < iVar6 && (iVar6 < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar2 == 0x30) || (iVar6 < 0x60)) {
        if ((iVar2 == 0x20) || (0x30 < iVar6)) {
          iVar5 = 3;
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 4;
    }
    if (iVar5 != *(int *)(iVar3 + 0xc)) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("MPEG Layer 2 - pick_table - can't load tables!  File: %s",g_CurrentMp3Filename,iVar9,pSVar10);
    }
    frame->sblimit = iVar2;
  }
  else {
    frame->sblimit = 0x20;
  }
  if (pSVar1->channel_mode != 1) {
    frame->js_bound = frame->sblimit;
    return;
  }
  iVar2 = pSVar1->layer;
  iVar3 = pSVar1->mode_extension;
  if ((((iVar2 < 1) || (3 < iVar2)) || (iVar3 < 0)) || (3 < iVar3)) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x1b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("js_bound bad layer/modext (%d/%d)  File: %s",iVar2,iVar3,g_CurrentMp3Filename);
  }
  frame->js_bound = (int)g_MpegLayer2AllocationTables[iVar2][iVar3];
  return;
}


// Assembly code:
// 0052ea80: PUSH EBX
//   Label: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
// 0052ea81: PUSH ESI
// 0052ea82: PUSH EDI
// 0052ea83: PUSH EBP
// 0052ea84: SUB ESP,0x14
// 0052ea87: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0052ea8b: MOV ESI,dword ptr [EBX]
// 0052ea8d: MOV EAX,dword ptr [ESI + 0x1c]
// 0052ea90: MOV dword ptr [EBX + 0x4],EAX
// 0052ea93: CMP EAX,0x3
// 0052ea96: SETNZ AL
// 0052ea99: AND EAX,0xff
// 0052ea9e: INC EAX
// 0052ea9f: MOV dword ptr [EBX + 0x10],EAX
// 0052eaa2: CMP dword ptr [ESI + 0x4],0x2
// 0052eaa6: JZ 0x0052eb11
//   XREF to: 0052eb11 (CONDITIONAL_JUMP)
// 0052eaa8: MOV dword ptr [EBX + 0x18],0x20
// 0052eaaf: MOV ECX,dword ptr [ESI + 0x1c]
//   Label: LAB_0052eaaf
// 0052eab2: CMP ECX,0x1
// 0052eab5: JNZ 0x0052ec2a
//   XREF to: 0052ec2a (CONDITIONAL_JUMP)
// 0052eabb: MOV EDI,dword ptr [ESI + 0x4]
// 0052eabe: MOV ESI,dword ptr [ESI + 0x20]
// 0052eac1: CMP EDI,ECX
// 0052eac3: JL 0x0052eace
//   XREF to: 0052eace (CONDITIONAL_JUMP)
// 0052eac5: CMP EDI,0x3
// 0052eac8: JLE 0x0052ec14
//   XREF to: 0052ec14 (CONDITIONAL_JUMP)
// 0052eace: PUSH 0x2f68188
//   Label: LAB_0052eace
//   XREF to: 02f68188 (DATA)
// 0052ead3: PUSH ESI
// 0052ead4: PUSH EDI
// 0052ead5: MOV EBP,0x63aca4
//   XREF to: 0063aca4 (DATA)
// 0052eada: MOV EAX,0x1b2
// 0052eadf: PUSH 0x63acb5
//   XREF to: 0063acb5 (DATA)
// 0052eae4: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0052eaea: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052eaef: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052eaf4: ADD ESP,0x10
// 0052eaf7: SHL ESI,0x2
//   Label: LAB_0052eaf7
// 0052eafa: SHL EDI,0x4
// 0052eafd: LEA EAX,[EDI + ESI*0x1]
// 0052eb00: MOV EAX,dword ptr [EAX + 0x67d820]
//   XREF to: 0067d820 (DATA)
// 0052eb06: MOV dword ptr [EBX + 0x14],EAX
// 0052eb09: ADD ESP,0x14
// 0052eb0c: POP EBP
// 0052eb0d: POP EDI
// 0052eb0e: POP ESI
// 0052eb0f: POP EBX
// 0052eb10: RET
// 0052eb11: MOV EAX,dword ptr [EBX + 0x18]
//   Label: LAB_0052eb11
// 0052eb14: MOV ECX,dword ptr [EBX]
// 0052eb16: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052eb1a: MOV EAX,dword ptr [ECX + 0xc]
// 0052eb1d: MOV EDI,dword ptr [ECX]
// 0052eb1f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0052eb22: LEA EAX,[EDI*0x4 + 0x0]
// 0052eb29: SUB EAX,EDI
// 0052eb2b: SHL EAX,0x2
// 0052eb2e: MOV EDX,EAX
// 0052eb30: SHL EAX,0x4
// 0052eb33: MOV EBP,dword ptr [ECX + 0x4]
// 0052eb36: SUB EAX,EDX
// 0052eb38: DEC EBP
// 0052eb39: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052eb3d: LEA EAX,[EBP*0x4 + 0x0]
// 0052eb44: MOV EDX,EAX
// 0052eb46: SHL EAX,0x4
// 0052eb49: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0052eb4d: SUB EAX,EDX
// 0052eb4f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0052eb52: ADD EAX,EBP
// 0052eb54: MOV EDX,dword ptr [EAX + EDX*0x4 + 0x67e258]
//   XREF to: 0067e258 (DATA)
// 0052eb5b: MOV EBP,dword ptr [EBX + 0x10]
// 0052eb5e: MOV EAX,EDX
// 0052eb60: SAR EDX,0x1f
// 0052eb63: IDIV EBP
// 0052eb65: MOV EDX,EAX
// 0052eb67: MOV EAX,dword ptr [ECX + 0x10]
// 0052eb6a: MOV ECX,EDI
// 0052eb6c: SHL ECX,0x5
// 0052eb6f: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052eb73: FLD double ptr [ECX + EAX*0x8 + 0x67e218]
//   XREF to: 0067e218 (DATA)
// 0052eb7a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0052eb7f: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 0052eb83: CMP EDI,0x1
// 0052eb86: JNZ 0x0052ec0d
//   XREF to: 0052ec0d (CONDITIONAL_JUMP)
// 0052eb8c: CMP dword ptr [ESP + 0x10],0x30
//   XREF to: Stack[-0x14] (READ)
// 0052eb91: JNZ 0x0052ebd6
//   XREF to: 0052ebd6 (CONDITIONAL_JUMP)
// 0052eb93: CMP EDX,0x38
// 0052eb96: JL 0x0052ebd6
//   XREF to: 0052ebd6 (CONDITIONAL_JUMP)
// 0052eb98: XOR EAX,EAX
//   Label: LAB_0052eb98
// 0052eb9a: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0052eb9a
//   XREF to: Stack[-0x1c] (READ)
// 0052eb9e: CMP EAX,dword ptr [EDX + 0xc]
// 0052eba1: JZ 0x0052ebca
//   XREF to: 0052ebca (CONDITIONAL_JUMP)
// 0052eba3: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 0052eba8: MOV EAX,0x63ac5a
//   XREF to: 0063ac5a (DATA)
// 0052ebad: MOV EDX,0x1a2
// 0052ebb2: PUSH 0x63ac6b
//   XREF to: 0063ac6b (DATA)
// 0052ebb7: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0052ebbc: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0052ebc2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052ebc7: ADD ESP,0x8
// 0052ebca: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0052ebca
//   XREF to: Stack[-0x18] (READ)
// 0052ebce: MOV dword ptr [EBX + 0x18],EAX
// 0052ebd1: JMP 0x0052eaaf
//   XREF to: 0052eaaf (UNCONDITIONAL_JUMP)
// 0052ebd6: CMP EDX,0x38
//   Label: LAB_0052ebd6
// 0052ebd9: JL 0x0052ebe0
//   XREF to: 0052ebe0 (CONDITIONAL_JUMP)
// 0052ebdb: CMP EDX,0x50
// 0052ebde: JLE 0x0052eb98
//   XREF to: 0052eb98 (CONDITIONAL_JUMP)
// 0052ebe0: CMP dword ptr [ESP + 0x10],0x30
//   Label: LAB_0052ebe0
//   XREF to: Stack[-0x14] (READ)
// 0052ebe5: JZ 0x0052ebf3
//   XREF to: 0052ebf3 (CONDITIONAL_JUMP)
// 0052ebe7: CMP EDX,0x60
// 0052ebea: JL 0x0052ebf3
//   XREF to: 0052ebf3 (CONDITIONAL_JUMP)
// 0052ebec: MOV EAX,0x1
// 0052ebf1: JMP 0x0052eb9a
//   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)
// 0052ebf3: CMP dword ptr [ESP + 0x10],0x20
//   Label: LAB_0052ebf3
//   XREF to: Stack[-0x14] (READ)
// 0052ebf8: JZ 0x0052ec06
//   XREF to: 0052ec06 (CONDITIONAL_JUMP)
// 0052ebfa: CMP EDX,0x30
// 0052ebfd: JG 0x0052ec06
//   XREF to: 0052ec06 (CONDITIONAL_JUMP)
// 0052ebff: MOV EAX,0x2
// 0052ec04: JMP 0x0052eb9a
//   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)
// 0052ec06: MOV EAX,0x3
//   Label: LAB_0052ec06
// 0052ec0b: JMP 0x0052eb9a
//   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)
// 0052ec0d: MOV EAX,0x4
//   Label: LAB_0052ec0d
// 0052ec12: JMP 0x0052eb9a
//   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)
// 0052ec14: TEST ESI,ESI
//   Label: LAB_0052ec14
// 0052ec16: JL 0x0052eace
//   XREF to: 0052eace (CONDITIONAL_JUMP)
// 0052ec1c: CMP ESI,0x3
// 0052ec1f: JG 0x0052eace
//   XREF to: 0052eace (CONDITIONAL_JUMP)
// 0052ec25: JMP 0x0052eaf7
//   XREF to: 0052eaf7 (UNCONDITIONAL_JUMP)
// 0052ec2a: MOV EAX,dword ptr [EBX + 0x18]
//   Label: LAB_0052ec2a
// 0052ec2d: MOV dword ptr [EBX + 0x14],EAX
// 0052ec30: ADD ESP,0x14
// 0052ec33: POP EBP
// 0052ec34: POP EDI
// 0052ec35: POP ESI
// 0052ec36: POP EBX
// 0052ec37: RET
