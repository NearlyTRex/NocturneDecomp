; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0052c900(void)
;
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
;
; *****************************************************************************

section .text

    PUSH 0x5949ae                       ; 0052c900 | = "*.wav"
        ;   Label: core_sound.cpp_FUN_0052c900
    PUSH 0x5949b4                       ; 0052c905 | = "sound"
    PUSH 0x2dc9610                      ; 0052c90a | DAT_02dc9610
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 ; 0052c90f
        ;   XREF to: 004748b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0()
    ADD ESP,0xc                         ; 0052c914
    PUSH 0x5949ba                       ; 0052c917 | = "*.mp3"
    PUSH 0x5949c0                       ; 0052c91c | = "sound"
    PUSH 0x2dc9610                      ; 0052c921 | DAT_02dc9610
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 ; 0052c926
        ;   XREF to: 004748b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0()
    ADD ESP,0xc                         ; 0052c92b
    RET                                 ; 0052c92e

