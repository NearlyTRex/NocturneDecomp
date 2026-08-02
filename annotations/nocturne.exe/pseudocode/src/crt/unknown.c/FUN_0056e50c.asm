; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e50c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e79f
;
; Called Functions:
;   crt_unknown.c_FUN_0056e390
;
; *****************************************************************************

section .text

    PUSH 0x2de5c00                      ; 0056e50c
        ;   Label: crt_unknown.c_FUN_0056e50c
    CALL crt_unknown.c_FUN_0056e390     ; 0056e511
        ;   XREF to: 0056e390 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e390()
    ADD ESP,0x4                         ; 0056e516
    RET                                 ; 0056e519

