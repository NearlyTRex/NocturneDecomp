; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462450(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01b2ee3c
;   undefined4 DAT_01b2ee40
;   undefined4 DAT_01b2ee44
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00462450
        ;   Label: FUN_00462450
    MOV dword ptr [0x01b2ee40],EDX      ; 00462452 | DAT_01b2ee40
    MOV dword ptr [0x01b2ee44],EDX      ; 00462458 | DAT_01b2ee44
    MOV dword ptr [0x01b2ee3c],EDX      ; 0046245e | DAT_01b2ee3c
    RET                                 ; 00462464

