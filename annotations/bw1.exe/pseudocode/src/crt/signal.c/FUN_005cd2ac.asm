; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_signal_c_FUN_005cd2ac(void)
;
;
; Called Functions:
;   crt_unknown.c_processSignal_FUN_005cd3b8
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005cd2ac
        ;   Label: crt_signal.c_FUN_005cd2ac
    CALL crt_unknown.c_processSignal_FUN_005cd3b8 ; 005cd2ae
        ;   XREF to: 005cd3b8 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_processSignal_FUN_005cd3b8(int signal_number)
    ADD ESP,0x4                         ; 005cd2b3
    RET                                 ; 005cd2b6

