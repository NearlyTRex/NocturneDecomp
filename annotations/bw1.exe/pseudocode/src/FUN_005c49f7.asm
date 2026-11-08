; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c49f7(uint *param_1,char *param_2,uint param_3,uint param_4,char *param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c48ac at 005c49d2
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c49f7
        ;   Label: FUN_005c49f7
    MOV EBP,ESP                         ; 005c49f8
    PUSH EBX                            ; 005c49fa
    PUSH ESI                            ; 005c49fb
    PUSH EDI                            ; 005c49fc
    SUB ESP,0x4                         ; 005c49fd
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c4a00
    MOV ECX,dword ptr [EBP + 0x14]      ; 005c4a03
    MOV EBX,dword ptr [EDX]             ; 005c4a06
    MOV AH,byte ptr [EDX + 0x8]         ; 005c4a08
    INC ECX                             ; 005c4a0b
    MOV dword ptr [EBP + -0x10],EBX     ; 005c4a0c
    MOV dword ptr [EBP + 0x14],ECX      ; 005c4a0f
    XOR EBX,EBX                         ; 005c4a12
    TEST AH,0x4                         ; 005c4a14
    JZ 0x005c4a3d                       ; 005c4a17
        ;   XREF to: 005c4a3d (CONDITIONAL_JUMP)  ; LAB_005c4a3d
    MOV ESI,dword ptr [EBP + 0x10]      ; 005c4a19
    CMP ESI,dword ptr [EBP + -0x10]     ; 005c4a1c
    JGE 0x005c4a29                      ; 005c4a1f
        ;   XREF to: 005c4a29 (CONDITIONAL_JUMP)  ; LAB_005c4a29
    TEST AH,0x10                        ; 005c4a21
    JNZ 0x005c4a29                      ; 005c4a24
        ;   XREF to: 005c4a29 (CONDITIONAL_JUMP)  ; LAB_005c4a29
    MOV dword ptr [EBP + -0x10],ESI     ; 005c4a26
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4a29
        ;   Label: LAB_005c4a29
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c4a2c
    SUB EAX,ESI                         ; 005c4a2f
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4a31
    TEST EAX,EAX                        ; 005c4a34
    JGE 0x005c4a3d                      ; 005c4a36
        ;   XREF to: 005c4a3d (CONDITIONAL_JUMP)  ; LAB_005c4a3d
    XOR ESI,ESI                         ; 005c4a38
    MOV dword ptr [EBP + -0x10],ESI     ; 005c4a3a
    MOV EDI,dword ptr [EBP + 0x14]      ; 005c4a3d
        ;   Label: LAB_005c4a3d
    TEST EDI,EDI                        ; 005c4a40
    JG 0x005c4ae5                       ; 005c4a42
        ;   XREF to: 005c4ae5 (CONDITIONAL_JUMP)  ; LAB_005c4ae5
    TEST byte ptr [EDX + 0x8],0x8       ; 005c4a48
    JNZ 0x005c4a71                      ; 005c4a4c
        ;   XREF to: 005c4a71 (CONDITIONAL_JUMP)  ; LAB_005c4a71
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c4a4e
    MOV ESI,EBX                         ; 005c4a51
    ADD ESI,ECX                         ; 005c4a53
    MOV byte ptr [ESI],0x30             ; 005c4a55
    MOV ESI,dword ptr [EBP + -0x10]     ; 005c4a58
    INC EBX                             ; 005c4a5b
    TEST ESI,ESI                        ; 005c4a5c
    JG 0x005c4a66                       ; 005c4a5e
        ;   XREF to: 005c4a66 (CONDITIONAL_JUMP)  ; LAB_005c4a66
    TEST byte ptr [EDX + 0x8],0x10      ; 005c4a60
    JZ 0x005c4a71                       ; 005c4a64
        ;   XREF to: 005c4a71 (CONDITIONAL_JUMP)  ; LAB_005c4a71
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c4a66
        ;   Label: LAB_005c4a66
    MOV EDI,EBX                         ; 005c4a69
    ADD EDI,EAX                         ; 005c4a6b
    INC EBX                             ; 005c4a6d
    MOV byte ptr [EDI],0x2e             ; 005c4a6e
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4a71
        ;   Label: LAB_005c4a71
    MOV ECX,dword ptr [EBP + -0x10]     ; 005c4a74
    NEG ESI                             ; 005c4a77
    MOV dword ptr [EDX + 0x1c],EBX      ; 005c4a79
    CMP ESI,ECX                         ; 005c4a7c
    JLE 0x005c4a8a                      ; 005c4a7e
        ;   XREF to: 005c4a8a (CONDITIONAL_JUMP)  ; LAB_005c4a8a
    MOV ESI,ECX                         ; 005c4a80
    MOV dword ptr [EBP + 0x14],ECX      ; 005c4a82
    NEG ESI                             ; 005c4a85
    MOV dword ptr [EBP + 0x14],ESI      ; 005c4a87
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4a8a
        ;   Label: LAB_005c4a8a
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c4a8d
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c4a90
    MOV EDI,ESI                         ; 005c4a93
    MOV dword ptr [EDX + 0x18],ESI      ; 005c4a95
    ADD EAX,ESI                         ; 005c4a98
    MOV dword ptr [EDX + 0x20],ESI      ; 005c4a9a
    NEG EDI                             ; 005c4a9d
    MOV dword ptr [EBP + -0x10],EAX     ; 005c4a9f
    MOV dword ptr [EDX + 0x20],EDI      ; 005c4aa2
    CMP EAX,ECX                         ; 005c4aa5
    JGE 0x005c4aac                      ; 005c4aa7
        ;   XREF to: 005c4aac (CONDITIONAL_JUMP)  ; LAB_005c4aac
    MOV dword ptr [EBP + 0x10],EAX      ; 005c4aa9
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4aac
        ;   Label: LAB_005c4aac
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c4aaf
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c4ab2
    ADD EDI,EBX                         ; 005c4ab5
    PUSH ES                             ; 005c4ab7
    MOV AX,DS                           ; 005c4ab8
    MOV ES,AX                           ; 005c4aba
    PUSH EDI                            ; 005c4abc
    MOV EAX,ECX                         ; 005c4abd
    SHR ECX,0x2                         ; 005c4abf
    MOVSD.REP ES:EDI,ESI                ; 005c4ac2
    MOV CL,AL                           ; 005c4ac4
    AND CL,0x3                          ; 005c4ac6
    MOVSB.REP ES:EDI,ESI                ; 005c4ac9
    POP EDI                             ; 005c4acb
    POP ES                              ; 005c4acc
    MOV ESI,dword ptr [EBP + 0x10]      ; 005c4acd
    MOV EDI,dword ptr [EBP + 0x10]      ; 005c4ad0
    ADD EBX,ESI                         ; 005c4ad3
    MOV dword ptr [EDX + 0x24],ESI      ; 005c4ad5
    MOV ESI,dword ptr [EBP + -0x10]     ; 005c4ad8
    SUB ESI,EDI                         ; 005c4adb
    MOV dword ptr [EDX + 0x28],ESI      ; 005c4add
        ;   Label: LAB_005c4add
    JMP 0x005c4be8                      ; 005c4ae0
        ;   XREF to: 005c4be8 (UNCONDITIONAL_JUMP)  ; LAB_005c4be8
    MOV ESI,dword ptr [EBP + 0x10]      ; 005c4ae5
        ;   Label: LAB_005c4ae5
    CMP ESI,EDI                         ; 005c4ae8
    JGE 0x005c4b4a                      ; 005c4aea
        ;   XREF to: 005c4b4a (CONDITIONAL_JUMP)  ; LAB_005c4b4a
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4aec
    MOV ECX,ESI                         ; 005c4aef
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c4af1
    PUSH ES                             ; 005c4af4
    MOV AX,DS                           ; 005c4af5
    MOV ES,AX                           ; 005c4af7
    PUSH EDI                            ; 005c4af9
    MOV EAX,ECX                         ; 005c4afa
    SHR ECX,0x2                         ; 005c4afc
    MOVSD.REP ES:EDI,ESI                ; 005c4aff
    MOV CL,AL                           ; 005c4b01
    AND CL,0x3                          ; 005c4b03
    MOVSB.REP ES:EDI,ESI                ; 005c4b06
    POP EDI                             ; 005c4b08
    POP ES                              ; 005c4b09
    MOV EAX,dword ptr [EBP + 0x10]      ; 005c4b0a
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4b0d
    MOV dword ptr [EDX + 0x1c],EAX      ; 005c4b10
    SUB ESI,EAX                         ; 005c4b13
    MOV CL,byte ptr [EDX + 0x8]         ; 005c4b15
    MOV dword ptr [EDX + 0x20],ESI      ; 005c4b18
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4b1b
    ADD EBX,EAX                         ; 005c4b1e
    MOV dword ptr [EDX + 0x18],ESI      ; 005c4b20
    TEST CL,0x8                         ; 005c4b23
    JNZ 0x005c4b45                      ; 005c4b26
        ;   XREF to: 005c4b45 (CONDITIONAL_JUMP)  ; LAB_005c4b45
    CMP dword ptr [EBP + -0x10],0x0     ; 005c4b28
    JG 0x005c4b33                       ; 005c4b2c
        ;   XREF to: 005c4b33 (CONDITIONAL_JUMP)  ; LAB_005c4b33
    TEST CL,0x10                        ; 005c4b2e
    JZ 0x005c4b45                       ; 005c4b31
        ;   XREF to: 005c4b45 (CONDITIONAL_JUMP)  ; LAB_005c4b45
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c4b33
        ;   Label: LAB_005c4b33
    MOV EDI,EBX                         ; 005c4b36
    ADD EDI,EAX                         ; 005c4b38
    MOV byte ptr [EDI],0x2e             ; 005c4b3a
    INC EBX                             ; 005c4b3d
    MOV dword ptr [EDX + 0x24],0x1      ; 005c4b3e
    MOV ESI,dword ptr [EBP + -0x10]     ; 005c4b45
        ;   Label: LAB_005c4b45
    JMP 0x005c4add                      ; 005c4b48
        ;   XREF to: 005c4add (UNCONDITIONAL_JUMP)  ; LAB_005c4add
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c4b4a
        ;   Label: LAB_005c4b4a
    MOV ECX,EDI                         ; 005c4b4d
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4b4f
    PUSH ES                             ; 005c4b52
    MOV AX,DS                           ; 005c4b53
    MOV ES,AX                           ; 005c4b55
    PUSH EDI                            ; 005c4b57
    MOV EAX,ECX                         ; 005c4b58
    SHR ECX,0x2                         ; 005c4b5a
    MOVSD.REP ES:EDI,ESI                ; 005c4b5d
    MOV CL,AL                           ; 005c4b5f
    AND CL,0x3                          ; 005c4b61
    MOVSB.REP ES:EDI,ESI                ; 005c4b64
    POP EDI                             ; 005c4b66
    POP ES                              ; 005c4b67
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c4b68
    MOV EDI,dword ptr [EBP + 0x10]      ; 005c4b6b
    MOV CH,byte ptr [EDX + 0x8]         ; 005c4b6e
    ADD EBX,ESI                         ; 005c4b71
    SUB EDI,ESI                         ; 005c4b73
    MOV dword ptr [EDX + 0x18],ESI      ; 005c4b75
    MOV dword ptr [EBP + 0x10],EDI      ; 005c4b78
    TEST CH,0x8                         ; 005c4b7b
    JNZ 0x005c4b98                      ; 005c4b7e
        ;   XREF to: 005c4b98 (CONDITIONAL_JUMP)  ; LAB_005c4b98
    CMP dword ptr [EBP + -0x10],0x0     ; 005c4b80
    JG 0x005c4b8b                       ; 005c4b84
        ;   XREF to: 005c4b8b (CONDITIONAL_JUMP)  ; LAB_005c4b8b
    TEST CH,0x10                        ; 005c4b86
    JZ 0x005c4ba7                       ; 005c4b89
        ;   XREF to: 005c4ba7 (CONDITIONAL_JUMP)  ; LAB_005c4ba7
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c4b8b
        ;   Label: LAB_005c4b8b
    MOV EDI,EBX                         ; 005c4b8e
    ADD EDI,ECX                         ; 005c4b90
    INC EBX                             ; 005c4b92
    MOV byte ptr [EDI],0x2e             ; 005c4b93
    JMP 0x005c4ba7                      ; 005c4b96
        ;   XREF to: 005c4ba7 (UNCONDITIONAL_JUMP)  ; LAB_005c4ba7
    MOV ESI,dword ptr [EBP + 0x18]      ; 005c4b98
        ;   Label: LAB_005c4b98
    CMP byte ptr [ESI],0x30             ; 005c4b9b
    JNZ 0x005c4ba7                      ; 005c4b9e
        ;   XREF to: 005c4ba7 (CONDITIONAL_JUMP)  ; LAB_005c4ba7
    MOV dword ptr [EDX + 0x18],0x0      ; 005c4ba0
    MOV ESI,dword ptr [EBP + -0x10]     ; 005c4ba7
        ;   Label: LAB_005c4ba7
    CMP ESI,dword ptr [EBP + 0x10]      ; 005c4baa
    JGE 0x005c4bb2                      ; 005c4bad
        ;   XREF to: 005c4bb2 (CONDITIONAL_JUMP)  ; LAB_005c4bb2
    MOV dword ptr [EBP + 0x10],ESI      ; 005c4baf
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c4bb2
        ;   Label: LAB_005c4bb2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c4bb5
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c4bb8
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c4bbb
    ADD ESI,EAX                         ; 005c4bbe
    ADD EDI,EBX                         ; 005c4bc0
    PUSH ES                             ; 005c4bc2
    MOV AX,DS                           ; 005c4bc3
    MOV ES,AX                           ; 005c4bc5
    PUSH EDI                            ; 005c4bc7
    MOV EAX,ECX                         ; 005c4bc8
    SHR ECX,0x2                         ; 005c4bca
    MOVSD.REP ES:EDI,ESI                ; 005c4bcd
    MOV CL,AL                           ; 005c4bcf
    AND CL,0x3                          ; 005c4bd1
    MOVSB.REP ES:EDI,ESI                ; 005c4bd4
    POP EDI                             ; 005c4bd6
    POP ES                              ; 005c4bd7
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c4bd8
    MOV ESI,dword ptr [EBP + -0x10]     ; 005c4bdb
    ADD EBX,ECX                         ; 005c4bde
    SUB ESI,ECX                         ; 005c4be0
    MOV dword ptr [EDX + 0x1c],EBX      ; 005c4be2
    MOV dword ptr [EDX + 0x20],ESI      ; 005c4be5
    ADD EBX,dword ptr [EBP + 0x18]      ; 005c4be8
        ;   Label: LAB_005c4be8
    MOV byte ptr [EBX],0x0              ; 005c4beb
        ;   Label: LAB_005c4beb

