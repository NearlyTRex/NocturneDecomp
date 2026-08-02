; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e42c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e701
;
; Called Functions:
;   crt_unknown.c_FUN_0056e3f4
;
; *****************************************************************************

section .text

    PUSH 0x2de54b0                      ; 0056e42c
        ;   Label: crt_unknown.c_FUN_0056e42c
    CALL crt_unknown.c_FUN_0056e3f4     ; 0056e431
        ;   XREF to: 0056e3f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e3f4()
    ADD ESP,0x4                         ; 0056e436
    RET                                 ; 0056e439

