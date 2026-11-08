; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059a1f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a1f0
        ;   Label: FUN_0059a1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a1f1
    PUSH EBX                            ; 0059a1f5
    CALL FUN_004085c0                   ; 0059a1f6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0059a1fb
    ADD EAX,0x158                       ; 0059a1fe
    PUSH EAX                            ; 0059a203
    CALL FUN_00468860                   ; 0059a204
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 0059a209
    LEA EBX,[EAX + 0xfffffea8]          ; 0059a20c
    PUSH 0x5f8027                       ; 0059a212
    LEA EAX,[EBX + 0x158]               ; 0059a217
    PUSH EAX                            ; 0059a21d
    MOV dword ptr [EBX + 0x154],0x6070b4 ; 0059a21e
    CALL FUN_00468950                   ; 0059a228
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 0059a22d
    MOV EAX,EBX                         ; 0059a230
    POP EBX                             ; 0059a232
    RET                                 ; 0059a233

