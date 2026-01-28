; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_unknown_c_FUN_0060d1ec(void)
;
;
; XREF[1]:
;   crt_thread.c_staticInit_FUN_0060d214 at 0060d21a
;
; Called Functions:
;   crt_signal.c_setSignalHandler_FUN_0060ce60
;   crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
;   crt_unknown.c_FUN_0060cf80
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_0060cf80     ; 0060d1ec
        ;   XREF to: 0060cf80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060cf80()
        ;   Label: crt_unknown.c_FUN_0060d1ec
    TEST EAX,EAX                        ; 0060d1f1
    JZ 0x0060d212                       ; 0060d1f3
        ;   XREF to: 0060d212 (CONDITIONAL_JUMP)  ; LAB_0060d212
    CALL crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4 ; 0060d1f5
        ;   XREF to: 0060cfe4 (UNCONDITIONAL_CALL)  ; undefined crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4()
    PUSH 0x2                            ; 0060d1fa
    PUSH 0x4                            ; 0060d1fc
    CALL crt_signal.c_setSignalHandler_FUN_0060ce60 ; 0060d1fe
        ;   XREF to: 0060ce60 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
    ADD ESP,0x8                         ; 0060d203
    PUSH 0x2                            ; 0060d206
    PUSH 0x7                            ; 0060d208
    CALL crt_signal.c_setSignalHandler_FUN_0060ce60 ; 0060d20a
        ;   XREF to: 0060ce60 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_0060ce60(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
    ADD ESP,0x8                         ; 0060d20f
    RET                                 ; 0060d212
        ;   Label: LAB_0060d212

