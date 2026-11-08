; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005ae60c(void)
;
;
; XREF[1]:
;   FUN_005a8ae8 at 005a8dd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae60c
        ;   Label: FUN_005ae60c
    TEST EDX,0x7ff00000                 ; 005ae60d
    JZ 0x005ae654                       ; 005ae613
        ;   XREF to: 005ae654 (CONDITIONAL_JUMP)  ; LAB_005ae654
    SUB EBX,EBX                         ; 005ae615
    ADD EAX,EAX                         ; 005ae617
    ADC EDX,EDX                         ; 005ae619
    RCR EBX,0x1                         ; 005ae61b
    ADD EAX,0x20000000                  ; 005ae61d
    ADC EDX,0x0                         ; 005ae622
    JZ 0x005ae64b                       ; 005ae625
        ;   XREF to: 005ae64b (CONDITIONAL_JUMP)  ; LAB_005ae64b
    CMP EDX,0x8fe00000                  ; 005ae627
    JNC 0x005ae64b                      ; 005ae62d
        ;   XREF to: 005ae64b (CONDITIONAL_JUMP)  ; LAB_005ae64b
    CMP EDX,0x70200000                  ; 005ae62f
    JC 0x005ae654                       ; 005ae635
        ;   XREF to: 005ae654 (CONDITIONAL_JUMP)  ; LAB_005ae654
    SUB EDX,0x70000000                  ; 005ae637
    ADD EAX,EAX                         ; 005ae63d
    ADC EDX,EDX                         ; 005ae63f
    ADD EAX,EAX                         ; 005ae641
    ADC EDX,EDX                         ; 005ae643
    OR EDX,EBX                          ; 005ae645
    MOV EAX,EDX                         ; 005ae647
    POP EBX                             ; 005ae649
    RET                                 ; 005ae64a
    MOV EAX,0x7f800000                  ; 005ae64b
        ;   Label: LAB_005ae64b
    OR EAX,EBX                          ; 005ae650
    POP EBX                             ; 005ae652
    RET                                 ; 005ae653
    SUB EAX,EAX                         ; 005ae654
        ;   Label: LAB_005ae654
    POP EBX                             ; 005ae656
    RET                                 ; 005ae657

