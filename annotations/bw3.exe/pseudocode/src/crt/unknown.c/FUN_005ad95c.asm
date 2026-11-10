; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad95c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc3c
;
; Called Functions:
;   crt_unknown.c_FUN_005ad8d0
;
; *****************************************************************************

section .text

    PUSH 0x2d25a50                      ; 005ad95c
        ;   Label: crt_unknown.c_FUN_005ad95c
    CALL crt_unknown.c_FUN_005ad8d0     ; 005ad961
        ;   XREF to: 005ad8d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad8d0()
    ADD ESP,0x4                         ; 005ad966
    RET                                 ; 005ad969

