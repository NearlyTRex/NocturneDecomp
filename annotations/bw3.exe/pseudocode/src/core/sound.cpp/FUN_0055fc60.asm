; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_0055fc60(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e4b04
;
; Referenced Globals:
;   TerminatedCString s_wav_005d512f
;   TerminatedCString s_sound_005d5135
;   TerminatedCString s_mp3_005d513b
;   TerminatedCString s_sound_005d5141
;   CStrList g_CStrListInstance
;
; Called Functions:
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00558730
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00558290
;
; *****************************************************************************

section .text

    MOV EAX,[0x02cf5840]                ; 0055fc60 | g_CStrListInstance
        ;   Label: core_sound.cpp_FUN_0055fc60
    TEST EAX,EAX                        ; 0055fc65
    JNZ 0x0055fc97                      ; 0055fc67
        ;   XREF to: 0055fc97 (CONDITIONAL_JUMP)  ; LAB_0055fc97
    PUSH 0x5d512f                       ; 0055fc69 | = "*.wav"
    PUSH 0x5d5135                       ; 0055fc6e | = "sound"
    PUSH 0x2cf5840                      ; 0055fc73 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 ; 0055fc78
        ;   XREF to: 00482c70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0055fc7d
    PUSH 0x5d513b                       ; 0055fc80 | = "*.mp3"
    PUSH 0x5d5141                       ; 0055fc85 | = "sound"
    PUSH 0x2cf5840                      ; 0055fc8a | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 ; 0055fc8f
        ;   XREF to: 00482c70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0055fc94
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00558730 ; 0055fc97
        ;   XREF to: 00558730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_00558730()
        ;   Label: LAB_0055fc97
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0 ; 0055fc9c
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0()
    TEST EAX,EAX                        ; 0055fca1
    JG 0x0055fca6                       ; 0055fca3
        ;   XREF to: 0055fca6 (CONDITIONAL_JUMP)  ; LAB_0055fca6
    RET                                 ; 0055fca5
    PUSH 0xac44                         ; 0055fca6
        ;   Label: LAB_0055fca6
    PUSH 0x2                            ; 0055fcab
    PUSH 0x10                           ; 0055fcad
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00558290 ; 0055fcaf
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00558290(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 0055fcb4
    RET                                 ; 0055fcb7

