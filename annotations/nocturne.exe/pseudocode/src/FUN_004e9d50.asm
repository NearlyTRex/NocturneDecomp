; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e9d50(int param_1)
;
;
; XREF[1]:
;   FUN_004e9a90 at 004e9af0
;
; Referenced Globals:
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;
; Called Functions:
;   FUN_0046fcd0
;   FUN_0046fff0
;   FUN_004ea6e0
;   FUN_00548f30
;   FUN_00548f70
;   FUN_00549110
;   FUN_005491e0
;   FUN_00549240
;   FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9d50
        ;   Label: FUN_004e9d50
    PUSH ESI                            ; 004e9d51
    PUSH EBP                            ; 004e9d52
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e9d53
    PUSH 0x58bbd2                       ; 004e9d57
    MOV EDX,dword ptr [0x005b6d50]      ; 004e9d5c | DAT_005b6d50
    PUSH EDX                            ; 004e9d62
    CALL FUN_0046fff0                   ; 004e9d63
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fff0()
    ADD ESP,0x8                         ; 004e9d68
    LEA EBX,[ESI + 0x170]               ; 004e9d6b
    PUSH EBX                            ; 004e9d71
    CALL FUN_00549110                   ; 004e9d72
        ;   XREF to: 00549110 (UNCONDITIONAL_CALL)  ; undefined FUN_00549110()
    ADD ESP,0x4                         ; 004e9d77
    PUSH EBX                            ; 004e9d7a
    CALL FUN_00548f30                   ; 004e9d7b
        ;   XREF to: 00548f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00548f30()
    ADD ESP,0x4                         ; 004e9d80
    TEST EAX,EAX                        ; 004e9d83
    JZ 0x004e9e21                       ; 004e9d85
        ;   XREF to: 004e9e21 (CONDITIONAL_JUMP)  ; LAB_004e9e21
    PUSH 0x0                            ; 004e9d8b
    PUSH EBX                            ; 004e9d8d
    CALL FUN_00549240                   ; 004e9d8e
        ;   XREF to: 00549240 (UNCONDITIONAL_CALL)  ; undefined FUN_00549240()
    ADD ESP,0x8                         ; 004e9d93
    TEST EAX,EAX                        ; 004e9d96
    JZ 0x004e9e3b                       ; 004e9d98
        ;   XREF to: 004e9e3b (CONDITIONAL_JUMP)  ; LAB_004e9e3b
    PUSH 0x1ddf                         ; 004e9d9e
    PUSH EBX                            ; 004e9da3
    CALL FUN_00548f70                   ; 004e9da4
        ;   XREF to: 00548f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00548f70()
    ADD ESP,0x8                         ; 004e9da9
    TEST EAX,EAX                        ; 004e9dac
    JZ 0x004e9e55                       ; 004e9dae
        ;   XREF to: 004e9e55 (CONDITIONAL_JUMP)  ; LAB_004e9e55
    MOV EAX,dword ptr [ESI + 0x114]     ; 004e9db4
    SHL EAX,0x3                         ; 004e9dba
    MOV EDX,EAX                         ; 004e9dbd
    SHL EAX,0x4                         ; 004e9dbf
    SUB EAX,EDX                         ; 004e9dc2
    LEA EDX,[ESI + 0x20]                ; 004e9dc4
    ADD EAX,EDX                         ; 004e9dc7
    ADD EAX,0x1c                        ; 004e9dc9
    PUSH EAX                            ; 004e9dcc
    PUSH EBX                            ; 004e9dcd
    CALL FUN_005491e0                   ; 004e9dce
        ;   XREF to: 005491e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005491e0()
    ADD ESP,0x8                         ; 004e9dd3
    TEST EAX,EAX                        ; 004e9dd6
    JZ 0x004e9e6f                       ; 004e9dd8
        ;   XREF to: 004e9e6f (CONDITIONAL_JUMP)  ; LAB_004e9e6f
    PUSH ESI                            ; 004e9dde
    MOV EBP,0x1                         ; 004e9ddf
    CALL FUN_004ea6e0                   ; 004e9de4
        ;   XREF to: 004ea6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea6e0()
    ADD ESP,0x4                         ; 004e9de9
    MOV dword ptr [0x01cea3f8],EBP      ; 004e9dec | DAT_01cea3f8
    CALL FUN_00558a30                   ; 004e9df2
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00558a30()
    MOV EDX,EAX                         ; 004e9df7
    MOV EBX,0x12                        ; 004e9df9
    SAR EDX,0x1f                        ; 004e9dfe
    IDIV EBX                            ; 004e9e01
    PUSH 0x58bc6a                       ; 004e9e03
    MOV [0x01cea3f4],EAX                ; 004e9e08 | DAT_01cea3f4
    MOV EAX,[0x005b6d50]                ; 004e9e0d | DAT_005b6d50
    PUSH EAX                            ; 004e9e12
    CALL FUN_0046fff0                   ; 004e9e13
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fff0()
    ADD ESP,0x8                         ; 004e9e18
    MOV EAX,EBP                         ; 004e9e1b
    POP EBP                             ; 004e9e1d
    POP ESI                             ; 004e9e1e
    POP EBX                             ; 004e9e1f
    RET                                 ; 004e9e20
    PUSH 0x58bbea                       ; 004e9e21
        ;   Label: LAB_004e9e21
    MOV ECX,dword ptr [0x005b6d50]      ; 004e9e26 | DAT_005b6d50
    PUSH ECX                            ; 004e9e2c
    CALL FUN_0046fcd0                   ; 004e9e2d
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004e9e32
    XOR EAX,EAX                         ; 004e9e35
    POP EBP                             ; 004e9e37
    POP ESI                             ; 004e9e38
    POP EBX                             ; 004e9e39
    RET                                 ; 004e9e3a
    PUSH 0x58bc07                       ; 004e9e3b
        ;   Label: LAB_004e9e3b
    MOV EBX,dword ptr [0x005b6d50]      ; 004e9e40 | DAT_005b6d50
    PUSH EBX                            ; 004e9e46
    CALL FUN_0046fcd0                   ; 004e9e47
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004e9e4c
    XOR EAX,EAX                         ; 004e9e4f
    POP EBP                             ; 004e9e51
    POP ESI                             ; 004e9e52
    POP EBX                             ; 004e9e53
    RET                                 ; 004e9e54
    PUSH 0x58bc2f                       ; 004e9e55
        ;   Label: LAB_004e9e55
    MOV ESI,dword ptr [0x005b6d50]      ; 004e9e5a | DAT_005b6d50
    PUSH ESI                            ; 004e9e60
    CALL FUN_0046fcd0                   ; 004e9e61
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004e9e66
    XOR EAX,EAX                         ; 004e9e69
    POP EBP                             ; 004e9e6b
    POP ESI                             ; 004e9e6c
    POP EBX                             ; 004e9e6d
    RET                                 ; 004e9e6e
    PUSH EDI                            ; 004e9e6f
        ;   Label: LAB_004e9e6f
    PUSH 0x58bc45                       ; 004e9e70
    MOV EDI,dword ptr [0x005b6d50]      ; 004e9e75 | DAT_005b6d50
    PUSH EDI                            ; 004e9e7b
    CALL FUN_0046fcd0                   ; 004e9e7c
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004e9e81
    XOR EAX,EAX                         ; 004e9e84
    POP EDI                             ; 004e9e86
    POP EBP                             ; 004e9e87
    POP ESI                             ; 004e9e88
    POP EBX                             ; 004e9e89
    RET                                 ; 004e9e8a

