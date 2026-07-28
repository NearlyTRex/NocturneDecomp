; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __watcallRegister crt_math_c_doubleToFloat_FUN_0056f100(double val)
;
;
; XREF[1]:
;   FUN_00567d88 at 00568078
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f100
        ;   Label: crt_math.c_doubleToFloat_FUN_0056f100
    TEST EDX,0x7ff00000                 ; 0056f101
    JZ 0x0056f148                       ; 0056f107
        ;   XREF to: 0056f148 (CONDITIONAL_JUMP)  ; LAB_0056f148
    SUB EBX,EBX                         ; 0056f109
    ADD EAX,EAX                         ; 0056f10b
    ADC EDX,EDX                         ; 0056f10d
    RCR EBX,0x1                         ; 0056f10f
    ADD EAX,0x20000000                  ; 0056f111
    ADC EDX,0x0                         ; 0056f116
    JZ 0x0056f13f                       ; 0056f119
        ;   XREF to: 0056f13f (CONDITIONAL_JUMP)  ; LAB_0056f13f
    CMP EDX,0x8fe00000                  ; 0056f11b
    JNC 0x0056f13f                      ; 0056f121
        ;   XREF to: 0056f13f (CONDITIONAL_JUMP)  ; LAB_0056f13f
    CMP EDX,0x70200000                  ; 0056f123
    JC 0x0056f148                       ; 0056f129
        ;   XREF to: 0056f148 (CONDITIONAL_JUMP)  ; LAB_0056f148
    SUB EDX,0x70000000                  ; 0056f12b
    ADD EAX,EAX                         ; 0056f131
    ADC EDX,EDX                         ; 0056f133
    ADD EAX,EAX                         ; 0056f135
    ADC EDX,EDX                         ; 0056f137
    OR EDX,EBX                          ; 0056f139
    MOV EAX,EDX                         ; 0056f13b
    POP EBX                             ; 0056f13d
    RET                                 ; 0056f13e
    MOV EAX,0x7f800000                  ; 0056f13f
        ;   Label: LAB_0056f13f
    OR EAX,EBX                          ; 0056f144
    POP EBX                             ; 0056f146
    RET                                 ; 0056f147
    SUB EAX,EAX                         ; 0056f148
        ;   Label: LAB_0056f148
    POP EBX                             ; 0056f14a
    RET                                 ; 0056f14b

