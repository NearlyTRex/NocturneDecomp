; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516de0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00516e60
;   FUN_005b7790
;   FUN_005b89c0
;   FUN_005b910c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516de0
        ;   Label: FUN_00516de0
    PUSH EBP                            ; 00516de1
    SUB ESP,0x64                        ; 00516de2
    PUSH 0x5e1c4b                       ; 00516de5
    MOV EDX,dword ptr [ESP + 0x78]      ; 00516dea
    PUSH EDX                            ; 00516dee
    CALL FUN_005b910c                   ; 00516def
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined FUN_005b910c()
    ADD ESP,0x8                         ; 00516df4
    MOV EBX,EAX                         ; 00516df7
    TEST EAX,EAX                        ; 00516df9
    JZ 0x00516e1a                       ; 00516dfb
        ;   XREF to: 00516e1a (CONDITIONAL_JUMP)  ; LAB_00516e1a
    PUSH EBX                            ; 00516dfd
        ;   Label: LAB_00516dfd
    MOV EBP,dword ptr [ESP + 0x74]      ; 00516dfe
    PUSH EBP                            ; 00516e02
    CALL FUN_00516e60                   ; 00516e03
        ;   XREF to: 00516e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00516e60()
    ADD ESP,0x8                         ; 00516e08
    PUSH EBX                            ; 00516e0b
    CALL FUN_005b89c0                   ; 00516e0c
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 00516e11
    ADD ESP,0x64                        ; 00516e14
    POP EBP                             ; 00516e17
    POP EBX                             ; 00516e18
    RET                                 ; 00516e19
    PUSH EDI                            ; 00516e1a
        ;   Label: LAB_00516e1a
    PUSH ESI                            ; 00516e1b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00516e1c
    PUSH ECX                            ; 00516e20
    PUSH 0x5e1c4e                       ; 00516e21
    LEA EAX,[ESP + 0x10]                ; 00516e26
    PUSH EAX                            ; 00516e2a
    MOV ESI,0x5e1c6b                    ; 00516e2b
    CALL FUN_005b7790                   ; 00516e30
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00516e35
    LEA EAX,[ESP + 0x8]                 ; 00516e38
    MOV EDI,0x472                       ; 00516e3c
    PUSH EAX                            ; 00516e41
    MOV dword ptr [0x01d046a0],ESI      ; 00516e42 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00516e48 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00516e4e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00516e53
    POP ESI                             ; 00516e56
    POP EDI                             ; 00516e57
    JMP 0x00516dfd                      ; 00516e58
        ;   XREF to: 00516dfd (UNCONDITIONAL_JUMP)  ; LAB_00516dfd

