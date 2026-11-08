; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00440a70(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005b92c5
;
; Called Functions:
;   FUN_00573920
;   FUN_00573a40
;   FUN_00573d60
;   FUN_005747e0
;   FUN_00574850
;   FUN_00574980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440a70
        ;   Label: FUN_00440a70
    SUB ESP,0x34                        ; 00440a71
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00440a74
    PUSH 0x1                            ; 00440a78
    MOV EDX,dword ptr [ESP + 0x44]      ; 00440a7a
    PUSH EDX                            ; 00440a7e
    LEA EAX,[ESP + 0x8]                 ; 00440a7f
    PUSH EAX                            ; 00440a83
    CALL FUN_00573920                   ; 00440a84
        ;   XREF to: 00573920 (UNCONDITIONAL_CALL)  ; undefined FUN_00573920()
    ADD ESP,0xc                         ; 00440a89
    MOV EAX,ESP                         ; 00440a8c
    PUSH EAX                            ; 00440a8e
    CALL FUN_00573d60                   ; 00440a8f
        ;   XREF to: 00573d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00573d60()
    ADD ESP,0x4                         ; 00440a94
    TEST EAX,EAX                        ; 00440a97
    JZ 0x00440b24                       ; 00440a99
        ;   XREF to: 00440b24 (CONDITIONAL_JUMP)  ; LAB_00440b24
    PUSH 0x5b92c5                       ; 00440a9f | DAT_005b92c5
    MOV ECX,dword ptr [ESP + 0x48]      ; 00440aa4
    PUSH ECX                            ; 00440aa8
    LEA EAX,[ESP + 0x34]                ; 00440aa9
    PUSH EAX                            ; 00440aad
    CALL FUN_005747e0                   ; 00440aae
        ;   XREF to: 005747e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005747e0()
    ADD ESP,0xc                         ; 00440ab3
    LEA EAX,[ESP + 0x2c]                ; 00440ab6
    PUSH EAX                            ; 00440aba
    CALL FUN_00574980                   ; 00440abb
        ;   XREF to: 00574980 (UNCONDITIONAL_CALL)  ; undefined FUN_00574980()
    ADD ESP,0x4                         ; 00440ac0
    TEST EAX,EAX                        ; 00440ac3
    JZ 0x00440b2e                       ; 00440ac5
        ;   XREF to: 00440b2e (CONDITIONAL_JUMP)  ; LAB_00440b2e
    PUSH EBX                            ; 00440ac7
    MOV EAX,dword ptr [EBX]             ; 00440ac8
    CALL dword ptr [EAX + 0x4]          ; 00440aca
    ADD ESP,0x4                         ; 00440acd
    LEA EDX,[ESP + 0x2c]                ; 00440ad0
    PUSH EDX                            ; 00440ad4
    LEA EDX,[ESP + 0x4]                 ; 00440ad5
    PUSH EDX                            ; 00440ad9
    MOV EAX,dword ptr [EBX]             ; 00440ada
    PUSH EBX                            ; 00440adc
    CALL dword ptr [EAX + 0x8]          ; 00440add
    ADD ESP,0xc                         ; 00440ae0
    CMP EAX,0x1                         ; 00440ae3
    JNZ 0x00440afb                      ; 00440ae6
        ;   XREF to: 00440afb (CONDITIONAL_JUMP)  ; LAB_00440afb
    LEA EDX,[ESP + 0x2c]                ; 00440ae8
    PUSH EDX                            ; 00440aec
    MOV EAX,dword ptr [EBX]             ; 00440aed
    PUSH EBX                            ; 00440aef
    CALL dword ptr [EAX + 0xc]          ; 00440af0
    ADD ESP,0x8                         ; 00440af3
    CMP EAX,0x1                         ; 00440af6
    JZ 0x00440afd                       ; 00440af9
        ;   XREF to: 00440afd (CONDITIONAL_JUMP)  ; LAB_00440afd
    XOR EAX,EAX                         ; 00440afb
        ;   Label: LAB_00440afb
    PUSH 0x0                            ; 00440afd
        ;   Label: LAB_00440afd
    MOV EBX,EAX                         ; 00440aff
    LEA EAX,[ESP + 0x30]                ; 00440b01
    PUSH EAX                            ; 00440b05
    CALL FUN_00574850                   ; 00440b06
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; undefined FUN_00574850()
    ADD ESP,0x8                         ; 00440b0b
    PUSH 0x0                            ; 00440b0e
    LEA EAX,[ESP + 0x4]                 ; 00440b10
    PUSH EAX                            ; 00440b14
    CALL FUN_00573a40                   ; 00440b15
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a40()
        ;   Label: LAB_00440b15
    ADD ESP,0x8                         ; 00440b1a
    MOV EAX,EBX                         ; 00440b1d
    ADD ESP,0x34                        ; 00440b1f
    POP EBX                             ; 00440b22
    RET                                 ; 00440b23
    PUSH EAX                            ; 00440b24
        ;   Label: LAB_00440b24
    LEA EAX,[ESP + 0x4]                 ; 00440b25
    PUSH EAX                            ; 00440b29
    XOR EBX,EBX                         ; 00440b2a
    JMP 0x00440b15                      ; 00440b2c
        ;   XREF to: 00440b15 (UNCONDITIONAL_JUMP)  ; LAB_00440b15
    PUSH EAX                            ; 00440b2e
        ;   Label: LAB_00440b2e
    LEA EAX,[ESP + 0x30]                ; 00440b2f
    PUSH EAX                            ; 00440b33
    CALL FUN_00574850                   ; 00440b34
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; undefined FUN_00574850()
    ADD ESP,0x8                         ; 00440b39
    XOR EBX,EBX                         ; 00440b3c
    PUSH EBX                            ; 00440b3e
    LEA EAX,[ESP + 0x4]                 ; 00440b3f
    PUSH EAX                            ; 00440b43
    CALL FUN_00573a40                   ; 00440b44
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a40()
    ADD ESP,0x8                         ; 00440b49
    MOV EAX,EBX                         ; 00440b4c
    ADD ESP,0x34                        ; 00440b4e
    POP EBX                             ; 00440b51
    RET                                 ; 00440b52

