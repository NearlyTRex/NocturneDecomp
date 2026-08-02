; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056aef0(void)
;
;
; XREF[1]:
;   crt_stdio.c_fflush_FUN_0056dd60 at 0056dd68
;
; Called Functions:
;   crt_unknown.c_FUN_0056aefc
;
; *****************************************************************************

section .text

    PUSH -0x1                           ; 0056aef0
        ;   Label: crt_unknown.c_FUN_0056aef0
    CALL crt_unknown.c_FUN_0056aefc     ; 0056aef2
        ;   XREF to: 0056aefc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056aefc()
    ADD ESP,0x4                         ; 0056aef7
    RET                                 ; 0056aefa

