; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537aa0(int param_1,int param_2,int param_3,uint param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   FUN_00437280
;   FUN_00437290
;   FUN_004372b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537aa0
        ;   Label: FUN_00537aa0
    PUSH ESI                            ; 00537aa1
    PUSH EDI                            ; 00537aa2
    PUSH EBP                            ; 00537aa3
    SUB ESP,0xc                         ; 00537aa4
    MOV EDI,dword ptr [ESP + 0x24]      ; 00537aa7
    MOV EAX,dword ptr [ESP + 0x20]      ; 00537aab
    CMP dword ptr [EAX + 0x20],0x0      ; 00537aaf
    JZ 0x00537b83                       ; 00537ab3
        ;   XREF to: 00537b83 (CONDITIONAL_JUMP)  ; LAB_00537b83
    CMP dword ptr [EAX + 0x14],0x0      ; 00537ab9
    JZ 0x00537b83                       ; 00537abd
        ;   XREF to: 00537b83 (CONDITIONAL_JUMP)  ; LAB_00537b83
    TEST EDI,EDI                        ; 00537ac3
    JZ 0x00537b83                       ; 00537ac5
        ;   XREF to: 00537b83 (CONDITIONAL_JUMP)  ; LAB_00537b83
    XOR EBX,EBX                         ; 00537acb
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00537acd
    MOV dword ptr [ESP + 0x4],EBX       ; 00537ad1
    CMP ESI,0x10                        ; 00537ad5
    JNC 0x00537b9f                      ; 00537ad8
        ;   XREF to: 00537b9f (CONDITIONAL_JUMP)  ; LAB_00537b9f
    CMP ESI,0x8                         ; 00537ade
    JNZ 0x00537ba6                      ; 00537ae1
        ;   XREF to: 00537ba6 (CONDITIONAL_JUMP)  ; LAB_00537ba6
    CALL FUN_00437290                   ; 00537ae7
        ;   XREF to: 00437290 (UNCONDITIONAL_CALL)  ; undefined FUN_00437290()
    MOV dword ptr [ESP + 0x8],EAX       ; 00537aec
        ;   Label: LAB_00537aec
    MOV EAX,dword ptr [ESP + 0x20]      ; 00537af0
        ;   Label: LAB_00537af0
    MOV EAX,dword ptr [EAX + 0x20]      ; 00537af4
    MOV EBX,dword ptr [ESP + 0x20]      ; 00537af7
    MOV EBP,dword ptr [EAX]             ; 00537afb
    MOV EAX,dword ptr [ESP + 0x4]       ; 00537afd
    MOV EBX,dword ptr [EBX + 0x14]      ; 00537b01
    SHL EAX,0x2                         ; 00537b04
    ADD EBX,EBP                         ; 00537b07
    MOV dword ptr [ESP],EAX             ; 00537b09
    MOV EAX,dword ptr [ESP + 0x20]      ; 00537b0c
        ;   Label: LAB_00537b0c
    MOV EDX,dword ptr [ESP]             ; 00537b10
    MOV EAX,dword ptr [EAX + 0x20]      ; 00537b13
    MOV EBP,dword ptr [ESP + 0x20]      ; 00537b16
    ADD EAX,EDX                         ; 00537b1a
    MOV EBP,dword ptr [EBP + 0x14]      ; 00537b1c
    ADD EBP,dword ptr [EAX + 0x4]       ; 00537b1f
    CMP EBX,EBP                         ; 00537b22
    JNC 0x00537b60                      ; 00537b24
        ;   XREF to: 00537b60 (CONDITIONAL_JUMP)  ; LAB_00537b60
    XOR EDX,EDX                         ; 00537b26
        ;   Label: LAB_00537b26
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00537b28
    MOV DX,word ptr [EBX]               ; 00537b2c
    IMUL EDX,EAX                        ; 00537b2f
    MOV EAX,EDX                         ; 00537b32
    SAR EDX,0x1f                        ; 00537b34
    SHL EDX,0x3                         ; 00537b37
    SBB EAX,EDX                         ; 00537b3a
    SAR EAX,0x3                         ; 00537b3c
    XOR ESI,ESI                         ; 00537b3f
    LEA ECX,[EBX + 0x4]                 ; 00537b41
    MOV SI,word ptr [EBX + 0x2]         ; 00537b44
    LEA EBX,[ESI + 0x3]                 ; 00537b48
    PUSH ESI                            ; 00537b4b
    PUSH ECX                            ; 00537b4c
    ADD EAX,EDI                         ; 00537b4d
    AND BL,0xfc                         ; 00537b4f
    PUSH EAX                            ; 00537b52
    ADD EBX,ECX                         ; 00537b53
    CALL dword ptr [ESP + 0x14]         ; 00537b55
    ADD ESP,0xc                         ; 00537b59
    CMP EBX,EBP                         ; 00537b5c
    JC 0x00537b26                       ; 00537b5e
        ;   XREF to: 00537b26 (CONDITIONAL_JUMP)  ; LAB_00537b26
    MOV EDX,dword ptr [ESP]             ; 00537b60
        ;   Label: LAB_00537b60
    MOV ECX,dword ptr [ESP + 0x4]       ; 00537b63
    ADD EDX,0x4                         ; 00537b67
    MOV ESI,dword ptr [ESP + 0x28]      ; 00537b6a
    MOV dword ptr [ESP],EDX             ; 00537b6e
    MOV EDX,dword ptr [ESP + 0x20]      ; 00537b71
    INC ECX                             ; 00537b75
    ADD EDI,ESI                         ; 00537b76
    MOV EBP,dword ptr [EDX + 0x1c]      ; 00537b78
    MOV dword ptr [ESP + 0x4],ECX       ; 00537b7b
    CMP ECX,EBP                         ; 00537b7f
    JL 0x00537b0c                       ; 00537b81
        ;   XREF to: 00537b0c (CONDITIONAL_JUMP)  ; LAB_00537b0c
    ADD ESP,0xc                         ; 00537b83
        ;   Label: LAB_00537b83
    POP EBP                             ; 00537b86
    POP EDI                             ; 00537b87
    POP ESI                             ; 00537b88
    POP EBX                             ; 00537b89
    RET                                 ; 00537b8a
    CALL FUN_004372b0                   ; 00537b8b
        ;   XREF to: 004372b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004372b0()
        ;   Label: LAB_00537b8b
    JMP 0x00537aec                      ; 00537b90
        ;   XREF to: 00537aec (UNCONDITIONAL_JUMP)  ; LAB_00537aec
    CALL FUN_00437280                   ; 00537b95
        ;   XREF to: 00437280 (UNCONDITIONAL_CALL)  ; undefined FUN_00437280()
        ;   Label: LAB_00537b95
    JMP 0x00537aec                      ; 00537b9a
        ;   XREF to: 00537aec (UNCONDITIONAL_JUMP)  ; LAB_00537aec
    JBE 0x00537b8b                      ; 00537b9f
        ;   XREF to: 00537b8b (CONDITIONAL_JUMP)  ; LAB_00537b8b
        ;   Label: LAB_00537b9f
    CMP ESI,0x20                        ; 00537ba1
    JZ 0x00537b95                       ; 00537ba4
        ;   XREF to: 00537b95 (CONDITIONAL_JUMP)  ; LAB_00537b95
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00537ba6
        ;   Label: LAB_00537ba6
    PUSH ESI                            ; 00537baa
    MOV ECX,0x5ecd95                    ; 00537bab
    MOV EBX,0x2a2                       ; 00537bb0
    PUSH 0x5ecdad                       ; 00537bb5
    MOV dword ptr [0x01d1d400],ECX      ; 00537bba | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00537bc0 | DAT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00537bc6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x8                         ; 00537bcb
    JMP 0x00537af0                      ; 00537bce
        ;   XREF to: 00537af0 (UNCONDITIONAL_JUMP)  ; LAB_00537af0

