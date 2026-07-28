; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056aa38(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0056a6dc at 0056a814
;
; Referenced Globals:
;   void* switchdataD_0056aa28 = 0056ac03
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056aa38
        ;   Label: FUN_0056aa38
    MOV EBP,ESP                         ; 0056aa39
    PUSH EBX                            ; 0056aa3b
    PUSH ESI                            ; 0056aa3c
    PUSH EDI                            ; 0056aa3d
    SUB ESP,0x8                         ; 0056aa3e
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056aa41
    MOV EAX,dword ptr [EAX]             ; 0056aa44
    MOV dword ptr [EBP + -0x14],EAX     ; 0056aa46
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056aa49
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056aa4c
    TEST EDX,EDX                        ; 0056aa4f
    JG 0x0056aa58                       ; 0056aa51
        ;   XREF to: 0056aa58 (CONDITIONAL_JUMP)  ; LAB_0056aa58
    ADD dword ptr [EBP + -0x14],EDX     ; 0056aa53
    JMP 0x0056aa66                      ; 0056aa56
        ;   XREF to: 0056aa66 (UNCONDITIONAL_JUMP)  ; LAB_0056aa66
    MOV EBX,dword ptr [EBP + -0x14]     ; 0056aa58
        ;   Label: LAB_0056aa58
    SUB EBX,EDX                         ; 0056aa5b
    MOV dword ptr [EBP + -0x14],EBX     ; 0056aa5d
    LEA ECX,[EBX + 0x1]                 ; 0056aa60
    MOV dword ptr [EBP + -0x14],ECX     ; 0056aa63
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056aa66
        ;   Label: LAB_0056aa66
    MOV DL,byte ptr [EAX + 0x8]         ; 0056aa69
    XOR EBX,EBX                         ; 0056aa6c
    TEST DL,0x4                         ; 0056aa6e
    JZ 0x0056aa8e                       ; 0056aa71
        ;   XREF to: 0056aa8e (CONDITIONAL_JUMP)  ; LAB_0056aa8e
    MOV EAX,dword ptr [EBP + 0x10]      ; 0056aa73
    CMP EAX,dword ptr [EBP + -0x14]     ; 0056aa76
    JGE 0x0056aa7e                      ; 0056aa79
        ;   XREF to: 0056aa7e (CONDITIONAL_JUMP)  ; LAB_0056aa7e
    MOV dword ptr [EBP + -0x14],EAX     ; 0056aa7b
    MOV EAX,dword ptr [EBP + -0x14]     ; 0056aa7e
        ;   Label: LAB_0056aa7e
    DEC EAX                             ; 0056aa81
    MOV dword ptr [EBP + -0x14],EAX     ; 0056aa82
    TEST EAX,EAX                        ; 0056aa85
    JGE 0x0056aa8e                      ; 0056aa87
        ;   XREF to: 0056aa8e (CONDITIONAL_JUMP)  ; LAB_0056aa8e
    XOR ECX,ECX                         ; 0056aa89
    MOV dword ptr [EBP + -0x14],ECX     ; 0056aa8b
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056aa8e
        ;   Label: LAB_0056aa8e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0056aa91
    TEST ESI,ESI                        ; 0056aa94
    JG 0x0056aaa5                       ; 0056aa96
        ;   XREF to: 0056aaa5 (CONDITIONAL_JUMP)  ; LAB_0056aaa5
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056aa98
    MOV EAX,EBX                         ; 0056aa9b
    ADD EAX,ECX                         ; 0056aa9d
    INC EBX                             ; 0056aa9f
    MOV byte ptr [EAX],0x30             ; 0056aaa0
    JMP 0x0056ab12                      ; 0056aaa3
        ;   XREF to: 0056ab12 (UNCONDITIONAL_JUMP)  ; LAB_0056ab12
    MOV EDI,dword ptr [EBP + 0x10]      ; 0056aaa5
        ;   Label: LAB_0056aaa5
    MOV dword ptr [EBP + -0x10],ESI     ; 0056aaa8
    CMP ESI,EDI                         ; 0056aaab
    JLE 0x0056aab2                      ; 0056aaad
        ;   XREF to: 0056aab2 (CONDITIONAL_JUMP)  ; LAB_0056aab2
    MOV dword ptr [EBP + -0x10],EDI     ; 0056aaaf
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056aab2
        ;   Label: LAB_0056aab2
    MOV ECX,dword ptr [EBP + -0x10]     ; 0056aab5
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056aab8
    ADD EDI,EBX                         ; 0056aabb
    MOV EDX,dword ptr [EBP + 0xc]       ; 0056aabd
    PUSH ES                             ; 0056aac0
    MOV AX,DS                           ; 0056aac1
    MOV ES,AX                           ; 0056aac3
    PUSH EDI                            ; 0056aac5
    MOV EAX,ECX                         ; 0056aac6
    SHR ECX,0x2                         ; 0056aac8
    MOVSD.REP ES:EDI,ESI                ; 0056aacb
    MOV CL,AL                           ; 0056aacd
    AND CL,0x3                          ; 0056aacf
    MOVSB.REP ES:EDI,ESI                ; 0056aad2
    POP EDI                             ; 0056aad4
    POP ES                              ; 0056aad5
    MOV EAX,dword ptr [EBP + -0x10]     ; 0056aad6
    ADD EDX,EAX                         ; 0056aad9
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056aadb
    MOV dword ptr [EBP + 0xc],EDX       ; 0056aade
    MOV EDX,dword ptr [EBP + 0x8]       ; 0056aae1
    ADD EBX,EAX                         ; 0056aae4
    SUB ECX,EAX                         ; 0056aae6
    MOV ESI,dword ptr [EDX + 0x4]       ; 0056aae8
    MOV dword ptr [EBP + 0x10],ECX      ; 0056aaeb
    CMP EAX,ESI                         ; 0056aaee
    JGE 0x0056ab12                      ; 0056aaf0
        ;   XREF to: 0056ab12 (CONDITIONAL_JUMP)  ; LAB_0056ab12
    MOV EDI,dword ptr [EBP + -0x10]     ; 0056aaf2
    MOV EAX,ESI                         ; 0056aaf5
    SUB EAX,EDI                         ; 0056aaf7
    PUSH EAX                            ; 0056aaf9
    MOV dword ptr [EBP + -0x10],EAX     ; 0056aafa
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056aafd
    PUSH 0x30                           ; 0056ab00
    ADD EAX,EBX                         ; 0056ab02
    PUSH EAX                            ; 0056ab04
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0056ab05
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBP + -0x10]     ; 0056ab0a
    ADD ESP,0xc                         ; 0056ab0d
    ADD EBX,EDX                         ; 0056ab10
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056ab12
        ;   Label: LAB_0056ab12
    MOV DH,byte ptr [EAX + 0x8]         ; 0056ab15
    MOV dword ptr [EAX + 0x18],EBX      ; 0056ab18
    TEST DH,0x8                         ; 0056ab1b
    JNZ 0x0056ab36                      ; 0056ab1e
        ;   XREF to: 0056ab36 (CONDITIONAL_JUMP)  ; LAB_0056ab36
    CMP dword ptr [EBP + -0x14],0x0     ; 0056ab20
    JG 0x0056ab2b                       ; 0056ab24
        ;   XREF to: 0056ab2b (CONDITIONAL_JUMP)  ; LAB_0056ab2b
    TEST DH,0x10                        ; 0056ab26
    JZ 0x0056ab36                       ; 0056ab29
        ;   XREF to: 0056ab36 (CONDITIONAL_JUMP)  ; LAB_0056ab36
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056ab2b
        ;   Label: LAB_0056ab2b
    MOV EAX,EBX                         ; 0056ab2e
    ADD EAX,EDI                         ; 0056ab30
    INC EBX                             ; 0056ab32
    MOV byte ptr [EAX],0x2e             ; 0056ab33
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056ab36
        ;   Label: LAB_0056ab36
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056ab39
    TEST EDX,EDX                        ; 0056ab3c
    JGE 0x0056ab61                      ; 0056ab3e
        ;   XREF to: 0056ab61 (CONDITIONAL_JUMP)  ; LAB_0056ab61
    MOV ECX,EDX                         ; 0056ab40
    NEG ECX                             ; 0056ab42
    PUSH ECX                            ; 0056ab44
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056ab45
    MOV dword ptr [EBP + -0x10],EDX     ; 0056ab48
    PUSH 0x30                           ; 0056ab4b
    ADD EAX,EBX                         ; 0056ab4d
    MOV ESI,ECX                         ; 0056ab4f
    PUSH EAX                            ; 0056ab51
    MOV dword ptr [EBP + -0x10],ECX     ; 0056ab52
    MOV EDI,ESI                         ; 0056ab55
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0056ab57
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD EBX,EDI                         ; 0056ab5c
    ADD ESP,0xc                         ; 0056ab5e
    MOV EAX,dword ptr [EBP + -0x14]     ; 0056ab61
        ;   Label: LAB_0056ab61
    TEST EAX,EAX                        ; 0056ab64
    JLE 0x0056abac                      ; 0056ab66
        ;   XREF to: 0056abac (CONDITIONAL_JUMP)  ; LAB_0056abac
    CMP EAX,dword ptr [EBP + 0x10]      ; 0056ab68
    JGE 0x0056ab70                      ; 0056ab6b
        ;   XREF to: 0056ab70 (CONDITIONAL_JUMP)  ; LAB_0056ab70
    MOV dword ptr [EBP + 0x10],EAX      ; 0056ab6d
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056ab70
        ;   Label: LAB_0056ab70
    TEST ECX,ECX                        ; 0056ab73
    JZ 0x0056ab98                       ; 0056ab75
        ;   XREF to: 0056ab98 (CONDITIONAL_JUMP)  ; LAB_0056ab98
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056ab77
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056ab7a
    ADD EDI,EBX                         ; 0056ab7d
    PUSH ES                             ; 0056ab7f
    MOV AX,DS                           ; 0056ab80
    MOV ES,AX                           ; 0056ab82
    PUSH EDI                            ; 0056ab84
    MOV EAX,ECX                         ; 0056ab85
    SHR ECX,0x2                         ; 0056ab87
    MOVSD.REP ES:EDI,ESI                ; 0056ab8a
    MOV CL,AL                           ; 0056ab8c
    AND CL,0x3                          ; 0056ab8e
    MOVSB.REP ES:EDI,ESI                ; 0056ab91
    POP EDI                             ; 0056ab93
    POP ES                              ; 0056ab94
    ADD EBX,dword ptr [EBP + 0x10]      ; 0056ab95
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056ab98
        ;   Label: LAB_0056ab98
    MOV EDI,dword ptr [EBP + 0x10]      ; 0056ab9b
    MOV dword ptr [EAX + 0x1c],EBX      ; 0056ab9e
    MOV EAX,dword ptr [EBP + -0x14]     ; 0056aba1
    MOV EDX,dword ptr [EBP + 0x8]       ; 0056aba4
    SUB EAX,EDI                         ; 0056aba7
    MOV dword ptr [EDX + 0x20],EAX      ; 0056aba9
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056abac
        ;   Label: LAB_0056abac
    CMP dword ptr [EAX + 0xc],0x0       ; 0056abaf
    JZ 0x0056abc5                       ; 0056abb3
        ;   XREF to: 0056abc5 (CONDITIONAL_JUMP)  ; LAB_0056abc5
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056abb5
    MOV EAX,EBX                         ; 0056abb8
    MOV EDX,dword ptr [EBP + 0x8]       ; 0056abba
    ADD EAX,ECX                         ; 0056abbd
    MOV DL,byte ptr [EDX + 0xc]         ; 0056abbf
    INC EBX                             ; 0056abc2
    MOV byte ptr [EAX],DL               ; 0056abc3
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056abc5
        ;   Label: LAB_0056abc5
    LEA EAX,[EBX + 0x1]                 ; 0056abc8
    TEST ESI,ESI                        ; 0056abcb
    JL 0x0056abdc                       ; 0056abcd
        ;   XREF to: 0056abdc (CONDITIONAL_JUMP)  ; LAB_0056abdc
    MOV EDX,EBX                         ; 0056abcf
    MOV EBX,EAX                         ; 0056abd1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056abd3
    MOV byte ptr [EDX + EAX*0x1],0x2b   ; 0056abd6
    JMP 0x0056abee                      ; 0056abda
        ;   XREF to: 0056abee (UNCONDITIONAL_JUMP)  ; LAB_0056abee
    MOV EDX,EBX                         ; 0056abdc
        ;   Label: LAB_0056abdc
    MOV EDI,ESI                         ; 0056abde
    MOV EBX,EAX                         ; 0056abe0
    NEG EDI                             ; 0056abe2
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056abe4
    MOV dword ptr [EBP + 0x14],EDI      ; 0056abe7
    MOV byte ptr [EDX + EAX*0x1],0x2d   ; 0056abea
    MOV ECX,dword ptr [EBP + 0x8]       ; 0056abee
        ;   Label: LAB_0056abee
    MOV ECX,dword ptr [ECX + 0x10]      ; 0056abf1
    CMP ECX,0x3                         ; 0056abf4
    JA 0x0056ac37                       ; 0056abf7
        ;   XREF to: 0056ac37 (CONDITIONAL_JUMP)  ; default
    MOV EAX,ECX                         ; 0056abf9
    JMP dword ptr CS:[EAX*0x4 + 0x56aa28] ; 0056abfb | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBP + 0x14],0x3e8    ; 0056ac03
        ;   Label: caseD_0
    JGE 0x0056ac32                      ; 0056ac0a
        ;   XREF to: 0056ac32 (CONDITIONAL_JUMP)  ; LAB_0056ac32
    MOV ECX,0x3                         ; 0056ac0c
    JMP 0x0056ac37                      ; 0056ac11
        ;   XREF to: 0056ac37 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x14],0xa      ; 0056ac13
        ;   Label: caseD_1
    JL 0x0056ac1e                       ; 0056ac17
        ;   XREF to: 0056ac1e (CONDITIONAL_JUMP)  ; caseD_2
    MOV ECX,0x2                         ; 0056ac19
    CMP dword ptr [EBP + 0x14],0x64     ; 0056ac1e
        ;   Label: caseD_2
    JL 0x0056ac29                       ; 0056ac22
        ;   XREF to: 0056ac29 (CONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,0x3                         ; 0056ac24
    CMP dword ptr [EBP + 0x14],0x3e8    ; 0056ac29
        ;   Label: caseD_3
    JL 0x0056ac37                       ; 0056ac30
        ;   XREF to: 0056ac37 (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x4                         ; 0056ac32
        ;   Label: LAB_0056ac32
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056ac37
        ;   Label: default
    MOV dword ptr [EAX + 0x10],ECX      ; 0056ac3a
    CMP ECX,0x4                         ; 0056ac3d
    JL 0x0056ac88                       ; 0056ac40
        ;   XREF to: 0056ac88 (CONDITIONAL_JUMP)  ; LAB_0056ac88
    XOR EAX,EAX                         ; 0056ac42
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ac44
    MOV dword ptr [EBP + -0x10],EAX     ; 0056ac47
    CMP EDX,0x3e8                       ; 0056ac4a
    JL 0x0056ac78                       ; 0056ac50
        ;   XREF to: 0056ac78 (CONDITIONAL_JUMP)  ; LAB_0056ac78
    MOV EDI,0x3e8                       ; 0056ac52
    MOV EAX,EDX                         ; 0056ac57
    SAR EDX,0x1f                        ; 0056ac59
    IDIV EDI                            ; 0056ac5c
    MOV dword ptr [EBP + -0x10],EAX     ; 0056ac5e
    MOV EDX,EAX                         ; 0056ac61
    SHL EAX,0x5                         ; 0056ac63
    SUB EAX,EDX                         ; 0056ac66
    SHL EAX,0x2                         ; 0056ac68
    ADD EAX,EDX                         ; 0056ac6b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056ac6d
    SHL EAX,0x3                         ; 0056ac70
    SUB ESI,EAX                         ; 0056ac73
    MOV dword ptr [EBP + 0x14],ESI      ; 0056ac75
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056ac78
        ;   Label: LAB_0056ac78
    MOV EAX,EBX                         ; 0056ac7b
    MOV DL,byte ptr [EBP + -0x10]       ; 0056ac7d
    ADD EAX,EDI                         ; 0056ac80
    ADD DL,0x30                         ; 0056ac82
    INC EBX                             ; 0056ac85
    MOV byte ptr [EAX],DL               ; 0056ac86
    CMP ECX,0x3                         ; 0056ac88
        ;   Label: LAB_0056ac88
    JL 0x0056acd0                       ; 0056ac8b
        ;   XREF to: 0056acd0 (CONDITIONAL_JUMP)  ; LAB_0056acd0
    XOR EAX,EAX                         ; 0056ac8d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056ac8f
    MOV dword ptr [EBP + -0x10],EAX     ; 0056ac92
    CMP EDX,0x64                        ; 0056ac95
    JL 0x0056acc0                       ; 0056ac98
        ;   XREF to: 0056acc0 (CONDITIONAL_JUMP)  ; LAB_0056acc0
    MOV EDI,0x64                        ; 0056ac9a
    MOV EAX,EDX                         ; 0056ac9f
    SAR EDX,0x1f                        ; 0056aca1
    IDIV EDI                            ; 0056aca4
    MOV dword ptr [EBP + -0x10],EAX     ; 0056aca6
    MOV EDX,EAX                         ; 0056aca9
    SHL EAX,0x2                         ; 0056acab
    SUB EAX,EDX                         ; 0056acae
    SHL EAX,0x3                         ; 0056acb0
    ADD EAX,EDX                         ; 0056acb3
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056acb5
    SHL EAX,0x2                         ; 0056acb8
    SUB ESI,EAX                         ; 0056acbb
    MOV dword ptr [EBP + 0x14],ESI      ; 0056acbd
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056acc0
        ;   Label: LAB_0056acc0
    MOV EAX,EBX                         ; 0056acc3
    MOV DL,byte ptr [EBP + -0x10]       ; 0056acc5
    ADD EAX,EDI                         ; 0056acc8
    ADD DL,0x30                         ; 0056acca
    INC EBX                             ; 0056accd
    MOV byte ptr [EAX],DL               ; 0056acce
    CMP ECX,0x2                         ; 0056acd0
        ;   Label: LAB_0056acd0
    JL 0x0056ad12                       ; 0056acd3
        ;   XREF to: 0056ad12 (CONDITIONAL_JUMP)  ; LAB_0056ad12
    XOR EAX,EAX                         ; 0056acd5
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056acd7
    MOV dword ptr [EBP + -0x10],EAX     ; 0056acda
    CMP EDX,0xa                         ; 0056acdd
    JL 0x0056ad02                       ; 0056ace0
        ;   XREF to: 0056ad02 (CONDITIONAL_JUMP)  ; LAB_0056ad02
    MOV ECX,0xa                         ; 0056ace2
    MOV EAX,EDX                         ; 0056ace7
    SAR EDX,0x1f                        ; 0056ace9
    IDIV ECX                            ; 0056acec
    MOV dword ptr [EBP + -0x10],EAX     ; 0056acee
    MOV EDX,EAX                         ; 0056acf1
    SHL EAX,0x2                         ; 0056acf3
    ADD EAX,EDX                         ; 0056acf6
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056acf8
    ADD EAX,EAX                         ; 0056acfb
    SUB ECX,EAX                         ; 0056acfd
    MOV dword ptr [EBP + 0x14],ECX      ; 0056acff
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056ad02
        ;   Label: LAB_0056ad02
    MOV EAX,EBX                         ; 0056ad05
    MOV DL,byte ptr [EBP + -0x10]       ; 0056ad07
    ADD EAX,ESI                         ; 0056ad0a
    ADD DL,0x30                         ; 0056ad0c
    INC EBX                             ; 0056ad0f
    MOV byte ptr [EAX],DL               ; 0056ad10
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056ad12
        ;   Label: LAB_0056ad12
    MOV EAX,EBX                         ; 0056ad15
    MOV DL,byte ptr [EBP + 0x14]        ; 0056ad17
    ADD EAX,EDI                         ; 0056ad1a
    ADD DL,0x30                         ; 0056ad1c
    INC EBX                             ; 0056ad1f
    MOV byte ptr [EAX],DL               ; 0056ad20
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056ad22
    MOV EDX,EBX                         ; 0056ad25
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0056ad27
    SUB EDX,EAX                         ; 0056ad2a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056ad2c
    ADD EBX,EDI                         ; 0056ad2f
    MOV dword ptr [EAX + 0x24],EDX      ; 0056ad31
    JMP 0x0056aa1b                      ; 0056ad34
        ;   XREF to: 0056aa1b (UNCONDITIONAL_JUMP)  ; LAB_0056aa1b

