; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e9630(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cea40c
;   undefined4 DAT_01d06610
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004e9630
        ;   Label: FUN_004e9630
    MOV dword ptr [0x01d06610],EDX      ; 004e9632 | DAT_01d06610
    MOV dword ptr [0x01cea40c],EDX      ; 004e9638 | DAT_01cea40c
    RET                                 ; 004e963e

