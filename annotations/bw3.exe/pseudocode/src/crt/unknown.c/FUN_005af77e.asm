; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005af77e(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005af71c at 005af768
;
; *****************************************************************************

section .text

    SUB ESI,ESI                         ; 005af77e
        ;   Label: crt_unknown.c_FUN_005af77e
    OR ESI,EAX                          ; 005af780
    OR ESI,EDX                          ; 005af782
    OR ESI,EBP                          ; 005af784
    JZ 0x005af7be                       ; 005af786
        ;   XREF to: 005af7be (CONDITIONAL_JUMP)  ; LAB_005af7be
    OR EDX,EDX                          ; 005af788
    JNZ 0x005af795                      ; 005af78a
        ;   XREF to: 005af795 (CONDITIONAL_JUMP)  ; LAB_005af795
    MOV EDX,EAX                         ; 005af78c
    MOV EAX,EBP                         ; 005af78e
    SUB EBP,EBP                         ; 005af790
    SUB EDI,0x20                        ; 005af792
    OR EDX,EDX                          ; 005af795
        ;   Label: LAB_005af795
    JNZ 0x005af7a2                      ; 005af797
        ;   XREF to: 005af7a2 (CONDITIONAL_JUMP)  ; LAB_005af7a2
    MOV EDX,EAX                         ; 005af799
    MOV EAX,EBP                         ; 005af79b
    SUB EBP,EBP                         ; 005af79d
    SUB EDI,0x20                        ; 005af79f
    OR EDX,EDX                          ; 005af7a2
        ;   Label: LAB_005af7a2
    JS 0x005af7af                       ; 005af7a4
        ;   XREF to: 005af7af (CONDITIONAL_JUMP)  ; LAB_005af7af
    DEC EDI                             ; 005af7a6
    ADD EBP,EBP                         ; 005af7a7
    ADC EAX,EAX                         ; 005af7a9
    ADC EDX,EDX                         ; 005af7ab
    JMP 0x005af7a2                      ; 005af7ad
        ;   XREF to: 005af7a2 (UNCONDITIONAL_JUMP)  ; LAB_005af7a2
    ADD EBP,EBP                         ; 005af7af
        ;   Label: LAB_005af7af
    ADC EAX,0x0                         ; 005af7b1
    ADC EDX,0x0                         ; 005af7b4
    JNC 0x005af7bc                      ; 005af7b7
        ;   XREF to: 005af7bc (CONDITIONAL_JUMP)  ; LAB_005af7bc
    RCR EDX,0x1                         ; 005af7b9
    INC EDI                             ; 005af7bb
    MOV ESI,EDI                         ; 005af7bc
        ;   Label: LAB_005af7bc
    RET                                 ; 005af7be
        ;   Label: LAB_005af7be

