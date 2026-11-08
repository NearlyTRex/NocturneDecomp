; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057cb30(void)
;
;
; XREF[1]:
;   FUN_005032a0 at 005038c4
;
; Referenced Globals:
;   TerminatedCString s_wav_005f58d6
;   TerminatedCString s_sound_005f58dc
;   TerminatedCString s_mp3_005f58e2
;   TerminatedCString s_sound_005f58e8
;   undefined4 DAT_02c82c20
;
; Called Functions:
;   FUN_0049a0d0
;   FUN_00575120
;   FUN_00575560
;   FUN_005755c0
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c82c20]                ; 0057cb30 | DAT_02c82c20
        ;   Label: FUN_0057cb30
    TEST EAX,EAX                        ; 0057cb35
    JNZ 0x0057cb67                      ; 0057cb37
        ;   XREF to: 0057cb67 (CONDITIONAL_JUMP)  ; LAB_0057cb67
    PUSH 0x5f58d6                       ; 0057cb39 | = "*.wav"
    PUSH 0x5f58dc                       ; 0057cb3e | = "sound"
    PUSH 0x2c82c20                      ; 0057cb43 | DAT_02c82c20
    CALL FUN_0049a0d0                   ; 0057cb48
        ;   XREF to: 0049a0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a0d0()
    ADD ESP,0xc                         ; 0057cb4d
    PUSH 0x5f58e2                       ; 0057cb50 | = "*.mp3"
    PUSH 0x5f58e8                       ; 0057cb55 | = "sound"
    PUSH 0x2c82c20                      ; 0057cb5a | DAT_02c82c20
    CALL FUN_0049a0d0                   ; 0057cb5f
        ;   XREF to: 0049a0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a0d0()
    ADD ESP,0xc                         ; 0057cb64
    CALL FUN_005755c0                   ; 0057cb67
        ;   XREF to: 005755c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005755c0()
        ;   Label: LAB_0057cb67
    CALL FUN_00575560                   ; 0057cb6c
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; undefined FUN_00575560()
    TEST EAX,EAX                        ; 0057cb71
    JG 0x0057cb76                       ; 0057cb73
        ;   XREF to: 0057cb76 (CONDITIONAL_JUMP)  ; LAB_0057cb76
    RET                                 ; 0057cb75
    PUSH 0xac44                         ; 0057cb76
        ;   Label: LAB_0057cb76
    PUSH 0x2                            ; 0057cb7b
    PUSH 0x10                           ; 0057cb7d
    CALL FUN_00575120                   ; 0057cb7f
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; undefined FUN_00575120()
    ADD ESP,0xc                         ; 0057cb84
    RET                                 ; 0057cb87

