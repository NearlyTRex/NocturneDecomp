; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00599d10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599d10
        ;   Label: FUN_00599d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599d11
    PUSH EBX                            ; 00599d15
    CALL FUN_004085c0                   ; 00599d16
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 00599d1b
    ADD EAX,0x158                       ; 00599d1e
    PUSH EAX                            ; 00599d23
    CALL FUN_00468860                   ; 00599d24
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 00599d29
    LEA EBX,[EAX + 0xfffffea8]          ; 00599d2c
    PUSH 0x5f7ff8                       ; 00599d32
    LEA EAX,[EBX + 0x158]               ; 00599d37
    PUSH EAX                            ; 00599d3d
    MOV dword ptr [EBX + 0x154],0x606f94 ; 00599d3e
    CALL FUN_00468950                   ; 00599d48
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 00599d4d
    MOV EAX,EBX                         ; 00599d50
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00599d52
    POP EBX                             ; 00599d5c
    RET                                 ; 00599d5d

