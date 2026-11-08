; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055a100(void)
;
;
; XREF[1]:
;   FUN_004e46c0 at 004e4cb4
;
; Referenced Globals:
;   TerminatedCString s_wav_005ea6dc
;   TerminatedCString s_sound_005ea6e2
;   TerminatedCString s_mp3_005ea6e8
;   TerminatedCString s_sound_005ea6ee
;   undefined4 DAT_0264b450
;
; Called Functions:
;   FUN_00481a70
;   FUN_005526f0
;   FUN_00552b30
;   FUN_00552b90
;
; *****************************************************************************

section .text

    MOV EAX,[0x0264b450]                ; 0055a100 | DAT_0264b450
        ;   Label: FUN_0055a100
    TEST EAX,EAX                        ; 0055a105
    JNZ 0x0055a137                      ; 0055a107
        ;   XREF to: 0055a137 (CONDITIONAL_JUMP)  ; LAB_0055a137
    PUSH 0x5ea6dc                       ; 0055a109 | = "*.wav"
    PUSH 0x5ea6e2                       ; 0055a10e | = "sound"
    PUSH 0x264b450                      ; 0055a113 | DAT_0264b450
    CALL FUN_00481a70                   ; 0055a118
        ;   XREF to: 00481a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00481a70()
    ADD ESP,0xc                         ; 0055a11d
    PUSH 0x5ea6e8                       ; 0055a120 | = "*.mp3"
    PUSH 0x5ea6ee                       ; 0055a125 | = "sound"
    PUSH 0x264b450                      ; 0055a12a | DAT_0264b450
    CALL FUN_00481a70                   ; 0055a12f
        ;   XREF to: 00481a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00481a70()
    ADD ESP,0xc                         ; 0055a134
    CALL FUN_00552b90                   ; 0055a137
        ;   XREF to: 00552b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b90()
        ;   Label: LAB_0055a137
    CALL FUN_00552b30                   ; 0055a13c
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b30()
    TEST EAX,EAX                        ; 0055a141
    JG 0x0055a146                       ; 0055a143
        ;   XREF to: 0055a146 (CONDITIONAL_JUMP)  ; LAB_0055a146
    RET                                 ; 0055a145
    PUSH 0xac44                         ; 0055a146
        ;   Label: LAB_0055a146
    PUSH 0x2                            ; 0055a14b
    PUSH 0x10                           ; 0055a14d
    CALL FUN_005526f0                   ; 0055a14f
        ;   XREF to: 005526f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005526f0()
    ADD ESP,0xc                         ; 0055a154
    RET                                 ; 0055a157

