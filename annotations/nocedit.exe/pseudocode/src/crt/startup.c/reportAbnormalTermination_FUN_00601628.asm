; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_startup.c_reportAbnormalTermination_FUN_00601628(void)
;
;
; XREF[2]:
;   crt_signal.c_processSignal_FUN_0060d128 at 0060d160
;   crt_startup.c_notifyAbnormalTermination_FUN_00601620 at 00601620
;
; Referenced Globals:
;   TerminatedCString s_ABNORMAL_TERMINATION_00658f98
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_00606660
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00601628
        ;   Label: crt_startup.c_reportAbnormalTermination_FUN_00601628
    PUSH 0x658f98                       ; 0060162d | = "ABNORMAL TERMINATION\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_00606660 ; 00601632
        ;   XREF to: 00606660 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_00606660(char * error_message, int error_level)
    ADD ESP,0x8                         ; 00601637
    RET                                 ; 0060163a

