; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a6026(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a6007 at 005a600a
;   crt_unknown.c_FUN_005ab55c at 005ab6df
;
; Called Functions:
;   crt_unknown.c_FUN_005acde0
;
; *****************************************************************************

section .text

    POP EAX                             ; 005a6026
        ;   Label: crt_unknown.c_FUN_005a6026
    PUSH 0x1                            ; 005a6027
    PUSH 0x607888                       ; 005a6029
    CALL crt_unknown.c_FUN_005acde0     ; 005a602e
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acde0()

