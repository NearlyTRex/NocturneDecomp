; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005c3c08(byte *param_1,uint *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3320 at 005c355b
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   crt_unknown.c_FUN_005c391c
;   crt_unknown.c_FUN_005c394c
;   crt_unknown.c_FUN_005c39c8
;   crt_unknown.c_FUN_005c3a2c
;   crt_unknown.c_FUN_005c3b30
;   crt_unknown.c_FUN_005c3b4c
;   crt_unknown.c_FUN_005c426c
;   unkafter_zombie.cpp_FUN_005ca4b0
;   unkafter_zombie.cpp_FUN_005ca500
;   unkafter_zombie.cpp_FUN_005ca610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3c08
        ;   Label: crt_unknown.c_FUN_005c3c08
    PUSH ESI                            ; 005c3c09
    PUSH EDI                            ; 005c3c0a
    PUSH ES                             ; 005c3c0b
    PUSH EBP                            ; 005c3c0c
    SUB ESP,0x10                        ; 005c3c0d
    MOV ESI,dword ptr [ESP + 0x28]      ; 005c3c10
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005c3c14
    MOV EBX,dword ptr [ESP + 0x30]      ; 005c3c18
    MOV dword ptr [EBX + 0x20],0x0      ; 005c3c1c
    MOV dword ptr [EBX + 0x24],0x0      ; 005c3c23
    MOV dword ptr [EBX + 0x28],0x0      ; 005c3c2a
    MOV dword ptr [EBX + 0x2c],0x0      ; 005c3c31
    MOV word ptr [ESP + 0xc],DS         ; 005c3c38
    MOV dword ptr [EBX + 0x30],0x0      ; 005c3c3c
    MOV EDI,ESI                         ; 005c3c43
    MOV AL,byte ptr [EBX + 0x15]        ; 005c3c45
    MOV dword ptr [EBX + 0x34],0x0      ; 005c3c48
    CMP AL,0x69                         ; 005c3c4f
    JC 0x005c3c71                       ; 005c3c51
        ;   XREF to: 005c3c71 (CONDITIONAL_JUMP)  ; LAB_005c3c71
    JBE 0x005c3cde                      ; 005c3c53
        ;   XREF to: 005c3cde (CONDITIONAL_JUMP)  ; LAB_005c3cde
    CMP AL,0x75                         ; 005c3c59
    JC 0x005c3c68                       ; 005c3c5b
        ;   XREF to: 005c3c68 (CONDITIONAL_JUMP)  ; LAB_005c3c68
    JBE 0x005c3c84                      ; 005c3c5d
        ;   XREF to: 005c3c84 (CONDITIONAL_JUMP)  ; LAB_005c3c84
    CMP AL,0x78                         ; 005c3c5f
    JZ 0x005c3c84                       ; 005c3c61
        ;   XREF to: 005c3c84 (CONDITIONAL_JUMP)  ; LAB_005c3c84
    JMP 0x005c3da5                      ; 005c3c63
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    CMP AL,0x6f                         ; 005c3c68
        ;   Label: LAB_005c3c68
    JZ 0x005c3c84                       ; 005c3c6a
        ;   XREF to: 005c3c84 (CONDITIONAL_JUMP)  ; LAB_005c3c84
    JMP 0x005c3da5                      ; 005c3c6c
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    CMP AL,0x58                         ; 005c3c71
        ;   Label: LAB_005c3c71
    JC 0x005c3da5                       ; 005c3c73
        ;   XREF to: 005c3da5 (CONDITIONAL_JUMP)  ; LAB_005c3da5
    JBE 0x005c3c84                      ; 005c3c79
        ;   XREF to: 005c3c84 (CONDITIONAL_JUMP)  ; LAB_005c3c84
    CMP AL,0x64                         ; 005c3c7b
    JZ 0x005c3cde                       ; 005c3c7d
        ;   XREF to: 005c3cde (CONDITIONAL_JUMP)  ; LAB_005c3cde
    JMP 0x005c3da5                      ; 005c3c7f
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    TEST byte ptr [EBX + 0x1f],0x1      ; 005c3c84
        ;   Label: LAB_005c3c84
    JZ 0x005c3caa                       ; 005c3c88
        ;   XREF to: 005c3caa (CONDITIONAL_JUMP)  ; LAB_005c3caa
    MOV EBP,dword ptr [EDX]             ; 005c3c8a
    ADD EBP,0x4                         ; 005c3c8c
    MOV dword ptr [EDX],EBP             ; 005c3c8f
    MOV EAX,dword ptr [EBP + -0x4]      ; 005c3c91
    MOV dword ptr [ESP],EAX             ; 005c3c94
    MOV EAX,dword ptr [EDX]             ; 005c3c97
    ADD EAX,0x4                         ; 005c3c99
    MOV dword ptr [EDX],EAX             ; 005c3c9c
    MOV EAX,dword ptr [EAX + -0x4]      ; 005c3c9e
    MOV dword ptr [ESP + 0x4],EAX       ; 005c3ca1
    JMP 0x005c3da5                      ; 005c3ca5
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    TEST byte ptr [EBX + 0x1e],0x20     ; 005c3caa
        ;   Label: LAB_005c3caa
    JZ 0x005c3cbf                       ; 005c3cae
        ;   XREF to: 005c3cbf (CONDITIONAL_JUMP)  ; LAB_005c3cbf
    MOV ECX,dword ptr [EDX]             ; 005c3cb0
    ADD ECX,0x4                         ; 005c3cb2
    MOV dword ptr [EDX],ECX             ; 005c3cb5
    MOV ECX,dword ptr [ECX + -0x4]      ; 005c3cb7
    JMP 0x005c3da5                      ; 005c3cba
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    MOV EAX,dword ptr [EDX]             ; 005c3cbf
        ;   Label: LAB_005c3cbf
    ADD EAX,0x4                         ; 005c3cc1
    MOV dword ptr [EDX],EAX             ; 005c3cc4
    MOV ECX,dword ptr [EAX + -0x4]      ; 005c3cc6
    TEST byte ptr [EBX + 0x1e],0x10     ; 005c3cc9
    JZ 0x005c3da5                       ; 005c3ccd
        ;   XREF to: 005c3da5 (CONDITIONAL_JUMP)  ; LAB_005c3da5
    AND ECX,0xffff                      ; 005c3cd3
    JMP 0x005c3da5                      ; 005c3cd9
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    TEST byte ptr [EBX + 0x1f],0x1      ; 005c3cde
        ;   Label: LAB_005c3cde
    JZ 0x005c3d01                       ; 005c3ce2
        ;   XREF to: 005c3d01 (CONDITIONAL_JUMP)  ; LAB_005c3d01
    MOV EAX,dword ptr [EDX]             ; 005c3ce4
    ADD EAX,0x4                         ; 005c3ce6
    MOV dword ptr [EDX],EAX             ; 005c3ce9
    MOV EAX,dword ptr [EAX + -0x4]      ; 005c3ceb
    MOV dword ptr [ESP],EAX             ; 005c3cee
    MOV EBP,dword ptr [EDX]             ; 005c3cf1
    ADD EBP,0x4                         ; 005c3cf3
    MOV dword ptr [EDX],EBP             ; 005c3cf6
    MOV EAX,dword ptr [EBP + -0x4]      ; 005c3cf8
    MOV dword ptr [ESP + 0x4],EAX       ; 005c3cfb
    JMP 0x005c3d27                      ; 005c3cff
        ;   XREF to: 005c3d27 (UNCONDITIONAL_JUMP)  ; LAB_005c3d27
    TEST byte ptr [EBX + 0x1e],0x20     ; 005c3d01
        ;   Label: LAB_005c3d01
    JZ 0x005c3d13                       ; 005c3d05
        ;   XREF to: 005c3d13 (CONDITIONAL_JUMP)  ; LAB_005c3d13
    MOV EBP,dword ptr [EDX]             ; 005c3d07
    ADD EBP,0x4                         ; 005c3d09
    MOV dword ptr [EDX],EBP             ; 005c3d0c
    MOV ECX,dword ptr [EBP + -0x4]      ; 005c3d0e
    JMP 0x005c3d27                      ; 005c3d11
        ;   XREF to: 005c3d27 (UNCONDITIONAL_JUMP)  ; LAB_005c3d27
    MOV ECX,dword ptr [EDX]             ; 005c3d13
        ;   Label: LAB_005c3d13
    ADD ECX,0x4                         ; 005c3d15
    MOV dword ptr [EDX],ECX             ; 005c3d18
    MOV AL,byte ptr [EBX + 0x1e]        ; 005c3d1a
    MOV ECX,dword ptr [ECX + -0x4]      ; 005c3d1d
    TEST AL,0x10                        ; 005c3d20
    JZ 0x005c3d27                       ; 005c3d22
        ;   XREF to: 005c3d27 (CONDITIONAL_JUMP)  ; LAB_005c3d27
    MOVSX ECX,CX                        ; 005c3d24
    XOR EAX,EAX                         ; 005c3d27
        ;   Label: LAB_005c3d27
    TEST byte ptr [EBX + 0x1f],0x1      ; 005c3d29
    JZ 0x005c3d38                       ; 005c3d2d
        ;   XREF to: 005c3d38 (CONDITIONAL_JUMP)  ; LAB_005c3d38
    TEST byte ptr [ESP + 0x7],0x80      ; 005c3d2f
    JZ 0x005c3d3c                       ; 005c3d34
        ;   XREF to: 005c3d3c (CONDITIONAL_JUMP)  ; LAB_005c3d3c
    JMP 0x005c3d40                      ; 005c3d36
        ;   XREF to: 005c3d40 (UNCONDITIONAL_JUMP)  ; LAB_005c3d40
    TEST ECX,ECX                        ; 005c3d38
        ;   Label: LAB_005c3d38
    JL 0x005c3d40                       ; 005c3d3a
        ;   XREF to: 005c3d40 (CONDITIONAL_JUMP)  ; LAB_005c3d40
    TEST EAX,EAX                        ; 005c3d3c
        ;   Label: LAB_005c3d3c
    JZ 0x005c3d7c                       ; 005c3d3e
        ;   XREF to: 005c3d7c (CONDITIONAL_JUMP)  ; LAB_005c3d7c
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c3d40
        ;   Label: LAB_005c3d40
    LEA EBP,[EAX + 0x1]                 ; 005c3d43
    MOV dword ptr [EBX + 0x20],EBP      ; 005c3d46
    MOV byte ptr [ESI + EAX*0x1],0x2d   ; 005c3d49
    TEST byte ptr [EBX + 0x1f],0x1      ; 005c3d4d
    JZ 0x005c3d78                       ; 005c3d51
        ;   XREF to: 005c3d78 (CONDITIONAL_JUMP)  ; LAB_005c3d78
    MOV EAX,dword ptr [ESP]             ; 005c3d53
    MOV EBP,dword ptr [ESP + 0x4]       ; 005c3d56
    NOT EAX                             ; 005c3d5a
    NOT EBP                             ; 005c3d5c
    MOV dword ptr [ESP],EAX             ; 005c3d5e
    MOV dword ptr [ESP + 0x4],EBP       ; 005c3d61
    INC EAX                             ; 005c3d65
    MOV dword ptr [ESP],EAX             ; 005c3d66
    JNZ 0x005c3d70                      ; 005c3d69
        ;   XREF to: 005c3d70 (CONDITIONAL_JUMP)  ; LAB_005c3d70
    LEA EAX,[EBP + 0x1]                 ; 005c3d6b
    JMP 0x005c3d72                      ; 005c3d6e
        ;   XREF to: 005c3d72 (UNCONDITIONAL_JUMP)  ; LAB_005c3d72
    MOV EAX,EBP                         ; 005c3d70
        ;   Label: LAB_005c3d70
    MOV dword ptr [ESP + 0x4],EAX       ; 005c3d72
        ;   Label: LAB_005c3d72
    JMP 0x005c3da5                      ; 005c3d76
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    NEG ECX                             ; 005c3d78
        ;   Label: LAB_005c3d78
    JMP 0x005c3da5                      ; 005c3d7a
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    MOV AH,byte ptr [EBX + 0x1e]        ; 005c3d7c
        ;   Label: LAB_005c3d7c
    TEST AH,0x4                         ; 005c3d7f
    JZ 0x005c3d93                       ; 005c3d82
        ;   XREF to: 005c3d93 (CONDITIONAL_JUMP)  ; LAB_005c3d93
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c3d84
    LEA EBP,[EAX + 0x1]                 ; 005c3d87
    MOV dword ptr [EBX + 0x20],EBP      ; 005c3d8a
    MOV byte ptr [ESI + EAX*0x1],0x2b   ; 005c3d8d
    JMP 0x005c3da5                      ; 005c3d91
        ;   XREF to: 005c3da5 (UNCONDITIONAL_JUMP)  ; LAB_005c3da5
    TEST AH,0x2                         ; 005c3d93
        ;   Label: LAB_005c3d93
    JZ 0x005c3da5                       ; 005c3d96
        ;   XREF to: 005c3da5 (CONDITIONAL_JUMP)  ; LAB_005c3da5
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c3d98
    LEA EBP,[EAX + 0x1]                 ; 005c3d9b
    MOV dword ptr [EBX + 0x20],EBP      ; 005c3d9e
    MOV byte ptr [ESI + EAX*0x1],0x20   ; 005c3da1
    MOV AL,byte ptr [EBX + 0x15]        ; 005c3da5
        ;   Label: LAB_005c3da5
    MOV EBP,0xa                         ; 005c3da8
    CMP AL,0x64                         ; 005c3dad
    JC 0x005c3e12                       ; 005c3daf
        ;   XREF to: 005c3e12 (CONDITIONAL_JUMP)  ; LAB_005c3e12
    JBE 0x005c3ff7                      ; 005c3db1
        ;   XREF to: 005c3ff7 (CONDITIONAL_JUMP)  ; LAB_005c3ff7
    CMP AL,0x6f                         ; 005c3db7
    JC 0x005c3df3                       ; 005c3db9
        ;   XREF to: 005c3df3 (CONDITIONAL_JUMP)  ; LAB_005c3df3
    JBE 0x005c3fd7                      ; 005c3dbb
        ;   XREF to: 005c3fd7 (CONDITIONAL_JUMP)  ; LAB_005c3fd7
    CMP AL,0x73                         ; 005c3dc1
    JC 0x005c3de6                       ; 005c3dc3
        ;   XREF to: 005c3de6 (CONDITIONAL_JUMP)  ; LAB_005c3de6
    JBE 0x005c3ec3                      ; 005c3dc5
        ;   XREF to: 005c3ec3 (CONDITIONAL_JUMP)  ; LAB_005c3ec3
    CMP AL,0x75                         ; 005c3dcb
    JC 0x005c424a                       ; 005c3dcd
        ;   XREF to: 005c424a (CONDITIONAL_JUMP)  ; LAB_005c424a
    JBE 0x005c3ff7                      ; 005c3dd3
        ;   XREF to: 005c3ff7 (CONDITIONAL_JUMP)  ; LAB_005c3ff7
    CMP AL,0x78                         ; 005c3dd9
    JZ 0x005c3f95                       ; 005c3ddb
        ;   XREF to: 005c3f95 (CONDITIONAL_JUMP)  ; LAB_005c3f95
    JMP 0x005c424a                      ; 005c3de1
        ;   XREF to: 005c424a (UNCONDITIONAL_JUMP)  ; LAB_005c424a
    CMP AL,0x70                         ; 005c3de6
        ;   Label: LAB_005c3de6
    JZ 0x005c40d2                       ; 005c3de8
        ;   XREF to: 005c40d2 (CONDITIONAL_JUMP)  ; LAB_005c40d2
    JMP 0x005c424a                      ; 005c3dee
        ;   XREF to: 005c424a (UNCONDITIONAL_JUMP)  ; LAB_005c424a
    CMP AL,0x66                         ; 005c3df3
        ;   Label: LAB_005c3df3
    JC 0x005c3e99                       ; 005c3df5
        ;   XREF to: 005c3e99 (CONDITIONAL_JUMP)  ; LAB_005c3e99
    JBE 0x005c3e63                      ; 005c3dfb
        ;   XREF to: 005c3e63 (CONDITIONAL_JUMP)  ; LAB_005c3e63
    CMP AL,0x67                         ; 005c3dfd
    JBE 0x005c3e99                      ; 005c3dff
        ;   XREF to: 005c3e99 (CONDITIONAL_JUMP)  ; LAB_005c3e99
    CMP AL,0x69                         ; 005c3e05
    JZ 0x005c3ff7                       ; 005c3e07
        ;   XREF to: 005c3ff7 (CONDITIONAL_JUMP)  ; LAB_005c3ff7
    JMP 0x005c424a                      ; 005c3e0d
        ;   XREF to: 005c424a (UNCONDITIONAL_JUMP)  ; LAB_005c424a
    CMP AL,0x47                         ; 005c3e12
        ;   Label: LAB_005c3e12
    JC 0x005c3e4e                       ; 005c3e14
        ;   XREF to: 005c3e4e (CONDITIONAL_JUMP)  ; LAB_005c3e4e
    JBE 0x005c3e99                      ; 005c3e16
        ;   XREF to: 005c3e99 (CONDITIONAL_JUMP)  ; LAB_005c3e99
    CMP AL,0x53                         ; 005c3e1c
    JC 0x005c3e41                       ; 005c3e1e
        ;   XREF to: 005c3e41 (CONDITIONAL_JUMP)  ; LAB_005c3e41
    JBE 0x005c3ec3                      ; 005c3e20
        ;   XREF to: 005c3ec3 (CONDITIONAL_JUMP)  ; LAB_005c3ec3
    CMP AL,0x58                         ; 005c3e26
    JC 0x005c424a                       ; 005c3e28
        ;   XREF to: 005c424a (CONDITIONAL_JUMP)  ; LAB_005c424a
    JBE 0x005c3f95                      ; 005c3e2e
        ;   XREF to: 005c3f95 (CONDITIONAL_JUMP)  ; LAB_005c3f95
    CMP AL,0x63                         ; 005c3e34
    JZ 0x005c416a                       ; 005c3e36
        ;   XREF to: 005c416a (CONDITIONAL_JUMP)  ; LAB_005c416a
    JMP 0x005c424a                      ; 005c3e3c
        ;   XREF to: 005c424a (UNCONDITIONAL_JUMP)  ; LAB_005c424a
    CMP AL,0x50                         ; 005c3e41
        ;   Label: LAB_005c3e41
    JZ 0x005c40d2                       ; 005c3e43
        ;   XREF to: 005c40d2 (CONDITIONAL_JUMP)  ; LAB_005c40d2
    JMP 0x005c424a                      ; 005c3e49
        ;   XREF to: 005c424a (UNCONDITIONAL_JUMP)  ; LAB_005c424a
    CMP AL,0x45                         ; 005c3e4e
        ;   Label: LAB_005c3e4e
    JC 0x005c3e56                       ; 005c3e50
        ;   XREF to: 005c3e56 (CONDITIONAL_JUMP)  ; LAB_005c3e56
    JBE 0x005c3e99                      ; 005c3e52
        ;   XREF to: 005c3e99 (CONDITIONAL_JUMP)  ; LAB_005c3e99
    JMP 0x005c3e63                      ; 005c3e54
        ;   XREF to: 005c3e63 (UNCONDITIONAL_JUMP)  ; LAB_005c3e63
    CMP AL,0x43                         ; 005c3e56
        ;   Label: LAB_005c3e56
    JZ 0x005c4201                       ; 005c3e58
        ;   XREF to: 005c4201 (CONDITIONAL_JUMP)  ; LAB_005c4201
    JMP 0x005c424a                      ; 005c3e5e
        ;   XREF to: 005c424a (UNCONDITIONAL_JUMP)  ; LAB_005c424a
    TEST byte ptr [EBX + 0x1e],0x10     ; 005c3e63
        ;   Label: LAB_005c3e63
    JZ 0x005c3e99                       ; 005c3e67
        ;   XREF to: 005c3e99 (CONDITIONAL_JUMP)  ; LAB_005c3e99
    MOV EBP,dword ptr [EDX]             ; 005c3e69
    ADD EBP,0x4                         ; 005c3e6b
    MOV dword ptr [EDX],EBP             ; 005c3e6e
    PUSH EBX                            ; 005c3e70
    MOV ECX,dword ptr [EBP + -0x4]      ; 005c3e71
    PUSH ECX                            ; 005c3e74
    PUSH ESI                            ; 005c3e75
    CALL crt_unknown.c_FUN_005c3a2c     ; 005c3e76
        ;   XREF to: 005c3a2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3a2c()
    ADD ESP,0xc                         ; 005c3e7b
    MOV AX,DS                           ; 005c3e7e
    PUSH -0x1                           ; 005c3e80
    AND EAX,0xffff                      ; 005c3e82
    PUSH EAX                            ; 005c3e87
    PUSH ESI                            ; 005c3e88
    CALL crt_unknown.c_FUN_005c391c     ; 005c3e89
        ;   XREF to: 005c391c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c391c()
    ADD ESP,0xc                         ; 005c3e8e
    MOV dword ptr [EBX + 0x28],EAX      ; 005c3e91
    JMP 0x005c425d                      ; 005c3e94
        ;   XREF to: 005c425d (UNCONDITIONAL_JUMP)  ; LAB_005c425d
    PUSH EBX                            ; 005c3e99
        ;   Label: LAB_005c3e99
    PUSH EDX                            ; 005c3e9a
    PUSH ESI                            ; 005c3e9b
    CALL crt_unknown.c_FUN_005c3b30     ; 005c3e9c
        ;   XREF to: 005c3b30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3b30()
    ADD ESP,0xc                         ; 005c3ea1
    PUSH EBX                            ; 005c3ea4
    CALL crt_unknown.c_FUN_005c3b4c     ; 005c3ea5
        ;   XREF to: 005c3b4c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3b4c()
    ADD ESP,0x4                         ; 005c3eaa
    LEA EDI,[ESI + 0x1]                 ; 005c3ead
    MOV word ptr [ESP + 0xc],DS         ; 005c3eb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c3eb4
    MOV EAX,EDI                         ; 005c3eb8
    ADD ESP,0x10                        ; 005c3eba
    POP EBP                             ; 005c3ebd
    POP ES                              ; 005c3ebe
    POP EDI                             ; 005c3ebf
    POP ESI                             ; 005c3ec0
    POP EBX                             ; 005c3ec1
    RET                                 ; 005c3ec2
    MOV byte ptr [ESI],0x0              ; 005c3ec3
        ;   Label: LAB_005c3ec3
    MOV CH,byte ptr [EBX + 0x1e]        ; 005c3ec6
    TEST CH,0x80                        ; 005c3ec9
    JZ 0x005c3eed                       ; 005c3ecc
        ;   XREF to: 005c3eed (CONDITIONAL_JUMP)  ; LAB_005c3eed
    MOV ESI,dword ptr [EDX]             ; 005c3ece
    ADD ESI,0x8                         ; 005c3ed0
    MOV dword ptr [EDX],ESI             ; 005c3ed3
    MOV EDX,dword ptr [ESI + -0x8]      ; 005c3ed5
    MOV AX,word ptr [ESI + -0x4]        ; 005c3ed8
    TEST EDX,EDX                        ; 005c3edc
    JNZ 0x005c3ee5                      ; 005c3ede
        ;   XREF to: 005c3ee5 (CONDITIONAL_JUMP)  ; LAB_005c3ee5
    TEST AX,AX                          ; 005c3ee0
    JZ 0x005c3f16                       ; 005c3ee3
        ;   XREF to: 005c3f16 (CONDITIONAL_JUMP)  ; LAB_005c3f16
    MOV dword ptr [ESP + 0xc],EAX       ; 005c3ee5
        ;   Label: LAB_005c3ee5
    MOV EDI,EDX                         ; 005c3ee9
    JMP 0x005c3f16                      ; 005c3eeb
        ;   XREF to: 005c3f16 (UNCONDITIONAL_JUMP)  ; LAB_005c3f16
    TEST CH,0x40                        ; 005c3eed
        ;   Label: LAB_005c3eed
    JZ 0x005c3f02                       ; 005c3ef0
        ;   XREF to: 005c3f02 (CONDITIONAL_JUMP)  ; LAB_005c3f02
    MOV ECX,dword ptr [EDX]             ; 005c3ef2
    ADD ECX,0x4                         ; 005c3ef4
    MOV dword ptr [EDX],ECX             ; 005c3ef7
    MOV EAX,dword ptr [ECX + -0x4]      ; 005c3ef9
    TEST EAX,EAX                        ; 005c3efc
    JZ 0x005c3f16                       ; 005c3efe
        ;   XREF to: 005c3f16 (CONDITIONAL_JUMP)  ; LAB_005c3f16
    JMP 0x005c3f10                      ; 005c3f00
        ;   XREF to: 005c3f10 (UNCONDITIONAL_JUMP)  ; LAB_005c3f10
    MOV EAX,dword ptr [EDX]             ; 005c3f02
        ;   Label: LAB_005c3f02
    ADD EAX,0x4                         ; 005c3f04
    MOV dword ptr [EDX],EAX             ; 005c3f07
    MOV EAX,dword ptr [EAX + -0x4]      ; 005c3f09
    TEST EAX,EAX                        ; 005c3f0c
    JZ 0x005c3f16                       ; 005c3f0e
        ;   XREF to: 005c3f16 (CONDITIONAL_JUMP)  ; LAB_005c3f16
    MOV word ptr [ESP + 0xc],DS         ; 005c3f10
        ;   Label: LAB_005c3f10
    MOV EDI,EAX                         ; 005c3f14
    CMP byte ptr [EBX + 0x15],0x53      ; 005c3f16
        ;   Label: LAB_005c3f16
    JNZ 0x005c3f3e                      ; 005c3f1a
        ;   XREF to: 005c3f3e (CONDITIONAL_JUMP)  ; LAB_005c3f3e
    TEST byte ptr [EBX + 0x1e],0x10     ; 005c3f1c
    JZ 0x005c3f2a                       ; 005c3f20
        ;   XREF to: 005c3f2a (CONDITIONAL_JUMP)  ; LAB_005c3f2a
    MOV ECX,dword ptr [EBX + 0x8]       ; 005c3f22
    XOR EAX,EAX                         ; 005c3f25
    PUSH ECX                            ; 005c3f27
    JMP 0x005c3f5e                      ; 005c3f28
        ;   XREF to: 005c3f5e (UNCONDITIONAL_JUMP)  ; LAB_005c3f5e
    MOV EDX,dword ptr [EBX + 0x8]       ; 005c3f2a
        ;   Label: LAB_005c3f2a
    XOR EAX,EAX                         ; 005c3f2d
    PUSH EDX                            ; 005c3f2f
    MOV AX,word ptr [ESP + 0x10]        ; 005c3f30
    PUSH EAX                            ; 005c3f35
    PUSH EDI                            ; 005c3f36
    CALL crt_unknown.c_FUN_005c394c     ; 005c3f37
        ;   XREF to: 005c394c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c394c()
    JMP 0x005c3f6a                      ; 005c3f3c
        ;   XREF to: 005c3f6a (UNCONDITIONAL_JUMP)  ; LAB_005c3f6a
    TEST byte ptr [EBX + 0x1e],0x20     ; 005c3f3e
        ;   Label: LAB_005c3f3e
    JZ 0x005c3f58                       ; 005c3f42
        ;   XREF to: 005c3f58 (CONDITIONAL_JUMP)  ; LAB_005c3f58
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c3f44
    PUSH EAX                            ; 005c3f47
    XOR EAX,EAX                         ; 005c3f48
    MOV AX,word ptr [ESP + 0x10]        ; 005c3f4a
    PUSH EAX                            ; 005c3f4f
    PUSH EDI                            ; 005c3f50
    CALL crt_unknown.c_FUN_005c394c     ; 005c3f51
        ;   XREF to: 005c394c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c394c()
    JMP 0x005c3f6a                      ; 005c3f56
        ;   XREF to: 005c3f6a (UNCONDITIONAL_JUMP)  ; LAB_005c3f6a
    MOV EBP,dword ptr [EBX + 0x8]       ; 005c3f58
        ;   Label: LAB_005c3f58
    XOR EAX,EAX                         ; 005c3f5b
    PUSH EBP                            ; 005c3f5d
    MOV AX,word ptr [ESP + 0x10]        ; 005c3f5e
        ;   Label: LAB_005c3f5e
    PUSH EAX                            ; 005c3f63
    PUSH EDI                            ; 005c3f64
    CALL crt_unknown.c_FUN_005c391c     ; 005c3f65
        ;   XREF to: 005c391c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c391c()
    ADD ESP,0xc                         ; 005c3f6a
        ;   Label: LAB_005c3f6a
    MOV ESI,dword ptr [EBX + 0x8]       ; 005c3f6d
    MOV dword ptr [EBX + 0x28],EAX      ; 005c3f70
    TEST ESI,ESI                        ; 005c3f73
    JL 0x005c425d                       ; 005c3f75
        ;   XREF to: 005c425d (CONDITIONAL_JUMP)  ; LAB_005c425d
    CMP EAX,ESI                         ; 005c3f7b
    JLE 0x005c425d                      ; 005c3f7d
        ;   XREF to: 005c425d (CONDITIONAL_JUMP)  ; LAB_005c425d
    MOV dword ptr [EBX + 0x28],ESI      ; 005c3f83
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c3f86
    MOV EAX,EDI                         ; 005c3f8a
    ADD ESP,0x10                        ; 005c3f8c
    POP EBP                             ; 005c3f8f
    POP ES                              ; 005c3f90
    POP EDI                             ; 005c3f91
    POP ESI                             ; 005c3f92
    POP EBX                             ; 005c3f93
    RET                                 ; 005c3f94
    TEST byte ptr [EBX + 0x1e],0x1      ; 005c3f95
        ;   Label: LAB_005c3f95
    JZ 0x005c3fd2                       ; 005c3f99
        ;   XREF to: 005c3fd2 (CONDITIONAL_JUMP)  ; LAB_005c3fd2
    TEST byte ptr [EBX + 0x1f],0x1      ; 005c3f9b
    JZ 0x005c3fb0                       ; 005c3f9f
        ;   XREF to: 005c3fb0 (CONDITIONAL_JUMP)  ; LAB_005c3fb0
    CMP dword ptr [ESP],0x0             ; 005c3fa1
    JNZ 0x005c3fb4                      ; 005c3fa5
        ;   XREF to: 005c3fb4 (CONDITIONAL_JUMP)  ; LAB_005c3fb4
    CMP dword ptr [ESP + 0x4],0x0       ; 005c3fa7
    JZ 0x005c3fd2                       ; 005c3fac
        ;   XREF to: 005c3fd2 (CONDITIONAL_JUMP)  ; LAB_005c3fd2
    JMP 0x005c3fb4                      ; 005c3fae
        ;   XREF to: 005c3fb4 (UNCONDITIONAL_JUMP)  ; LAB_005c3fb4
    TEST ECX,ECX                        ; 005c3fb0
        ;   Label: LAB_005c3fb0
    JZ 0x005c3fd2                       ; 005c3fb2
        ;   XREF to: 005c3fd2 (CONDITIONAL_JUMP)  ; LAB_005c3fd2
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c3fb4
        ;   Label: LAB_005c3fb4
    LEA EDX,[EAX + 0x1]                 ; 005c3fb7
    MOV dword ptr [EBX + 0x20],EDX      ; 005c3fba
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 005c3fbd
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c3fc1
    LEA EDX,[EAX + 0x1]                 ; 005c3fc4
    MOV dword ptr [EBX + 0x20],EDX      ; 005c3fc7
    LEA EDX,[ESI + EAX*0x1]             ; 005c3fca
    MOV AL,byte ptr [EBX + 0x15]        ; 005c3fcd
    MOV byte ptr [EDX],AL               ; 005c3fd0
    MOV EBP,0x10                        ; 005c3fd2
        ;   Label: LAB_005c3fd2
    CMP byte ptr [EBX + 0x15],0x6f      ; 005c3fd7
        ;   Label: LAB_005c3fd7
    JNZ 0x005c3ff7                      ; 005c3fdb
        ;   XREF to: 005c3ff7 (CONDITIONAL_JUMP)  ; LAB_005c3ff7
    MOV AH,byte ptr [EBX + 0x1e]        ; 005c3fdd
    MOV EBP,0x8                         ; 005c3fe0
    TEST AH,0x1                         ; 005c3fe5
    JZ 0x005c3ff7                       ; 005c3fe8
        ;   XREF to: 005c3ff7 (CONDITIONAL_JUMP)  ; LAB_005c3ff7
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c3fea
    LEA EDX,[EAX + 0x1]                 ; 005c3fed
    MOV dword ptr [EBX + 0x20],EDX      ; 005c3ff0
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 005c3ff3
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c3ff7
        ;   Label: LAB_005c3ff7
    MOV word ptr [ESP + 0xc],DS         ; 005c3ffa
    ADD EAX,ESI                         ; 005c3ffe
    MOV DL,byte ptr [EBX + 0x1f]        ; 005c4000
    MOV EDI,EAX                         ; 005c4003
    TEST DL,0x1                         ; 005c4005
    JZ 0x005c4053                       ; 005c4008
        ;   XREF to: 005c4053 (CONDITIONAL_JUMP)  ; LAB_005c4053
    CMP dword ptr [EBX + 0x8],0x0       ; 005c400a
    JNZ 0x005c402c                      ; 005c400e
        ;   XREF to: 005c402c (CONDITIONAL_JUMP)  ; LAB_005c402c
    CMP dword ptr [ESP],0x0             ; 005c4010
    JNZ 0x005c402c                      ; 005c4014
        ;   XREF to: 005c402c (CONDITIONAL_JUMP)  ; LAB_005c402c
    CMP dword ptr [ESP + 0x4],0x0       ; 005c4016
    JNZ 0x005c402c                      ; 005c401b
        ;   XREF to: 005c402c (CONDITIONAL_JUMP)  ; LAB_005c402c
    MOV ES,word ptr [ESP + 0xc]         ; 005c401d
    MOV byte ptr ES:[EAX],0x0           ; 005c4021
    XOR EAX,EAX                         ; 005c4025
    JMP 0x005c409d                      ; 005c4027
        ;   XREF to: 005c409d (UNCONDITIONAL_JUMP)  ; LAB_005c409d
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c402c
        ;   Label: LAB_005c402c
    PUSH EBP                            ; 005c402f
    ADD EAX,ESI                         ; 005c4030
    PUSH EAX                            ; 005c4032
    LEA EAX,[ESP + 0x8]                 ; 005c4033
    PUSH EAX                            ; 005c4037
    CALL unkafter_zombie.cpp_FUN_005ca500 ; 005c4038
        ;   XREF to: 005ca500 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca500()
    MOV CL,byte ptr [EBX + 0x15]        ; 005c403d
    ADD ESP,0xc                         ; 005c4040
    CMP CL,0x58                         ; 005c4043
    JNZ 0x005c408a                      ; 005c4046
        ;   XREF to: 005c408a (CONDITIONAL_JUMP)  ; LAB_005c408a
    PUSH ESI                            ; 005c4048
    CALL crt_unknown.c_FUN_005c426c     ; 005c4049
        ;   XREF to: 005c426c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c426c()
    ADD ESP,0x4                         ; 005c404e
    JMP 0x005c408a                      ; 005c4051
        ;   XREF to: 005c408a (UNCONDITIONAL_JUMP)  ; LAB_005c408a
    CMP dword ptr [EBX + 0x8],0x0       ; 005c4053
        ;   Label: LAB_005c4053
    JNZ 0x005c4069                      ; 005c4057
        ;   XREF to: 005c4069 (CONDITIONAL_JUMP)  ; LAB_005c4069
    TEST ECX,ECX                        ; 005c4059
    JNZ 0x005c4069                      ; 005c405b
        ;   XREF to: 005c4069 (CONDITIONAL_JUMP)  ; LAB_005c4069
    MOV ES,word ptr [ESP + 0xc]         ; 005c405d
    MOV byte ptr ES:[EAX],0x0           ; 005c4061
    XOR EAX,EAX                         ; 005c4065
    JMP 0x005c409d                      ; 005c4067
        ;   XREF to: 005c409d (UNCONDITIONAL_JUMP)  ; LAB_005c409d
    MOV EAX,dword ptr [EBX + 0x20]      ; 005c4069
        ;   Label: LAB_005c4069
    PUSH EBP                            ; 005c406c
    ADD EAX,ESI                         ; 005c406d
    PUSH EAX                            ; 005c406f
    PUSH ECX                            ; 005c4070
    CALL unkafter_zombie.cpp_FUN_005ca610 ; 005c4071
        ;   XREF to: 005ca610 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca610()
    MOV DH,byte ptr [EBX + 0x15]        ; 005c4076
    ADD ESP,0xc                         ; 005c4079
    CMP DH,0x58                         ; 005c407c
    JNZ 0x005c408a                      ; 005c407f
        ;   XREF to: 005c408a (CONDITIONAL_JUMP)  ; LAB_005c408a
    PUSH ESI                            ; 005c4081
    CALL crt_unknown.c_FUN_005c426c     ; 005c4082
        ;   XREF to: 005c426c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c426c()
    ADD ESP,0x4                         ; 005c4087
    XOR EAX,EAX                         ; 005c408a
        ;   Label: LAB_005c408a
    PUSH -0x1                           ; 005c408c
    MOV AX,word ptr [ESP + 0x10]        ; 005c408e
    PUSH EAX                            ; 005c4093
    PUSH EDI                            ; 005c4094
    CALL crt_unknown.c_FUN_005c391c     ; 005c4095
        ;   XREF to: 005c391c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c391c()
    ADD ESP,0xc                         ; 005c409a
    MOV EDX,EAX                         ; 005c409d
        ;   Label: LAB_005c409d
    MOV ESI,dword ptr [EBX + 0x8]       ; 005c409f
    MOV dword ptr [EBX + 0x28],EAX      ; 005c40a2
    CMP EAX,ESI                         ; 005c40a5
    JGE 0x005c40b0                      ; 005c40a7
        ;   XREF to: 005c40b0 (CONDITIONAL_JUMP)  ; LAB_005c40b0
    MOV EAX,ESI                         ; 005c40a9
    SUB EAX,EDX                         ; 005c40ab
    MOV dword ptr [EBX + 0x24],EAX      ; 005c40ad
    CMP dword ptr [EBX + 0x8],-0x1      ; 005c40b0
        ;   Label: LAB_005c40b0
    JNZ 0x005c425d                      ; 005c40b4
        ;   XREF to: 005c425d (CONDITIONAL_JUMP)  ; LAB_005c425d
    PUSH EBX                            ; 005c40ba
    CALL crt_unknown.c_FUN_005c3b4c     ; 005c40bb
        ;   XREF to: 005c3b4c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3b4c()
    ADD ESP,0x4                         ; 005c40c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c40c3
    MOV EAX,EDI                         ; 005c40c7
    ADD ESP,0x10                        ; 005c40c9
    POP EBP                             ; 005c40cc
    POP ES                              ; 005c40cd
    POP EDI                             ; 005c40ce
    POP ESI                             ; 005c40cf
    POP EBX                             ; 005c40d0
    RET                                 ; 005c40d1
    CMP dword ptr [EBX + 0x4],0x0       ; 005c40d2
        ;   Label: LAB_005c40d2
    JNZ 0x005c40ee                      ; 005c40d6
        ;   XREF to: 005c40ee (CONDITIONAL_JUMP)  ; LAB_005c40ee
    TEST byte ptr [EBX + 0x1e],0x80     ; 005c40d8
    JZ 0x005c40e7                       ; 005c40dc
        ;   XREF to: 005c40e7 (CONDITIONAL_JUMP)  ; LAB_005c40e7
    MOV dword ptr [EBX + 0x4],0xd       ; 005c40de
    JMP 0x005c40ee                      ; 005c40e5
        ;   XREF to: 005c40ee (UNCONDITIONAL_JUMP)  ; LAB_005c40ee
    MOV dword ptr [EBX + 0x4],0x8       ; 005c40e7
        ;   Label: LAB_005c40e7
    AND byte ptr [EBX + 0x1e],0xf9      ; 005c40ee
        ;   Label: LAB_005c40ee
    MOV ECX,dword ptr [EDX]             ; 005c40f2
    ADD ECX,0x4                         ; 005c40f4
    MOV dword ptr [EDX],ECX             ; 005c40f7
    MOV EAX,ECX                         ; 005c40f9
    MOV EBP,dword ptr [ECX + -0x4]      ; 005c40fb
    TEST byte ptr [EBX + 0x1e],0x80     ; 005c40fe
    JZ 0x005c412a                       ; 005c4102
        ;   XREF to: 005c412a (CONDITIONAL_JUMP)  ; LAB_005c412a
    ADD EAX,0x4                         ; 005c4104
    MOV dword ptr [EDX],EAX             ; 005c4107
    PUSH 0x4                            ; 005c4109
    MOV EAX,dword ptr [EAX + -0x4]      ; 005c410b
    PUSH ESI                            ; 005c410e
    AND EAX,0xffff                      ; 005c410f
    PUSH EAX                            ; 005c4114
    CALL crt_unknown.c_FUN_005c39c8     ; 005c4115
        ;   XREF to: 005c39c8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c39c8()
    ADD ESP,0xc                         ; 005c411a
    PUSH 0x8                            ; 005c411d
    LEA EAX,[ESI + 0x5]                 ; 005c411f
    PUSH EAX                            ; 005c4122
    PUSH EBP                            ; 005c4123
    MOV byte ptr [ESI + 0x4],0x3a       ; 005c4124
    JMP 0x005c412e                      ; 005c4128
        ;   XREF to: 005c412e (UNCONDITIONAL_JUMP)  ; LAB_005c412e
    PUSH 0x8                            ; 005c412a
        ;   Label: LAB_005c412a
    PUSH ESI                            ; 005c412c
    PUSH EBP                            ; 005c412d
    CALL crt_unknown.c_FUN_005c39c8     ; 005c412e
        ;   XREF to: 005c39c8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c39c8()
        ;   Label: LAB_005c412e
    ADD ESP,0xc                         ; 005c4133
    CMP byte ptr [EBX + 0x15],0x50      ; 005c4136
    JNZ 0x005c4145                      ; 005c413a
        ;   XREF to: 005c4145 (CONDITIONAL_JUMP)  ; LAB_005c4145
    PUSH ESI                            ; 005c413c
    CALL crt_unknown.c_FUN_005c426c     ; 005c413d
        ;   XREF to: 005c426c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c426c()
    ADD ESP,0x4                         ; 005c4142
    XOR EAX,EAX                         ; 005c4145
        ;   Label: LAB_005c4145
    PUSH -0x1                           ; 005c4147
    MOV AX,word ptr [ESP + 0x10]        ; 005c4149
    PUSH EAX                            ; 005c414e
    PUSH EDI                            ; 005c414f
    CALL crt_unknown.c_FUN_005c391c     ; 005c4150
        ;   XREF to: 005c391c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c391c()
    ADD ESP,0xc                         ; 005c4155
    MOV dword ptr [EBX + 0x20],EAX      ; 005c4158
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c415b
    MOV EAX,EDI                         ; 005c415f
    ADD ESP,0x10                        ; 005c4161
    POP EBP                             ; 005c4164
    POP ES                              ; 005c4165
    POP EDI                             ; 005c4166
    POP ESI                             ; 005c4167
    POP EBX                             ; 005c4168
    RET                                 ; 005c4169
    MOV AH,byte ptr [EBX + 0x1e]        ; 005c416a
        ;   Label: LAB_005c416a
    MOV dword ptr [EBX + 0x20],0x1      ; 005c416d
    TEST AH,0x20                        ; 005c4174
    JZ 0x005c41e6                       ; 005c4177
        ;   XREF to: 005c41e6 (CONDITIONAL_JUMP)  ; LAB_005c41e6
    MOV ECX,dword ptr [EDX]             ; 005c4179
    ADD ECX,0x4                         ; 005c417b
    MOV dword ptr [EDX],ECX             ; 005c417e
    MOV AX,word ptr [ECX + -0x4]        ; 005c4180
    AND EAX,0xffff                      ; 005c4184
    PUSH EAX                            ; 005c4189
    LEA EAX,[ESP + 0xc]                 ; 005c418a
    PUSH EAX                            ; 005c418e
    CALL unkafter_zombie.cpp_FUN_005ca4b0 ; 005c418f
        ;   XREF to: 005ca4b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca4b0()
    ADD ESP,0x8                         ; 005c4194
    CMP EAX,-0x1                        ; 005c4197
    JZ 0x005c425d                       ; 005c419a
        ;   XREF to: 005c425d (CONDITIONAL_JUMP)  ; LAB_005c425d
    MOV AL,byte ptr [ESP + 0x8]         ; 005c41a0
    MOV EBP,dword ptr [0x02c9f6e0]      ; 005c41a4 | DAT_02c9f6e0
    MOV byte ptr [ESI],AL               ; 005c41aa
    TEST EBP,EBP                        ; 005c41ac
    JZ 0x005c425d                       ; 005c41ae
        ;   XREF to: 005c425d (CONDITIONAL_JUMP)  ; LAB_005c425d
    XOR EAX,EAX                         ; 005c41b4
    MOV AL,byte ptr [ESP + 0x8]         ; 005c41b6
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005c41ba
    AND AL,0x1                          ; 005c41c0
    AND EAX,0xff                        ; 005c41c2
    JZ 0x005c425d                       ; 005c41c7
        ;   XREF to: 005c425d (CONDITIONAL_JUMP)  ; LAB_005c425d
    MOV AL,byte ptr [ESP + 0x9]         ; 005c41cd
    MOV byte ptr [ESI + 0x1],AL         ; 005c41d1
    INC dword ptr [EBX + 0x20]          ; 005c41d4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c41d7
    MOV EAX,EDI                         ; 005c41db
    ADD ESP,0x10                        ; 005c41dd
    POP EBP                             ; 005c41e0
    POP ES                              ; 005c41e1
    POP EDI                             ; 005c41e2
    POP ESI                             ; 005c41e3
    POP EBX                             ; 005c41e4
    RET                                 ; 005c41e5
    MOV EBX,dword ptr [EDX]             ; 005c41e6
        ;   Label: LAB_005c41e6
    ADD EBX,0x4                         ; 005c41e8
    MOV dword ptr [EDX],EBX             ; 005c41eb
    MOV AL,byte ptr [EBX + -0x4]        ; 005c41ed
    MOV byte ptr [ESI],AL               ; 005c41f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c41f2
    MOV EAX,EDI                         ; 005c41f6
    ADD ESP,0x10                        ; 005c41f8
    POP EBP                             ; 005c41fb
    POP ES                              ; 005c41fc
    POP EDI                             ; 005c41fd
    POP ESI                             ; 005c41fe
    POP EBX                             ; 005c41ff
    RET                                 ; 005c4200
    MOV EAX,dword ptr [EDX]             ; 005c4201
        ;   Label: LAB_005c4201
    ADD EAX,0x4                         ; 005c4203
    MOV dword ptr [EDX],EAX             ; 005c4206
    MOV AX,word ptr [EAX + -0x4]        ; 005c4208
    AND EAX,0xffff                      ; 005c420c
    PUSH EAX                            ; 005c4211
    PUSH ESI                            ; 005c4212
    CALL unkafter_zombie.cpp_FUN_005ca4b0 ; 005c4213
        ;   XREF to: 005ca4b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca4b0()
    ADD ESP,0x8                         ; 005c4218
    MOV EDX,EAX                         ; 005c421b
    CMP EAX,-0x1                        ; 005c421d
    JZ 0x005c4234                       ; 005c4220
        ;   XREF to: 005c4234 (CONDITIONAL_JUMP)  ; LAB_005c4234
    MOV dword ptr [EBX + 0x20],EAX      ; 005c4222
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c4225
    MOV EAX,EDI                         ; 005c4229
    ADD ESP,0x10                        ; 005c422b
    POP EBP                             ; 005c422e
    POP ES                              ; 005c422f
    POP EDI                             ; 005c4230
    POP ESI                             ; 005c4231
    POP EBX                             ; 005c4232
    RET                                 ; 005c4233
    MOV dword ptr [EBX + 0x20],0x0      ; 005c4234
        ;   Label: LAB_005c4234
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c423b
    MOV EAX,EDI                         ; 005c423f
    ADD ESP,0x10                        ; 005c4241
    POP EBP                             ; 005c4244
    POP ES                              ; 005c4245
    POP EDI                             ; 005c4246
    POP ESI                             ; 005c4247
    POP EBX                             ; 005c4248
    RET                                 ; 005c4249
    MOV dword ptr [EBX + 0x4],0x0       ; 005c424a
        ;   Label: LAB_005c424a
    MOV AL,byte ptr [EBX + 0x15]        ; 005c4251
    MOV byte ptr [ESI],AL               ; 005c4254
    MOV dword ptr [EBX + 0x20],0x1      ; 005c4256
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c425d
        ;   Label: LAB_005c425d
    MOV EAX,EDI                         ; 005c4261
    ADD ESP,0x10                        ; 005c4263
    POP EBP                             ; 005c4266
    POP ES                              ; 005c4267
    POP EDI                             ; 005c4268
    POP ESI                             ; 005c4269
    POP EBX                             ; 005c426a
    RET                                 ; 005c426b

