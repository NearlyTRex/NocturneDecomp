; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fileman.cpp_refreshSoundDirectory_FUN_004be590(FILE * file_list_output, char * source_directory)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_list_output
; char *           Stack[0x8]:4   source_directory
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdd37
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be538
;
; Referenced Globals:
;   TerminatedCString s_sound_00629a53
;   TerminatedCString s_sound_00629a59
;   TerminatedCString s_wav_00629a5f
;   TerminatedCString s_sound_00629a65
;   TerminatedCString s_mp3_00629a6b
;   TerminatedCString s_sound_00629a71
;   TerminatedCString s_klp_00629a77
;   TerminatedCString s_sound_00629a7d
;   TerminatedCString s_vol_00629a83
;   TerminatedCString s_sound_00629a89
;   TerminatedCString s_sfx_00629a8f
;
; Called Functions:
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
;   crt_file.c_create_directory_FUN_00600e10
;   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be590
        ;   Label: core_fileman.cpp_refreshSoundDirectory_FUN_004be590
    PUSH ESI                            ; 004be591
    MOV ESI,dword ptr [ESP + 0xc]       ; 004be592
    MOV EBX,dword ptr [ESP + 0x10]      ; 004be596
    PUSH 0x629a53                       ; 004be59a | = "sound" | s_sound_00629a53 = sound
    CALL crt_file.c_create_directory_FUN_00600e10 ; 004be59f | int crt_file.c_create_directory_FUN_00600e10(char * path)
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004be5a4
    PUSH EBX                            ; 004be5a7
    CALL core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 ; 004be5a8 | void core_fileman.cpp_preprocessMusicFiles_FUN_004bd750(char * source_directory)
        ;   XREF to: 004bd750 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004be5ad
    PUSH 0x629a59                       ; 004be5b0 | = "sound" | s_sound_00629a59 = sound
    PUSH 0x629a5f                       ; 004be5b5 | = "*.wav" | s_wav_00629a5f = *.wav
    PUSH EBX                            ; 004be5ba
    PUSH ESI                            ; 004be5bb
    CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 ; 004be5bc | void engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory)
        ;   XREF to: 004bc650 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004be5c1
    PUSH 0x629a65                       ; 004be5c4 | = "sound" | s_sound_00629a65 = sound
    PUSH 0x629a6b                       ; 004be5c9 | = "*.mp3" | s_mp3_00629a6b = *.mp3
    PUSH EBX                            ; 004be5ce
    PUSH ESI                            ; 004be5cf
    CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 ; 004be5d0 | void engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory)
        ;   XREF to: 004bc650 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004be5d5
    PUSH 0x629a71                       ; 004be5d8 | = "sound" | s_sound_00629a71 = sound
    PUSH 0x629a77                       ; 004be5dd | = "*.klp" | s_klp_00629a77 = *.klp
    PUSH EBX                            ; 004be5e2
    PUSH ESI                            ; 004be5e3
    CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 ; 004be5e4 | void engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory)
        ;   XREF to: 004bc650 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004be5e9
    PUSH 0x629a7d                       ; 004be5ec | = "sound" | s_sound_00629a7d = sound
    PUSH 0x629a83                       ; 004be5f1 | = "*.vol" | s_vol_00629a83 = *.vol
    PUSH EBX                            ; 004be5f6
    PUSH ESI                            ; 004be5f7
    CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 ; 004be5f8 | void engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory)
        ;   XREF to: 004bc650 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004be5fd
    PUSH 0x629a89                       ; 004be600 | = "sound" | s_sound_00629a89 = sound
    PUSH 0x629a8f                       ; 004be605 | = "*.sfx" | s_sfx_00629a8f = *.sfx
    PUSH EBX                            ; 004be60a
    PUSH ESI                            ; 004be60b
    CALL engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 ; 004be60c | void engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory)
        ;   XREF to: 004bc650 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004be611
    POP ESI                             ; 004be614
    POP EBX                             ; 004be615
    RET                                 ; 004be616

