; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594f20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594f20
        ;   Label: FUN_00594f20
    PUSH EDX                            ; 00594f24
    CALL FUN_004085c0                   ; 00594f25
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    MOV dword ptr [EAX + 0x154],0x6069a4 ; 00594f2a
    MOV dword ptr [EAX + 0x158],0x40a00000 ; 00594f34
    MOV dword ptr [EAX + 0x15c],0x41100000 ; 00594f3e
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 00594f48
    ADD ESP,0x4                         ; 00594f52
    MOV dword ptr [EAX + 0x164],0x0     ; 00594f55
    RET                                 ; 00594f5f

