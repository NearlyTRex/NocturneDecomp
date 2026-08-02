; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e4cc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e74d
;
; Called Functions:
;   crt_unknown.c_FUN_0056e390
;
; *****************************************************************************

section .text

    PUSH 0x2de54c0                      ; 0056e4cc
        ;   Label: crt_unknown.c_FUN_0056e4cc
    CALL crt_unknown.c_FUN_0056e390     ; 0056e4d1
        ;   XREF to: 0056e390 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e390()
    ADD ESP,0x4                         ; 0056e4d6
    RET                                 ; 0056e4d9

