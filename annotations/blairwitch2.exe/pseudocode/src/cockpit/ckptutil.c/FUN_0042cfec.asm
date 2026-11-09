; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042cfec(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e50
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c410
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0042cfec
        ;   Label: cockpit_ckptutil.c_FUN_0042cfec
    PUSH EBX                            ; 0042cff0
    PUSH ESI                            ; 0042cff1
    PUSH EDI                            ; 0042cff2
    PUSH EBP                            ; 0042cff3
    SUB ESP,0x2c                        ; 0042cff4
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042cff7
    MOV EBP,dword ptr [ESP + 0x40]      ; 0042cffb
    MOV EBX,dword ptr [0x01c35e50]      ; 0042cfff | DAT_01c35e50
    MOV EAX,[0x01c2a390]                ; 0042d005 | DAT_01c2a390
    MOV EDI,dword ptr [0x01c2a38c]      ; 0042d00a | DAT_01c2a38c
    MOV ESI,dword ptr [0x01c35e48]      ; 0042d010 | DAT_01c35e48
    SUB EBX,EDX                         ; 0042d016
    SUB EAX,EDI                         ; 0042d018
    SUB ESI,EDX                         ; 0042d01a
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d01c
    TEST EBP,EBP                        ; 0042d020
    JNZ 0x0042d02c                      ; 0042d022
        ;   XREF to: 0042d02c (CONDITIONAL_JUMP)  ; LAB_0042d02c
    ADD ESP,0x2c                        ; 0042d024
        ;   Label: LAB_0042d024
    POP EBP                             ; 0042d027
    POP EDI                             ; 0042d028
    POP ESI                             ; 0042d029
    POP EBX                             ; 0042d02a
    RET                                 ; 0042d02b
    CALL cockpit_ckptutil.c_FUN_0042c410 ; 0042d02c
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042c410()
        ;   Label: LAB_0042d02c
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042d031
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0042d035
    MOV EDI,EDX                         ; 0042d039
    MOV dword ptr [ESP + 0x28],EAX      ; 0042d03b
    SHL EDI,0x5                         ; 0042d03f
    MOV EAX,[0x006141c0]                ; 0042d042 | DAT_006141c0
    ADD EDI,EDX                         ; 0042d047
    SHL EBP,0x2                         ; 0042d049
    SHL EDI,0x2                         ; 0042d04c
    CMP EAX,0x8                         ; 0042d04f
    JNZ 0x0042d12e                      ; 0042d052
        ;   XREF to: 0042d12e (CONDITIONAL_JUMP)  ; LAB_0042d12e
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042d058
    MOV EAX,dword ptr [EBP + 0x1c2a38c] ; 0042d05c
    ADD EDX,EAX                         ; 0042d062
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042d064
    MOV dword ptr [ESP + 0x24],EDX      ; 0042d068
    TEST ECX,ECX                        ; 0042d06c
    JLE 0x0042d024                      ; 0042d06e
        ;   XREF to: 0042d024 (CONDITIONAL_JUMP)  ; LAB_0042d024
    XOR ECX,ECX                         ; 0042d070
    MOV dword ptr [ESP + 0x8],EDI       ; 0042d072
    MOV dword ptr [ESP + 0x14],ECX      ; 0042d076
    CMP dword ptr [ESP + 0x44],0x0      ; 0042d07a
        ;   Label: LAB_0042d07a
    JZ 0x0042d0ea                       ; 0042d07f
        ;   XREF to: 0042d0ea (CONDITIONAL_JUMP)  ; LAB_0042d0ea
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d081
    XOR EBP,EBP                         ; 0042d085
    XOR EDI,EDI                         ; 0042d087
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042d089
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d08d
        ;   Label: LAB_0042d08d
    ADD EDX,dword ptr [ESP + 0x1c]      ; 0042d091
    CMP EDI,dword ptr [EDX]             ; 0042d095
    JGE 0x0042d0b2                      ; 0042d097
        ;   XREF to: 0042d0b2 (CONDITIONAL_JUMP)  ; LAB_0042d0b2
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 0042d099
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 0042d09d
    ADD EDX,EAX                         ; 0042d0a1
    DEC EDX                             ; 0042d0a3
    CMP EAX,ESI                         ; 0042d0a4
    JGE 0x0042d104                      ; 0042d0a6
        ;   XREF to: 0042d104 (CONDITIONAL_JUMP)  ; LAB_0042d104
    CMP EDX,ESI                         ; 0042d0a8
    JGE 0x0042d102                      ; 0042d0aa
        ;   XREF to: 0042d102 (CONDITIONAL_JUMP)  ; LAB_0042d102
    INC EDI                             ; 0042d0ac
        ;   Label: LAB_0042d0ac
    ADD EBP,0x4                         ; 0042d0ad
    JMP 0x0042d08d                      ; 0042d0b0
        ;   XREF to: 0042d08d (UNCONDITIONAL_JUMP)  ; LAB_0042d08d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042d0b2
        ;   Label: LAB_0042d0b2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042d0b6
    MOV EDI,dword ptr [ESP + 0x24]      ; 0042d0ba
    MOV EBP,dword ptr [ESP + 0x40]      ; 0042d0be
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042d0c2
    ADD ECX,0x84                        ; 0042d0c6
    ADD EDI,EAX                         ; 0042d0cc
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042d0ce
    MOV dword ptr [ESP + 0x14],ECX      ; 0042d0d2
    ADD EBP,EAX                         ; 0042d0d6
    MOV dword ptr [ESP + 0x24],EDI      ; 0042d0d8
    MOV dword ptr [ESP + 0x40],EBP      ; 0042d0dc
    CMP ECX,EDX                         ; 0042d0e0
    JGE 0x0042d024                      ; 0042d0e2
        ;   XREF to: 0042d024 (CONDITIONAL_JUMP)  ; LAB_0042d024
    JMP 0x0042d07a                      ; 0042d0e8
        ;   XREF to: 0042d07a (UNCONDITIONAL_JUMP)  ; LAB_0042d07a
    MOV EBP,dword ptr [ESP + 0x50]      ; 0042d0ea
        ;   Label: LAB_0042d0ea
    PUSH EBP                            ; 0042d0ee
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042d0ef
    PUSH EAX                            ; 0042d0f3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042d0f4
    PUSH EDX                            ; 0042d0f8
    CALL dword ptr [ESP + 0x34]         ; 0042d0f9
    ADD ESP,0xc                         ; 0042d0fd
    JMP 0x0042d0b2                      ; 0042d100
        ;   XREF to: 0042d0b2 (UNCONDITIONAL_JUMP)  ; LAB_0042d0b2
    MOV EAX,ESI                         ; 0042d102
        ;   Label: LAB_0042d102
    CMP EDX,EBX                         ; 0042d104
        ;   Label: LAB_0042d104
    JLE 0x0042d10e                      ; 0042d106
        ;   XREF to: 0042d10e (CONDITIONAL_JUMP)  ; LAB_0042d10e
    CMP EAX,EBX                         ; 0042d108
    JG 0x0042d0ac                       ; 0042d10a
        ;   XREF to: 0042d0ac (CONDITIONAL_JUMP)  ; LAB_0042d0ac
    MOV EDX,EBX                         ; 0042d10c
    SUB EDX,EAX                         ; 0042d10e
        ;   Label: LAB_0042d10e
    INC EDX                             ; 0042d110
    PUSH EDX                            ; 0042d111
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d112
    ADD EDX,EAX                         ; 0042d116
    PUSH EDX                            ; 0042d118
    ADD EAX,dword ptr [ESP + 0x2c]      ; 0042d119
    PUSH EAX                            ; 0042d11d
    CALL dword ptr [ESP + 0x34]         ; 0042d11e
    ADD ESP,0xc                         ; 0042d122
    INC EDI                             ; 0042d125
    ADD EBP,0x4                         ; 0042d126
    JMP 0x0042d08d                      ; 0042d129
        ;   XREF to: 0042d08d (UNCONDITIONAL_JUMP)  ; LAB_0042d08d
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042d12e
        ;   Label: LAB_0042d12e
    MOV EDX,dword ptr [EBP + 0x1c2a38c] ; 0042d132
    ADD EAX,EAX                         ; 0042d138
    ADD EDX,EAX                         ; 0042d13a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042d13c
    MOV dword ptr [ESP + 0x20],EDX      ; 0042d140
    MOV EDX,EAX                         ; 0042d144
    SAR EDX,0x1f                        ; 0042d146
    SUB EAX,EDX                         ; 0042d149
    SAR EAX,0x1                         ; 0042d14b
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042d14d
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d151
    TEST EDX,EDX                        ; 0042d155
    JLE 0x0042d024                      ; 0042d157
        ;   XREF to: 0042d024 (CONDITIONAL_JUMP)  ; LAB_0042d024
    MOV dword ptr [ESP + 0x4],EDI       ; 0042d15d
    XOR EBP,EBP                         ; 0042d161
    ADD EAX,EAX                         ; 0042d163
    MOV dword ptr [ESP + 0x10],EBP      ; 0042d165
    MOV dword ptr [ESP],EAX             ; 0042d169
    CMP dword ptr [ESP + 0x44],0x0      ; 0042d16c
        ;   Label: LAB_0042d16c
    JZ 0x0042d1db                       ; 0042d171
        ;   XREF to: 0042d1db (CONDITIONAL_JUMP)  ; LAB_0042d1db
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d173
    XOR EBP,EBP                         ; 0042d177
    XOR EDI,EDI                         ; 0042d179
    MOV dword ptr [ESP + 0x18],EAX      ; 0042d17b
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d17f
        ;   Label: LAB_0042d17f
    ADD EDX,dword ptr [ESP + 0x18]      ; 0042d183
    CMP EDI,dword ptr [EDX]             ; 0042d187
    JGE 0x0042d1a4                      ; 0042d189
        ;   XREF to: 0042d1a4 (CONDITIONAL_JUMP)  ; LAB_0042d1a4
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 0042d18b
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 0042d18f
    ADD EDX,EAX                         ; 0042d193
    DEC EDX                             ; 0042d195
    CMP EAX,ESI                         ; 0042d196
    JGE 0x0042d1f5                      ; 0042d198
        ;   XREF to: 0042d1f5 (CONDITIONAL_JUMP)  ; LAB_0042d1f5
    CMP EDX,ESI                         ; 0042d19a
    JGE 0x0042d1f3                      ; 0042d19c
        ;   XREF to: 0042d1f3 (CONDITIONAL_JUMP)  ; LAB_0042d1f3
    INC EDI                             ; 0042d19e
        ;   Label: LAB_0042d19e
    ADD EBP,0x4                         ; 0042d19f
    JMP 0x0042d17f                      ; 0042d1a2
        ;   XREF to: 0042d17f (UNCONDITIONAL_JUMP)  ; LAB_0042d17f
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042d1a4
        ;   Label: LAB_0042d1a4
    MOV EAX,dword ptr [ESP]             ; 0042d1a8
    MOV EBP,dword ptr [ESP + 0x20]      ; 0042d1ab
    MOV EDX,dword ptr [ESP + 0x40]      ; 0042d1af
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042d1b3
    ADD EDI,0x84                        ; 0042d1b7
    ADD EBP,EAX                         ; 0042d1bd
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042d1bf
    MOV dword ptr [ESP + 0x10],EDI      ; 0042d1c3
    ADD EDX,EAX                         ; 0042d1c7
    MOV dword ptr [ESP + 0x20],EBP      ; 0042d1c9
    MOV dword ptr [ESP + 0x40],EDX      ; 0042d1cd
    CMP EDI,ECX                         ; 0042d1d1
    JGE 0x0042d024                      ; 0042d1d3
        ;   XREF to: 0042d024 (CONDITIONAL_JUMP)  ; LAB_0042d024
    JMP 0x0042d16c                      ; 0042d1d9
        ;   XREF to: 0042d16c (UNCONDITIONAL_JUMP)  ; LAB_0042d16c
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042d1db
        ;   Label: LAB_0042d1db
    PUSH EDX                            ; 0042d1df
    MOV ECX,dword ptr [ESP + 0x44]      ; 0042d1e0
    PUSH ECX                            ; 0042d1e4
    MOV EDI,dword ptr [ESP + 0x28]      ; 0042d1e5
    PUSH EDI                            ; 0042d1e9
    CALL dword ptr [ESP + 0x34]         ; 0042d1ea
    ADD ESP,0xc                         ; 0042d1ee
    JMP 0x0042d1a4                      ; 0042d1f1
        ;   XREF to: 0042d1a4 (UNCONDITIONAL_JUMP)  ; LAB_0042d1a4
    MOV EAX,ESI                         ; 0042d1f3
        ;   Label: LAB_0042d1f3
    CMP EDX,EBX                         ; 0042d1f5
        ;   Label: LAB_0042d1f5
    JLE 0x0042d1ff                      ; 0042d1f7
        ;   XREF to: 0042d1ff (CONDITIONAL_JUMP)  ; LAB_0042d1ff
    CMP EAX,EBX                         ; 0042d1f9
    JG 0x0042d19e                       ; 0042d1fb
        ;   XREF to: 0042d19e (CONDITIONAL_JUMP)  ; LAB_0042d19e
    MOV EDX,EBX                         ; 0042d1fd
    SUB EDX,EAX                         ; 0042d1ff
        ;   Label: LAB_0042d1ff
    INC EDX                             ; 0042d201
    PUSH EDX                            ; 0042d202
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d203
    ADD EDX,EAX                         ; 0042d207
    PUSH EDX                            ; 0042d209
    ADD EAX,EAX                         ; 0042d20a
    ADD EAX,dword ptr [ESP + 0x28]      ; 0042d20c
    PUSH EAX                            ; 0042d210
    CALL dword ptr [ESP + 0x34]         ; 0042d211
    ADD ESP,0xc                         ; 0042d215
    INC EDI                             ; 0042d218
    ADD EBP,0x4                         ; 0042d219
    JMP 0x0042d17f                      ; 0042d21c
        ;   XREF to: 0042d17f (UNCONDITIONAL_JUMP)  ; LAB_0042d17f

