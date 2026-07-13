; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void ___initmbctable(void)
;
;
; XREF[1]:
;   FUN_100056a0 at 10005773
;
; Called Functions:
;   __setmbcp
;
; *****************************************************************************

section .text

    PUSH -0x3                           ; 100081d0
        ;   Label: ___initmbctable
    CALL __setmbcp                      ; 100081d2
        ;   XREF to: 10007eb0 (UNCONDITIONAL_CALL)  ; int __setmbcp(int _CodePage)
    ADD ESP,0x4                         ; 100081d7
    RET                                 ; 100081da

