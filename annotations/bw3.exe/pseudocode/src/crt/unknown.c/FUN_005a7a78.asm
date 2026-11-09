; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a7a78(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005a771c at 005a7854
;
; Referenced Globals:
;   void* switchdataD_005a7a68 = 005a7c43
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a7a78
        ;   Label: crt_unknown.c_FUN_005a7a78
    MOV EBP,ESP                         ; 005a7a79
    PUSH EBX                            ; 005a7a7b
    PUSH ESI                            ; 005a7a7c
    PUSH EDI                            ; 005a7a7d
    SUB ESP,0x8                         ; 005a7a7e
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7a81
    MOV EAX,dword ptr [EAX]             ; 005a7a84
    MOV dword ptr [EBP + -0x14],EAX     ; 005a7a86
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7a89
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a7a8c
    TEST EDX,EDX                        ; 005a7a8f
    JG 0x005a7a98                       ; 005a7a91
        ;   XREF to: 005a7a98 (CONDITIONAL_JUMP)  ; LAB_005a7a98
    ADD dword ptr [EBP + -0x14],EDX     ; 005a7a93
    JMP 0x005a7aa6                      ; 005a7a96
        ;   XREF to: 005a7aa6 (UNCONDITIONAL_JUMP)  ; LAB_005a7aa6
    MOV EBX,dword ptr [EBP + -0x14]     ; 005a7a98
        ;   Label: LAB_005a7a98
    SUB EBX,EDX                         ; 005a7a9b
    MOV dword ptr [EBP + -0x14],EBX     ; 005a7a9d
    LEA ECX,[EBX + 0x1]                 ; 005a7aa0
    MOV dword ptr [EBP + -0x14],ECX     ; 005a7aa3
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7aa6
        ;   Label: LAB_005a7aa6
    MOV DL,byte ptr [EAX + 0x8]         ; 005a7aa9
    XOR EBX,EBX                         ; 005a7aac
    TEST DL,0x4                         ; 005a7aae
    JZ 0x005a7ace                       ; 005a7ab1
        ;   XREF to: 005a7ace (CONDITIONAL_JUMP)  ; LAB_005a7ace
    MOV EAX,dword ptr [EBP + 0x10]      ; 005a7ab3
    CMP EAX,dword ptr [EBP + -0x14]     ; 005a7ab6
    JGE 0x005a7abe                      ; 005a7ab9
        ;   XREF to: 005a7abe (CONDITIONAL_JUMP)  ; LAB_005a7abe
    MOV dword ptr [EBP + -0x14],EAX     ; 005a7abb
    MOV EAX,dword ptr [EBP + -0x14]     ; 005a7abe
        ;   Label: LAB_005a7abe
    DEC EAX                             ; 005a7ac1
    MOV dword ptr [EBP + -0x14],EAX     ; 005a7ac2
    TEST EAX,EAX                        ; 005a7ac5
    JGE 0x005a7ace                      ; 005a7ac7
        ;   XREF to: 005a7ace (CONDITIONAL_JUMP)  ; LAB_005a7ace
    XOR ECX,ECX                         ; 005a7ac9
    MOV dword ptr [EBP + -0x14],ECX     ; 005a7acb
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7ace
        ;   Label: LAB_005a7ace
    MOV ESI,dword ptr [EAX + 0x4]       ; 005a7ad1
    TEST ESI,ESI                        ; 005a7ad4
    JG 0x005a7ae5                       ; 005a7ad6
        ;   XREF to: 005a7ae5 (CONDITIONAL_JUMP)  ; LAB_005a7ae5
    MOV ECX,dword ptr [EBP + 0x18]      ; 005a7ad8
    MOV EAX,EBX                         ; 005a7adb
    ADD EAX,ECX                         ; 005a7add
    INC EBX                             ; 005a7adf
    MOV byte ptr [EAX],0x30             ; 005a7ae0
    JMP 0x005a7b52                      ; 005a7ae3
        ;   XREF to: 005a7b52 (UNCONDITIONAL_JUMP)  ; LAB_005a7b52
    MOV EDI,dword ptr [EBP + 0x10]      ; 005a7ae5
        ;   Label: LAB_005a7ae5
    MOV dword ptr [EBP + -0x10],ESI     ; 005a7ae8
    CMP ESI,EDI                         ; 005a7aeb
    JLE 0x005a7af2                      ; 005a7aed
        ;   XREF to: 005a7af2 (CONDITIONAL_JUMP)  ; LAB_005a7af2
    MOV dword ptr [EBP + -0x10],EDI     ; 005a7aef
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a7af2
        ;   Label: LAB_005a7af2
    MOV ECX,dword ptr [EBP + -0x10]     ; 005a7af5
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a7af8
    ADD EDI,EBX                         ; 005a7afb
    MOV EDX,dword ptr [EBP + 0xc]       ; 005a7afd
    PUSH ES                             ; 005a7b00
    MOV AX,DS                           ; 005a7b01
    MOV ES,AX                           ; 005a7b03
    PUSH EDI                            ; 005a7b05
    MOV EAX,ECX                         ; 005a7b06
    SHR ECX,0x2                         ; 005a7b08
    MOVSD.REP ES:EDI,ESI                ; 005a7b0b
    MOV CL,AL                           ; 005a7b0d
    AND CL,0x3                          ; 005a7b0f
    MOVSB.REP ES:EDI,ESI                ; 005a7b12
    POP EDI                             ; 005a7b14
    POP ES                              ; 005a7b15
    MOV EAX,dword ptr [EBP + -0x10]     ; 005a7b16
    ADD EDX,EAX                         ; 005a7b19
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a7b1b
    MOV dword ptr [EBP + 0xc],EDX       ; 005a7b1e
    MOV EDX,dword ptr [EBP + 0x8]       ; 005a7b21
    ADD EBX,EAX                         ; 005a7b24
    SUB ECX,EAX                         ; 005a7b26
    MOV ESI,dword ptr [EDX + 0x4]       ; 005a7b28
    MOV dword ptr [EBP + 0x10],ECX      ; 005a7b2b
    CMP EAX,ESI                         ; 005a7b2e
    JGE 0x005a7b52                      ; 005a7b30
        ;   XREF to: 005a7b52 (CONDITIONAL_JUMP)  ; LAB_005a7b52
    MOV EDI,dword ptr [EBP + -0x10]     ; 005a7b32
    MOV EAX,ESI                         ; 005a7b35
    SUB EAX,EDI                         ; 005a7b37
    PUSH EAX                            ; 005a7b39
    MOV dword ptr [EBP + -0x10],EAX     ; 005a7b3a
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a7b3d
    PUSH 0x30                           ; 005a7b40
    ADD EAX,EBX                         ; 005a7b42
    PUSH EAX                            ; 005a7b44
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005a7b45
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBP + -0x10]     ; 005a7b4a
    ADD ESP,0xc                         ; 005a7b4d
    ADD EBX,EDX                         ; 005a7b50
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7b52
        ;   Label: LAB_005a7b52
    MOV DH,byte ptr [EAX + 0x8]         ; 005a7b55
    MOV dword ptr [EAX + 0x18],EBX      ; 005a7b58
    TEST DH,0x8                         ; 005a7b5b
    JNZ 0x005a7b76                      ; 005a7b5e
        ;   XREF to: 005a7b76 (CONDITIONAL_JUMP)  ; LAB_005a7b76
    CMP dword ptr [EBP + -0x14],0x0     ; 005a7b60
    JG 0x005a7b6b                       ; 005a7b64
        ;   XREF to: 005a7b6b (CONDITIONAL_JUMP)  ; LAB_005a7b6b
    TEST DH,0x10                        ; 005a7b66
    JZ 0x005a7b76                       ; 005a7b69
        ;   XREF to: 005a7b76 (CONDITIONAL_JUMP)  ; LAB_005a7b76
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a7b6b
        ;   Label: LAB_005a7b6b
    MOV EAX,EBX                         ; 005a7b6e
    ADD EAX,EDI                         ; 005a7b70
    INC EBX                             ; 005a7b72
    MOV byte ptr [EAX],0x2e             ; 005a7b73
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7b76
        ;   Label: LAB_005a7b76
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a7b79
    TEST EDX,EDX                        ; 005a7b7c
    JGE 0x005a7ba1                      ; 005a7b7e
        ;   XREF to: 005a7ba1 (CONDITIONAL_JUMP)  ; LAB_005a7ba1
    MOV ECX,EDX                         ; 005a7b80
    NEG ECX                             ; 005a7b82
    PUSH ECX                            ; 005a7b84
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a7b85
    MOV dword ptr [EBP + -0x10],EDX     ; 005a7b88
    PUSH 0x30                           ; 005a7b8b
    ADD EAX,EBX                         ; 005a7b8d
    MOV ESI,ECX                         ; 005a7b8f
    PUSH EAX                            ; 005a7b91
    MOV dword ptr [EBP + -0x10],ECX     ; 005a7b92
    MOV EDI,ESI                         ; 005a7b95
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005a7b97
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD EBX,EDI                         ; 005a7b9c
    ADD ESP,0xc                         ; 005a7b9e
    MOV EAX,dword ptr [EBP + -0x14]     ; 005a7ba1
        ;   Label: LAB_005a7ba1
    TEST EAX,EAX                        ; 005a7ba4
    JLE 0x005a7bec                      ; 005a7ba6
        ;   XREF to: 005a7bec (CONDITIONAL_JUMP)  ; LAB_005a7bec
    CMP EAX,dword ptr [EBP + 0x10]      ; 005a7ba8
    JGE 0x005a7bb0                      ; 005a7bab
        ;   XREF to: 005a7bb0 (CONDITIONAL_JUMP)  ; LAB_005a7bb0
    MOV dword ptr [EBP + 0x10],EAX      ; 005a7bad
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a7bb0
        ;   Label: LAB_005a7bb0
    TEST ECX,ECX                        ; 005a7bb3
    JZ 0x005a7bd8                       ; 005a7bb5
        ;   XREF to: 005a7bd8 (CONDITIONAL_JUMP)  ; LAB_005a7bd8
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a7bb7
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a7bba
    ADD EDI,EBX                         ; 005a7bbd
    PUSH ES                             ; 005a7bbf
    MOV AX,DS                           ; 005a7bc0
    MOV ES,AX                           ; 005a7bc2
    PUSH EDI                            ; 005a7bc4
    MOV EAX,ECX                         ; 005a7bc5
    SHR ECX,0x2                         ; 005a7bc7
    MOVSD.REP ES:EDI,ESI                ; 005a7bca
    MOV CL,AL                           ; 005a7bcc
    AND CL,0x3                          ; 005a7bce
    MOVSB.REP ES:EDI,ESI                ; 005a7bd1
    POP EDI                             ; 005a7bd3
    POP ES                              ; 005a7bd4
    ADD EBX,dword ptr [EBP + 0x10]      ; 005a7bd5
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7bd8
        ;   Label: LAB_005a7bd8
    MOV EDI,dword ptr [EBP + 0x10]      ; 005a7bdb
    MOV dword ptr [EAX + 0x1c],EBX      ; 005a7bde
    MOV EAX,dword ptr [EBP + -0x14]     ; 005a7be1
    MOV EDX,dword ptr [EBP + 0x8]       ; 005a7be4
    SUB EAX,EDI                         ; 005a7be7
    MOV dword ptr [EDX + 0x20],EAX      ; 005a7be9
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7bec
        ;   Label: LAB_005a7bec
    CMP dword ptr [EAX + 0xc],0x0       ; 005a7bef
    JZ 0x005a7c05                       ; 005a7bf3
        ;   XREF to: 005a7c05 (CONDITIONAL_JUMP)  ; LAB_005a7c05
    MOV ECX,dword ptr [EBP + 0x18]      ; 005a7bf5
    MOV EAX,EBX                         ; 005a7bf8
    MOV EDX,dword ptr [EBP + 0x8]       ; 005a7bfa
    ADD EAX,ECX                         ; 005a7bfd
    MOV DL,byte ptr [EDX + 0xc]         ; 005a7bff
    INC EBX                             ; 005a7c02
    MOV byte ptr [EAX],DL               ; 005a7c03
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a7c05
        ;   Label: LAB_005a7c05
    LEA EAX,[EBX + 0x1]                 ; 005a7c08
    TEST ESI,ESI                        ; 005a7c0b
    JL 0x005a7c1c                       ; 005a7c0d
        ;   XREF to: 005a7c1c (CONDITIONAL_JUMP)  ; LAB_005a7c1c
    MOV EDX,EBX                         ; 005a7c0f
    MOV EBX,EAX                         ; 005a7c11
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a7c13
    MOV byte ptr [EDX + EAX*0x1],0x2b   ; 005a7c16
    JMP 0x005a7c2e                      ; 005a7c1a
        ;   XREF to: 005a7c2e (UNCONDITIONAL_JUMP)  ; LAB_005a7c2e
    MOV EDX,EBX                         ; 005a7c1c
        ;   Label: LAB_005a7c1c
    MOV EDI,ESI                         ; 005a7c1e
    MOV EBX,EAX                         ; 005a7c20
    NEG EDI                             ; 005a7c22
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a7c24
    MOV dword ptr [EBP + 0x14],EDI      ; 005a7c27
    MOV byte ptr [EDX + EAX*0x1],0x2d   ; 005a7c2a
    MOV ECX,dword ptr [EBP + 0x8]       ; 005a7c2e
        ;   Label: LAB_005a7c2e
    MOV ECX,dword ptr [ECX + 0x10]      ; 005a7c31
    CMP ECX,0x3                         ; 005a7c34
    JA 0x005a7c77                       ; 005a7c37
        ;   XREF to: 005a7c77 (CONDITIONAL_JUMP)  ; default
    MOV EAX,ECX                         ; 005a7c39
    JMP dword ptr CS:[EAX*0x4 + 0x5a7a68] ; 005a7c3b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBP + 0x14],0x3e8    ; 005a7c43
        ;   Label: caseD_0
    JGE 0x005a7c72                      ; 005a7c4a
        ;   XREF to: 005a7c72 (CONDITIONAL_JUMP)  ; LAB_005a7c72
    MOV ECX,0x3                         ; 005a7c4c
    JMP 0x005a7c77                      ; 005a7c51
        ;   XREF to: 005a7c77 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x14],0xa      ; 005a7c53
        ;   Label: caseD_1
    JL 0x005a7c5e                       ; 005a7c57
        ;   XREF to: 005a7c5e (CONDITIONAL_JUMP)  ; caseD_2
    MOV ECX,0x2                         ; 005a7c59
    CMP dword ptr [EBP + 0x14],0x64     ; 005a7c5e
        ;   Label: caseD_2
    JL 0x005a7c69                       ; 005a7c62
        ;   XREF to: 005a7c69 (CONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,0x3                         ; 005a7c64
    CMP dword ptr [EBP + 0x14],0x3e8    ; 005a7c69
        ;   Label: caseD_3
    JL 0x005a7c77                       ; 005a7c70
        ;   XREF to: 005a7c77 (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x4                         ; 005a7c72
        ;   Label: LAB_005a7c72
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7c77
        ;   Label: default
    MOV dword ptr [EAX + 0x10],ECX      ; 005a7c7a
    CMP ECX,0x4                         ; 005a7c7d
    JL 0x005a7cc8                       ; 005a7c80
        ;   XREF to: 005a7cc8 (CONDITIONAL_JUMP)  ; LAB_005a7cc8
    XOR EAX,EAX                         ; 005a7c82
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a7c84
    MOV dword ptr [EBP + -0x10],EAX     ; 005a7c87
    CMP EDX,0x3e8                       ; 005a7c8a
    JL 0x005a7cb8                       ; 005a7c90
        ;   XREF to: 005a7cb8 (CONDITIONAL_JUMP)  ; LAB_005a7cb8
    MOV EDI,0x3e8                       ; 005a7c92
    MOV EAX,EDX                         ; 005a7c97
    SAR EDX,0x1f                        ; 005a7c99
    IDIV EDI                            ; 005a7c9c
    MOV dword ptr [EBP + -0x10],EAX     ; 005a7c9e
    MOV EDX,EAX                         ; 005a7ca1
    SHL EAX,0x5                         ; 005a7ca3
    SUB EAX,EDX                         ; 005a7ca6
    SHL EAX,0x2                         ; 005a7ca8
    ADD EAX,EDX                         ; 005a7cab
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a7cad
    SHL EAX,0x3                         ; 005a7cb0
    SUB ESI,EAX                         ; 005a7cb3
    MOV dword ptr [EBP + 0x14],ESI      ; 005a7cb5
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a7cb8
        ;   Label: LAB_005a7cb8
    MOV EAX,EBX                         ; 005a7cbb
    MOV DL,byte ptr [EBP + -0x10]       ; 005a7cbd
    ADD EAX,EDI                         ; 005a7cc0
    ADD DL,0x30                         ; 005a7cc2
    INC EBX                             ; 005a7cc5
    MOV byte ptr [EAX],DL               ; 005a7cc6
    CMP ECX,0x3                         ; 005a7cc8
        ;   Label: LAB_005a7cc8
    JL 0x005a7d10                       ; 005a7ccb
        ;   XREF to: 005a7d10 (CONDITIONAL_JUMP)  ; LAB_005a7d10
    XOR EAX,EAX                         ; 005a7ccd
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a7ccf
    MOV dword ptr [EBP + -0x10],EAX     ; 005a7cd2
    CMP EDX,0x64                        ; 005a7cd5
    JL 0x005a7d00                       ; 005a7cd8
        ;   XREF to: 005a7d00 (CONDITIONAL_JUMP)  ; LAB_005a7d00
    MOV EDI,0x64                        ; 005a7cda
    MOV EAX,EDX                         ; 005a7cdf
    SAR EDX,0x1f                        ; 005a7ce1
    IDIV EDI                            ; 005a7ce4
    MOV dword ptr [EBP + -0x10],EAX     ; 005a7ce6
    MOV EDX,EAX                         ; 005a7ce9
    SHL EAX,0x2                         ; 005a7ceb
    SUB EAX,EDX                         ; 005a7cee
    SHL EAX,0x3                         ; 005a7cf0
    ADD EAX,EDX                         ; 005a7cf3
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a7cf5
    SHL EAX,0x2                         ; 005a7cf8
    SUB ESI,EAX                         ; 005a7cfb
    MOV dword ptr [EBP + 0x14],ESI      ; 005a7cfd
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a7d00
        ;   Label: LAB_005a7d00
    MOV EAX,EBX                         ; 005a7d03
    MOV DL,byte ptr [EBP + -0x10]       ; 005a7d05
    ADD EAX,EDI                         ; 005a7d08
    ADD DL,0x30                         ; 005a7d0a
    INC EBX                             ; 005a7d0d
    MOV byte ptr [EAX],DL               ; 005a7d0e
    CMP ECX,0x2                         ; 005a7d10
        ;   Label: LAB_005a7d10
    JL 0x005a7d52                       ; 005a7d13
        ;   XREF to: 005a7d52 (CONDITIONAL_JUMP)  ; LAB_005a7d52
    XOR EAX,EAX                         ; 005a7d15
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a7d17
    MOV dword ptr [EBP + -0x10],EAX     ; 005a7d1a
    CMP EDX,0xa                         ; 005a7d1d
    JL 0x005a7d42                       ; 005a7d20
        ;   XREF to: 005a7d42 (CONDITIONAL_JUMP)  ; LAB_005a7d42
    MOV ECX,0xa                         ; 005a7d22
    MOV EAX,EDX                         ; 005a7d27
    SAR EDX,0x1f                        ; 005a7d29
    IDIV ECX                            ; 005a7d2c
    MOV dword ptr [EBP + -0x10],EAX     ; 005a7d2e
    MOV EDX,EAX                         ; 005a7d31
    SHL EAX,0x2                         ; 005a7d33
    ADD EAX,EDX                         ; 005a7d36
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a7d38
    ADD EAX,EAX                         ; 005a7d3b
    SUB ECX,EAX                         ; 005a7d3d
    MOV dword ptr [EBP + 0x14],ECX      ; 005a7d3f
    MOV ESI,dword ptr [EBP + 0x18]      ; 005a7d42
        ;   Label: LAB_005a7d42
    MOV EAX,EBX                         ; 005a7d45
    MOV DL,byte ptr [EBP + -0x10]       ; 005a7d47
    ADD EAX,ESI                         ; 005a7d4a
    ADD DL,0x30                         ; 005a7d4c
    INC EBX                             ; 005a7d4f
    MOV byte ptr [EAX],DL               ; 005a7d50
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a7d52
        ;   Label: LAB_005a7d52
    MOV EAX,EBX                         ; 005a7d55
    MOV DL,byte ptr [EBP + 0x14]        ; 005a7d57
    ADD EAX,EDI                         ; 005a7d5a
    ADD DL,0x30                         ; 005a7d5c
    INC EBX                             ; 005a7d5f
    MOV byte ptr [EAX],DL               ; 005a7d60
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7d62
    MOV EDX,EBX                         ; 005a7d65
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005a7d67
    SUB EDX,EAX                         ; 005a7d6a
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a7d6c
    ADD EBX,EDI                         ; 005a7d6f
    MOV dword ptr [EAX + 0x24],EDX      ; 005a7d71
    JMP 0x005a7a5b                      ; 005a7d74
        ;   XREF to: 005a7a5b (UNCONDITIONAL_JUMP)  ; LAB_005a7a5b

