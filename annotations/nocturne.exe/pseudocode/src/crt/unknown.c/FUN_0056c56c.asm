; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_unknown_c_FUN_0056c56c(int param_1,uint param_2)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; Called Functions:
;   crt_math.c_handle_math_error_FUN_005707db
;
; *****************************************************************************

section .text

    TEST byte ptr [ESP + 0xb],0x80      ; 0056c56c
        ;   Label: crt_unknown.c_FUN_0056c56c
    JZ 0x0056c596                       ; 0056c571
        ;   XREF to: 0056c596 (CONDITIONAL_JUMP)  ; LAB_0056c596
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056c573
    AND EAX,0x7fffffff                  ; 0056c577
    OR EAX,dword ptr [ESP + 0x4]        ; 0056c57c
    JZ 0x0056c596                       ; 0056c580
        ;   XREF to: 0056c596 (CONDITIONAL_JUMP)  ; LAB_0056c596
    PUSH 0x3                            ; 0056c582
    PUSH dword ptr [ESP + 0xc]          ; 0056c584
    PUSH dword ptr [ESP + 0xc]          ; 0056c588
    CALL crt_math.c_handle_math_error_FUN_005707db ; 0056c58c
        ;   XREF to: 005707db (UNCONDITIONAL_CALL)  ; double crt_math.c_handle_math_error_FUN_005707db()
    ADD ESP,0xc                         ; 0056c591
    JMP 0x0056c5a5                      ; 0056c594
        ;   XREF to: 0056c5a5 (UNCONDITIONAL_JUMP)  ; LAB_0056c5a5
    FLD double ptr [ESP + 0x4]          ; 0056c596
        ;   Label: LAB_0056c596
    FSQRT                               ; 0056c59a
    SUB ESP,0x8                         ; 0056c59c
    FSTP double ptr [ESP]               ; 0056c59f
    WAIT                                ; 0056c5a2
    POP EAX                             ; 0056c5a3
    POP EDX                             ; 0056c5a4
    RET                                 ; 0056c5a5
        ;   Label: LAB_0056c5a5

