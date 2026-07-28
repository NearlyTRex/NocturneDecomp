; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __fpureg_safe crt_math_c_sqrt_FUN_0056c5a8(double value)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   crt_math.c_acos_FUN_00565ca4 at 00565cc6
;   crt_math.c_asin_FUN_00565c76 at 00565c80
;
; Called Functions:
;   crt_math.c_handle_math_error_FUN_005707db
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056c5a8
        ;   Label: crt_math.c_sqrt_FUN_0056c5a8
    MOV EBP,ESP                         ; 0056c5a9
    FTST                                ; 0056c5ab
    SUB ESP,0x10                        ; 0056c5ad
    FSTSW word ptr [EBP + -0x8]         ; 0056c5b0
    WAIT                                ; 0056c5b4
    XCHG word ptr [EBP + -0x8],AX       ; 0056c5b5
    SAHF                                ; 0056c5b9
    JNC 0x0056c5de                      ; 0056c5ba
        ;   XREF to: 0056c5de (CONDITIONAL_JUMP)  ; LAB_0056c5de
    FSTP double ptr [EBP + -0x10]       ; 0056c5bc
    MOV EAX,dword ptr [EBP + -0x8]      ; 0056c5bf
    CMP AL,0x3                          ; 0056c5c2
    JZ 0x0056c5c9                       ; 0056c5c4
        ;   XREF to: 0056c5c9 (CONDITIONAL_JUMP)  ; LAB_0056c5c9
    FSTP double ptr [EBP + -0x10]       ; 0056c5c6
    MOV dword ptr [EBP + -0x4],EDX      ; 0056c5c9
        ;   Label: LAB_0056c5c9
    CALL crt_math.c_handle_math_error_FUN_005707db ; 0056c5cc
        ;   XREF to: 005707db (UNCONDITIONAL_CALL)  ; double crt_math.c_handle_math_error_FUN_005707db()
    PUSH EDX                            ; 0056c5d1
    PUSH EAX                            ; 0056c5d2
    FLD double ptr [ESP]                ; 0056c5d3
    MOV EDX,dword ptr [EBP + -0x4]      ; 0056c5d6
    WAIT                                ; 0056c5d9
    MOV AL,0x1                          ; 0056c5da
    JMP 0x0056c5e2                      ; 0056c5dc
        ;   XREF to: 0056c5e2 (UNCONDITIONAL_JUMP)  ; LAB_0056c5e2
    FSQRT                               ; 0056c5de
        ;   Label: LAB_0056c5de
    MOV AL,0x0                          ; 0056c5e0
    MOV ESP,EBP                         ; 0056c5e2
        ;   Label: LAB_0056c5e2
    POP EBP                             ; 0056c5e4
    RET                                 ; 0056c5e5

