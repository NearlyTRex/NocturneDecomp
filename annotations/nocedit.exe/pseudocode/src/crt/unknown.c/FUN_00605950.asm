; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_unknown_c_FUN_00605950(void)
;
;
; XREF[1]:
;   crt_stdio.c_fflush_FUN_00601540 at 00601548
;
; Called Functions:
;   crt_stdio.c_FlushFilesByMask_FUN_0060595c
;
; *****************************************************************************

section .text

    PUSH -0x1                           ; 00605950
        ;   Label: crt_unknown.c_FUN_00605950
    CALL crt_stdio.c_FlushFilesByMask_FUN_0060595c ; 00605952
        ;   XREF to: 0060595c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FlushFilesByMask_FUN_0060595c(uint file_mode_mask)
    ADD ESP,0x4                         ; 00605957
    RET                                 ; 0060595a

