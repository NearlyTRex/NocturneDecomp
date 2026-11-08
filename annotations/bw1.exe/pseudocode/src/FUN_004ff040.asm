; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ff040(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;   FUN_004aacc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff040
        ;   Label: FUN_004ff040
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ff041
    PUSH EBX                            ; 004ff045
    CALL FUN_004085c0                   ; 004ff046
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 004ff04b
    ADD EAX,0x158                       ; 004ff04e
    PUSH EAX                            ; 004ff053
    CALL FUN_00468860                   ; 004ff054
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004ff059
    LEA EBX,[EAX + 0x2c8]               ; 004ff05c
    PUSH EBX                            ; 004ff062
    CALL FUN_004aacc0                   ; 004ff063
        ;   XREF to: 004aacc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aacc0()
    ADD ESP,0x4                         ; 004ff068
    SUB EBX,0x420                       ; 004ff06b
    PUSH 0x5e6d11                       ; 004ff071
    LEA EAX,[EBX + 0x158]               ; 004ff076
    PUSH EAX                            ; 004ff07c
    MOV dword ptr [EBX + 0x154],0x602ef4 ; 004ff07d
    CALL FUN_00468950                   ; 004ff087
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004ff08c
    MOV byte ptr [EBX + 0x2e0],0x0      ; 004ff096
    MOV byte ptr [EBX + 0x344],0x0      ; 004ff09d
    MOV byte ptr [EBX + 0x3a8],0x0      ; 004ff0a4
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004ff0ab
    MOV dword ptr [EBX + 0x40c],0x1     ; 004ff0b5
    MOV dword ptr [EBX + 0x410],0x0     ; 004ff0bf
    MOV dword ptr [EBX + 0x414],0x17    ; 004ff0c9
    MOV dword ptr [EBX + 0x418],0x0     ; 004ff0d3
    MOV dword ptr [EBX + 0x41c],0x0     ; 004ff0dd
    ADD ESP,0x8                         ; 004ff0e7
    MOV dword ptr [EBX + 0x80c],0x2     ; 004ff0ea
    MOV EAX,EBX                         ; 004ff0f4
    MOV dword ptr [EBX + 0x810],0x1     ; 004ff0f6
    POP EBX                             ; 004ff100
    RET                                 ; 004ff101

