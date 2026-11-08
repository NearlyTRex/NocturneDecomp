; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00585a10(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005859bc = 00585a2e
;   undefined4 DAT_005f6711
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_0042e1a0
;   FUN_004d7f50
;   FUN_00524770
;   FUN_00585b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585a10
        ;   Label: FUN_00585a10
    SUB ESP,0x8                         ; 00585a11
    MOV EBX,dword ptr [ESP + 0x10]      ; 00585a14
    PUSH dword ptr [ESP + 0x14]         ; 00585a18
    PUSH EBX                            ; 00585a1c
    CALL FUN_0042e1a0                   ; 00585a1d
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 00585a22
    TEST EAX,EAX                        ; 00585a25
    JNZ 0x00585a9b                      ; 00585a27
        ;   XREF to: 00585a9b (CONDITIONAL_JUMP)  ; LAB_00585a9b
    ADD ESP,0x8                         ; 00585a29
    POP EBX                             ; 00585a2c
    RET                                 ; 00585a2d
    MOV ESI,0x1                         ; 00585a2e
        ;   Label: caseD_12
    CMP dword ptr [EBX + 0x1ff5c],0x7   ; 00585a33
        ;   Label: caseD_23
    JNZ 0x00585ad2                      ; 00585a3a
        ;   XREF to: 00585ad2 (CONDITIONAL_JUMP)  ; LAB_00585ad2
    FLD float ptr [ESP + 0x18]          ; 00585a40
        ;   Label: LAB_00585a40
    FMUL double ptr [0x005f6711]        ; 00585a44 | DAT_005f6711
    FSTP float ptr [ESP + 0x4]          ; 00585a4a
    PUSH dword ptr [ESP + 0x4]          ; 00585a4e
    PUSH EBX                            ; 00585a52
    CALL FUN_00585b00                   ; 00585a53
        ;   XREF to: 00585b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b00()
    ADD ESP,0x8                         ; 00585a58
    PUSH dword ptr [ESP + 0x4]          ; 00585a5b
    PUSH EBX                            ; 00585a5f
    CALL FUN_00585b00                   ; 00585a60
        ;   XREF to: 00585b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b00()
    ADD ESP,0x8                         ; 00585a65
    PUSH dword ptr [ESP + 0x4]          ; 00585a68
    PUSH EBX                            ; 00585a6c
    CALL FUN_00585b00                   ; 00585a6d
        ;   XREF to: 00585b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b00()
    ADD ESP,0x8                         ; 00585a72
    PUSH dword ptr [ESP + 0x4]          ; 00585a75
    PUSH EBX                            ; 00585a79
        ;   Label: LAB_00585a79
    CALL FUN_00585b00                   ; 00585a7a
        ;   XREF to: 00585b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b00()
    ADD ESP,0x8                         ; 00585a7f
    MOV ECX,dword ptr [0x0061d95c]      ; 00585a82 | DAT_0061d95c
    PUSH dword ptr [ESP + 0x8]          ; 00585a88
    PUSH ECX                            ; 00585a8c | DAT_01ccf390
    CALL FUN_004d7f50                   ; 00585a8d
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7f50()
    ADD ESP,0x8                         ; 00585a92
    POP ESI                             ; 00585a95
    ADD ESP,0x8                         ; 00585a96
    POP EBX                             ; 00585a99
    RET                                 ; 00585a9a
    PUSH ESI                            ; 00585a9b
        ;   Label: LAB_00585a9b
    MOV EAX,[0x0061d95c]                ; 00585a9c | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 00585aa1 | DAT_01ccf624
    LEA EAX,[EBX + 0x158]               ; 00585aa7
    PUSH EAX                            ; 00585aad
    FSTP float ptr [ESP + 0xc]          ; 00585aae
    CALL FUN_00524770                   ; 00585ab2
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00585ab7
    XOR ESI,ESI                         ; 00585aba
    SUB EAX,0x12                        ; 00585abc
    ADD ESP,0x4                         ; 00585abf
    CMP EAX,0x14                        ; 00585ac2
    JA 0x00585a33                       ; 00585ac5
        ;   XREF to: 00585a33 (CONDITIONAL_JUMP)  ; caseD_25
    JMP dword ptr [EAX*0x4 + 0x5859bc]  ; 00585acb | caseD_26 | caseD_25 | switchdataD_005859bc
        ;   Label: switchD
    TEST ESI,ESI                        ; 00585ad2
        ;   Label: LAB_00585ad2
    JNZ 0x00585a40                      ; 00585ad4
        ;   XREF to: 00585a40 (CONDITIONAL_JUMP)  ; LAB_00585a40
    PUSH dword ptr [ESP + 0x18]         ; 00585ada
    JMP 0x00585a79                      ; 00585ade
        ;   XREF to: 00585a79 (UNCONDITIONAL_JUMP)  ; LAB_00585a79

