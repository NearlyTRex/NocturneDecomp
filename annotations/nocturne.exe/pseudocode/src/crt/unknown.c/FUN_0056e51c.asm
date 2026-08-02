; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e51c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e78a
;
; Called Functions:
;   crt_unknown.c_FUN_0056e3f4
;
; *****************************************************************************

section .text

    PUSH 0x2de5c00                      ; 0056e51c
        ;   Label: crt_unknown.c_FUN_0056e51c
    CALL crt_unknown.c_FUN_0056e3f4     ; 0056e521
        ;   XREF to: 0056e3f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e3f4()
    ADD ESP,0x4                         ; 0056e526
    RET                                 ; 0056e529

