; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_signal_c_FUN_005c4fac(void)
;
;
; Called Functions:
;   crt_unknown.c_processSignal_FUN_005c50b8
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005c4fac
        ;   Label: crt_signal.c_FUN_005c4fac
    CALL crt_unknown.c_processSignal_FUN_005c50b8 ; 005c4fae
        ;   XREF to: 005c50b8 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_processSignal_FUN_005c50b8(int signal_number)
    ADD ESP,0x4                         ; 005c4fb3
    RET                                 ; 005c4fb6

