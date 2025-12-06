; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060b5e8()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060b586 at 0060b5d2
;
; *****************************************************************************

section .text

    SUB ESI,ESI                         ; 0060b5e8
        ;   Label: crt_unknown.c_FUN_0060b5e8
    OR ESI,EAX                          ; 0060b5ea
    OR ESI,EDX                          ; 0060b5ec
    OR ESI,EBP                          ; 0060b5ee
    JZ 0x0060b628                       ; 0060b5f0 | LAB_0060b628
        ;   XREF to: 0060b628 (CONDITIONAL_JUMP)
    OR EDX,EDX                          ; 0060b5f2
    JNZ 0x0060b5ff                      ; 0060b5f4 | LAB_0060b5ff
        ;   XREF to: 0060b5ff (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 0060b5f6
    MOV EAX,EBP                         ; 0060b5f8
    SUB EBP,EBP                         ; 0060b5fa
    SUB EDI,0x20                        ; 0060b5fc
    OR EDX,EDX                          ; 0060b5ff
        ;   Label: LAB_0060b5ff
    JNZ 0x0060b60c                      ; 0060b601 | LAB_0060b60c
        ;   XREF to: 0060b60c (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 0060b603
    MOV EAX,EBP                         ; 0060b605
    SUB EBP,EBP                         ; 0060b607
    SUB EDI,0x20                        ; 0060b609
    OR EDX,EDX                          ; 0060b60c
        ;   Label: LAB_0060b60c
    JS 0x0060b619                       ; 0060b60e | LAB_0060b619
        ;   XREF to: 0060b619 (CONDITIONAL_JUMP)
    DEC EDI                             ; 0060b610
    ADD EBP,EBP                         ; 0060b611
    ADC EAX,EAX                         ; 0060b613
    ADC EDX,EDX                         ; 0060b615
    JMP 0x0060b60c                      ; 0060b617 | LAB_0060b60c
        ;   XREF to: 0060b60c (UNCONDITIONAL_JUMP)
    ADD EBP,EBP                         ; 0060b619
        ;   Label: LAB_0060b619
    ADC EAX,0x0                         ; 0060b61b
    ADC EDX,0x0                         ; 0060b61e
    JNC 0x0060b626                      ; 0060b621 | LAB_0060b626
        ;   XREF to: 0060b626 (CONDITIONAL_JUMP)
    RCR EDX,0x1                         ; 0060b623
    INC EDI                             ; 0060b625
    MOV ESI,EDI                         ; 0060b626
        ;   Label: LAB_0060b626
    RET                                 ; 0060b628
        ;   Label: LAB_0060b628

