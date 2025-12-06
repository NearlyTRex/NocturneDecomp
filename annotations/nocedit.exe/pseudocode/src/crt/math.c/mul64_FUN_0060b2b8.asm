; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister ulonglong crt_math.c_mul64_FUN_0060b2b8(uint low1, uint high1, uint low2, uint high2)
;
;
; XREF[1]:
;   crt_stdio.c_scanf_integer_FUN_0060547c at 00605643
;
; *****************************************************************************

section .text

    TEST EDX,EDX                        ; 0060b2b8
        ;   Label: crt_math.c_mul64_FUN_0060b2b8
    JNZ 0x0060b2c3                      ; 0060b2ba | LAB_0060b2c3
        ;   XREF to: 0060b2c3 (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 0060b2bc
    JNZ 0x0060b2c3                      ; 0060b2be | LAB_0060b2c3
        ;   XREF to: 0060b2c3 (CONDITIONAL_JUMP)
    MUL EBX                             ; 0060b2c0
    RET                                 ; 0060b2c2
    PUSH EAX                            ; 0060b2c3
        ;   Label: LAB_0060b2c3
    PUSH EDX                            ; 0060b2c4
    MUL ECX                             ; 0060b2c5
    MOV ECX,EAX                         ; 0060b2c7
    POP EAX                             ; 0060b2c9
    MUL EBX                             ; 0060b2ca
    ADD ECX,EAX                         ; 0060b2cc
    POP EAX                             ; 0060b2ce
    MUL EBX                             ; 0060b2cf
    ADD EDX,ECX                         ; 0060b2d1
    RET                                 ; 0060b2d3

