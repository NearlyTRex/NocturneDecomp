; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void crt_stack.c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes)
;
; Parameters:
; typedef SIZE_T ULONG_PTR Stack[0x4]:4   required_bytes
;
; XREF[2]:
;   crt_io.c_write_FUN_006084ec at 0060866f
;   crt_stack.c_check_stack_target_FUN_005ffa03 at 005ffa06
;
; Referenced Globals:
;   TerminatedCString s_Stack_Overflow_00684b24
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;
; *****************************************************************************

section .text

    POP EAX                             ; 005ffa22
        ;   Label: crt_stack.c_stack_overflow_handler_FUN_005ffa22
    PUSH 0x1                            ; 005ffa23
    PUSH 0x684b24                       ; 005ffa25 | = "Stack Overflow!\r\n" | s_Stack_Overflow_00684b24 = Stack Overflow!

    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 005ffa2a | void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)

