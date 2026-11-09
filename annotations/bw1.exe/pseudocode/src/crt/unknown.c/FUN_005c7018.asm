; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c7018(short param_1,int *param_2,uint param_3,uint *param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c71d4 at 005c71f8
;
; Referenced Globals:
;   undefined4 DAT_00626220
;   undefined4 DAT_02c9f691
;
; Called Functions:
;   crt_unknown.c_FUN_005c0a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7018
        ;   Label: crt_unknown.c_FUN_005c7018
    PUSH ESI                            ; 005c7019
    PUSH EDI                            ; 005c701a
    PUSH EBP                            ; 005c701b
    SUB ESP,0xc                         ; 005c701c
    MOV ESI,dword ptr [ESP + 0x24]      ; 005c701f
    MOV EDX,dword ptr [ESP + 0x28]      ; 005c7023
    LEA EAX,[EDX + 0xb]                 ; 005c7027
    AND AL,0xf8                         ; 005c702a
    CMP EAX,EDX                         ; 005c702c
    JNC 0x005c7037                      ; 005c702e
        ;   XREF to: 005c7037 (CONDITIONAL_JUMP)  ; LAB_005c7037
    MOV EAX,0xffffffff                  ; 005c7030
    JMP 0x005c7041                      ; 005c7035
        ;   XREF to: 005c7041 (UNCONDITIONAL_JUMP)  ; LAB_005c7041
    CMP EAX,0x10                        ; 005c7037
        ;   Label: LAB_005c7037
    JNC 0x005c7041                      ; 005c703a
        ;   XREF to: 005c7041 (CONDITIONAL_JUMP)  ; LAB_005c7041
    MOV EAX,0x10                        ; 005c703c
    LEA EDX,[ESI + -0x4]                ; 005c7041
        ;   Label: LAB_005c7041
    MOV dword ptr [ESP],EDX             ; 005c7044
    MOV EDX,dword ptr [EDX]             ; 005c7047
    AND DL,0xfe                         ; 005c7049
    CMP EAX,EDX                         ; 005c704c
    JBE 0x005c7169                      ; 005c704e
        ;   XREF to: 005c7169 (CONDITIONAL_JUMP)  ; LAB_005c7169
    MOV EBP,dword ptr [ESP]             ; 005c7054
    SUB EAX,EDX                         ; 005c7057
    ADD EBP,EDX                         ; 005c7059
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005c705b
    MOV dword ptr [EDX],EAX             ; 005c705f
    MOV EDI,dword ptr [EBP]             ; 005c7061
        ;   Label: LAB_005c7061
    CMP EDI,-0x1                        ; 005c7064
    JNZ 0x005c7073                      ; 005c7067
        ;   XREF to: 005c7073 (CONDITIONAL_JUMP)  ; LAB_005c7073
    MOV EAX,0x2                         ; 005c7069
    JMP 0x005c71ca                      ; 005c706e
        ;   XREF to: 005c71ca (UNCONDITIONAL_JUMP)  ; LAB_005c71ca
    TEST DI,0x1                         ; 005c7073
        ;   Label: LAB_005c7073
    JNZ 0x005c715c                      ; 005c7078
        ;   XREF to: 005c715c (CONDITIONAL_JUMP)  ; LAB_005c715c
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c707e
    MOV dword ptr [ESP + 0x4],EAX       ; 005c7081
    MOV EAX,dword ptr [EBP + 0x4]       ; 005c7085
    MOV DX,DS                           ; 005c7088
    MOV dword ptr [ESP + 0x8],EAX       ; 005c708a
    MOV EAX,0x626220                    ; 005c708e | DAT_00626220
    CMP DX,word ptr [ESP + 0x20]        ; 005c7093
    JNZ 0x005c70bb                      ; 005c7098
        ;   XREF to: 005c70bb (CONDITIONAL_JUMP)  ; LAB_005c70bb
    MOV EBX,dword ptr [0x00626220]      ; 005c709a | DAT_00626220
    CMP dword ptr [EBX + 0x8],0x0       ; 005c70a0
    JZ 0x005c70bb                       ; 005c70a4
        ;   XREF to: 005c70bb (CONDITIONAL_JUMP)  ; LAB_005c70bb
    CMP EBX,ESI                         ; 005c70a6
        ;   Label: LAB_005c70a6
    JA 0x005c70b2                       ; 005c70a8
        ;   XREF to: 005c70b2 (CONDITIONAL_JUMP)  ; LAB_005c70b2
    MOV EAX,dword ptr [EBX]             ; 005c70aa
    ADD EAX,EBX                         ; 005c70ac
    CMP EAX,ESI                         ; 005c70ae
    JA 0x005c70bb                       ; 005c70b0
        ;   XREF to: 005c70bb (CONDITIONAL_JUMP)  ; LAB_005c70bb
    MOV EBX,dword ptr [EBX + 0x8]       ; 005c70b2
        ;   Label: LAB_005c70b2
    CMP dword ptr [EBX + 0x8],0x0       ; 005c70b5
    JNZ 0x005c70a6                      ; 005c70b9
        ;   XREF to: 005c70a6 (CONDITIONAL_JUMP)  ; LAB_005c70a6
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c70bb
        ;   Label: LAB_005c70bb
    CMP EBP,EAX                         ; 005c70be
    JNZ 0x005c70c8                      ; 005c70c0
        ;   XREF to: 005c70c8 (CONDITIONAL_JUMP)  ; LAB_005c70c8
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c70c2
    MOV dword ptr [EBX + 0xc],EAX       ; 005c70c5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005c70c8
        ;   Label: LAB_005c70c8
    CMP EDI,dword ptr [EAX]             ; 005c70cc
    JC 0x005c70df                       ; 005c70ce
        ;   XREF to: 005c70df (CONDITIONAL_JUMP)  ; LAB_005c70df
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005c70d0
    MOV EAX,EDI                         ; 005c70d4
    MOV ECX,dword ptr [EDX]             ; 005c70d6
    SUB EAX,ECX                         ; 005c70d8
    CMP EAX,0x10                        ; 005c70da
    JNC 0x005c7116                      ; 005c70dd
        ;   XREF to: 005c7116 (CONDITIONAL_JUMP)  ; LAB_005c7116
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c70df
        ;   Label: LAB_005c70df
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c70e3
    MOV dword ptr [EAX + 0x8],EDX       ; 005c70e7
    MOV EAX,EDX                         ; 005c70ea
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c70ec
    MOV dword ptr [EAX + 0x4],EDX       ; 005c70f0
    MOV EAX,dword ptr [ESP]             ; 005c70f3
    ADD dword ptr [EAX],EDI             ; 005c70f6
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005c70f8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005c70fb
    DEC ECX                             ; 005c70ff
    XOR DL,DL                           ; 005c7100
    MOV dword ptr [EBX + 0x1c],ECX      ; 005c7102
    MOV byte ptr [0x02c9f691],DL        ; 005c7105 | DAT_02c9f691
    MOV EDX,dword ptr [EAX]             ; 005c710b
    CMP EDI,EDX                         ; 005c710d
    JC 0x005c714f                       ; 005c710f
        ;   XREF to: 005c714f (CONDITIONAL_JUMP)  ; LAB_005c714f
    JMP 0x005c71c8                      ; 005c7111
        ;   XREF to: 005c71c8 (UNCONDITIONAL_JUMP)  ; LAB_005c71c8
    ADD EBP,ECX                         ; 005c7116
        ;   Label: LAB_005c7116
    MOV dword ptr [EBP],EAX             ; 005c7118
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c711b
    MOV dword ptr [EBP + 0x4],EAX       ; 005c711f
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c7122
    MOV dword ptr [EBP + 0x8],EAX       ; 005c7126
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c7129
    MOV dword ptr [EAX + 0x8],EBP       ; 005c712d
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c7130
    MOV dword ptr [EAX + 0x4],EBP       ; 005c7134
    MOV EAX,dword ptr [EDX]             ; 005c7137
    MOV EDX,dword ptr [ESP]             ; 005c7139
    MOV EDI,dword ptr [EDX]             ; 005c713c
    ADD EDI,EAX                         ; 005c713e
    XOR AH,AH                           ; 005c7140
    MOV dword ptr [EDX],EDI             ; 005c7142
    MOV byte ptr [0x02c9f691],AH        ; 005c7144 | DAT_02c9f691
    JMP 0x005c71c8                      ; 005c714a
        ;   XREF to: 005c71c8 (UNCONDITIONAL_JUMP)  ; LAB_005c71c8
    MOV ECX,EDX                         ; 005c714f
        ;   Label: LAB_005c714f
    SUB ECX,EDI                         ; 005c7151
    ADD EBP,EDI                         ; 005c7153
    MOV dword ptr [EAX],ECX             ; 005c7155
    JMP 0x005c7061                      ; 005c7157
        ;   XREF to: 005c7061 (UNCONDITIONAL_JUMP)  ; LAB_005c7061
    MOV EAX,0x1                         ; 005c715c
        ;   Label: LAB_005c715c
    ADD ESP,0xc                         ; 005c7161
    POP EBP                             ; 005c7164
    POP EDI                             ; 005c7165
    POP ESI                             ; 005c7166
    POP EBX                             ; 005c7167
    RET                                 ; 005c7168
    SUB EDX,EAX                         ; 005c7169
        ;   Label: LAB_005c7169
    CMP EDX,0x10                        ; 005c716b
    JC 0x005c71c8                       ; 005c716e
        ;   XREF to: 005c71c8 (CONDITIONAL_JUMP)  ; LAB_005c71c8
    MOV EBP,dword ptr [ESP]             ; 005c7170
    MOV EDI,EAX                         ; 005c7173
    OR DL,0x1                           ; 005c7175
    OR DI,0x1                           ; 005c7178
    LEA ECX,[EAX + EBP*0x1]             ; 005c717c
    MOV dword ptr [EBP],EDI             ; 005c717f
    MOV EAX,0x626220                    ; 005c7182 | DAT_00626220
    MOV dword ptr [ECX],EDX             ; 005c7187
    MOV DX,DS                           ; 005c7189
    MOV dword ptr [ESP],ECX             ; 005c718b
    CMP DX,word ptr [ESP + 0x20]        ; 005c718e
    JNZ 0x005c71b6                      ; 005c7193
        ;   XREF to: 005c71b6 (CONDITIONAL_JUMP)  ; LAB_005c71b6
    MOV EBX,dword ptr [0x00626220]      ; 005c7195 | DAT_00626220
    CMP dword ptr [EBX + 0x8],0x0       ; 005c719b
    JZ 0x005c71b6                       ; 005c719f
        ;   XREF to: 005c71b6 (CONDITIONAL_JUMP)  ; LAB_005c71b6
    CMP EBX,ESI                         ; 005c71a1
        ;   Label: LAB_005c71a1
    JA 0x005c71ad                       ; 005c71a3
        ;   XREF to: 005c71ad (CONDITIONAL_JUMP)  ; LAB_005c71ad
    MOV EAX,dword ptr [EBX]             ; 005c71a5
    ADD EAX,EBX                         ; 005c71a7
    CMP EAX,ESI                         ; 005c71a9
    JA 0x005c71b6                       ; 005c71ab
        ;   XREF to: 005c71b6 (CONDITIONAL_JUMP)  ; LAB_005c71b6
    MOV EBX,dword ptr [EBX + 0x8]       ; 005c71ad
        ;   Label: LAB_005c71ad
    CMP dword ptr [EBX + 0x8],0x0       ; 005c71b0
    JNZ 0x005c71a1                      ; 005c71b4
        ;   XREF to: 005c71a1 (CONDITIONAL_JUMP)  ; LAB_005c71a1
    INC dword ptr [EBX + 0x18]          ; 005c71b6
        ;   Label: LAB_005c71b6
    MOV EAX,dword ptr [ESP]             ; 005c71b9
    ADD EAX,0x4                         ; 005c71bc
    PUSH EAX                            ; 005c71bf
    CALL crt_unknown.c_FUN_005c0a00     ; 005c71c0
        ;   XREF to: 005c0a00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0a00()
    ADD ESP,0x4                         ; 005c71c5
    XOR EAX,EAX                         ; 005c71c8
        ;   Label: LAB_005c71c8
    ADD ESP,0xc                         ; 005c71ca
        ;   Label: LAB_005c71ca
    POP EBP                             ; 005c71cd
    POP EDI                             ; 005c71ce
    POP ESI                             ; 005c71cf
    POP EBX                             ; 005c71d0
    RET                                 ; 005c71d1

