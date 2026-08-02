; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e4fc(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e6e4 at 0056e734
;
; Called Functions:
;   crt_unknown.c_FUN_0056e3f4
;
; *****************************************************************************

section .text

    PUSH 0x2de5bf0                      ; 0056e4fc
        ;   Label: crt_unknown.c_FUN_0056e4fc
    CALL crt_unknown.c_FUN_0056e3f4     ; 0056e501
        ;   XREF to: 0056e3f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e3f4()
    ADD ESP,0x4                         ; 0056e506
    RET                                 ; 0056e509

