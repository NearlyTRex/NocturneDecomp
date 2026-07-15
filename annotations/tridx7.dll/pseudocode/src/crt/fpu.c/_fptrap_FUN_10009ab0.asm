; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fpu_c__fptrap_FUN_10009ab0(void)
;
;
; XREF[1]:
;   crt_stdio.c__output_FUN_10005f40 at 10006607
;
; Called Functions:
;   crt_startup.c__amsg_exit_FUN_100058c0
;
; *****************************************************************************

section .text

    PUSH 0x2                            ; 10009ab0
        ;   Label: crt_fpu.c__fptrap_FUN_10009ab0
    CALL crt_startup.c__amsg_exit_FUN_100058c0 ; 10009ab2
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void crt_startup.c__amsg_exit_FUN_100058c0(int rterrnum)
    ADD ESP,0x4                         ; 10009ab7
    RET                                 ; 10009aba

