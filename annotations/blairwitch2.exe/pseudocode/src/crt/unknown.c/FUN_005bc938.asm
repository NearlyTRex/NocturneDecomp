; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc938(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005bc5dc at 005bc714
;
; Referenced Globals:
;   void* switchdataD_005bc928 = 005bcb03
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc938
        ;   Label: crt_unknown.c_FUN_005bc938
    MOV EBP,ESP                         ; 005bc939
    PUSH EBX                            ; 005bc93b
    PUSH ESI                            ; 005bc93c
    PUSH EDI                            ; 005bc93d
    SUB ESP,0x8                         ; 005bc93e
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bc941
    MOV EAX,dword ptr [EAX]             ; 005bc944
    MOV dword ptr [EBP + -0x14],EAX     ; 005bc946
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bc949
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bc94c
    TEST EDX,EDX                        ; 005bc94f
    JG 0x005bc958                       ; 005bc951
        ;   XREF to: 005bc958 (CONDITIONAL_JUMP)  ; LAB_005bc958
    ADD dword ptr [EBP + -0x14],EDX     ; 005bc953
    JMP 0x005bc966                      ; 005bc956
        ;   XREF to: 005bc966 (UNCONDITIONAL_JUMP)  ; LAB_005bc966
    MOV EBX,dword ptr [EBP + -0x14]     ; 005bc958
        ;   Label: LAB_005bc958
    SUB EBX,EDX                         ; 005bc95b
    MOV dword ptr [EBP + -0x14],EBX     ; 005bc95d
    LEA ECX,[EBX + 0x1]                 ; 005bc960
    MOV dword ptr [EBP + -0x14],ECX     ; 005bc963
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bc966
        ;   Label: LAB_005bc966
    MOV DL,byte ptr [EAX + 0x8]         ; 005bc969
    XOR EBX,EBX                         ; 005bc96c
    TEST DL,0x4                         ; 005bc96e
    JZ 0x005bc98e                       ; 005bc971
        ;   XREF to: 005bc98e (CONDITIONAL_JUMP)  ; LAB_005bc98e
    MOV EAX,dword ptr [EBP + 0x10]      ; 005bc973
    CMP EAX,dword ptr [EBP + -0x14]     ; 005bc976
    JGE 0x005bc97e                      ; 005bc979
        ;   XREF to: 005bc97e (CONDITIONAL_JUMP)  ; LAB_005bc97e
    MOV dword ptr [EBP + -0x14],EAX     ; 005bc97b
    MOV EAX,dword ptr [EBP + -0x14]     ; 005bc97e
        ;   Label: LAB_005bc97e
    DEC EAX                             ; 005bc981
    MOV dword ptr [EBP + -0x14],EAX     ; 005bc982
    TEST EAX,EAX                        ; 005bc985
    JGE 0x005bc98e                      ; 005bc987
        ;   XREF to: 005bc98e (CONDITIONAL_JUMP)  ; LAB_005bc98e
    XOR ECX,ECX                         ; 005bc989
    MOV dword ptr [EBP + -0x14],ECX     ; 005bc98b
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bc98e
        ;   Label: LAB_005bc98e
    MOV ESI,dword ptr [EAX + 0x4]       ; 005bc991
    TEST ESI,ESI                        ; 005bc994
    JG 0x005bc9a5                       ; 005bc996
        ;   XREF to: 005bc9a5 (CONDITIONAL_JUMP)  ; LAB_005bc9a5
    MOV ECX,dword ptr [EBP + 0x18]      ; 005bc998
    MOV EAX,EBX                         ; 005bc99b
    ADD EAX,ECX                         ; 005bc99d
    INC EBX                             ; 005bc99f
    MOV byte ptr [EAX],0x30             ; 005bc9a0
    JMP 0x005bca12                      ; 005bc9a3
        ;   XREF to: 005bca12 (UNCONDITIONAL_JUMP)  ; LAB_005bca12
    MOV EDI,dword ptr [EBP + 0x10]      ; 005bc9a5
        ;   Label: LAB_005bc9a5
    MOV dword ptr [EBP + -0x10],ESI     ; 005bc9a8
    CMP ESI,EDI                         ; 005bc9ab
    JLE 0x005bc9b2                      ; 005bc9ad
        ;   XREF to: 005bc9b2 (CONDITIONAL_JUMP)  ; LAB_005bc9b2
    MOV dword ptr [EBP + -0x10],EDI     ; 005bc9af
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bc9b2
        ;   Label: LAB_005bc9b2
    MOV ECX,dword ptr [EBP + -0x10]     ; 005bc9b5
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bc9b8
    ADD EDI,EBX                         ; 005bc9bb
    MOV EDX,dword ptr [EBP + 0xc]       ; 005bc9bd
    PUSH ES                             ; 005bc9c0
    MOV AX,DS                           ; 005bc9c1
    MOV ES,AX                           ; 005bc9c3
    PUSH EDI                            ; 005bc9c5
    MOV EAX,ECX                         ; 005bc9c6
    SHR ECX,0x2                         ; 005bc9c8
    MOVSD.REP ES:EDI,ESI                ; 005bc9cb
    MOV CL,AL                           ; 005bc9cd
    AND CL,0x3                          ; 005bc9cf
    MOVSB.REP ES:EDI,ESI                ; 005bc9d2
    POP EDI                             ; 005bc9d4
    POP ES                              ; 005bc9d5
    MOV EAX,dword ptr [EBP + -0x10]     ; 005bc9d6
    ADD EDX,EAX                         ; 005bc9d9
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bc9db
    MOV dword ptr [EBP + 0xc],EDX       ; 005bc9de
    MOV EDX,dword ptr [EBP + 0x8]       ; 005bc9e1
    ADD EBX,EAX                         ; 005bc9e4
    SUB ECX,EAX                         ; 005bc9e6
    MOV ESI,dword ptr [EDX + 0x4]       ; 005bc9e8
    MOV dword ptr [EBP + 0x10],ECX      ; 005bc9eb
    CMP EAX,ESI                         ; 005bc9ee
    JGE 0x005bca12                      ; 005bc9f0
        ;   XREF to: 005bca12 (CONDITIONAL_JUMP)  ; LAB_005bca12
    MOV EDI,dword ptr [EBP + -0x10]     ; 005bc9f2
    MOV EAX,ESI                         ; 005bc9f5
    SUB EAX,EDI                         ; 005bc9f7
    PUSH EAX                            ; 005bc9f9
    MOV dword ptr [EBP + -0x10],EAX     ; 005bc9fa
    MOV EAX,dword ptr [EBP + 0x18]      ; 005bc9fd
    PUSH 0x30                           ; 005bca00
    ADD EAX,EBX                         ; 005bca02
    PUSH EAX                            ; 005bca04
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005bca05
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBP + -0x10]     ; 005bca0a
    ADD ESP,0xc                         ; 005bca0d
    ADD EBX,EDX                         ; 005bca10
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bca12
        ;   Label: LAB_005bca12
    MOV DH,byte ptr [EAX + 0x8]         ; 005bca15
    MOV dword ptr [EAX + 0x18],EBX      ; 005bca18
    TEST DH,0x8                         ; 005bca1b
    JNZ 0x005bca36                      ; 005bca1e
        ;   XREF to: 005bca36 (CONDITIONAL_JUMP)  ; LAB_005bca36
    CMP dword ptr [EBP + -0x14],0x0     ; 005bca20
    JG 0x005bca2b                       ; 005bca24
        ;   XREF to: 005bca2b (CONDITIONAL_JUMP)  ; LAB_005bca2b
    TEST DH,0x10                        ; 005bca26
    JZ 0x005bca36                       ; 005bca29
        ;   XREF to: 005bca36 (CONDITIONAL_JUMP)  ; LAB_005bca36
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bca2b
        ;   Label: LAB_005bca2b
    MOV EAX,EBX                         ; 005bca2e
    ADD EAX,EDI                         ; 005bca30
    INC EBX                             ; 005bca32
    MOV byte ptr [EAX],0x2e             ; 005bca33
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bca36
        ;   Label: LAB_005bca36
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bca39
    TEST EDX,EDX                        ; 005bca3c
    JGE 0x005bca61                      ; 005bca3e
        ;   XREF to: 005bca61 (CONDITIONAL_JUMP)  ; LAB_005bca61
    MOV ECX,EDX                         ; 005bca40
    NEG ECX                             ; 005bca42
    PUSH ECX                            ; 005bca44
    MOV EAX,dword ptr [EBP + 0x18]      ; 005bca45
    MOV dword ptr [EBP + -0x10],EDX     ; 005bca48
    PUSH 0x30                           ; 005bca4b
    ADD EAX,EBX                         ; 005bca4d
    MOV ESI,ECX                         ; 005bca4f
    PUSH EAX                            ; 005bca51
    MOV dword ptr [EBP + -0x10],ECX     ; 005bca52
    MOV EDI,ESI                         ; 005bca55
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005bca57
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD EBX,EDI                         ; 005bca5c
    ADD ESP,0xc                         ; 005bca5e
    MOV EAX,dword ptr [EBP + -0x14]     ; 005bca61
        ;   Label: LAB_005bca61
    TEST EAX,EAX                        ; 005bca64
    JLE 0x005bcaac                      ; 005bca66
        ;   XREF to: 005bcaac (CONDITIONAL_JUMP)  ; LAB_005bcaac
    CMP EAX,dword ptr [EBP + 0x10]      ; 005bca68
    JGE 0x005bca70                      ; 005bca6b
        ;   XREF to: 005bca70 (CONDITIONAL_JUMP)  ; LAB_005bca70
    MOV dword ptr [EBP + 0x10],EAX      ; 005bca6d
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bca70
        ;   Label: LAB_005bca70
    TEST ECX,ECX                        ; 005bca73
    JZ 0x005bca98                       ; 005bca75
        ;   XREF to: 005bca98 (CONDITIONAL_JUMP)  ; LAB_005bca98
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bca77
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bca7a
    ADD EDI,EBX                         ; 005bca7d
    PUSH ES                             ; 005bca7f
    MOV AX,DS                           ; 005bca80
    MOV ES,AX                           ; 005bca82
    PUSH EDI                            ; 005bca84
    MOV EAX,ECX                         ; 005bca85
    SHR ECX,0x2                         ; 005bca87
    MOVSD.REP ES:EDI,ESI                ; 005bca8a
    MOV CL,AL                           ; 005bca8c
    AND CL,0x3                          ; 005bca8e
    MOVSB.REP ES:EDI,ESI                ; 005bca91
    POP EDI                             ; 005bca93
    POP ES                              ; 005bca94
    ADD EBX,dword ptr [EBP + 0x10]      ; 005bca95
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bca98
        ;   Label: LAB_005bca98
    MOV EDI,dword ptr [EBP + 0x10]      ; 005bca9b
    MOV dword ptr [EAX + 0x1c],EBX      ; 005bca9e
    MOV EAX,dword ptr [EBP + -0x14]     ; 005bcaa1
    MOV EDX,dword ptr [EBP + 0x8]       ; 005bcaa4
    SUB EAX,EDI                         ; 005bcaa7
    MOV dword ptr [EDX + 0x20],EAX      ; 005bcaa9
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bcaac
        ;   Label: LAB_005bcaac
    CMP dword ptr [EAX + 0xc],0x0       ; 005bcaaf
    JZ 0x005bcac5                       ; 005bcab3
        ;   XREF to: 005bcac5 (CONDITIONAL_JUMP)  ; LAB_005bcac5
    MOV ECX,dword ptr [EBP + 0x18]      ; 005bcab5
    MOV EAX,EBX                         ; 005bcab8
    MOV EDX,dword ptr [EBP + 0x8]       ; 005bcaba
    ADD EAX,ECX                         ; 005bcabd
    MOV DL,byte ptr [EDX + 0xc]         ; 005bcabf
    INC EBX                             ; 005bcac2
    MOV byte ptr [EAX],DL               ; 005bcac3
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bcac5
        ;   Label: LAB_005bcac5
    LEA EAX,[EBX + 0x1]                 ; 005bcac8
    TEST ESI,ESI                        ; 005bcacb
    JL 0x005bcadc                       ; 005bcacd
        ;   XREF to: 005bcadc (CONDITIONAL_JUMP)  ; LAB_005bcadc
    MOV EDX,EBX                         ; 005bcacf
    MOV EBX,EAX                         ; 005bcad1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005bcad3
    MOV byte ptr [EDX + EAX*0x1],0x2b   ; 005bcad6
    JMP 0x005bcaee                      ; 005bcada
        ;   XREF to: 005bcaee (UNCONDITIONAL_JUMP)  ; LAB_005bcaee
    MOV EDX,EBX                         ; 005bcadc
        ;   Label: LAB_005bcadc
    MOV EDI,ESI                         ; 005bcade
    MOV EBX,EAX                         ; 005bcae0
    NEG EDI                             ; 005bcae2
    MOV EAX,dword ptr [EBP + 0x18]      ; 005bcae4
    MOV dword ptr [EBP + 0x14],EDI      ; 005bcae7
    MOV byte ptr [EDX + EAX*0x1],0x2d   ; 005bcaea
    MOV ECX,dword ptr [EBP + 0x8]       ; 005bcaee
        ;   Label: LAB_005bcaee
    MOV ECX,dword ptr [ECX + 0x10]      ; 005bcaf1
    CMP ECX,0x3                         ; 005bcaf4
    JA 0x005bcb37                       ; 005bcaf7
        ;   XREF to: 005bcb37 (CONDITIONAL_JUMP)  ; default
    MOV EAX,ECX                         ; 005bcaf9
    JMP dword ptr CS:[EAX*0x4 + 0x5bc928] ; 005bcafb | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBP + 0x14],0x3e8    ; 005bcb03
        ;   Label: caseD_0
    JGE 0x005bcb32                      ; 005bcb0a
        ;   XREF to: 005bcb32 (CONDITIONAL_JUMP)  ; LAB_005bcb32
    MOV ECX,0x3                         ; 005bcb0c
    JMP 0x005bcb37                      ; 005bcb11
        ;   XREF to: 005bcb37 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x14],0xa      ; 005bcb13
        ;   Label: caseD_1
    JL 0x005bcb1e                       ; 005bcb17
        ;   XREF to: 005bcb1e (CONDITIONAL_JUMP)  ; caseD_2
    MOV ECX,0x2                         ; 005bcb19
    CMP dword ptr [EBP + 0x14],0x64     ; 005bcb1e
        ;   Label: caseD_2
    JL 0x005bcb29                       ; 005bcb22
        ;   XREF to: 005bcb29 (CONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,0x3                         ; 005bcb24
    CMP dword ptr [EBP + 0x14],0x3e8    ; 005bcb29
        ;   Label: caseD_3
    JL 0x005bcb37                       ; 005bcb30
        ;   XREF to: 005bcb37 (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x4                         ; 005bcb32
        ;   Label: LAB_005bcb32
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bcb37
        ;   Label: default
    MOV dword ptr [EAX + 0x10],ECX      ; 005bcb3a
    CMP ECX,0x4                         ; 005bcb3d
    JL 0x005bcb88                       ; 005bcb40
        ;   XREF to: 005bcb88 (CONDITIONAL_JUMP)  ; LAB_005bcb88
    XOR EAX,EAX                         ; 005bcb42
    MOV EDX,dword ptr [EBP + 0x14]      ; 005bcb44
    MOV dword ptr [EBP + -0x10],EAX     ; 005bcb47
    CMP EDX,0x3e8                       ; 005bcb4a
    JL 0x005bcb78                       ; 005bcb50
        ;   XREF to: 005bcb78 (CONDITIONAL_JUMP)  ; LAB_005bcb78
    MOV EDI,0x3e8                       ; 005bcb52
    MOV EAX,EDX                         ; 005bcb57
    SAR EDX,0x1f                        ; 005bcb59
    IDIV EDI                            ; 005bcb5c
    MOV dword ptr [EBP + -0x10],EAX     ; 005bcb5e
    MOV EDX,EAX                         ; 005bcb61
    SHL EAX,0x5                         ; 005bcb63
    SUB EAX,EDX                         ; 005bcb66
    SHL EAX,0x2                         ; 005bcb68
    ADD EAX,EDX                         ; 005bcb6b
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bcb6d
    SHL EAX,0x3                         ; 005bcb70
    SUB ESI,EAX                         ; 005bcb73
    MOV dword ptr [EBP + 0x14],ESI      ; 005bcb75
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bcb78
        ;   Label: LAB_005bcb78
    MOV EAX,EBX                         ; 005bcb7b
    MOV DL,byte ptr [EBP + -0x10]       ; 005bcb7d
    ADD EAX,EDI                         ; 005bcb80
    ADD DL,0x30                         ; 005bcb82
    INC EBX                             ; 005bcb85
    MOV byte ptr [EAX],DL               ; 005bcb86
    CMP ECX,0x3                         ; 005bcb88
        ;   Label: LAB_005bcb88
    JL 0x005bcbd0                       ; 005bcb8b
        ;   XREF to: 005bcbd0 (CONDITIONAL_JUMP)  ; LAB_005bcbd0
    XOR EAX,EAX                         ; 005bcb8d
    MOV EDX,dword ptr [EBP + 0x14]      ; 005bcb8f
    MOV dword ptr [EBP + -0x10],EAX     ; 005bcb92
    CMP EDX,0x64                        ; 005bcb95
    JL 0x005bcbc0                       ; 005bcb98
        ;   XREF to: 005bcbc0 (CONDITIONAL_JUMP)  ; LAB_005bcbc0
    MOV EDI,0x64                        ; 005bcb9a
    MOV EAX,EDX                         ; 005bcb9f
    SAR EDX,0x1f                        ; 005bcba1
    IDIV EDI                            ; 005bcba4
    MOV dword ptr [EBP + -0x10],EAX     ; 005bcba6
    MOV EDX,EAX                         ; 005bcba9
    SHL EAX,0x2                         ; 005bcbab
    SUB EAX,EDX                         ; 005bcbae
    SHL EAX,0x3                         ; 005bcbb0
    ADD EAX,EDX                         ; 005bcbb3
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bcbb5
    SHL EAX,0x2                         ; 005bcbb8
    SUB ESI,EAX                         ; 005bcbbb
    MOV dword ptr [EBP + 0x14],ESI      ; 005bcbbd
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bcbc0
        ;   Label: LAB_005bcbc0
    MOV EAX,EBX                         ; 005bcbc3
    MOV DL,byte ptr [EBP + -0x10]       ; 005bcbc5
    ADD EAX,EDI                         ; 005bcbc8
    ADD DL,0x30                         ; 005bcbca
    INC EBX                             ; 005bcbcd
    MOV byte ptr [EAX],DL               ; 005bcbce
    CMP ECX,0x2                         ; 005bcbd0
        ;   Label: LAB_005bcbd0
    JL 0x005bcc12                       ; 005bcbd3
        ;   XREF to: 005bcc12 (CONDITIONAL_JUMP)  ; LAB_005bcc12
    XOR EAX,EAX                         ; 005bcbd5
    MOV EDX,dword ptr [EBP + 0x14]      ; 005bcbd7
    MOV dword ptr [EBP + -0x10],EAX     ; 005bcbda
    CMP EDX,0xa                         ; 005bcbdd
    JL 0x005bcc02                       ; 005bcbe0
        ;   XREF to: 005bcc02 (CONDITIONAL_JUMP)  ; LAB_005bcc02
    MOV ECX,0xa                         ; 005bcbe2
    MOV EAX,EDX                         ; 005bcbe7
    SAR EDX,0x1f                        ; 005bcbe9
    IDIV ECX                            ; 005bcbec
    MOV dword ptr [EBP + -0x10],EAX     ; 005bcbee
    MOV EDX,EAX                         ; 005bcbf1
    SHL EAX,0x2                         ; 005bcbf3
    ADD EAX,EDX                         ; 005bcbf6
    MOV ECX,dword ptr [EBP + 0x14]      ; 005bcbf8
    ADD EAX,EAX                         ; 005bcbfb
    SUB ECX,EAX                         ; 005bcbfd
    MOV dword ptr [EBP + 0x14],ECX      ; 005bcbff
    MOV ESI,dword ptr [EBP + 0x18]      ; 005bcc02
        ;   Label: LAB_005bcc02
    MOV EAX,EBX                         ; 005bcc05
    MOV DL,byte ptr [EBP + -0x10]       ; 005bcc07
    ADD EAX,ESI                         ; 005bcc0a
    ADD DL,0x30                         ; 005bcc0c
    INC EBX                             ; 005bcc0f
    MOV byte ptr [EAX],DL               ; 005bcc10
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bcc12
        ;   Label: LAB_005bcc12
    MOV EAX,EBX                         ; 005bcc15
    MOV DL,byte ptr [EBP + 0x14]        ; 005bcc17
    ADD EAX,EDI                         ; 005bcc1a
    ADD DL,0x30                         ; 005bcc1c
    INC EBX                             ; 005bcc1f
    MOV byte ptr [EAX],DL               ; 005bcc20
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bcc22
    MOV EDX,EBX                         ; 005bcc25
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005bcc27
    SUB EDX,EAX                         ; 005bcc2a
    MOV EAX,dword ptr [EBP + 0x8]       ; 005bcc2c
    ADD EBX,EDI                         ; 005bcc2f
    MOV dword ptr [EAX + 0x24],EDX      ; 005bcc31
    JMP 0x005bc91b                      ; 005bcc34
        ;   XREF to: 005bc91b (UNCONDITIONAL_JUMP)  ; LAB_005bc91b

