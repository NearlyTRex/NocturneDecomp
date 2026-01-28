; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
;
; Parameters:
; uint             Stack[0x4]:4   error_code
;
; XREF[19]:
;   sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40 at 005af0ef
;   sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410 at 005af671
;   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60 at 005afe31
;   sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660 at 005ae795
;   sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0 at 005afd2b
;   sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030 at 005b00e4
;   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220 at 005af2e5
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 at 005aedd6
;   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0 at 005ae5c6
;   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830 at 005aec6f
;   ... and 9 more
;
; Referenced Globals:
;   TerminatedCString s_DSERR_ALLOCATED_The_requ_00651544
;   TerminatedCString s_DSERR_ALREADYINITIALIZED_006515bc
;   TerminatedCString s_DSERR_BADFORMAT_The_spec_006515f9
;   TerminatedCString s_DSERR_BUFFERLOST_The_buf_00651636
;   TerminatedCString s_DSERR_CONTROLUNAVAIL_The_0065167e
;   TerminatedCString s_DSERR_GENERIC_An_undeter_006516e6
;   TerminatedCString s_DSERR_INVALIDCALL_This_f_00651736
;   TerminatedCString s_DSERR_INVALIDPARAM_An_in_0065178a
;   TerminatedCString s_DSERR_NOAGGREGATION_The__006517d9
;   TerminatedCString s_DSERR_NODRIVER_No_sound__00651817
;   TerminatedCString s_DSERR_OTHERAPPHASPRIO_Th_0065184d
;   TerminatedCString s_DSERR_OUTOFMEMORY_The_Di_0065188c
;   TerminatedCString s_DSERR_PRIOLEVELNEEDED_Th_00651900
;   TerminatedCString s_DSERR_UNINITIALIZED_The__00651969
;   TerminatedCString s_DSERR_UNSUPPORTED_The_fu_006519fc
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ade70
        ;   Label: sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
    MOV EDX,EAX                         ; 005ade74
    CMP EAX,0x88780032                  ; 005ade76
    JNC 0x005adef8                      ; 005ade7b
        ;   XREF to: 005adef8 (CONDITIONAL_JUMP)  ; LAB_005adef8
    CMP EAX,0x8007000e                  ; 005ade7d
    JNC 0x005adf45                      ; 005ade82
        ;   XREF to: 005adf45 (CONDITIONAL_JUMP)  ; LAB_005adf45
    CMP EAX,0x80004005                  ; 005ade88
    JNC 0x005adf76                      ; 005ade8d
        ;   XREF to: 005adf76 (CONDITIONAL_JUMP)  ; LAB_005adf76
    CMP EAX,0x80004001                  ; 005ade93
    JNZ 0x005adf0f                      ; 005ade98
        ;   XREF to: 005adf0f (CONDITIONAL_JUMP)  ; LAB_005adf0f
    MOV EAX,0x6519fc                    ; 005ade9e | = "DSERR_UNSUPPORTED: The function calle..."
    RET                                 ; 005adea3
    MOV EAX,0x651544                    ; 005adea4 | = "DSERR_ALLOCATED: The request failed b..."
        ;   Label: LAB_005adea4
    RET                                 ; 005adea9
    MOV EAX,0x6515bc                    ; 005adeaa | = "DSERR_ALREADYINITIALIZED: The object ..."
        ;   Label: LAB_005adeaa
    RET                                 ; 005adeaf
    MOV EAX,0x6515f9                    ; 005adeb0 | = "DSERR_BADFORMAT: The specified wave f..."
        ;   Label: LAB_005adeb0
    RET                                 ; 005adeb5
    MOV EAX,0x651636                    ; 005adeb6 | = "DSERR_BUFFERLOST: The buffer memory h..."
        ;   Label: LAB_005adeb6
    RET                                 ; 005adebb
    MOV EAX,0x65167e                    ; 005adebc | = "DSERR_CONTROLUNAVAIL: The control (vo..."
        ;   Label: LAB_005adebc
    RET                                 ; 005adec1
    MOV EAX,0x6516e6                    ; 005adec2 | = "DSERR_GENERIC: An undetermined error ..."
        ;   Label: LAB_005adec2
    RET                                 ; 005adec7
    MOV EAX,0x651736                    ; 005adec8 | = "DSERR_INVALIDCALL: This function is n..."
        ;   Label: LAB_005adec8
    RET                                 ; 005adecd
    MOV EAX,0x65178a                    ; 005adece | = "DSERR_INVALIDPARAM: An invalid parame..."
        ;   Label: LAB_005adece
    RET                                 ; 005aded3
    MOV EAX,0x6517d9                    ; 005aded4 | = "DSERR_NOAGGREGATION: The object does ..."
        ;   Label: LAB_005aded4
    RET                                 ; 005aded9
    MOV EAX,0x651817                    ; 005adeda | = "DSERR_NODRIVER: No sound driver is av..."
        ;   Label: LAB_005adeda
    RET                                 ; 005adedf
    MOV EAX,0x65184d                    ; 005adee0 | = "DSERR_OTHERAPPHASPRIO: This value is ..."
        ;   Label: LAB_005adee0
    RET                                 ; 005adee5
    MOV EAX,0x65188c                    ; 005adee6 | = "DSERR_OUTOFMEMORY: The DirectSound su..."
        ;   Label: LAB_005adee6
    RET                                 ; 005adeeb
    MOV EAX,0x651900                    ; 005adeec | = "DSERR_PRIOLEVELNEEDED: The caller doe..."
        ;   Label: LAB_005adeec
    RET                                 ; 005adef1
    MOV EAX,0x651969                    ; 005adef2 | = "DSERR_UNINITIALIZED: The IDirectSound..."
        ;   Label: LAB_005adef2
    RET                                 ; 005adef7
    JBE 0x005adec8                      ; 005adef8
        ;   XREF to: 005adec8 (CONDITIONAL_JUMP)  ; LAB_005adec8
        ;   Label: LAB_005adef8
    CMP EAX,0x88780082                  ; 005adefa
    JNC 0x005adf15                      ; 005adeff
        ;   XREF to: 005adf15 (CONDITIONAL_JUMP)  ; LAB_005adf15
    CMP EAX,0x88780064                  ; 005adf01
    JNC 0x005adf32                      ; 005adf06
        ;   XREF to: 005adf32 (CONDITIONAL_JUMP)  ; LAB_005adf32
    CMP EAX,0x88780046                  ; 005adf08
    JZ 0x005adeec                       ; 005adf0d
        ;   XREF to: 005adeec (CONDITIONAL_JUMP)  ; LAB_005adeec
    MOV EAX,0x651a42                    ; 005adf0f | = "DSERR_ELIFINO: Unknown error status c..."
        ;   Label: LAB_005adf0f
    RET                                 ; 005adf14
    JBE 0x005adeaa                      ; 005adf15
        ;   XREF to: 005adeaa (CONDITIONAL_JUMP)  ; LAB_005adeaa
        ;   Label: LAB_005adf15
    CMP EAX,0x887800a0                  ; 005adf17
    JNC 0x005adf27                      ; 005adf1c
        ;   XREF to: 005adf27 (CONDITIONAL_JUMP)  ; LAB_005adf27
    CMP EAX,0x88780096                  ; 005adf1e
    JZ 0x005adeb6                       ; 005adf23
        ;   XREF to: 005adeb6 (CONDITIONAL_JUMP)  ; LAB_005adeb6
    JMP 0x005adf0f                      ; 005adf25
        ;   XREF to: 005adf0f (UNCONDITIONAL_JUMP)  ; LAB_005adf0f
    JBE 0x005adee0                      ; 005adf27
        ;   XREF to: 005adee0 (CONDITIONAL_JUMP)  ; LAB_005adee0
        ;   Label: LAB_005adf27
    CMP EAX,0x887800aa                  ; 005adf29
    JZ 0x005adef2                       ; 005adf2e
        ;   XREF to: 005adef2 (CONDITIONAL_JUMP)  ; LAB_005adef2
    JMP 0x005adf0f                      ; 005adf30
        ;   XREF to: 005adf0f (UNCONDITIONAL_JUMP)  ; LAB_005adf0f
    JBE 0x005adeb0                      ; 005adf32
        ;   XREF to: 005adeb0 (CONDITIONAL_JUMP)  ; LAB_005adeb0
        ;   Label: LAB_005adf32
    CMP EAX,0x88780078                  ; 005adf38
    JZ 0x005adeda                       ; 005adf3d
        ;   XREF to: 005adeda (CONDITIONAL_JUMP)  ; LAB_005adeda
    MOV EAX,0x651a42                    ; 005adf3f | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 005adf44
    JBE 0x005adee6                      ; 005adf45
        ;   XREF to: 005adee6 (CONDITIONAL_JUMP)  ; LAB_005adee6
        ;   Label: LAB_005adf45
    CMP EAX,0x8878000a                  ; 005adf47
    JNC 0x005adf5f                      ; 005adf4c
        ;   XREF to: 005adf5f (CONDITIONAL_JUMP)  ; LAB_005adf5f
    CMP EAX,0x80070057                  ; 005adf4e
    JZ 0x005adece                       ; 005adf53
        ;   XREF to: 005adece (CONDITIONAL_JUMP)  ; LAB_005adece
    MOV EAX,0x651a42                    ; 005adf59 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 005adf5e
    JBE 0x005adea4                      ; 005adf5f
        ;   XREF to: 005adea4 (CONDITIONAL_JUMP)  ; LAB_005adea4
        ;   Label: LAB_005adf5f
    CMP EAX,0x8878001e                  ; 005adf65
    JZ 0x005adebc                       ; 005adf6a
        ;   XREF to: 005adebc (CONDITIONAL_JUMP)  ; LAB_005adebc
    MOV EAX,0x651a42                    ; 005adf70 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 005adf75
    JBE 0x005adec2                      ; 005adf76
        ;   XREF to: 005adec2 (CONDITIONAL_JUMP)  ; LAB_005adec2
        ;   Label: LAB_005adf76
    CMP EAX,0x80040110                  ; 005adf7c
    JZ 0x005aded4                       ; 005adf81
        ;   XREF to: 005aded4 (CONDITIONAL_JUMP)  ; LAB_005aded4
    MOV EAX,0x651a42                    ; 005adf87 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 005adf8c

