; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister crt_unknown_c_reportAbnormalTermination_FUN_00566f98(void)
;
;
; XREF[2]:
;   crt_signal.c_processSignal_FUN_005717d8 at 00571810
;   crt_watcom.c_notifyAbnormalTermination_FUN_00566f90 at 00566f90
;
; Referenced Globals:
;   TerminatedCString s_ABNORMAL_TERMINATION_00598b14
;
; Called Functions:
;   crt_startup.c_HandleRuntimeError_FUN_0056ddc0
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00566f98
        ;   Label: crt_unknown.c_reportAbnormalTermination_FUN_00566f98
    PUSH 0x598b14                       ; 00566f9d | = "ABNORMAL TERMINATION\r\n"
    CALL crt_startup.c_HandleRuntimeError_FUN_0056ddc0 ; 00566fa2
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_0056ddc0(char * error_message, int error_level)
    ADD ESP,0x8                         ; 00566fa7
    RET                                 ; 00566faa

