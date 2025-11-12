// Name: sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80
// Address: 005a4c80
// Address Range: [[005a4c80, 005a5179]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80()
// Cross-references:
//   sound_sndmain.cpp_FUN_005aa3c0 (005aa3c0) at 005aa3cd [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a920e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_0064f907
//   TerminatedCString s_sound_sndmain_cpp_0064f90d
//   TerminatedCString s_wav_0064f922
//   TerminatedCString s_rb_0064f926
//   TerminatedCString s_sound_0064f929
//   TerminatedCString s_sound_sndmain_cpp_0064f92f
//   TerminatedCString s_Can_t_open_s_0064f944
//   TerminatedCString s_Failed_to_lock_sample_s_0064f952
//   TerminatedCString s_Error_reading_file_data__0064f96c
//   TerminatedCString s_sound_sndmain_cpp_0064f98c
//   TerminatedCString s_mp3_0064f9a1
//   TerminatedCString s_sound_sndmain_cpp_0064f9a5
//   TerminatedCString s_Don_t_know_length_of_sam_0064f9ba
//   TerminatedCString s_Failed_to_lock_sample_s_0064f9d9
//   TerminatedCString s_Error_decoding_file_data_0064f9f3
//   TerminatedCString s_sound_sndmain_cpp_0064fa15
//   TerminatedCString s_Unknown_sample_file_form_0064fa2a
//   WatcomStaticDestructorNode DAT_00681ae0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f49010
//   undefined4 DAT_03f49110
//   undefined4 DAT_03f49114
//   undefined1 DAT_03f51640
//   int g_LastSampleAccessIndex
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f6297c
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62afc
//   undefined4 DAT_03f62b00
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdlib.c_atexit_FUN_005ff060
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
//   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_CSfxSample_FUN_005a6170
//   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
//   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
//   sound_sndmain.cpp_logSoundError_FUN_005adba0
//   sound_sndmain.cpp_parseWavFile_FUN_005a3fe0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_ReadingOrDecodingSoundFile(undefined4 param_1) */

CSfxSample * sound_sndmain_cpp_ReadingOrDecodingSoundFile_FUN_005a4c80(void)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  long lVar4;
  void *buffer;
  SIZE_T SVar5;
  short *output_buffer;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  CSfxSample *pCVar7;
  int iVar8;
  CSfxSample *pCVar9;
  bool bVar10;
  byte bVar11;
  char *in_stack_00000004;
  char *in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_0000001c;
  char *in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_00000030;
  int in_stack_00000038;
  FILE *in_stack_0000003c;
  char cVar12;
  undefined4 in_stack_ffffff04;
  char *pcVar13;
  FILE *in_stack_ffffff30;
  
  bVar11 = 0;
  pCVar7 = g_SfxSamples;
  iVar8 = 0;
  do {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0((char *)pCVar7,in_stack_00000004);
    cVar12 = (char)in_stack_ffffff04;
    if (iVar2 == 0) {
      return pCVar7;
    }
    iVar8 = iVar8 + 1;
    pCVar7 = pCVar7 + 1;
  } while (iVar8 < 0x40);
  iVar8 = 0;
  do {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((g_SfxSamples[g_LastSampleAccessIndex].field8_0x150 == 0) &&
       (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
      pCVar7 = g_SfxSamples + g_LastSampleAccessIndex;
      bVar10 = pCVar7 == (CSfxSample *)0x0;
      goto LAB_005a4cea;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40);
  pCVar7 = (CSfxSample *)0x0;
  bVar10 = true;
LAB_005a4cea:
  if (bVar10) {
    return pCVar7;
  }
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar7);
  if ((DAT_03f51640 & 1) == 0) {
    DAT_03f51640 = DAT_03f51640 | 1;
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0((CMP3Decoder *)&DAT_03f49010);
    crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681ae0);
  }
  iVar8 = engine_dosio_c_getFileSize_FUN_00481880("sound",in_stack_00000014);
  pFVar3 = in_stack_00000018;
  pCVar9 = pCVar7;
  if (iVar8 < 1) goto LAB_005a4ef8;
  do {
    cVar1 = *(char *)&pFVar3->_ptr;
    (pCVar9->sample_info).name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *(char *)((int)&pFVar3->_ptr + 1);
    (pCVar9->sample_info).name[1] = cVar1;
    pFVar3 = (FILE *)((int)&pFVar3->_ptr + 2);
    pCVar9 = (CSfxSample *)((pCVar9->sample_info).name + 2);
  } while (cVar1 != '\0');
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)in_stack_00000018,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xffffff00);
  if (cVar12 == '.') {
    uVar6 = 0xffffffff;
    pcVar13 = &stack0xffffff04;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar12 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar11 * -2 + 1;
    } while (cVar12 != '\0');
    crt_string_c_memmove_FUN_005fe5e0(&stack0xffffff04,&stack0xffffff05,~uVar6 - 1);
  }
  iVar8 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff08,"wav");
  if (iVar8 == 0) {
    pFVar3 = engine_dosio_c_getFile_FUN_00481a50("sound",in_stack_00000024,"rb");
    if (pFVar3 == (FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x2fe;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
    }
    lVar4 = crt_stdio_c_ftell_FUN_00601560(in_stack_00000018);
    pCVar7->field14_0x170 = lVar4;
    iVar8 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                      (in_stack_0000001c,&pCVar7->field14_0x170,pCVar7);
    if (iVar8 == 0) goto LAB_005a4ef8;
    sound_sndmain_cpp_CalculateDistanceMaybe_FUN_005a45c0();
    pCVar7->field8_0x150 = 0;
    pCVar7->ref_count = 0;
    pCVar7->buffer_id = (void *)0x0;
    pCVar7->streaming_slot_index = -1;
    iVar8 = (pCVar7->sample_info).total_bytes;
    *(int *)pCVar7->field12_0x160 = iVar8;
    *(int *)(pCVar7->field12_0x160 + 4) = iVar8;
    *(int *)(pCVar7->field12_0x160 + 8) = iVar8;
    iVar8 = sound_sndmain_cpp_CSfxSample_FUN_005a6170(pCVar7);
    if (iVar8 == 0) goto LAB_005a4ef8;
    crt_stdio_c_fseek_FUN_005ffacc(in_stack_00000028,pCVar7->field14_0x170,0);
    buffer = (void *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(pCVar7);
    if (buffer == (void *)0x0) {
      pcVar13 = "Failed to lock sample %s\n";
    }
    else {
      pFVar3 = in_stack_00000030;
      SVar5 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(pCVar7);
      SVar5 = crt_stdio_c_fread_FUN_005fd990(buffer,SVar5,(SIZE_T)pFVar3,in_stack_ffffff30);
      if ((SVar5 == (pCVar7->sample_info).total_bytes) &&
         ((*(byte *)(in_stack_00000038 + 0xc) & 0x20) == 0)) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(pCVar7);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  (in_stack_0000003c,"..\\sound\\sndmain.cpp",0x337);
        return pCVar7;
      }
      pcVar13 = "Error reading file data for %s\n";
    }
  }
  else {
    iVar8 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff0c,"mp3");
    if (iVar8 != 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x37b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown sample file format extension: %s");
      return pCVar7;
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550
              ((CMP3Decoder *)&DAT_03f49010,(char *)in_stack_00000028);
    (pCVar7->sample_info).bit_depth = 0x10;
    (pCVar7->sample_info).num_channels = DAT_03f49114;
    iVar8 = DAT_03f49110;
    (pCVar7->sample_info).total_bytes = -1;
    (pCVar7->sample_info).sample_rate = iVar8;
    sound_sndmain_cpp_CalculateDistanceMaybe_FUN_005a45c0();
    if ((pCVar7->sample_info).total_bytes < 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x34d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know length of sample %s");
    }
    pCVar7->field8_0x150 = 0;
    pCVar7->ref_count = 0;
    pCVar7->buffer_id = (void *)0x0;
    pCVar7->streaming_slot_index = -1;
    iVar8 = (pCVar7->sample_info).total_bytes;
    *(int *)pCVar7->field12_0x160 = iVar8;
    *(int *)(pCVar7->field12_0x160 + 4) = iVar8;
    *(int *)(pCVar7->field12_0x160 + 8) = iVar8;
    iVar8 = sound_sndmain_cpp_CSfxSample_FUN_005a6170(pCVar7);
    if (iVar8 == 0) goto LAB_005a4ef8;
    output_buffer = (short *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(pCVar7);
    if (output_buffer == (short *)0x0) {
      pcVar13 = "Failed to lock sample %s\n";
    }
    else {
      iVar8 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                        ((CMP3Decoder *)&DAT_03f49010,output_buffer,
                         (pCVar7->sample_info).total_bytes);
      if (iVar8 == (pCVar7->sample_info).total_bytes) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(pCVar7);
        return pCVar7;
      }
      pcVar13 = "Error decoding file data from %s\n";
    }
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar13);
LAB_005a4ef8:
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0((CMP3Decoder *)&DAT_03f49010);
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar7);
  if (in_stack_00000030 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000030,"..\\sound\\sndmain.cpp",0x2eb);
  }
  return (CSfxSample *)0x0;
}


// Assembly code:
// 005a4c80: PUSH EBX
//   Label: sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80
// 005a4c81: PUSH ESI
// 005a4c82: PUSH EDI
// 005a4c83: PUSH EBP
// 005a4c84: SUB ESP,0x104
// 005a4c8a: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a4c90: MOV ESI,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a4c95: XOR EDI,EDI
// 005a4c97: MOV EDX,dword ptr [ESP + 0x118]
//   Label: LAB_005a4c97
//   XREF to: Stack[0x4] (READ)
// 005a4c9e: PUSH EDX
// 005a4c9f: PUSH ESI
//   XREF to: 03f6282c (DATA)
//   XREF to: 03f629ac (DATA)
// 005a4ca0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a4ca5: ADD ESP,0x8
// 005a4ca8: TEST EAX,EAX
// 005a4caa: JZ 0x005a4f45
//   XREF to: 005a4f45 (CONDITIONAL_JUMP)
// 005a4cb0: INC EDI
// 005a4cb1: ADD ESI,0x180
// 005a4cb7: CMP EDI,0x40
// 005a4cba: JL 0x005a4c97
//   XREF to: 005a4c97 (CONDITIONAL_JUMP)
// 005a4cbc: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a4cc2: XOR ESI,ESI
// 005a4cc4: XOR ECX,ECX
// 005a4cc6: INC EBX
//   Label: LAB_005a4cc6
// 005a4cc7: CMP EBX,0x40
// 005a4cca: JL 0x005a4cce
//   XREF to: 005a4cce (CONDITIONAL_JUMP)
// 005a4ccc: MOV EBX,ECX
// 005a4cce: IMUL EAX,EBX,0x180
//   Label: LAB_005a4cce
// 005a4cd4: MOV EDI,dword ptr [EAX + 0x3f6297c]
//   XREF to: 03f6297c (READ)
//   XREF to: 03f62afc (READ)
// 005a4cda: CMP ECX,EDI
// 005a4cdc: JZ 0x005a4f5e
//   XREF to: 005a4f5e (CONDITIONAL_JUMP)
// 005a4ce2: INC ESI
//   Label: LAB_005a4ce2
// 005a4ce3: CMP ESI,0x40
// 005a4ce6: JL 0x005a4cc6
//   XREF to: 005a4cc6 (CONDITIONAL_JUMP)
// 005a4ce8: XOR EAX,EAX
// 005a4cea: MOV EBP,EAX
//   Label: LAB_005a4cea
// 005a4cec: MOV dword ptr [0x03f62828],EBX
//   XREF to: 03f62828 (WRITE)
// 005a4cf2: JZ 0x005a4f34
//   XREF to: 005a4f34 (CONDITIONAL_JUMP)
// 005a4cf8: PUSH EAX
//   XREF to: 03f629ac (DATA)
// 005a4cf9: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a4cfe: MOV AH,byte ptr [0x03f51640]
//   XREF to: 03f51640 (READ)
// 005a4d04: ADD ESP,0x4
// 005a4d07: TEST AH,0x1
// 005a4d0a: JNZ 0x005a4d31
//   XREF to: 005a4d31 (CONDITIONAL_JUMP)
// 005a4d0c: MOV DL,AH
// 005a4d0e: OR DL,0x1
// 005a4d11: PUSH 0x3f49010
//   XREF to: 03f49010 (DATA)
// 005a4d16: MOV byte ptr [0x03f51640],DL
//   XREF to: 03f51640 (WRITE)
// 005a4d1c: CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   XREF to: 005344f0 (UNCONDITIONAL_CALL)
// 005a4d21: ADD ESP,0x4
// 005a4d24: PUSH 0x681ae0
//   XREF to: 00681ae0 (DATA)
// 005a4d29: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005a4d2e: ADD ESP,0x4
// 005a4d31: MOV EDX,dword ptr [ESP + 0x118]
//   Label: LAB_005a4d31
//   XREF to: Stack[0x4] (READ)
// 005a4d38: PUSH EDX
// 005a4d39: XOR EAX,EAX
// 005a4d3b: PUSH 0x64f907
//   XREF to: 0064f907 (DATA)
// 005a4d40: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a4d47: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005a4d4c: ADD ESP,0x8
// 005a4d4f: TEST EAX,EAX
// 005a4d51: JLE 0x005a4ef8
//   XREF to: 005a4ef8 (CONDITIONAL_JUMP)
// 005a4d57: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a4d5e: MOV EDI,EBP
// 005a4d60: PUSH EDI
// 005a4d61: MOV AL,byte ptr [ESI]
//   Label: LAB_005a4d61
// 005a4d63: MOV byte ptr [EDI],AL
// 005a4d65: CMP AL,0x0
// 005a4d67: JZ 0x005a4d79
//   XREF to: 005a4d79 (CONDITIONAL_JUMP)
// 005a4d69: MOV AL,byte ptr [ESI + 0x1]
// 005a4d6c: ADD ESI,0x2
// 005a4d6f: MOV byte ptr [EDI + 0x1],AL
// 005a4d72: ADD EDI,0x2
// 005a4d75: CMP AL,0x0
// 005a4d77: JNZ 0x005a4d61
//   XREF to: 005a4d61 (CONDITIONAL_JUMP)
// 005a4d79: POP EDI
//   Label: LAB_005a4d79
// 005a4d7a: MOV EAX,ESP
// 005a4d7c: PUSH EAX
// 005a4d7d: PUSH 0x0
// 005a4d7f: PUSH 0x0
// 005a4d81: PUSH 0x0
// 005a4d83: MOV ECX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x4] (READ)
// 005a4d8a: PUSH ECX
// 005a4d8b: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005a4d90: ADD ESP,0x14
// 005a4d93: CMP byte ptr [ESP],0x2e
//   XREF to: Stack[-0x114] (DATA)
// 005a4d97: JNZ 0x005a4db8
//   XREF to: 005a4db8 (CONDITIONAL_JUMP)
// 005a4d99: MOV EDI,ESP
// 005a4d9b: SUB ECX,ECX
// 005a4d9d: DEC ECX
// 005a4d9e: XOR EAX,EAX
// 005a4da0: SCASB.REPNE ES:EDI
// 005a4da2: NOT ECX
// 005a4da4: DEC ECX
// 005a4da5: PUSH ECX
// 005a4da6: LEA EAX,[ESP + 0x5]
//   XREF to: Stack[-0x113] (DATA)
// 005a4daa: PUSH EAX
// 005a4dab: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 005a4daf: PUSH EAX
// 005a4db0: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005a4db5: ADD ESP,0xc
// 005a4db8: PUSH 0x64f922
//   Label: LAB_005a4db8
//   XREF to: 0064f922 (DATA)
// 005a4dbd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005a4dc1: PUSH EAX
// 005a4dc2: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a4dc7: ADD ESP,0x8
// 005a4dca: TEST EAX,EAX
// 005a4dcc: JNZ 0x005a4ffb
//   XREF to: 005a4ffb (CONDITIONAL_JUMP)
// 005a4dd2: PUSH 0x64f926
//   XREF to: 0064f926 (DATA)
// 005a4dd7: MOV EDX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 005a4dde: PUSH EDX
// 005a4ddf: PUSH 0x64f929
//   XREF to: 0064f929 (DATA)
// 005a4de4: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005a4de9: ADD ESP,0xc
// 005a4dec: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a4df3: TEST EAX,EAX
// 005a4df5: JNZ 0x005a4e22
//   XREF to: 005a4e22 (CONDITIONAL_JUMP)
// 005a4df7: MOV EDI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a4dfe: PUSH EDI
// 005a4dff: MOV ECX,0x64f92f
//   XREF to: 0064f92f (PARAM)
// 005a4e04: MOV ESI,0x2fe
// 005a4e09: PUSH 0x64f944
//   XREF to: 0064f944 (DATA)
// 005a4e0e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a4e14: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a4e1a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a4e1f: ADD ESP,0x8
// 005a4e22: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_005a4e22
//   XREF to: Stack[-0x14] (READ)
// 005a4e29: PUSH EAX
// 005a4e2a: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 005a4e2f: ADD ESP,0x4
// 005a4e32: PUSH EBP
// 005a4e33: MOV dword ptr [EBP + 0x170],EAX
// 005a4e39: LEA EAX,[EBP + 0x170]
// 005a4e3f: PUSH EAX
// 005a4e40: MOV EDX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005a4e47: PUSH EDX
// 005a4e48: CALL sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
//   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)
// 005a4e4d: ADD ESP,0xc
// 005a4e50: TEST EAX,EAX
// 005a4e52: JZ 0x005a4ef8
//   XREF to: 005a4ef8 (CONDITIONAL_JUMP)
// 005a4e58: PUSH EBP
// 005a4e59: CALL sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
//   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
// 005a4e5e: MOV dword ptr [EBP + 0x150],0x0
// 005a4e68: MOV dword ptr [EBP + 0x154],0x0
// 005a4e72: MOV dword ptr [EBP + 0x158],0x0
// 005a4e7c: MOV dword ptr [EBP + 0x15c],0xffffffff
// 005a4e86: MOV EAX,dword ptr [EBP + 0x110]
// 005a4e8c: MOV dword ptr [EBP + 0x160],EAX
// 005a4e92: ADD ESP,0x4
// 005a4e95: MOV dword ptr [EBP + 0x164],EAX
// 005a4e9b: PUSH EBP
// 005a4e9c: MOV dword ptr [EBP + 0x168],EAX
// 005a4ea2: CALL sound_sndmain.cpp_CSfxSample_FUN_005a6170
//   XREF to: 005a6170 (UNCONDITIONAL_CALL)
// 005a4ea7: ADD ESP,0x4
// 005a4eaa: TEST EAX,EAX
// 005a4eac: JZ 0x005a4ef8
//   XREF to: 005a4ef8 (CONDITIONAL_JUMP)
// 005a4eae: PUSH 0x0
// 005a4eb0: MOV ECX,dword ptr [EBP + 0x170]
// 005a4eb6: PUSH ECX
// 005a4eb7: MOV ESI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005a4ebe: PUSH ESI
// 005a4ebf: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 005a4ec4: ADD ESP,0xc
// 005a4ec7: MOV EDI,dword ptr [EBP + 0x110]
// 005a4ecd: PUSH EDI
// 005a4ece: PUSH 0x0
// 005a4ed0: PUSH EBP
// 005a4ed1: CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
//   XREF to: 005a6430 (UNCONDITIONAL_CALL)
// 005a4ed6: MOV ESI,EAX
// 005a4ed8: ADD ESP,0xc
// 005a4edb: TEST EAX,EAX
// 005a4edd: JNZ 0x005a4f74
//   XREF to: 005a4f74 (CONDITIONAL_JUMP)
// 005a4ee3: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a4eea: PUSH EAX
// 005a4eeb: PUSH 0x64f952
//   XREF to: 0064f952 (DATA)
// 005a4ef0: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   Label: LAB_005a4ef0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a4ef5: ADD ESP,0x8
// 005a4ef8: PUSH 0x3f49010
//   Label: LAB_005a4ef8
//   XREF to: 03f49010 (DATA)
// 005a4efd: CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
//   XREF to: 005349e0 (UNCONDITIONAL_CALL)
// 005a4f02: ADD ESP,0x4
// 005a4f05: PUSH EBP
// 005a4f06: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a4f0b: ADD ESP,0x4
// 005a4f0e: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 005a4f15: TEST EDX,EDX
// 005a4f17: JZ 0x005a4f2c
//   XREF to: 005a4f2c (CONDITIONAL_JUMP)
// 005a4f19: PUSH 0x2eb
// 005a4f1e: PUSH 0x64f90d
//   XREF to: 0064f90d (DATA)
// 005a4f23: PUSH EDX
// 005a4f24: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005a4f29: ADD ESP,0xc
// 005a4f2c: MOV EBX,dword ptr [0x03f62828]
//   Label: LAB_005a4f2c
//   XREF to: 03f62828 (READ)
// 005a4f32: XOR EAX,EAX
// 005a4f34: MOV dword ptr [0x03f62828],EBX
//   Label: LAB_005a4f34
//   XREF to: 03f62828 (WRITE)
// 005a4f3a: ADD ESP,0x104
// 005a4f40: POP EBP
// 005a4f41: POP EDI
// 005a4f42: POP ESI
// 005a4f43: POP EBX
// 005a4f44: RET
// 005a4f45: MOV EBX,dword ptr [0x03f62828]
//   Label: LAB_005a4f45
//   XREF to: 03f62828 (READ)
// 005a4f4b: MOV EAX,ESI
//   XREF to: 03f6282c (DATA)
// 005a4f4d: MOV dword ptr [0x03f62828],EBX
//   XREF to: 03f62828 (WRITE)
// 005a4f53: ADD ESP,0x104
// 005a4f59: POP EBP
// 005a4f5a: POP EDI
// 005a4f5b: POP ESI
// 005a4f5c: POP EBX
// 005a4f5d: RET
// 005a4f5e: CMP EDI,dword ptr [EAX + 0x3f62980]
//   Label: LAB_005a4f5e
//   XREF to: 03f62b00 (READ)
// 005a4f64: JNZ 0x005a4ce2
//   XREF to: 005a4ce2 (CONDITIONAL_JUMP)
// 005a4f6a: ADD EAX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a4f6f: JMP 0x005a4cea
//   XREF to: 005a4cea (UNCONDITIONAL_JUMP)
// 005a4f74: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_005a4f74
//   XREF to: Stack[-0x14] (READ)
// 005a4f7b: PUSH EAX
// 005a4f7c: MOV EDX,dword ptr [EBP + 0x110]
// 005a4f82: PUSH EDX
// 005a4f83: PUSH EBP
// 005a4f84: CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a4f89: ADD ESP,0x4
// 005a4f8c: PUSH EAX
// 005a4f8d: PUSH ESI
// 005a4f8e: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005a4f93: MOV ECX,dword ptr [EBP + 0x110]
// 005a4f99: ADD ESP,0x10
// 005a4f9c: CMP EAX,ECX
// 005a4f9e: JNZ 0x005a4fe9
//   XREF to: 005a4fe9 (CONDITIONAL_JUMP)
// 005a4fa0: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 005a4fa7: TEST byte ptr [EAX + 0xc],0x20
// 005a4fab: JNZ 0x005a4fe9
//   XREF to: 005a4fe9 (CONDITIONAL_JUMP)
// 005a4fad: PUSH EBP
// 005a4fae: CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
//   XREF to: 005a6540 (UNCONDITIONAL_CALL)
// 005a4fb3: ADD ESP,0x4
// 005a4fb6: PUSH 0x337
// 005a4fbb: PUSH 0x64f98c
//   XREF to: 0064f98c (DATA)
// 005a4fc0: MOV ESI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005a4fc7: PUSH ESI
// 005a4fc8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005a4fcd: ADD ESP,0xc
// 005a4fd0: MOV EBX,dword ptr [0x03f62828]
//   Label: LAB_005a4fd0
//   XREF to: 03f62828 (READ)
// 005a4fd6: MOV EAX,EBP
// 005a4fd8: MOV dword ptr [0x03f62828],EBX
//   XREF to: 03f62828 (WRITE)
// 005a4fde: ADD ESP,0x104
// 005a4fe4: POP EBP
// 005a4fe5: POP EDI
// 005a4fe6: POP ESI
// 005a4fe7: POP EBX
// 005a4fe8: RET
// 005a4fe9: MOV EDI,dword ptr [ESP + 0x118]
//   Label: LAB_005a4fe9
//   XREF to: Stack[0x4] (READ)
// 005a4ff0: PUSH EDI
// 005a4ff1: PUSH 0x64f96c
//   XREF to: 0064f96c (DATA)
// 005a4ff6: JMP 0x005a4ef0
//   XREF to: 005a4ef0 (UNCONDITIONAL_JUMP)
// 005a4ffb: PUSH 0x64f9a1
//   Label: LAB_005a4ffb
//   XREF to: 0064f9a1 (DATA)
// 005a5000: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005a5004: PUSH EAX
// 005a5005: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a500a: ADD ESP,0x8
// 005a500d: TEST EAX,EAX
// 005a500f: JNZ 0x005a514a
//   XREF to: 005a514a (CONDITIONAL_JUMP)
// 005a5015: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a501c: PUSH EDX
// 005a501d: PUSH 0x3f49010
//   XREF to: 03f49010 (DATA)
// 005a5022: CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   XREF to: 00534550 (UNCONDITIONAL_CALL)
// 005a5027: MOV dword ptr [EBP + 0x104],0x10
// 005a5031: MOV EAX,[0x03f49114]
//   XREF to: 03f49114 (READ)
// 005a5036: MOV dword ptr [EBP + 0x108],EAX
// 005a503c: ADD ESP,0x8
// 005a503f: MOV EAX,[0x03f49110]
//   XREF to: 03f49110 (READ)
// 005a5044: MOV dword ptr [EBP + 0x110],0xffffffff
// 005a504e: PUSH EBP
// 005a504f: MOV dword ptr [EBP + 0x10c],EAX
// 005a5055: CALL sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0
//   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
// 005a505a: MOV ECX,dword ptr [EBP + 0x110]
// 005a5060: ADD ESP,0x4
// 005a5063: TEST ECX,ECX
// 005a5065: JGE 0x005a5092
//   XREF to: 005a5092 (CONDITIONAL_JUMP)
// 005a5067: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a506e: PUSH EAX
// 005a506f: MOV ESI,0x64f9a5
//   XREF to: 0064f9a5 (DATA)
// 005a5074: MOV EDI,0x34d
// 005a5079: PUSH 0x64f9ba
//   XREF to: 0064f9ba (DATA)
// 005a507e: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a5084: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a508a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a508f: ADD ESP,0x8
// 005a5092: MOV dword ptr [EBP + 0x150],0x0
//   Label: LAB_005a5092
// 005a509c: MOV dword ptr [EBP + 0x154],0x0
// 005a50a6: MOV dword ptr [EBP + 0x158],0x0
// 005a50b0: MOV dword ptr [EBP + 0x15c],0xffffffff
// 005a50ba: MOV EAX,dword ptr [EBP + 0x110]
// 005a50c0: MOV dword ptr [EBP + 0x160],EAX
// 005a50c6: MOV dword ptr [EBP + 0x164],EAX
// 005a50cc: PUSH EBP
// 005a50cd: MOV dword ptr [EBP + 0x168],EAX
// 005a50d3: CALL sound_sndmain.cpp_CSfxSample_FUN_005a6170
//   XREF to: 005a6170 (UNCONDITIONAL_CALL)
// 005a50d8: ADD ESP,0x4
// 005a50db: TEST EAX,EAX
// 005a50dd: JZ 0x005a4ef8
//   XREF to: 005a4ef8 (CONDITIONAL_JUMP)
// 005a50e3: MOV EDX,dword ptr [EBP + 0x110]
// 005a50e9: PUSH EDX
// 005a50ea: PUSH 0x0
// 005a50ec: PUSH EBP
// 005a50ed: CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
//   XREF to: 005a6430 (UNCONDITIONAL_CALL)
// 005a50f2: ADD ESP,0xc
// 005a50f5: TEST EAX,EAX
// 005a50f7: JZ 0x005a512a
//   XREF to: 005a512a (CONDITIONAL_JUMP)
// 005a50f9: MOV ECX,dword ptr [EBP + 0x110]
// 005a50ff: PUSH ECX
// 005a5100: PUSH EAX
// 005a5101: PUSH 0x3f49010
//   XREF to: 03f49010 (DATA)
// 005a5106: CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
//   XREF to: 00534a60 (UNCONDITIONAL_CALL)
// 005a510b: MOV ESI,dword ptr [EBP + 0x110]
// 005a5111: ADD ESP,0xc
// 005a5114: CMP EAX,ESI
// 005a5116: JZ 0x005a513c
//   XREF to: 005a513c (CONDITIONAL_JUMP)
// 005a5118: MOV EDI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005a511f: PUSH EDI
// 005a5120: PUSH 0x64f9f3
//   XREF to: 0064f9f3 (DATA)
// 005a5125: JMP 0x005a4ef0
//   XREF to: 005a4ef0 (UNCONDITIONAL_JUMP)
// 005a512a: MOV EAX,dword ptr [ESP + 0x118]
//   Label: LAB_005a512a
//   XREF to: Stack[0x4] (READ)
// 005a5131: PUSH EAX
// 005a5132: PUSH 0x64f9d9
//   XREF to: 0064f9d9 (DATA)
// 005a5137: JMP 0x005a4ef0
//   XREF to: 005a4ef0 (UNCONDITIONAL_JUMP)
// 005a513c: PUSH EBP
//   Label: LAB_005a513c
// 005a513d: CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
//   XREF to: 005a6540 (UNCONDITIONAL_CALL)
// 005a5142: ADD ESP,0x4
// 005a5145: JMP 0x005a4fd0
//   XREF to: 005a4fd0 (UNCONDITIONAL_JUMP)
// 005a514a: MOV EAX,dword ptr [ESP + 0x118]
//   Label: LAB_005a514a
//   XREF to: Stack[0x4] (READ)
// 005a5151: PUSH EAX
// 005a5152: MOV ESI,0x64fa15
//   XREF to: 0064fa15 (DATA)
// 005a5157: MOV EDI,0x37b
// 005a515c: PUSH 0x64fa2a
//   XREF to: 0064fa2a (DATA)
// 005a5161: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a5167: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a516d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a5172: ADD ESP,0x8
// 005a5175: JMP 0x005a4fd0
//   XREF to: 005a4fd0 (UNCONDITIONAL_JUMP)
