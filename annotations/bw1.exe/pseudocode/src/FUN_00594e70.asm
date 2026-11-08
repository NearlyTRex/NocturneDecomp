; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594e70(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594e70
        ;   Label: FUN_00594e70
    PUSH EDX                            ; 00594e74
    CALL FUN_004085c0                   ; 00594e75
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 00594e7a
    MOV dword ptr [EAX + 0x154],0x6068c4 ; 00594e7d
    RET                                 ; 00594e87

