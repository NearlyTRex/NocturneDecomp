; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550cb0(int *param_1,int param_2)
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00507c80 at 00507ee4
;   FUN_005088f0 at 00508bfb
;   FUN_00509a80 at 00509dbd
;
; Referenced Globals:
;   undefined4 DAT_0059759f
;   undefined4 DAT_005975a7
;   undefined4 DAT_005975af
;   undefined4 DAT_005975b7
;   undefined4 DAT_005a3e8c
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_005c11f0
;   undefined4 DAT_005c11f4
;   undefined4 DAT_005c1374
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c038f4
;   ... and 12 more
;
; Called Functions:
;   FUN_0045eee0
;   FUN_0045f790
;   FUN_0045f9d0
;   FUN_00460370
;   FUN_00460a00
;   FUN_00460f10
;   FUN_00461010
;   FUN_00461eb0
;   FUN_0050be20
;   FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550cb0
        ;   Label: FUN_00550cb0
    PUSH ESI                            ; 00550cb1
    PUSH EDI                            ; 00550cb2
    PUSH EBP                            ; 00550cb3
    MOV EBP,ESP                         ; 00550cb4
    SUB ESP,0x60                        ; 00550cb6
    AND ESP,0xfffffff8                  ; 00550cb9
    MOV ESI,dword ptr [EBP + 0x14]      ; 00550cbc
    TEST dword ptr [ESI + 0x4],0x7fffffff ; 00550cbf
    JZ 0x00551121                       ; 00550cc6
        ;   XREF to: 00551121 (CONDITIONAL_JUMP)  ; LAB_00551121
    MOV ECX,dword ptr [0x02dd122c]      ; 00550ccc | DAT_02dd122c
    ADD ECX,dword ptr [0x01bd1d80]      ; 00550cd2 | DAT_01bd1d80
    MOV EBX,dword ptr [0x005c11f0]      ; 00550cd8 | DAT_005c11f0
    MOV dword ptr [0x02dd122c],ECX      ; 00550cde | DAT_02dd122c
    CMP ECX,EBX                         ; 00550ce4
    JLE 0x00550d0a                      ; 00550ce6
        ;   XREF to: 00550d0a (CONDITIONAL_JUMP)  ; LAB_00550d0a
    MOV EDI,ECX                         ; 00550ce8
    MOV EAX,[0x02dd1230]                ; 00550cea | DAT_02dd1230
    SUB EDI,EBX                         ; 00550cef
    INC EAX                             ; 00550cf1
    MOV dword ptr [0x02dd122c],EDI      ; 00550cf2 | DAT_02dd122c
    MOV [0x02dd1230],EAX                ; 00550cf8 | DAT_02dd1230
    CMP EAX,0x10                        ; 00550cfd
    JL 0x00550d0a                       ; 00550d00
        ;   XREF to: 00550d0a (CONDITIONAL_JUMP)  ; LAB_00550d0a
    XOR ECX,ECX                         ; 00550d02
    MOV dword ptr [0x02dd1230],ECX      ; 00550d04 | DAT_02dd1230
    MOV EDX,0xffff                      ; 00550d0a
        ;   Label: LAB_00550d0a
    MOV EBX,dword ptr [0x005c11f0]      ; 00550d0f | DAT_005c11f0
    MOV EAX,[0x02dd122c]                ; 00550d15 | DAT_02dd122c
    IMUL EDX                            ; 00550d1a
    IDIV EBX                            ; 00550d1c
    MOV [0x02dd925c],EAX                ; 00550d1e | DAT_02dd925c
    CMP EAX,0xffff                      ; 00550d23
    JLE 0x00551128                      ; 00550d28
        ;   XREF to: 00551128 (CONDITIONAL_JUMP)  ; LAB_00551128
    MOV dword ptr [0x02dd925c],0xffff   ; 00550d2e | DAT_02dd925c
    MOV EDX,dword ptr [0x02dd1230]      ; 00550d38 | DAT_02dd1230
        ;   Label: LAB_00550d38
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550d3e
    SUB EAX,EDX                         ; 00550d45
    SHL EAX,0x3                         ; 00550d47
    ADD EAX,0x5c11f4                    ; 00550d4a | DAT_005c11f4
    PUSH EAX                            ; 00550d4f | DAT_005c11f4
    MOV EAX,[0x005ae704]                ; 00550d50 | DAT_005ae704
    PUSH EAX                            ; 00550d55 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 00550d56
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    MOV EAX,[0x005b9354]                ; 00550d5b | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 00550d60 | DAT_01c77850
    FMUL double ptr [0x0059759f]        ; 00550d66 | DAT_0059759f
    FMUL double ptr [0x005975a7]        ; 00550d6c | DAT_005975a7
    FMUL double ptr [0x005975af]        ; 00550d72 | DAT_005975af
    MOV EBX,dword ptr [0x02dd1234]      ; 00550d78 | DAT_02dd1234
    XOR EDX,EDX                         ; 00550d7e
    ADD ESP,0x8                         ; 00550d80
    MOV dword ptr [0x01c038f4],EDX      ; 00550d83 | DAT_01c038f4
    FLD float ptr [0x02dd9260]          ; 00550d89 | DAT_02dd9260
    FXCH                                ; 00550d8f
    FADD ST0,ST1                        ; 00550d91
    MOV dword ptr [ESP + 0x54],EDX      ; 00550d93
    FSTP ST1                            ; 00550d97
    FSTP float ptr [0x02dd9260]         ; 00550d99 | DAT_02dd9260
    TEST EBX,EBX                        ; 00550d9f
    JLE 0x00551121                      ; 00550da1
        ;   XREF to: 00551121 (CONDITIONAL_JUMP)  ; LAB_00551121
    MOV dword ptr [ESP + 0x58],EDX      ; 00550da7
    MOV EDI,dword ptr [ESP + 0x58]      ; 00550dab
        ;   Label: LAB_00550dab
    MOV EDI,dword ptr [EDI + 0x2dd1238] ; 00550daf | DAT_02dd1238
    MOV EAX,dword ptr [ESP + 0x58]      ; 00550db5
    MOV dword ptr [ESP + 0x5c],EDI      ; 00550db9
    MOV EAX,dword ptr [EAX + 0x2dd5238] ; 00550dbd | DAT_02dd5238
    FILD dword ptr [ESP + 0x5c]         ; 00550dc3
    FMUL float ptr [ESI + 0x8]          ; 00550dc7
    MOV dword ptr [ESP],EAX             ; 00550dca
    FSTP float ptr [ESP + 0x4]          ; 00550dcd
    MOV EAX,dword ptr [ESI + 0x4]       ; 00550dd1
    MOV dword ptr [ESP + 0x8],EAX       ; 00550dd4
    MOV EAX,dword ptr [ESP]             ; 00550dd8
    MOV dword ptr [ESP + 0x5c],EAX      ; 00550ddb
    FILD dword ptr [ESP + 0x5c]         ; 00550ddf
    FMUL float ptr [ESI + 0x8]          ; 00550de3
    MOV EBX,dword ptr [0x005ae704]      ; 00550de6 | DAT_005ae704
    FLD float ptr [ESP + 0x4]           ; 00550dec
    FADD float ptr [0x02dd1220]         ; 00550df0 | DAT_02dd1220
    FLD float ptr [ESP + 0x8]           ; 00550df6
    LEA EAX,[ESP + 0x4]                 ; 00550dfa
    FADD float ptr [0x02dd1224]         ; 00550dfe | DAT_02dd1224
    PUSH EAX                            ; 00550e04
    FXCH ST2                            ; 00550e05
    FSTP float ptr [ESP + 0x10]         ; 00550e07
    FSTP float ptr [ESP + 0x8]          ; 00550e0b
    FSTP float ptr [ESP + 0xc]          ; 00550e0f
    FLD float ptr [ESP + 0x10]          ; 00550e13
    FADD float ptr [0x02dd1228]         ; 00550e17 | DAT_02dd1228
    PUSH EBX                            ; 00550e1d | DAT_01b4d738
    FSTP float ptr [ESP + 0x14]         ; 00550e1e
    CALL FUN_00460a00                   ; 00550e22
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 00550e27
    MOV EAX,dword ptr [ESP + 0x4]       ; 00550e2a
    MOV dword ptr [ESP + 0x40],EAX      ; 00550e2e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00550e32
    MOV dword ptr [ESP + 0x44],EAX      ; 00550e36
    MOV EAX,dword ptr [ESP + 0xc]       ; 00550e3a
    MOV dword ptr [ESP + 0x48],EAX      ; 00550e3e
    XOR EAX,EAX                         ; 00550e42
    MOV dword ptr [ESP + 0x4],EAX       ; 00550e44
    MOV dword ptr [ESP + 0x8],EAX       ; 00550e48
    MOV dword ptr [ESP + 0xc],EAX       ; 00550e4c
    CMP dword ptr [ESI],0x0             ; 00550e50
    JZ 0x00550e8c                       ; 00550e53
        ;   XREF to: 00550e8c (CONDITIONAL_JUMP)  ; LAB_00550e8c
    MOV EAX,dword ptr [ESP]             ; 00550e55
    MOV dword ptr [ESP + 0x5c],EAX      ; 00550e58
    FLD double ptr [0x0059759f]         ; 00550e5c | DAT_0059759f
    FILD dword ptr [ESP + 0x5c]         ; 00550e62
    FMUL ST1                            ; 00550e66
    FMUL double ptr [0x005975a7]        ; 00550e68 | DAT_005975a7
    MOV dword ptr [ESP + 0x5c],EDI      ; 00550e6e
    FILD dword ptr [ESP + 0x5c]         ; 00550e72
    FMULP ST2                           ; 00550e76
    FADDP                               ; 00550e78
    FADD float ptr [0x02dd9260]         ; 00550e7a | DAT_02dd9260
    FSIN                                ; 00550e80
    FMUL double ptr [0x005975b7]        ; 00550e82 | DAT_005975b7
    FSTP float ptr [ESP + 0x8]          ; 00550e88
    LEA EBX,[ESP + 0x10]                ; 00550e8c
        ;   Label: LAB_00550e8c
    LEA EAX,[ESP + 0x4]                 ; 00550e90
    MOV EDX,dword ptr [0x005ae704]      ; 00550e94 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00550e9a
    FMUL float ptr [0x005a3e8c]         ; 00550e9c | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550ea2
    FLD float ptr [EAX + 0x4]           ; 00550ea4
    FMUL float ptr [0x005a3e8c]         ; 00550ea7 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550ead
    FLD float ptr [EAX + 0x8]           ; 00550eb0
    FMUL float ptr [0x005a3e8c]         ; 00550eb3 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550eb9
    LEA EAX,[ESP + 0x10]                ; 00550ebc
    PUSH EAX                            ; 00550ec0
    MOV EAX,dword ptr [EDX]             ; 00550ec1 | DAT_01b4d738
    PUSH EAX                            ; 00550ec3
    CALL FUN_0053075c                   ; 00550ec4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00550ec9
    PUSH 0x0                            ; 00550ecc
    LEA EAX,[ESP + 0x44]                ; 00550ece
    PUSH EAX                            ; 00550ed2
    LEA EAX,[ESP + 0xc]                 ; 00550ed3
    PUSH EAX                            ; 00550ed7
    MOV EAX,[0x005be368]                ; 00550ed8 | DAT_005be368
    PUSH EAX                            ; 00550edd | DAT_01e57284
    CALL FUN_0050be20                   ; 00550ede
        ;   XREF to: 0050be20 (UNCONDITIONAL_CALL)  ; undefined FUN_0050be20()
    ADD ESP,0x10                        ; 00550ee3
    MOV EAX,dword ptr [ESI + 0x8]       ; 00550ee6
    MOV dword ptr [ESP + 0x4],EAX       ; 00550ee9
    CMP dword ptr [ESI],0x0             ; 00550eed
    JZ 0x00550f2c                       ; 00550ef0
        ;   XREF to: 00550f2c (CONDITIONAL_JUMP)  ; LAB_00550f2c
    MOV EDX,dword ptr [ESP]             ; 00550ef2
    MOV dword ptr [ESP + 0x5c],EDX      ; 00550ef5
    FLD double ptr [0x0059759f]         ; 00550ef9 | DAT_0059759f
    FILD dword ptr [ESP + 0x5c]         ; 00550eff
    FMUL ST1                            ; 00550f03
    LEA EAX,[EDI + 0x1]                 ; 00550f05
    FMUL double ptr [0x005975a7]        ; 00550f08 | DAT_005975a7
    MOV dword ptr [ESP + 0x5c],EAX      ; 00550f0e
    FILD dword ptr [ESP + 0x5c]         ; 00550f12
    FMULP ST2                           ; 00550f16
    FADDP                               ; 00550f18
    FADD float ptr [0x02dd9260]         ; 00550f1a | DAT_02dd9260
    FSIN                                ; 00550f20
    FMUL double ptr [0x005975b7]        ; 00550f22 | DAT_005975b7
    FSTP float ptr [ESP + 0x8]          ; 00550f28
    LEA EBX,[ESP + 0x1c]                ; 00550f2c
        ;   Label: LAB_00550f2c
    LEA EAX,[ESP + 0x4]                 ; 00550f30
    MOV EDX,dword ptr [0x005ae704]      ; 00550f34 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00550f3a
    FMUL float ptr [0x005a3e8c]         ; 00550f3c | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550f42
    FLD float ptr [EAX + 0x4]           ; 00550f44
    FMUL float ptr [0x005a3e8c]         ; 00550f47 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550f4d
    FLD float ptr [EAX + 0x8]           ; 00550f50
    FMUL float ptr [0x005a3e8c]         ; 00550f53 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550f59
    LEA EAX,[ESP + 0x1c]                ; 00550f5c
    PUSH EAX                            ; 00550f60
    MOV EAX,dword ptr [EDX]             ; 00550f61 | DAT_01b4d738
    ADD EAX,0x30                        ; 00550f63
    PUSH EAX                            ; 00550f66
    CALL FUN_0053075c                   ; 00550f67
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00550f6c
    PUSH 0x1                            ; 00550f6f
    LEA EAX,[ESP + 0x44]                ; 00550f71
    PUSH EAX                            ; 00550f75
    LEA EAX,[ESP + 0xc]                 ; 00550f76
    PUSH EAX                            ; 00550f7a
    MOV ECX,dword ptr [0x005be368]      ; 00550f7b | DAT_005be368
    PUSH ECX                            ; 00550f81 | DAT_01e57284
    CALL FUN_0050be20                   ; 00550f82
        ;   XREF to: 0050be20 (UNCONDITIONAL_CALL)  ; undefined FUN_0050be20()
    ADD ESP,0x10                        ; 00550f87
    MOV EAX,dword ptr [ESI + 0x8]       ; 00550f8a
    MOV dword ptr [ESP + 0xc],EAX       ; 00550f8d
    CMP dword ptr [ESI],0x0             ; 00550f91
    JZ 0x00550fd1                       ; 00550f94
        ;   XREF to: 00550fd1 (CONDITIONAL_JUMP)  ; LAB_00550fd1
    MOV EBX,dword ptr [ESP]             ; 00550f96
    INC EBX                             ; 00550f99
    MOV dword ptr [ESP + 0x5c],EBX      ; 00550f9a
    FLD double ptr [0x0059759f]         ; 00550f9e | DAT_0059759f
    FILD dword ptr [ESP + 0x5c]         ; 00550fa4
    FMUL ST1                            ; 00550fa8
    LEA EAX,[EDI + 0x1]                 ; 00550faa
    FMUL double ptr [0x005975a7]        ; 00550fad | DAT_005975a7
    MOV dword ptr [ESP + 0x5c],EAX      ; 00550fb3
    FILD dword ptr [ESP + 0x5c]         ; 00550fb7
    FMULP ST2                           ; 00550fbb
    FADDP                               ; 00550fbd
    FADD float ptr [0x02dd9260]         ; 00550fbf | DAT_02dd9260
    FSIN                                ; 00550fc5
    FMUL double ptr [0x005975b7]        ; 00550fc7 | DAT_005975b7
    FSTP float ptr [ESP + 0x8]          ; 00550fcd
    LEA EBX,[ESP + 0x28]                ; 00550fd1
        ;   Label: LAB_00550fd1
    LEA EAX,[ESP + 0x4]                 ; 00550fd5
    MOV EDX,dword ptr [0x005ae704]      ; 00550fd9 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00550fdf
    FMUL float ptr [0x005a3e8c]         ; 00550fe1 | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00550fe7
    FLD float ptr [EAX + 0x4]           ; 00550fe9
    FMUL float ptr [0x005a3e8c]         ; 00550fec | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00550ff2
    FLD float ptr [EAX + 0x8]           ; 00550ff5
    FMUL float ptr [0x005a3e8c]         ; 00550ff8 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 00550ffe
    LEA EAX,[ESP + 0x28]                ; 00551001
    PUSH EAX                            ; 00551005
    MOV EAX,dword ptr [EDX]             ; 00551006 | DAT_01b4d738
    ADD EAX,0x60                        ; 00551008
    PUSH EAX                            ; 0055100b
    CALL FUN_0053075c                   ; 0055100c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00551011
    PUSH 0x2                            ; 00551014
    LEA EAX,[ESP + 0x44]                ; 00551016
    PUSH EAX                            ; 0055101a
    LEA EAX,[ESP + 0xc]                 ; 0055101b
    PUSH EAX                            ; 0055101f
    MOV EAX,[0x005be368]                ; 00551020 | DAT_005be368
    PUSH EAX                            ; 00551025 | DAT_01e57284
    CALL FUN_0050be20                   ; 00551026
        ;   XREF to: 0050be20 (UNCONDITIONAL_CALL)  ; undefined FUN_0050be20()
    ADD ESP,0x10                        ; 0055102b
    XOR EDX,EDX                         ; 0055102e
    MOV dword ptr [ESP + 0x4],EDX       ; 00551030
    CMP dword ptr [ESI],0x0             ; 00551034
    JZ 0x00551071                       ; 00551037
        ;   XREF to: 00551071 (CONDITIONAL_JUMP)  ; LAB_00551071
    MOV EAX,dword ptr [ESP]             ; 00551039
    INC EAX                             ; 0055103c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0055103d
    FLD double ptr [0x0059759f]         ; 00551041 | DAT_0059759f
    FILD dword ptr [ESP + 0x5c]         ; 00551047
    FMUL ST1                            ; 0055104b
    FMUL double ptr [0x005975a7]        ; 0055104d | DAT_005975a7
    MOV dword ptr [ESP + 0x5c],EDI      ; 00551053
    FILD dword ptr [ESP + 0x5c]         ; 00551057
    FMULP ST2                           ; 0055105b
    FADDP                               ; 0055105d
    FADD float ptr [0x02dd9260]         ; 0055105f | DAT_02dd9260
    FSIN                                ; 00551065
    FMUL double ptr [0x005975b7]        ; 00551067 | DAT_005975b7
    FSTP float ptr [ESP + 0x8]          ; 0055106d
    LEA EBX,[ESP + 0x34]                ; 00551071
        ;   Label: LAB_00551071
    LEA EAX,[ESP + 0x4]                 ; 00551075
    MOV EDI,dword ptr [0x005ae704]      ; 00551079 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0055107f
    FMUL float ptr [0x005a3e8c]         ; 00551081 | DAT_005a3e8c
    FISTP dword ptr [EBX]               ; 00551087
    FLD float ptr [EAX + 0x4]           ; 00551089
    FMUL float ptr [0x005a3e8c]         ; 0055108c | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x4]         ; 00551092
    FLD float ptr [EAX + 0x8]           ; 00551095
    FMUL float ptr [0x005a3e8c]         ; 00551098 | DAT_005a3e8c
    FISTP dword ptr [EBX + 0x8]         ; 0055109e
    LEA EAX,[ESP + 0x34]                ; 005510a1
    PUSH EAX                            ; 005510a5
    MOV EAX,dword ptr [EDI]             ; 005510a6 | DAT_01b4d738
    ADD EAX,0x90                        ; 005510a8
    PUSH EAX                            ; 005510ad
    CALL FUN_0053075c                   ; 005510ae
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 005510b3
    PUSH 0x3                            ; 005510b6
    LEA EAX,[ESP + 0x44]                ; 005510b8
    PUSH EAX                            ; 005510bc
    LEA EAX,[ESP + 0xc]                 ; 005510bd
    PUSH EAX                            ; 005510c1
    MOV EBX,dword ptr [0x005be368]      ; 005510c2 | DAT_005be368
    PUSH EBX                            ; 005510c8 | DAT_01e57284
    CALL FUN_0050be20                   ; 005510c9
        ;   XREF to: 0050be20 (UNCONDITIONAL_CALL)  ; undefined FUN_0050be20()
    MOV EDI,dword ptr [ESI]             ; 005510ce
    ADD ESP,0x10                        ; 005510d0
    TEST EDI,EDI                        ; 005510d3
    JZ 0x0055113d                       ; 005510d5
        ;   XREF to: 0055113d (CONDITIONAL_JUMP)  ; LAB_0055113d
    PUSH 0xa000                         ; 005510d7
    MOV EDX,dword ptr [0x005ae704]      ; 005510dc | DAT_005ae704
    PUSH EDX                            ; 005510e2 | DAT_01b4d738
    CALL FUN_00461010                   ; 005510e3
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined FUN_00461010()
    ADD ESP,0x8                         ; 005510e8
    PUSH 0x5c1374                       ; 005510eb | DAT_005c1374
    MOV ECX,dword ptr [0x005ae704]      ; 005510f0 | DAT_005ae704
    PUSH ECX                            ; 005510f6 | DAT_01b4d738
    CALL FUN_00460370                   ; 005510f7
        ;   XREF to: 00460370 (UNCONDITIONAL_CALL)  ; undefined FUN_00460370()
    ADD ESP,0x8                         ; 005510fc
        ;   Label: LAB_005510fc
    MOV EDI,dword ptr [ESP + 0x58]      ; 005510ff
    MOV EAX,dword ptr [ESP + 0x54]      ; 00551103
    MOV EDX,dword ptr [0x02dd1234]      ; 00551107 | DAT_02dd1234
    ADD EDI,0x4                         ; 0055110d
    INC EAX                             ; 00551110
    MOV dword ptr [ESP + 0x58],EDI      ; 00551111
    MOV dword ptr [ESP + 0x54],EAX      ; 00551115
    CMP EAX,EDX                         ; 00551119
    JL 0x00550dab                       ; 0055111b
        ;   XREF to: 00550dab (CONDITIONAL_JUMP)  ; LAB_00550dab
    MOV ESP,EBP                         ; 00551121
        ;   Label: LAB_00551121
    POP EBP                             ; 00551123
    POP EDI                             ; 00551124
    POP ESI                             ; 00551125
    POP EBX                             ; 00551126
    RET                                 ; 00551127
    TEST EAX,EAX                        ; 00551128
        ;   Label: LAB_00551128
    JGE 0x00550d38                      ; 0055112a
        ;   XREF to: 00550d38 (CONDITIONAL_JUMP)  ; LAB_00550d38
    XOR EBX,EBX                         ; 00551130
    MOV dword ptr [0x02dd925c],EBX      ; 00551132 | DAT_02dd925c
    JMP 0x00550d38                      ; 00551138
        ;   XREF to: 00550d38 (UNCONDITIONAL_JUMP)  ; LAB_00550d38
    CMP dword ptr [0x01c02594],0x0      ; 0055113d | DAT_01c02594
        ;   Label: LAB_0055113d
    JNZ 0x0055115f                      ; 00551144
        ;   XREF to: 0055115f (CONDITIONAL_JUMP)  ; LAB_0055115f
    CMP dword ptr [EBP + 0x18],0x0      ; 00551146
    JZ 0x00551185                       ; 0055114a
        ;   XREF to: 00551185 (CONDITIONAL_JUMP)  ; LAB_00551185
    PUSH 0x5c1374                       ; 0055114c | DAT_005c1374
    MOV EBX,dword ptr [0x005ae704]      ; 00551151 | DAT_005ae704
    PUSH EBX                            ; 00551157 | DAT_01b4d738
    CALL FUN_0045f790                   ; 00551158
        ;   XREF to: 0045f790 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f790()
    JMP 0x005510fc                      ; 0055115d
        ;   XREF to: 005510fc (UNCONDITIONAL_JUMP)  ; LAB_005510fc
    PUSH 0x1                            ; 0055115f
        ;   Label: LAB_0055115f
    MOV EDI,dword ptr [0x005ae704]      ; 00551161 | DAT_005ae704
    PUSH EDI                            ; 00551167 | DAT_01b4d738
    CALL FUN_00460f10                   ; 00551168
        ;   XREF to: 00460f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f10()
    ADD ESP,0x8                         ; 0055116d
    PUSH 0x5c1374                       ; 00551170 | DAT_005c1374
    MOV EAX,[0x005ae704]                ; 00551175 | DAT_005ae704
    PUSH EAX                            ; 0055117a | DAT_01b4d738
    CALL FUN_0045eee0                   ; 0055117b
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045eee0()
    JMP 0x005510fc                      ; 00551180
        ;   XREF to: 005510fc (UNCONDITIONAL_JUMP)  ; LAB_005510fc
    PUSH 0x5c1374                       ; 00551185 | DAT_005c1374
        ;   Label: LAB_00551185
    MOV ECX,dword ptr [0x005ae704]      ; 0055118a | DAT_005ae704
    PUSH ECX                            ; 00551190 | DAT_01b4d738
    CALL FUN_0045f9d0                   ; 00551191
        ;   XREF to: 0045f9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f9d0()
    JMP 0x005510fc                      ; 00551196
        ;   XREF to: 005510fc (UNCONDITIONAL_JUMP)  ; LAB_005510fc

