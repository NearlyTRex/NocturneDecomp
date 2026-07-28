; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
;
; Parameters:
; uint             Stack[0x4]:4   error_code
;
; XREF[18]:
;   sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_0052ab60 at 0052acf4
;   sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50 at 0052b122
;   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880 at 0052b951
;   sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280 at 0052a3b5
;   sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0 at 0052b84b
;   sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0052bae0 at 0052bb94
;   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0 at 0052ae50
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970 at 0052a9f6
;   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_0052a0d0 at 0052a196
;   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0052a450 at 0052a81d
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_DSERR_ALLOCATED_The_requ_00593b8f
;   TerminatedCString s_DSERR_ALREADYINITIALIZED_00593c07
;   TerminatedCString s_DSERR_BADFORMAT_The_spec_00593c44
;   TerminatedCString s_DSERR_BUFFERLOST_The_buf_00593c81
;   TerminatedCString s_DSERR_CONTROLUNAVAIL_The_00593cc9
;   TerminatedCString s_DSERR_GENERIC_An_undeter_00593d31
;   TerminatedCString s_DSERR_INVALIDCALL_This_f_00593d81
;   TerminatedCString s_DSERR_INVALIDPARAM_An_in_00593dd5
;   TerminatedCString s_DSERR_NOAGGREGATION_The_00593e24
;   TerminatedCString s_DSERR_NODRIVER_No_sound_00593e62
;   TerminatedCString s_DSERR_OTHERAPPHASPRIO_Th_00593e98
;   TerminatedCString s_DSERR_OUTOFMEMORY_The_Di_00593ed7
;   TerminatedCString s_DSERR_PRIOLEVELNEEDED_Th_00593f4b
;   TerminatedCString s_DSERR_UNINITIALIZED_The_00593fb4
;   TerminatedCString s_DSERR_UNSUPPORTED_The_fu_00594047
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00529a90
        ;   Label: sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
    MOV EDX,EAX                         ; 00529a94
    CMP EAX,0x88780032                  ; 00529a96
    JNC 0x00529b18                      ; 00529a9b
        ;   XREF to: 00529b18 (CONDITIONAL_JUMP)  ; LAB_00529b18
    CMP EAX,0x8007000e                  ; 00529a9d
    JNC 0x00529b65                      ; 00529aa2
        ;   XREF to: 00529b65 (CONDITIONAL_JUMP)  ; LAB_00529b65
    CMP EAX,0x80004005                  ; 00529aa8
    JNC 0x00529b96                      ; 00529aad
        ;   XREF to: 00529b96 (CONDITIONAL_JUMP)  ; LAB_00529b96
    CMP EAX,0x80004001                  ; 00529ab3
    JNZ 0x00529b2f                      ; 00529ab8
        ;   XREF to: 00529b2f (CONDITIONAL_JUMP)  ; LAB_00529b2f
    MOV EAX,0x594047                    ; 00529abe | = "DSERR_UNSUPPORTED: The function calle..."
    RET                                 ; 00529ac3
    MOV EAX,0x593b8f                    ; 00529ac4 | = "DSERR_ALLOCATED: The request failed b..."
        ;   Label: LAB_00529ac4
    RET                                 ; 00529ac9
    MOV EAX,0x593c07                    ; 00529aca | = "DSERR_ALREADYINITIALIZED: The object ..."
        ;   Label: LAB_00529aca
    RET                                 ; 00529acf
    MOV EAX,0x593c44                    ; 00529ad0 | = "DSERR_BADFORMAT: The specified wave f..."
        ;   Label: LAB_00529ad0
    RET                                 ; 00529ad5
    MOV EAX,0x593c81                    ; 00529ad6 | = "DSERR_BUFFERLOST: The buffer memory h..."
        ;   Label: LAB_00529ad6
    RET                                 ; 00529adb
    MOV EAX,0x593cc9                    ; 00529adc | = "DSERR_CONTROLUNAVAIL: The control (vo..."
        ;   Label: LAB_00529adc
    RET                                 ; 00529ae1
    MOV EAX,0x593d31                    ; 00529ae2 | = "DSERR_GENERIC: An undetermined error ..."
        ;   Label: LAB_00529ae2
    RET                                 ; 00529ae7
    MOV EAX,0x593d81                    ; 00529ae8 | = "DSERR_INVALIDCALL: This function is n..."
        ;   Label: LAB_00529ae8
    RET                                 ; 00529aed
    MOV EAX,0x593dd5                    ; 00529aee | = "DSERR_INVALIDPARAM: An invalid parame..."
        ;   Label: LAB_00529aee
    RET                                 ; 00529af3
    MOV EAX,0x593e24                    ; 00529af4 | = "DSERR_NOAGGREGATION: The object does ..."
        ;   Label: LAB_00529af4
    RET                                 ; 00529af9
    MOV EAX,0x593e62                    ; 00529afa | = "DSERR_NODRIVER: No sound driver is av..."
        ;   Label: LAB_00529afa
    RET                                 ; 00529aff
    MOV EAX,0x593e98                    ; 00529b00 | = "DSERR_OTHERAPPHASPRIO: This value is ..."
        ;   Label: LAB_00529b00
    RET                                 ; 00529b05
    MOV EAX,0x593ed7                    ; 00529b06 | = "DSERR_OUTOFMEMORY: The DirectSound su..."
        ;   Label: LAB_00529b06
    RET                                 ; 00529b0b
    MOV EAX,0x593f4b                    ; 00529b0c | = "DSERR_PRIOLEVELNEEDED: The caller doe..."
        ;   Label: LAB_00529b0c
    RET                                 ; 00529b11
    MOV EAX,0x593fb4                    ; 00529b12 | = "DSERR_UNINITIALIZED: The IDirectSound..."
        ;   Label: LAB_00529b12
    RET                                 ; 00529b17
    JBE 0x00529ae8                      ; 00529b18
        ;   XREF to: 00529ae8 (CONDITIONAL_JUMP)  ; LAB_00529ae8
        ;   Label: LAB_00529b18
    CMP EAX,0x88780082                  ; 00529b1a
    JNC 0x00529b35                      ; 00529b1f
        ;   XREF to: 00529b35 (CONDITIONAL_JUMP)  ; LAB_00529b35
    CMP EAX,0x88780064                  ; 00529b21
    JNC 0x00529b52                      ; 00529b26
        ;   XREF to: 00529b52 (CONDITIONAL_JUMP)  ; LAB_00529b52
    CMP EAX,0x88780046                  ; 00529b28
    JZ 0x00529b0c                       ; 00529b2d
        ;   XREF to: 00529b0c (CONDITIONAL_JUMP)  ; LAB_00529b0c
    MOV EAX,0x59408d                    ; 00529b2f | = "DSERR_ELIFINO: Unknown error status c..."
        ;   Label: LAB_00529b2f
    RET                                 ; 00529b34
    JBE 0x00529aca                      ; 00529b35
        ;   XREF to: 00529aca (CONDITIONAL_JUMP)  ; LAB_00529aca
        ;   Label: LAB_00529b35
    CMP EAX,0x887800a0                  ; 00529b37
    JNC 0x00529b47                      ; 00529b3c
        ;   XREF to: 00529b47 (CONDITIONAL_JUMP)  ; LAB_00529b47
    CMP EAX,0x88780096                  ; 00529b3e
    JZ 0x00529ad6                       ; 00529b43
        ;   XREF to: 00529ad6 (CONDITIONAL_JUMP)  ; LAB_00529ad6
    JMP 0x00529b2f                      ; 00529b45
        ;   XREF to: 00529b2f (UNCONDITIONAL_JUMP)  ; LAB_00529b2f
    JBE 0x00529b00                      ; 00529b47
        ;   XREF to: 00529b00 (CONDITIONAL_JUMP)  ; LAB_00529b00
        ;   Label: LAB_00529b47
    CMP EAX,0x887800aa                  ; 00529b49
    JZ 0x00529b12                       ; 00529b4e
        ;   XREF to: 00529b12 (CONDITIONAL_JUMP)  ; LAB_00529b12
    JMP 0x00529b2f                      ; 00529b50
        ;   XREF to: 00529b2f (UNCONDITIONAL_JUMP)  ; LAB_00529b2f
    JBE 0x00529ad0                      ; 00529b52
        ;   XREF to: 00529ad0 (CONDITIONAL_JUMP)  ; LAB_00529ad0
        ;   Label: LAB_00529b52
    CMP EAX,0x88780078                  ; 00529b58
    JZ 0x00529afa                       ; 00529b5d
        ;   XREF to: 00529afa (CONDITIONAL_JUMP)  ; LAB_00529afa
    MOV EAX,0x59408d                    ; 00529b5f | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00529b64
    JBE 0x00529b06                      ; 00529b65
        ;   XREF to: 00529b06 (CONDITIONAL_JUMP)  ; LAB_00529b06
        ;   Label: LAB_00529b65
    CMP EAX,0x8878000a                  ; 00529b67
    JNC 0x00529b7f                      ; 00529b6c
        ;   XREF to: 00529b7f (CONDITIONAL_JUMP)  ; LAB_00529b7f
    CMP EAX,0x80070057                  ; 00529b6e
    JZ 0x00529aee                       ; 00529b73
        ;   XREF to: 00529aee (CONDITIONAL_JUMP)  ; LAB_00529aee
    MOV EAX,0x59408d                    ; 00529b79 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00529b7e
    JBE 0x00529ac4                      ; 00529b7f
        ;   XREF to: 00529ac4 (CONDITIONAL_JUMP)  ; LAB_00529ac4
        ;   Label: LAB_00529b7f
    CMP EAX,0x8878001e                  ; 00529b85
    JZ 0x00529adc                       ; 00529b8a
        ;   XREF to: 00529adc (CONDITIONAL_JUMP)  ; LAB_00529adc
    MOV EAX,0x59408d                    ; 00529b90 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00529b95
    JBE 0x00529ae2                      ; 00529b96
        ;   XREF to: 00529ae2 (CONDITIONAL_JUMP)  ; LAB_00529ae2
        ;   Label: LAB_00529b96
    CMP EAX,0x80040110                  ; 00529b9c
    JZ 0x00529af4                       ; 00529ba1
        ;   XREF to: 00529af4 (CONDITIONAL_JUMP)  ; LAB_00529af4
    MOV EAX,0x59408d                    ; 00529ba7 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00529bac

