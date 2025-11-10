// Name: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
// Address: 00534630
// Address Range: [[00534630, 005349dd]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder * this_ptr, FILE * file_handle, int file_size)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 (00534550) at 005345af [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005acfba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ac5a
//   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
//   TerminatedCString s_sound_mp3_cpp_0063aca4
//   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
//   TerminatedCString s_sound_mp3_cpp_0063ace1
//   TerminatedCString s_sound_mp3_cpp_0063acf2
//   TerminatedCString s_sound_mp3_cpp_0063ad03
//   TerminatedCString s_sound_mp3_cpp_0063ad14
//   TerminatedCString s_Out_of_memory_File_s_0063ad25
//   double DOUBLE_0063b2aa = 1000
//   void*[4][4] g_MpegLayer2AllocationTables
//   double[2][4] g_MpegSampleRateTable
//   int[2][3][15] g_MpegBitrateTable
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[256] g_CurrentMp3Filename
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
//   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
//   sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0

#include "nocturne.h"

int __cdecl
sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630
          (CMP3Decoder *this_ptr,FILE *file_handle,int file_size)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  CFileBitStream *bitstream;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  CMP3Decoder *this_ptr_00;
  BADSPACEBASE *in_ESP;
  streambuf *unaff_EBP;
  int unaff_ESI;
  FILE *pFVar8;
  float10 fVar9;
  double dVar10;
  int in_stack_0000001c;
  int in_stack_00000024;
  undefined4 in_stack_00000030;
  int in_stack_ffffffb4;
  int local_3c;
  undefined1 *local_28;
  int *local_24;
  int local_20;
  streambuf *local_18;
  int local_14;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(this_ptr);
  local_18 = (streambuf *)0x1000;
  pFVar8 = file_handle + 0x2f8;
  if ((FILE *)pFVar8->_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pFVar8->_ptr,"..\\sound\\mp3.cpp",0x20b);
    pFVar8->_ptr = (char *)0x0;
  }
  if ((void *)file_handle[0x2f8]._cnt != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              ((void *)file_handle[0x2f8]._cnt,"..\\sound\\mp3.cpp",0x210);
    file_handle[0x2f8]._cnt = 0;
  }
  pFVar8->_ptr = (char *)file_size;
  lVar2 = crt_stdio_c_ftell_FUN_00601560((FILE *)file_size);
  file_handle[0x2f9]._cnt = lVar2;
  file_handle[0x2f9]._link = local_18;
  file_handle[0x2f8]._link = unaff_EBP;
  pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250((int)unaff_EBP,"..\\sound\\mp3.cpp",0x1ff);
  file_handle[0x2f8]._cnt = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x200;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Out of memory.  File: %s",g_CurrentMp3Filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc((FILE *)pFVar8->_ptr,file_handle[0x2f9]._cnt,0);
  file_handle[0x2f8]._handle = 0;
  file_handle[0x2f8]._bufsize = 0;
  file_handle[0x2f8]._flag = 0;
  file_handle[0x2f9]._flag = (uint)file_handle[0x2f9]._link;
  *(undefined4 *)&file_handle[0x2f8]._ungotten = 0;
  bitstream = (CFileBitStream *)(in_stack_0000001c + 0x5320);
  file_handle[0x2f9]._ptr = (char *)0x0;
  uVar6 = *(uint *)(in_stack_0000001c + 0x532c) & 7;
  if (uVar6 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,8 - uVar6);
  }
  uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,0xc);
  while ((local_28 = &stack0xffffffa8, (uVar6 & 0x1fff) != 0xfff &&
         (*(int *)(in_stack_0000001c + 0x533c) == 0))) {
    uVar4 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bitstream,8);
    uVar6 = uVar6 << 8 | uVar4;
  }
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
            ((CFileBitStream *)(in_stack_00000024 + 0x5320),(SMpegFrameHeader *)&local_28);
  local_20 = local_24[7];
  local_14 = (local_20 != 3) + 1;
  if (local_24[1] == 2) {
    unaff_ESI = local_24[1] + -1;
    iVar1 = *local_24;
    fVar9 = (float10)g_MpegSampleRateTable[iVar1][local_24[4]];
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44(g_MpegBitrateTable[iVar1 + -1][local_24[1] + 2]
                                         [local_24[3]] / local_14,iVar1 * 0x20));
    iVar7 = (int)((ulonglong)dVar10 >> 0x20);
    iVar5 = (int)ROUND(fVar9);
    if (iVar1 == 1) {
      if (((iVar5 == 0x30) && (0x37 < iVar7)) || ((0x37 < iVar7 && (iVar7 < 0x51)))) {
        uVar6 = 0;
      }
      else if ((iVar5 == 0x30) || (iVar7 < 0x60)) {
        if ((iVar5 == 0x20) || (0x30 < iVar7)) {
          uVar6 = 3;
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 4;
    }
    if (uVar6 != file_handle->_flag) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1a2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
    }
  }
  if (local_24[7] == 1) {
    if ((((local_24[1] < 1) || (3 < local_24[1])) || (local_24[8] < 0)) || (3 < local_24[8])) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0x1b2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("js_bound bad layer/modext (%d/%d)  File: %s");
    }
  }
  fVar9 = (float10)g_MpegSampleRateTable[in_stack_ffffffb4][local_3c] * (float10)DOUBLE_0063b2aa;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000030,in_stack_00000030));
  this_ptr_00 = (CMP3Decoder *)((ulonglong)dVar10 >> 0x20);
  *(int *)(SUB84(dVar10,0) + 0x100) = (int)ROUND(fVar9);
  this_ptr_00->num_channels = unaff_ESI;
  iVar5 = sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(this_ptr_00,in_stack_ffffffb4);
  return iVar5;
}


// Assembly code:
// 00534630: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630
// 00534631: PUSH ESI
// 00534632: PUSH EDI
// 00534633: PUSH EBP
// 00534634: SUB ESP,0x68
// 00534637: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0053463b: PUSH EDX
// 0053463c: CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
//   XREF to: 005349e0 (UNCONDITIONAL_CALL)
// 00534641: ADD ESP,0x4
// 00534644: MOV ECX,0x1000
// 00534649: MOV ESI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0053464d: MOV EBP,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 00534654: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 0053465b: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0053465f: ADD ESI,0x5320
// 00534665: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00534669: MOV EBX,ESI
// 0053466b: MOV EAX,dword ptr [ESI]
// 0053466d: MOV EDI,ESI
// 0053466f: TEST EAX,EAX
// 00534671: JNZ 0x0053477e
//   XREF to: 0053477e (CONDITIONAL_JUMP)
// 00534677: MOV ECX,dword ptr [EDI + 0x4]
//   Label: LAB_00534677
// 0053467a: TEST ECX,ECX
// 0053467c: JZ 0x00534698
//   XREF to: 00534698 (CONDITIONAL_JUMP)
// 0053467e: PUSH 0x210
// 00534683: PUSH 0x63acf2
//   XREF to: 0063acf2 (DATA)
// 00534688: PUSH ECX
// 00534689: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0053468e: ADD ESP,0xc
// 00534691: MOV dword ptr [EDI + 0x4],0x0
// 00534698: PUSH EBP
//   Label: LAB_00534698
// 00534699: MOV dword ptr [EBX],EBP
// 0053469b: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 005346a0: ADD ESP,0x4
// 005346a3: PUSH 0x1ff
// 005346a8: MOV dword ptr [EBX + 0x20],EAX
// 005346ab: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x24] (READ)
// 005346af: PUSH 0x63ad03
//   XREF to: 0063ad03 (DATA)
// 005346b4: MOV dword ptr [EBX + 0x24],EAX
// 005346b7: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 005346bb: PUSH EAX
// 005346bc: MOV dword ptr [EBX + 0x8],EAX
// 005346bf: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005346c4: ADD ESP,0xc
// 005346c7: MOV dword ptr [EBX + 0x4],EAX
// 005346ca: TEST EAX,EAX
// 005346cc: JNZ 0x005346f5
//   XREF to: 005346f5 (CONDITIONAL_JUMP)
// 005346ce: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 005346d3: MOV EAX,0x63ad14
//   XREF to: 0063ad14 (PARAM)
// 005346d8: MOV EDX,0x200
// 005346dd: PUSH 0x63ad25
//   XREF to: 0063ad25 (DATA)
// 005346e2: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005346e7: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005346ed: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005346f2: ADD ESP,0x8
// 005346f5: PUSH 0x0
//   Label: LAB_005346f5
// 005346f7: MOV ECX,dword ptr [EBX + 0x20]
// 005346fa: PUSH ECX
// 005346fb: MOV ESI,dword ptr [EBX]
// 005346fd: PUSH ESI
// 005346fe: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00534703: MOV dword ptr [EBX + 0x10],0x0
// 0053470a: MOV dword ptr [EBX + 0x14],0x0
// 00534711: MOV EDI,0xfff
// 00534716: MOV dword ptr [EBX + 0xc],0x0
// 0053471d: MOV EBP,0x1fff
// 00534722: MOV EAX,dword ptr [EBX + 0x24]
// 00534725: ADD ESP,0xc
// 00534728: MOV dword ptr [EBX + 0x28],EAX
// 0053472b: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0053472f: MOV dword ptr [EBX + 0x18],0x0
// 00534736: ADD EAX,0x5320
// 0053473b: MOV dword ptr [EBX + 0x1c],0x0
// 00534742: MOV EBX,0xc
// 00534747: MOV EDX,dword ptr [EAX + 0xc]
// 0053474a: MOV ESI,EAX
// 0053474c: AND EDX,0x7
// 0053474f: JNZ 0x0053479c
//   XREF to: 0053479c (CONDITIONAL_JUMP)
// 00534751: PUSH EBX
//   Label: LAB_00534751
// 00534752: PUSH ESI
// 00534753: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00534758: ADD ESP,0x8
// 0053475b: MOV EBX,EAX
// 0053475d: MOV EAX,EBX
//   Label: LAB_0053475d
// 0053475f: AND EAX,EBP
// 00534761: CMP EAX,EDI
// 00534763: JZ 0x005347af
//   XREF to: 005347af (CONDITIONAL_JUMP)
// 00534765: MOV EAX,dword ptr [ESI + 0x1c]
// 00534768: TEST EAX,EAX
// 0053476a: JNZ 0x005347af
//   XREF to: 005347af (CONDITIONAL_JUMP)
// 0053476c: PUSH 0x8
// 0053476e: PUSH ESI
// 0053476f: SHL EBX,0x8
// 00534772: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00534777: ADD ESP,0x8
// 0053477a: OR EBX,EAX
// 0053477c: JMP 0x0053475d
//   XREF to: 0053475d (UNCONDITIONAL_JUMP)
// 0053477e: PUSH 0x20b
//   Label: LAB_0053477e
// 00534783: PUSH 0x63ace1
//   XREF to: 0063ace1 (DATA)
// 00534788: PUSH EAX
// 00534789: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0053478e: ADD ESP,0xc
// 00534791: MOV dword ptr [ESI],0x0
// 00534797: JMP 0x00534677
//   XREF to: 00534677 (UNCONDITIONAL_JUMP)
// 0053479c: MOV ECX,0x8
//   Label: LAB_0053479c
// 005347a1: SUB ECX,EDX
// 005347a3: PUSH ECX
// 005347a4: PUSH EAX
// 005347a5: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 005347aa: ADD ESP,0x8
// 005347ad: JMP 0x00534751
//   XREF to: 00534751 (UNCONDITIONAL_JUMP)
// 005347af: MOV EAX,ESP
//   Label: LAB_005347af
// 005347b1: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005347b5: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x48] (DATA)
// 005347b9: PUSH EAX
// 005347ba: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 005347c1: ADD EAX,0x5320
// 005347c6: PUSH EAX
// 005347c7: CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
//   XREF to: 0052f5b0 (UNCONDITIONAL_CALL)
// 005347cc: ADD ESP,0x8
// 005347cf: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x48] (READ)
// 005347d3: MOV EAX,dword ptr [EDI + 0x1c]
//   XREF to: Stack[-0x5c] (READ)
// 005347d6: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x48] (DATA)
// 005347da: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005347de: CMP EAX,0x3
// 005347e1: SETNZ AL
// 005347e4: AND EAX,0xff
// 005347e9: INC EAX
// 005347ea: MOV dword ptr [EBX + 0x10],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005347ed: CMP dword ptr [EDI + 0x4],0x2
//   XREF to: Stack[-0x74] (READ)
// 005347f1: JNZ 0x005349b4
//   XREF to: 005349b4 (CONDITIONAL_JUMP)
// 005347f7: MOV EAX,dword ptr [EBX + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005347fa: MOV ESI,dword ptr [EBX]
//   XREF to: Stack[-0x48] (DATA)
// 005347fc: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00534800: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x74] (READ)
// 00534803: DEC EAX
// 00534804: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00534808: MOV EAX,dword ptr [ESI + 0xc]
//   XREF to: Stack[-0x6c] (READ)
// 0053480b: MOV EBP,dword ptr [ESI]
//   XREF to: Stack[-0x78] (DATA)
// 0053480d: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00534811: LEA EAX,[EBP*0x4 + 0x0]
// 00534818: SUB EAX,EBP
// 0053481a: SHL EAX,0x2
// 0053481d: MOV ECX,EAX
// 0053481f: SHL ECX,0x4
// 00534822: SUB ECX,EAX
// 00534824: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (READ)
// 00534828: SHL EAX,0x2
// 0053482b: MOV EDX,EAX
// 0053482d: SHL EAX,0x4
// 00534830: SUB EAX,EDX
// 00534832: ADD ECX,EAX
// 00534834: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 00534838: MOV EDX,dword ptr [ECX + EAX*0x4 + 0x67e258]
//   XREF to: 0067e258 (DATA)
// 0053483f: MOV EAX,EDX
// 00534841: MOV ECX,dword ptr [EBX + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 00534844: SAR EDX,0x1f
// 00534847: IDIV ECX
// 00534849: MOV EDX,EAX
// 0053484b: MOV EAX,EBP
// 0053484d: MOV ECX,dword ptr [ESI + 0x10]
//   XREF to: Stack[-0x68] (READ)
// 00534850: SHL EAX,0x5
// 00534853: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00534857: FLD double ptr [EAX + ECX*0x8 + 0x67e218]
//   XREF to: 0067e218 (DATA)
// 0053485e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00534863: FISTP dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (WRITE)
// 00534867: CMP EBP,0x1
// 0053486a: JNZ 0x005349aa
//   XREF to: 005349aa (CONDITIONAL_JUMP)
// 00534870: CMP dword ptr [ESP + 0x64],0x30
//   XREF to: Stack[-0x14] (READ)
// 00534875: JNZ 0x00534966
//   XREF to: 00534966 (CONDITIONAL_JUMP)
// 0053487b: CMP EDX,0x38
// 0053487e: JL 0x00534966
//   XREF to: 00534966 (CONDITIONAL_JUMP)
// 00534884: XOR EAX,EAX
//   Label: LAB_00534884
// 00534886: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00534886
//   XREF to: Stack[-0x20] (READ)
// 0053488a: CMP EAX,dword ptr [EDX + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0053488d: JZ 0x005348b7
//   XREF to: 005348b7 (CONDITIONAL_JUMP)
// 0053488f: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 00534894: MOV ESI,0x63ac5a
//   XREF to: 0063ac5a (DATA)
// 00534899: MOV EBP,0x1a2
// 0053489e: PUSH 0x63ac6b
//   XREF to: 0063ac6b (DATA)
// 005348a3: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005348a9: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005348af: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005348b4: ADD ESP,0x8
// 005348b7: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_005348b7
//   XREF to: Stack[-0x18] (READ)
// 005348bb: MOV dword ptr [EBX + 0x18],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005348be: MOV EAX,dword ptr [EDI + 0x1c]
//   Label: LAB_005348be
//   XREF to: Stack[-0x5c] (READ)
// 005348c1: CMP EAX,0x1
// 005348c4: JNZ 0x005349d6
//   XREF to: 005349d6 (CONDITIONAL_JUMP)
// 005348ca: MOV EBP,dword ptr [EDI + 0x4]
//   XREF to: Stack[-0x74] (READ)
// 005348cd: MOV ESI,dword ptr [EDI + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 005348d0: CMP EBP,EAX
// 005348d2: JL 0x005348dd
//   XREF to: 005348dd (CONDITIONAL_JUMP)
// 005348d4: CMP EBP,0x3
// 005348d7: JLE 0x005349c0
//   XREF to: 005349c0 (CONDITIONAL_JUMP)
// 005348dd: PUSH 0x2f68188
//   Label: LAB_005348dd
//   XREF to: 02f68188 (DATA)
// 005348e2: PUSH ESI
// 005348e3: PUSH EBP
// 005348e4: MOV EDX,0x63aca4
//   XREF to: 0063aca4 (PARAM)
// 005348e9: MOV ECX,0x1b2
// 005348ee: PUSH 0x63acb5
//   XREF to: 0063acb5 (DATA)
// 005348f3: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005348f9: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005348ff: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534904: ADD ESP,0x10
// 00534907: SHL ESI,0x2
//   Label: LAB_00534907
// 0053490a: SHL EBP,0x4
// 0053490d: LEA EAX,[ESI + EBP*0x1]
// 00534910: MOV EAX,dword ptr [EAX + 0x67d820]
//   XREF to: 0067d820 (DATA)
// 00534916: MOV dword ptr [EBX + 0x14],EAX
//   Label: LAB_00534916
//   XREF to: Stack[-0x34] (WRITE)
// 00534919: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0053491c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (READ)
// 00534920: SHL EDX,0x5
// 00534923: FLD double ptr [EDX + EAX*0x8 + 0x67e218]
//   XREF to: 0067e218 (DATA)
// 0053492a: FMUL double ptr [0x0063b2aa]
//   XREF to: 0063b2aa (READ)
// 00534930: PUSH 0x0
// 00534932: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 00534939: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 00534940: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00534945: FISTP dword ptr [EAX + 0x100]
// 0053494b: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x38] (READ)
// 0053494f: PUSH EDX
// 00534950: MOV dword ptr [EDX + 0x104],EAX
// 00534956: CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
//   XREF to: 00534ba0 (UNCONDITIONAL_CALL)
// 0053495b: ADD ESP,0x8
// 0053495e: ADD ESP,0x68
// 00534961: POP EBP
// 00534962: POP EDI
// 00534963: POP ESI
// 00534964: POP EBX
// 00534965: RET
// 00534966: CMP EDX,0x38
//   Label: LAB_00534966
// 00534969: JL 0x00534974
//   XREF to: 00534974 (CONDITIONAL_JUMP)
// 0053496b: CMP EDX,0x50
// 0053496e: JLE 0x00534884
//   XREF to: 00534884 (CONDITIONAL_JUMP)
// 00534974: CMP dword ptr [ESP + 0x64],0x30
//   Label: LAB_00534974
//   XREF to: Stack[-0x14] (READ)
// 00534979: JZ 0x0053498a
//   XREF to: 0053498a (CONDITIONAL_JUMP)
// 0053497b: CMP EDX,0x60
// 0053497e: JL 0x0053498a
//   XREF to: 0053498a (CONDITIONAL_JUMP)
// 00534980: MOV EAX,0x1
// 00534985: JMP 0x00534886
//   XREF to: 00534886 (UNCONDITIONAL_JUMP)
// 0053498a: CMP dword ptr [ESP + 0x64],0x20
//   Label: LAB_0053498a
//   XREF to: Stack[-0x14] (READ)
// 0053498f: JZ 0x005349a0
//   XREF to: 005349a0 (CONDITIONAL_JUMP)
// 00534991: CMP EDX,0x30
// 00534994: JG 0x005349a0
//   XREF to: 005349a0 (CONDITIONAL_JUMP)
// 00534996: MOV EAX,0x2
// 0053499b: JMP 0x00534886
//   XREF to: 00534886 (UNCONDITIONAL_JUMP)
// 005349a0: MOV EAX,0x3
//   Label: LAB_005349a0
// 005349a5: JMP 0x00534886
//   XREF to: 00534886 (UNCONDITIONAL_JUMP)
// 005349aa: MOV EAX,0x4
//   Label: LAB_005349aa
// 005349af: JMP 0x00534886
//   XREF to: 00534886 (UNCONDITIONAL_JUMP)
// 005349b4: MOV dword ptr [EBX + 0x18],0x20
//   Label: LAB_005349b4
//   XREF to: Stack[-0x30] (WRITE)
// 005349bb: JMP 0x005348be
//   XREF to: 005348be (UNCONDITIONAL_JUMP)
// 005349c0: TEST ESI,ESI
//   Label: LAB_005349c0
// 005349c2: JL 0x005348dd
//   XREF to: 005348dd (CONDITIONAL_JUMP)
// 005349c8: CMP ESI,0x3
// 005349cb: JG 0x005348dd
//   XREF to: 005348dd (CONDITIONAL_JUMP)
// 005349d1: JMP 0x00534907
//   XREF to: 00534907 (UNCONDITIONAL_JUMP)
// 005349d6: MOV EAX,dword ptr [EBX + 0x18]
//   Label: LAB_005349d6
//   XREF to: Stack[-0x30] (READ)
// 005349d9: JMP 0x00534916
//   XREF to: 00534916 (UNCONDITIONAL_JUMP)
