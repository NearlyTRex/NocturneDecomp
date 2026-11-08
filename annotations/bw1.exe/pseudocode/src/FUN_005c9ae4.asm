; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c9ae4(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005c26e0 at 005c2708
;   FUN_005cc6e0 at 005cc810
;
; Referenced Globals:
;   undefined4 DAT_0060852a
;   undefined4 DAT_0060852c
;   undefined4 DAT_0060852e
;   undefined4 DAT_00608544
;   undefined4 DAT_00608546
;   undefined4 DAT_00626844
;   undefined4 DAT_00626850
;   undefined4 DAT_00626854
;   undefined4 DAT_0062685c
;   undefined4 DAT_00626860
;   undefined4 DAT_00626864
;   undefined4 DAT_00626868
;   undefined4 DAT_00626874
;   undefined4 DAT_00626878
;   undefined4 DAT_00626880
;   ... and 4 more
;
; Called Functions:
;   FUN_005c9950
;   FUN_005c9a88
;   FUN_005c9db8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9ae4
        ;   Label: FUN_005c9ae4
    PUSH ESI                            ; 005c9ae5
    PUSH EDI                            ; 005c9ae6
    PUSH EBP                            ; 005c9ae7
    SUB ESP,0x1c                        ; 005c9ae8
    MOV EBX,dword ptr [ESP + 0x30]      ; 005c9aeb
    MOV EAX,[0x00626994]                ; 005c9aef | PTR_DAT_00626994
    MOV DL,byte ptr [EAX]               ; 005c9af4 | DAT_0062690d
    XOR ESI,ESI                         ; 005c9af6
    TEST DL,DL                          ; 005c9af8
    JZ 0x005c9dab                       ; 005c9afa
        ;   XREF to: 005c9dab (CONDITIONAL_JUMP)  ; LAB_005c9dab
    MOV EDX,dword ptr [EBX + 0x14]      ; 005c9b00
    PUSH EDX                            ; 005c9b03
    PUSH 0x626868                       ; 005c9b04 | DAT_00626868
    PUSH 0x626844                       ; 005c9b09 | DAT_00626844
    CALL FUN_005c9a88                   ; 005c9b0e
        ;   XREF to: 005c9a88 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9a88()
    ADD ESP,0xc                         ; 005c9b13
    MOV dword ptr [ESP + 0x10],EAX      ; 005c9b16
    TEST EAX,EAX                        ; 005c9b1a
    JZ 0x005c9b2a                       ; 005c9b1c
        ;   XREF to: 005c9b2a (CONDITIONAL_JUMP)  ; LAB_005c9b2a
    MOV EBP,0x626868                    ; 005c9b1e | DAT_00626868
    MOV EDI,0x626844                    ; 005c9b23 | DAT_00626844
    JMP 0x005c9b34                      ; 005c9b28
        ;   XREF to: 005c9b34 (UNCONDITIONAL_JUMP)  ; LAB_005c9b34
    MOV EBP,0x626844                    ; 005c9b2a | DAT_00626844
        ;   Label: LAB_005c9b2a
    MOV EDI,0x626868                    ; 005c9b2f | DAT_00626868
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c9b34
        ;   Label: LAB_005c9b34
    MOV dword ptr [ESP + 0x14],EAX      ; 005c9b37
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c9b3b
    ADD EAX,0x76c                       ; 005c9b3e
    PUSH EAX                            ; 005c9b43
    CALL FUN_005c9950                   ; 005c9b44
        ;   XREF to: 005c9950 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9950()
    ADD ESP,0x4                         ; 005c9b49
    MOV EDX,EAX                         ; 005c9b4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c9b4e
    ADD EAX,EAX                         ; 005c9b52
    TEST EDX,EDX                        ; 005c9b54
    JZ 0x005c9b66                       ; 005c9b56
        ;   XREF to: 005c9b66 (CONDITIONAL_JUMP)  ; LAB_005c9b66
    MOV EDX,dword ptr [EAX + 0x608546]  ; 005c9b58 | DAT_00608546
    MOV EAX,dword ptr [EAX + 0x608544]  ; 005c9b5e | DAT_00608544
    JMP 0x005c9b72                      ; 005c9b64
        ;   XREF to: 005c9b72 (UNCONDITIONAL_JUMP)  ; LAB_005c9b72
    MOV EDX,dword ptr [EAX + 0x60852c]  ; 005c9b66 | DAT_0060852c
        ;   Label: LAB_005c9b66
    MOV EAX,dword ptr [EAX + 0x60852a]  ; 005c9b6c | DAT_0060852a
    SAR EDX,0x10                        ; 005c9b72
        ;   Label: LAB_005c9b72
    SAR EAX,0x10                        ; 005c9b75
    SUB EDX,EAX                         ; 005c9b78
    MOV dword ptr [ESP + 0xc],EDX       ; 005c9b7a
    XOR ECX,ECX                         ; 005c9b7e
    MOV EAX,dword ptr [EBP + 0x20]      ; 005c9b80 | DAT_00626888
    MOV dword ptr [ESP + 0x4],ECX       ; 005c9b83
    TEST EAX,EAX                        ; 005c9b87
    JNZ 0x005c9c2d                      ; 005c9b89
        ;   XREF to: 005c9c2d (CONDITIONAL_JUMP)  ; LAB_005c9c2d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c9b8f
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c9b93 | DAT_00626878
    CMP EAX,ECX                         ; 005c9b96
    JLE 0x005c9ba4                      ; 005c9b98
        ;   XREF to: 005c9ba4 (CONDITIONAL_JUMP)  ; LAB_005c9ba4
    MOV ESI,0x1                         ; 005c9b9a
    JMP 0x005c9c7e                      ; 005c9b9f
        ;   XREF to: 005c9c7e (UNCONDITIONAL_JUMP)  ; LAB_005c9c7e
    JNZ 0x005c9c7e                      ; 005c9ba4
        ;   XREF to: 005c9c7e (CONDITIONAL_JUMP)  ; LAB_005c9c7e
        ;   Label: LAB_005c9ba4
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c9baa
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c9bad | DAT_00626880
    ADD EDX,0x7                         ; 005c9bb0
    SUB EDX,ECX                         ; 005c9bb3
    MOV ECX,0x7                         ; 005c9bb5
    MOV EAX,EDX                         ; 005c9bba
    SAR EDX,0x1f                        ; 005c9bbc
    IDIV ECX                            ; 005c9bbf
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c9bc1
    SUB EAX,EDX                         ; 005c9bc4
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c9bc6
    MOV dword ptr [ESP + 0x8],EAX       ; 005c9bc9
    ADD EDX,0x6                         ; 005c9bcd
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c9bd0 | DAT_00626880
    SUB EDX,EAX                         ; 005c9bd3
    MOV EAX,EDX                         ; 005c9bd5
    SAR EDX,0x1f                        ; 005c9bd7
    IDIV ECX                            ; 005c9bda
    MOV ECX,dword ptr [EBX + 0xc]       ; 005c9bdc
    DEC ECX                             ; 005c9bdf
    SUB ECX,EDX                         ; 005c9be0
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c9be2 | DAT_00626874
    CMP EDX,0x5                         ; 005c9be5
    JNZ 0x005c9c0f                      ; 005c9be8
        ;   XREF to: 005c9c0f (CONDITIONAL_JUMP)  ; LAB_005c9c0f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c9bea
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c9bee
    SUB EAX,0x7                         ; 005c9bf2
    CMP EAX,EDX                         ; 005c9bf5
    JGE 0x005c9c7e                      ; 005c9bf7
        ;   XREF to: 005c9c7e (CONDITIONAL_JUMP)  ; LAB_005c9c7e
    MOV ESI,0x1                         ; 005c9bfd
    CMP ECX,EAX                         ; 005c9c02
    JG 0x005c9c7e                       ; 005c9c04
        ;   XREF to: 005c9c7e (CONDITIONAL_JUMP)  ; LAB_005c9c7e
    JMP 0x005c9c85                      ; 005c9c0a
        ;   XREF to: 005c9c85 (UNCONDITIONAL_JUMP)  ; LAB_005c9c85
    DEC EDX                             ; 005c9c0f
        ;   Label: LAB_005c9c0f
    LEA EAX,[EDX*0x8 + 0x0]             ; 005c9c10
    SUB EAX,EDX                         ; 005c9c17
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c9c19
    INC EAX                             ; 005c9c1d
    CMP EAX,EDX                         ; 005c9c1e
    JG 0x005c9c7e                       ; 005c9c20
        ;   XREF to: 005c9c7e (CONDITIONAL_JUMP)  ; LAB_005c9c7e
    MOV ESI,0x1                         ; 005c9c22
    CMP ECX,EAX                         ; 005c9c27
    JGE 0x005c9c7e                      ; 005c9c29
        ;   XREF to: 005c9c7e (CONDITIONAL_JUMP)  ; LAB_005c9c7e
    JMP 0x005c9c85                      ; 005c9c2b
        ;   XREF to: 005c9c85 (UNCONDITIONAL_JUMP)  ; LAB_005c9c85
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c9c2d | DAT_00626884
        ;   Label: LAB_005c9c2d
    MOV EDX,dword ptr [EBP + 0x20]      ; 005c9c30 | DAT_00626888
    MOV dword ptr [ESP + 0x18],EAX      ; 005c9c33
    CMP EDX,0x1                         ; 005c9c37
    JNZ 0x005c9c6c                      ; 005c9c3a
        ;   XREF to: 005c9c6c (CONDITIONAL_JUMP)  ; LAB_005c9c6c
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c9c3c
    ADD EAX,0x76c                       ; 005c9c3f
    PUSH EAX                            ; 005c9c44
    CALL FUN_005c9950                   ; 005c9c45
        ;   XREF to: 005c9950 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9950()
    ADD ESP,0x4                         ; 005c9c4a
    TEST EAX,EAX                        ; 005c9c4d
    JZ 0x005c9c68                       ; 005c9c4f
        ;   XREF to: 005c9c68 (CONDITIONAL_JUMP)  ; LAB_005c9c68
    MOV EAX,[0x0060852e]                ; 005c9c51 | DAT_0060852e
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c9c56
    SAR EAX,0x10                        ; 005c9c5a
    CMP EAX,ECX                         ; 005c9c5d
    JGE 0x005c9c68                      ; 005c9c5f
        ;   XREF to: 005c9c68 (CONDITIONAL_JUMP)  ; LAB_005c9c68
    LEA EAX,[ECX + 0x1]                 ; 005c9c61
    MOV dword ptr [ESP + 0x18],EAX      ; 005c9c64
    DEC dword ptr [ESP + 0x18]          ; 005c9c68
        ;   Label: LAB_005c9c68
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c9c6c
        ;   Label: LAB_005c9c6c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c9c70
    CMP EAX,ECX                         ; 005c9c73
    JL 0x005c9c7e                       ; 005c9c75
        ;   XREF to: 005c9c7e (CONDITIONAL_JUMP)  ; LAB_005c9c7e
    MOV ESI,0x1                         ; 005c9c77
    JZ 0x005c9c85                       ; 005c9c7c
        ;   XREF to: 005c9c85 (CONDITIONAL_JUMP)  ; LAB_005c9c85
    CMP dword ptr [ESP + 0x4],0x0       ; 005c9c7e
        ;   Label: LAB_005c9c7e
    JZ 0x005c9c9c                       ; 005c9c83
        ;   XREF to: 005c9c9c (CONDITIONAL_JUMP)  ; LAB_005c9c9c
    PUSH EBP                            ; 005c9c85 | DAT_00626868
        ;   Label: LAB_005c9c85
    PUSH EBX                            ; 005c9c86
    CALL FUN_005c9db8                   ; 005c9c87
        ;   XREF to: 005c9db8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9db8()
    ADD ESP,0x8                         ; 005c9c8c
    TEST EAX,EAX                        ; 005c9c8f
    SETZ AL                             ; 005c9c91
    MOV ESI,EAX                         ; 005c9c94
    AND ESI,0xff                        ; 005c9c96
    TEST ESI,ESI                        ; 005c9c9c
        ;   Label: LAB_005c9c9c
    JNZ 0x005c9cb3                      ; 005c9c9e
        ;   XREF to: 005c9cb3 (CONDITIONAL_JUMP)  ; LAB_005c9cb3
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c9ca0
    TEST EDX,EDX                        ; 005c9ca4
    JZ 0x005c9dab                       ; 005c9ca6
        ;   XREF to: 005c9dab (CONDITIONAL_JUMP)  ; LAB_005c9dab
    MOV ESI,EDX                         ; 005c9cac
    JMP 0x005c9dab                      ; 005c9cae
        ;   XREF to: 005c9dab (UNCONDITIONAL_JUMP)  ; LAB_005c9dab
    XOR EBP,EBP                         ; 005c9cb3
        ;   Label: LAB_005c9cb3
    MOV EAX,dword ptr [EDI + 0x20]      ; 005c9cb5 | DAT_00626864
    MOV dword ptr [ESP],EBP             ; 005c9cb8
    TEST EAX,EAX                        ; 005c9cbb
    JNZ 0x005c9d55                      ; 005c9cbd
        ;   XREF to: 005c9d55 (CONDITIONAL_JUMP)  ; LAB_005c9d55
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c9cc3
    MOV EDX,dword ptr [EDI + 0x10]      ; 005c9cc7 | DAT_00626854
    CMP EAX,EDX                         ; 005c9cca
    JLE 0x005c9cd5                      ; 005c9ccc
        ;   XREF to: 005c9cd5 (CONDITIONAL_JUMP)  ; LAB_005c9cd5
    XOR ESI,ESI                         ; 005c9cce
    JMP 0x005c9d8d                      ; 005c9cd0
        ;   XREF to: 005c9d8d (UNCONDITIONAL_JUMP)  ; LAB_005c9d8d
    JNZ 0x005c9d8d                      ; 005c9cd5
        ;   XREF to: 005c9d8d (CONDITIONAL_JUMP)  ; LAB_005c9d8d
        ;   Label: LAB_005c9cd5
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c9cdb
    MOV EBP,dword ptr [EDI + 0x18]      ; 005c9cde | DAT_0062685c
    ADD EDX,0x7                         ; 005c9ce1
    SUB EDX,EBP                         ; 005c9ce4
    MOV ECX,0x7                         ; 005c9ce6
    MOV EAX,EDX                         ; 005c9ceb
    SAR EDX,0x1f                        ; 005c9ced
    IDIV ECX                            ; 005c9cf0
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c9cf2
    SUB EBP,EDX                         ; 005c9cf5
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c9cf7
    MOV EAX,dword ptr [EDI + 0x18]      ; 005c9cfa | DAT_0062685c
    ADD EDX,0x6                         ; 005c9cfd
    SUB EDX,EAX                         ; 005c9d00
    MOV EAX,EDX                         ; 005c9d02
    SAR EDX,0x1f                        ; 005c9d04
    IDIV ECX                            ; 005c9d07
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c9d09
    DEC EAX                             ; 005c9d0c
    XOR ESI,ESI                         ; 005c9d0d
    SUB EAX,EDX                         ; 005c9d0f
    MOV ECX,dword ptr [EDI + 0xc]       ; 005c9d11 | DAT_00626850
    MOV EDX,EAX                         ; 005c9d14
    CMP ECX,0x5                         ; 005c9d16
    JNZ 0x005c9d39                      ; 005c9d19
        ;   XREF to: 005c9d39 (CONDITIONAL_JUMP)  ; LAB_005c9d39
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c9d1b
    SUB EAX,0x7                         ; 005c9d1f
    CMP EBP,EAX                         ; 005c9d22
    JG 0x005c9d30                       ; 005c9d24
        ;   XREF to: 005c9d30 (CONDITIONAL_JUMP)  ; LAB_005c9d30
    MOV ESI,0x1                         ; 005c9d26
    JMP 0x005c9d8d                      ; 005c9d2b
        ;   XREF to: 005c9d8d (UNCONDITIONAL_JUMP)  ; LAB_005c9d8d
    CMP EDX,EAX                         ; 005c9d30
        ;   Label: LAB_005c9d30
    JG 0x005c9d8d                       ; 005c9d32
        ;   XREF to: 005c9d8d (CONDITIONAL_JUMP)  ; LAB_005c9d8d
    JMP 0x005c9d93                      ; 005c9d34
        ;   XREF to: 005c9d93 (UNCONDITIONAL_JUMP)  ; LAB_005c9d93
    DEC ECX                             ; 005c9d39
        ;   Label: LAB_005c9d39
    LEA EAX,[ECX*0x8 + 0x0]             ; 005c9d3a
    SUB EAX,ECX                         ; 005c9d41
    INC EAX                             ; 005c9d43
    CMP EBP,EAX                         ; 005c9d44
    JGE 0x005c9d4f                      ; 005c9d46
        ;   XREF to: 005c9d4f (CONDITIONAL_JUMP)  ; LAB_005c9d4f
    MOV ESI,0x1                         ; 005c9d48
    JMP 0x005c9d8d                      ; 005c9d4d
        ;   XREF to: 005c9d8d (UNCONDITIONAL_JUMP)  ; LAB_005c9d8d
    CMP EDX,EAX                         ; 005c9d4f
        ;   Label: LAB_005c9d4f
    JGE 0x005c9d8d                      ; 005c9d51
        ;   XREF to: 005c9d8d (CONDITIONAL_JUMP)  ; LAB_005c9d8d
    JMP 0x005c9d93                      ; 005c9d53
        ;   XREF to: 005c9d93 (UNCONDITIONAL_JUMP)  ; LAB_005c9d93
    MOV EBP,dword ptr [EDI + 0x1c]      ; 005c9d55 | DAT_00626860
        ;   Label: LAB_005c9d55
    CMP EAX,0x1                         ; 005c9d58
    JNZ 0x005c9d80                      ; 005c9d5b
        ;   XREF to: 005c9d80 (CONDITIONAL_JUMP)  ; LAB_005c9d80
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c9d5d
    ADD EAX,0x76c                       ; 005c9d60
    PUSH EAX                            ; 005c9d65
    CALL FUN_005c9950                   ; 005c9d66
        ;   XREF to: 005c9950 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9950()
    ADD ESP,0x4                         ; 005c9d6b
    TEST EAX,EAX                        ; 005c9d6e
    JZ 0x005c9d7f                       ; 005c9d70
        ;   XREF to: 005c9d7f (CONDITIONAL_JUMP)  ; LAB_005c9d7f
    MOV EAX,[0x0060852e]                ; 005c9d72 | DAT_0060852e
    SAR EAX,0x10                        ; 005c9d77
    CMP EBP,EAX                         ; 005c9d7a
    JLE 0x005c9d7f                      ; 005c9d7c
        ;   XREF to: 005c9d7f (CONDITIONAL_JUMP)  ; LAB_005c9d7f
    INC EBP                             ; 005c9d7e
    DEC EBP                             ; 005c9d7f
        ;   Label: LAB_005c9d7f
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005c9d80
        ;   Label: LAB_005c9d80
    CMP EBP,ECX                         ; 005c9d83
    JG 0x005c9d8d                       ; 005c9d85
        ;   XREF to: 005c9d8d (CONDITIONAL_JUMP)  ; LAB_005c9d8d
    XOR ESI,ESI                         ; 005c9d87
    CMP EBP,ECX                         ; 005c9d89
    JZ 0x005c9d93                       ; 005c9d8b
        ;   XREF to: 005c9d93 (CONDITIONAL_JUMP)  ; LAB_005c9d93
    CMP dword ptr [ESP],0x0             ; 005c9d8d
        ;   Label: LAB_005c9d8d
    JZ 0x005c9d9f                       ; 005c9d91
        ;   XREF to: 005c9d9f (CONDITIONAL_JUMP)  ; LAB_005c9d9f
    PUSH EDI                            ; 005c9d93 | DAT_00626844
        ;   Label: LAB_005c9d93
    PUSH EBX                            ; 005c9d94
    CALL FUN_005c9db8                   ; 005c9d95
        ;   XREF to: 005c9db8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9db8()
    ADD ESP,0x8                         ; 005c9d9a
    MOV ESI,EAX                         ; 005c9d9d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c9d9f
        ;   Label: LAB_005c9d9f
    TEST EAX,EAX                        ; 005c9da3
    JZ 0x005c9dab                       ; 005c9da5
        ;   XREF to: 005c9dab (CONDITIONAL_JUMP)  ; LAB_005c9dab
    SUB EAX,ESI                         ; 005c9da7
    MOV ESI,EAX                         ; 005c9da9
    MOV EAX,ESI                         ; 005c9dab
        ;   Label: LAB_005c9dab
    MOV dword ptr [EBX + 0x20],ESI      ; 005c9dad
    ADD ESP,0x1c                        ; 005c9db0
    POP EBP                             ; 005c9db3
    POP EDI                             ; 005c9db4
    POP ESI                             ; 005c9db5
    POP EBX                             ; 005c9db6
    RET                                 ; 005c9db7

