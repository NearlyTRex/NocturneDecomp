; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_startup.c_notifyAbnormalTermination_FUN_00601620(void)
;
;
; XREF[1]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 00506fe1
;
; Referenced Globals:
;   VOID_FUNC* PTR_crt_startup.c_reportAbnormalTermination_FUN_00684c84 = 00601628
;
; Called Functions:
;   crt_startup.c_reportAbnormalTermination_FUN_00601628
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00684c84]         ; 00601620 | VOID_FUNC * PTR_crt_startup.c_reportAbnormalTermination_FUN_00684c84
        ;   Label: crt_startup.c_notifyAbnormalTermination_FUN_00601620
    MOV EAX,EAX                         ; 00601626

