; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ea330(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea330
        ;   Label: FUN_004ea330
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea331
    PUSH EBX                            ; 004ea335
    CALL FUN_004085c0                   ; 004ea336
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004ea33b
    ADD EAX,0x158                       ; 004ea33e
    PUSH EAX                            ; 004ea343
    CALL FUN_00468860                   ; 004ea344
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004ea349
    LEA EBX,[EAX + 0xfffffea8]          ; 004ea34c
    PUSH 0x5e45b1                       ; 004ea352
    LEA EAX,[EBX + 0x158]               ; 004ea357
    PUSH EAX                            ; 004ea35d
    MOV dword ptr [EBX + 0x154],0x601c14 ; 004ea35e
    CALL FUN_00468950                   ; 004ea368
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004ea36d
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004ea370
    MOV EAX,EBX                         ; 004ea37a
    MOV dword ptr [EBX + 0x2d8],0x42480000 ; 004ea37c
    POP EBX                             ; 004ea386
    RET                                 ; 004ea387

