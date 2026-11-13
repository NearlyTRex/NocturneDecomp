; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_0057cb30(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 005038c4
;
; Referenced Globals:
;   TerminatedCString s_wav_005f58d6
;   TerminatedCString s_sound_005f58dc
;   TerminatedCString s_mp3_005f58e2
;   TerminatedCString s_sound_005f58e8
;   CStrList g_CStrListInstance
;
; Called Functions:
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00575560
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005755c0
;   sound_sndmain.cpp_setSoundOutputMode_FUN_00575120
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c82c20]                ; 0057cb30 | g_CStrListInstance
        ;   Label: core_sound.cpp_FUN_0057cb30
    TEST EAX,EAX                        ; 0057cb35
    JNZ 0x0057cb67                      ; 0057cb37
        ;   XREF to: 0057cb67 (CONDITIONAL_JUMP)  ; LAB_0057cb67
    PUSH 0x5f58d6                       ; 0057cb39 | = "*.wav"
    PUSH 0x5f58dc                       ; 0057cb3e | = "sound"
    PUSH 0x2c82c20                      ; 0057cb43 | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 ; 0057cb48
        ;   XREF to: 0049a0d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0057cb4d
    PUSH 0x5f58e2                       ; 0057cb50 | = "*.mp3"
    PUSH 0x5f58e8                       ; 0057cb55 | = "sound"
    PUSH 0x2c82c20                      ; 0057cb5a | g_CStrListInstance
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 ; 0057cb5f
        ;   XREF to: 0049a0d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0057cb64
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_005755c0 ; 0057cb67
        ;   XREF to: 005755c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_initializeSoundDevice_FUN_005755c0()
        ;   Label: LAB_0057cb67
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00575560 ; 0057cb6c
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00575560()
    TEST EAX,EAX                        ; 0057cb71
    JG 0x0057cb76                       ; 0057cb73
        ;   XREF to: 0057cb76 (CONDITIONAL_JUMP)  ; LAB_0057cb76
    RET                                 ; 0057cb75
    PUSH 0xac44                         ; 0057cb76
        ;   Label: LAB_0057cb76
    PUSH 0x2                            ; 0057cb7b
    PUSH 0x10                           ; 0057cb7d
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_00575120 ; 0057cb7f
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundOutputMode_FUN_00575120(int bits_per_sample, int channels, int sample_rate)
    ADD ESP,0xc                         ; 0057cb84
    RET                                 ; 0057cb87

