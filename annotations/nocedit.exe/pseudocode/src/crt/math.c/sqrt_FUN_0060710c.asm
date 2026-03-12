; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __fpureg crt_math_c_sqrt_FUN_0060710c(double value)
;
;
; XREF[2]:
;   crt_math.c_acos_FUN_00600162 at 00600184
;   crt_math.c_asin_FUN_00600b94 at 00600b9e
;
; Called Functions:
;   crt_math.c_handle_math_error_FUN_0060c02b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060710c
        ;   Label: crt_math.c_sqrt_FUN_0060710c
    MOV EBP,ESP                         ; 0060710d
    FTST                                ; 0060710f
    SUB ESP,0x10                        ; 00607111
    FSTSW word ptr [EBP + -0x8]         ; 00607114
    WAIT                                ; 00607118
    XCHG word ptr [EBP + -0x8],AX       ; 00607119
    SAHF                                ; 0060711d
    JNC 0x00607142                      ; 0060711e
        ;   XREF to: 00607142 (CONDITIONAL_JUMP)  ; LAB_00607142
    FSTP double ptr [EBP + -0x10]       ; 00607120
    MOV EAX,dword ptr [EBP + -0x8]      ; 00607123
    CMP AL,0x3                          ; 00607126
    JZ 0x0060712d                       ; 00607128
        ;   XREF to: 0060712d (CONDITIONAL_JUMP)  ; LAB_0060712d
    FSTP double ptr [EBP + -0x10]       ; 0060712a
    MOV dword ptr [EBP + -0x4],EDX      ; 0060712d
        ;   Label: LAB_0060712d
    CALL crt_math.c_handle_math_error_FUN_0060c02b ; 00607130
        ;   XREF to: 0060c02b (UNCONDITIONAL_CALL)  ; double crt_math.c_handle_math_error_FUN_0060c02b()
    PUSH EDX                            ; 00607135
    PUSH EAX                            ; 00607136
    FLD double ptr [ESP]                ; 00607137
    MOV EDX,dword ptr [EBP + -0x4]      ; 0060713a
    WAIT                                ; 0060713d
    MOV AL,0x1                          ; 0060713e
    JMP 0x00607146                      ; 00607140
        ;   XREF to: 00607146 (UNCONDITIONAL_JUMP)  ; LAB_00607146
    FSQRT                               ; 00607142
        ;   Label: LAB_00607142
    MOV AL,0x0                          ; 00607144
    MOV ESP,EBP                         ; 00607146
        ;   Label: LAB_00607146
    POP EBP                             ; 00607148
    RET                                 ; 00607149

