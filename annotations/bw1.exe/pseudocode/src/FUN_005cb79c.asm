; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005cb79c(void)
;
;
; XREF[1]:
;   FUN_005c5c78 at 005c5f68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb79c
        ;   Label: FUN_005cb79c
    TEST EDX,0x7ff00000                 ; 005cb79d
    JZ 0x005cb7e4                       ; 005cb7a3
        ;   XREF to: 005cb7e4 (CONDITIONAL_JUMP)  ; LAB_005cb7e4
    SUB EBX,EBX                         ; 005cb7a5
    ADD EAX,EAX                         ; 005cb7a7
    ADC EDX,EDX                         ; 005cb7a9
    RCR EBX,0x1                         ; 005cb7ab
    ADD EAX,0x20000000                  ; 005cb7ad
    ADC EDX,0x0                         ; 005cb7b2
    JZ 0x005cb7db                       ; 005cb7b5
        ;   XREF to: 005cb7db (CONDITIONAL_JUMP)  ; LAB_005cb7db
    CMP EDX,0x8fe00000                  ; 005cb7b7
    JNC 0x005cb7db                      ; 005cb7bd
        ;   XREF to: 005cb7db (CONDITIONAL_JUMP)  ; LAB_005cb7db
    CMP EDX,0x70200000                  ; 005cb7bf
    JC 0x005cb7e4                       ; 005cb7c5
        ;   XREF to: 005cb7e4 (CONDITIONAL_JUMP)  ; LAB_005cb7e4
    SUB EDX,0x70000000                  ; 005cb7c7
    ADD EAX,EAX                         ; 005cb7cd
    ADC EDX,EDX                         ; 005cb7cf
    ADD EAX,EAX                         ; 005cb7d1
    ADC EDX,EDX                         ; 005cb7d3
    OR EDX,EBX                          ; 005cb7d5
    MOV EAX,EDX                         ; 005cb7d7
    POP EBX                             ; 005cb7d9
    RET                                 ; 005cb7da
    MOV EAX,0x7f800000                  ; 005cb7db
        ;   Label: LAB_005cb7db
    OR EAX,EBX                          ; 005cb7e0
    POP EBX                             ; 005cb7e2
    RET                                 ; 005cb7e3
    SUB EAX,EAX                         ; 005cb7e4
        ;   Label: LAB_005cb7e4
    POP EBX                             ; 005cb7e6
    RET                                 ; 005cb7e7

