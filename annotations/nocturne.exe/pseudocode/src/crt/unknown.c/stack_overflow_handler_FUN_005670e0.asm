; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_stack_overflow_handler_FUN_005670e0(void)
;
;
; XREF[2]:
;   crt_io.c_write_FUN_0057301c at 0057319f
;   crt_unknown.c_FUN_005670c1 at 005670c4
;
; Referenced Globals:
;   TerminatedCString s_Stack_Overflow_005c1aa4
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_0056ddc0
;
; *****************************************************************************

section .text

    POP EAX                             ; 005670e0
        ;   Label: crt_unknown.c_stack_overflow_handler_FUN_005670e0
    PUSH 0x1                            ; 005670e1
    PUSH 0x5c1aa4                       ; 005670e3 | = "Stack Overflow!\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_0056ddc0 ; 005670e8
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_0056ddc0(char * error_message, int error_level)

