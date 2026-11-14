; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_signal_c_FUN_005b003c(void)
;
;
; Called Functions:
;   crt_unknown.c_processSignal_FUN_005b0148
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005b003c
        ;   Label: crt_signal.c_FUN_005b003c
    CALL crt_unknown.c_processSignal_FUN_005b0148 ; 005b003e
        ;   XREF to: 005b0148 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_processSignal_FUN_005b0148(int signal_number)
    ADD ESP,0x4                         ; 005b0043
    RET                                 ; 005b0046

