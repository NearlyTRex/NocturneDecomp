; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl sound_snddx_cpp_FUN_00554ad0(uint error_code)
;
; Parameters:
; uint             Stack[0x4]:4   error_code
;
; XREF[18]:
;   sound_snddx.cpp_FUN_00554e50 at 00554f35
;   sound_snddx.cpp_FUN_00555130 at 005551fc
;   sound_snddx.cpp_FUN_005552a0 at 00555301
;   sound_snddx.cpp_FUN_00555560 at 0055592a
;   sound_snddx.cpp_FUN_00555a80 at 00555b09
;   sound_snddx.cpp_FUN_00555b60 at 00555bd9
;   sound_snddx.cpp_FUN_00555ce0 at 00555f68
;   sound_snddx.cpp_FUN_00556050 at 0055616a
;   sound_snddx.cpp_FUN_005561b0 at 00556224
;   sound_snddx.cpp_FUN_00556290 at 00556474
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_DS_OK_The_request_comple_005e94c9
;   TerminatedCString s_DSERR_ALLOCATED_The_requ_005e94f4
;   TerminatedCString s_DSERR_ALREADYINITIALIZED_005e956c
;   TerminatedCString s_DSERR_BADFORMAT_The_spec_005e95a9
;   TerminatedCString s_DSERR_BUFFERLOST_The_buf_005e95e6
;   TerminatedCString s_DSERR_CONTROLUNAVAIL_The_005e962e
;   undefined4 DAT_005e9697
;   TerminatedCString s_DSERR_INVALIDCALL_This_f_005e96e8
;   TerminatedCString s_DSERR_INVALIDPARAM_An_in_005e973c
;   TerminatedCString s_DSERR_NOAGGREGATION_The_005e978b
;   TerminatedCString s_DSERR_NODRIVER_No_sound_005e97c9
;   TerminatedCString s_DSERR_NOINTERFACE_The_re_005e97ff
;   TerminatedCString s_DSERR_OTHERAPPHASPRIO_An_005e983c
;   undefined4 DAT_005e98a9
;   TerminatedCString s_DSERR_PRIOLEVELNEEDED_Th_005e991d
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00554ad0
        ;   Label: sound_snddx.cpp_FUN_00554ad0
    MOV EDX,EAX                         ; 00554ad4
    CMP EAX,0x8878001e                  ; 00554ad6
    JNC 0x00554b65                      ; 00554adb
        ;   XREF to: 00554b65 (CONDITIONAL_JUMP)  ; LAB_00554b65
    CMP EAX,0x80004005                  ; 00554ae1
    JNC 0x00554bc3                      ; 00554ae6
        ;   XREF to: 00554bc3 (CONDITIONAL_JUMP)  ; LAB_00554bc3
    CMP EAX,0x80004001                  ; 00554aec
    JNC 0x00554c05                      ; 00554af1
        ;   XREF to: 00554c05 (CONDITIONAL_JUMP)  ; LAB_00554c05
    TEST EAX,EAX                        ; 00554af7
    JNZ 0x00554b7c                      ; 00554af9
        ;   XREF to: 00554b7c (CONDITIONAL_JUMP)  ; LAB_00554b7c
    MOV EAX,0x5e94c9                    ; 00554aff | = "DS_OK: The request completed successf..."
    RET                                 ; 00554b04
    MOV EAX,0x5e94f4                    ; 00554b05 | = "DSERR_ALLOCATED: The request failed b..."
        ;   Label: LAB_00554b05
    RET                                 ; 00554b0a
    MOV EAX,0x5e956c                    ; 00554b0b | = "DSERR_ALREADYINITIALIZED: The object ..."
        ;   Label: LAB_00554b0b
    RET                                 ; 00554b10
    MOV EAX,0x5e95a9                    ; 00554b11 | = "DSERR_BADFORMAT: The specified wave f..."
        ;   Label: LAB_00554b11
    RET                                 ; 00554b16
    MOV EAX,0x5e95e6                    ; 00554b17 | = "DSERR_BUFFERLOST: The buffer memory h..."
        ;   Label: LAB_00554b17
    RET                                 ; 00554b1c
    MOV EAX,0x5e962e                    ; 00554b1d | = "DSERR_CONTROLUNAVAIL: The control -- ..."
        ;   Label: LAB_00554b1d
    RET                                 ; 00554b22
    MOV EAX,0x5e9697                    ; 00554b23 | DAT_005e9697
        ;   Label: LAB_00554b23
    RET                                 ; 00554b28
    MOV EAX,0x5e96e8                    ; 00554b29 | = "DSERR_INVALIDCALL: This function is n..."
        ;   Label: LAB_00554b29
    RET                                 ; 00554b2e
    MOV EAX,0x5e973c                    ; 00554b2f | = "DSERR_INVALIDPARAM: An invalid parame..."
        ;   Label: LAB_00554b2f
    RET                                 ; 00554b34
    MOV EAX,0x5e978b                    ; 00554b35 | = "DSERR_NOAGGREGATION: The object does ..."
        ;   Label: LAB_00554b35
    RET                                 ; 00554b3a
    MOV EAX,0x5e97c9                    ; 00554b3b | = "DSERR_NODRIVER: No sound driver is av..."
        ;   Label: LAB_00554b3b
    RET                                 ; 00554b40
    MOV EAX,0x5e97ff                    ; 00554b41 | = "DSERR_NOINTERFACE: The requested inte..."
        ;   Label: LAB_00554b41
    RET                                 ; 00554b46
    MOV EAX,0x5e983c                    ; 00554b47 | = "DSERR_OTHERAPPHASPRIO: Another applic..."
        ;   Label: LAB_00554b47
    RET                                 ; 00554b4c
    MOV EAX,0x5e98a9                    ; 00554b4d | DAT_005e98a9
        ;   Label: LAB_00554b4d
    RET                                 ; 00554b52
    MOV EAX,0x5e991d                    ; 00554b53 | = "DSERR_PRIOLEVELNEEDED: The caller doe..."
        ;   Label: LAB_00554b53
    RET                                 ; 00554b58
    MOV EAX,0x5e9986                    ; 00554b59 | = "DSERR_UNINITIALIZED: DirectSound has ..."
        ;   Label: LAB_00554b59
    RET                                 ; 00554b5e
    MOV EAX,0x5e99cb                    ; 00554b5f | = "DSERR_UNSUPPORTED: The function calle..."
        ;   Label: LAB_00554b5f
    RET                                 ; 00554b64
    JBE 0x00554b1d                      ; 00554b65
        ;   XREF to: 00554b1d (CONDITIONAL_JUMP)  ; LAB_00554b1d
        ;   Label: LAB_00554b65
    CMP EAX,0x88780078                  ; 00554b67
    JNC 0x00554b82                      ; 00554b6c
        ;   XREF to: 00554b82 (CONDITIONAL_JUMP)  ; LAB_00554b82
    CMP EAX,0x88780046                  ; 00554b6e
    JNC 0x00554bb0                      ; 00554b73
        ;   XREF to: 00554bb0 (CONDITIONAL_JUMP)  ; LAB_00554bb0
    CMP EAX,0x88780032                  ; 00554b75
    JZ 0x00554b29                       ; 00554b7a
        ;   XREF to: 00554b29 (CONDITIONAL_JUMP)  ; LAB_00554b29
    MOV EAX,0x5e9a11                    ; 00554b7c | = "DSERR_ELIFINO: Unknown error status c..."
        ;   Label: LAB_00554b7c
    RET                                 ; 00554b81
    JBE 0x00554b3b                      ; 00554b82
        ;   XREF to: 00554b3b (CONDITIONAL_JUMP)  ; LAB_00554b3b
        ;   Label: LAB_00554b82
    CMP EAX,0x88780096                  ; 00554b84
    JNC 0x00554b98                      ; 00554b89
        ;   XREF to: 00554b98 (CONDITIONAL_JUMP)  ; LAB_00554b98
    CMP EAX,0x88780082                  ; 00554b8b
    JZ 0x00554b0b                       ; 00554b90
        ;   XREF to: 00554b0b (CONDITIONAL_JUMP)  ; LAB_00554b0b
    JMP 0x00554b7c                      ; 00554b96
        ;   XREF to: 00554b7c (UNCONDITIONAL_JUMP)  ; LAB_00554b7c
    JBE 0x00554b17                      ; 00554b98
        ;   XREF to: 00554b17 (CONDITIONAL_JUMP)  ; LAB_00554b17
        ;   Label: LAB_00554b98
    CMP EAX,0x887800a0                  ; 00554b9e
    JC 0x00554b7c                       ; 00554ba3
        ;   XREF to: 00554b7c (CONDITIONAL_JUMP)  ; LAB_00554b7c
    JBE 0x00554b47                      ; 00554ba5
        ;   XREF to: 00554b47 (CONDITIONAL_JUMP)  ; LAB_00554b47
    CMP EAX,0x887800aa                  ; 00554ba7
    JZ 0x00554b59                       ; 00554bac
        ;   XREF to: 00554b59 (CONDITIONAL_JUMP)  ; LAB_00554b59
    JMP 0x00554b7c                      ; 00554bae
        ;   XREF to: 00554b7c (UNCONDITIONAL_JUMP)  ; LAB_00554b7c
    JBE 0x00554b53                      ; 00554bb0
        ;   XREF to: 00554b53 (CONDITIONAL_JUMP)  ; LAB_00554b53
        ;   Label: LAB_00554bb0
    CMP EAX,0x88780064                  ; 00554bb2
    JZ 0x00554b11                       ; 00554bb7
        ;   XREF to: 00554b11 (CONDITIONAL_JUMP)  ; LAB_00554b11
    MOV EAX,0x5e9a11                    ; 00554bbd | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00554bc2
    JBE 0x00554b23                      ; 00554bc3
        ;   XREF to: 00554b23 (CONDITIONAL_JUMP)  ; LAB_00554b23
        ;   Label: LAB_00554bc3
    CMP EAX,0x8007000e                  ; 00554bc9
    JNC 0x00554be1                      ; 00554bce
        ;   XREF to: 00554be1 (CONDITIONAL_JUMP)  ; LAB_00554be1
    CMP EAX,0x80040110                  ; 00554bd0
    JZ 0x00554b35                       ; 00554bd5
        ;   XREF to: 00554b35 (CONDITIONAL_JUMP)  ; LAB_00554b35
    MOV EAX,0x5e9a11                    ; 00554bdb | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00554be0
    JBE 0x00554b4d                      ; 00554be1
        ;   XREF to: 00554b4d (CONDITIONAL_JUMP)  ; LAB_00554b4d
        ;   Label: LAB_00554be1
    CMP EAX,0x80070057                  ; 00554be7
    JC 0x00554b7c                       ; 00554bec
        ;   XREF to: 00554b7c (CONDITIONAL_JUMP)  ; LAB_00554b7c
    JBE 0x00554b2f                      ; 00554bee
        ;   XREF to: 00554b2f (CONDITIONAL_JUMP)  ; LAB_00554b2f
    CMP EAX,0x8878000a                  ; 00554bf4
    JZ 0x00554b05                       ; 00554bf9
        ;   XREF to: 00554b05 (CONDITIONAL_JUMP)  ; LAB_00554b05
    MOV EAX,0x5e9a11                    ; 00554bff | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00554c04
    JBE 0x00554b5f                      ; 00554c05
        ;   XREF to: 00554b5f (CONDITIONAL_JUMP)  ; LAB_00554b5f
        ;   Label: LAB_00554c05
    CMP EAX,0x80004002                  ; 00554c0b
    JZ 0x00554b41                       ; 00554c10
        ;   XREF to: 00554b41 (CONDITIONAL_JUMP)  ; LAB_00554b41
    MOV EAX,0x5e9a11                    ; 00554c16 | = "DSERR_ELIFINO: Unknown error status c..."
    RET                                 ; 00554c1b

