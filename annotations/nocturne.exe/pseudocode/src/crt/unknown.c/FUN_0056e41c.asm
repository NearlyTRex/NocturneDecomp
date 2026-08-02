; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e41c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e6fc
;
; Called Functions:
;   crt_unknown.c_FUN_0056e390
;
; *****************************************************************************

section .text

    PUSH 0x2de54b0                      ; 0056e41c
        ;   Label: crt_unknown.c_FUN_0056e41c
    CALL crt_unknown.c_FUN_0056e390     ; 0056e421
        ;   XREF to: 0056e390 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e390()
    ADD ESP,0x4                         ; 0056e426
    RET                                 ; 0056e429

