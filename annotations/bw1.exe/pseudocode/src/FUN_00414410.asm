; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414410(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414410
        ;   Label: FUN_00414410
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414411
    PUSH EBX                            ; 00414415
    CALL FUN_004085c0                   ; 00414416
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0041441b
    ADD EAX,0x158                       ; 0041441e
    PUSH EAX                            ; 00414423
    CALL FUN_00468860                   ; 00414424
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 00414429
    LEA EBX,[EAX + 0xfffffea8]          ; 0041442c
    PUSH 0x5d3b9a                       ; 00414432
    LEA EAX,[EBX + 0x158]               ; 00414437
    PUSH EAX                            ; 0041443d
    MOV dword ptr [EBX + 0x154],0x5fc314 ; 0041443e
    CALL FUN_00468950                   ; 00414448
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 0041444d
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 00414450
    MOV EAX,EBX                         ; 0041445a
    MOV dword ptr [EBX + 0x2dc],0x41f00000 ; 0041445c
    POP EBX                             ; 00414466
    RET                                 ; 00414467

