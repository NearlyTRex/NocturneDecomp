; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410830(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410830
        ;   Label: FUN_00410830
    PUSH EDX                            ; 00410834
    CALL FUN_004085c0                   ; 00410835
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    MOV dword ptr [EAX + 0x154],0x5fbd94 ; 0041083a
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 00410844
    MOV byte ptr [EAX + 0x168],0x0      ; 0041084e
    MOV dword ptr [EAX + 0x164],0x1     ; 00410855
    ADD ESP,0x4                         ; 0041085f
    MOV EDX,dword ptr [EAX + 0x160]     ; 00410862
    MOV dword ptr [EAX + 0x15c],EDX     ; 00410868
    MOV EDX,dword ptr [EAX + 0x15c]     ; 0041086e
    MOV dword ptr [EAX + 0x158],EDX     ; 00410874
    RET                                 ; 0041087a

