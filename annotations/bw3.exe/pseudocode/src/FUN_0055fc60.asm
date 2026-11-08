; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055fc60(void)
;
;
; XREF[1]:
;   FUN_004e44e0 at 004e4b04
;
; Referenced Globals:
;   TerminatedCString s_wav_005d512f
;   TerminatedCString s_sound_005d5135
;   TerminatedCString s_mp3_005d513b
;   TerminatedCString s_sound_005d5141
;   undefined4 DAT_02cf5840
;
; Called Functions:
;   FUN_00482c70
;   FUN_00558290
;   FUN_005586d0
;   FUN_00558730
;
; *****************************************************************************

section .text

    MOV EAX,[0x02cf5840]                ; 0055fc60 | DAT_02cf5840
        ;   Label: FUN_0055fc60
    TEST EAX,EAX                        ; 0055fc65
    JNZ 0x0055fc97                      ; 0055fc67
        ;   XREF to: 0055fc97 (CONDITIONAL_JUMP)  ; LAB_0055fc97
    PUSH 0x5d512f                       ; 0055fc69 | = "*.wav"
    PUSH 0x5d5135                       ; 0055fc6e | = "sound"
    PUSH 0x2cf5840                      ; 0055fc73 | DAT_02cf5840
    CALL FUN_00482c70                   ; 0055fc78
        ;   XREF to: 00482c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00482c70()
    ADD ESP,0xc                         ; 0055fc7d
    PUSH 0x5d513b                       ; 0055fc80 | = "*.mp3"
    PUSH 0x5d5141                       ; 0055fc85 | = "sound"
    PUSH 0x2cf5840                      ; 0055fc8a | DAT_02cf5840
    CALL FUN_00482c70                   ; 0055fc8f
        ;   XREF to: 00482c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00482c70()
    ADD ESP,0xc                         ; 0055fc94
    CALL FUN_00558730                   ; 0055fc97
        ;   XREF to: 00558730 (UNCONDITIONAL_CALL)  ; undefined FUN_00558730()
        ;   Label: LAB_0055fc97
    CALL FUN_005586d0                   ; 0055fc9c
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586d0()
    TEST EAX,EAX                        ; 0055fca1
    JG 0x0055fca6                       ; 0055fca3
        ;   XREF to: 0055fca6 (CONDITIONAL_JUMP)  ; LAB_0055fca6
    RET                                 ; 0055fca5
    PUSH 0xac44                         ; 0055fca6
        ;   Label: LAB_0055fca6
    PUSH 0x2                            ; 0055fcab
    PUSH 0x10                           ; 0055fcad
    CALL FUN_00558290                   ; 0055fcaf
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; undefined FUN_00558290()
    ADD ESP,0xc                         ; 0055fcb4
    RET                                 ; 0055fcb7

