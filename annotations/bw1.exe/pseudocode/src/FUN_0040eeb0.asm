; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040eeb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eeb0
        ;   Label: FUN_0040eeb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040eeb1
    PUSH EBX                            ; 0040eeb5
    CALL FUN_004085c0                   ; 0040eeb6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0040eebb
    ADD EAX,0x15c                       ; 0040eebe
    PUSH EAX                            ; 0040eec3
    CALL FUN_00468860                   ; 0040eec4
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 0040eec9
    LEA EBX,[EAX + 0xfffffea4]          ; 0040eecc
    PUSH 0x5d332c                       ; 0040eed2
    LEA EAX,[EBX + 0x15c]               ; 0040eed7
    PUSH EAX                            ; 0040eedd
    MOV dword ptr [EBX + 0x154],0x5fb9a4 ; 0040eede
    CALL FUN_00468950                   ; 0040eee8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0040eeed
    ADD ESP,0x8                         ; 0040eef7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0040eefa
    MOV EAX,EBX                         ; 0040ef04
    MOV dword ptr [EBX + 0x158],0x1     ; 0040ef06
    POP EBX                             ; 0040ef10
    RET                                 ; 0040ef11

