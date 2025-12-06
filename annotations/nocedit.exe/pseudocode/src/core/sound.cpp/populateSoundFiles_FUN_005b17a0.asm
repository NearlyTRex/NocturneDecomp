; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_populateSoundFiles_FUN_005b17a0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_wav_006524ee
;   TerminatedCString s_sound_006524f4
;   TerminatedCString s_mp3_006524fa
;   TerminatedCString s_sound_00652500
;   CStrList g_SoundFileList
;
; Called Functions:
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
;
; *****************************************************************************

section .text

    PUSH 0x6524ee                       ; 005b17a0 | = "*.wav" | s_wav_006524ee = *.wav
        ;   Label: core_sound.cpp_populateSoundFiles_FUN_005b17a0
    PUSH 0x6524f4                       ; 005b17a5 | = "sound" | s_sound_006524f4 = sound
    PUSH 0x3f6b128                      ; 005b17aa | CStrList g_SoundFileList
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 005b17af | void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b17b4
    PUSH 0x6524fa                       ; 005b17b7 | = "*.mp3" | s_mp3_006524fa = *.mp3
    PUSH 0x652500                       ; 005b17bc | = "sound" | s_sound_00652500 = sound
    PUSH 0x3f6b128                      ; 005b17c1 | CStrList g_SoundFileList
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 005b17c6 | void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005b17cb
    RET                                 ; 005b17ce

