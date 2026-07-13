; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __fptrap(void)
;
;
; XREF[1]:
;   FUN_10005f40 at 10006607
;
; Called Functions:
;   __amsg_exit
;
; *****************************************************************************

section .text

    PUSH 0x2                            ; 10009ab0
        ;   Label: __fptrap
    CALL __amsg_exit                    ; 10009ab2
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 10009ab7
    RET                                 ; 10009aba

