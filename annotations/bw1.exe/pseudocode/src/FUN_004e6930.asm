; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e6930(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6930
        ;   Label: FUN_004e6930
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e6931
    PUSH EBX                            ; 004e6935
    CALL FUN_004085c0                   ; 004e6936
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004e693b
    ADD EAX,0x158                       ; 004e693e
    PUSH EAX                            ; 004e6943
    CALL FUN_00468860                   ; 004e6944
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004e6949
    LEA EBX,[EAX + 0xfffffea8]          ; 004e694c
    PUSH 0x5e4192                       ; 004e6952
    LEA EAX,[EBX + 0x158]               ; 004e6957
    PUSH EAX                            ; 004e695d
    MOV dword ptr [EBX + 0x154],0x6017b4 ; 004e695e
    CALL FUN_00468950                   ; 004e6968
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004e696d
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 004e6977
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004e6981
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004e698b
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004e6995
    ADD ESP,0x8                         ; 004e699f
    MOV byte ptr [EBX + 0x2e8],0x0      ; 004e69a2
    MOV EAX,EBX                         ; 004e69a9
    MOV byte ptr [EBX + 0x34c],0x0      ; 004e69ab
    POP EBX                             ; 004e69b2
    RET                                 ; 004e69b3

