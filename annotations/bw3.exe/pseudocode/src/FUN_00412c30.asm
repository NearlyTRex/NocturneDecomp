; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00412c30(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00412c30
        ;   Label: FUN_00412c30
    MOV EDX,dword ptr [EAX + 0x24]      ; 00412c34
    MOV dword ptr [EAX + 0x2c],0x0      ; 00412c37
    MOV dword ptr [EAX + 0x28],EDX      ; 00412c3e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00412c41
    MOV dword ptr [EAX + 0x24],EDX      ; 00412c45
    RET                                 ; 00412c48

