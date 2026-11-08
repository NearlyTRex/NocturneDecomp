; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004889b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_00408b00
;   FUN_0046d540
;   FUN_004a2de0
;   FUN_004a2e20
;   FUN_0053ebe0
;   FUN_0053ec10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004889b0
        ;   Label: FUN_004889b0
    PUSH ESI                            ; 004889b1
    PUSH EDI                            ; 004889b2
    PUSH EBP                            ; 004889b3
    MOV EBP,ESP                         ; 004889b4
    SUB ESP,0x78                        ; 004889b6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004889b9
    MOV EDX,dword ptr [0x005f2afc]      ; 004889bc | DAT_005f2afc
    PUSH EDX                            ; 004889c2 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 004889c3
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 004889c8
    TEST EAX,EAX                        ; 004889cb
    JNZ 0x004889e1                      ; 004889cd
        ;   XREF to: 004889e1 (CONDITIONAL_JUMP)  ; LAB_004889e1
    CMP dword ptr [EBX + 0x158],0x3     ; 004889cf
    JNZ 0x004889e1                      ; 004889d6
        ;   XREF to: 004889e1 (CONDITIONAL_JUMP)  ; LAB_004889e1
    CMP dword ptr [EBX + 0x168],0x0     ; 004889d8
    JNZ 0x004889ea                      ; 004889df
        ;   XREF to: 004889ea (CONDITIONAL_JUMP)  ; LAB_004889ea
    XOR EAX,EAX                         ; 004889e1
        ;   Label: LAB_004889e1
    MOV ESP,EBP                         ; 004889e3
    POP EBP                             ; 004889e5
    POP EDI                             ; 004889e6
    POP ESI                             ; 004889e7
    POP EBX                             ; 004889e8
    RET                                 ; 004889e9
    MOV EDI,dword ptr [0x00603b28]      ; 004889ea | DAT_00603b28
        ;   Label: LAB_004889ea
    PUSH EDI                            ; 004889f0 | DAT_01ed78c8
    CALL FUN_0053ebe0                   ; 004889f1
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebe0()
    ADD ESP,0x4                         ; 004889f6
    PUSH EBX                            ; 004889f9
    MOV EAX,[0x00603b28]                ; 004889fa | DAT_00603b28
    PUSH EAX                            ; 004889ff | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 00488a00
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 00488a05
    LEA EAX,[EBP + -0x78]               ; 00488a08
    PUSH EAX                            ; 00488a0b
    CALL FUN_004a2de0                   ; 00488a0c
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2de0()
    MOV EAX,dword ptr [EBX + 0x238]     ; 00488a11
    LEA ESI,[EBP + -0x78]               ; 00488a17
    MOV dword ptr [EBP + -0x70],EAX     ; 00488a1a
    ADD ESP,0x4                         ; 00488a1d
    MOV EAX,dword ptr [EBX + 0x23c]     ; 00488a20
    XOR ECX,ECX                         ; 00488a26
    MOV dword ptr [EBP + -0x6c],EAX     ; 00488a28
    PUSH ECX                            ; 00488a2b
    MOV EAX,dword ptr [EBX + 0x240]     ; 00488a2c
    MOV EDX,0x3f800000                  ; 00488a32
    MOV dword ptr [EBP + -0x68],EAX     ; 00488a37
    SUB ESP,0x54                        ; 00488a3a
    MOV EAX,dword ptr [EBX + 0x244]     ; 00488a3d
    MOV EDI,ESP                         ; 00488a43
    MOV dword ptr [EBP + -0x64],EAX     ; 00488a45
    MOV dword ptr [EBP + -0x78],EDX     ; 00488a48
    MOV dword ptr [EBP + -0x60],ECX     ; 00488a4b
    MOV dword ptr [EBP + -0x5c],ECX     ; 00488a4e
    MOV ECX,0x15                        ; 00488a51
    MOV EDX,0x42c80000                  ; 00488a56
    LEA EAX,[EBP + -0x18]               ; 00488a5b
    MOVSD.REP ES:EDI,ESI                ; 00488a5e
    PUSH EAX                            ; 00488a60
    LEA ESI,[EBP + -0x24]               ; 00488a61
    MOV dword ptr [EBP + -0x10],EDX     ; 00488a64
    XOR EDI,EDI                         ; 00488a67
    PUSH EBX                            ; 00488a69
    MOV dword ptr [EBP + -0x18],EDI     ; 00488a6a
    MOV dword ptr [EBP + -0x14],EDI     ; 00488a6d
    CALL FUN_00408b00                   ; 00488a70
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    ADD ESP,0x8                         ; 00488a75
    LEA EAX,[EBP + -0xc]                ; 00488a78
    PUSH EAX                            ; 00488a7b
    ADD EBX,0x20                        ; 00488a7c
    LEA EDI,[EBP + -0xc]                ; 00488a7f
    PUSH EBX                            ; 00488a82
    MOV ECX,dword ptr [0x005fc5a0]      ; 00488a83 | DAT_005fc5a0
    LEA ESI,[EBP + -0x24]               ; 00488a89
    PUSH ECX                            ; 00488a8c
    MOVSD ES:EDI,ESI                    ; 00488a8d
    MOVSD ES:EDI,ESI                    ; 00488a8e
    MOVSD ES:EDI,ESI                    ; 00488a8f
    CALL FUN_004a2e20                   ; 00488a90
        ;   XREF to: 004a2e20 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2e20()
    ADD ESP,0x64                        ; 00488a95
    MOV EBX,dword ptr [0x00603b28]      ; 00488a98 | DAT_00603b28
    PUSH EBX                            ; 00488a9e | DAT_01ed78c8
    CALL FUN_0053ebe0                   ; 00488a9f
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebe0()
    MOV EAX,0x1                         ; 00488aa4
    ADD ESP,0x4                         ; 00488aa9
    MOV ESP,EBP                         ; 00488aac
    POP EBP                             ; 00488aae
    POP EDI                             ; 00488aaf
    POP ESI                             ; 00488ab0
    POP EBX                             ; 00488ab1
    RET                                 ; 00488ab2

