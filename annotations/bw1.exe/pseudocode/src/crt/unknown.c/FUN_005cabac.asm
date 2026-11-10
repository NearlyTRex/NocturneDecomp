; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cabac(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cadb4 at 005cae50
;
; Called Functions:
;   crt_unknown.c_FUN_005caac4
;
; *****************************************************************************

section .text

    PUSH 0x2c9f810                      ; 005cabac
        ;   Label: crt_unknown.c_FUN_005cabac
    CALL crt_unknown.c_FUN_005caac4     ; 005cabb1
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caac4()
    ADD ESP,0x4                         ; 005cabb6
    RET                                 ; 005cabb9

