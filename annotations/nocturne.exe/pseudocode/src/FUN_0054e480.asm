; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e480(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0054e480
        ;   Label: FUN_0054e480
    MOV dword ptr [0x02dd1188],EDX      ; 0054e482 | DAT_02dd1188
    MOV dword ptr [0x02dd118c],EDX      ; 0054e488 | DAT_02dd118c
    MOV dword ptr [0x02dd1184],EDX      ; 0054e48e | DAT_02dd1184
    RET                                 ; 0054e494

