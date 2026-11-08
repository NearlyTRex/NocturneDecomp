; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c4c08(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c48ac at 005c49e4
;
; Referenced Globals:
;   void* switchdataD_005c4bf8 = 005c4dd3
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c4c08
        ;   Label: FUN_005c4c08
    MOV EBP,ESP                         ; 005c4c09
    PUSH EBX                            ; 005c4c0b
    PUSH ESI                            ; 005c4c0c
    PUSH EDI                            ; 005c4c0d
    SUB ESP,0x8                         ; 005c4c0e
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4c11
    MOV EAX,dword ptr [EAX]             ; 005c4c14
    MOV dword ptr [EBP + -0x14],EAX     ; 005c4c16
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4c19
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c4c1c
    TEST EDX,EDX                        ; 005c4c1f
    JG 0x005c4c28                       ; 005c4c21
        ;   XREF to: 005c4c28 (CONDITIONAL_JUMP)  ; LAB_005c4c28
    ADD dword ptr [EBP + -0x14],EDX     ; 005c4c23
    JMP 0x005c4c36                      ; 005c4c26
        ;   XREF to: 005c4c36 (UNCONDITIONAL_JUMP)  ; LAB_005c4c36
    MOV EBX,dword ptr [EBP + -0x14]     ; 005c4c28
        ;   Label: LAB_005c4c28
    SUB EBX,EDX                         ; 005c4c2b
    MOV dword ptr [EBP + -0x14],EBX     ; 005c4c2d
    LEA ECX,[EBX + 0x1]                 ; 005c4c30
    MOV dword ptr [EBP + -0x14],ECX     ; 005c4c33
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4c36
        ;   Label: LAB_005c4c36
    MOV DL,byte ptr [EAX + 0x8]         ; 005c4c39
    XOR EBX,EBX                         ; 005c4c3c
    TEST DL,0x4                         ; 005c4c3e
    JZ 0x005c4c5e                       ; 005c4c41
        ;   XREF to: 005c4c5e (CONDITIONAL_JUMP)  ; LAB_005c4c5e
    MOV EAX,dword ptr [EBP + 0x10]      ; 005c4c43
    CMP EAX,dword ptr [EBP + -0x14]     ; 005c4c46
    JGE 0x005c4c4e                      ; 005c4c49
        ;   XREF to: 005c4c4e (CONDITIONAL_JUMP)  ; LAB_005c4c4e
    MOV dword ptr [EBP + -0x14],EAX     ; 005c4c4b
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c4c4e
        ;   Label: LAB_005c4c4e
    DEC EAX                             ; 005c4c51
    MOV dword ptr [EBP + -0x14],EAX     ; 005c4c52
    TEST EAX,EAX                        ; 005c4c55
    JGE 0x005c4c5e                      ; 005c4c57
        ;   XREF to: 005c4c5e (CONDITIONAL_JUMP)  ; LAB_005c4c5e
    XOR ECX,ECX                         ; 005c4c59
    MOV dword ptr [EBP + -0x14],ECX     ; 005c4c5b
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4c5e
        ;   Label: LAB_005c4c5e
    MOV ESI,dword ptr [EAX + 0x4]       ; 005c4c61
    TEST ESI,ESI                        ; 005c4c64
    JG 0x005c4c75                       ; 005c4c66
        ;   XREF to: 005c4c75 (CONDITIONAL_JUMP)  ; LAB_005c4c75
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c4c68
    MOV EAX,EBX                         ; 005c4c6b
    ADD EAX,ECX                         ; 005c4c6d
    INC EBX                             ; 005c4c6f
    MOV byte ptr [EAX],0x30             ; 005c4c70
    JMP 0x005c4ce2                      ; 005c4c73
        ;   XREF to: 005c4ce2 (UNCONDITIONAL_JUMP)  ; LAB_005c4ce2
    MOV EDI,dword ptr [EBP + 0x10]      ; 005c4c75
        ;   Label: LAB_005c4c75
    MOV dword ptr [EBP + -0x10],ESI     ; 005c4c78
    CMP ESI,EDI                         ; 005c4c7b
    JLE 0x005c4c82                      ; 005c4c7d
        ;   XREF to: 005c4c82 (CONDITIONAL_JUMP)  ; LAB_005c4c82
    MOV dword ptr [EBP + -0x10],EDI     ; 005c4c7f
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4c82
        ;   Label: LAB_005c4c82
    MOV ECX,dword ptr [EBP + -0x10]     ; 005c4c85
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c4c88
    ADD EDI,EBX                         ; 005c4c8b
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c4c8d
    PUSH ES                             ; 005c4c90
    MOV AX,DS                           ; 005c4c91
    MOV ES,AX                           ; 005c4c93
    PUSH EDI                            ; 005c4c95
    MOV EAX,ECX                         ; 005c4c96
    SHR ECX,0x2                         ; 005c4c98
    MOVSD.REP ES:EDI,ESI                ; 005c4c9b
    MOV CL,AL                           ; 005c4c9d
    AND CL,0x3                          ; 005c4c9f
    MOVSB.REP ES:EDI,ESI                ; 005c4ca2
    POP EDI                             ; 005c4ca4
    POP ES                              ; 005c4ca5
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c4ca6
    ADD EDX,EAX                         ; 005c4ca9
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c4cab
    MOV dword ptr [EBP + 0xc],EDX       ; 005c4cae
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c4cb1
    ADD EBX,EAX                         ; 005c4cb4
    SUB ECX,EAX                         ; 005c4cb6
    MOV ESI,dword ptr [EDX + 0x4]       ; 005c4cb8
    MOV dword ptr [EBP + 0x10],ECX      ; 005c4cbb
    CMP EAX,ESI                         ; 005c4cbe
    JGE 0x005c4ce2                      ; 005c4cc0
        ;   XREF to: 005c4ce2 (CONDITIONAL_JUMP)  ; LAB_005c4ce2
    MOV EDI,dword ptr [EBP + -0x10]     ; 005c4cc2
    MOV EAX,ESI                         ; 005c4cc5
    SUB EAX,EDI                         ; 005c4cc7
    PUSH EAX                            ; 005c4cc9
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4cca
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c4ccd
    PUSH 0x30                           ; 005c4cd0
    ADD EAX,EBX                         ; 005c4cd2
    PUSH EAX                            ; 005c4cd4
    CALL FUN_005bfb70                   ; 005c4cd5
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV EDX,dword ptr [EBP + -0x10]     ; 005c4cda
    ADD ESP,0xc                         ; 005c4cdd
    ADD EBX,EDX                         ; 005c4ce0
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4ce2
        ;   Label: LAB_005c4ce2
    MOV DH,byte ptr [EAX + 0x8]         ; 005c4ce5
    MOV dword ptr [EAX + 0x18],EBX      ; 005c4ce8
    TEST DH,0x8                         ; 005c4ceb
    JNZ 0x005c4d06                      ; 005c4cee
        ;   XREF to: 005c4d06 (CONDITIONAL_JUMP)  ; LAB_005c4d06
    CMP dword ptr [EBP + -0x14],0x0     ; 005c4cf0
    JG 0x005c4cfb                       ; 005c4cf4
        ;   XREF to: 005c4cfb (CONDITIONAL_JUMP)  ; LAB_005c4cfb
    TEST DH,0x10                        ; 005c4cf6
    JZ 0x005c4d06                       ; 005c4cf9
        ;   XREF to: 005c4d06 (CONDITIONAL_JUMP)  ; LAB_005c4d06
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4cfb
        ;   Label: LAB_005c4cfb
    MOV EAX,EBX                         ; 005c4cfe
    ADD EAX,EDI                         ; 005c4d00
    INC EBX                             ; 005c4d02
    MOV byte ptr [EAX],0x2e             ; 005c4d03
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4d06
        ;   Label: LAB_005c4d06
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c4d09
    TEST EDX,EDX                        ; 005c4d0c
    JGE 0x005c4d31                      ; 005c4d0e
        ;   XREF to: 005c4d31 (CONDITIONAL_JUMP)  ; LAB_005c4d31
    MOV ECX,EDX                         ; 005c4d10
    NEG ECX                             ; 005c4d12
    PUSH ECX                            ; 005c4d14
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c4d15
    MOV dword ptr [EBP + -0x10],EDX     ; 005c4d18
    PUSH 0x30                           ; 005c4d1b
    ADD EAX,EBX                         ; 005c4d1d
    MOV ESI,ECX                         ; 005c4d1f
    PUSH EAX                            ; 005c4d21
    MOV dword ptr [EBP + -0x10],ECX     ; 005c4d22
    MOV EDI,ESI                         ; 005c4d25
    CALL FUN_005bfb70                   ; 005c4d27
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD EBX,EDI                         ; 005c4d2c
    ADD ESP,0xc                         ; 005c4d2e
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c4d31
        ;   Label: LAB_005c4d31
    TEST EAX,EAX                        ; 005c4d34
    JLE 0x005c4d7c                      ; 005c4d36
        ;   XREF to: 005c4d7c (CONDITIONAL_JUMP)  ; LAB_005c4d7c
    CMP EAX,dword ptr [EBP + 0x10]      ; 005c4d38
    JGE 0x005c4d40                      ; 005c4d3b
        ;   XREF to: 005c4d40 (CONDITIONAL_JUMP)  ; LAB_005c4d40
    MOV dword ptr [EBP + 0x10],EAX      ; 005c4d3d
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c4d40
        ;   Label: LAB_005c4d40
    TEST ECX,ECX                        ; 005c4d43
    JZ 0x005c4d68                       ; 005c4d45
        ;   XREF to: 005c4d68 (CONDITIONAL_JUMP)  ; LAB_005c4d68
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4d47
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c4d4a
    ADD EDI,EBX                         ; 005c4d4d
    PUSH ES                             ; 005c4d4f
    MOV AX,DS                           ; 005c4d50
    MOV ES,AX                           ; 005c4d52
    PUSH EDI                            ; 005c4d54
    MOV EAX,ECX                         ; 005c4d55
    SHR ECX,0x2                         ; 005c4d57
    MOVSD.REP ES:EDI,ESI                ; 005c4d5a
    MOV CL,AL                           ; 005c4d5c
    AND CL,0x3                          ; 005c4d5e
    MOVSB.REP ES:EDI,ESI                ; 005c4d61
    POP EDI                             ; 005c4d63
    POP ES                              ; 005c4d64
    ADD EBX,dword ptr [EBP + 0x10]      ; 005c4d65
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4d68
        ;   Label: LAB_005c4d68
    MOV EDI,dword ptr [EBP + 0x10]      ; 005c4d6b
    MOV dword ptr [EAX + 0x1c],EBX      ; 005c4d6e
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c4d71
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c4d74
    SUB EAX,EDI                         ; 005c4d77
    MOV dword ptr [EDX + 0x20],EAX      ; 005c4d79
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4d7c
        ;   Label: LAB_005c4d7c
    CMP dword ptr [EAX + 0xc],0x0       ; 005c4d7f
    JZ 0x005c4d95                       ; 005c4d83
        ;   XREF to: 005c4d95 (CONDITIONAL_JUMP)  ; LAB_005c4d95
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c4d85
    MOV EAX,EBX                         ; 005c4d88
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c4d8a
    ADD EAX,ECX                         ; 005c4d8d
    MOV DL,byte ptr [EDX + 0xc]         ; 005c4d8f
    INC EBX                             ; 005c4d92
    MOV byte ptr [EAX],DL               ; 005c4d93
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4d95
        ;   Label: LAB_005c4d95
    LEA EAX,[EBX + 0x1]                 ; 005c4d98
    TEST ESI,ESI                        ; 005c4d9b
    JL 0x005c4dac                       ; 005c4d9d
        ;   XREF to: 005c4dac (CONDITIONAL_JUMP)  ; LAB_005c4dac
    MOV EDX,EBX                         ; 005c4d9f
    MOV EBX,EAX                         ; 005c4da1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c4da3
    MOV byte ptr [EDX + EAX*0x1],0x2b   ; 005c4da6
    JMP 0x005c4dbe                      ; 005c4daa
        ;   XREF to: 005c4dbe (UNCONDITIONAL_JUMP)  ; LAB_005c4dbe
    MOV EDX,EBX                         ; 005c4dac
        ;   Label: LAB_005c4dac
    MOV EDI,ESI                         ; 005c4dae
    MOV EBX,EAX                         ; 005c4db0
    NEG EDI                             ; 005c4db2
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c4db4
    MOV dword ptr [EBP + 0x14],EDI      ; 005c4db7
    MOV byte ptr [EDX + EAX*0x1],0x2d   ; 005c4dba
    MOV ECX,dword ptr [EBP + 0x8]       ; 005c4dbe
        ;   Label: LAB_005c4dbe
    MOV ECX,dword ptr [ECX + 0x10]      ; 005c4dc1
    CMP ECX,0x3                         ; 005c4dc4
    JA 0x005c4e07                       ; 005c4dc7
        ;   XREF to: 005c4e07 (CONDITIONAL_JUMP)  ; default
    MOV EAX,ECX                         ; 005c4dc9
    JMP dword ptr CS:[EAX*0x4 + 0x5c4bf8] ; 005c4dcb | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBP + 0x14],0x3e8    ; 005c4dd3
        ;   Label: caseD_0
    JGE 0x005c4e02                      ; 005c4dda
        ;   XREF to: 005c4e02 (CONDITIONAL_JUMP)  ; LAB_005c4e02
    MOV ECX,0x3                         ; 005c4ddc
    JMP 0x005c4e07                      ; 005c4de1
        ;   XREF to: 005c4e07 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x14],0xa      ; 005c4de3
        ;   Label: caseD_1
    JL 0x005c4dee                       ; 005c4de7
        ;   XREF to: 005c4dee (CONDITIONAL_JUMP)  ; caseD_2
    MOV ECX,0x2                         ; 005c4de9
    CMP dword ptr [EBP + 0x14],0x64     ; 005c4dee
        ;   Label: caseD_2
    JL 0x005c4df9                       ; 005c4df2
        ;   XREF to: 005c4df9 (CONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,0x3                         ; 005c4df4
    CMP dword ptr [EBP + 0x14],0x3e8    ; 005c4df9
        ;   Label: caseD_3
    JL 0x005c4e07                       ; 005c4e00
        ;   XREF to: 005c4e07 (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x4                         ; 005c4e02
        ;   Label: LAB_005c4e02
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4e07
        ;   Label: default
    MOV dword ptr [EAX + 0x10],ECX      ; 005c4e0a
    CMP ECX,0x4                         ; 005c4e0d
    JL 0x005c4e58                       ; 005c4e10
        ;   XREF to: 005c4e58 (CONDITIONAL_JUMP)  ; LAB_005c4e58
    XOR EAX,EAX                         ; 005c4e12
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c4e14
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4e17
    CMP EDX,0x3e8                       ; 005c4e1a
    JL 0x005c4e48                       ; 005c4e20
        ;   XREF to: 005c4e48 (CONDITIONAL_JUMP)  ; LAB_005c4e48
    MOV EDI,0x3e8                       ; 005c4e22
    MOV EAX,EDX                         ; 005c4e27
    SAR EDX,0x1f                        ; 005c4e29
    IDIV EDI                            ; 005c4e2c
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4e2e
    MOV EDX,EAX                         ; 005c4e31
    SHL EAX,0x5                         ; 005c4e33
    SUB EAX,EDX                         ; 005c4e36
    SHL EAX,0x2                         ; 005c4e38
    ADD EAX,EDX                         ; 005c4e3b
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4e3d
    SHL EAX,0x3                         ; 005c4e40
    SUB ESI,EAX                         ; 005c4e43
    MOV dword ptr [EBP + 0x14],ESI      ; 005c4e45
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4e48
        ;   Label: LAB_005c4e48
    MOV EAX,EBX                         ; 005c4e4b
    MOV DL,byte ptr [EBP + -0x10]       ; 005c4e4d
    ADD EAX,EDI                         ; 005c4e50
    ADD DL,0x30                         ; 005c4e52
    INC EBX                             ; 005c4e55
    MOV byte ptr [EAX],DL               ; 005c4e56
    CMP ECX,0x3                         ; 005c4e58
        ;   Label: LAB_005c4e58
    JL 0x005c4ea0                       ; 005c4e5b
        ;   XREF to: 005c4ea0 (CONDITIONAL_JUMP)  ; LAB_005c4ea0
    XOR EAX,EAX                         ; 005c4e5d
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c4e5f
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4e62
    CMP EDX,0x64                        ; 005c4e65
    JL 0x005c4e90                       ; 005c4e68
        ;   XREF to: 005c4e90 (CONDITIONAL_JUMP)  ; LAB_005c4e90
    MOV EDI,0x64                        ; 005c4e6a
    MOV EAX,EDX                         ; 005c4e6f
    SAR EDX,0x1f                        ; 005c4e71
    IDIV EDI                            ; 005c4e74
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4e76
    MOV EDX,EAX                         ; 005c4e79
    SHL EAX,0x2                         ; 005c4e7b
    SUB EAX,EDX                         ; 005c4e7e
    SHL EAX,0x3                         ; 005c4e80
    ADD EAX,EDX                         ; 005c4e83
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4e85
    SHL EAX,0x2                         ; 005c4e88
    SUB ESI,EAX                         ; 005c4e8b
    MOV dword ptr [EBP + 0x14],ESI      ; 005c4e8d
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4e90
        ;   Label: LAB_005c4e90
    MOV EAX,EBX                         ; 005c4e93
    MOV DL,byte ptr [EBP + -0x10]       ; 005c4e95
    ADD EAX,EDI                         ; 005c4e98
    ADD DL,0x30                         ; 005c4e9a
    INC EBX                             ; 005c4e9d
    MOV byte ptr [EAX],DL               ; 005c4e9e
    CMP ECX,0x2                         ; 005c4ea0
        ;   Label: LAB_005c4ea0
    JL 0x005c4ee2                       ; 005c4ea3
        ;   XREF to: 005c4ee2 (CONDITIONAL_JUMP)  ; LAB_005c4ee2
    XOR EAX,EAX                         ; 005c4ea5
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c4ea7
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4eaa
    CMP EDX,0xa                         ; 005c4ead
    JL 0x005c4ed2                       ; 005c4eb0
        ;   XREF to: 005c4ed2 (CONDITIONAL_JUMP)  ; LAB_005c4ed2
    MOV ECX,0xa                         ; 005c4eb2
    MOV EAX,EDX                         ; 005c4eb7
    SAR EDX,0x1f                        ; 005c4eb9
    IDIV ECX                            ; 005c4ebc
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4ebe
    MOV EDX,EAX                         ; 005c4ec1
    SHL EAX,0x2                         ; 005c4ec3
    ADD EAX,EDX                         ; 005c4ec6
    MOV ECX,dword ptr [EBP + 0x14]      ; 005c4ec8
    ADD EAX,EAX                         ; 005c4ecb
    SUB ECX,EAX                         ; 005c4ecd
    MOV dword ptr [EBP + 0x14],ECX      ; 005c4ecf
    MOV ESI,dword ptr [EBP + 0x18]      ; 005c4ed2
        ;   Label: LAB_005c4ed2
    MOV EAX,EBX                         ; 005c4ed5
    MOV DL,byte ptr [EBP + -0x10]       ; 005c4ed7
    ADD EAX,ESI                         ; 005c4eda
    ADD DL,0x30                         ; 005c4edc
    INC EBX                             ; 005c4edf
    MOV byte ptr [EAX],DL               ; 005c4ee0
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4ee2
        ;   Label: LAB_005c4ee2
    MOV EAX,EBX                         ; 005c4ee5
    MOV DL,byte ptr [EBP + 0x14]        ; 005c4ee7
    ADD EAX,EDI                         ; 005c4eea
    ADD DL,0x30                         ; 005c4eec
    INC EBX                             ; 005c4eef
    MOV byte ptr [EAX],DL               ; 005c4ef0
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4ef2
    MOV EDX,EBX                         ; 005c4ef5
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005c4ef7
    SUB EDX,EAX                         ; 005c4efa
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c4efc
    ADD EBX,EDI                         ; 005c4eff
    MOV dword ptr [EAX + 0x24],EDX      ; 005c4f01
    JMP 0x005c4beb                      ; 005c4f04
        ;   XREF to: 005c4beb (UNCONDITIONAL_JUMP)  ; LAB_005c4beb

