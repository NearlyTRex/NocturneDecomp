; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057189c(void)
;
;
; Called Functions:
;   crt_signal.c_setSignalHandler_FUN_00571510
;   crt_signal.c_unregisterConsoleHandler_FUN_00571694
;   FUN_00571630
;
; *****************************************************************************

section .text

    CALL FUN_00571630                   ; 0057189c
        ;   XREF to: 00571630 (UNCONDITIONAL_CALL)  ; undefined FUN_00571630()
        ;   Label: FUN_0057189c
    TEST EAX,EAX                        ; 005718a1
    JZ 0x005718c2                       ; 005718a3
        ;   XREF to: 005718c2 (CONDITIONAL_JUMP)  ; LAB_005718c2
    CALL crt_signal.c_unregisterConsoleHandler_FUN_00571694 ; 005718a5
        ;   XREF to: 00571694 (UNCONDITIONAL_CALL)  ; undefined1 crt_signal.c_unregisterConsoleHandler_FUN_00571694()
    PUSH 0x2                            ; 005718aa
    PUSH 0x4                            ; 005718ac
    CALL crt_signal.c_setSignalHandler_FUN_00571510 ; 005718ae
        ;   XREF to: 00571510 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_00571510(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
    ADD ESP,0x8                         ; 005718b3
    PUSH 0x2                            ; 005718b6
    PUSH 0x7                            ; 005718b8
    CALL crt_signal.c_setSignalHandler_FUN_00571510 ; 005718ba
        ;   XREF to: 00571510 (UNCONDITIONAL_CALL)  ; SIGNAL_HANDLER_TYPE crt_signal.c_setSignalHandler_FUN_00571510(int signal_number, SIGNAL_HANDLER_TYPE new_handler_type)
    ADD ESP,0x8                         ; 005718bf
    RET                                 ; 005718c2
        ;   Label: LAB_005718c2

