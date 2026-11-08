; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a0b00(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_R_Hand_005da576
;   TerminatedCString s_Bip01_L_Hand_005da583
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_0042f280
;   FUN_004a4130
;   FUN_004a41d0
;   FUN_00509020
;   FUN_00548090
;   FUN_0054c090
;   FUN_0054c110
;   FUN_0054dd10
;   FUN_0054e6b0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0b00
        ;   Label: FUN_005a0b00
    PUSH ESI                            ; 005a0b01
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a0b02
    PUSH EBX                            ; 005a0b06
    CALL FUN_00509020                   ; 005a0b07
        ;   XREF to: 00509020 (UNCONDITIONAL_CALL)  ; undefined FUN_00509020()
    ADD ESP,0x4                         ; 005a0b0c
    LEA EAX,[EBX + 0x158]               ; 005a0b0f
    PUSH EAX                            ; 005a0b15
    CALL FUN_0054eac0                   ; 005a0b16
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 005a0b1b
    PUSH 0x1                            ; 005a0b1e
    PUSH 0x5da576                       ; 005a0b20 | = "Bip01 R Hand"
    PUSH EAX                            ; 005a0b25
    MOV ESI,EAX                         ; 005a0b26
    CALL FUN_00548090                   ; 005a0b28
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 005a0b2d
    PUSH 0x1                            ; 005a0b30
    PUSH 0x5da583                       ; 005a0b32 | = "Bip01 L Hand"
    PUSH ESI                            ; 005a0b37
    MOV dword ptr [EBX + 0x33fb8],EAX   ; 005a0b38
    CALL FUN_00548090                   ; 005a0b3e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    MOV dword ptr [EBX + 0x33fac],0x3f400000 ; 005a0b43
    MOV dword ptr [EBX + 0x33fc0],0x0   ; 005a0b4d
    MOV dword ptr [EBX + 0x33fbc],EAX   ; 005a0b57
    ADD ESP,0xc                         ; 005a0b5d
    MOV EAX,dword ptr [EBX + 0x33fb8]   ; 005a0b60
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 005a0b66
    MOV dword ptr [EBX + 0x25a8],EAX    ; 005a0b6c
    TEST EDX,EDX                        ; 005a0b72
    JZ 0x005a0b80                       ; 005a0b74
        ;   XREF to: 005a0b80 (CONDITIONAL_JUMP)  ; LAB_005a0b80
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a0b76
    PUSH 0x3                            ; 005a0b80
        ;   Label: LAB_005a0b80
    MOV ECX,dword ptr [0x005fc5a0]      ; 005a0b82 | DAT_005fc5a0
    PUSH ECX                            ; 005a0b88
    CALL FUN_004a4130                   ; 005a0b89
        ;   XREF to: 004a4130 (UNCONDITIONAL_CALL)  ; undefined FUN_004a4130()
    ADD ESP,0x8                         ; 005a0b8e
    PUSH 0x4                            ; 005a0b91
    MOV ESI,dword ptr [0x005fc5a0]      ; 005a0b93 | DAT_005fc5a0
    PUSH ESI                            ; 005a0b99
    CALL FUN_004a41d0                   ; 005a0b9a
        ;   XREF to: 004a41d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a41d0()
    ADD ESP,0x8                         ; 005a0b9f
    PUSH 0x1                            ; 005a0ba2
    CALL FUN_0042f280                   ; 005a0ba4
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f280()
    ADD ESP,0x4                         ; 005a0ba9
    ADD EBX,0x158                       ; 005a0bac
    PUSH EBX                            ; 005a0bb2
    CALL FUN_0054c090                   ; 005a0bb3
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c090()
    ADD ESP,0x4                         ; 005a0bb8
    PUSH EBX                            ; 005a0bbb
    CALL FUN_0054dd10                   ; 005a0bbc
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dd10()
    ADD ESP,0x4                         ; 005a0bc1
    PUSH EBX                            ; 005a0bc4
    CALL FUN_0054e6b0                   ; 005a0bc5
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 005a0bca
    PUSH EBX                            ; 005a0bcd
    CALL FUN_0054c110                   ; 005a0bce
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c110()
    ADD ESP,0x4                         ; 005a0bd3
    POP ESI                             ; 005a0bd6
    POP EBX                             ; 005a0bd7
    RET                                 ; 005a0bd8

