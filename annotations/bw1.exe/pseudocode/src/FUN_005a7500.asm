; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7500(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005a7500
        ;   Label: FUN_005a7500
    MOV dword ptr [0x02c8af2c],EDX      ; 005a7502 | DAT_02c8af2c
    MOV dword ptr [0x02c8af30],EDX      ; 005a7508 | DAT_02c8af30
    MOV dword ptr [0x02c8af28],EDX      ; 005a750e | DAT_02c8af28
    RET                                 ; 005a7514

