; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_005b2d00(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 0050810c
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
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f6b128]                ; 005b2d00 | g_SoundFileList
        ;   Label: core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00
    TEST EAX,EAX                        ; 005b2d05
    JNZ 0x005b2d37                      ; 005b2d07
        ;   XREF to: 005b2d37 (CONDITIONAL_JUMP)  ; LAB_005b2d37
    PUSH 0x6524ee                       ; 005b2d09 | = "*.wav"
    PUSH 0x6524f4                       ; 005b2d0e | = "sound"
    PUSH 0x3f6b128                      ; 005b2d13 | g_SoundFileList
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 005b2d18
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 005b2d1d
    PUSH 0x6524fa                       ; 005b2d20 | = "*.mp3"
    PUSH 0x652500                       ; 005b2d25 | = "sound"
    PUSH 0x3f6b128                      ; 005b2d2a | g_SoundFileList
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 005b2d2f
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 005b2d34
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 ; 005b2d37
        ;   XREF to: 005ab5b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0()
        ;   Label: LAB_005b2d37
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 005b2d3c
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
    TEST EAX,EAX                        ; 005b2d41
    JNZ 0x005b2d46                      ; 005b2d43
        ;   XREF to: 005b2d46 (CONDITIONAL_JUMP)  ; LAB_005b2d46
    RET                                 ; 005b2d45
    PUSH 0xac44                         ; 005b2d46
        ;   Label: LAB_005b2d46
    PUSH 0x2                            ; 005b2d4b
    PUSH 0x10                           ; 005b2d4d
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 ; 005b2d4f
        ;   XREF to: 005ab170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 005b2d54
    RET                                 ; 005b2d57

