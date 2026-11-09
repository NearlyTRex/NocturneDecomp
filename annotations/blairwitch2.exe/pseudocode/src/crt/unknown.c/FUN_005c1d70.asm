; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c1d70(byte *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   crt_unknown.c_FUN_005c1f32 at 005c1f47
;
; Called Functions:
;   crt_unknown.c_FUN_005bc220
;   unkafter_morph.cpp_FUN_005c476c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c1d70
        ;   Label: crt_unknown.c_FUN_005c1d70
    MOV EBP,ESP                         ; 005c1d71
    PUSH EBX                            ; 005c1d73
    PUSH ESI                            ; 005c1d74
    PUSH EDI                            ; 005c1d75
    SUB ESP,0x30                        ; 005c1d76
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c1d79
    MOV dword ptr [EBP + -0x1c],EAX     ; 005c1d7c
    MOV DL,byte ptr [EAX]               ; 005c1d7f
        ;   Label: LAB_005c1d7f
    CMP DL,0x20                         ; 005c1d81
    JZ 0x005c1d90                       ; 005c1d84
        ;   XREF to: 005c1d90 (CONDITIONAL_JUMP)  ; LAB_005c1d90
    CMP DL,0x9                          ; 005c1d86
    JC 0x005c1d93                       ; 005c1d89
        ;   XREF to: 005c1d93 (CONDITIONAL_JUMP)  ; LAB_005c1d93
    CMP DL,0xd                          ; 005c1d8b
    JA 0x005c1d93                       ; 005c1d8e
        ;   XREF to: 005c1d93 (CONDITIONAL_JUMP)  ; LAB_005c1d93
    INC EAX                             ; 005c1d90
        ;   Label: LAB_005c1d90
    JMP 0x005c1d7f                      ; 005c1d91
        ;   XREF to: 005c1d7f (UNCONDITIONAL_JUMP)  ; LAB_005c1d7f
    XOR DH,DH                           ; 005c1d93
        ;   Label: LAB_005c1d93
    LEA EBX,[EAX + 0x1]                 ; 005c1d95
    MOV byte ptr [EBP + -0x10],DH       ; 005c1d98
    CMP DL,0x2b                         ; 005c1d9b
    JNZ 0x005c1da4                      ; 005c1d9e
        ;   XREF to: 005c1da4 (CONDITIONAL_JUMP)  ; LAB_005c1da4
    MOV EAX,EBX                         ; 005c1da0
    JMP 0x005c1db0                      ; 005c1da2
        ;   XREF to: 005c1db0 (UNCONDITIONAL_JUMP)  ; LAB_005c1db0
    CMP DL,0x2d                         ; 005c1da4
        ;   Label: LAB_005c1da4
    JNZ 0x005c1db0                      ; 005c1da7
        ;   XREF to: 005c1db0 (CONDITIONAL_JUMP)  ; LAB_005c1db0
    MOV CL,0x1                          ; 005c1da9
    MOV EAX,EBX                         ; 005c1dab
    MOV byte ptr [EBP + -0x10],CL       ; 005c1dad
    MOV DH,0x30                         ; 005c1db0
        ;   Label: LAB_005c1db0
    XOR EBX,EBX                         ; 005c1db2
    XOR EDI,EDI                         ; 005c1db4
    MOV DL,byte ptr [EAX]               ; 005c1db6
        ;   Label: LAB_005c1db6
    INC EAX                             ; 005c1db8
    CMP DL,0x2e                         ; 005c1db9
    JNZ 0x005c1dd0                      ; 005c1dbc
        ;   XREF to: 005c1dd0 (CONDITIONAL_JUMP)  ; LAB_005c1dd0
    MOV CL,byte ptr [EBP + -0x10]       ; 005c1dbe
    TEST CL,0x8                         ; 005c1dc1
    JNZ 0x005c1df8                      ; 005c1dc4
        ;   XREF to: 005c1df8 (CONDITIONAL_JUMP)  ; LAB_005c1df8
    MOV CH,CL                           ; 005c1dc6
    OR CH,0x8                           ; 005c1dc8
    MOV byte ptr [EBP + -0x10],CH       ; 005c1dcb
    JMP 0x005c1db6                      ; 005c1dce
        ;   XREF to: 005c1db6 (UNCONDITIONAL_JUMP)  ; LAB_005c1db6
    CMP DL,0x30                         ; 005c1dd0
        ;   Label: LAB_005c1dd0
    JC 0x005c1df8                       ; 005c1dd3
        ;   XREF to: 005c1df8 (CONDITIONAL_JUMP)  ; LAB_005c1df8
    CMP DL,0x39                         ; 005c1dd5
    JA 0x005c1df8                       ; 005c1dd8
        ;   XREF to: 005c1df8 (CONDITIONAL_JUMP)  ; LAB_005c1df8
    TEST byte ptr [EBP + -0x10],0x8     ; 005c1dda
    JZ 0x005c1de1                       ; 005c1dde
        ;   XREF to: 005c1de1 (CONDITIONAL_JUMP)  ; LAB_005c1de1
    INC EDI                             ; 005c1de0
    OR DH,DL                            ; 005c1de1
        ;   Label: LAB_005c1de1
    CMP DH,0x30                         ; 005c1de3
    JZ 0x005c1df2                       ; 005c1de6
        ;   XREF to: 005c1df2 (CONDITIONAL_JUMP)  ; LAB_005c1df2
    CMP EBX,0x13                        ; 005c1de8
    JGE 0x005c1df1                      ; 005c1deb
        ;   XREF to: 005c1df1 (CONDITIONAL_JUMP)  ; LAB_005c1df1
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],DL ; 005c1ded
    INC EBX                             ; 005c1df1
        ;   Label: LAB_005c1df1
    OR byte ptr [EBP + -0x10],0x4       ; 005c1df2
        ;   Label: LAB_005c1df2
    JMP 0x005c1db6                      ; 005c1df6
        ;   XREF to: 005c1db6 (UNCONDITIONAL_JUMP)  ; LAB_005c1db6
    MOV DH,byte ptr [EBP + -0x10]       ; 005c1df8
        ;   Label: LAB_005c1df8
    XOR ESI,ESI                         ; 005c1dfb
    TEST DH,0x4                         ; 005c1dfd
    JZ 0x005c1e82                       ; 005c1e00
        ;   XREF to: 005c1e82 (CONDITIONAL_JUMP)  ; LAB_005c1e82
    CMP DL,0x65                         ; 005c1e06
    JZ 0x005c1e14                       ; 005c1e09
        ;   XREF to: 005c1e14 (CONDITIONAL_JUMP)  ; LAB_005c1e14
    CMP DL,0x45                         ; 005c1e0b
    JNZ 0x005c1e7e                      ; 005c1e0e
        ;   XREF to: 005c1e7e (CONDITIONAL_JUMP)  ; LAB_005c1e7e
    LEA EDX,[EAX + -0x1]                ; 005c1e14
        ;   Label: LAB_005c1e14
    MOV CL,byte ptr [EAX]               ; 005c1e17
    MOV dword ptr [EBP + -0x18],EDX     ; 005c1e19
    LEA EDX,[EAX + 0x1]                 ; 005c1e1c
    CMP CL,0x2b                         ; 005c1e1f
    JNZ 0x005c1e28                      ; 005c1e22
        ;   XREF to: 005c1e28 (CONDITIONAL_JUMP)  ; LAB_005c1e28
    MOV EAX,EDX                         ; 005c1e24
    JMP 0x005c1e38                      ; 005c1e26
        ;   XREF to: 005c1e38 (UNCONDITIONAL_JUMP)  ; LAB_005c1e38
    CMP CL,0x2d                         ; 005c1e28
        ;   Label: LAB_005c1e28
    JNZ 0x005c1e38                      ; 005c1e2b
        ;   XREF to: 005c1e38 (CONDITIONAL_JUMP)  ; LAB_005c1e38
    MOV CL,byte ptr [EBP + -0x10]       ; 005c1e2d
    OR CL,0x2                           ; 005c1e30
    MOV EAX,EDX                         ; 005c1e33
    MOV byte ptr [EBP + -0x10],CL       ; 005c1e35
    AND byte ptr [EBP + -0x10],0xfb     ; 005c1e38
        ;   Label: LAB_005c1e38
    MOV DL,byte ptr [EAX]               ; 005c1e3c
        ;   Label: LAB_005c1e3c
    CMP DL,0x30                         ; 005c1e3e
    JC 0x005c1e6b                       ; 005c1e41
        ;   XREF to: 005c1e6b (CONDITIONAL_JUMP)  ; LAB_005c1e6b
    CMP DL,0x39                         ; 005c1e43
    JA 0x005c1e6b                       ; 005c1e46
        ;   XREF to: 005c1e6b (CONDITIONAL_JUMP)  ; LAB_005c1e6b
    CMP ESI,0x3e8                       ; 005c1e48
    JGE 0x005c1e5f                      ; 005c1e4e
        ;   XREF to: 005c1e5f (CONDITIONAL_JUMP)  ; LAB_005c1e5f
    IMUL ESI,ESI,0xa                    ; 005c1e50
    MOV dword ptr [EBP + -0x14],ESI     ; 005c1e53
    MOVZX ESI,DL                        ; 005c1e56
    ADD ESI,dword ptr [EBP + -0x14]     ; 005c1e59
    SUB ESI,0x30                        ; 005c1e5c
    MOV DL,byte ptr [EBP + -0x10]       ; 005c1e5f
        ;   Label: LAB_005c1e5f
    OR DL,0x4                           ; 005c1e62
    INC EAX                             ; 005c1e65
    MOV byte ptr [EBP + -0x10],DL       ; 005c1e66
    JMP 0x005c1e3c                      ; 005c1e69
        ;   XREF to: 005c1e3c (UNCONDITIONAL_JUMP)  ; LAB_005c1e3c
    TEST byte ptr [EBP + -0x10],0x2     ; 005c1e6b
        ;   Label: LAB_005c1e6b
    JZ 0x005c1e73                       ; 005c1e6f
        ;   XREF to: 005c1e73 (CONDITIONAL_JUMP)  ; LAB_005c1e73
    NEG ESI                             ; 005c1e71
    TEST byte ptr [EBP + -0x10],0x4     ; 005c1e73
        ;   Label: LAB_005c1e73
    JNZ 0x005c1e7f                      ; 005c1e77
        ;   XREF to: 005c1e7f (CONDITIONAL_JUMP)  ; LAB_005c1e7f
    MOV EAX,dword ptr [EBP + -0x18]     ; 005c1e79
    JMP 0x005c1e7f                      ; 005c1e7c
        ;   XREF to: 005c1e7f (UNCONDITIONAL_JUMP)  ; LAB_005c1e7f
    DEC EAX                             ; 005c1e7e
        ;   Label: LAB_005c1e7e
    MOV dword ptr [EBP + -0x1c],EAX     ; 005c1e7f
        ;   Label: LAB_005c1e7f
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c1e82
        ;   Label: LAB_005c1e82
    TEST ECX,ECX                        ; 005c1e85
    JZ 0x005c1e8e                       ; 005c1e87
        ;   XREF to: 005c1e8e (CONDITIONAL_JUMP)  ; LAB_005c1e8e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 005c1e89
    MOV dword ptr [ECX],EAX             ; 005c1e8c
    SUB ESI,EDI                         ; 005c1e8e
        ;   Label: LAB_005c1e8e
    CMP EBX,0x13                        ; 005c1e90
    JLE 0x005c1e9f                      ; 005c1e93
        ;   XREF to: 005c1e9f (CONDITIONAL_JUMP)  ; LAB_005c1e9f
    SUB EBX,0x13                        ; 005c1e95
    ADD ESI,EBX                         ; 005c1e98
    MOV EBX,0x13                        ; 005c1e9a
    TEST EBX,EBX                        ; 005c1e9f
        ;   Label: LAB_005c1e9f
    JLE 0x005c1eae                      ; 005c1ea1
        ;   XREF to: 005c1eae (CONDITIONAL_JUMP)  ; LAB_005c1eae
    CMP byte ptr [EBX + EBP*0x1 + -0x3d],0x30 ; 005c1ea3
    JNZ 0x005c1eae                      ; 005c1ea8
        ;   XREF to: 005c1eae (CONDITIONAL_JUMP)  ; LAB_005c1eae
    INC ESI                             ; 005c1eaa
    DEC EBX                             ; 005c1eab
    JMP 0x005c1e9f                      ; 005c1eac
        ;   XREF to: 005c1e9f (UNCONDITIONAL_JUMP)  ; LAB_005c1e9f
    TEST EBX,EBX                        ; 005c1eae
        ;   Label: LAB_005c1eae
    JNZ 0x005c1ec4                      ; 005c1eb0
        ;   XREF to: 005c1ec4 (CONDITIONAL_JUMP)  ; LAB_005c1ec4
    MOV EAX,dword ptr [EBP + 0xc]       ; 005c1eb2
    MOV word ptr [EAX + 0x8],0x0        ; 005c1eb5
    MOV dword ptr [EAX + 0x4],EBX       ; 005c1ebb
    MOV dword ptr [EAX],EBX             ; 005c1ebe
    XOR EAX,EAX                         ; 005c1ec0
    JMP 0x005c1f2a                      ; 005c1ec2
        ;   XREF to: 005c1f2a (UNCONDITIONAL_JUMP)  ; LAB_005c1f2a
    XOR AL,AL                           ; 005c1ec4
        ;   Label: LAB_005c1ec4
    LEA EDX,[EBP + -0x28]               ; 005c1ec6
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],AL ; 005c1ec9
    LEA EAX,[EBP + -0x3c]               ; 005c1ecd
    CALL unkafter_morph.cpp_FUN_005c476c ; 005c1ed0
        ;   XREF to: 005c476c (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c476c()
    TEST ESI,ESI                        ; 005c1ed5
    JZ 0x005c1ee6                       ; 005c1ed7
        ;   XREF to: 005c1ee6 (CONDITIONAL_JUMP)  ; LAB_005c1ee6
    PUSH ESI                            ; 005c1ed9
    LEA EAX,[EBP + -0x28]               ; 005c1eda
    PUSH EAX                            ; 005c1edd
    CALL crt_unknown.c_FUN_005bc220     ; 005c1ede
        ;   XREF to: 005bc220 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc220()
    ADD ESP,0x8                         ; 005c1ee3
    TEST byte ptr [EBP + -0x10],0x1     ; 005c1ee6
        ;   Label: LAB_005c1ee6
    JZ 0x005c1ef0                       ; 005c1eea
        ;   XREF to: 005c1ef0 (CONDITIONAL_JUMP)  ; LAB_005c1ef0
    OR byte ptr [EBP + -0x1f],0x80      ; 005c1eec
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c1ef0
        ;   Label: LAB_005c1ef0
    MOV EAX,dword ptr [EBP + -0x20]     ; 005c1ef3
    MOV word ptr [EDX + 0x8],AX         ; 005c1ef6
    MOV EAX,dword ptr [EBP + -0x24]     ; 005c1efa
    MOV dword ptr [EDX + 0x4],EAX       ; 005c1efd
    MOV EAX,dword ptr [EBP + -0x28]     ; 005c1f00
    MOV dword ptr [EDX],EAX             ; 005c1f03
    LEA EAX,[ESI + EBX*0x1 + -0x1]      ; 005c1f05
    CMP EAX,0x134                       ; 005c1f09
    JLE 0x005c1f17                      ; 005c1f0e
        ;   XREF to: 005c1f17 (CONDITIONAL_JUMP)  ; LAB_005c1f17
    MOV EAX,0x3                         ; 005c1f10
    JMP 0x005c1f2a                      ; 005c1f15
        ;   XREF to: 005c1f2a (UNCONDITIONAL_JUMP)  ; LAB_005c1f2a
    CMP EAX,0xfffffecc                  ; 005c1f17
        ;   Label: LAB_005c1f17
    JGE 0x005c1f25                      ; 005c1f1c
        ;   XREF to: 005c1f25 (CONDITIONAL_JUMP)  ; LAB_005c1f25
    MOV EAX,0x2                         ; 005c1f1e
    JMP 0x005c1f2a                      ; 005c1f23
        ;   XREF to: 005c1f2a (UNCONDITIONAL_JUMP)  ; LAB_005c1f2a
    MOV EAX,0x1                         ; 005c1f25
        ;   Label: LAB_005c1f25
    LEA ESP,[EBP + -0xc]                ; 005c1f2a
        ;   Label: LAB_005c1f2a
    POP EDI                             ; 005c1f2d
    POP ESI                             ; 005c1f2e
    POP EBX                             ; 005c1f2f
    POP EBP                             ; 005c1f30
    RET                                 ; 005c1f31

