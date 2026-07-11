; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00467a00(int param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5 )
;
; Local Variables:
; undefined8       Stack[-0xb8]:8  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined8       Stack[-0x78]:8  local_78
; undefined4       Stack[-0x70]:4  local_70
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_0041ad10 at 0041adaf
;   FUN_00467930 at 0046794f
;   FUN_004af8a0 at 004af977
;   FUN_004ef120 at 004ef222
;   FUN_0050f910 at 0050f987
;   FUN_0050fb00 at 0050fb50
;
; Referenced Globals:
;   undefined4 DAT_0057e1da
;
; Called Functions:
;   FUN_0044b290
;   FUN_004678d0
;   FUN_00563a30
;   FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467a00
        ;   Label: FUN_00467a00
    PUSH ESI                            ; 00467a01
    PUSH EDI                            ; 00467a02
    PUSH EBP                            ; 00467a03
    MOV EBP,ESP                         ; 00467a04
    SUB ESP,0xa0                        ; 00467a06
    AND ESP,0xfffffff8                  ; 00467a0c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00467a0f
    MOV EBX,dword ptr [EBP + 0x20]      ; 00467a12
    MOV EAX,dword ptr [EBP + 0x18]      ; 00467a15
    FLD float ptr [EAX]                 ; 00467a18
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467a1a
    FSUB float ptr [EAX + 0x10]         ; 00467a1d
    FDIV float ptr [EAX + 0x28]         ; 00467a20
    MOV EAX,dword ptr [EBP + 0x18]      ; 00467a23
    FLD float ptr [EAX + 0x4]           ; 00467a26
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467a29
    FSUB float ptr [EAX + 0x14]         ; 00467a2c
    FDIV float ptr [EAX + 0x2c]         ; 00467a2f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00467a32
    FLD float ptr [EAX + 0x8]           ; 00467a35
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467a38
    FSUB float ptr [EAX + 0x18]         ; 00467a3b
    FDIV float ptr [EAX + 0x30]         ; 00467a3e
    FXCH ST2                            ; 00467a41
    FST float ptr [ESP + 0x8]           ; 00467a43
    FXCH                                ; 00467a47
    FSTP float ptr [ESP + 0xc]          ; 00467a49
    FXCH                                ; 00467a4d
    FSTP float ptr [ESP + 0x4]          ; 00467a4f
    SUB ESP,0x8                         ; 00467a53
    FSTP double ptr [ESP]               ; 00467a56
    CALL FUN_005648c0                   ; 00467a59
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x40],EAX      ; 00467a5e
    MOV dword ptr [ESP + 0x44],EDX      ; 00467a62
    FLD double ptr [ESP + 0x40]         ; 00467a66
    ADD ESP,0x8                         ; 00467a6a
    CALL FUN_00563a30                   ; 00467a6d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FLD float ptr [ESP + 0xc]           ; 00467a72
    FXCH                                ; 00467a76
    FISTP dword ptr [ESP + 0x78]        ; 00467a78
    SUB ESP,0x8                         ; 00467a7c
    FSTP double ptr [ESP]               ; 00467a7f
    CALL FUN_005648c0                   ; 00467a82
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x40],EAX      ; 00467a87
    MOV dword ptr [ESP + 0x44],EDX      ; 00467a8b
    FLD double ptr [ESP + 0x40]         ; 00467a8f
    ADD ESP,0x8                         ; 00467a93
    CALL FUN_00563a30                   ; 00467a96
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FLD float ptr [ESP + 0x4]           ; 00467a9b
    FXCH                                ; 00467a9f
    FISTP dword ptr [ESP + 0x74]        ; 00467aa1
    SUB ESP,0x8                         ; 00467aa5
    FSTP double ptr [ESP]               ; 00467aa8
    CALL FUN_005648c0                   ; 00467aab
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x40],EAX      ; 00467ab0
    MOV dword ptr [ESP + 0x44],EDX      ; 00467ab4
    FLD double ptr [ESP + 0x40]         ; 00467ab8
    ADD ESP,0x8                         ; 00467abc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467abf
    FLD float ptr [ESI]                 ; 00467ac2
    FSUB float ptr [EAX + 0x10]         ; 00467ac4
    FDIV float ptr [EAX + 0x28]         ; 00467ac7
    FLD float ptr [ESI + 0x4]           ; 00467aca
    FSUB float ptr [EAX + 0x14]         ; 00467acd
    FDIV float ptr [EAX + 0x2c]         ; 00467ad0
    FLD float ptr [ESI + 0x8]           ; 00467ad3
    FSUB float ptr [EAX + 0x18]         ; 00467ad6
    FDIV float ptr [EAX + 0x30]         ; 00467ad9
    FXCH ST3                            ; 00467adc
    CALL FUN_00563a30                   ; 00467ade
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x7c]        ; 00467ae3
    FXCH                                ; 00467ae7
    FSTP float ptr [ESP + 0x1c]         ; 00467ae9
    FSTP float ptr [ESP]                ; 00467aed
    FSTP float ptr [ESP + 0x14]         ; 00467af0
    FLD float ptr [ESP + 0x1c]          ; 00467af4
    SUB ESP,0x8                         ; 00467af8
    FSTP double ptr [ESP]               ; 00467afb
    CALL FUN_005648c0                   ; 00467afe
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x40],EAX      ; 00467b03
    MOV dword ptr [ESP + 0x44],EDX      ; 00467b07
    FLD double ptr [ESP + 0x40]         ; 00467b0b
    ADD ESP,0x8                         ; 00467b0f
    CALL FUN_00563a30                   ; 00467b12
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FLD float ptr [ESP]                 ; 00467b17
    FXCH                                ; 00467b1a
    FISTP dword ptr [ESP + 0x58]        ; 00467b1c
    SUB ESP,0x8                         ; 00467b20
    FSTP double ptr [ESP]               ; 00467b23
    CALL FUN_005648c0                   ; 00467b26
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x40],EAX      ; 00467b2b
    MOV dword ptr [ESP + 0x44],EDX      ; 00467b2f
    FLD double ptr [ESP + 0x40]         ; 00467b33
    ADD ESP,0x8                         ; 00467b37
    CALL FUN_00563a30                   ; 00467b3a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FLD float ptr [ESP + 0x14]          ; 00467b3f
    FXCH                                ; 00467b43
    FISTP dword ptr [ESP + 0x50]        ; 00467b45
    SUB ESP,0x8                         ; 00467b49
    FSTP double ptr [ESP]               ; 00467b4c
    CALL FUN_005648c0                   ; 00467b4f
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x40],EAX      ; 00467b54
    MOV dword ptr [ESP + 0x44],EDX      ; 00467b58
    FLD double ptr [ESP + 0x40]         ; 00467b5c
    ADD ESP,0x8                         ; 00467b60
    CALL FUN_00563a30                   ; 00467b63
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    MOV EDX,dword ptr [ESP + 0x78]      ; 00467b68
    FISTP dword ptr [ESP + 0x54]        ; 00467b6c
    TEST EDX,EDX                        ; 00467b70
    JL 0x00467e8a                       ; 00467b72
        ;   XREF to: 00467e8a (CONDITIONAL_JUMP)  ; LAB_00467e8a
    CMP dword ptr [ESP + 0x74],0x0      ; 00467b78
        ;   Label: LAB_00467b78
    JL 0x00467ea8                       ; 00467b7d
        ;   XREF to: 00467ea8 (CONDITIONAL_JUMP)  ; LAB_00467ea8
    CMP dword ptr [ESP + 0x7c],0x0      ; 00467b83
        ;   Label: LAB_00467b83
    JL 0x00467ec6                       ; 00467b88
        ;   XREF to: 00467ec6 (CONDITIONAL_JUMP)  ; LAB_00467ec6
    MOV EDX,dword ptr [EBP + 0x14]      ; 00467b8e
        ;   Label: LAB_00467b8e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00467b91
    MOV EDI,dword ptr [EDX + 0x40]      ; 00467b95
    CMP EAX,EDI                         ; 00467b98
    JL 0x00467ba6                       ; 00467b9a
        ;   XREF to: 00467ba6 (CONDITIONAL_JUMP)  ; LAB_00467ba6
    CMP EDI,dword ptr [ESP + 0x58]      ; 00467b9c
    JLE 0x00467e95                      ; 00467ba0
        ;   XREF to: 00467e95 (CONDITIONAL_JUMP)  ; LAB_00467e95
    MOV EDX,dword ptr [EBP + 0x14]      ; 00467ba6
        ;   Label: LAB_00467ba6
    MOV EAX,dword ptr [ESP + 0x74]      ; 00467ba9
    MOV EDI,dword ptr [EDX + 0x44]      ; 00467bad
    CMP EAX,EDI                         ; 00467bb0
    JL 0x00467bbe                       ; 00467bb2
        ;   XREF to: 00467bbe (CONDITIONAL_JUMP)  ; LAB_00467bbe
    CMP EDI,dword ptr [ESP + 0x50]      ; 00467bb4
    JLE 0x00467e95                      ; 00467bb8
        ;   XREF to: 00467e95 (CONDITIONAL_JUMP)  ; LAB_00467e95
    MOV EDX,dword ptr [EBP + 0x14]      ; 00467bbe
        ;   Label: LAB_00467bbe
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00467bc1
    MOV EDI,dword ptr [EDX + 0x48]      ; 00467bc5
    CMP EAX,EDI                         ; 00467bc8
    JL 0x00467bd6                       ; 00467bca
        ;   XREF to: 00467bd6 (CONDITIONAL_JUMP)  ; LAB_00467bd6
    CMP EDI,dword ptr [ESP + 0x54]      ; 00467bcc
    JLE 0x00467e95                      ; 00467bd0
        ;   XREF to: 00467e95 (CONDITIONAL_JUMP)  ; LAB_00467e95
    MOV EAX,dword ptr [EBP + 0x18]      ; 00467bd6
        ;   Label: LAB_00467bd6
    FLD float ptr [ESI]                 ; 00467bd9
    FSUB float ptr [EAX]                ; 00467bdb
    FSTP float ptr [ESP + 0x20]         ; 00467bdd
    FLD float ptr [ESI + 0x4]           ; 00467be1
    FSUB float ptr [EAX + 0x4]          ; 00467be4
    MOV EDI,dword ptr [ESP + 0x58]      ; 00467be7
    FSTP float ptr [ESP + 0x24]         ; 00467beb
    FLD float ptr [ESI + 0x8]           ; 00467bef
    MOV ESI,0x1                         ; 00467bf2
    FSUB float ptr [EAX + 0x8]          ; 00467bf7
    MOV EAX,dword ptr [ESP + 0x78]      ; 00467bfa
    FSTP float ptr [ESP + 0x28]         ; 00467bfe
    CMP EAX,EDI                         ; 00467c02
    JZ 0x00467ee4                       ; 00467c04
        ;   XREF to: 00467ee4 (CONDITIONAL_JUMP)  ; LAB_00467ee4
    FLD float ptr [ESP + 0x24]          ; 00467c0a
        ;   Label: LAB_00467c0a
    FMUL ST0                            ; 00467c0e
    FLD float ptr [ESP + 0x20]          ; 00467c10
    FMUL ST0                            ; 00467c14
    FADDP                               ; 00467c16
    FLD float ptr [ESP + 0x28]          ; 00467c18
    FMUL ST0                            ; 00467c1c
    FADDP                               ; 00467c1e
    FSQRT                               ; 00467c20
    FST float ptr [ESP + 0x10]          ; 00467c22
    FLDZ                                ; 00467c26
    FCOMPP                              ; 00467c28
    FNSTSW AX                           ; 00467c2a
    SAHF                                ; 00467c2c
    JNC 0x00467e95                      ; 00467c2d
        ;   XREF to: 00467e95 (CONDITIONAL_JUMP)  ; LAB_00467e95
    FLD float ptr [ESP + 0x1c]          ; 00467c33
    FSUB float ptr [ESP + 0x8]          ; 00467c37
    FABS                                ; 00467c3b
    FLD float ptr [ESP]                 ; 00467c3d
    FSUB float ptr [ESP + 0xc]          ; 00467c40
    FABS                                ; 00467c44
    FLD float ptr [ESP + 0x14]          ; 00467c46
    FSUB float ptr [ESP + 0x4]          ; 00467c4a
    FABS                                ; 00467c4e
    FLD float ptr [0x0057e1da]          ; 00467c50 | DAT_0057e1da
    FDIV float ptr [ESP + 0x10]         ; 00467c56
    FXCH ST3                            ; 00467c5a
    FMUL ST3                            ; 00467c5c
    FXCH ST2                            ; 00467c5e
    FMUL ST3                            ; 00467c60
    FXCH                                ; 00467c62
    FMULP ST3                           ; 00467c64
    FXCH                                ; 00467c66
    CALL FUN_00563a30                   ; 00467c68
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x68]        ; 00467c6d
    FLD float ptr [ESP + 0x20]          ; 00467c71
    FXCH                                ; 00467c75
    CALL FUN_00563a30                   ; 00467c77
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x94]        ; 00467c7c
    FLDZ                                ; 00467c83
    FXCH ST2                            ; 00467c85
    CALL FUN_00563a30                   ; 00467c87
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x6c]        ; 00467c8c
    FXCH                                ; 00467c90
    FCOMPP                              ; 00467c92
    FNSTSW AX                           ; 00467c94
    SAHF                                ; 00467c96
    JA 0x00467f05                       ; 00467c97
        ;   XREF to: 00467f05 (CONDITIONAL_JUMP)  ; LAB_00467f05
    MOV EAX,dword ptr [ESP + 0x58]      ; 00467c9d
    MOV EDI,dword ptr [ESP + 0x78]      ; 00467ca1
    SUB EAX,EDI                         ; 00467ca5
    MOV ECX,0x1                         ; 00467ca7
    ADD ESI,EAX                         ; 00467cac
    LEA EAX,[EDI + ECX*0x1]             ; 00467cae
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467cb1
    FILD dword ptr [ESP + 0x9c]         ; 00467cb8
    FSUB float ptr [ESP + 0x8]          ; 00467cbf
    MOV dword ptr [ESP + 0x90],ECX      ; 00467cc3
    FSTP float ptr [ESP + 0x48]         ; 00467cca
        ;   Label: LAB_00467cca
    FLD float ptr [ESP + 0x24]          ; 00467cce
    FLDZ                                ; 00467cd2
    FCOMPP                              ; 00467cd4
    FNSTSW AX                           ; 00467cd6
    SAHF                                ; 00467cd8
    JA 0x00467f36                       ; 00467cd9
        ;   XREF to: 00467f36 (CONDITIONAL_JUMP)  ; LAB_00467f36
    MOV EAX,dword ptr [ESP + 0x50]      ; 00467cdf
    MOV EDI,dword ptr [ESP + 0x74]      ; 00467ce3
    SUB EAX,EDI                         ; 00467ce7
    MOV ECX,0x1                         ; 00467ce9
    ADD ESI,EAX                         ; 00467cee
    LEA EAX,[EDI + ECX*0x1]             ; 00467cf0
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467cf3
    FILD dword ptr [ESP + 0x9c]         ; 00467cfa
    FSUB float ptr [ESP + 0xc]          ; 00467d01
    MOV dword ptr [ESP + 0x60],ECX      ; 00467d05
    FSTP float ptr [ESP + 0x4c]         ; 00467d09
        ;   Label: LAB_00467d09
    FLD float ptr [ESP + 0x28]          ; 00467d0d
    FLDZ                                ; 00467d11
    FCOMPP                              ; 00467d13
    FNSTSW AX                           ; 00467d15
    SAHF                                ; 00467d17
    JA 0x00467f66                       ; 00467d18
        ;   XREF to: 00467f66 (CONDITIONAL_JUMP)  ; LAB_00467f66
    MOV EAX,dword ptr [ESP + 0x54]      ; 00467d1e
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00467d22
    SUB EAX,EDI                         ; 00467d26
    MOV ECX,0x1                         ; 00467d28
    ADD ESI,EAX                         ; 00467d2d
    LEA EAX,[EDI + ECX*0x1]             ; 00467d2f
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467d32
    FILD dword ptr [ESP + 0x9c]         ; 00467d39
    FSUB float ptr [ESP + 0x4]          ; 00467d40
    MOV dword ptr [ESP + 0x64],ECX      ; 00467d44
    FSTP float ptr [ESP + 0x70]         ; 00467d48
        ;   Label: LAB_00467d48
    MOV EAX,dword ptr [ESP + 0x94]      ; 00467d4c
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467d53
    FILD dword ptr [ESP + 0x9c]         ; 00467d5a
    FLD ST0                             ; 00467d61
    FMUL float ptr [ESP + 0x48]         ; 00467d63
    MOV EAX,dword ptr [ESP + 0x68]      ; 00467d67
    FXCH                                ; 00467d6b
    FLD float ptr [ESP + 0x70]          ; 00467d6d
    FXCH                                ; 00467d71
    FMUL ST1                            ; 00467d73
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467d75
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00467d7c
    FILD dword ptr [ESP + 0x9c]         ; 00467d80
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467d87
    FLD ST0                             ; 00467d8e
    FMUL float ptr [ESP + 0x4c]         ; 00467d90
    FILD dword ptr [ESP + 0x9c]         ; 00467d94
    FLD ST0                             ; 00467d9b
    FMUL float ptr [ESP + 0x48]         ; 00467d9d
    FXCH                                ; 00467da1
    FMUL float ptr [ESP + 0x4c]         ; 00467da3
    FXCH ST2                            ; 00467da7
    FSUBP ST6,ST0                       ; 00467da9
    FXCH ST2                            ; 00467dab
    FMULP ST4                           ; 00467dad
    FXCH ST4                            ; 00467daf
    CALL FUN_00563a30                   ; 00467db1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH ST4                            ; 00467db6
    FSUBP ST2,ST0                       ; 00467db8
    FXCH ST3                            ; 00467dba
    FISTP dword ptr [ESP + 0x80]        ; 00467dbc
    CALL FUN_00563a30                   ; 00467dc3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00467dc8
    FSUBP ST2,ST0                       ; 00467dca
    FISTP dword ptr [ESP + 0x84]        ; 00467dcc
    CALL FUN_00563a30                   ; 00467dd3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x88]        ; 00467dd8
    MOV dword ptr [ESP + 0x18],0x3f800347 ; 00467ddf
        ;   Label: LAB_00467ddf
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00467de7
        ;   Label: LAB_00467de7
    PUSH ECX                            ; 00467deb
    MOV EDI,dword ptr [ESP + 0x78]      ; 00467dec
    PUSH EDI                            ; 00467df0
    MOV EAX,dword ptr [ESP + 0x80]      ; 00467df1
    PUSH EAX                            ; 00467df8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00467df9
    PUSH EDX                            ; 00467dfc
    CALL FUN_004678d0                   ; 00467dfd
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004678d0()
    ADD ESP,0x10                        ; 00467e02
    TEST EAX,EAX                        ; 00467e05
    JNZ 0x00467f96                      ; 00467e07
        ;   XREF to: 00467f96 (CONDITIONAL_JUMP)  ; LAB_00467f96
    DEC ESI                             ; 00467e0d
        ;   Label: LAB_00467e0d
    TEST ESI,ESI                        ; 00467e0e
    JLE 0x00468086                      ; 00467e10
        ;   XREF to: 00468086 (CONDITIONAL_JUMP)  ; LAB_00468086
    MOV ECX,dword ptr [ESP + 0x84]      ; 00467e16
    MOV EAX,dword ptr [ESP + 0x94]      ; 00467e1d
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00467e24
    MOV EDI,dword ptr [ESP + 0x64]      ; 00467e28
    ADD ECX,EAX                         ; 00467e2c
    ADD EDX,EDI                         ; 00467e2e
    MOV EAX,dword ptr [ESP + 0x88]      ; 00467e30
    SUB EAX,dword ptr [ESP + 0x68]      ; 00467e37
    CMP dword ptr [ESP + 0x80],0x0      ; 00467e3b
    JL 0x0046802c                       ; 00467e43
        ;   XREF to: 0046802c (CONDITIONAL_JUMP)  ; LAB_0046802c
    MOV EDI,dword ptr [ESP + 0x84]      ; 00467e49
    TEST EDI,EDI                        ; 00467e50
    JL 0x00468037                       ; 00467e52
        ;   XREF to: 00468037 (CONDITIONAL_JUMP)  ; LAB_00468037
    MOV EAX,dword ptr [ESP + 0x60]      ; 00467e58
    MOV EDX,dword ptr [ESP + 0x74]      ; 00467e5c
    MOV ECX,dword ptr [ESP + 0x80]      ; 00467e60
    ADD EDX,EAX                         ; 00467e67
    SUB ECX,dword ptr [ESP + 0x68]      ; 00467e69
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00467e6d
    MOV dword ptr [ESP + 0x74],EDX      ; 00467e71
    SUB EDI,EAX                         ; 00467e75
    MOV dword ptr [ESP + 0x80],ECX      ; 00467e77
    MOV dword ptr [ESP + 0x84],EDI      ; 00467e7e
    JMP 0x00467de7                      ; 00467e85
        ;   XREF to: 00467de7 (UNCONDITIONAL_JUMP)  ; LAB_00467de7
    CMP dword ptr [ESP + 0x58],0x0      ; 00467e8a
        ;   Label: LAB_00467e8a
    JGE 0x00467b78                      ; 00467e8f
        ;   XREF to: 00467b78 (CONDITIONAL_JUMP)  ; LAB_00467b78
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00467e95
        ;   Label: LAB_00467e95
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00467e9d
    MOV ESP,EBP                         ; 00467ea1
    POP EBP                             ; 00467ea3
    POP EDI                             ; 00467ea4
    POP ESI                             ; 00467ea5
    POP EBX                             ; 00467ea6
    RET                                 ; 00467ea7
    CMP dword ptr [ESP + 0x50],0x0      ; 00467ea8
        ;   Label: LAB_00467ea8
    JGE 0x00467b83                      ; 00467ead
        ;   XREF to: 00467b83 (CONDITIONAL_JUMP)  ; LAB_00467b83
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00467eb3
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00467ebb
    MOV ESP,EBP                         ; 00467ebf
    POP EBP                             ; 00467ec1
    POP EDI                             ; 00467ec2
    POP ESI                             ; 00467ec3
    POP EBX                             ; 00467ec4
    RET                                 ; 00467ec5
    CMP dword ptr [ESP + 0x54],0x0      ; 00467ec6
        ;   Label: LAB_00467ec6
    JGE 0x00467b8e                      ; 00467ecb
        ;   XREF to: 00467b8e (CONDITIONAL_JUMP)  ; LAB_00467b8e
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00467ed1
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00467ed9
    MOV ESP,EBP                         ; 00467edd
    POP EBP                             ; 00467edf
    POP EDI                             ; 00467ee0
    POP ESI                             ; 00467ee1
    POP EBX                             ; 00467ee2
    RET                                 ; 00467ee3
    MOV EAX,dword ptr [ESP + 0x74]      ; 00467ee4
        ;   Label: LAB_00467ee4
    CMP EAX,dword ptr [ESP + 0x50]      ; 00467ee8
    JNZ 0x00467c0a                      ; 00467eec
        ;   XREF to: 00467c0a (CONDITIONAL_JUMP)  ; LAB_00467c0a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00467ef2
    CMP EAX,dword ptr [ESP + 0x54]      ; 00467ef6
    JNZ 0x00467c0a                      ; 00467efa
        ;   XREF to: 00467c0a (CONDITIONAL_JUMP)  ; LAB_00467c0a
    JMP 0x00467ddf                      ; 00467f00
        ;   XREF to: 00467ddf (UNCONDITIONAL_JUMP)  ; LAB_00467ddf
    MOV EAX,dword ptr [ESP + 0x78]      ; 00467f05
        ;   Label: LAB_00467f05
    SUB EAX,dword ptr [ESP + 0x58]      ; 00467f09
    ADD ESI,EAX                         ; 00467f0d
    MOV EAX,dword ptr [ESP + 0x78]      ; 00467f0f
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467f13
    MOV EDI,0xffffffff                  ; 00467f1a
    FILD dword ptr [ESP + 0x9c]         ; 00467f1f
    FSUBR float ptr [ESP + 0x8]         ; 00467f26
    MOV dword ptr [ESP + 0x90],EDI      ; 00467f2a
    JMP 0x00467cca                      ; 00467f31
        ;   XREF to: 00467cca (UNCONDITIONAL_JUMP)  ; LAB_00467cca
    MOV EAX,0xffffffff                  ; 00467f36
        ;   Label: LAB_00467f36
    MOV EDX,dword ptr [ESP + 0x50]      ; 00467f3b
    MOV dword ptr [ESP + 0x60],EAX      ; 00467f3f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00467f43
    SUB EAX,EDX                         ; 00467f47
    ADD ESI,EAX                         ; 00467f49
    MOV EAX,dword ptr [ESP + 0x74]      ; 00467f4b
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467f4f
    FILD dword ptr [ESP + 0x9c]         ; 00467f56
    FSUBR float ptr [ESP + 0xc]         ; 00467f5d
    JMP 0x00467d09                      ; 00467f61
        ;   XREF to: 00467d09 (UNCONDITIONAL_JUMP)  ; LAB_00467d09
    MOV EAX,0xffffffff                  ; 00467f66
        ;   Label: LAB_00467f66
    MOV EDX,dword ptr [ESP + 0x54]      ; 00467f6b
    MOV dword ptr [ESP + 0x64],EAX      ; 00467f6f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00467f73
    SUB EAX,EDX                         ; 00467f77
    ADD ESI,EAX                         ; 00467f79
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00467f7b
    MOV dword ptr [ESP + 0x9c],EAX      ; 00467f7f
    FILD dword ptr [ESP + 0x9c]         ; 00467f86
    FSUBR float ptr [ESP + 0x4]         ; 00467f8d
    JMP 0x00467d48                      ; 00467f91
        ;   XREF to: 00467d48 (UNCONDITIONAL_JUMP)  ; LAB_00467d48
    LEA EDX,[ESP + 0x40]                ; 00467f96
        ;   Label: LAB_00467f96
    PUSH EDX                            ; 00467f9a
    LEA EDX,[ESP + 0x30]                ; 00467f9b
    PUSH EDX                            ; 00467f9f
    LEA EDX,[ESP + 0x28]                ; 00467fa0
    PUSH EDX                            ; 00467fa4
    MOV ECX,dword ptr [EBP + 0x18]      ; 00467fa5
    PUSH ECX                            ; 00467fa8
    PUSH EAX                            ; 00467fa9
    CALL FUN_0044b290                   ; 00467faa
        ;   XREF to: 0044b290 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b290()
    MOV dword ptr [ESP + 0xb0],EAX      ; 00467faf
    FLD float ptr [ESP + 0xb0]          ; 00467fb6
    ADD ESP,0x14                        ; 00467fbd
    FST float ptr [ESP + 0x98]          ; 00467fc0
    FCOMP float ptr [ESP + 0x18]        ; 00467fc7
    FNSTSW AX                           ; 00467fcb
    SAHF                                ; 00467fcd
    JNC 0x00468008                      ; 00467fce
        ;   XREF to: 00468008 (CONDITIONAL_JUMP)  ; LAB_00468008
    TEST EBX,EBX                        ; 00467fd0
    JZ 0x00467ff0                       ; 00467fd2
        ;   XREF to: 00467ff0 (CONDITIONAL_JUMP)  ; LAB_00467ff0
    LEA EAX,[ESP + 0x2c]                ; 00467fd4
    CMP EBX,EAX                         ; 00467fd8
    JZ 0x00467ff0                       ; 00467fda
        ;   XREF to: 00467ff0 (CONDITIONAL_JUMP)  ; LAB_00467ff0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00467fdc
    MOV dword ptr [EBX],EAX             ; 00467fe0
    MOV EAX,dword ptr [ESP + 0x30]      ; 00467fe2
    MOV dword ptr [EBX + 0x4],EAX       ; 00467fe6
    MOV EAX,dword ptr [ESP + 0x34]      ; 00467fe9
    MOV dword ptr [EBX + 0x8],EAX       ; 00467fed
    MOV EDI,dword ptr [EBP + 0x24]      ; 00467ff0
        ;   Label: LAB_00467ff0
    TEST EDI,EDI                        ; 00467ff3
    JZ 0x00467ffd                       ; 00467ff5
        ;   XREF to: 00467ffd (CONDITIONAL_JUMP)  ; LAB_00467ffd
    MOV EAX,dword ptr [ESP + 0x40]      ; 00467ff7
    MOV dword ptr [EDI],EAX             ; 00467ffb
    MOV EAX,dword ptr [ESP + 0x98]      ; 00467ffd
        ;   Label: LAB_00467ffd
    MOV dword ptr [ESP + 0x18],EAX      ; 00468004
    FLD float ptr [ESP + 0x18]          ; 00468008
        ;   Label: LAB_00468008
    FLD1                                ; 0046800c
    FCOMPP                              ; 0046800e
    FNSTSW AX                           ; 00468010
    SAHF                                ; 00468012
    JC 0x00467e0d                       ; 00468013
        ;   XREF to: 00467e0d (CONDITIONAL_JUMP)  ; LAB_00467e0d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00468019
    MOV dword ptr [ESP + 0x5c],EAX      ; 0046801d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00468021
    MOV ESP,EBP                         ; 00468025
    POP EBP                             ; 00468027
    POP EDI                             ; 00468028
    POP ESI                             ; 00468029
    POP EBX                             ; 0046802a
    RET                                 ; 0046802b
    MOV EDI,dword ptr [ESP + 0x88]      ; 0046802c
        ;   Label: LAB_0046802c
    TEST EDI,EDI                        ; 00468033
    JL 0x0046804e                       ; 00468035
        ;   XREF to: 0046804e (CONDITIONAL_JUMP)  ; LAB_0046804e
    MOV dword ptr [ESP + 0x88],EAX      ; 00468037
        ;   Label: LAB_00468037
    MOV dword ptr [ESP + 0x84],ECX      ; 0046803e
    MOV dword ptr [ESP + 0x7c],EDX      ; 00468045
    JMP 0x00467de7                      ; 00468049
        ;   XREF to: 00467de7 (UNCONDITIONAL_JUMP)  ; LAB_00467de7
    MOV EAX,dword ptr [ESP + 0x90]      ; 0046804e
        ;   Label: LAB_0046804e
    MOV EDX,dword ptr [ESP + 0x78]      ; 00468055
    MOV ECX,dword ptr [ESP + 0x80]      ; 00468059
    ADD EDX,EAX                         ; 00468060
    ADD ECX,dword ptr [ESP + 0x94]      ; 00468062
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00468069
    MOV dword ptr [ESP + 0x78],EDX      ; 0046806d
    ADD EDI,EAX                         ; 00468071
    MOV dword ptr [ESP + 0x80],ECX      ; 00468073
    MOV dword ptr [ESP + 0x88],EDI      ; 0046807a
    JMP 0x00467de7                      ; 00468081
        ;   XREF to: 00467de7 (UNCONDITIONAL_JUMP)  ; LAB_00467de7
    MOV EAX,dword ptr [EBP + 0x24]      ; 00468086
        ;   Label: LAB_00468086
    TEST EAX,EAX                        ; 00468089
    JZ 0x00467e95                       ; 0046808b
        ;   XREF to: 00467e95 (CONDITIONAL_JUMP)  ; LAB_00467e95
    MOV dword ptr [EAX],0x1             ; 00468091
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00468097
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0046809f
    MOV ESP,EBP                         ; 004680a3
    POP EBP                             ; 004680a5
    POP EDI                             ; 004680a6
    POP ESI                             ; 004680a7
    POP EBX                             ; 004680a8
    RET                                 ; 004680a9

