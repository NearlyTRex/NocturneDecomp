; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fc510(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc510
        ;   Label: FUN_004fc510
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fc511
    PUSH EBX                            ; 004fc515
    CALL FUN_004085c0                   ; 004fc516
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004fc51b
    ADD EAX,0x158                       ; 004fc51e
    PUSH EAX                            ; 004fc523
    CALL FUN_00468860                   ; 004fc524
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004fc529
    LEA EBX,[EAX + 0xfffffea8]          ; 004fc52c
    PUSH 0x5e69bd                       ; 004fc532
    LEA EAX,[EBX + 0x158]               ; 004fc537
    PUSH EAX                            ; 004fc53d
    MOV dword ptr [EBX + 0x154],0x602ad4 ; 004fc53e
    CALL FUN_00468950                   ; 004fc548
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004fc54d
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004fc550
    MOV EAX,EBX                         ; 004fc55a
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004fc55c
    POP EBX                             ; 004fc566
    RET                                 ; 004fc567

