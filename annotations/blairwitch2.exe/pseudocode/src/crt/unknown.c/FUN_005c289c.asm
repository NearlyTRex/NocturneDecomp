; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c289c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2b1d
;
; Called Functions:
;   crt_unknown.c_FUN_005c2760
;
; *****************************************************************************

section .text

    PUSH 0x2680920                      ; 005c289c
        ;   Label: crt_unknown.c_FUN_005c289c
    CALL crt_unknown.c_FUN_005c2760     ; 005c28a1
        ;   XREF to: 005c2760 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2760()
    ADD ESP,0x4                         ; 005c28a6
    RET                                 ; 005c28a9

