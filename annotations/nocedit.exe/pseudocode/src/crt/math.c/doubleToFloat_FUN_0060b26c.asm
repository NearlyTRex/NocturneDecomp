; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister float crt_math.c_doubleToFloat_FUN_0060b26c(double val)
;
;
; XREF[1]:
;   crt_stdio.c_scanf_float_FUN_00605178 at 00605468
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b26c
        ;   Label: crt_math.c_doubleToFloat_FUN_0060b26c
    TEST EDX,0x7ff00000                 ; 0060b26d
    JZ 0x0060b2b4                       ; 0060b273 | LAB_0060b2b4
        ;   XREF to: 0060b2b4 (CONDITIONAL_JUMP)
    SUB EBX,EBX                         ; 0060b275
    ADD EAX,EAX                         ; 0060b277
    ADC EDX,EDX                         ; 0060b279
    RCR EBX,0x1                         ; 0060b27b
    ADD EAX,0x20000000                  ; 0060b27d
    ADC EDX,0x0                         ; 0060b282
    JZ 0x0060b2ab                       ; 0060b285 | LAB_0060b2ab
        ;   XREF to: 0060b2ab (CONDITIONAL_JUMP)
    CMP EDX,0x8fe00000                  ; 0060b287
    JNC 0x0060b2ab                      ; 0060b28d | LAB_0060b2ab
        ;   XREF to: 0060b2ab (CONDITIONAL_JUMP)
    CMP EDX,0x70200000                  ; 0060b28f
    JC 0x0060b2b4                       ; 0060b295 | LAB_0060b2b4
        ;   XREF to: 0060b2b4 (CONDITIONAL_JUMP)
    SUB EDX,0x70000000                  ; 0060b297
    ADD EAX,EAX                         ; 0060b29d
    ADC EDX,EDX                         ; 0060b29f
    ADD EAX,EAX                         ; 0060b2a1
    ADC EDX,EDX                         ; 0060b2a3
    OR EDX,EBX                          ; 0060b2a5
    MOV EAX,EDX                         ; 0060b2a7
    POP EBX                             ; 0060b2a9
    RET                                 ; 0060b2aa
    MOV EAX,0x7f800000                  ; 0060b2ab
        ;   Label: LAB_0060b2ab
    OR EAX,EBX                          ; 0060b2b0
    POP EBX                             ; 0060b2b2
    RET                                 ; 0060b2b3
    SUB EAX,EAX                         ; 0060b2b4
        ;   Label: LAB_0060b2b4
    POP EBX                             ; 0060b2b6
    RET                                 ; 0060b2b7

