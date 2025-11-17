// Name: sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
// Address: 005aa3f0
// Address Range: [[005aa3f0, 005aa652]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0(CSfxSample * out_sample)
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b3ba0 (005b3ba0) at 005b3bd5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad3ec [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_00650b55
//   TerminatedCString s_wav_00650b5b
//   TerminatedCString s_rb_00650b5f
//   TerminatedCString s_sound_00650b62
//   TerminatedCString s_sound_sndmain_cpp_00650b68
//   TerminatedCString s_sound_sndmain_cpp_00650b7d
//   TerminatedCString s_mp3_00650b92
//   TerminatedCString s_sound_sndmain_cpp_00650b96
//   TerminatedCString s_Unknown_sample_file_form_00650bab
//   TerminatedCString s_sound_sndmain_cpp_00650bd4
//   TerminatedCString s_getSampleInfo_can_t_dete_00650be9
//   WatcomStaticDestructorNode g_CMP3DecoderDestructorNode
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CMP3Decoder g_CMP3DecoderInstance
//   undefined4 g_CMP3DecoderInstance.sample_rate
//   undefined4 g_CMP3DecoderInstance.num_channels
//   undefined1 DAT_03f5d878
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f6293c
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f629b0
//   undefined4 DAT_03f62abc
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
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
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_parseConfigFile_FUN_005a45c0
//   sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0(CSfxSample *out_sample)

{
  int iVar1;
  FILE *file_handle;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  long in_stack_0000000c;
  char cVar6;
  undefined4 in_stack_fffffefc;
  
  bVar5 = 0;
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar3 = 0;
  do {
    if (0 < *(int *)(g_SfxSamples[0].field5_0x12c + iVar3 + -0x1c)) {
      pcVar4 = g_SfxSamples[0].sample_info.name + iVar3;
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,(char *)out_sample);
      if (iVar1 == 0) {
        for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)(out_sample->sample_info).name = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + (uint)bVar5 * -8 + 4;
          out_sample = (CSfxSample *)((int)out_sample + (uint)bVar5 * -8 + 4);
        }
        sound_sndmain_cpp_unlockSound_FUN_005abdc0();
        return 1;
      }
    }
    cVar6 = (char)in_stack_fffffefc;
    iVar3 = iVar3 + 0x180;
  } while (iVar3 < 0x6000);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",(char *)out_sample);
  if (0 < iVar3) {
    engine_dosio_c_splitPath_FUN_00481f20
              ((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xfffffef8);
    if (cVar6 == '.') {
      uVar2 = 0xffffffff;
      pcVar4 = &stack0xfffffefc;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar6 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
      } while (cVar6 != '\0');
      crt_string_c_memmove_FUN_005fe5e0(&stack0xfffffefc,&stack0xfffffefd,~uVar2 - 1);
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff00,"wav");
    if (iVar3 != 0) {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff04,"mp3");
      if (iVar3 == 0) {
        if ((DAT_03f5d878 & 1) == 0) {
          DAT_03f5d878 = DAT_03f5d878 | 1;
          sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(&g_CMP3DecoderInstance);
          crt_stdlib_c_atexit_FUN_005ff060(&g_CMP3DecoderDestructorNode);
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(&g_CMP3DecoderInstance,(char *)out_sample);
        (out_sample->sample_info).bit_depth = 0x10;
        (out_sample->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar3 = g_CMP3DecoderInstance.sample_rate;
        (out_sample->sample_info).sample_count = -1;
        (out_sample->sample_info).sample_rate = iVar3;
        sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(&g_CMP3DecoderInstance);
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0x10d3;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown sample file format extension: %s");
      }
LAB_005aa53c:
      sound_sndmain_cpp_parseConfigFile_FUN_005a45c0(out_sample);
      if ((out_sample->sample_info).sample_count < 1) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0x10de;
        core_main_c_displayErrorAndQuit_FUN_00506f10("getSampleInfo - can't determine length for %s");
        return 1;
      }
      return 1;
    }
    file_handle = engine_dosio_c_getFile_FUN_00481a50
                            ("sound",(char *)out_sample,"rb");
    if (file_handle != (FILE *)0x0) {
      in_stack_0000000c = crt_stdio_c_ftell_FUN_00601560(file_handle);
      iVar3 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(file_handle,&stack0x0000000c,out_sample);
      if (iVar3 != 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x10ba);
        goto LAB_005aa53c;
      }
    }
    if (file_handle != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x10af);
      return 0;
    }
  }
  return 0;
}


// Assembly code:
// 005aa3f0: PUSH EBX
//   Label: sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
// 005aa3f1: PUSH ESI
// 005aa3f2: PUSH EDI
// 005aa3f3: PUSH EBP
// 005aa3f4: SUB ESP,0x104
// 005aa3fa: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005aa401: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005aa406: XOR ESI,ESI
// 005aa408: CMP dword ptr [ESI + 0x3f6293c],0x1
//   Label: LAB_005aa408
//   XREF to: 03f6293c (READ)
//   XREF to: 03f62abc (READ)
// 005aa40f: JGE 0x005aa443
//   XREF to: 005aa443 (CONDITIONAL_JUMP)
// 005aa411: ADD ESI,0x180
//   Label: LAB_005aa411
// 005aa417: CMP ESI,0x6000
// 005aa41d: JL 0x005aa408
//   XREF to: 005aa408 (CONDITIONAL_JUMP)
// 005aa41f: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005aa424: PUSH EBP
// 005aa425: PUSH 0x650b55
//   XREF to: 00650b55 (DATA)
// 005aa42a: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005aa42f: ADD ESP,0x8
// 005aa432: TEST EAX,EAX
// 005aa434: JG 0x005aa46f
//   XREF to: 005aa46f (CONDITIONAL_JUMP)
// 005aa436: XOR EAX,EAX
//   Label: LAB_005aa436
// 005aa438: ADD ESP,0x104
//   Label: LAB_005aa438
// 005aa43e: POP EBP
// 005aa43f: POP EDI
// 005aa440: POP ESI
// 005aa441: POP EBX
// 005aa442: RET
// 005aa443: MOV EBX,0x3f6282c
//   Label: LAB_005aa443
//   XREF to: 03f6282c (DATA)
// 005aa448: PUSH EBP
// 005aa449: ADD EBX,ESI
// 005aa44b: PUSH EBX
//   XREF to: 03f629ac (DATA)
// 005aa44c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005aa451: ADD ESP,0x8
// 005aa454: TEST EAX,EAX
// 005aa456: JNZ 0x005aa411
//   XREF to: 005aa411 (CONDITIONAL_JUMP)
// 005aa458: MOV ECX,0x54
// 005aa45d: MOV EDI,EBP
// 005aa45f: MOV ESI,EBX
// 005aa461: MOVSD.REP ES:EDI,ESI
//   XREF to: 03f629ac (READ)
//   XREF to: 03f629b0 (READ)
// 005aa463: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005aa468: MOV EAX,0x1
// 005aa46d: JMP 0x005aa438
//   XREF to: 005aa438 (UNCONDITIONAL_JUMP)
// 005aa46f: MOV EAX,ESP
//   Label: LAB_005aa46f
// 005aa471: PUSH EAX
// 005aa472: PUSH 0x0
// 005aa474: PUSH 0x0
// 005aa476: PUSH 0x0
// 005aa478: PUSH EBP
// 005aa479: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005aa47e: ADD ESP,0x14
// 005aa481: CMP byte ptr [ESP],0x2e
//   XREF to: Stack[-0x114] (DATA)
// 005aa485: JNZ 0x005aa4a6
//   XREF to: 005aa4a6 (CONDITIONAL_JUMP)
// 005aa487: MOV EDI,ESP
// 005aa489: SUB ECX,ECX
// 005aa48b: DEC ECX
// 005aa48c: XOR EAX,EAX
// 005aa48e: SCASB.REPNE ES:EDI
// 005aa490: NOT ECX
// 005aa492: DEC ECX
// 005aa493: PUSH ECX
// 005aa494: LEA EAX,[ESP + 0x5]
//   XREF to: Stack[-0x113] (DATA)
// 005aa498: PUSH EAX
// 005aa499: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 005aa49d: PUSH EAX
// 005aa49e: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005aa4a3: ADD ESP,0xc
// 005aa4a6: PUSH 0x650b5b
//   Label: LAB_005aa4a6
//   XREF to: 00650b5b (DATA)
// 005aa4ab: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005aa4af: PUSH EAX
// 005aa4b0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005aa4b5: ADD ESP,0x8
// 005aa4b8: TEST EAX,EAX
// 005aa4ba: JNZ 0x005aa563
//   XREF to: 005aa563 (CONDITIONAL_JUMP)
// 005aa4c0: PUSH 0x650b5f
//   XREF to: 00650b5f (DATA)
// 005aa4c5: PUSH EBP
// 005aa4c6: PUSH 0x650b62
//   XREF to: 00650b62 (DATA)
// 005aa4cb: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005aa4d0: MOV EBX,EAX
// 005aa4d2: ADD ESP,0xc
// 005aa4d5: MOV ESI,EAX
// 005aa4d7: TEST EAX,EAX
// 005aa4d9: JNZ 0x005aa503
//   XREF to: 005aa503 (CONDITIONAL_JUMP)
// 005aa4db: TEST ESI,ESI
//   Label: LAB_005aa4db
// 005aa4dd: JZ 0x005aa436
//   XREF to: 005aa436 (CONDITIONAL_JUMP)
// 005aa4e3: PUSH 0x10af
// 005aa4e8: PUSH 0x650b68
//   XREF to: 00650b68 (DATA)
// 005aa4ed: PUSH ESI
// 005aa4ee: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005aa4f3: ADD ESP,0xc
// 005aa4f6: XOR EAX,EAX
// 005aa4f8: ADD ESP,0x104
// 005aa4fe: POP EBP
// 005aa4ff: POP EDI
// 005aa500: POP ESI
// 005aa501: POP EBX
// 005aa502: RET
// 005aa503: PUSH EAX
//   Label: LAB_005aa503
// 005aa504: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 005aa509: ADD ESP,0x4
// 005aa50c: PUSH EBP
// 005aa50d: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005aa514: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x14] (DATA)
// 005aa51b: PUSH EAX
// 005aa51c: PUSH EBX
// 005aa51d: CALL sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
//   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)
// 005aa522: ADD ESP,0xc
// 005aa525: TEST EAX,EAX
// 005aa527: JZ 0x005aa4db
//   XREF to: 005aa4db (CONDITIONAL_JUMP)
// 005aa529: PUSH 0x10ba
// 005aa52e: PUSH 0x650b7d
//   XREF to: 00650b7d (DATA)
// 005aa533: PUSH EBX
// 005aa534: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005aa539: ADD ESP,0xc
// 005aa53c: PUSH EBP
//   Label: LAB_005aa53c
// 005aa53d: CALL sound_sndmain.cpp_parseConfigFile_FUN_005a45c0
//   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
// 005aa542: MOV ESI,dword ptr [EBP + 0x110]
// 005aa548: ADD ESP,0x4
// 005aa54b: TEST ESI,ESI
// 005aa54d: JLE 0x005aa620
//   XREF to: 005aa620 (CONDITIONAL_JUMP)
// 005aa553: MOV EAX,0x1
// 005aa558: ADD ESP,0x104
// 005aa55e: POP EBP
// 005aa55f: POP EDI
// 005aa560: POP ESI
// 005aa561: POP EBX
// 005aa562: RET
// 005aa563: PUSH 0x650b92
//   Label: LAB_005aa563
//   XREF to: 00650b92 (DATA)
// 005aa568: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005aa56c: PUSH EAX
// 005aa56d: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005aa572: ADD ESP,0x8
// 005aa575: TEST EAX,EAX
// 005aa577: JNZ 0x005aa5f7
//   XREF to: 005aa5f7 (CONDITIONAL_JUMP)
// 005aa57d: MOV DL,byte ptr [0x03f5d878]
//   XREF to: 03f5d878 (READ)
// 005aa583: TEST DL,0x1
// 005aa586: JNZ 0x005aa5ad
//   XREF to: 005aa5ad (CONDITIONAL_JUMP)
// 005aa588: MOV DH,DL
// 005aa58a: OR DH,0x1
// 005aa58d: PUSH 0x3f55248
//   XREF to: 03f55248 (DATA)
// 005aa592: MOV byte ptr [0x03f5d878],DH
//   XREF to: 03f5d878 (WRITE)
// 005aa598: CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   XREF to: 005344f0 (UNCONDITIONAL_CALL)
// 005aa59d: ADD ESP,0x4
// 005aa5a0: PUSH 0x681af4
//   XREF to: 00681af4 (DATA)
// 005aa5a5: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005aa5aa: ADD ESP,0x4
// 005aa5ad: PUSH EBP
//   Label: LAB_005aa5ad
// 005aa5ae: PUSH 0x3f55248
//   XREF to: 03f55248 (DATA)
// 005aa5b3: CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   XREF to: 00534550 (UNCONDITIONAL_CALL)
// 005aa5b8: MOV dword ptr [EBP + 0x104],0x10
// 005aa5c2: MOV EAX,[0x03f5534c]
//   XREF to: 03f5534c (READ)
// 005aa5c7: MOV dword ptr [EBP + 0x108],EAX
// 005aa5cd: ADD ESP,0x8
// 005aa5d0: MOV EAX,[0x03f55348]
//   XREF to: 03f55348 (READ)
// 005aa5d5: MOV dword ptr [EBP + 0x110],0xffffffff
// 005aa5df: PUSH 0x3f55248
//   XREF to: 03f55248 (DATA)
// 005aa5e4: MOV dword ptr [EBP + 0x10c],EAX
// 005aa5ea: CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
//   XREF to: 005349e0 (UNCONDITIONAL_CALL)
// 005aa5ef: ADD ESP,0x4
// 005aa5f2: JMP 0x005aa53c
//   XREF to: 005aa53c (UNCONDITIONAL_JUMP)
// 005aa5f7: PUSH EBP
//   Label: LAB_005aa5f7
// 005aa5f8: MOV ECX,0x650b96
//   XREF to: 00650b96 (PARAM)
// 005aa5fd: MOV EBX,0x10d3
// 005aa602: PUSH 0x650bab
//   XREF to: 00650bab (DATA)
// 005aa607: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005aa60d: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005aa613: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005aa618: ADD ESP,0x8
// 005aa61b: JMP 0x005aa53c
//   XREF to: 005aa53c (UNCONDITIONAL_JUMP)
// 005aa620: PUSH EBP
//   Label: LAB_005aa620
// 005aa621: MOV EDI,0x650bd4
//   XREF to: 00650bd4 (DATA)
// 005aa626: MOV EAX,0x10de
// 005aa62b: PUSH 0x650be9
//   XREF to: 00650be9 (DATA)
// 005aa630: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005aa636: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005aa63b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005aa640: ADD ESP,0x8
// 005aa643: MOV EAX,0x1
// 005aa648: ADD ESP,0x104
// 005aa64e: POP EBP
// 005aa64f: POP EDI
// 005aa650: POP ESI
// 005aa651: POP EBX
// 005aa652: RET
