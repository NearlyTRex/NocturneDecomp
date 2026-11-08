; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527ab0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052bc10
;
; Referenced Globals:
;   undefined4 DAT_006206f8
;   undefined4 DAT_006206fc
;   undefined4 DAT_00620700
;   undefined4 DAT_0062070c
;   undefined4 DAT_00620710
;   undefined4 DAT_00620714
;   undefined4 DAT_00620718
;   undefined4 DAT_00620758
;
; Called Functions:
;   FUN_00525f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527ab0
        ;   Label: FUN_00527ab0
    PUSH ESI                            ; 00527ab1
    PUSH EDI                            ; 00527ab2
    PUSH EBP                            ; 00527ab3
    SUB ESP,0x58                        ; 00527ab4
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00527ab7
    MOV EBP,dword ptr [ESP + 0x74]      ; 00527abb
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00527abf
    LEA EAX,[EDX*0x4 + 0x0]             ; 00527ac3
    ADD EAX,EDX                         ; 00527aca
    LEA EBX,[EBP + 0x8]                 ; 00527acc
    SHL EAX,0x5                         ; 00527acf
    MOV EDX,dword ptr [ESP + 0x78]      ; 00527ad2
    ADD EBX,EAX                         ; 00527ad6
    LEA EAX,[EDX*0x8 + 0x0]             ; 00527ad8
    ADD EAX,EDX                         ; 00527adf
    ADD EBX,0x10                        ; 00527ae1
    SHL EAX,0x3                         ; 00527ae4
    LEA ESI,[EBX + EAX*0x1]             ; 00527ae7
    CMP dword ptr [ESI + 0x10],0x0      ; 00527aea
    JZ 0x00527afa                       ; 00527aee
        ;   XREF to: 00527afa (CONDITIONAL_JUMP)  ; LAB_00527afa
    CMP dword ptr [ESI + 0x14],0x2      ; 00527af0
    JZ 0x00527bf2                       ; 00527af4
        ;   XREF to: 00527bf2 (CONDITIONAL_JUMP)  ; LAB_00527bf2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00527afa
        ;   Label: LAB_00527afa
    SHL EAX,0x3                         ; 00527afe
    MOV EDX,EAX                         ; 00527b01
    SHL EAX,0x5                         ; 00527b03
    SUB EAX,EDX                         ; 00527b06
    MOV EDX,dword ptr [ESP + 0x70]      ; 00527b08
    ADD EDX,EAX                         ; 00527b0c
    MOV dword ptr [ESP + 0x4],EDX       ; 00527b0e
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00527b12
    LEA EAX,[EDX*0x4 + 0x0]             ; 00527b16
    ADD EAX,EDX                         ; 00527b1d
    XOR EBX,EBX                         ; 00527b1f
    SHL EAX,0x5                         ; 00527b21
    MOV dword ptr [ESP + 0x30],EBX      ; 00527b24
    ADD EAX,EBP                         ; 00527b28
    MOV dword ptr [ESP + 0x24],EBX      ; 00527b2a
    MOV dword ptr [ESP + 0x18],EAX      ; 00527b2e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00527b32
        ;   Label: LAB_00527b32
    CMP dword ptr [EAX + 0x8],0x0       ; 00527b36
    JNZ 0x00527e6b                      ; 00527b3a
        ;   XREF to: 00527e6b (CONDITIONAL_JUMP)  ; LAB_00527e6b
    MOV EAX,dword ptr [ESP + 0x30]      ; 00527b40
        ;   Label: LAB_00527b40
    MOV EBX,dword ptr [ESP + 0x30]      ; 00527b44
    MOV EDX,dword ptr [ESP + 0x24]      ; 00527b48
    MOV ECX,dword ptr [ESP + 0x4]       ; 00527b4c
    MOV dword ptr [ESP + 0x38],EAX      ; 00527b50
    MOV EBX,dword ptr [EBX + 0x6206f8]  ; 00527b54 | DAT_006206f8 | DAT_006206fc
    CMP EDX,0x2                         ; 00527b5a
    SETGE byte ptr [ESP + 0x54]         ; 00527b5d
    LEA EBP,[EBX*0x4 + 0x0]             ; 00527b62
    MOV EDX,dword ptr [EAX + 0x6206fc]  ; 00527b69 | DAT_006206fc | DAT_00620700
    ADD EBP,ECX                         ; 00527b6f
    CMP EBX,EDX                         ; 00527b71
    JGE 0x00527ba9                      ; 00527b73
        ;   XREF to: 00527ba9 (CONDITIONAL_JUMP)  ; LAB_00527ba9
    XOR EAX,EAX                         ; 00527b75
        ;   Label: LAB_00527b75
    MOV AL,byte ptr [ESP + 0x54]        ; 00527b77
    MOV EDX,EAX                         ; 00527b7b
    SHL EDX,0x6                         ; 00527b7d
    MOV EAX,dword ptr [ESI + 0xc]       ; 00527b80
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x620718] ; 00527b83 | DAT_00620718
    PUSH ECX                            ; 00527b8a
    PUSH EDI                            ; 00527b8b
    CALL FUN_00525f00                   ; 00527b8c
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f00()
    ADD ESP,0x8                         ; 00527b91
    MOV dword ptr [EBP],EAX             ; 00527b94
    MOV EAX,dword ptr [ESP + 0x38]      ; 00527b97
    INC EBX                             ; 00527b9b
    MOV EDX,dword ptr [EAX + 0x6206fc]  ; 00527b9c | DAT_006206fc
    ADD EBP,0x4                         ; 00527ba2
    CMP EBX,EDX                         ; 00527ba5
    JL 0x00527b75                       ; 00527ba7
        ;   XREF to: 00527b75 (CONDITIONAL_JUMP)  ; LAB_00527b75
    MOV EBX,dword ptr [ESP + 0x30]      ; 00527ba9
        ;   Label: LAB_00527ba9
    MOV EBP,dword ptr [ESP + 0x24]      ; 00527bad
    MOV ECX,dword ptr [ESP + 0x18]      ; 00527bb1
    ADD EBX,0x4                         ; 00527bb5
    INC EBP                             ; 00527bb8
    ADD ECX,0x4                         ; 00527bb9
    MOV dword ptr [ESP + 0x30],EBX      ; 00527bbc
    MOV dword ptr [ESP + 0x24],EBP      ; 00527bc0
    MOV dword ptr [ESP + 0x18],ECX      ; 00527bc4
    CMP EBP,0x4                         ; 00527bc8
    JL 0x00527b32                       ; 00527bcb
        ;   XREF to: 00527b32 (CONDITIONAL_JUMP)  ; LAB_00527b32
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00527bd1
    SHL EAX,0x3                         ; 00527bd5
    MOV EDX,EAX                         ; 00527bd8
    SHL EAX,0x5                         ; 00527bda
    SUB EAX,EDX                         ; 00527bdd
    ADD EAX,dword ptr [ESP + 0x70]      ; 00527bdf
    MOV dword ptr [EAX + 0x58],0x0      ; 00527be3
    ADD ESP,0x58                        ; 00527bea
    POP EBP                             ; 00527bed
    POP EDI                             ; 00527bee
    POP ESI                             ; 00527bef
    POP EBX                             ; 00527bf0
    RET                                 ; 00527bf1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00527bf2
        ;   Label: LAB_00527bf2
    SHL EAX,0x3                         ; 00527bf6
    MOV EDX,EAX                         ; 00527bf9
    SHL EAX,0x5                         ; 00527bfb
    MOV EBP,dword ptr [ESP + 0x70]      ; 00527bfe
    SUB EAX,EDX                         ; 00527c02
    ADD EBP,EAX                         ; 00527c04
    MOV EAX,dword ptr [ESI + 0x18]      ; 00527c06
    TEST EAX,EAX                        ; 00527c09
    JZ 0x00527d60                       ; 00527c0b
        ;   XREF to: 00527d60 (CONDITIONAL_JUMP)  ; LAB_00527d60
    MOV EBX,EBP                         ; 00527c11
    ADD EBP,0x20                        ; 00527c13
    MOV EAX,dword ptr [ESI + 0xc]       ; 00527c16
        ;   Label: LAB_00527c16
    MOV EDX,dword ptr [EAX*0x4 + 0x620718] ; 00527c19 | DAT_00620718
    PUSH EDX                            ; 00527c20
    PUSH EDI                            ; 00527c21
    ADD EBX,0x4                         ; 00527c22
    CALL FUN_00525f00                   ; 00527c25
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f00()
    ADD ESP,0x8                         ; 00527c2a
    MOV dword ptr [EBX + -0x4],EAX      ; 00527c2d
    CMP EBX,EBP                         ; 00527c30
    JNZ 0x00527c16                      ; 00527c32
        ;   XREF to: 00527c16 (CONDITIONAL_JUMP)  ; LAB_00527c16
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00527c34
    SHL EAX,0x3                         ; 00527c38
    MOV EBX,0xa8                        ; 00527c3b
    MOV EDX,EAX                         ; 00527c40
    SHL EAX,0x5                         ; 00527c42
    MOV ECX,0x3                         ; 00527c45
    SUB EAX,EDX                         ; 00527c4a
    MOV EDX,dword ptr [ESP + 0x70]      ; 00527c4c
    MOV dword ptr [ESP + 0x14],EBX      ; 00527c50
    ADD EDX,EAX                         ; 00527c54
    MOV dword ptr [ESP + 0x2c],ECX      ; 00527c56
    MOV dword ptr [ESP + 0xc],EDX       ; 00527c5a
    MOV dword ptr [ESP + 0x8],EDX       ; 00527c5e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00527c62
        ;   Label: LAB_00527c62
    MOV EBX,dword ptr [ESP + 0xc]       ; 00527c66
    MOV EBP,dword ptr [ESP + 0x8]       ; 00527c6a
    MOV ECX,dword ptr [ESP + 0x14]      ; 00527c6e
    SHL EAX,0x2                         ; 00527c72
    ADD EBP,ECX                         ; 00527c75
    ADD EBX,EAX                         ; 00527c77
    MOV EAX,dword ptr [ESI + 0xc]       ; 00527c79
        ;   Label: LAB_00527c79
    MOV EDX,dword ptr [EAX*0x4 + 0x620718] ; 00527c7c | DAT_00620718
    PUSH EDX                            ; 00527c83
    PUSH EDI                            ; 00527c84
    ADD EBX,0x34                        ; 00527c85
    CALL FUN_00525f00                   ; 00527c88
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f00()
    ADD ESP,0x8                         ; 00527c8d
    MOV dword ptr [EBX + 0x28],EAX      ; 00527c90
    CMP EBX,EBP                         ; 00527c93
    JNZ 0x00527c79                      ; 00527c95
        ;   XREF to: 00527c79 (CONDITIONAL_JUMP)  ; LAB_00527c79
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00527c97
    MOV ECX,dword ptr [ESP + 0x14]      ; 00527c9b
    INC EBX                             ; 00527c9f
    ADD ECX,0x4                         ; 00527ca0
    MOV dword ptr [ESP + 0x2c],EBX      ; 00527ca3
    MOV dword ptr [ESP + 0x14],ECX      ; 00527ca7
    CMP EBX,0x6                         ; 00527cab
    JL 0x00527c62                       ; 00527cae
        ;   XREF to: 00527c62 (CONDITIONAL_JUMP)  ; LAB_00527c62
    MOV dword ptr [ESP + 0x28],0x6      ; 00527cb0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00527cb8
    SHL EAX,0x3                         ; 00527cbc
    MOV EDX,EAX                         ; 00527cbf
    SHL EAX,0x5                         ; 00527cc1
    SUB EAX,EDX                         ; 00527cc4
    MOV EDX,dword ptr [ESP + 0x70]      ; 00527cc6
    ADD EDX,EAX                         ; 00527cca
    MOV dword ptr [ESP + 0x10],EDX      ; 00527ccc
    MOV EDX,0xb4                        ; 00527cd0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00527cd5
    MOV dword ptr [ESP + 0x1c],EDX      ; 00527cd9
    MOV dword ptr [ESP],EAX             ; 00527cdd
    MOV EBX,dword ptr [ESP + 0x28]      ; 00527ce0
        ;   Label: LAB_00527ce0
    MOV ECX,dword ptr [ESP + 0x10]      ; 00527ce4
    MOV EBP,dword ptr [ESP]             ; 00527ce8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00527ceb
    SHL EBX,0x2                         ; 00527cef
    ADD EBP,EAX                         ; 00527cf2
    ADD EBX,ECX                         ; 00527cf4
    MOV EAX,dword ptr [ESI + 0xc]       ; 00527cf6
        ;   Label: LAB_00527cf6
    MOV EDX,dword ptr [EAX*0x4 + 0x620758] ; 00527cf9 | DAT_00620758
    PUSH EDX                            ; 00527d00
    PUSH EDI                            ; 00527d01
    ADD EBX,0x34                        ; 00527d02
    CALL FUN_00525f00                   ; 00527d05
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f00()
    ADD ESP,0x8                         ; 00527d0a
    MOV dword ptr [EBX + 0x28],EAX      ; 00527d0d
    CMP EBX,EBP                         ; 00527d10
    JNZ 0x00527cf6                      ; 00527d12
        ;   XREF to: 00527cf6 (CONDITIONAL_JUMP)  ; LAB_00527cf6
    MOV EBX,dword ptr [ESP + 0x28]      ; 00527d14
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00527d18
    INC EBX                             ; 00527d1c
    ADD ECX,0x4                         ; 00527d1d
    MOV dword ptr [ESP + 0x28],EBX      ; 00527d20
    MOV dword ptr [ESP + 0x1c],ECX      ; 00527d24
    CMP EBX,0xc                         ; 00527d28
    JL 0x00527ce0                       ; 00527d2b
        ;   XREF to: 00527ce0 (CONDITIONAL_JUMP)  ; LAB_00527ce0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00527d2d
    SHL EAX,0x3                         ; 00527d31
    MOV EDX,EAX                         ; 00527d34
    SHL EAX,0x5                         ; 00527d36
    SUB EAX,EDX                         ; 00527d39
    MOV EDX,dword ptr [ESP + 0x70]      ; 00527d3b
    ADD EDX,EAX                         ; 00527d3f
    LEA EAX,[EDX + 0x30]                ; 00527d41
    ADD EDX,0xcc                        ; 00527d44
    ADD EAX,0x34                        ; 00527d4a
        ;   Label: LAB_00527d4a
    MOV dword ptr [EAX + 0x28],0x0      ; 00527d4d
    CMP EAX,EDX                         ; 00527d54
    JNZ 0x00527d4a                      ; 00527d56
        ;   XREF to: 00527d4a (CONDITIONAL_JUMP)  ; LAB_00527d4a
    ADD ESP,0x58                        ; 00527d58
    POP EBP                             ; 00527d5b
    POP EDI                             ; 00527d5c
    POP ESI                             ; 00527d5d
    POP EBX                             ; 00527d5e
    RET                                 ; 00527d5f
    MOV dword ptr [ESP + 0x34],EAX      ; 00527d60
        ;   Label: LAB_00527d60
    MOV dword ptr [ESP + 0x20],EAX      ; 00527d64
    MOV dword ptr [ESP + 0x40],EBP      ; 00527d68
    MOV EAX,dword ptr [ESP + 0x34]      ; 00527d6c
        ;   Label: LAB_00527d6c
    MOV EBP,dword ptr [ESP + 0x34]      ; 00527d70
    MOV EAX,dword ptr [EAX + 0x62070c]  ; 00527d74 | DAT_0062070c | DAT_00620710
    MOV ECX,dword ptr [EBP + 0x620710]  ; 00527d7a | DAT_00620710 | DAT_00620714
    MOV dword ptr [ESP + 0x4c],EAX      ; 00527d80
    MOV EAX,dword ptr [ESP + 0x20]      ; 00527d84
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00527d88
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00527d8c
    MOV dword ptr [ESP + 0x50],EAX      ; 00527d90
    MOV EAX,dword ptr [ESP + 0x34]      ; 00527d94
    SHL EBX,0x2                         ; 00527d98
    MOV dword ptr [ESP + 0x3c],EAX      ; 00527d9b
    LEA EAX,[EBX + 0x9c]                ; 00527d9f
    CMP EDX,ECX                         ; 00527da5
    JGE 0x00527e16                      ; 00527da7
        ;   XREF to: 00527e16 (CONDITIONAL_JUMP)  ; LAB_00527e16
    ADD EAX,dword ptr [ESP + 0x40]      ; 00527da9
    MOV dword ptr [ESP + 0x48],EBX      ; 00527dad
    MOV dword ptr [ESP + 0x44],EAX      ; 00527db1
    MOV EBX,dword ptr [ESP + 0x48]      ; 00527db5
        ;   Label: LAB_00527db5
    MOV ECX,dword ptr [ESP + 0x40]      ; 00527db9
    MOV EBP,dword ptr [ESP + 0x44]      ; 00527dbd
    ADD EBX,ECX                         ; 00527dc1
    MOV EAX,dword ptr [ESI + 0xc]       ; 00527dc3
        ;   Label: LAB_00527dc3
    MOV EDX,dword ptr [ESP + 0x50]      ; 00527dc6
    SHL EAX,0x2                         ; 00527dca
    ADD EAX,EDX                         ; 00527dcd
    MOV ECX,dword ptr [EAX + 0x620718]  ; 00527dcf | DAT_00620718
    PUSH ECX                            ; 00527dd5
    PUSH EDI                            ; 00527dd6
    ADD EBX,0x34                        ; 00527dd7
    CALL FUN_00525f00                   ; 00527dda
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00525f00()
    ADD ESP,0x8                         ; 00527ddf
    MOV dword ptr [EBX + 0x28],EAX      ; 00527de2
    CMP EBX,EBP                         ; 00527de5
    JNZ 0x00527dc3                      ; 00527de7
        ;   XREF to: 00527dc3 (CONDITIONAL_JUMP)  ; LAB_00527dc3
    MOV EBX,dword ptr [ESP + 0x44]      ; 00527de9
    MOV EBP,dword ptr [ESP + 0x48]      ; 00527ded
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00527df1
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00527df5
    ADD EBX,0x4                         ; 00527df9
    ADD EBP,0x4                         ; 00527dfc
    INC EAX                             ; 00527dff
    MOV ECX,dword ptr [EDX + 0x620710]  ; 00527e00 | DAT_00620710
    MOV dword ptr [ESP + 0x44],EBX      ; 00527e06
    MOV dword ptr [ESP + 0x48],EBP      ; 00527e0a
    MOV dword ptr [ESP + 0x4c],EAX      ; 00527e0e
    CMP EAX,ECX                         ; 00527e12
    JL 0x00527db5                       ; 00527e14
        ;   XREF to: 00527db5 (CONDITIONAL_JUMP)  ; LAB_00527db5
    MOV EBP,dword ptr [ESP + 0x20]      ; 00527e16
        ;   Label: LAB_00527e16
    MOV EBX,dword ptr [ESP + 0x34]      ; 00527e1a
    ADD EBP,0x40                        ; 00527e1e
    ADD EBX,0x4                         ; 00527e21
    MOV dword ptr [ESP + 0x20],EBP      ; 00527e24
    MOV dword ptr [ESP + 0x34],EBX      ; 00527e28
    CMP EBP,0x80                        ; 00527e2c
    JNZ 0x00527d6c                      ; 00527e32
        ;   XREF to: 00527d6c (CONDITIONAL_JUMP)  ; LAB_00527d6c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00527e38
    SHL EAX,0x3                         ; 00527e3c
    MOV EDX,EAX                         ; 00527e3f
    SHL EAX,0x5                         ; 00527e41
    MOV EBP,dword ptr [ESP + 0x70]      ; 00527e44
    SUB EAX,EDX                         ; 00527e48
    ADD EBP,EAX                         ; 00527e4a
    LEA EBX,[EBP + 0x30]                ; 00527e4c
    ADD EBP,0xcc                        ; 00527e4f
    ADD EBX,0x34                        ; 00527e55
        ;   Label: LAB_00527e55
    MOV dword ptr [EBX + 0x28],0x0      ; 00527e58
    CMP EBX,EBP                         ; 00527e5f
    JNZ 0x00527e55                      ; 00527e61
        ;   XREF to: 00527e55 (CONDITIONAL_JUMP)  ; LAB_00527e55
    ADD ESP,0x58                        ; 00527e63
    POP EBP                             ; 00527e66
    POP EDI                             ; 00527e67
    POP ESI                             ; 00527e68
    POP EBX                             ; 00527e69
    RET                                 ; 00527e6a
    CMP dword ptr [ESP + 0x78],0x0      ; 00527e6b
        ;   Label: LAB_00527e6b
    JZ 0x00527b40                       ; 00527e70
        ;   XREF to: 00527b40 (CONDITIONAL_JUMP)  ; LAB_00527b40
    JMP 0x00527ba9                      ; 00527e76
        ;   XREF to: 00527ba9 (UNCONDITIONAL_JUMP)  ; LAB_00527ba9

