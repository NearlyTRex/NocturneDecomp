; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446d20(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00473e10 at 00473f8a
;
; Referenced Globals:
;   undefined4 DAT_01510da8
;   undefined4 DAT_01510dac
;   undefined4 DAT_01510db0
;   undefined4 DAT_01510db4
;   undefined4 DAT_01510db8
;   undefined4 DAT_01510dbc
;   undefined4 DAT_01510dc0
;   undefined4 DAT_01510dc4
;   undefined4 DAT_01510dc8
;
; Called Functions:
;   FUN_00445010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446d20
        ;   Label: FUN_00446d20
    PUSH ESI                            ; 00446d21
    PUSH EDI                            ; 00446d22
    PUSH EBP                            ; 00446d23
    MOV EDI,dword ptr [ESP + 0x14]      ; 00446d24
    MOV EBP,0xffffffff                  ; 00446d28
    MOV EDX,dword ptr [EDI + 0x28]      ; 00446d2d
    XOR EBX,EBX                         ; 00446d30
    TEST EDX,EDX                        ; 00446d32
    JLE 0x00446d5c                      ; 00446d34
        ;   XREF to: 00446d5c (CONDITIONAL_JUMP)  ; LAB_00446d5c
    XOR ESI,ESI                         ; 00446d36
    MOV EAX,dword ptr [ESP + 0x18]      ; 00446d38
        ;   Label: LAB_00446d38
    PUSH EAX                            ; 00446d3c
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00446d3d
    ADD EAX,ESI                         ; 00446d40
    PUSH EAX                            ; 00446d42
    CALL FUN_00445010                   ; 00446d43
        ;   XREF to: 00445010 (UNCONDITIONAL_CALL)  ; undefined FUN_00445010()
    ADD ESP,0x8                         ; 00446d48
    TEST EAX,EAX                        ; 00446d4b
    JZ 0x00446d51                       ; 00446d4d
        ;   XREF to: 00446d51 (CONDITIONAL_JUMP)  ; LAB_00446d51
    MOV EBP,EBX                         ; 00446d4f
    INC EBX                             ; 00446d51
        ;   Label: LAB_00446d51
    MOV ECX,dword ptr [EDI + 0x28]      ; 00446d52
    ADD ESI,0x20                        ; 00446d55
    CMP EBX,ECX                         ; 00446d58
    JL 0x00446d38                       ; 00446d5a
        ;   XREF to: 00446d38 (CONDITIONAL_JUMP)  ; LAB_00446d38
    TEST EBP,EBP                        ; 00446d5c
        ;   Label: LAB_00446d5c
    JL 0x00446db0                       ; 00446d5e
        ;   XREF to: 00446db0 (CONDITIONAL_JUMP)  ; LAB_00446db0
    MOV EBX,EBP                         ; 00446d60
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00446d62
    SHL EBX,0x5                         ; 00446d65
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00446d68
    CMP EAX,0x1510da8                   ; 00446d6b
    JNZ 0x00446db5                      ; 00446d70
        ;   XREF to: 00446db5 (CONDITIONAL_JUMP)  ; LAB_00446db5
    MOV EBX,EBP                         ; 00446d72
        ;   Label: LAB_00446d72
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00446d74
    SHL EBX,0x5                         ; 00446d77
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00446d7a
    CMP EAX,0x1510db4                   ; 00446d7e
    JZ 0x00446d9f                       ; 00446d83
        ;   XREF to: 00446d9f (CONDITIONAL_JUMP)  ; LAB_00446d9f
    FLD float ptr [EAX]                 ; 00446d85
    FLD float ptr [EAX + 0x8]           ; 00446d87
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446d8a
    MOV dword ptr [0x01510db8],EDX      ; 00446d8d | DAT_01510db8
    FSTP float ptr [0x01510dbc]         ; 00446d93 | DAT_01510dbc
    FSTP float ptr [0x01510db4]         ; 00446d99 | DAT_01510db4
    SHL EBP,0x5                         ; 00446d9f
        ;   Label: LAB_00446d9f
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00446da2
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x8] ; 00446da5
    CMP EAX,0x1510dc0                   ; 00446da9
    JNZ 0x00446dd1                      ; 00446dae
        ;   XREF to: 00446dd1 (CONDITIONAL_JUMP)  ; LAB_00446dd1
    POP EBP                             ; 00446db0
        ;   Label: LAB_00446db0
    POP EDI                             ; 00446db1
    POP ESI                             ; 00446db2
    POP EBX                             ; 00446db3
    RET                                 ; 00446db4
    FLD float ptr [EAX]                 ; 00446db5
        ;   Label: LAB_00446db5
    FLD float ptr [EAX + 0x8]           ; 00446db7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446dba
    MOV dword ptr [0x01510dac],EDX      ; 00446dbd | DAT_01510dac
    FSTP float ptr [0x01510db0]         ; 00446dc3 | DAT_01510db0
    FSTP float ptr [0x01510da8]         ; 00446dc9 | DAT_01510da8
    JMP 0x00446d72                      ; 00446dcf
        ;   XREF to: 00446d72 (UNCONDITIONAL_JUMP)  ; LAB_00446d72
    FLD float ptr [EAX]                 ; 00446dd1
        ;   Label: LAB_00446dd1
    FLD float ptr [EAX + 0x8]           ; 00446dd3
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446dd6
    MOV dword ptr [0x01510dc4],EDX      ; 00446dd9 | DAT_01510dc4
    FSTP float ptr [0x01510dc8]         ; 00446ddf | DAT_01510dc8
    FSTP float ptr [0x01510dc0]         ; 00446de5 | DAT_01510dc0
    POP EBP                             ; 00446deb
    POP EDI                             ; 00446dec
    POP ESI                             ; 00446ded
    POP EBX                             ; 00446dee
    RET                                 ; 00446def

