; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c47ce(void)
;
;
; XREF[1]:
;   FUN_005c476c at 005c47b8
;
; *****************************************************************************

section .text

    SUB ESI,ESI                         ; 005c47ce
        ;   Label: FUN_005c47ce
    OR ESI,EAX                          ; 005c47d0
    OR ESI,EDX                          ; 005c47d2
    OR ESI,EBP                          ; 005c47d4
    JZ 0x005c480e                       ; 005c47d6
        ;   XREF to: 005c480e (CONDITIONAL_JUMP)  ; LAB_005c480e
    OR EDX,EDX                          ; 005c47d8
    JNZ 0x005c47e5                      ; 005c47da
        ;   XREF to: 005c47e5 (CONDITIONAL_JUMP)  ; LAB_005c47e5
    MOV EDX,EAX                         ; 005c47dc
    MOV EAX,EBP                         ; 005c47de
    SUB EBP,EBP                         ; 005c47e0
    SUB EDI,0x20                        ; 005c47e2
    OR EDX,EDX                          ; 005c47e5
        ;   Label: LAB_005c47e5
    JNZ 0x005c47f2                      ; 005c47e7
        ;   XREF to: 005c47f2 (CONDITIONAL_JUMP)  ; LAB_005c47f2
    MOV EDX,EAX                         ; 005c47e9
    MOV EAX,EBP                         ; 005c47eb
    SUB EBP,EBP                         ; 005c47ed
    SUB EDI,0x20                        ; 005c47ef
    OR EDX,EDX                          ; 005c47f2
        ;   Label: LAB_005c47f2
    JS 0x005c47ff                       ; 005c47f4
        ;   XREF to: 005c47ff (CONDITIONAL_JUMP)  ; LAB_005c47ff
    DEC EDI                             ; 005c47f6
    ADD EBP,EBP                         ; 005c47f7
    ADC EAX,EAX                         ; 005c47f9
    ADC EDX,EDX                         ; 005c47fb
    JMP 0x005c47f2                      ; 005c47fd
        ;   XREF to: 005c47f2 (UNCONDITIONAL_JUMP)  ; LAB_005c47f2
    ADD EBP,EBP                         ; 005c47ff
        ;   Label: LAB_005c47ff
    ADC EAX,0x0                         ; 005c4801
    ADC EDX,0x0                         ; 005c4804
    JNC 0x005c480c                      ; 005c4807
        ;   XREF to: 005c480c (CONDITIONAL_JUMP)  ; LAB_005c480c
    RCR EDX,0x1                         ; 005c4809
    INC EDI                             ; 005c480b
    MOV ESI,EDI                         ; 005c480c
        ;   Label: LAB_005c480c
    RET                                 ; 005c480e
        ;   Label: LAB_005c480e

