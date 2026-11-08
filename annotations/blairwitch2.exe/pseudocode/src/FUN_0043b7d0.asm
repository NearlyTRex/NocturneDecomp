; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043b7d0(void)
;
;
; XREF[2]:
;   FUN_0043bf50 at 0043bff0
;   FUN_0044a2d0 at 0044a391
;
; Referenced Globals:
;   undefined4 DAT_007bda74
;   undefined4 DAT_0083c7d0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0043b7d0
        ;   Label: FUN_0043b7d0
    MOV dword ptr [0x0083c7d0],EDX      ; 0043b7d2 | DAT_0083c7d0
    MOV dword ptr [0x007bda74],EDX      ; 0043b7d8 | DAT_007bda74
    RET                                 ; 0043b7de

