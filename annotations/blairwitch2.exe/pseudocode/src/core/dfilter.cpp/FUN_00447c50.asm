; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447c50(int *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00492d10 at 00492e23
;
; Referenced Globals:
;   undefined4 DAT_0060a0b4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004477a0
;   FUN_004478d0
;   FUN_00447c30
;   FUN_00460c70
;   FUN_004e4500
;   FUN_005b7790
;   FUN_005b8100
;   FUN_005b8580
;   FUN_005b87c0
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447c50
        ;   Label: FUN_00447c50
    PUSH ESI                            ; 00447c51
    PUSH EBP                            ; 00447c52
    SUB ESP,0x100                       ; 00447c53
    MOV ESI,dword ptr [ESP + 0x110]     ; 00447c59
    MOV EBX,dword ptr [ESP + 0x114]     ; 00447c60
    PUSH ESI                            ; 00447c67
    CALL FUN_00447c30                   ; 00447c68
        ;   XREF to: 00447c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00447c30()
    ADD ESP,0x4                         ; 00447c6d
    TEST EBX,EBX                        ; 00447c70
    JZ 0x00447d71                       ; 00447c72
        ;   XREF to: 00447d71 (CONDITIONAL_JUMP)  ; LAB_00447d71
    PUSH EDI                            ; 00447c78
    PUSH EBX                            ; 00447c79
    PUSH 0x5cecd0                       ; 00447c7a
    LEA EAX,[ESP + 0xc]                 ; 00447c7f
    PUSH EAX                            ; 00447c83
    CALL FUN_005b7790                   ; 00447c84
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00447c89
    PUSH 0x5cecd7                       ; 00447c8c
    LEA EAX,[ESP + 0x8]                 ; 00447c91
    PUSH EAX                            ; 00447c95
    PUSH EBX                            ; 00447c96
    CALL FUN_00460c70                   ; 00447c97
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 00447c9c
    MOV EDI,EAX                         ; 00447c9f
    TEST EAX,EAX                        ; 00447ca1
    JNZ 0x00447cc9                      ; 00447ca3
        ;   XREF to: 00447cc9 (CONDITIONAL_JUMP)  ; LAB_00447cc9
    PUSH EBX                            ; 00447ca5
    MOV EDX,0x5cecda                    ; 00447ca6
    MOV ECX,0x15a                       ; 00447cab
    PUSH 0x5cecee                       ; 00447cb0
    MOV dword ptr [0x01d046a0],EDX      ; 00447cb5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00447cbb | DAT_01d046a4
    CALL FUN_004e4500                   ; 00447cc1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00447cc6
    PUSH ESI                            ; 00447cc9
        ;   Label: LAB_00447cc9
    PUSH 0x5ced06                       ; 00447cca
    PUSH EDI                            ; 00447ccf
    CALL FUN_005b8100                   ; 00447cd0
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00447cd5
    PUSH EDI                            ; 00447cd8
    CALL FUN_005b89c0                   ; 00447cd9
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    MOV EAX,dword ptr [ESI]             ; 00447cde
    ADD ESP,0x4                         ; 00447ce0
    SHL EAX,0xd                         ; 00447ce3
    PUSH EAX                            ; 00447ce6
    CALL FUN_005b8580                   ; 00447ce7
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 00447cec
    PUSH EBX                            ; 00447cef
    PUSH 0x5ced0a                       ; 00447cf0
    MOV dword ptr [ESI + 0x4],EAX       ; 00447cf5
    LEA EAX,[ESP + 0xc]                 ; 00447cf8
    PUSH EAX                            ; 00447cfc
    CALL FUN_005b7790                   ; 00447cfd
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00447d02
    PUSH 0x5ced11                       ; 00447d05
    LEA EAX,[ESP + 0x8]                 ; 00447d0a
    PUSH EAX                            ; 00447d0e
    PUSH EBX                            ; 00447d0f
    CALL FUN_00460c70                   ; 00447d10
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 00447d15
    MOV EDI,EAX                         ; 00447d18
    TEST EAX,EAX                        ; 00447d1a
    JZ 0x00447d9d                       ; 00447d1c
        ;   XREF to: 00447d9d (CONDITIONAL_JUMP)  ; LAB_00447d9d
    PUSH EDI                            ; 00447d22
        ;   Label: LAB_00447d22
    MOV EDX,dword ptr [ESI]             ; 00447d23
    PUSH EDX                            ; 00447d25
    PUSH 0x2000                         ; 00447d26
    MOV ECX,dword ptr [ESI + 0x4]       ; 00447d2b
    PUSH ECX                            ; 00447d2e
    CALL FUN_005b87c0                   ; 00447d2f
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 00447d34
    PUSH EDI                            ; 00447d37
    CALL FUN_005b89c0                   ; 00447d38
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 00447d3d
    XOR ECX,ECX                         ; 00447d40
    POP EDI                             ; 00447d42
    MOV EAX,dword ptr [ESI]             ; 00447d43
        ;   Label: LAB_00447d43
    SHL EAX,0xd                         ; 00447d45
    CMP ECX,EAX                         ; 00447d48
    JGE 0x00447dc5                      ; 00447d4a
        ;   XREF to: 00447dc5 (CONDITIONAL_JUMP)  ; LAB_00447dc5
    MOV EBX,dword ptr [ESI + 0x4]       ; 00447d4c
    XOR EDX,EDX                         ; 00447d4f
    MOV DL,byte ptr [ECX + EBX*0x1]     ; 00447d51
    MOV EAX,EDX                         ; 00447d54
    SAR EDX,0x1f                        ; 00447d56
    SHL EDX,0x2                         ; 00447d59
    SBB EAX,EDX                         ; 00447d5c
    SAR EAX,0x2                         ; 00447d5e
    MOV EDX,EAX                         ; 00447d61
    SAR EDX,0x1f                        ; 00447d63
    SUB EAX,EDX                         ; 00447d66
    SAR EAX,0x1                         ; 00447d68
    INC ECX                             ; 00447d6a
    MOV byte ptr [ECX + EBX*0x1 + -0x1],AL ; 00447d6b
    JMP 0x00447d43                      ; 00447d6f
        ;   XREF to: 00447d43 (UNCONDITIONAL_JUMP)  ; LAB_00447d43
    PUSH 0x5cecb8                       ; 00447d71
        ;   Label: LAB_00447d71
    MOV EBX,dword ptr [0x0060a0b4]      ; 00447d76 | DAT_0060a0b4
    PUSH EBX                            ; 00447d7c
    CALL FUN_004477a0                   ; 00447d7d
        ;   XREF to: 004477a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004477a0()
    ADD ESP,0x8                         ; 00447d82
    PUSH 0x5cecc4                       ; 00447d85
    PUSH EAX                            ; 00447d8a
    CALL FUN_004478d0                   ; 00447d8b
        ;   XREF to: 004478d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004478d0()
    ADD ESP,0x8                         ; 00447d90
    ADD ESP,0x100                       ; 00447d93
    POP EBP                             ; 00447d99
    POP ESI                             ; 00447d9a
    POP EBX                             ; 00447d9b
    RET                                 ; 00447d9c
    PUSH EBX                            ; 00447d9d
        ;   Label: LAB_00447d9d
    MOV EBP,0x5ced14                    ; 00447d9e
    MOV EAX,0x166                       ; 00447da3
    PUSH 0x5ced28                       ; 00447da8
    MOV dword ptr [0x01d046a0],EBP      ; 00447dad | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00447db3 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00447db8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00447dbd
    JMP 0x00447d22                      ; 00447dc0
        ;   XREF to: 00447d22 (UNCONDITIONAL_JUMP)  ; LAB_00447d22
    MOV dword ptr [ESI + 0x8],0x0       ; 00447dc5
        ;   Label: LAB_00447dc5
    ADD ESP,0x100                       ; 00447dcc
    POP EBP                             ; 00447dd2
    POP ESI                             ; 00447dd3
    POP EBX                             ; 00447dd4
    RET                                 ; 00447dd5

