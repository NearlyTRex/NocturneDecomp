; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571b8e(void)
;
;
; XREF[1]:
;   FUN_00571b2c at 00571b78
;
; *****************************************************************************

section .text

    SUB ESI,ESI                         ; 00571b8e
        ;   Label: FUN_00571b8e
    OR ESI,EAX                          ; 00571b90
    OR ESI,EDX                          ; 00571b92
    OR ESI,EBP                          ; 00571b94
    JZ 0x00571bce                       ; 00571b96
        ;   XREF to: 00571bce (CONDITIONAL_JUMP)  ; LAB_00571bce
    OR EDX,EDX                          ; 00571b98
    JNZ 0x00571ba5                      ; 00571b9a
        ;   XREF to: 00571ba5 (CONDITIONAL_JUMP)  ; LAB_00571ba5
    MOV EDX,EAX                         ; 00571b9c
    MOV EAX,EBP                         ; 00571b9e
    SUB EBP,EBP                         ; 00571ba0
    SUB EDI,0x20                        ; 00571ba2
    OR EDX,EDX                          ; 00571ba5
        ;   Label: LAB_00571ba5
    JNZ 0x00571bb2                      ; 00571ba7
        ;   XREF to: 00571bb2 (CONDITIONAL_JUMP)  ; LAB_00571bb2
    MOV EDX,EAX                         ; 00571ba9
    MOV EAX,EBP                         ; 00571bab
    SUB EBP,EBP                         ; 00571bad
    SUB EDI,0x20                        ; 00571baf
    OR EDX,EDX                          ; 00571bb2
        ;   Label: LAB_00571bb2
    JS 0x00571bbf                       ; 00571bb4
        ;   XREF to: 00571bbf (CONDITIONAL_JUMP)  ; LAB_00571bbf
    DEC EDI                             ; 00571bb6
    ADD EBP,EBP                         ; 00571bb7
    ADC EAX,EAX                         ; 00571bb9
    ADC EDX,EDX                         ; 00571bbb
    JMP 0x00571bb2                      ; 00571bbd
        ;   XREF to: 00571bb2 (UNCONDITIONAL_JUMP)  ; LAB_00571bb2
    ADD EBP,EBP                         ; 00571bbf
        ;   Label: LAB_00571bbf
    ADC EAX,0x0                         ; 00571bc1
    ADC EDX,0x0                         ; 00571bc4
    JNC 0x00571bcc                      ; 00571bc7
        ;   XREF to: 00571bcc (CONDITIONAL_JUMP)  ; LAB_00571bcc
    RCR EDX,0x1                         ; 00571bc9
    INC EDI                             ; 00571bcb
    MOV ESI,EDI                         ; 00571bcc
        ;   Label: LAB_00571bcc
    RET                                 ; 00571bce
        ;   Label: LAB_00571bce

