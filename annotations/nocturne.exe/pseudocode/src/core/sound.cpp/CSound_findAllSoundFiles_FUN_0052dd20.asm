; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_0052dd20(void)
;
;
; XREF[1]:
;   FUN_004c85f0 at 004c8c7c
;
; Referenced Globals:
;   TerminatedCString s_wav_005949ae
;   TerminatedCString s_sound_005949b4
;   TerminatedCString s_mp3_005949ba
;   TerminatedCString s_sound_005949c0
;   undefined4 DAT_02dc9610
;
; Called Functions:
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00528500
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
;
; *****************************************************************************

section .text

    MOV EAX,[0x02dc9610]                ; 0052dd20 | DAT_02dc9610
        ;   Label: core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20
    TEST EAX,EAX                        ; 0052dd25
    JNZ 0x0052dd57                      ; 0052dd27
        ;   XREF to: 0052dd57 (CONDITIONAL_JUMP)  ; LAB_0052dd57
    PUSH 0x5949ae                       ; 0052dd29 | = "*.wav"
    PUSH 0x5949b4                       ; 0052dd2e | = "sound"
    PUSH 0x2dc9610                      ; 0052dd33 | DAT_02dc9610
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 ; 0052dd38
        ;   XREF to: 004748b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0()
    ADD ESP,0xc                         ; 0052dd3d
    PUSH 0x5949ba                       ; 0052dd40 | = "*.mp3"
    PUSH 0x5949c0                       ; 0052dd45 | = "sound"
    PUSH 0x2dc9610                      ; 0052dd4a | DAT_02dc9610
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 ; 0052dd4f
        ;   XREF to: 004748b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0()
    ADD ESP,0xc                         ; 0052dd54
    CALL sound_sndmain.cpp_initializeSoundDevice_FUN_00528500 ; 0052dd57
        ;   XREF to: 00528500 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_initializeSoundDevice_FUN_00528500()
        ;   Label: LAB_0052dd57
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 0052dd5c
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
    TEST EAX,EAX                        ; 0052dd61
    JNZ 0x0052dd66                      ; 0052dd63
        ;   XREF to: 0052dd66 (CONDITIONAL_JUMP)  ; LAB_0052dd66
    RET                                 ; 0052dd65
    PUSH 0xac44                         ; 0052dd66
        ;   Label: LAB_0052dd66
    PUSH 0x2                            ; 0052dd6b
    PUSH 0x10                           ; 0052dd6d
    CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0 ; 0052dd6f
        ;   XREF to: 005280c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0()
    ADD ESP,0xc                         ; 0052dd74
    RET                                 ; 0052dd77

