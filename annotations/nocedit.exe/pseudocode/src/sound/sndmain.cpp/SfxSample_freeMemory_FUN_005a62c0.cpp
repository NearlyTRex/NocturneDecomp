// Name: sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
// Address: 005a62c0
// Address Range: [[005a62c0, 005a63a4]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0(SfxSample * sample)
// Cross-references:
//   sound_sndmain.cpp_FUN_005a4450 (005a4450) at 005a4504 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a5506 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5620 (005a5620) at 005a56a9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aa360 (005aa360) at 005aa394 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_LockFreeSampleAndUnlock_FUN_005aa660 (005aa660) at 005aa678 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4f06 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReallocSomething_FUN_005a6170 (005a6170) at 005a6258 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_dtor_FUN_005a6150 (005a6150) at 005a6156 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60 (005a7e60) at 005a7f78 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a69f0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_cleanup_FUN_005ab660 (005ab660) at 005ab677 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9504 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fcd4
//   TerminatedCString s_SfxSample_freeMemory_fre_0064fce9
//   TerminatedCString s_sound_sndmain_cpp_0064fd18
//   TerminatedCString s_sound_sndmain_cpp_0064fd2d
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
//   sound_sndmain.cpp_SfxSample_freeSampleData_FUN_005a6400
//   sound_sndmain.cpp_SfxSample_releaseBufferId_FUN_005a63b0
//   sound_sndmain.cpp_SfxSample_releaseSoundBuffer_FUN_005a6540

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_SfxSample_freeMemory_FUN_005a62c0(SfxSample *sample)

{
  CMP3Decoder *ptr;
  
  if (sample->ref_count != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x710;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::freeMemory - freeing sample in use!");
  }
  sound_sndmain_cpp_SfxSample_releaseSoundBuffer_FUN_005a6540(sample);
  sound_sndmain_cpp_SfxSample_freeSampleData_FUN_005a6400(sample);
  sound_sndmain_cpp_SfxSample_releaseBufferId_FUN_005a63b0(sample);
  g_CurrentDebugFilename = "..\\sound\\sndmain.cpp";
  g_CurrentDebugLine = 0x71d;
  if ((CMP3Decoder *)sample->mp3_data != (CMP3Decoder *)0x0) {
    ptr = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530((CMP3Decoder *)sample->mp3_data);
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  sample->mp3_data = (void *)0x0;
  if (sample->file_handle != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(sample->file_handle,"..\\sound\\sndmain.cpp",0x723);
    sample->file_handle = (FILE *)0x0;
  }
  sample->field_150 = 0;
  sample->field_160[0] = '\0';
  sample->field_160[1] = '\0';
  sample->field_160[2] = '\0';
  sample->field_160[3] = '\0';
  sample->streaming_slot_index = -1;
  sample->name[0] = '\0';
  return;
}


// Assembly code:
// 005a62c0: PUSH EBX
//   Label: sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0
// 005a62c1: PUSH EDI
// 005a62c2: PUSH EBP
// 005a62c3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a62c7: CMP dword ptr [EBX + 0x154],0x0
// 005a62ce: JNZ 0x005a635c
//   XREF to: 005a635c (CONDITIONAL_JUMP)
// 005a62d4: PUSH EBX
//   Label: LAB_005a62d4
// 005a62d5: CALL sound_sndmain.cpp_SfxSample_releaseSoundBuffer_FUN_005a6540
//   XREF to: 005a6540 (UNCONDITIONAL_CALL)
// 005a62da: ADD ESP,0x4
// 005a62dd: PUSH EBX
// 005a62de: CALL sound_sndmain.cpp_SfxSample_freeSampleData_FUN_005a6400
//   XREF to: 005a6400 (UNCONDITIONAL_CALL)
// 005a62e3: ADD ESP,0x4
// 005a62e6: PUSH EBX
// 005a62e7: MOV EDI,0x64fd18
//   XREF to: 0064fd18 (DATA)
// 005a62ec: MOV EBP,0x71d
// 005a62f1: CALL sound_sndmain.cpp_SfxSample_releaseBufferId_FUN_005a63b0
//   XREF to: 005a63b0 (UNCONDITIONAL_CALL)
// 005a62f6: ADD ESP,0x4
// 005a62f9: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 005a62ff: MOV EAX,dword ptr [EBX + 0x16c]
// 005a6305: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 005a630b: TEST EAX,EAX
// 005a630d: JZ 0x005a6323
//   XREF to: 005a6323 (CONDITIONAL_JUMP)
// 005a630f: PUSH 0x0
// 005a6311: PUSH EAX
// 005a6312: CALL sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
//   XREF to: 00534530 (UNCONDITIONAL_CALL)
// 005a6317: ADD ESP,0x8
// 005a631a: PUSH EAX
// 005a631b: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005a6320: ADD ESP,0x4
// 005a6323: MOV EAX,dword ptr [EBX + 0x174]
//   Label: LAB_005a6323
// 005a6329: MOV dword ptr [EBX + 0x16c],0x0
// 005a6333: TEST EAX,EAX
// 005a6335: JNZ 0x005a6386
//   XREF to: 005a6386 (CONDITIONAL_JUMP)
// 005a6337: MOV dword ptr [EBX + 0x150],0x0
//   Label: LAB_005a6337
// 005a6341: MOV dword ptr [EBX + 0x160],0x0
// 005a634b: MOV dword ptr [EBX + 0x15c],0xffffffff
// 005a6355: MOV byte ptr [EBX],0x0
// 005a6358: POP EBP
// 005a6359: POP EDI
// 005a635a: POP EBX
// 005a635b: RET
// 005a635c: PUSH ESI
//   Label: LAB_005a635c
// 005a635d: MOV ECX,0x64fcd4
//   XREF to: 0064fcd4 (PARAM)
// 005a6362: MOV ESI,0x710
// 005a6367: PUSH 0x64fce9
//   XREF to: 0064fce9 (DATA)
// 005a636c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a6372: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a6378: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a637d: ADD ESP,0x4
// 005a6380: POP ESI
// 005a6381: JMP 0x005a62d4
//   XREF to: 005a62d4 (UNCONDITIONAL_JUMP)
// 005a6386: PUSH 0x723
//   Label: LAB_005a6386
// 005a638b: PUSH 0x64fd2d
//   XREF to: 0064fd2d (DATA)
// 005a6390: PUSH EAX
// 005a6391: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005a6396: ADD ESP,0xc
// 005a6399: MOV dword ptr [EBX + 0x174],0x0
// 005a63a3: JMP 0x005a6337
//   XREF to: 005a6337 (UNCONDITIONAL_JUMP)
