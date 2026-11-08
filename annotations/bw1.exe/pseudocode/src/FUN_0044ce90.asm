; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044ce90(void)
;
;
; XREF[2]:
;   FUN_0044d610 at 0044d6b0
;   FUN_00462ad0 at 00462b91
;
; Referenced Globals:
;   undefined4 DAT_007c6120
;   undefined4 DAT_00857cd4
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0044ce90
        ;   Label: FUN_0044ce90
    MOV dword ptr [0x00857cd4],EDX      ; 0044ce92 | DAT_00857cd4
    MOV dword ptr [0x007c6120],EDX      ; 0044ce98 | DAT_007c6120
    RET                                 ; 0044ce9e

