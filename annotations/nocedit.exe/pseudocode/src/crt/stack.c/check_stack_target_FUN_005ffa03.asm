; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_stack_c_check_stack_target_FUN_005ffa03(void *target_stack_ptr)
;
;
; XREF[1]:
;   crt_stack.c___STK_FUN_005ff9f3 at 005ff9f7
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;
; Called Functions:
;   crt_stack.c_ProbeStackSpace_FUN_005ffa2f
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005ffa03
        ;   Label: crt_stack.c_check_stack_target_FUN_005ffa03
    CMP EAX,ESP                         ; 005ffa04
    JNC 0x005ffa22                      ; 005ffa06
        ;   XREF to: 005ffa22 (CONDITIONAL_JUMP)
    SUB EAX,ESP                         ; 005ffa08
    NEG EAX                             ; 005ffa0a
    PUSH ESI                            ; 005ffa0c
    PUSH EAX                            ; 005ffa0d
    CALL dword ptr [0x00684ee4]         ; 005ffa0e | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
    MOV ESI,EAX                         ; 005ffa14
    POP EAX                             ; 005ffa16
    CMP EAX,dword ptr [ESI]             ; 005ffa17
    POP ESI                             ; 005ffa19
    JBE 0x005ffa22                      ; 005ffa1a
        ;   XREF to: 005ffa22 (CONDITIONAL_JUMP)
    CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f ; 005ffa1c
        ;   XREF to: 005ffa2f (UNCONDITIONAL_CALL)  ; void crt_stack.c_ProbeStackSpace_FUN_005ffa2f(uint size)
    RET                                 ; 005ffa21

