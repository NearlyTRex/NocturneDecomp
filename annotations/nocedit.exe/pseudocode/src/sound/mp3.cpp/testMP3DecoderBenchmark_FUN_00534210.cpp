// Name: sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210
// Address: 00534210
// Address Range: [[00534210, 005344ea]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210(void)
// Globals:
//   TerminatedCString s_test_raw_0063b0e2
//   TerminatedCString s_Write_file_0063b0eb
//   TerminatedCString s_sound_mp3_cpp_0063b0f7
//   TerminatedCString s_sound_mp3_cpp_0063b108
//   TerminatedCString s_pixies_mp3_0063b119
//   TerminatedCString s_pixies_mp3_0063b124
//   TerminatedCString s_sound_mp3_cpp_0063b12f
//   TerminatedCString s_wb_0063b140
//   TerminatedCString s_pixies_raw_0063b143
//   TerminatedCString s_sound_mp3_cpp_0063b14e
//   TerminatedCString s_Hose_0063b15f
//   TerminatedCString s_sound_mp3_cpp_0063b165
//   TerminatedCString s_wb_0063b176
//   TerminatedCString s_pixies2_raw_0063b179
//   TerminatedCString s_sound_mp3_cpp_0063b185
//   TerminatedCString s_Hose_0063b196
//   TerminatedCString s_s_1fk_0063b19c
//   TerminatedCString s_sound_mp3_cpp_0063b1a2
//   TerminatedCString s_sound_mp3_cpp_0063b1b3
//   TerminatedCString s_sound_mp3_cpp_0063b1c4
//   TerminatedCString s_sound_mp3_cpp_0063b1d5
//   TerminatedCString s_sound_mp3_cpp_0063b1e6
//   TerminatedCString s_d_bytes_d_seconds_1f_kby_0063b1f7
//   double DOUBLE_0063b222 = 0.0009765625
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   char[131072] g_MpegPCMDecodeTestBuffer
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_time.c_time_with_rounding_FUN_006001f0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
//   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60

#include "nocturne.h"

void __cdecl sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void)

{
  CMP3Decoder *pCVar1;
  SIZE_T samples_requested;
  FILE *pFVar2;
  SIZE_T size;
  int unaff_EBX;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CMP3Decoder *unaff_EDI;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  CMP3Decoder *in_stack_00000010;
  CMP3Decoder *in_stack_00000018;
  SIZE_T in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int iStack00000038;
  int iStack0000003c;
  CMP3Decoder *pCVar4;
  
  crt_io_c_deleteFile_FUN_005ff9d0("test.raw");
  shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
            (g_CEditorToolsPtr,"Write file?");
  pCVar1 = (CMP3Decoder *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  if (pCVar1 != (CMP3Decoder *)0x0) {
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar1);
  }
  pCVar1 = (CMP3Decoder *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  if (pCVar1 != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar1);
  }
  pCVar4 = pCVar1;
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(unaff_EDI,"pixies.mp3");
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(pCVar1,"pixies.mp3");
  samples_requested = (SIZE_T)(0x20000 / (longlong)(*(int *)(unaff_EBX + 0x104) * 2));
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pixies.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",0xdd2
                     );
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!",pCVar4);
  }
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pixies2.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",
                      0xdd4);
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!");
  }
  iVar3 = 0;
  crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0xfffffff8);
  do {
    size = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                     (in_stack_00000010,(short *)g_MpegPCMDecodeTestBuffer,samples_requested);
    if (in_stack_00000018 != (CMP3Decoder *)0x0) {
      crt_stdio_c_fwrite_FUN_005fdc00
                (g_MpegPCMDecodeTestBuffer,size,in_stack_0000001c,(FILE *)in_stack_00000010);
    }
    iVar3 = iVar3 + in_stack_00000020 * size;
    if (in_stack_0000001c != 0) {
      in_stack_00000024 = iVar3;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"%.1fk");
    }
  } while (size == samples_requested);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000000c,"..\\sound\\mp3.cpp",0xde8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\sound\\mp3.cpp",0xde9);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdeb;
  pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(in_stack_00000018);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdec;
  if (in_stack_00000018 != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(in_stack_00000018);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0x00000018);
  iStack0000003c = in_stack_0000001c - (int)in_stack_00000018;
  g_CurrentLineNumber = 0xdf1;
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  iStack00000038 = iVar3;
  core_main_c_displayErrorAndQuit_FUN_00506f10("%d bytes / %d seconds = %.1f kbytes/sec");
  return;
}


// Assembly code:
// 00534210: PUSH EBX
//   Label: sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210
// 00534211: PUSH ESI
// 00534212: PUSH EDI
// 00534213: PUSH EBP
// 00534214: MOV EBP,ESP
// 00534216: SUB ESP,0x28
// 00534219: AND ESP,0xfffffff8
// 0053421c: PUSH 0x63b0e2
//   XREF to: 0063b0e2 (DATA)
// 00534221: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00534226: ADD ESP,0x4
// 00534229: PUSH 0x63b0eb
//   XREF to: 0063b0eb (DATA)
// 0053422e: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00534234: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00534235: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0053423a: ADD ESP,0x8
// 0053423d: PUSH 0xdc8
// 00534242: PUSH 0x63b0f7
//   XREF to: 0063b0f7 (DATA)
// 00534247: PUSH 0x8630
// 0053424c: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00534250: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00534255: ADD ESP,0xc
// 00534258: TEST EAX,EAX
// 0053425a: JNZ 0x0053449c
//   XREF to: 0053449c (CONDITIONAL_JUMP)
// 00534260: PUSH 0xdc8
//   Label: LAB_00534260
// 00534265: PUSH 0x63b108
//   XREF to: 0063b108 (DATA)
// 0053426a: PUSH 0x8630
// 0053426f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00534273: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00534278: ADD ESP,0xc
// 0053427b: TEST EAX,EAX
// 0053427d: JZ 0x00534288
//   XREF to: 00534288 (CONDITIONAL_JUMP)
// 0053427f: PUSH EAX
// 00534280: CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   XREF to: 005344f0 (UNCONDITIONAL_CALL)
// 00534285: ADD ESP,0x4
// 00534288: MOV EBX,EAX
//   Label: LAB_00534288
// 0053428a: PUSH 0x63b119
//   XREF to: 0063b119 (DATA)
// 0053428f: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 00534293: PUSH ECX
// 00534294: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00534298: CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   XREF to: 00534550 (UNCONDITIONAL_CALL)
// 0053429d: ADD ESP,0x8
// 005342a0: PUSH 0x63b124
//   XREF to: 0063b124 (DATA)
// 005342a5: PUSH EBX
// 005342a6: CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   XREF to: 00534550 (UNCONDITIONAL_CALL)
// 005342ab: ADD ESP,0x8
// 005342ae: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 005342b2: MOV EAX,dword ptr [EAX + 0x104]
// 005342b8: ADD EAX,EAX
// 005342ba: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005342be: MOV EAX,0x20000
// 005342c3: MOV EDX,EAX
// 005342c5: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005342c9: SAR EDX,0x1f
// 005342cc: IDIV EBX
// 005342ce: PUSH 0xdd2
// 005342d3: PUSH 0x63b12f
//   XREF to: 0063b12f (DATA)
// 005342d8: PUSH 0x63b140
//   XREF to: 0063b140 (DATA)
// 005342dd: PUSH 0x0
// 005342df: PUSH 0x63b143
//   XREF to: 0063b143 (DATA)
// 005342e4: MOV EDI,EAX
// 005342e6: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005342eb: ADD ESP,0x14
// 005342ee: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005342f2: TEST EAX,EAX
// 005342f4: JNZ 0x00534318
//   XREF to: 00534318 (CONDITIONAL_JUMP)
// 005342f6: MOV ESI,0x63b14e
//   XREF to: 0063b14e (DATA)
// 005342fb: MOV EAX,0xdd3
// 00534300: PUSH 0x63b15f
//   XREF to: 0063b15f (DATA)
// 00534305: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0053430b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00534310: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534315: ADD ESP,0x4
// 00534318: PUSH 0xdd4
//   Label: LAB_00534318
// 0053431d: PUSH 0x63b165
//   XREF to: 0063b165 (DATA)
// 00534322: PUSH 0x63b176
//   XREF to: 0063b176 (DATA)
// 00534327: PUSH 0x0
// 00534329: PUSH 0x63b179
//   XREF to: 0063b179 (DATA)
// 0053432e: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00534333: ADD ESP,0x14
// 00534336: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0053433a: TEST EAX,EAX
// 0053433c: JZ 0x005344aa
//   XREF to: 005344aa (CONDITIONAL_JUMP)
// 00534342: MOV EAX,ESP
//   Label: LAB_00534342
// 00534344: PUSH EAX
// 00534345: XOR EBX,EBX
// 00534347: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 0053434c: ADD ESP,0x4
// 0053434f: PUSH EDI
//   Label: LAB_0053434f
// 00534350: PUSH 0x2f48188
//   XREF to: 02f48188 (DATA)
// 00534355: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00534359: PUSH ESI
// 0053435a: CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
//   XREF to: 00534a60 (UNCONDITIONAL_CALL)
// 0053435f: ADD ESP,0xc
// 00534362: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00534366: MOV ESI,EAX
// 00534368: TEST EDX,EDX
// 0053436a: JZ 0x00534384
//   XREF to: 00534384 (CONDITIONAL_JUMP)
// 0053436c: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00534370: PUSH ECX
// 00534371: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 00534375: PUSH EDX
// 00534376: PUSH EAX
// 00534377: PUSH 0x2f48188
//   XREF to: 02f48188 (DATA)
// 0053437c: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00534381: ADD ESP,0x10
// 00534384: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00534384
//   XREF to: Stack[-0x1c] (READ)
// 00534388: IMUL EAX,ESI
// 0053438b: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 0053438f: ADD EBX,EAX
// 00534391: TEST ECX,ECX
// 00534393: JZ 0x005343bc
//   XREF to: 005343bc (CONDITIONAL_JUMP)
// 00534395: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00534399: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0053439d: FMUL double ptr [0x0063b222]
//   XREF to: 0063b222 (READ)
// 005343a3: SUB ESP,0x8
// 005343a6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 005343a9: PUSH 0x63b19c
//   XREF to: 0063b19c (DATA)
// 005343ae: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005343b3: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005343b4: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005343b9: ADD ESP,0x10
// 005343bc: CMP ESI,EDI
//   Label: LAB_005343bc
// 005343be: JZ 0x0053434f
//   XREF to: 0053434f (CONDITIONAL_JUMP)
// 005343c0: PUSH 0xde8
// 005343c5: PUSH 0x63b1a2
//   XREF to: 0063b1a2 (DATA)
// 005343ca: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 005343ce: PUSH EDX
// 005343cf: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005343d4: ADD ESP,0xc
// 005343d7: PUSH 0xde9
// 005343dc: PUSH 0x63b1b3
//   XREF to: 0063b1b3 (DATA)
// 005343e1: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005343e5: PUSH ECX
// 005343e6: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005343eb: ADD ESP,0xc
// 005343ee: MOV ESI,0x63b1c4
//   XREF to: 0063b1c4 (DATA)
// 005343f3: PUSH 0x0
// 005343f5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005343f9: MOV EDI,0xdeb
// 005343fe: PUSH EAX
// 005343ff: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 00534405: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 0053440b: CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
//   XREF to: 00534530 (UNCONDITIONAL_CALL)
// 00534410: ADD ESP,0x8
// 00534413: PUSH EAX
// 00534414: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00534419: MOV EDX,0x63b1d5
//   XREF to: 0063b1d5 (DATA)
// 0053441e: ADD ESP,0x4
// 00534421: MOV ECX,0xdec
// 00534426: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0053442a: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00534430: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00534436: TEST ESI,ESI
// 00534438: JNZ 0x005344d2
//   XREF to: 005344d2 (CONDITIONAL_JUMP)
// 0053443e: LEA EAX,[ESP + 0x4]
//   Label: LAB_0053443e
//   XREF to: Stack[-0x34] (DATA)
// 00534442: PUSH EAX
// 00534443: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 00534448: ADD ESP,0x4
// 0053444b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 0053444f: SUB EAX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00534452: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00534456: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053445a: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0053445e: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00534462: FDIVP
// 00534464: FMUL double ptr [0x0063b222]
//   XREF to: 0063b222 (READ)
// 0053446a: SUB ESP,0x8
// 0053446d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00534470: PUSH EAX
// 00534471: PUSH EBX
// 00534472: MOV ESI,0xdf1
// 00534477: MOV ECX,0x63b1e6
//   XREF to: 0063b1e6 (DATA)
// 0053447c: PUSH 0x63b1f7
//   XREF to: 0063b1f7 (DATA)
// 00534481: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00534487: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0053448d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534492: ADD ESP,0x14
// 00534495: MOV ESP,EBP
// 00534497: POP EBP
// 00534498: POP EDI
// 00534499: POP ESI
// 0053449a: POP EBX
// 0053449b: RET
// 0053449c: PUSH EAX
//   Label: LAB_0053449c
// 0053449d: CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   XREF to: 005344f0 (UNCONDITIONAL_CALL)
// 005344a2: ADD ESP,0x4
// 005344a5: JMP 0x00534260
//   XREF to: 00534260 (UNCONDITIONAL_JUMP)
// 005344aa: MOV EDX,0x63b185
//   Label: LAB_005344aa
//   XREF to: 0063b185 (DATA)
// 005344af: MOV ECX,0xdd5
// 005344b4: PUSH 0x63b196
//   XREF to: 0063b196 (DATA)
// 005344b9: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005344bf: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005344c5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005344ca: ADD ESP,0x4
// 005344cd: JMP 0x00534342
//   XREF to: 00534342 (UNCONDITIONAL_JUMP)
// 005344d2: PUSH 0x0
//   Label: LAB_005344d2
// 005344d4: PUSH ESI
// 005344d5: CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
//   XREF to: 00534530 (UNCONDITIONAL_CALL)
// 005344da: ADD ESP,0x8
// 005344dd: PUSH EAX
// 005344de: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005344e3: ADD ESP,0x4
// 005344e6: JMP 0x0053443e
//   XREF to: 0053443e (UNCONDITIONAL_JUMP)
