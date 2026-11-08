; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415cd0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_going_into_background_005cbe08
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_007c158c
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fc0e50
;
; Called Functions:
;   FUN_004089d0
;   FUN_004159e0
;   FUN_0041a840
;   FUN_00436710
;   FUN_0046b960
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415cd0
        ;   Label: FUN_00415cd0
    PUSH EBP                            ; 00415cd1
    SUB ESP,0x30                        ; 00415cd2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00415cd5
    CMP dword ptr [EBX + 0x2b4],0x0     ; 00415cd9
    JNZ 0x00415d0c                      ; 00415ce0
        ;   XREF to: 00415d0c (CONDITIONAL_JUMP)  ; LAB_00415d0c
    CMP dword ptr [ESP + 0x40],0x0      ; 00415ce2
    JZ 0x00415cff                       ; 00415ce7
        ;   XREF to: 00415cff (CONDITIONAL_JUMP)  ; LAB_00415cff
    CMP dword ptr [EBX + 0x133c],0x0    ; 00415ce9
    JNZ 0x00415cff                      ; 00415cf0
        ;   XREF to: 00415cff (CONDITIONAL_JUMP)  ; LAB_00415cff
    CMP dword ptr [EBX + 0x1334],0x0    ; 00415cf2
    JZ 0x00415dbc                       ; 00415cf9
        ;   XREF to: 00415dbc (CONDITIONAL_JUMP)  ; LAB_00415dbc
    CMP dword ptr [EBX + 0x2b4],0x0     ; 00415cff
        ;   Label: LAB_00415cff
    JZ 0x00415db6                       ; 00415d06
        ;   XREF to: 00415db6 (CONDITIONAL_JUMP)  ; LAB_00415db6
    CMP dword ptr [EBX + 0x2b4],0x1     ; 00415d0c
        ;   Label: LAB_00415d0c
    JNZ 0x00415d22                      ; 00415d13
        ;   XREF to: 00415d22 (CONDITIONAL_JUMP)  ; LAB_00415d22
    CMP dword ptr [EBX + 0x1334],0x0    ; 00415d15
    JNZ 0x00415db6                      ; 00415d1c
        ;   XREF to: 00415db6 (CONDITIONAL_JUMP)  ; LAB_00415db6
    PUSH EDI                            ; 00415d22
        ;   Label: LAB_00415d22
    PUSH ESI                            ; 00415d23
    PUSH EBX                            ; 00415d24
    MOV dword ptr [EBX + 0x2b4],0x2     ; 00415d25
    CALL FUN_004089d0                   ; 00415d2f
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 00415d34
    MOV EAX,[0x0061b5a8]                ; 00415d37 | DAT_0061b5a8
    MOV ESI,dword ptr [EBX + 0x10c4]    ; 00415d3c
    PUSH 0x0                            ; 00415d42
    MOV dword ptr [EAX + 0x15ac98],ESI  ; 00415d44 | DAT_01fc0e50
    PUSH EBX                            ; 00415d4a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00415d4b
    LEA ESI,[ESP + 0x28]                ; 00415d51
    LEA EDI,[ESP + 0x10]                ; 00415d55
    CALL dword ptr [EAX + 0x24]         ; 00415d59
    MOV ECX,0x6                         ; 00415d5c
    ADD ESP,0x4                         ; 00415d61
    LEA EAX,[ESP + 0xc]                 ; 00415d64
    LEA ESI,[ESP + 0x24]                ; 00415d68
    PUSH EAX                            ; 00415d6c
    MOVSD.REP ES:EDI,ESI                ; 00415d6d
    CALL FUN_0041a840                   ; 00415d6f
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 00415d74
    MOV ESI,EAX                         ; 00415d77
    TEST EAX,EAX                        ; 00415d79
    JZ 0x00415d91                       ; 00415d7b
        ;   XREF to: 00415d91 (CONDITIONAL_JUMP)  ; LAB_00415d91
    CMP dword ptr [EBX + 0x10c8],0x0    ; 00415d7d
    JNZ 0x00415df5                      ; 00415d84
        ;   XREF to: 00415df5 (CONDITIONAL_JUMP)  ; LAB_00415df5
    PUSH -0x1                           ; 00415d86
        ;   Label: LAB_00415d86
    PUSH EBX                            ; 00415d88
    CALL FUN_004159e0                   ; 00415d89
        ;   XREF to: 004159e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004159e0()
    ADD ESP,0x8                         ; 00415d8e
    MOV EAX,[0x0060b280]                ; 00415d91 | DAT_0060b280
        ;   Label: LAB_00415d91
    PUSH EAX                            ; 00415d96 | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 00415d97
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    MOV EAX,[0x0061b5a8]                ; 00415d9c | DAT_0061b5a8 | DAT_01e661b8
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00415da1 | DAT_01fc0e50
    ADD ESP,0x4                         ; 00415dab
    MOV dword ptr [EBX + 0x1340],ESI    ; 00415dae
    POP ESI                             ; 00415db4
    POP EDI                             ; 00415db5
    ADD ESP,0x30                        ; 00415db6
        ;   Label: LAB_00415db6
    POP EBP                             ; 00415db9
    POP EBX                             ; 00415dba
    RET                                 ; 00415dbb
    PUSH EBX                            ; 00415dbc
        ;   Label: LAB_00415dbc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00415dbd
    CALL dword ptr [EAX + 0x7c]         ; 00415dc3
    ADD ESP,0x4                         ; 00415dc6
    TEST EAX,EAX                        ; 00415dc9
    JNZ 0x00415cff                      ; 00415dcb
        ;   XREF to: 00415cff (CONDITIONAL_JUMP)  ; LAB_00415cff
    PUSH EBX                            ; 00415dd1
    PUSH 0x5cbe08                       ; 00415dd2 | = "%s going into background\n"
    MOV EBP,dword ptr [0x00609ed0]      ; 00415dd7 | PTR_DAT_00609ed0
    PUSH EBP                            ; 00415ddd | DAT_007c158c
    MOV dword ptr [EBX + 0x2b4],0x1     ; 00415dde
    CALL FUN_00436710                   ; 00415de8
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 00415ded
    JMP 0x00415cff                      ; 00415df0
        ;   XREF to: 00415cff (UNCONDITIONAL_JUMP)  ; LAB_00415cff
    MOV EBP,dword ptr [0x0060b280]      ; 00415df5 | DAT_0060b280
        ;   Label: LAB_00415df5
    PUSH EBP                            ; 00415dfb | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00415dfc
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00415e01
    TEST EAX,EAX                        ; 00415e04
    JNZ 0x00415d86                      ; 00415e06
        ;   XREF to: 00415d86 (CONDITIONAL_JUMP)  ; LAB_00415d86
    JMP 0x00415d91                      ; 00415e0c
        ;   XREF to: 00415d91 (UNCONDITIONAL_JUMP)  ; LAB_00415d91

