; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00599a10(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00433d50
;   FUN_00599be0
;   FUN_005b5200
;   FUN_005b5760
;   FUN_005b5930
;   FUN_005b6270
;   FUN_005b72c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599a10
        ;   Label: FUN_00599a10
    SUB ESP,0x1e0                       ; 00599a11
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00599a17
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00599a1e
    CMP EAX,dword ptr [EBX + 0xc1e8]    ; 00599a25
    JZ 0x00599a37                       ; 00599a2b
        ;   XREF to: 00599a37 (CONDITIONAL_JUMP)  ; LAB_00599a37
    XOR EAX,EAX                         ; 00599a2d
    ADD ESP,0x1e0                       ; 00599a2f
    POP EBX                             ; 00599a35
    RET                                 ; 00599a36
    PUSH EDI                            ; 00599a37
        ;   Label: LAB_00599a37
    PUSH ESI                            ; 00599a38
    LEA EAX,[EBX + 0xc2a4]              ; 00599a39
    PUSH dword ptr [EBX + 0xc270]       ; 00599a3f
    PUSH EAX                            ; 00599a45
    LEA EAX,[EBX + 0xc274]              ; 00599a46
    PUSH EAX                            ; 00599a4c
    LEA ESI,[ESP + 0x134]               ; 00599a4d
    CALL FUN_005b72c0                   ; 00599a54
        ;   XREF to: 005b72c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b72c0()
    ADD ESP,0xc                         ; 00599a59
    LEA EAX,[EBX + 0x30]                ; 00599a5c
    LEA EDI,[ESP + 0x68]                ; 00599a5f
    PUSH EAX                            ; 00599a63
    LEA EAX,[EBX + 0x20]                ; 00599a64
    MOV ECX,0xc                         ; 00599a67
    PUSH EAX                            ; 00599a6c
    LEA EAX,[ESP + 0xa0]                ; 00599a6d
    LEA ESI,[ESP + 0x130]               ; 00599a74
    PUSH EAX                            ; 00599a7b
    MOVSD.REP ES:EDI,ESI                ; 00599a7c
    CALL FUN_005b5760                   ; 00599a7e
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    ADD ESP,0xc                         ; 00599a83
    LEA EAX,[ESP + 0x98]                ; 00599a86
    PUSH EAX                            ; 00599a8d
    PUSH EBX                            ; 00599a8e
    LEA ESI,[ESP + 0x40]                ; 00599a8f
    LEA EDI,[ESP + 0x100]               ; 00599a93
    CALL FUN_00599be0                   ; 00599a9a
        ;   XREF to: 00599be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00599be0()
    MOV ECX,0xc                         ; 00599a9f
    ADD ESP,0x4                         ; 00599aa4
    LEA EAX,[ESP + 0xfc]                ; 00599aa7
    LEA ESI,[ESP + 0x3c]                ; 00599aae
    PUSH EAX                            ; 00599ab2
    LEA EAX,[ESP + 0x70]                ; 00599ab3
    MOVSD.REP ES:EDI,ESI                ; 00599ab7
    PUSH EAX                            ; 00599ab9
    LEA ESI,[ESP + 0x194]               ; 00599aba
    LEA EDI,[ESP + 0x14]                ; 00599ac1
    CALL FUN_005b5200                   ; 00599ac5
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 00599aca
    LEA ESI,[ESP + 0x194]               ; 00599acf
    ADD ESP,0x8                         ; 00599ad6
    LEA EAX,[ESP + 0xc]                 ; 00599ad9
    MOVSD.REP ES:EDI,ESI                ; 00599add
    PUSH EAX                            ; 00599adf
    LEA ESI,[ESP + 0x160]               ; 00599ae0
    LEA EDI,[ESP + 0xd0]                ; 00599ae7
    CALL FUN_005b5200                   ; 00599aee
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 00599af3
    LEA ESI,[ESP + 0x160]               ; 00599af8
    ADD ESP,0x8                         ; 00599aff
    LEA EAX,[ESP + 0xc8]                ; 00599b02
    MOVSD.REP ES:EDI,ESI                ; 00599b09
    PUSH EAX                            ; 00599b0b
    LEA ESI,[ESP + 0x1e0]               ; 00599b0c
    LEA EDI,[ESP + 0x1c8]               ; 00599b13
    CALL FUN_005b6270                   ; 00599b1a
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6270()
    LEA ESI,[ESP + 0x1e0]               ; 00599b1f
    ADD ESP,0x4                         ; 00599b26
    MOVSD ES:EDI,ESI                    ; 00599b29
    MOVSD ES:EDI,ESI                    ; 00599b2a
    MOVSD ES:EDI,ESI                    ; 00599b2b
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00599b2c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00599b32
    MOV dword ptr [EDX + 0x20],EAX      ; 00599b39
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00599b3c
    MOV dword ptr [EDX + 0x24],EAX      ; 00599b43
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00599b46
    MOV dword ptr [EDX + 0x28],EAX      ; 00599b4d
    LEA EAX,[ESP + 0xc8]                ; 00599b50
    PUSH EAX                            ; 00599b57
    LEA ESI,[ESP + 0x1d4]               ; 00599b58
    LEA EDI,[ESP + 0x1bc]               ; 00599b5f
    CALL FUN_005b5930                   ; 00599b66
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    LEA ESI,[ESP + 0x1d4]               ; 00599b6b
    ADD ESP,0x4                         ; 00599b72
    LEA EAX,[ESP + 0x1b8]               ; 00599b75
    MOVSD ES:EDI,ESI                    ; 00599b7c
    MOVSD ES:EDI,ESI                    ; 00599b7d
    MOVSD ES:EDI,ESI                    ; 00599b7e
    PUSH EAX                            ; 00599b7f
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00599b80
    PUSH ECX                            ; 00599b86
    CALL FUN_00433d50                   ; 00599b87
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00433d50()
    MOV EAX,0x1                         ; 00599b8c
    ADD ESP,0x8                         ; 00599b91
    POP ESI                             ; 00599b94
    POP EDI                             ; 00599b95
    ADD ESP,0x1e0                       ; 00599b96
    POP EBX                             ; 00599b9c
    RET                                 ; 00599b9d

