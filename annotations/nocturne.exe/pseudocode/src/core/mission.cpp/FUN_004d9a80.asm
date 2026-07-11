; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d9a80(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004a4b50 at 004a4eac
;   FUN_004d9440 at 004d9596
;
; Referenced Globals:
;   string s_..\\core\\mission.cpp_00589f69
;   string s_CDemonMission::createHeros_-_too_00589f7d
;   string s_CHeroPlaceholder_00589fc0
;   undefined4 DAT_005b9354
;   undefined4 DAT_005bdee0
;   undefined4 DAT_01c776ac
;   undefined4 DAT_01c776b0
;   undefined4 DAT_01cae0d4
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cea280
;   undefined4 DAT_01cea29c
;   undefined4 DAT_01cea2b8
;   undefined4 DAT_01cea394
;
; Called Functions:
;   FUN_0040d7e0
;   FUN_004c8440
;   FUN_004d8ee0
;   FUN_004d8f90
;   FUN_004d9920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9a80
        ;   Label: FUN_004d9a80
    PUSH ESI                            ; 004d9a81
    PUSH EDI                            ; 004d9a82
    PUSH EBP                            ; 004d9a83
    MOV EBP,dword ptr [ESP + 0x14]      ; 004d9a84
    XOR EBX,EBX                         ; 004d9a88
    ADD EBX,0x4                         ; 004d9a8a
        ;   Label: LAB_004d9a8a
    XOR EDX,EDX                         ; 004d9a8d
    MOV dword ptr [EBX + 0x1cae0d4],EDX ; 004d9a8f
    CMP EBX,0x10                        ; 004d9a95
    JNZ 0x004d9a8a                      ; 004d9a98
        ;   XREF to: 004d9a8a (CONDITIONAL_JUMP)  ; LAB_004d9a8a
    MOV EAX,[0x005bdee0]                ; 004d9a9a | DAT_005bdee0
    MOV ECX,dword ptr [EAX]             ; 004d9a9f | DAT_01cea280
    TEST ECX,ECX                        ; 004d9aa1
    JZ 0x004d9b8d                       ; 004d9aa3
        ;   XREF to: 004d9b8d (CONDITIONAL_JUMP)  ; LAB_004d9b8d
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004d9aa9 | DAT_01cea29c
    MOV [0x01cae0d4],EAX                ; 004d9aac | DAT_01cae0d4
    CMP EAX,0x4                         ; 004d9ab1
    JGE 0x004d9be0                      ; 004d9ab4
        ;   XREF to: 004d9be0 (CONDITIONAL_JUMP)  ; LAB_004d9be0
    MOV EAX,[0x01cae0d4]                ; 004d9aba | DAT_01cae0d4
        ;   Label: LAB_004d9aba
    XOR EDI,EDI                         ; 004d9abf
    TEST EAX,EAX                        ; 004d9ac1
    JLE 0x004d9b1e                      ; 004d9ac3
        ;   XREF to: 004d9b1e (CONDITIONAL_JUMP)  ; LAB_004d9b1e
    XOR EBX,EBX                         ; 004d9ac5
    XOR ESI,ESI                         ; 004d9ac7
    MOV EAX,[0x005bdee0]                ; 004d9ac9 | DAT_005bdee0
        ;   Label: LAB_004d9ac9
    PUSH 0x0                            ; 004d9ace
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x34] ; 004d9ad0
    PUSH EDX                            ; 004d9ad4
    PUSH EDI                            ; 004d9ad5
    PUSH EBP                            ; 004d9ad6
    CALL FUN_004d9920                   ; 004d9ad7
        ;   XREF to: 004d9920 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9920()
    ADD ESP,0x10                        ; 004d9adc
    TEST EAX,EAX                        ; 004d9adf
    JZ 0x004d9b88                       ; 004d9ae1
        ;   XREF to: 004d9b88 (CONDITIONAL_JUMP)  ; LAB_004d9b88
    MOV EAX,dword ptr [EBX + 0x1cae0d8] ; 004d9ae7
    MOV dword ptr [EAX + 0xbc90],0x1    ; 004d9aed
    MOV EAX,[0x005bdee0]                ; 004d9af7 | DAT_005bdee0
    ADD EBX,0x4                         ; 004d9afc
    LEA EDX,[EAX + ESI*0x1]             ; 004d9aff
    MOV EAX,dword ptr [EBX + 0x1cae0d4] ; 004d9b02
    MOV EDX,dword ptr [EDX + 0x38]      ; 004d9b08 | DAT_01cea2b8
    INC EDI                             ; 004d9b0b
    MOV dword ptr [EAX + 0x1f59c],EDX   ; 004d9b0c
    MOV EAX,[0x01cae0d4]                ; 004d9b12 | DAT_01cae0d4
    ADD ESI,0x78                        ; 004d9b17
    CMP EDI,EAX                         ; 004d9b1a
    JL 0x004d9ac9                       ; 004d9b1c
        ;   XREF to: 004d9ac9 (CONDITIONAL_JUMP)  ; LAB_004d9ac9
    MOV EAX,[0x005bdee0]                ; 004d9b1e | DAT_005bdee0
        ;   Label: LAB_004d9b1e
    MOV EAX,dword ptr [EAX + 0x114]     ; 004d9b23 | DAT_01cea394
    MOV [0x01cae0e8],EAX                ; 004d9b29 | DAT_01cae0e8
    MOV EAX,[0x01cae0e8]                ; 004d9b2e | DAT_01cae0e8
        ;   Label: LAB_004d9b2e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d9b33
    MOV dword ptr [EAX + 0xbc90],0x0    ; 004d9b3a
    MOV EBX,dword ptr [EBP + 0x514]     ; 004d9b44
    TEST EBX,EBX                        ; 004d9b4a
    JZ 0x004d9b7a                       ; 004d9b4c
        ;   XREF to: 004d9b7a (CONDITIONAL_JUMP)  ; LAB_004d9b7a
    PUSH 0x589fc0                       ; 004d9b4e | = "CHeroPlaceholder"
        ;   Label: LAB_004d9b4e
    PUSH EBX                            ; 004d9b53
    CALL FUN_0040d7e0                   ; 004d9b54
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 004d9b59
    TEST EAX,EAX                        ; 004d9b5c
    JZ 0x004d9c08                       ; 004d9b5e
        ;   XREF to: 004d9c08 (CONDITIONAL_JUMP)  ; LAB_004d9c08
    PUSH 0x1                            ; 004d9b64
    PUSH EBX                            ; 004d9b66
    PUSH EBP                            ; 004d9b67
    CALL FUN_004d8f90                   ; 004d9b68
        ;   XREF to: 004d8f90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8f90()
    ADD ESP,0xc                         ; 004d9b6d
    MOV EBX,dword ptr [EBP + 0x514]     ; 004d9b70
    TEST EBX,EBX                        ; 004d9b76
        ;   Label: LAB_004d9b76
    JNZ 0x004d9b4e                      ; 004d9b78
        ;   XREF to: 004d9b4e (CONDITIONAL_JUMP)  ; LAB_004d9b4e
    PUSH EBP                            ; 004d9b7a
        ;   Label: LAB_004d9b7a
    CALL FUN_004d8ee0                   ; 004d9b7b
        ;   XREF to: 004d8ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8ee0()
    MOV EAX,0x1                         ; 004d9b80
    ADD ESP,0x4                         ; 004d9b85
    POP EBP                             ; 004d9b88
        ;   Label: LAB_004d9b88
    POP EDI                             ; 004d9b89
    POP ESI                             ; 004d9b8a
    POP EBX                             ; 004d9b8b
    RET                                 ; 004d9b8c
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d9b8d
        ;   Label: LAB_004d9b8d
    MOV EAX,[0x005b9354]                ; 004d9b91 | DAT_005b9354
    PUSH EBX                            ; 004d9b96
    MOV ESI,dword ptr [EAX + 0xc0]      ; 004d9b97 | DAT_01c776ac
    PUSH ESI                            ; 004d9b9d
    PUSH ECX                            ; 004d9b9e
    MOV EDX,0x1                         ; 004d9b9f
    PUSH EBP                            ; 004d9ba4
    MOV dword ptr [0x01cae0e8],ECX      ; 004d9ba5 | DAT_01cae0e8
    MOV dword ptr [0x01cae0d4],EDX      ; 004d9bab | DAT_01cae0d4
    CALL FUN_004d9920                   ; 004d9bb1
        ;   XREF to: 004d9920 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9920()
    ADD ESP,0x10                        ; 004d9bb6
    TEST EAX,EAX                        ; 004d9bb9
    JZ 0x004d9b88                       ; 004d9bbb
        ;   XREF to: 004d9b88 (CONDITIONAL_JUMP)  ; LAB_004d9b88
    MOV EAX,[0x01cae0e8]                ; 004d9bbd | DAT_01cae0e8
    MOV EDX,dword ptr [0x005b9354]      ; 004d9bc2 | DAT_005b9354
    MOV EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d9bc8
    MOV EAX,dword ptr [EDX + 0xc4]      ; 004d9bcf | DAT_01c776b0
    MOV dword ptr [EBX + 0x1f59c],EAX   ; 004d9bd5
    JMP 0x004d9b2e                      ; 004d9bdb
        ;   XREF to: 004d9b2e (UNCONDITIONAL_JUMP)  ; LAB_004d9b2e
    MOV ESI,0x589f69                    ; 004d9be0 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004d9be0
    MOV EDI,0x63b                       ; 004d9be5
    PUSH 0x589f7d                       ; 004d9bea | = "CDemonMission::createHeros - too many..."
    MOV dword ptr [0x01cc4800],ESI      ; 004d9bef | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004d9bf5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d9bfb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d9c00
    JMP 0x004d9aba                      ; 004d9c03
        ;   XREF to: 004d9aba (UNCONDITIONAL_JUMP)  ; LAB_004d9aba
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d9c08
        ;   Label: LAB_004d9c08
    JMP 0x004d9b76                      ; 004d9c0e
        ;   XREF to: 004d9b76 (UNCONDITIONAL_JUMP)  ; LAB_004d9b76

