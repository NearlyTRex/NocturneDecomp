; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448df0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_cow_wav_005d7316
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_00448b70
;   FUN_004a0f00
;   FUN_00524770
;   FUN_005247c0
;   FUN_0057d9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448df0
        ;   Label: FUN_00448df0
    PUSH ESI                            ; 00448df1
    PUSH EDI                            ; 00448df2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00448df3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00448df7
    PUSH EDI                            ; 00448dfb
    PUSH EBX                            ; 00448dfc
    CALL FUN_00448b70                   ; 00448dfd
        ;   XREF to: 00448b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00448b70()
    FLD float ptr [EDI + 0x4]           ; 00448e02
    ADD ESP,0x8                         ; 00448e05
    FSUBR float ptr [EBX + 0x2538]      ; 00448e08
    LEA ESI,[EBX + 0x158]               ; 00448e0e
    FST float ptr [EBX + 0x2538]        ; 00448e14
    FLDZ                                ; 00448e1a
    FCOMPP                              ; 00448e1c
    FNSTSW AX                           ; 00448e1e
    SAHF                                ; 00448e20
    JNC 0x00448e58                      ; 00448e21
        ;   XREF to: 00448e58 (CONDITIONAL_JUMP)  ; LAB_00448e58
    PUSH 0x1                            ; 00448e23
    PUSH 0x3                            ; 00448e25
    PUSH ESI                            ; 00448e27
        ;   Label: LAB_00448e27
    CALL FUN_005247c0                   ; 00448e28
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00448e2d
    MOV EDX,dword ptr [EBX + 0xc270]    ; 00448e30
        ;   Label: LAB_00448e30
    PUSH EDX                            ; 00448e36
    MOV ECX,dword ptr [0x006236b8]      ; 00448e37 | DAT_006236b8
    PUSH ECX                            ; 00448e3d
    CALL FUN_0057d9c0                   ; 00448e3e
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9c0()
    ADD ESP,0x8                         ; 00448e43
    TEST EAX,EAX                        ; 00448e46
    JZ 0x00448e7e                       ; 00448e48
        ;   XREF to: 00448e7e (CONDITIONAL_JUMP)  ; LAB_00448e7e
    PUSH EDI                            ; 00448e4a
    PUSH EBX                            ; 00448e4b
    CALL FUN_004a0f00                   ; 00448e4c
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 00448e51
    POP EDI                             ; 00448e54
    POP ESI                             ; 00448e55
    POP EBX                             ; 00448e56
    RET                                 ; 00448e57
    PUSH ESI                            ; 00448e58
        ;   Label: LAB_00448e58
    MOV dword ptr [EBX + 0x2538],0x0    ; 00448e59
    CALL FUN_00524770                   ; 00448e63
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00448e68
    ADD ESP,0x4                         ; 00448e6b
    CMP EAX,0x5                         ; 00448e6e
    JZ 0x00448e30                       ; 00448e71
        ;   XREF to: 00448e30 (CONDITIONAL_JUMP)  ; LAB_00448e30
    CMP EAX,0x4                         ; 00448e73
    JZ 0x00448e30                       ; 00448e76
        ;   XREF to: 00448e30 (CONDITIONAL_JUMP)  ; LAB_00448e30
    PUSH 0x1                            ; 00448e78
    PUSH 0x4                            ; 00448e7a
    JMP 0x00448e27                      ; 00448e7c
        ;   XREF to: 00448e27 (UNCONDITIONAL_JUMP)  ; LAB_00448e27
    PUSH 0x5d7316                       ; 00448e7e | = "cow?.wav"
        ;   Label: LAB_00448e7e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00448e83
    PUSH EBX                            ; 00448e89
    CALL dword ptr [EAX + 0x2c]         ; 00448e8a
    ADD ESP,0x8                         ; 00448e8d
    MOV dword ptr [EBX + 0xc270],EAX    ; 00448e90
    PUSH EDI                            ; 00448e96
    PUSH EBX                            ; 00448e97
    CALL FUN_004a0f00                   ; 00448e98
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 00448e9d
    POP EDI                             ; 00448ea0
    POP ESI                             ; 00448ea1
    POP EBX                             ; 00448ea2
    RET                                 ; 00448ea3

