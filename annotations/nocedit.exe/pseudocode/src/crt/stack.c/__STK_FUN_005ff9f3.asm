; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stk_probe crt_stack_c___STK_FUN_005ff9f3(void)
;
;
; Called Functions:
;   crt_stack.c_check_stack_target_FUN_005ffa03
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005ff9f3
        ;   Label: crt_stack.c___STK_FUN_005ff9f3
    CALL crt_stack.c_check_stack_target_FUN_005ffa03 ; 005ff9f7
        ;   XREF to: 005ffa03 (UNCONDITIONAL_CALL)  ; void crt_stack.c_check_stack_target_FUN_005ffa03()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff9fc
    RET 0x4                             ; 005ffa00

