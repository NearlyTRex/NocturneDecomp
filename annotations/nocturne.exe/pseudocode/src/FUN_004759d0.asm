; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004759d0(int *param_1)
;
; Local Variables:
; undefined1       Stack[-0x15c]:1  local_15c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00474d70 at 00474e13
;   FUN_0049cc10 at 0049d583
;
; Referenced Globals:
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcde08
;   undefined4 DAT_01bcde0c
;   undefined4 DAT_01bcde10
;   undefined4 DAT_01bcde14
;   undefined4 DAT_01bcde18
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   FUN_004015a0
;   FUN_00403e60
;   FUN_00408370
;   FUN_004722b0
;   FUN_004724e0
;   FUN_00474080
;   FUN_00476040
;   FUN_00476580
;   FUN_00490980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004759d0
        ;   Label: FUN_004759d0
    PUSH ESI                            ; 004759d1
    PUSH EDI                            ; 004759d2
    PUSH EBP                            ; 004759d3
    SUB ESP,0x14c                       ; 004759d4
    MOV EDX,dword ptr [0x005b6d50]      ; 004759da | DAT_005b6d50
    PUSH EDX                            ; 004759e0
    CALL FUN_004722b0                   ; 004759e1
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004722b0()
    MOV EAX,[0x01c00c58]                ; 004759e6 | DAT_01c00c58
    ADD ESP,0x4                         ; 004759eb
    MOV dword ptr [ESP + 0x134],EAX     ; 004759ee
    MOV EAX,dword ptr [ESP + 0x160]     ; 004759f5
    MOV EAX,dword ptr [EAX + 0x11c]     ; 004759fc
    MOV dword ptr [ESP + 0x138],EAX     ; 00475a02
    MOV EAX,dword ptr [ESP + 0x160]     ; 00475a09
    XOR ECX,ECX                         ; 00475a10
    MOV EBX,dword ptr [EAX + 0x12c]     ; 00475a12
    MOV dword ptr [ESP + 0x12c],ECX     ; 00475a18
    TEST EBX,EBX                        ; 00475a1f
    JLE 0x00475ae2                      ; 00475a21
        ;   XREF to: 00475ae2 (CONDITIONAL_JUMP)  ; LAB_00475ae2
    MOV EAX,[0x01c00c5c]                ; 00475a27 | DAT_01c00c5c
        ;   Label: LAB_00475a27
    MOV dword ptr [ESP + 0x140],EAX     ; 00475a2c
    MOV EAX,dword ptr [ESP + 0x160]     ; 00475a33
    XOR EBX,EBX                         ; 00475a3a
    MOV ESI,dword ptr [EAX + 0x124]     ; 00475a3c
    MOV dword ptr [ESP + 0x130],EBX     ; 00475a42
    TEST ESI,ESI                        ; 00475a49
    JLE 0x00475a63                      ; 00475a4b
        ;   XREF to: 00475a63 (CONDITIONAL_JUMP)  ; LAB_00475a63
    MOV EDX,dword ptr [ESP + 0x160]     ; 00475a4d
        ;   Label: LAB_00475a4d
    MOV EAX,dword ptr [ESP + 0x138]     ; 00475a54
    CMP EAX,dword ptr [EDX]             ; 00475a5b
    JL 0x00475ba6                       ; 00475a5d
        ;   XREF to: 00475ba6 (CONDITIONAL_JUMP)  ; LAB_00475ba6
    CMP dword ptr [ESP + 0x12c],0x0     ; 00475a63
        ;   Label: LAB_00475a63
    JLE 0x00475aa1                      ; 00475a6b
        ;   XREF to: 00475aa1 (CONDITIONAL_JUMP)  ; LAB_00475aa1
    MOV EDI,dword ptr [0x01c00c64]      ; 00475a6d | DAT_01c00c64
    MOV EBP,dword ptr [ESP + 0x134]     ; 00475a73
    PUSH EDI                            ; 00475a7a
    MOV ESI,dword ptr [0x01c00c70]      ; 00475a7b | DAT_01c00c70
    MOV EAX,[0x01bcde18]                ; 00475a81 | DAT_01bcde18
    PUSH EBP                            ; 00475a86
    MOV [0x01c00c70],EAX                ; 00475a87 | DAT_01c00c70
    MOV EAX,[0x01c00c5c]                ; 00475a8c | DAT_01c00c5c
    PUSH EAX                            ; 00475a91
    PUSH EBP                            ; 00475a92
    CALL FUN_004015a0                   ; 00475a93
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004015a0()
    ADD ESP,0x10                        ; 00475a98
    MOV dword ptr [0x01c00c70],ESI      ; 00475a9b | DAT_01c00c70
    MOV EAX,dword ptr [ESP + 0x160]     ; 00475aa1
        ;   Label: LAB_00475aa1
    MOV ESI,dword ptr [ESP + 0x134]     ; 00475aa8
    MOV EDI,dword ptr [ESP + 0x12c]     ; 00475aaf
    MOV EDX,dword ptr [ESP + 0x160]     ; 00475ab6
    INC EDI                             ; 00475abd
    MOV EAX,dword ptr [EAX + 0x128]     ; 00475abe
    MOV EBP,dword ptr [EDX + 0x12c]     ; 00475ac4
    ADD ESI,EAX                         ; 00475aca
    MOV dword ptr [ESP + 0x12c],EDI     ; 00475acc
    MOV dword ptr [ESP + 0x134],ESI     ; 00475ad3
    CMP EDI,EBP                         ; 00475ada
    JL 0x00475a27                       ; 00475adc
        ;   XREF to: 00475a27 (CONDITIONAL_JUMP)  ; LAB_00475a27
    MOV EAX,dword ptr [ESP + 0x160]     ; 00475ae2
        ;   Label: LAB_00475ae2
    MOV ECX,dword ptr [ESP + 0x160]     ; 00475ae9
    MOV EDX,dword ptr [EAX + 0x16c]     ; 00475af0
    ADD ECX,0x138                       ; 00475af6
    CMP EDX,0x1                         ; 00475afc
    JNZ 0x00475d31                      ; 00475aff
        ;   XREF to: 00475d31 (CONDITIONAL_JUMP)  ; LAB_00475d31
    MOV EDX,dword ptr [ESP + 0x160]     ; 00475b05
    MOV EAX,dword ptr [EAX + 0x11c]     ; 00475b0c
    MOV dword ptr [EDX + 0x138],EAX     ; 00475b12
    MOV EAX,dword ptr [EDX]             ; 00475b18
    MOV dword ptr [EDX + 0x13c],EAX     ; 00475b1a
    MOV EAX,dword ptr [EDX + 0x124]     ; 00475b20
    PUSH ECX                            ; 00475b26
    MOV dword ptr [EDX + 0x140],EAX     ; 00475b27
    CALL FUN_00476580                   ; 00475b2d
        ;   XREF to: 00476580 (UNCONDITIONAL_CALL)  ; undefined FUN_00476580()
        ;   Label: LAB_00475b2d
    ADD ESP,0x4                         ; 00475b32
    MOV EAX,dword ptr [ESP + 0x160]     ; 00475b35
        ;   Label: LAB_00475b35
    CMP dword ptr [EAX + 0x78],0x0      ; 00475b3c
    JZ 0x00475d86                       ; 00475b40
        ;   XREF to: 00475d86 (CONDITIONAL_JUMP)  ; LAB_00475d86
    ADD ESP,0x14c                       ; 00475b46
    POP EBP                             ; 00475b4c
    POP EDI                             ; 00475b4d
    POP ESI                             ; 00475b4e
    POP EBX                             ; 00475b4f
    RET                                 ; 00475b50
    MOV EAX,dword ptr [ESP + 0x160]     ; 00475b51
        ;   Label: LAB_00475b51
    MOV EDI,dword ptr [ESP + 0x140]     ; 00475b58
    MOV EBP,dword ptr [ESP + 0x138]     ; 00475b5f
    MOV EDX,dword ptr [ESP + 0x160]     ; 00475b66
    INC EBP                             ; 00475b6d
    MOV EAX,dword ptr [EAX + 0x110]     ; 00475b6e
    MOV ECX,dword ptr [EDX + 0x124]     ; 00475b74
    ADD EDI,EAX                         ; 00475b7a
    MOV EAX,dword ptr [ESP + 0x130]     ; 00475b7c
    MOV dword ptr [ESP + 0x138],EBP     ; 00475b83
    INC EAX                             ; 00475b8a
    MOV dword ptr [ESP + 0x140],EDI     ; 00475b8b
    MOV dword ptr [ESP + 0x130],EAX     ; 00475b92
    CMP EAX,ECX                         ; 00475b99
    JL 0x00475a4d                       ; 00475b9b
        ;   XREF to: 00475a4d (CONDITIONAL_JUMP)  ; LAB_00475a4d
    JMP 0x00475a63                      ; 00475ba1
        ;   XREF to: 00475a63 (UNCONDITIONAL_JUMP)  ; LAB_00475a63
    CMP EAX,dword ptr [EDX + 0x118]     ; 00475ba6
        ;   Label: LAB_00475ba6
    JNZ 0x00475c00                      ; 00475bac
        ;   XREF to: 00475c00 (CONDITIONAL_JUMP)  ; LAB_00475c00
    CMP dword ptr [EDX + 0x10c],0x0     ; 00475bae
    JZ 0x00475cfe                       ; 00475bb5
        ;   XREF to: 00475cfe (CONDITIONAL_JUMP)  ; LAB_00475cfe
    MOV EAX,[0x01bcde14]                ; 00475bbb | DAT_01bcde14
    MOV EDX,dword ptr [ESP + 0x160]     ; 00475bc0
        ;   Label: LAB_00475bc0
    PUSH EAX                            ; 00475bc7
    MOV EAX,dword ptr [ESP + 0x144]     ; 00475bc8
    ADD EAX,dword ptr [EDX + 0x110]     ; 00475bcf
    DEC EAX                             ; 00475bd5
    MOV ECX,dword ptr [EDX + 0x128]     ; 00475bd6
    PUSH EAX                            ; 00475bdc
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00475bdd
    ADD EAX,ECX                         ; 00475be4
    DEC EAX                             ; 00475be6
    PUSH EAX                            ; 00475be7
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00475be8
    PUSH EBX                            ; 00475bef
    MOV ESI,dword ptr [ESP + 0x144]     ; 00475bf0
    PUSH ESI                            ; 00475bf7
    CALL FUN_00403e60                   ; 00475bf8
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00403e60()
    ADD ESP,0x14                        ; 00475bfd
    MOV EBP,dword ptr [ESP + 0x138]     ; 00475c00
        ;   Label: LAB_00475c00
    PUSH EBP                            ; 00475c07
    MOV EAX,dword ptr [ESP + 0x164]     ; 00475c08
    XOR EDI,EDI                         ; 00475c0f
    PUSH EAX                            ; 00475c11
    MOV dword ptr [ESP + 0x14c],EDI     ; 00475c12
    CALL FUN_00474080                   ; 00475c19
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined FUN_00474080()
    ADD ESP,0x8                         ; 00475c1e
    MOV EBX,dword ptr [ESP + 0x160]     ; 00475c21
    MOV dword ptr [ESP + 0x148],EAX     ; 00475c28
    PUSH EBP                            ; 00475c2f
    MOV EAX,dword ptr [ESP + 0x164]     ; 00475c30
    MOV EDI,dword ptr [ESP + 0x138]     ; 00475c37
    PUSH EBX                            ; 00475c3e
    MOV EDX,dword ptr [EAX + 0x114]     ; 00475c3f
    MOV EAX,[0x01bcde08]                ; 00475c45 | DAT_01bcde08
    ADD EDI,EDX                         ; 00475c4a
    MOV dword ptr [ESP + 0x144],EAX     ; 00475c4c
    CALL FUN_00476040                   ; 00475c53
        ;   XREF to: 00476040 (UNCONDITIONAL_CALL)  ; undefined FUN_00476040()
    ADD ESP,0x8                         ; 00475c58
    TEST EAX,EAX                        ; 00475c5b
    JZ 0x00475d08                       ; 00475c5d
        ;   XREF to: 00475d08 (CONDITIONAL_JUMP)  ; LAB_00475d08
    MOV EBP,dword ptr [ESP + 0x144]     ; 00475c63
        ;   Label: LAB_00475c63
    MOV ECX,dword ptr [ESP + 0x160]     ; 00475c6a
    SHL EBP,0x2                         ; 00475c71
    ADD EBP,ECX                         ; 00475c74
    XOR BL,BL                           ; 00475c76
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475c78
        ;   Label: LAB_00475c78
    MOV BH,byte ptr [EAX]               ; 00475c7f
    MOV EDX,ESP                         ; 00475c81
    CMP BL,BH                           ; 00475c83
    JZ 0x00475d2a                       ; 00475c85
        ;   XREF to: 00475d2a (CONDITIONAL_JUMP)  ; LAB_00475d2a
    MOV BH,byte ptr [EAX]               ; 00475c8b
        ;   Label: LAB_00475c8b
    LEA ECX,[EAX + 0x1]                 ; 00475c8d
    CMP BH,0x9                          ; 00475c90
    JNZ 0x00475d19                      ; 00475c93
        ;   XREF to: 00475d19 (CONDITIONAL_JUMP)  ; LAB_00475d19
    MOV ESI,ECX                         ; 00475c99
    MOV byte ptr [EDX],BL               ; 00475c9b
        ;   Label: LAB_00475c9b
    PUSH 0xffff                         ; 00475c9d
    MOV dword ptr [ESP + 0x14c],ESI     ; 00475ca2
    CALL FUN_00408370                   ; 00475ca9
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined FUN_00408370()
    ADD ESP,0x4                         ; 00475cae
    PUSH -0x1                           ; 00475cb1
    MOV EAX,dword ptr [ESP + 0x140]     ; 00475cb3
    PUSH EAX                            ; 00475cba
    MOV EDX,dword ptr [ESP + 0x148]     ; 00475cbb
    PUSH EDX                            ; 00475cc2
    PUSH EDI                            ; 00475cc3
    LEA EAX,[ESP + 0x10]                ; 00475cc4
    PUSH EAX                            ; 00475cc8
    MOV ECX,dword ptr [0x01bcd070]      ; 00475cc9 | DAT_01bcd070
    PUSH ECX                            ; 00475ccf
    ADD EBP,0x4                         ; 00475cd0
    CALL FUN_00490980                   ; 00475cd3
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined FUN_00490980()
    ADD ESP,0x18                        ; 00475cd8
    MOV EAX,dword ptr [EBP + 0x78]      ; 00475cdb
    MOV EDX,dword ptr [ESP + 0x144]     ; 00475cde
    MOV CL,byte ptr [ESI]               ; 00475ce5
    INC EDX                             ; 00475ce7
    ADD EDI,EAX                         ; 00475ce8
    MOV dword ptr [ESP + 0x144],EDX     ; 00475cea
    CMP BL,CL                           ; 00475cf1
    JZ 0x00475b51                       ; 00475cf3
        ;   XREF to: 00475b51 (CONDITIONAL_JUMP)  ; LAB_00475b51
    JMP 0x00475c78                      ; 00475cf9
        ;   XREF to: 00475c78 (UNCONDITIONAL_JUMP)  ; LAB_00475c78
    MOV EAX,[0x01bcde10]                ; 00475cfe | DAT_01bcde10
        ;   Label: LAB_00475cfe
    JMP 0x00475bc0                      ; 00475d03
        ;   XREF to: 00475bc0 (UNCONDITIONAL_JUMP)  ; LAB_00475bc0
    MOV EAX,[0x01bcde0c]                ; 00475d08 | DAT_01bcde0c
        ;   Label: LAB_00475d08
    MOV dword ptr [ESP + 0x13c],EAX     ; 00475d0d
    JMP 0x00475c63                      ; 00475d14
        ;   XREF to: 00475c63 (UNCONDITIONAL_JUMP)  ; LAB_00475c63
    MOV AL,byte ptr [EAX]               ; 00475d19
        ;   Label: LAB_00475d19
    MOV byte ptr [EDX],AL               ; 00475d1b
    INC EDX                             ; 00475d1d
    MOV BH,byte ptr [ECX]               ; 00475d1e
    MOV EAX,ECX                         ; 00475d20
    CMP BL,BH                           ; 00475d22
    JNZ 0x00475c8b                      ; 00475d24
        ;   XREF to: 00475c8b (CONDITIONAL_JUMP)  ; LAB_00475c8b
    MOV ESI,EAX                         ; 00475d2a
        ;   Label: LAB_00475d2a
    JMP 0x00475c9b                      ; 00475d2c
        ;   XREF to: 00475c9b (UNCONDITIONAL_JUMP)  ; LAB_00475c9b
    CMP EDX,0x2                         ; 00475d31
        ;   Label: LAB_00475d31
    JNZ 0x00475b35                      ; 00475d34
        ;   XREF to: 00475b35 (CONDITIONAL_JUMP)  ; LAB_00475b35
    MOV EDX,dword ptr [EAX + 0x11c]     ; 00475d3a
    MOV ESI,dword ptr [ESP + 0x160]     ; 00475d40
    MOV EAX,EDX                         ; 00475d47
    MOV EDI,dword ptr [ESI + 0x124]     ; 00475d49
    SAR EDX,0x1f                        ; 00475d4f
    IDIV EDI                            ; 00475d52
    MOV dword ptr [ESI + 0x138],EAX     ; 00475d54
    MOV EBP,dword ptr [ESI + 0x124]     ; 00475d5a
    MOV EAX,dword ptr [ESI]             ; 00475d60
    ADD EAX,EBP                         ; 00475d62
    LEA EDX,[EAX + -0x1]                ; 00475d64
    MOV EAX,EDX                         ; 00475d67
    SAR EDX,0x1f                        ; 00475d69
    IDIV EBP                            ; 00475d6c
    MOV dword ptr [ESI + 0x13c],EAX     ; 00475d6e
    MOV EAX,dword ptr [ESI + 0x12c]     ; 00475d74
    PUSH ECX                            ; 00475d7a
    MOV dword ptr [ESI + 0x140],EAX     ; 00475d7b
    JMP 0x00475b2d                      ; 00475d81
        ;   XREF to: 00475b2d (UNCONDITIONAL_JUMP)  ; LAB_00475b2d
    PUSH 0x1                            ; 00475d86
        ;   Label: LAB_00475d86
    MOV ECX,dword ptr [0x005b6d50]      ; 00475d88 | DAT_005b6d50
    PUSH ECX                            ; 00475d8e
    CALL FUN_004724e0                   ; 00475d8f
        ;   XREF to: 004724e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004724e0()
    ADD ESP,0x8                         ; 00475d94
    ADD ESP,0x14c                       ; 00475d97
    POP EBP                             ; 00475d9d
    POP EDI                             ; 00475d9e
    POP ESI                             ; 00475d9f
    POP EBX                             ; 00475da0
    RET                                 ; 00475da1

