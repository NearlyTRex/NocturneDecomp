; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b78b8(undefined4 *param_1,uint param_2,uint param_3,code *param_4)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[4]:
;   FUN_0046c900 at 0046c95d
;   FUN_004811d0 at 00481229
;   FUN_00519f00 at 0051a2dc
;   FUN_005332f0 at 005333fe
;
; Called Functions:
;   FUN_005b7820
;   FUN_005b7890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b78b8
        ;   Label: FUN_005b78b8
    PUSH ESI                            ; 005b78b9
    PUSH EDI                            ; 005b78ba
    PUSH ES                             ; 005b78bb
    PUSH FS                             ; 005b78bc
    PUSH GS                             ; 005b78be
    PUSH EBP                            ; 005b78c0
    SUB ESP,0x150                       ; 005b78c1
    MOV EAX,dword ptr [ESP + 0x170]     ; 005b78c7
    MOV EBP,dword ptr [ESP + 0x178]     ; 005b78ce
    MOV EDX,dword ptr [ESP + 0x17c]     ; 005b78d5
    MOV dword ptr [ESP + 0x124],EAX     ; 005b78dc
    OR EAX,EBP                          ; 005b78e3
    MOV dword ptr [ESP + 0x130],EDX     ; 005b78e5
    TEST AL,0x3                         ; 005b78ec
    JZ 0x005b78f7                       ; 005b78ee
        ;   XREF to: 005b78f7 (CONDITIONAL_JUMP)  ; LAB_005b78f7
    MOV EAX,0x2                         ; 005b78f0
    JMP 0x005b7902                      ; 005b78f5
        ;   XREF to: 005b7902 (UNCONDITIONAL_JUMP)  ; LAB_005b7902
    CMP EBP,0x4                         ; 005b78f7
        ;   Label: LAB_005b78f7
    SETA AL                             ; 005b78fa
    AND EAX,0xff                        ; 005b78fd
    MOV dword ptr [ESP + 0x134],EAX     ; 005b7902
        ;   Label: LAB_005b7902
    LEA EAX,[EBP + EBP*0x1]             ; 005b7909
    MOV dword ptr [ESP + 0x10c],EAX     ; 005b790d
    LEA EAX,[EBP*0x4 + 0x0]             ; 005b7914
    XOR EDX,EDX                         ; 005b791b
    SUB EAX,EBP                         ; 005b791d
    MOV dword ptr [ESP + 0x114],EDX     ; 005b791f
    MOV dword ptr [ESP + 0x108],EAX     ; 005b7926
    MOV EBX,dword ptr [ESP + 0x174]     ; 005b792d
        ;   Label: LAB_005b792d
    CMP EBX,0x1                         ; 005b7934
    JBE 0x005b7a6c                      ; 005b7937
        ;   XREF to: 005b7a6c (CONDITIONAL_JUMP)  ; LAB_005b7a6c
    CMP EBX,0x10                        ; 005b793d
    JNC 0x005b7aa2                      ; 005b7940
        ;   XREF to: 005b7aa2 (CONDITIONAL_JUMP)  ; LAB_005b7aa2
    MOV EAX,dword ptr [ESP + 0x108]     ; 005b7946
    MOV dword ptr [ESP + 0x12c],EAX     ; 005b794d
    TEST EAX,EAX                        ; 005b7954
    JLE 0x005b7a6c                      ; 005b7956
        ;   XREF to: 005b7a6c (CONDITIONAL_JUMP)  ; LAB_005b7a6c
    MOV EAX,EBX                         ; 005b795c
    IMUL EAX,EBP                        ; 005b795e
    MOV EDX,dword ptr [ESP + 0x124]     ; 005b7961
    ADD EDX,EAX                         ; 005b7968
    MOV dword ptr [ESP + 0x11c],EDX     ; 005b796a
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b7971
        ;   Label: LAB_005b7971
    ADD EAX,dword ptr [ESP + 0x12c]     ; 005b7978
    MOV EBX,dword ptr [ESP + 0x11c]     ; 005b797f
    MOV dword ptr [ESP + 0x120],EAX     ; 005b7986
    CMP EAX,EBX                         ; 005b798d
    JNC 0x005b7a4d                      ; 005b798f
        ;   XREF to: 005b7a4d (CONDITIONAL_JUMP)  ; LAB_005b7a4d
    MOV EAX,dword ptr [ESP + 0x120]     ; 005b7995
        ;   Label: LAB_005b7995
    MOV EDI,dword ptr [ESP + 0x124]     ; 005b799c
    MOV dword ptr [ESP + 0x14c],EAX     ; 005b79a3
    CMP EAX,EDI                         ; 005b79aa
    JA 0x005b7a05                       ; 005b79ac
        ;   XREF to: 005b7a05 (CONDITIONAL_JUMP)  ; LAB_005b7a05
    JMP 0x005b7a27                      ; 005b79ae
        ;   XREF to: 005b7a27 (UNCONDITIONAL_JUMP)  ; LAB_005b7a27
    CMP dword ptr [ESP + 0x134],0x0     ; 005b79b3
        ;   Label: LAB_005b79b3
    JZ 0x005b79cd                       ; 005b79bb
        ;   XREF to: 005b79cd (CONDITIONAL_JUMP)  ; LAB_005b79cd
    MOV ESI,dword ptr [ESP + 0x14c]     ; 005b79bd
    MOV ECX,EBP                         ; 005b79c4
    CALL FUN_005b7890                   ; 005b79c6
        ;   XREF to: 005b7890 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7890()
    JMP 0x005b79e3                      ; 005b79cb
        ;   XREF to: 005b79e3 (UNCONDITIONAL_JUMP)  ; LAB_005b79e3
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005b79cd
        ;   Label: LAB_005b79cd
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005b79d4
    MOV EAX,dword ptr [EDI]             ; 005b79db
    MOV EDX,dword ptr [EDX]             ; 005b79dd
    MOV dword ptr [EBX],EAX             ; 005b79df
    MOV dword ptr [EDI],EDX             ; 005b79e1
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b79e3
        ;   Label: LAB_005b79e3
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005b79ea
    SUB EDX,EAX                         ; 005b79f1
    MOV EBX,dword ptr [ESP + 0x124]     ; 005b79f3
    MOV dword ptr [ESP + 0x14c],EDX     ; 005b79fa
    CMP EDX,EBX                         ; 005b7a01
    JBE 0x005b7a27                      ; 005b7a03
        ;   XREF to: 005b7a27 (CONDITIONAL_JUMP)  ; LAB_005b7a27
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005b7a05
        ;   Label: LAB_005b7a05
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005b7a0c
    MOV EDI,ECX                         ; 005b7a13
    PUSH ECX                            ; 005b7a15
    SUB EDI,ESI                         ; 005b7a16
    PUSH EDI                            ; 005b7a18
    CALL dword ptr [ESP + 0x138]        ; 005b7a19
    ADD ESP,0x8                         ; 005b7a20
    TEST EAX,EAX                        ; 005b7a23
    JG 0x005b79b3                       ; 005b7a25
        ;   XREF to: 005b79b3 (CONDITIONAL_JUMP)  ; LAB_005b79b3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b7a27
        ;   Label: LAB_005b7a27
    MOV ECX,dword ptr [ESP + 0x120]     ; 005b7a2e
    ADD ECX,EAX                         ; 005b7a35
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005b7a37
    MOV dword ptr [ESP + 0x120],ECX     ; 005b7a3e
    CMP ECX,ESI                         ; 005b7a45
    JC 0x005b7995                       ; 005b7a47
        ;   XREF to: 005b7995 (CONDITIONAL_JUMP)  ; LAB_005b7995
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005b7a4d
        ;   Label: LAB_005b7a4d
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005b7a54
    SUB ESI,EAX                         ; 005b7a5b
    MOV dword ptr [ESP + 0x12c],ESI     ; 005b7a5d
    TEST ESI,ESI                        ; 005b7a64
    JG 0x005b7971                       ; 005b7a66
        ;   XREF to: 005b7971 (CONDITIONAL_JUMP)  ; LAB_005b7971
    MOV EDX,dword ptr [ESP + 0x114]     ; 005b7a6c
        ;   Label: LAB_005b7a6c
    TEST EDX,EDX                        ; 005b7a73
    JZ 0x005b7f4f                       ; 005b7a75
        ;   XREF to: 005b7f4f (CONDITIONAL_JUMP)  ; LAB_005b7f4f
    LEA EBX,[EDX + -0x1]                ; 005b7a7b
    MOV dword ptr [ESP + 0x114],EBX     ; 005b7a7e
    MOV EDX,dword ptr [ESP + EBX*0x4]   ; 005b7a85
    MOV EAX,dword ptr [ESP + EBX*0x4 + 0x80] ; 005b7a88
    MOV dword ptr [ESP + 0x124],EDX     ; 005b7a8f
    MOV dword ptr [ESP + 0x174],EAX     ; 005b7a96
    JMP 0x005b792d                      ; 005b7a9d
        ;   XREF to: 005b792d (UNCONDITIONAL_JUMP)  ; LAB_005b792d
    MOV EAX,EBX                         ; 005b7aa2
        ;   Label: LAB_005b7aa2
    SHR EAX,0x1                         ; 005b7aa4
    IMUL EAX,EBP                        ; 005b7aa6
    MOV EDI,dword ptr [ESP + 0x124]     ; 005b7aa9
    ADD EDI,EAX                         ; 005b7ab0
    CMP EBX,0x1d                        ; 005b7ab2
    JBE 0x005b7b8c                      ; 005b7ab5
        ;   XREF to: 005b7b8c (CONDITIONAL_JUMP)  ; LAB_005b7b8c
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b7abb
    MOV dword ptr [ESP + 0x110],EAX     ; 005b7ac2
    LEA EAX,[EBX + -0x1]                ; 005b7ac9
    IMUL EAX,EBP                        ; 005b7acc
    MOV EBX,dword ptr [ESP + 0x124]     ; 005b7acf
    ADD EBX,EAX                         ; 005b7ad6
    MOV EAX,dword ptr [ESP + 0x174]     ; 005b7ad8
    CMP EAX,0x2a                        ; 005b7adf
    JBE 0x005b7b70                      ; 005b7ae2
        ;   XREF to: 005b7b70 (CONDITIONAL_JUMP)  ; LAB_005b7b70
    MOV ESI,EAX                         ; 005b7ae8
    SHR ESI,0x3                         ; 005b7aea
    IMUL ESI,EBP                        ; 005b7aed
    LEA EAX,[ESI + ESI*0x1]             ; 005b7af0
    MOV EDX,dword ptr [ESP + 0x130]     ; 005b7af3
    MOV dword ptr [ESP + 0x104],EAX     ; 005b7afa
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b7b01
    MOV ECX,dword ptr [ESP + 0x104]     ; 005b7b08
    PUSH EDX                            ; 005b7b0f
    ADD EAX,ECX                         ; 005b7b10
    PUSH EAX                            ; 005b7b12
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b7b13
    ADD EAX,ESI                         ; 005b7b1a
    PUSH EAX                            ; 005b7b1c
    MOV EAX,dword ptr [ESP + 0x130]     ; 005b7b1d
    PUSH EAX                            ; 005b7b24
    CALL FUN_005b7820                   ; 005b7b25
        ;   XREF to: 005b7820 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7820()
    ADD ESP,0x10                        ; 005b7b2a
    MOV EDX,dword ptr [ESP + 0x130]     ; 005b7b2d
    PUSH EDX                            ; 005b7b34
    MOV dword ptr [ESP + 0x114],EAX     ; 005b7b35
    LEA EAX,[EDI + ESI*0x1]             ; 005b7b3c
    PUSH EAX                            ; 005b7b3f
    PUSH EDI                            ; 005b7b40
    SUB EDI,ESI                         ; 005b7b41
    PUSH EDI                            ; 005b7b43
    CALL FUN_005b7820                   ; 005b7b44
        ;   XREF to: 005b7820 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7820()
    ADD ESP,0x10                        ; 005b7b49
    MOV ECX,dword ptr [ESP + 0x130]     ; 005b7b4c
    PUSH ECX                            ; 005b7b53
    MOV EDI,EAX                         ; 005b7b54
    MOV EAX,EBX                         ; 005b7b56
    PUSH EBX                            ; 005b7b58
    SUB EAX,ESI                         ; 005b7b59
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005b7b5b
    PUSH EAX                            ; 005b7b62
    SUB EBX,ESI                         ; 005b7b63
    PUSH EBX                            ; 005b7b65
    CALL FUN_005b7820                   ; 005b7b66
        ;   XREF to: 005b7820 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7820()
    ADD ESP,0x10                        ; 005b7b6b
    MOV EBX,EAX                         ; 005b7b6e
    MOV EAX,dword ptr [ESP + 0x130]     ; 005b7b70
        ;   Label: LAB_005b7b70
    PUSH EAX                            ; 005b7b77
    PUSH EBX                            ; 005b7b78
    PUSH EDI                            ; 005b7b79
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005b7b7a
    PUSH EDX                            ; 005b7b81
    CALL FUN_005b7820                   ; 005b7b82
        ;   XREF to: 005b7820 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7820()
    ADD ESP,0x10                        ; 005b7b87
    MOV EDI,EAX                         ; 005b7b8a
    MOV EBX,dword ptr [ESP + 0x134]     ; 005b7b8c
        ;   Label: LAB_005b7b8c
    TEST EBX,EBX                        ; 005b7b93
    JZ 0x005b7bc3                       ; 005b7b95
        ;   XREF to: 005b7bc3 (CONDITIONAL_JUMP)  ; LAB_005b7bc3
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b7b97
    MOV dword ptr [ESP + 0x128],EAX     ; 005b7b9e
    JZ 0x005b7bb2                       ; 005b7ba5
        ;   XREF to: 005b7bb2 (CONDITIONAL_JUMP)  ; LAB_005b7bb2
    MOV ECX,EBP                         ; 005b7ba7
    MOV ESI,EAX                         ; 005b7ba9
    CALL FUN_005b7890                   ; 005b7bab
        ;   XREF to: 005b7890 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7890()
    JMP 0x005b7bda                      ; 005b7bb0
        ;   XREF to: 005b7bda (UNCONDITIONAL_JUMP)  ; LAB_005b7bda
    MOV EBX,dword ptr [ESP + 0x124]     ; 005b7bb2
        ;   Label: LAB_005b7bb2
    MOV EDX,dword ptr [EAX]             ; 005b7bb9
    MOV EAX,dword ptr [EDI]             ; 005b7bbb
    MOV dword ptr [EBX],EAX             ; 005b7bbd
    MOV dword ptr [EDI],EDX             ; 005b7bbf
    JMP 0x005b7bda                      ; 005b7bc1
        ;   XREF to: 005b7bda (UNCONDITIONAL_JUMP)  ; LAB_005b7bda
    LEA EAX,[ESP + 0x100]               ; 005b7bc3
        ;   Label: LAB_005b7bc3
    MOV dword ptr [ESP + 0x128],EAX     ; 005b7bca
    MOV EAX,dword ptr [EDI]             ; 005b7bd1
    MOV dword ptr [ESP + 0x100],EAX     ; 005b7bd3
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b7bda
        ;   Label: LAB_005b7bda
    MOV dword ptr [ESP + 0x144],EAX     ; 005b7be1
    MOV dword ptr [ESP + 0x138],EAX     ; 005b7be8
    MOV EAX,dword ptr [ESP + 0x174]     ; 005b7bef
    DEC EAX                             ; 005b7bf6
    IMUL EAX,EBP                        ; 005b7bf7
    MOV EDX,dword ptr [ESP + 0x124]     ; 005b7bfa
    ADD EDX,EAX                         ; 005b7c01
    MOV EAX,dword ptr [ESP + 0x174]     ; 005b7c03
    MOV dword ptr [ESP + 0x13c],EDX     ; 005b7c0a
    MOV dword ptr [ESP + 0x140],EDX     ; 005b7c11
    MOV dword ptr [ESP + 0x148],EAX     ; 005b7c18
    CMP dword ptr [ESP + 0x148],0x0     ; 005b7c1f
        ;   Label: LAB_005b7c1f
    JZ 0x005b7cbd                       ; 005b7c27
        ;   XREF to: 005b7cbd (CONDITIONAL_JUMP)  ; LAB_005b7cbd
    MOV EAX,dword ptr [ESP + 0x128]     ; 005b7c2d
    PUSH EAX                            ; 005b7c34
    MOV EDX,dword ptr [ESP + 0x148]     ; 005b7c35
    PUSH EDX                            ; 005b7c3c
    CALL dword ptr [ESP + 0x138]        ; 005b7c3d
    ADD ESP,0x8                         ; 005b7c44
    TEST EAX,EAX                        ; 005b7c47
    JG 0x005b7cbd                       ; 005b7c49
        ;   XREF to: 005b7cbd (CONDITIONAL_JUMP)  ; LAB_005b7cbd
    JNZ 0x005b7c99                      ; 005b7c4b
        ;   XREF to: 005b7c99 (CONDITIONAL_JUMP)  ; LAB_005b7c99
    CMP dword ptr [ESP + 0x134],0x0     ; 005b7c4d
    JZ 0x005b7c6e                       ; 005b7c55
        ;   XREF to: 005b7c6e (CONDITIONAL_JUMP)  ; LAB_005b7c6e
    MOV EDI,dword ptr [ESP + 0x144]     ; 005b7c57
    MOV ESI,dword ptr [ESP + 0x138]     ; 005b7c5e
    MOV ECX,EBP                         ; 005b7c65
    CALL FUN_005b7890                   ; 005b7c67
        ;   XREF to: 005b7890 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7890()
    JMP 0x005b7c92                      ; 005b7c6c
        ;   XREF to: 005b7c92 (UNCONDITIONAL_JUMP)  ; LAB_005b7c92
    MOV EAX,dword ptr [ESP + 0x144]     ; 005b7c6e
        ;   Label: LAB_005b7c6e
    MOV EDI,dword ptr [ESP + 0x138]     ; 005b7c75
    MOV EDX,dword ptr [ESP + 0x138]     ; 005b7c7c
    MOV EAX,dword ptr [EAX]             ; 005b7c83
    MOV EDI,dword ptr [EDI]             ; 005b7c85
    MOV dword ptr [EDX],EAX             ; 005b7c87
    MOV EAX,dword ptr [ESP + 0x144]     ; 005b7c89
    MOV dword ptr [EAX],EDI             ; 005b7c90
    ADD dword ptr [ESP + 0x138],EBP     ; 005b7c92
        ;   Label: LAB_005b7c92
    MOV ESI,dword ptr [ESP + 0x144]     ; 005b7c99
        ;   Label: LAB_005b7c99
    MOV EDI,dword ptr [ESP + 0x148]     ; 005b7ca0
    ADD ESI,EBP                         ; 005b7ca7
    DEC EDI                             ; 005b7ca9
    MOV dword ptr [ESP + 0x144],ESI     ; 005b7caa
    MOV dword ptr [ESP + 0x148],EDI     ; 005b7cb1
    JMP 0x005b7c1f                      ; 005b7cb8
        ;   XREF to: 005b7c1f (UNCONDITIONAL_JUMP)  ; LAB_005b7c1f
    CMP dword ptr [ESP + 0x148],0x0     ; 005b7cbd
        ;   Label: LAB_005b7cbd
    JZ 0x005b7d5b                       ; 005b7cc5
        ;   XREF to: 005b7d5b (CONDITIONAL_JUMP)  ; LAB_005b7d5b
    MOV EDX,dword ptr [ESP + 0x128]     ; 005b7ccb
    PUSH EDX                            ; 005b7cd2
    MOV EBX,dword ptr [ESP + 0x144]     ; 005b7cd3
    PUSH EBX                            ; 005b7cda
    CALL dword ptr [ESP + 0x138]        ; 005b7cdb
    ADD ESP,0x8                         ; 005b7ce2
    TEST EAX,EAX                        ; 005b7ce5
    JL 0x005b7d5b                       ; 005b7ce7
        ;   XREF to: 005b7d5b (CONDITIONAL_JUMP)  ; LAB_005b7d5b
    JNZ 0x005b7d37                      ; 005b7ce9
        ;   XREF to: 005b7d37 (CONDITIONAL_JUMP)  ; LAB_005b7d37
    CMP dword ptr [ESP + 0x134],0x0     ; 005b7ceb
    JZ 0x005b7d0c                       ; 005b7cf3
        ;   XREF to: 005b7d0c (CONDITIONAL_JUMP)  ; LAB_005b7d0c
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005b7cf5
    MOV ESI,dword ptr [ESP + 0x140]     ; 005b7cfc
    MOV ECX,EBP                         ; 005b7d03
    CALL FUN_005b7890                   ; 005b7d05
        ;   XREF to: 005b7890 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7890()
    JMP 0x005b7d30                      ; 005b7d0a
        ;   XREF to: 005b7d30 (UNCONDITIONAL_JUMP)  ; LAB_005b7d30
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005b7d0c
        ;   Label: LAB_005b7d0c
    MOV EDX,dword ptr [ESP + 0x140]     ; 005b7d13
    MOV EBX,dword ptr [ESP + 0x140]     ; 005b7d1a
    MOV EAX,dword ptr [EAX]             ; 005b7d21
    MOV EDX,dword ptr [EDX]             ; 005b7d23
    MOV dword ptr [EBX],EAX             ; 005b7d25
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005b7d27
    MOV dword ptr [EAX],EDX             ; 005b7d2e
    SUB dword ptr [ESP + 0x13c],EBP     ; 005b7d30
        ;   Label: LAB_005b7d30
    MOV EBX,dword ptr [ESP + 0x140]     ; 005b7d37
        ;   Label: LAB_005b7d37
    MOV ECX,dword ptr [ESP + 0x148]     ; 005b7d3e
    SUB EBX,EBP                         ; 005b7d45
    DEC ECX                             ; 005b7d47
    MOV dword ptr [ESP + 0x140],EBX     ; 005b7d48
    MOV dword ptr [ESP + 0x148],ECX     ; 005b7d4f
    JMP 0x005b7cbd                      ; 005b7d56
        ;   XREF to: 005b7cbd (UNCONDITIONAL_JUMP)  ; LAB_005b7cbd
    CMP dword ptr [ESP + 0x148],0x0     ; 005b7d5b
        ;   Label: LAB_005b7d5b
    JZ 0x005b7dee                       ; 005b7d63
        ;   XREF to: 005b7dee (CONDITIONAL_JUMP)  ; LAB_005b7dee
    CMP dword ptr [ESP + 0x134],0x0     ; 005b7d69
    JZ 0x005b7d8a                       ; 005b7d71
        ;   XREF to: 005b7d8a (CONDITIONAL_JUMP)  ; LAB_005b7d8a
    MOV EDI,dword ptr [ESP + 0x140]     ; 005b7d73
    MOV ESI,dword ptr [ESP + 0x144]     ; 005b7d7a
    MOV ECX,EBP                         ; 005b7d81
    CALL FUN_005b7890                   ; 005b7d83
        ;   XREF to: 005b7890 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7890()
    JMP 0x005b7dae                      ; 005b7d88
        ;   XREF to: 005b7dae (UNCONDITIONAL_JUMP)  ; LAB_005b7dae
    MOV EDX,dword ptr [ESP + 0x140]     ; 005b7d8a
        ;   Label: LAB_005b7d8a
    MOV EAX,dword ptr [ESP + 0x144]     ; 005b7d91
    MOV EBX,dword ptr [ESP + 0x144]     ; 005b7d98
    MOV EDX,dword ptr [EDX]             ; 005b7d9f
    MOV EAX,dword ptr [EAX]             ; 005b7da1
    MOV dword ptr [EBX],EDX             ; 005b7da3
    MOV EDX,dword ptr [ESP + 0x140]     ; 005b7da5
    MOV dword ptr [EDX],EAX             ; 005b7dac
    MOV EDI,dword ptr [ESP + 0x144]     ; 005b7dae
        ;   Label: LAB_005b7dae
    ADD EDI,EBP                         ; 005b7db5
    MOV EAX,dword ptr [ESP + 0x148]     ; 005b7db7
    MOV dword ptr [ESP + 0x144],EDI     ; 005b7dbe
    DEC EAX                             ; 005b7dc5
    MOV dword ptr [ESP + 0x148],EAX     ; 005b7dc6
    JZ 0x005b7dee                       ; 005b7dcd
        ;   XREF to: 005b7dee (CONDITIONAL_JUMP)  ; LAB_005b7dee
    MOV EBX,dword ptr [ESP + 0x140]     ; 005b7dcf
    LEA ECX,[EAX + -0x1]                ; 005b7dd6
    SUB EBX,EBP                         ; 005b7dd9
    MOV dword ptr [ESP + 0x148],ECX     ; 005b7ddb
    MOV dword ptr [ESP + 0x140],EBX     ; 005b7de2
    JMP 0x005b7c1f                      ; 005b7de9
        ;   XREF to: 005b7c1f (UNCONDITIONAL_JUMP)  ; LAB_005b7c1f
    MOV EAX,dword ptr [ESP + 0x174]     ; 005b7dee
        ;   Label: LAB_005b7dee
    IMUL EAX,EBP                        ; 005b7df5
    MOV EDX,dword ptr [ESP + 0x124]     ; 005b7df8
    MOV ECX,dword ptr [ESP + 0x138]     ; 005b7dff
    MOV ESI,dword ptr [ESP + 0x124]     ; 005b7e06
    MOV EDI,dword ptr [ESP + 0x138]     ; 005b7e0d
    ADD EDX,EAX                         ; 005b7e14
    MOV EAX,dword ptr [ESP + 0x144]     ; 005b7e16
    SUB ECX,ESI                         ; 005b7e1d
    SUB EAX,EDI                         ; 005b7e1f
    MOV dword ptr [ESP + 0x118],EDX     ; 005b7e21
    CMP ECX,EAX                         ; 005b7e28
    JL 0x005b7e2e                       ; 005b7e2a
        ;   XREF to: 005b7e2e (CONDITIONAL_JUMP)  ; LAB_005b7e2e
    MOV ECX,EAX                         ; 005b7e2c
    TEST ECX,ECX                        ; 005b7e2e
        ;   Label: LAB_005b7e2e
    JBE 0x005b7e67                      ; 005b7e30
        ;   XREF to: 005b7e67 (CONDITIONAL_JUMP)  ; LAB_005b7e67
    MOV EDI,dword ptr [ESP + 0x144]     ; 005b7e32
    MOV ESI,dword ptr [ESP + 0x124]     ; 005b7e39
    SUB EDI,ECX                         ; 005b7e40
    PUSH ES                             ; 005b7e42
    PUSH DS                             ; 005b7e43
    POP ES                              ; 005b7e44
    MOVZX EDX,CL                        ; 005b7e45
    SHR ECX,0x2                         ; 005b7e48
    JZ 0x005b7e58                       ; 005b7e4b
        ;   XREF to: 005b7e58 (CONDITIONAL_JUMP)  ; LAB_005b7e58
    MOV EAX,dword ptr [EDI]             ; 005b7e4d
        ;   Label: LAB_005b7e4d
    XCHG dword ptr [ESI],EAX            ; 005b7e4f
    STOSD ES:EDI                        ; 005b7e51
    ADD ESI,0x4                         ; 005b7e52
    DEC ECX                             ; 005b7e55
    JNZ 0x005b7e4d                      ; 005b7e56
        ;   XREF to: 005b7e4d (CONDITIONAL_JUMP)  ; LAB_005b7e4d
    AND DL,0x3                          ; 005b7e58
        ;   Label: LAB_005b7e58
    JZ 0x005b7e66                       ; 005b7e5b
        ;   XREF to: 005b7e66 (CONDITIONAL_JUMP)  ; LAB_005b7e66
    MOV AL,byte ptr [EDI]               ; 005b7e5d
        ;   Label: LAB_005b7e5d
    XCHG byte ptr [ESI],AL              ; 005b7e5f
    STOSB ES:EDI                        ; 005b7e61
    INC ESI                             ; 005b7e62
    DEC EDX                             ; 005b7e63
    JNZ 0x005b7e5d                      ; 005b7e64
        ;   XREF to: 005b7e5d (CONDITIONAL_JUMP)  ; LAB_005b7e5d
    POP ES                              ; 005b7e66
        ;   Label: LAB_005b7e66
    MOV ECX,dword ptr [ESP + 0x118]     ; 005b7e67
        ;   Label: LAB_005b7e67
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005b7e6e
    SUB ECX,EAX                         ; 005b7e75
    MOV EDX,dword ptr [ESP + 0x140]     ; 005b7e77
    SUB ECX,EBP                         ; 005b7e7e
    SUB EAX,EDX                         ; 005b7e80
    CMP EAX,ECX                         ; 005b7e82
    JNC 0x005b7e88                      ; 005b7e84
        ;   XREF to: 005b7e88 (CONDITIONAL_JUMP)  ; LAB_005b7e88
    MOV ECX,EAX                         ; 005b7e86
    TEST ECX,ECX                        ; 005b7e88
        ;   Label: LAB_005b7e88
    JBE 0x005b7ec1                      ; 005b7e8a
        ;   XREF to: 005b7ec1 (CONDITIONAL_JUMP)  ; LAB_005b7ec1
    MOV EDI,dword ptr [ESP + 0x118]     ; 005b7e8c
    MOV ESI,dword ptr [ESP + 0x144]     ; 005b7e93
    SUB EDI,ECX                         ; 005b7e9a
    PUSH ES                             ; 005b7e9c
    PUSH DS                             ; 005b7e9d
    POP ES                              ; 005b7e9e
    MOVZX EDX,CL                        ; 005b7e9f
    SHR ECX,0x2                         ; 005b7ea2
    JZ 0x005b7eb2                       ; 005b7ea5
        ;   XREF to: 005b7eb2 (CONDITIONAL_JUMP)  ; LAB_005b7eb2
    MOV EAX,dword ptr [EDI]             ; 005b7ea7
        ;   Label: LAB_005b7ea7
    XCHG dword ptr [ESI],EAX            ; 005b7ea9
    STOSD ES:EDI                        ; 005b7eab
    ADD ESI,0x4                         ; 005b7eac
    DEC ECX                             ; 005b7eaf
    JNZ 0x005b7ea7                      ; 005b7eb0
        ;   XREF to: 005b7ea7 (CONDITIONAL_JUMP)  ; LAB_005b7ea7
    AND DL,0x3                          ; 005b7eb2
        ;   Label: LAB_005b7eb2
    JZ 0x005b7ec0                       ; 005b7eb5
        ;   XREF to: 005b7ec0 (CONDITIONAL_JUMP)  ; LAB_005b7ec0
    MOV AL,byte ptr [EDI]               ; 005b7eb7
        ;   Label: LAB_005b7eb7
    XCHG byte ptr [ESI],AL              ; 005b7eb9
    STOSB ES:EDI                        ; 005b7ebb
    INC ESI                             ; 005b7ebc
    DEC EDX                             ; 005b7ebd
    JNZ 0x005b7eb7                      ; 005b7ebe
        ;   XREF to: 005b7eb7 (CONDITIONAL_JUMP)  ; LAB_005b7eb7
    POP ES                              ; 005b7ec0
        ;   Label: LAB_005b7ec0
    MOV EBX,dword ptr [ESP + 0x144]     ; 005b7ec1
        ;   Label: LAB_005b7ec1
    MOV ECX,dword ptr [ESP + 0x138]     ; 005b7ec8
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005b7ecf
    MOV ESI,dword ptr [ESP + 0x140]     ; 005b7ed6
    SUB EBX,ECX                         ; 005b7edd
    SUB EDI,ESI                         ; 005b7edf
    MOV ECX,dword ptr [ESP + 0x114]     ; 005b7ee1
    MOV ESI,dword ptr [ESP + 0x118]     ; 005b7ee8
    SHL ECX,0x2                         ; 005b7eef
    SUB ESI,EDI                         ; 005b7ef2
    CMP EDI,EBX                         ; 005b7ef4
    JC 0x005b7f10                       ; 005b7ef6
        ;   XREF to: 005b7f10 (CONDITIONAL_JUMP)  ; LAB_005b7f10
    MOV EAX,EDI                         ; 005b7ef8
    XOR EDX,EDX                         ; 005b7efa
    DIV EBP                             ; 005b7efc
    XOR EDX,EDX                         ; 005b7efe
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005b7f00
    MOV EAX,EBX                         ; 005b7f07
    DIV EBP                             ; 005b7f09
    MOV dword ptr [ESP + ECX*0x1],ESI   ; 005b7f0b
    JMP 0x005b7f3c                      ; 005b7f0e
        ;   XREF to: 005b7f3c (UNCONDITIONAL_JUMP)  ; LAB_005b7f3c
    CMP EBX,EBP                         ; 005b7f10
        ;   Label: LAB_005b7f10
    JBE 0x005b7a6c                      ; 005b7f12
        ;   XREF to: 005b7a6c (CONDITIONAL_JUMP)  ; LAB_005b7a6c
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b7f18
    XOR EDX,EDX                         ; 005b7f1f
    MOV dword ptr [ESP + ECX*0x1],EAX   ; 005b7f21
    MOV EAX,EBX                         ; 005b7f24
    DIV EBP                             ; 005b7f26
    XOR EDX,EDX                         ; 005b7f28
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005b7f2a
    MOV EAX,EDI                         ; 005b7f31
    DIV EBP                             ; 005b7f33
    MOV dword ptr [ESP + 0x124],ESI     ; 005b7f35
    MOV dword ptr [ESP + 0x174],EAX     ; 005b7f3c
        ;   Label: LAB_005b7f3c
    INC dword ptr [ESP + 0x114]         ; 005b7f43
    JMP 0x005b792d                      ; 005b7f4a
        ;   XREF to: 005b792d (UNCONDITIONAL_JUMP)  ; LAB_005b792d
    ADD ESP,0x150                       ; 005b7f4f
        ;   Label: LAB_005b7f4f
    POP EBP                             ; 005b7f55
    POP GS                              ; 005b7f56
    POP FS                              ; 005b7f58
    POP ES                              ; 005b7f5a
    POP EDI                             ; 005b7f5b
    POP ESI                             ; 005b7f5c
    POP EBX                             ; 005b7f5d
    RET                                 ; 005b7f5e

