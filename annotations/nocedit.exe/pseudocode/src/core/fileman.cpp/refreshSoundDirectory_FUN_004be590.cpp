// Name: core_fileman.cpp_refreshSoundDirectory_FUN_004be590
// Address: 004be590
// Address Range: [[004be590, 004be616]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_refreshSoundDirectory_FUN_004be590(FILE * file_list_output, char * source_directory)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdd37 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be538 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_00629a53
//   TerminatedCString s_sound_00629a59
//   TerminatedCString s_wav_00629a5f
//   TerminatedCString s_sound_00629a65
//   TerminatedCString s_mp3_00629a6b
//   TerminatedCString s_sound_00629a71
//   TerminatedCString s_klp_00629a77
//   TerminatedCString s_sound_00629a7d
//   TerminatedCString s_vol_00629a83
//   TerminatedCString s_sound_00629a89
//   TerminatedCString s_sfx_00629a8f
// Function calls:
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
//   crt_file.c_create_directory_FUN_00600e10
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650

#include "nocturne.h"

void __cdecl
core_fileman_cpp_refreshSoundDirectory_FUN_004be590(FILE *file_list_output,char *source_directory)

{
  crt_file_c_create_directory_FUN_00600e10("sound");
  core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(source_directory);
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.wav","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.mp3","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.klp","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.vol","sound");
  engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
            (file_list_output,source_directory,"*.sfx","sound");
  return;
}


// Assembly code:
// 004be590: PUSH EBX
//   Label: core_fileman.cpp_refreshSoundDirectory_FUN_004be590
// 004be591: PUSH ESI
// 004be592: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004be596: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004be59a: PUSH 0x629a53
//   XREF to: 00629a53 (DATA)
// 004be59f: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 004be5a4: ADD ESP,0x4
// 004be5a7: PUSH EBX
// 004be5a8: CALL core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
//   XREF to: 004bd750 (UNCONDITIONAL_CALL)
// 004be5ad: ADD ESP,0x4
// 004be5b0: PUSH 0x629a59
//   XREF to: 00629a59 (DATA)
// 004be5b5: PUSH 0x629a5f
//   XREF to: 00629a5f (DATA)
// 004be5ba: PUSH EBX
// 004be5bb: PUSH ESI
// 004be5bc: CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
//   XREF to: 004bc650 (UNCONDITIONAL_CALL)
// 004be5c1: ADD ESP,0x10
// 004be5c4: PUSH 0x629a65
//   XREF to: 00629a65 (DATA)
// 004be5c9: PUSH 0x629a6b
//   XREF to: 00629a6b (DATA)
// 004be5ce: PUSH EBX
// 004be5cf: PUSH ESI
// 004be5d0: CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
//   XREF to: 004bc650 (UNCONDITIONAL_CALL)
// 004be5d5: ADD ESP,0x10
// 004be5d8: PUSH 0x629a71
//   XREF to: 00629a71 (DATA)
// 004be5dd: PUSH 0x629a77
//   XREF to: 00629a77 (DATA)
// 004be5e2: PUSH EBX
// 004be5e3: PUSH ESI
// 004be5e4: CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
//   XREF to: 004bc650 (UNCONDITIONAL_CALL)
// 004be5e9: ADD ESP,0x10
// 004be5ec: PUSH 0x629a7d
//   XREF to: 00629a7d (DATA)
// 004be5f1: PUSH 0x629a83
//   XREF to: 00629a83 (DATA)
// 004be5f6: PUSH EBX
// 004be5f7: PUSH ESI
// 004be5f8: CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
//   XREF to: 004bc650 (UNCONDITIONAL_CALL)
// 004be5fd: ADD ESP,0x10
// 004be600: PUSH 0x629a89
//   XREF to: 00629a89 (DATA)
// 004be605: PUSH 0x629a8f
//   XREF to: 00629a8f (DATA)
// 004be60a: PUSH EBX
// 004be60b: PUSH ESI
// 004be60c: CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
//   XREF to: 004bc650 (UNCONDITIONAL_CALL)
// 004be611: ADD ESP,0x10
// 004be614: POP ESI
// 004be615: POP EBX
// 004be616: RET
