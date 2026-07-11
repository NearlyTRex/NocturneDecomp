; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3a60(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined8       Stack[-0x68]:8  local_68
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
;   FUN_004e85b0 at 004e8cc2
;
; Referenced Globals:
;   undefined4 DAT_005bb290
;   undefined4 DAT_005bb318
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3a60
        ;   Label: FUN_004e3a60
    PUSH ESI                            ; 004e3a61
    PUSH EDI                            ; 004e3a62
    PUSH EBP                            ; 004e3a63
    SUB ESP,0x58                        ; 004e3a64
    MOV EAX,dword ptr [ESP + 0x78]      ; 004e3a67
    MOV EDX,dword ptr [EAX + 0x10]      ; 004e3a6b
    MOV dword ptr [ESP + 0x30],EDX      ; 004e3a6e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004e3a72
    MOV dword ptr [ESP + 0x8],EDX       ; 004e3a75
    MOV EAX,dword ptr [EAX + 0x8]       ; 004e3a79
    TEST EDX,EDX                        ; 004e3a7c
    JLE 0x004e3b88                      ; 004e3a7e
        ;   XREF to: 004e3b88 (CONDITIONAL_JUMP)  ; LAB_004e3b88
    MOV dword ptr [ESP + 0x10],EAX      ; 004e3a84
    XOR EBP,EBP                         ; 004e3a88
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e3a8a
    MOV dword ptr [ESP + 0x14],EBP      ; 004e3a91
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3a95
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e3a99
        ;   Label: LAB_004e3a99
    MOV dword ptr [ESP + 0x20],EAX      ; 004e3a9d
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e3aa1
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e3aa5
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e3aa9
    MOV EDI,EAX                         ; 004e3aad
    MOV EAX,ESI                         ; 004e3aaf
    MOV EDX,dword ptr [ESP + 0x70]      ; 004e3ab1
    XOR EAX,ESI                         ; 004e3ab5
    MOV dword ptr [ESP + 0x1c],ESI      ; 004e3ab7
    MOV dword ptr [ESP + 0x28],EAX      ; 004e3abb
    LEA EAX,[ESI + EDX*0x1]             ; 004e3abf
    MOV dword ptr [ESP + 0x24],EAX      ; 004e3ac2
    MOV dword ptr [ESP + 0x18],EAX      ; 004e3ac6
    XOR EBP,EBP                         ; 004e3aca
        ;   Label: LAB_004e3aca
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e3acc
    MOV dword ptr [ESP + 0x4c],EBP      ; 004e3ad0
    TEST EAX,EAX                        ; 004e3ad4
    JLE 0x004e3be4                      ; 004e3ad6
        ;   XREF to: 004e3be4 (CONDITIONAL_JUMP)  ; LAB_004e3be4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e3adc
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e3ae0
    MOV dword ptr [ESP + 0x40],EAX      ; 004e3ae4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e3ae8
    MOV EBX,dword ptr [ESP + 0x74]      ; 004e3aec
    ADD EAX,ECX                         ; 004e3af0
    ADD EAX,EBX                         ; 004e3af2
    MOV dword ptr [ESP + 0x34],EAX      ; 004e3af4
    LEA EAX,[ECX + ESI*0x1]             ; 004e3af8
    MOV EBP,dword ptr [ESP + 0x6c]      ; 004e3afb
    LEA EDX,[EBX + EAX*0x1]             ; 004e3aff
    ADD EAX,EBP                         ; 004e3b02
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e3b04
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e3b08
    MOV dword ptr [ESP + 0x48],EAX      ; 004e3b0c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e3b10
    ADD EAX,ECX                         ; 004e3b14
    MOV dword ptr [ESP + 0x44],EDX      ; 004e3b16
    LEA EDX,[EAX + EBP*0x1]             ; 004e3b1a
    ADD EAX,EBX                         ; 004e3b1d
    MOV dword ptr [ESP + 0x38],EDX      ; 004e3b1f
    MOV dword ptr [ESP + 0x50],EAX      ; 004e3b23
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e3b27
        ;   Label: LAB_004e3b27
    MOV EBX,dword ptr [ESP + 0x70]      ; 004e3b2b
    SHL EAX,0x7                         ; 004e3b2f
    ADD EBX,EAX                         ; 004e3b32
    MOV EAX,dword ptr [ESP + 0x40]      ; 004e3b34
    MOV EBP,dword ptr [EAX]             ; 004e3b38
    TEST EBP,EBP                        ; 004e3b3a
    JZ 0x004e3cac                       ; 004e3b3c
        ;   XREF to: 004e3cac (CONDITIONAL_JUMP)  ; LAB_004e3cac
    XOR EAX,EAX                         ; 004e3b42
    LEA EDX,[EBX + ESI*0x1]             ; 004e3b44
        ;   Label: LAB_004e3b44
    MOV EBP,0x1                         ; 004e3b47
    MOV CL,AL                           ; 004e3b4c
    MOV EDX,dword ptr [EDX]             ; 004e3b4e
    SHL EBP,CL                          ; 004e3b50
    SHL EDX,0x4                         ; 004e3b52
    MOV ECX,EBP                         ; 004e3b55
    CMP ECX,dword ptr [EDX + EDI*0x1]   ; 004e3b57
    JNC 0x004e3c01                      ; 004e3b5a
        ;   XREF to: 004e3c01 (CONDITIONAL_JUMP)  ; LAB_004e3c01
    INC EAX                             ; 004e3b60
    JMP 0x004e3b44                      ; 004e3b61
        ;   XREF to: 004e3b44 (UNCONDITIONAL_JUMP)  ; LAB_004e3b44
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e3b63
        ;   Label: LAB_004e3b63
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e3b67
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e3b6b
    ADD ECX,0x4                         ; 004e3b6f
    ADD EBX,0x100                       ; 004e3b72
    MOV dword ptr [ESP + 0x14],ECX      ; 004e3b78
    MOV dword ptr [ESP + 0x10],EBX      ; 004e3b7c
    CMP ECX,ESI                         ; 004e3b80
    JL 0x004e3a99                       ; 004e3b82
        ;   XREF to: 004e3a99 (CONDITIONAL_JUMP)  ; LAB_004e3a99
    MOV EDI,dword ptr [ESP + 0x8]       ; 004e3b88
        ;   Label: LAB_004e3b88
    CMP EDI,0x20                        ; 004e3b8c
    JGE 0x004e3bdc                      ; 004e3b8f
        ;   XREF to: 004e3bdc (CONDITIONAL_JUMP)  ; LAB_004e3bdc
    MOV EBP,dword ptr [ESP + 0x30]      ; 004e3b91
    LEA ESI,[EDI*0x4 + 0x0]             ; 004e3b95
    MOV EBX,ESI                         ; 004e3b9c
        ;   Label: LAB_004e3b9c
    XOR ECX,ECX                         ; 004e3b9e
    MOV EDI,dword ptr [ESP + 0x30]      ; 004e3ba0
        ;   Label: LAB_004e3ba0
    XOR EDX,EDX                         ; 004e3ba4
    TEST EDI,EDI                        ; 004e3ba6
    JLE 0x004e3bc3                      ; 004e3ba8
        ;   XREF to: 004e3bc3 (CONDITIONAL_JUMP)  ; LAB_004e3bc3
    MOV EDI,dword ptr [ESP + 0x74]      ; 004e3baa
    LEA EAX,[EBX + ECX*0x1]             ; 004e3bae
    ADD EAX,EDI                         ; 004e3bb1
    INC EDX                             ; 004e3bb3
        ;   Label: LAB_004e3bb3
    MOV dword ptr [EAX],0x0             ; 004e3bb4
    ADD EAX,0x180                       ; 004e3bba
    CMP EDX,EBP                         ; 004e3bbf
    JL 0x004e3bb3                       ; 004e3bc1
        ;   XREF to: 004e3bb3 (CONDITIONAL_JUMP)  ; LAB_004e3bb3
    ADD ECX,0x80                        ; 004e3bc3
        ;   Label: LAB_004e3bc3
    CMP ECX,0x180                       ; 004e3bc9
    JNZ 0x004e3ba0                      ; 004e3bcf
        ;   XREF to: 004e3ba0 (CONDITIONAL_JUMP)  ; LAB_004e3ba0
    ADD ESI,0x4                         ; 004e3bd1
    CMP ESI,0x80                        ; 004e3bd4
    JL 0x004e3b9c                       ; 004e3bda
        ;   XREF to: 004e3b9c (CONDITIONAL_JUMP)  ; LAB_004e3b9c
    ADD ESP,0x58                        ; 004e3bdc
        ;   Label: LAB_004e3bdc
    POP EBP                             ; 004e3bdf
    POP EDI                             ; 004e3be0
    POP ESI                             ; 004e3be1
    POP EBX                             ; 004e3be2
    RET                                 ; 004e3be3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e3be4
        ;   Label: LAB_004e3be4
    ADD EAX,0x80                        ; 004e3be8
    MOV dword ptr [ESP + 0x28],EAX      ; 004e3bed
    CMP EAX,0x180                       ; 004e3bf1
    JZ 0x004e3b63                       ; 004e3bf6
        ;   XREF to: 004e3b63 (CONDITIONAL_JUMP)  ; LAB_004e3b63
    JMP 0x004e3aca                      ; 004e3bfc
        ;   XREF to: 004e3aca (UNCONDITIONAL_JUMP)  ; LAB_004e3aca
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e3c01
        ;   Label: LAB_004e3c01
    LEA ECX,[EAX + -0x1]                ; 004e3c05
    MOV EDX,dword ptr [EDX]             ; 004e3c08
    SHR EDX,CL                          ; 004e3c0a
    AND EDX,0x1                         ; 004e3c0c
    CMP EDX,0x1                         ; 004e3c0f
    JNZ 0x004e3c9d                      ; 004e3c12
        ;   XREF to: 004e3c9d (CONDITIONAL_JUMP)  ; LAB_004e3c9d
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e3c18
    MOV dword ptr [EDX],0x0             ; 004e3c1c
    DEC EAX                             ; 004e3c22
        ;   Label: LAB_004e3c22
    MOV CL,AL                           ; 004e3c23
    MOV EAX,0x1                         ; 004e3c25
    SHL EAX,CL                          ; 004e3c2a
    MOV ECX,dword ptr [ESP + 0x38]      ; 004e3c2c
    LEA EDX,[EAX + -0x1]                ; 004e3c30
    MOV EBX,dword ptr [ECX]             ; 004e3c33
    XOR EBP,EBP                         ; 004e3c35
    AND EDX,EBX                         ; 004e3c37
    MOV dword ptr [ESP + 0x4],EBP       ; 004e3c39
    MOV dword ptr [ESP],EDX             ; 004e3c3d
    MOV dword ptr [ESP + 0x54],EAX      ; 004e3c40
    FILD qword ptr [ESP]                ; 004e3c44
    FILD dword ptr [ESP + 0x54]         ; 004e3c47
    FDIVP                               ; 004e3c4b
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e3c4d
    FADD float ptr [EAX]                ; 004e3c51
    FSTP float ptr [EAX]                ; 004e3c53
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e3c55
    MOV EAX,dword ptr [EAX]             ; 004e3c59
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e3c5b
    SHL EAX,0x4                         ; 004e3c5f
    ADD EAX,EDX                         ; 004e3c62
    MOV EDX,dword ptr [ESP + 0x50]      ; 004e3c64
    MOV EAX,dword ptr [EAX + 0xc]       ; 004e3c68
    FLD float ptr [EDX]                 ; 004e3c6b
    FLD ST0                             ; 004e3c6d
    FADD double ptr [EAX*0x8 + 0x5bb318] ; 004e3c6f | DAT_005bb318
    FSTP ST1                            ; 004e3c76
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e3c78
    FSTP float ptr [EDX]                ; 004e3c7c
    MOV EAX,dword ptr [EAX]             ; 004e3c7e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004e3c80
    SHL EAX,0x4                         ; 004e3c84
    ADD EAX,ECX                         ; 004e3c87
    FLD float ptr [EDX]                 ; 004e3c89
    MOV EAX,dword ptr [EAX + 0xc]       ; 004e3c8b
    FLD ST0                             ; 004e3c8e
    FMUL double ptr [EAX*0x8 + 0x5bb290] ; 004e3c90 | DAT_005bb290
    FSTP ST1                            ; 004e3c97
    FSTP float ptr [EDX]                ; 004e3c99
    JMP 0x004e3cb2                      ; 004e3c9b
        ;   XREF to: 004e3cb2 (UNCONDITIONAL_JUMP)  ; LAB_004e3cb2
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e3c9d
        ;   Label: LAB_004e3c9d
    MOV dword ptr [EDX],0xbf800000      ; 004e3ca1
    JMP 0x004e3c22                      ; 004e3ca7
        ;   XREF to: 004e3c22 (UNCONDITIONAL_JUMP)  ; LAB_004e3c22
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e3cac
        ;   Label: LAB_004e3cac
    MOV dword ptr [EAX],EBP             ; 004e3cb0
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e3cb2
        ;   Label: LAB_004e3cb2
    MOV ECX,dword ptr [ESP + 0x34]      ; 004e3cb6
    MOV EBX,dword ptr [ESP + 0x44]      ; 004e3cba
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004e3cbe
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e3cc2
    ADD EDX,0x80                        ; 004e3cc6
    ADD ECX,0x180                       ; 004e3ccc
    ADD EBX,0x180                       ; 004e3cd2
    ADD EBP,0x180                       ; 004e3cd8
    ADD EAX,0x80                        ; 004e3cde
    MOV dword ptr [ESP + 0x40],EDX      ; 004e3ce3
    MOV dword ptr [ESP + 0x34],ECX      ; 004e3ce7
    MOV dword ptr [ESP + 0x44],EBX      ; 004e3ceb
    MOV dword ptr [ESP + 0x3c],EBP      ; 004e3cef
    MOV dword ptr [ESP + 0x48],EAX      ; 004e3cf3
    MOV EDX,dword ptr [ESP + 0x38]      ; 004e3cf7
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e3cfb
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004e3cff
    MOV EBP,dword ptr [ESP + 0x30]      ; 004e3d03
    ADD EDX,0x180                       ; 004e3d07
    ADD ECX,0x180                       ; 004e3d0d
    INC EBX                             ; 004e3d13
    MOV dword ptr [ESP + 0x38],EDX      ; 004e3d14
    MOV dword ptr [ESP + 0x50],ECX      ; 004e3d18
    MOV dword ptr [ESP + 0x4c],EBX      ; 004e3d1c
    CMP EBX,EBP                         ; 004e3d20
    JGE 0x004e3be4                      ; 004e3d22
        ;   XREF to: 004e3be4 (CONDITIONAL_JUMP)  ; LAB_004e3be4
    JMP 0x004e3b27                      ; 004e3d28
        ;   XREF to: 004e3b27 (UNCONDITIONAL_JUMP)  ; LAB_004e3b27

