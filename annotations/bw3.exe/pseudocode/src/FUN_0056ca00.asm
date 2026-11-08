; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056ca00(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00433220
;   FUN_0056cbd0
;   FUN_005833e0
;   FUN_00583940
;   FUN_00583b10
;   FUN_00584450
;   FUN_005854a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ca00
        ;   Label: FUN_0056ca00
    SUB ESP,0x1e0                       ; 0056ca01
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 0056ca07
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0056ca0e
    CMP EAX,dword ptr [EBX + 0xcde4]    ; 0056ca15
    JZ 0x0056ca27                       ; 0056ca1b
        ;   XREF to: 0056ca27 (CONDITIONAL_JUMP)  ; LAB_0056ca27
    XOR EAX,EAX                         ; 0056ca1d
    ADD ESP,0x1e0                       ; 0056ca1f
    POP EBX                             ; 0056ca25
    RET                                 ; 0056ca26
    PUSH EDI                            ; 0056ca27
        ;   Label: LAB_0056ca27
    PUSH ESI                            ; 0056ca28
    LEA EAX,[EBX + 0xd090]              ; 0056ca29
    PUSH dword ptr [EBX + 0xd05c]       ; 0056ca2f
    PUSH EAX                            ; 0056ca35
    LEA EAX,[EBX + 0xd060]              ; 0056ca36
    PUSH EAX                            ; 0056ca3c
    LEA ESI,[ESP + 0x134]               ; 0056ca3d
    CALL FUN_005854a0                   ; 0056ca44
        ;   XREF to: 005854a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005854a0()
    ADD ESP,0xc                         ; 0056ca49
    LEA EAX,[EBX + 0x30]                ; 0056ca4c
    LEA EDI,[ESP + 0x68]                ; 0056ca4f
    PUSH EAX                            ; 0056ca53
    LEA EAX,[EBX + 0x20]                ; 0056ca54
    MOV ECX,0xc                         ; 0056ca57
    PUSH EAX                            ; 0056ca5c
    LEA EAX,[ESP + 0xa0]                ; 0056ca5d
    LEA ESI,[ESP + 0x130]               ; 0056ca64
    PUSH EAX                            ; 0056ca6b
    MOVSD.REP ES:EDI,ESI                ; 0056ca6c
    CALL FUN_00583940                   ; 0056ca6e
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined FUN_00583940()
    ADD ESP,0xc                         ; 0056ca73
    LEA EAX,[ESP + 0x98]                ; 0056ca76
    PUSH EAX                            ; 0056ca7d
    PUSH EBX                            ; 0056ca7e
    LEA ESI,[ESP + 0x40]                ; 0056ca7f
    LEA EDI,[ESP + 0x100]               ; 0056ca83
    CALL FUN_0056cbd0                   ; 0056ca8a
        ;   XREF to: 0056cbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056cbd0()
    MOV ECX,0xc                         ; 0056ca8f
    ADD ESP,0x4                         ; 0056ca94
    LEA EAX,[ESP + 0xfc]                ; 0056ca97
    LEA ESI,[ESP + 0x3c]                ; 0056ca9e
    PUSH EAX                            ; 0056caa2
    LEA EAX,[ESP + 0x70]                ; 0056caa3
    MOVSD.REP ES:EDI,ESI                ; 0056caa7
    PUSH EAX                            ; 0056caa9
    LEA ESI,[ESP + 0x194]               ; 0056caaa
    LEA EDI,[ESP + 0x14]                ; 0056cab1
    CALL FUN_005833e0                   ; 0056cab5
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 0056caba
    LEA ESI,[ESP + 0x194]               ; 0056cabf
    ADD ESP,0x8                         ; 0056cac6
    LEA EAX,[ESP + 0xc]                 ; 0056cac9
    MOVSD.REP ES:EDI,ESI                ; 0056cacd
    PUSH EAX                            ; 0056cacf
    LEA ESI,[ESP + 0x160]               ; 0056cad0
    LEA EDI,[ESP + 0xd0]                ; 0056cad7
    CALL FUN_005833e0                   ; 0056cade
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 0056cae3
    LEA ESI,[ESP + 0x160]               ; 0056cae8
    ADD ESP,0x8                         ; 0056caef
    LEA EAX,[ESP + 0xc8]                ; 0056caf2
    MOVSD.REP ES:EDI,ESI                ; 0056caf9
    PUSH EAX                            ; 0056cafb
    LEA ESI,[ESP + 0x1e0]               ; 0056cafc
    LEA EDI,[ESP + 0x1c8]               ; 0056cb03
    CALL FUN_00584450                   ; 0056cb0a
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined FUN_00584450()
    LEA ESI,[ESP + 0x1e0]               ; 0056cb0f
    ADD ESP,0x4                         ; 0056cb16
    MOVSD ES:EDI,ESI                    ; 0056cb19
    MOVSD ES:EDI,ESI                    ; 0056cb1a
    MOVSD ES:EDI,ESI                    ; 0056cb1b
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0056cb1c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0056cb22
    MOV dword ptr [EDX + 0x20],EAX      ; 0056cb29
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0056cb2c
    MOV dword ptr [EDX + 0x24],EAX      ; 0056cb33
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0056cb36
    MOV dword ptr [EDX + 0x28],EAX      ; 0056cb3d
    LEA EAX,[ESP + 0xc8]                ; 0056cb40
    PUSH EAX                            ; 0056cb47
    LEA ESI,[ESP + 0x1d4]               ; 0056cb48
    LEA EDI,[ESP + 0x1bc]               ; 0056cb4f
    CALL FUN_00583b10                   ; 0056cb56
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    LEA ESI,[ESP + 0x1d4]               ; 0056cb5b
    ADD ESP,0x4                         ; 0056cb62
    LEA EAX,[ESP + 0x1b8]               ; 0056cb65
    MOVSD ES:EDI,ESI                    ; 0056cb6c
    MOVSD ES:EDI,ESI                    ; 0056cb6d
    MOVSD ES:EDI,ESI                    ; 0056cb6e
    PUSH EAX                            ; 0056cb6f
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0056cb70
    PUSH ECX                            ; 0056cb76
    CALL FUN_00433220                   ; 0056cb77
        ;   XREF to: 00433220 (UNCONDITIONAL_CALL)  ; undefined FUN_00433220()
    MOV EAX,0x1                         ; 0056cb7c
    ADD ESP,0x8                         ; 0056cb81
    POP ESI                             ; 0056cb84
    POP EDI                             ; 0056cb85
    ADD ESP,0x1e0                       ; 0056cb86
    POP EBX                             ; 0056cb8c
    RET                                 ; 0056cb8d

