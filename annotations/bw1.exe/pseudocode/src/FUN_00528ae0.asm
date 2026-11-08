; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528ae0(uint *param_1,float *param_2,int param_3,int param_4,int param_5,int *param_6)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052bc6f
;
; Referenced Globals:
;   undefined4 DAT_005eb46e
;   undefined4 DAT_005eb476
;   undefined4 DAT_005eb47e
;   undefined4 DAT_00620254
;   undefined4 DAT_0062079c
;   undefined4 DAT_006207a0
;   undefined4 DAT_006207ac
;   undefined4 DAT_006207b8
;   undefined4 DAT_006207f8
;   undefined4 DAT_006207fc
;   undefined4 DAT_00620800
;   undefined4 DAT_00620804
;   undefined4 DAT_00620808
;   undefined4 DAT_01d3bd44
;
; Called Functions:
;   FUN_005c18f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528ae0
        ;   Label: FUN_00528ae0
    PUSH ESI                            ; 00528ae1
    PUSH EDI                            ; 00528ae2
    PUSH EBP                            ; 00528ae3
    MOV EBP,ESP                         ; 00528ae4
    SUB ESP,0x68                        ; 00528ae6
    AND ESP,0xfffffff8                  ; 00528ae9
    MOV ECX,dword ptr [EBP + 0x20]      ; 00528aec
    MOV EBX,dword ptr [EBP + 0x28]      ; 00528aef
    MOV EBX,dword ptr [EBX]             ; 00528af2
    MOV EDX,dword ptr [EBX]             ; 00528af4
    XOR ESI,ESI                         ; 00528af6
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528af8
    MOV EDI,dword ptr [EBX + 0x10]      ; 00528aff
    SUB EAX,EDX                         ; 00528b02
    MOV EDX,dword ptr [ECX + 0x10]      ; 00528b04
    ADD EDI,EAX                         ; 00528b07
    TEST EDX,EDX                        ; 00528b09
    JZ 0x00528d3f                       ; 00528b0b
        ;   XREF to: 00528d3f (CONDITIONAL_JUMP)  ; LAB_00528d3f
    CMP dword ptr [ECX + 0x14],0x2      ; 00528b11
    JNZ 0x00528d3f                      ; 00528b15
        ;   XREF to: 00528d3f (CONDITIONAL_JUMP)  ; LAB_00528d3f
    LEA EAX,[EDI*0x8 + 0x0]             ; 00528b1b
    ADD EAX,EDI                         ; 00528b22
    SHL EAX,0x2                         ; 00528b24
    LEA EDX,[EDI + EAX*0x1]             ; 00528b27
    MOV EAX,dword ptr [ECX + 0x18]      ; 00528b2a
    SHL EDX,0x2                         ; 00528b2d
    TEST EAX,EAX                        ; 00528b30
    JZ 0x00528d15                       ; 00528b32
        ;   XREF to: 00528d15 (CONDITIONAL_JUMP)  ; LAB_00528d15
    MOV EAX,dword ptr [EDX + 0x62079c]  ; 00528b38 | DAT_0062079c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00528b3e
        ;   Label: LAB_00528b3e
    MOV EDX,dword ptr [0x01d3bd44]      ; 00528b42 | DAT_01d3bd44
        ;   Label: LAB_00528b42
    TEST EDX,EDX                        ; 00528b48
    JZ 0x00528d59                       ; 00528b4a
        ;   XREF to: 00528d59 (CONDITIONAL_JUMP)  ; LAB_00528d59
    XOR EAX,EAX                         ; 00528b50
        ;   Label: LAB_00528b50
    MOV dword ptr [ESP + 0x34],EAX      ; 00528b52
    MOV EAX,dword ptr [EBP + 0x24]      ; 00528b56
    SHL EAX,0x3                         ; 00528b59
    MOV EDX,EAX                         ; 00528b5c
    SHL EAX,0x5                         ; 00528b5e
    SUB EAX,EDX                         ; 00528b61
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00528b63
    ADD EDX,EAX                         ; 00528b66
    LEA EAX,[EDI*0x8 + 0x0]             ; 00528b68
    ADD EAX,EDI                         ; 00528b6f
    SHL EAX,0x2                         ; 00528b71
    ADD EAX,EDI                         ; 00528b74
    SHL EAX,0x2                         ; 00528b76
    MOV dword ptr [ESP + 0x20],EDX      ; 00528b79
    MOV dword ptr [ESP + 0x54],EAX      ; 00528b7d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00528b81
    MOV EAX,dword ptr [EBP + 0x18]      ; 00528b85
    MOV dword ptr [ESP + 0x18],EDX      ; 00528b88
    MOV dword ptr [ESP + 0x14],EAX      ; 00528b8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00528b90
    XOR EDX,EDX                         ; 00528b93
    MOV dword ptr [ESP + 0x8],EAX       ; 00528b95
    MOV EAX,dword ptr [ESP + 0x54]      ; 00528b99
    MOV dword ptr [ESP + 0xc],EDX       ; 00528b9d
    ADD EAX,0xc                         ; 00528ba1
    MOV dword ptr [ESP + 0x10],EDX      ; 00528ba4
    MOV dword ptr [ESP + 0x38],EAX      ; 00528ba8
    MOV EAX,dword ptr [ESP + 0xc]       ; 00528bac
        ;   Label: LAB_00528bac
    MOV dword ptr [ESP + 0x58],EAX      ; 00528bb0
    MOV dword ptr [ESP + 0x40],EAX      ; 00528bb4
    MOV EAX,dword ptr [ESP + 0x14]      ; 00528bb8
    MOV dword ptr [ESP + 0x3c],EAX      ; 00528bbc
    MOV dword ptr [ESP + 0x44],EAX      ; 00528bc0
    MOV dword ptr [ESP + 0x60],EAX      ; 00528bc4
    MOV EAX,dword ptr [ESP + 0x8]       ; 00528bc8
    MOV EDX,dword ptr [ESP + 0x10]      ; 00528bcc
    MOV dword ptr [ESP + 0x48],EAX      ; 00528bd0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00528bd4
    ADD EAX,EDX                         ; 00528bd7
    MOV dword ptr [ESP + 0x30],EAX      ; 00528bd9
    MOV dword ptr [ESP + 0x28],EAX      ; 00528bdd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00528be1
    ADD EAX,EDX                         ; 00528be4
    XOR EDI,EDI                         ; 00528be6
    MOV dword ptr [ESP + 0x2c],EAX      ; 00528be8
    MOV dword ptr [ESP + 0x24],EAX      ; 00528bec
    MOV EAX,dword ptr [ESP + 0x58]      ; 00528bf0
        ;   Label: LAB_00528bf0
    CMP EAX,dword ptr [ESP + 0x5c]      ; 00528bf4
    JNZ 0x00528c70                      ; 00528bf8
        ;   XREF to: 00528c70 (CONDITIONAL_JUMP)  ; LAB_00528c70
    CMP dword ptr [ECX + 0x10],0x0      ; 00528bfa
    JZ 0x00528e07                       ; 00528bfe
        ;   XREF to: 00528e07 (CONDITIONAL_JUMP)  ; LAB_00528e07
    CMP dword ptr [ECX + 0x14],0x2      ; 00528c04
    JNZ 0x00528e07                      ; 00528c08
        ;   XREF to: 00528e07 (CONDITIONAL_JUMP)  ; LAB_00528e07
    INC ESI                             ; 00528c0e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00528c0f
    LEA EBX,[ESI*0x4 + 0x0]             ; 00528c13
    MOV EDX,dword ptr [ECX + 0x18]      ; 00528c1a
    ADD EBX,EAX                         ; 00528c1d
    TEST EDX,EDX                        ; 00528c1f
    JZ 0x00528de0                       ; 00528c21
        ;   XREF to: 00528de0 (CONDITIONAL_JUMP)  ; LAB_00528de0
    MOV EDX,dword ptr [ESP + 0x54]      ; 00528c27
    MOV EAX,dword ptr [ESP + 0x58]      ; 00528c2b
    CMP EAX,dword ptr [EDX + 0x6207b8]  ; 00528c2f | DAT_006207b8
    JNZ 0x00528dcf                      ; 00528c35
        ;   XREF to: 00528dcf (CONDITIONAL_JUMP)  ; LAB_00528dcf
    MOV EAX,dword ptr [EDX + 0x620804]  ; 00528c3b | DAT_00620804
    LEA EAX,[EAX + EAX*0x2]             ; 00528c41
    MOV EDX,dword ptr [ESP + 0x38]      ; 00528c44
    MOV dword ptr [ESP + 0x5c],EAX      ; 00528c48
    MOV EAX,dword ptr [ESP + 0x38]      ; 00528c4c
    MOV EBX,dword ptr [EDX + 0x6207f4]  ; 00528c50 | DAT_00620800
    MOV EAX,dword ptr [EAX + 0x6207f8]  ; 00528c56 | DAT_00620804
    SUB EAX,EBX                         ; 00528c5c
    MOV ESI,0x3                         ; 00528c5e
    MOV dword ptr [ESP + 0x50],EAX      ; 00528c63
    MOV EAX,EBX                         ; 00528c67
    IMUL EAX,ESI                        ; 00528c69
    MOV dword ptr [ESP + 0x4c],EAX      ; 00528c6c
        ;   Label: LAB_00528c6c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00528c70
        ;   Label: LAB_00528c70
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 00528c74
    TEST EDX,EDX                        ; 00528c77
    JNZ 0x00528e24                      ; 00528c79
        ;   XREF to: 00528e24 (CONDITIONAL_JUMP)  ; LAB_00528e24
    MOV EAX,dword ptr [ESP + 0x30]      ; 00528c7f
    MOV dword ptr [EDI + EAX*0x1],EDX   ; 00528c83
    MOV EAX,dword ptr [ESP + 0x58]      ; 00528c86
        ;   Label: LAB_00528c86
    MOV EDX,dword ptr [ESP + 0x40]      ; 00528c8a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00528c8e
    ADD EDI,0x4                         ; 00528c92
    INC EAX                             ; 00528c95
    INC EDX                             ; 00528c96
    ADD EBX,0x4                         ; 00528c97
    MOV dword ptr [ESP + 0x58],EAX      ; 00528c9a
    MOV dword ptr [ESP + 0x40],EDX      ; 00528c9e
    MOV dword ptr [ESP + 0x3c],EBX      ; 00528ca2
    MOV EAX,dword ptr [ESP + 0x44]      ; 00528ca6
    MOV EDX,dword ptr [ESP + 0x60]      ; 00528caa
    MOV EBX,dword ptr [ESP + 0x48]      ; 00528cae
    ADD EAX,0x4                         ; 00528cb2
    ADD EDX,0x4                         ; 00528cb5
    ADD EBX,0x4                         ; 00528cb8
    MOV dword ptr [ESP + 0x44],EAX      ; 00528cbb
    MOV dword ptr [ESP + 0x60],EDX      ; 00528cbf
    MOV dword ptr [ESP + 0x48],EBX      ; 00528cc3
    CMP EDI,0x48                        ; 00528cc7
    JNZ 0x00528bf0                      ; 00528cca
        ;   XREF to: 00528bf0 (CONDITIONAL_JUMP)  ; LAB_00528bf0
    MOV EDI,dword ptr [ESP + 0xc]       ; 00528cd0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00528cd4
    MOV EDX,dword ptr [ESP + 0x14]      ; 00528cd8
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528cdc
    ADD EDI,0x12                        ; 00528ce0
    ADD EAX,0x48                        ; 00528ce3
    ADD EDX,0x48                        ; 00528ce6
    ADD EBX,0x48                        ; 00528ce9
    MOV dword ptr [ESP + 0xc],EDI       ; 00528cec
    MOV dword ptr [ESP + 0x10],EAX      ; 00528cf0
    MOV EDI,dword ptr [ESP + 0x34]      ; 00528cf4
    MOV dword ptr [ESP + 0x14],EDX      ; 00528cf8
    INC EDI                             ; 00528cfc
    MOV dword ptr [ESP + 0x8],EBX       ; 00528cfd
    MOV dword ptr [ESP + 0x34],EDI      ; 00528d01
    CMP EDI,0x20                        ; 00528d05
    JL 0x00528bac                       ; 00528d08
        ;   XREF to: 00528bac (CONDITIONAL_JUMP)  ; LAB_00528bac
    MOV ESP,EBP                         ; 00528d0e
    POP EBP                             ; 00528d10
    POP EDI                             ; 00528d11
    POP ESI                             ; 00528d12
    POP EBX                             ; 00528d13
    RET                                 ; 00528d14
    MOV EAX,dword ptr [EDX + 0x6207f8]  ; 00528d15 | DAT_006207f8
        ;   Label: LAB_00528d15
    MOV dword ptr [ESP + 0x64],EAX      ; 00528d1b
    MOV EBX,dword ptr [ESP + 0x64]      ; 00528d1f
    SHL EAX,0x2                         ; 00528d23
    SUB EAX,EBX                         ; 00528d26
    MOV dword ptr [ESP + 0x5c],EAX      ; 00528d28
    MOV EAX,dword ptr [EDX + 0x6207f8]  ; 00528d2c | DAT_006207f8
    MOV dword ptr [ESP + 0x4c],ESI      ; 00528d32
    MOV dword ptr [ESP + 0x50],EAX      ; 00528d36
    JMP 0x00528b42                      ; 00528d3a
        ;   XREF to: 00528b42 (UNCONDITIONAL_JUMP)  ; LAB_00528b42
    LEA EAX,[EDI*0x8 + 0x0]             ; 00528d3f
        ;   Label: LAB_00528d3f
    ADD EAX,EDI                         ; 00528d46
    SHL EAX,0x2                         ; 00528d48
    ADD EAX,EDI                         ; 00528d4b
    MOV EAX,dword ptr [EAX*0x4 + 0x62079c] ; 00528d4d | DAT_0062079c
    JMP 0x00528b3e                      ; 00528d54
        ;   XREF to: 00528b3e (UNCONDITIONAL_JUMP)  ; LAB_00528b3e
    XOR EBX,EBX                         ; 00528d59
        ;   Label: LAB_00528d59
    FLD double ptr [0x005eb476]         ; 00528d5b | DAT_005eb476
    MOV dword ptr [ESP + 0x64],EDX      ; 00528d61
        ;   Label: LAB_00528d61
    FLD ST0                             ; 00528d65
    FILD dword ptr [ESP + 0x64]         ; 00528d67
    CALL FUN_005c18f4                   ; 00528d6b
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c18f4()
    ADD EBX,0x8                         ; 00528d70
    INC EDX                             ; 00528d73
    FSTP double ptr [EBX + 0x1d3bd40]   ; 00528d74
    CMP EDX,0xc8                        ; 00528d7a
    JL 0x00528d61                       ; 00528d80
        ;   XREF to: 00528d61 (CONDITIONAL_JUMP)  ; LAB_00528d61
    FSTP ST0                            ; 00528d82
    XOR EDX,EDX                         ; 00528d84
    XOR EBX,EBX                         ; 00528d86
    FLD double ptr [0x005eb47e]         ; 00528d88 | DAT_005eb47e
    FLD double ptr [0x005eb46e]         ; 00528d8e | DAT_005eb46e
    MOV EAX,EDX                         ; 00528d94
        ;   Label: LAB_00528d94
    NEG EAX                             ; 00528d96
    MOV dword ptr [ESP + 0x64],EAX      ; 00528d98
    FILD dword ptr [ESP + 0x64]         ; 00528d9c
    FMUL ST1                            ; 00528da0
    FLD ST2                             ; 00528da2
    CALL FUN_005c18f4                   ; 00528da4
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c18f4()
    ADD EBX,0x8                         ; 00528da9
    INC EDX                             ; 00528dac
    FSTP double ptr [EBX + 0x1d3c380]   ; 00528dad
    CMP EDX,0xc8                        ; 00528db3
    JL 0x00528d94                       ; 00528db9
        ;   XREF to: 00528d94 (CONDITIONAL_JUMP)  ; LAB_00528d94
    FSTP ST0                            ; 00528dbb
    MOV EBX,0x1                         ; 00528dbd
    FSTP ST0                            ; 00528dc2
    MOV dword ptr [0x01d3bd44],EBX      ; 00528dc4 | DAT_01d3bd44
    JMP 0x00528b50                      ; 00528dca
        ;   XREF to: 00528b50 (UNCONDITIONAL_JUMP)  ; LAB_00528b50
    JGE 0x00528de0                      ; 00528dcf
        ;   XREF to: 00528de0 (CONDITIONAL_JUMP)  ; LAB_00528de0
        ;   Label: LAB_00528dcf
    MOV EAX,dword ptr [EBX + 0x62079c]  ; 00528dd1 | DAT_006207a0
    MOV dword ptr [ESP + 0x5c],EAX      ; 00528dd7
    JMP 0x00528c70                      ; 00528ddb
        ;   XREF to: 00528c70 (UNCONDITIONAL_JUMP)  ; LAB_00528c70
    MOV EAX,dword ptr [EBX + 0x6207f8]  ; 00528de0 | DAT_00620808 | DAT_006207fc
        ;   Label: LAB_00528de0
    LEA EAX,[EAX + EAX*0x2]             ; 00528de6
    MOV EDX,dword ptr [EBX + 0x6207f4]  ; 00528de9 | DAT_00620804 | DAT_006207f8
    MOV dword ptr [ESP + 0x5c],EAX      ; 00528def
    MOV EAX,dword ptr [EBX + 0x6207f8]  ; 00528df3 | DAT_00620808 | DAT_006207fc
    SUB EAX,EDX                         ; 00528df9
    MOV dword ptr [ESP + 0x50],EAX      ; 00528dfb
    LEA EAX,[EDX + EDX*0x2]             ; 00528dff
    JMP 0x00528c6c                      ; 00528e02
        ;   XREF to: 00528c6c (UNCONDITIONAL_JUMP)  ; LAB_00528c6c
    INC ESI                             ; 00528e07
        ;   Label: LAB_00528e07
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00528e08
    LEA EAX,[ESI*0x4 + 0x0]             ; 00528e0c
    ADD EAX,EDX                         ; 00528e13
    MOV EAX,dword ptr [EAX + 0x62079c]  ; 00528e15 | DAT_006207ac
    MOV dword ptr [ESP + 0x5c],EAX      ; 00528e1b
    JMP 0x00528c70                      ; 00528e1f
        ;   XREF to: 00528c70 (UNCONDITIONAL_JUMP)  ; LAB_00528c70
    MOV EBX,dword ptr [ECX + 0x8]       ; 00528e24
        ;   Label: LAB_00528e24
    MOV EAX,dword ptr [ECX + 0x10]      ; 00528e27
    SUB EBX,0xd2                        ; 00528e2a
    TEST EAX,EAX                        ; 00528e30
    JZ 0x00528f1e                       ; 00528e32
        ;   XREF to: 00528f1e (CONDITIONAL_JUMP)  ; LAB_00528f1e
    CMP dword ptr [ECX + 0x14],0x2      ; 00528e38
    JNZ 0x00528f07                      ; 00528e3c
        ;   XREF to: 00528f07 (CONDITIONAL_JUMP)  ; LAB_00528f07
    CMP dword ptr [ECX + 0x18],0x0      ; 00528e42
    JNZ 0x00528f07                      ; 00528e46
        ;   XREF to: 00528f07 (CONDITIONAL_JUMP)  ; LAB_00528f07
    MOV EDX,dword ptr [ESP + 0x40]      ; 00528e4c
        ;   Label: LAB_00528e4c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00528e50
    SUB EDX,EAX                         ; 00528e54
    MOV EAX,EDX                         ; 00528e56
    SAR EDX,0x1f                        ; 00528e58
    IDIV dword ptr [ESP + 0x50]         ; 00528e5b
    MOV dword ptr [ESP + 0x64],EAX      ; 00528e5f
    MOV EAX,dword ptr [ECX + EAX*0x4 + 0x28] ; 00528e63
    SHL EAX,0x3                         ; 00528e67
    MOV EDX,dword ptr [ESP + 0x64]      ; 00528e6a
    SUB EBX,EAX                         ; 00528e6e
    IMUL EAX,EDX,0x34                   ; 00528e70
    MOV EDX,dword ptr [ESP + 0x20]      ; 00528e73
    ADD EDX,EAX                         ; 00528e77
    LEA EAX,[ESI*0x4 + 0x0]             ; 00528e79
    ADD EDX,EAX                         ; 00528e80
    MOV EAX,dword ptr [ECX + 0x40]      ; 00528e82
    INC EAX                             ; 00528e85
    ADD EAX,EAX                         ; 00528e86
    NEG EAX                             ; 00528e88
    IMUL EAX,dword ptr [EDX + 0x5c]     ; 00528e8a
    ADD EBX,EAX                         ; 00528e8e
        ;   Label: LAB_00528e8e
    TEST EBX,EBX                        ; 00528e90
    JLE 0x00528f57                      ; 00528e92
        ;   XREF to: 00528f57 (CONDITIONAL_JUMP)  ; LAB_00528f57
    MOV dword ptr [ESP + 0x64],EBX      ; 00528e98
        ;   Label: LAB_00528e98
    FILD dword ptr [ESP + 0x64]         ; 00528e9c
    FMUL double ptr [0x005eb46e]        ; 00528ea0 | DAT_005eb46e
    FLD double ptr [0x005eb47e]         ; 00528ea6 | DAT_005eb47e
    CALL FUN_005c18f4                   ; 00528eac
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c18f4()
    MOV EAX,dword ptr [ESP + 0x44]      ; 00528eb1
    FSTP float ptr [EAX]                ; 00528eb5
        ;   Label: LAB_00528eb5
    MOV EAX,dword ptr [ESP + 0x48]      ; 00528eb7
    MOV EAX,dword ptr [EAX]             ; 00528ebb
    CDQ                                 ; 00528ebd
    XOR EAX,EDX                         ; 00528ebe
    SUB EAX,EDX                         ; 00528ec0
    CMP EAX,0xc8                        ; 00528ec2
    JL 0x00528f75                       ; 00528ec7
        ;   XREF to: 00528f75 (CONDITIONAL_JUMP)  ; LAB_00528f75
    MOV dword ptr [ESP + 0x64],EAX      ; 00528ecd
    FLD double ptr [0x005eb476]         ; 00528ed1 | DAT_005eb476
    FILD dword ptr [ESP + 0x64]         ; 00528ed7
    CALL FUN_005c18f4                   ; 00528edb
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c18f4()
    MOV EAX,dword ptr [ESP + 0x60]      ; 00528ee0
    FMUL float ptr [EAX]                ; 00528ee4
    FSTP float ptr [EAX]                ; 00528ee6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00528ee8
        ;   Label: LAB_00528ee8
    CMP dword ptr [EDI + EAX*0x1],0x0   ; 00528eec
    JGE 0x00528c86                      ; 00528ef0
        ;   XREF to: 00528c86 (CONDITIONAL_JUMP)  ; LAB_00528c86
    MOV EAX,dword ptr [ESP + 0x28]      ; 00528ef6
    FLD float ptr [EDI + EAX*0x1]       ; 00528efa
    FCHS                                ; 00528efd
    FSTP float ptr [EDI + EAX*0x1]      ; 00528eff
    JMP 0x00528c86                      ; 00528f02
        ;   XREF to: 00528c86 (UNCONDITIONAL_JUMP)  ; LAB_00528c86
    CMP dword ptr [ECX + 0x14],0x2      ; 00528f07
        ;   Label: LAB_00528f07
    JNZ 0x00528f1e                      ; 00528f0b
        ;   XREF to: 00528f1e (CONDITIONAL_JUMP)  ; LAB_00528f1e
    CMP dword ptr [ECX + 0x18],0x0      ; 00528f0d
    JZ 0x00528f1e                       ; 00528f11
        ;   XREF to: 00528f1e (CONDITIONAL_JUMP)  ; LAB_00528f1e
    CMP dword ptr [ESP + 0x34],0x2      ; 00528f13
    JGE 0x00528e4c                      ; 00528f18
        ;   XREF to: 00528e4c (CONDITIONAL_JUMP)  ; LAB_00528e4c
    MOV EDX,dword ptr [ECX + 0x3c]      ; 00528f1e
        ;   Label: LAB_00528f1e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00528f21
    IMUL EDX,dword ptr [EAX + 0x620244] ; 00528f28 | DAT_00620254
    MOV dword ptr [ESP + 0x64],EDX      ; 00528f2f
    ADD EAX,dword ptr [ESP + 0x18]      ; 00528f33
    MOV EDX,dword ptr [ESP + 0x64]      ; 00528f37
    MOV EAX,dword ptr [EAX]             ; 00528f3b
    ADD EAX,EDX                         ; 00528f3d
    MOV dword ptr [ESP + 0x64],EAX      ; 00528f3f
    MOV EAX,dword ptr [ECX + 0x40]      ; 00528f43
    INC EAX                             ; 00528f46
    ADD EAX,EAX                         ; 00528f47
    MOV EDX,dword ptr [ESP + 0x64]      ; 00528f49
    NEG EAX                             ; 00528f4d
    IMUL EAX,EDX                        ; 00528f4f
    JMP 0x00528e8e                      ; 00528f52
        ;   XREF to: 00528e8e (UNCONDITIONAL_JUMP)  ; LAB_00528e8e
    CMP EBX,0xffffff38                  ; 00528f57
        ;   Label: LAB_00528f57
    JLE 0x00528e98                      ; 00528f5d
        ;   XREF to: 00528e98 (CONDITIONAL_JUMP)  ; LAB_00528e98
    NEG EBX                             ; 00528f63
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00528f65
    FLD double ptr [EBX*0x8 + 0x1d3c388] ; 00528f69
    JMP 0x00528eb5                      ; 00528f70
        ;   XREF to: 00528eb5 (UNCONDITIONAL_JUMP)  ; LAB_00528eb5
    MOV EDX,dword ptr [ESP + 0x60]      ; 00528f75
        ;   Label: LAB_00528f75
    FLD float ptr [EDX]                 ; 00528f79
    FLD ST0                             ; 00528f7b
    FMUL double ptr [EAX*0x8 + 0x1d3bd48] ; 00528f7d
    FSTP ST1                            ; 00528f84
    FSTP float ptr [EDX]                ; 00528f86
    JMP 0x00528ee8                      ; 00528f88
        ;   XREF to: 00528ee8 (UNCONDITIONAL_JUMP)  ; LAB_00528ee8

