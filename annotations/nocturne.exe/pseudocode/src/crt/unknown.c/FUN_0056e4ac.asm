; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e4ac(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e748
;
; Called Functions:
;   crt_unknown.c_FUN_0056e390
;
; *****************************************************************************

section .text

    PUSH 0x2de55d0                      ; 0056e4ac
        ;   Label: crt_unknown.c_FUN_0056e4ac
    CALL crt_unknown.c_FUN_0056e390     ; 0056e4b1
        ;   XREF to: 0056e390 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e390()
    ADD ESP,0x4                         ; 0056e4b6
    RET                                 ; 0056e4b9

