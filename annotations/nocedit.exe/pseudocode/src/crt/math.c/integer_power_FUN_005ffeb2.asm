; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpureg float10 __fpureg crt_math_c_integer_power_FUN_005ffeb2(float10 base,ushort exponent)
;
; Parameters:
; float10          Stack[0x8]:10   base
; ushort           Stack[0x14]:2   exponent
;
; XREF[1]:
;   crt_math.c_pow_FUN_005ffd76 at 005ffe40
;
; *****************************************************************************

section .text

    SHR AX,0x1                          ; 005ffeb2
        ;   Label: crt_math.c_integer_power_FUN_005ffeb2
    JBE 0x005ffebb                      ; 005ffeb5
        ;   XREF to: 005ffebb (CONDITIONAL_JUMP)  ; LAB_005ffebb
    FMUL ST0                            ; 005ffeb7
    JMP 0x005ffeb2                      ; 005ffeb9
        ;   XREF to: 005ffeb2 (UNCONDITIONAL_JUMP)
    JNC 0x005ffed0                      ; 005ffebb
        ;   XREF to: 005ffed0 (CONDITIONAL_JUMP)  ; LAB_005ffed0
        ;   Label: LAB_005ffebb
    FLD ST0                             ; 005ffebd
    JZ 0x005ffecc                       ; 005ffebf
        ;   XREF to: 005ffecc (CONDITIONAL_JUMP)  ; LAB_005ffecc
        ;   Label: LAB_005ffebf
    FMUL ST0                            ; 005ffec1
    SHR AX,0x1                          ; 005ffec3
    JNC 0x005ffeca                      ; 005ffec6
        ;   XREF to: 005ffeca (CONDITIONAL_JUMP)  ; LAB_005ffeca
    FMUL ST1                            ; 005ffec8
    JMP 0x005ffebf                      ; 005ffeca
        ;   XREF to: 005ffebf (UNCONDITIONAL_JUMP)  ; LAB_005ffebf
        ;   Label: LAB_005ffeca
    FSTP ST0                            ; 005ffecc
        ;   Label: LAB_005ffecc
    JMP 0x005ffed4                      ; 005ffece
        ;   XREF to: 005ffed4 (UNCONDITIONAL_JUMP)  ; LAB_005ffed4
    FSTP ST0                            ; 005ffed0
        ;   Label: LAB_005ffed0
    FLD1                                ; 005ffed2
    RET                                 ; 005ffed4
        ;   Label: LAB_005ffed4

