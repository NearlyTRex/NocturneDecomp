; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416f80(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416f80
        ;   Label: FUN_00416f80
    MOV EDX,dword ptr [EAX + 0x24]      ; 00416f84
    MOV dword ptr [EAX + 0x2c],0x0      ; 00416f87
    MOV dword ptr [EAX + 0x28],EDX      ; 00416f8e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00416f91
    MOV dword ptr [EAX + 0x24],EDX      ; 00416f95
    RET                                 ; 00416f98

