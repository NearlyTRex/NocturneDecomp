; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00592c90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005eed7e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592c90
        ;   Label: core_xform.cpp_FUN_00592c90
    PUSH ESI                            ; 00592c91
    PUSH EDI                            ; 00592c92
    PUSH EBP                            ; 00592c93
    MOV EBP,ESP                         ; 00592c94
    SUB ESP,0xe0                        ; 00592c96
    AND ESP,0xfffffff8                  ; 00592c9c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00592c9f
    FLD float ptr [ECX]                 ; 00592ca2
    FST double ptr [ESP]                ; 00592ca4
    FMUL double ptr [ESP]               ; 00592ca7
    FLD float ptr [ECX + 0x4]           ; 00592caa
    FST double ptr [ESP + 0x60]         ; 00592cad
    FMUL double ptr [ESP + 0x60]        ; 00592cb1
    FLD float ptr [ECX + 0x8]           ; 00592cb5
    FXCH                                ; 00592cb8
    FADDP ST2,ST0                       ; 00592cba
    FST double ptr [ESP + 0x8]          ; 00592cbc
    FMUL double ptr [ESP + 0x8]         ; 00592cc0
    FADDP                               ; 00592cc4
    FSQRT                               ; 00592cc6
    FLD float ptr [ECX + 0x10]          ; 00592cc8
    FST double ptr [ESP + 0x38]         ; 00592ccb
    FMUL double ptr [ESP + 0x38]        ; 00592ccf
    FLD float ptr [ECX + 0x14]          ; 00592cd3
    FST double ptr [ESP + 0x10]         ; 00592cd6
    FMUL double ptr [ESP + 0x10]        ; 00592cda
    FLD float ptr [ECX + 0x18]          ; 00592cde
    FXCH                                ; 00592ce1
    FADDP ST2,ST0                       ; 00592ce3
    FST double ptr [ESP + 0x28]         ; 00592ce5
    FMUL double ptr [ESP + 0x28]        ; 00592ce9
    FADDP                               ; 00592ced
    FSQRT                               ; 00592cef
    FLD float ptr [ECX + 0x20]          ; 00592cf1
    FST double ptr [ESP + 0x30]         ; 00592cf4
    FMUL double ptr [ESP + 0x30]        ; 00592cf8
    FLD float ptr [ECX + 0x24]          ; 00592cfc
    FST double ptr [ESP + 0x18]         ; 00592cff
    FMUL double ptr [ESP + 0x18]        ; 00592d03
    FLD float ptr [ECX + 0x28]          ; 00592d07
    FXCH                                ; 00592d0a
    FADDP ST2,ST0                       ; 00592d0c
    FST double ptr [ESP + 0x20]         ; 00592d0e
    FMUL double ptr [ESP + 0x20]        ; 00592d12
    FADDP                               ; 00592d16
    FSQRT                               ; 00592d18
    FLDZ                                ; 00592d1a
    FXCH ST3                            ; 00592d1c
    FSTP double ptr [ESP + 0x40]        ; 00592d1e
    FXCH                                ; 00592d22
    FSTP double ptr [ESP + 0x70]        ; 00592d24
    FSTP double ptr [ESP + 0x68]        ; 00592d28
    FCOMP double ptr [ESP + 0x40]       ; 00592d2c
    FNSTSW AX                           ; 00592d30
    SAHF                                ; 00592d32
    JNC 0x0059312e                      ; 00592d33
        ;   XREF to: 0059312e (CONDITIONAL_JUMP)  ; LAB_0059312e
    FLDZ                                ; 00592d39
        ;   Label: LAB_00592d39
    FCOMP double ptr [ESP + 0x70]       ; 00592d3b
    FNSTSW AX                           ; 00592d3f
    SAHF                                ; 00592d41
    JC 0x00592d53                       ; 00592d42
        ;   XREF to: 00592d53 (CONDITIONAL_JUMP)  ; LAB_00592d53
    XOR ESI,ESI                         ; 00592d44
    MOV EDI,0x3ff00000                  ; 00592d46
    MOV dword ptr [ESP + 0x70],ESI      ; 00592d4b
    MOV dword ptr [ESP + 0x74],EDI      ; 00592d4f
    FLDZ                                ; 00592d53
        ;   Label: LAB_00592d53
    FCOMP double ptr [ESP + 0x68]       ; 00592d55
    FNSTSW AX                           ; 00592d59
    SAHF                                ; 00592d5b
    JNC 0x00593142                      ; 00592d5c
        ;   XREF to: 00593142 (CONDITIONAL_JUMP)  ; LAB_00593142
    FLD1                                ; 00592d62
        ;   Label: LAB_00592d62
    FDIV double ptr [ESP + 0x40]        ; 00592d64
    FLD1                                ; 00592d68
    FDIV double ptr [ESP + 0x70]        ; 00592d6a
    FLD double ptr [ESP]                ; 00592d6e
    FMUL ST2                            ; 00592d71
    FLD double ptr [ESP + 0x60]         ; 00592d73
    FMUL ST3                            ; 00592d77
    FLD double ptr [ESP + 0x8]          ; 00592d79
    FMULP ST4                           ; 00592d7d
    FLD double ptr [ESP + 0x38]         ; 00592d7f
    FXCH ST3                            ; 00592d83
    FSTP double ptr [ESP + 0xb8]        ; 00592d85
    FXCH ST2                            ; 00592d8c
    FMUL double ptr [ESP + 0xb8]        ; 00592d8e
    FLD double ptr [ESP + 0x10]         ; 00592d95
    FMUL double ptr [ESP + 0xb8]        ; 00592d99
    FLD double ptr [ESP + 0x28]         ; 00592da0
    FXCH ST3                            ; 00592da4
    FSTP double ptr [ESP]               ; 00592da6
    FLD1                                ; 00592da9
    FLD double ptr [ESP + 0x30]         ; 00592dab
    FXCH ST4                            ; 00592daf
    FMUL double ptr [ESP + 0xb8]        ; 00592db1
    FXCH                                ; 00592db8
    FDIV double ptr [ESP + 0x68]        ; 00592dba
    FSTP double ptr [ESP + 0xb8]        ; 00592dbe
    FXCH ST3                            ; 00592dc5
    FMUL double ptr [ESP + 0xb8]        ; 00592dc7
    FXCH ST4                            ; 00592dce
    FSTP double ptr [ESP + 0x60]        ; 00592dd0
    FLD double ptr [ESP + 0x18]         ; 00592dd4
    FMUL double ptr [ESP + 0xb8]        ; 00592dd8
    FXCH ST5                            ; 00592ddf
    FSTP double ptr [ESP + 0x8]         ; 00592de1
    FLD double ptr [ESP + 0x20]         ; 00592de5
    FMUL double ptr [ESP + 0xb8]        ; 00592de9
    XOR EDX,EDX                         ; 00592df0
    FXCH ST2                            ; 00592df2
    FSTP double ptr [ESP + 0x38]        ; 00592df4
    FSTP double ptr [ESP + 0x10]        ; 00592df8
    FXCH                                ; 00592dfc
    FSTP double ptr [ESP + 0x28]        ; 00592dfe
    FXCH                                ; 00592e02
    FSTP double ptr [ESP + 0x30]        ; 00592e04
    FXCH                                ; 00592e08
    FSTP double ptr [ESP + 0x18]        ; 00592e0a
    FSTP double ptr [ESP + 0x20]        ; 00592e0e
    FLD double ptr [ESP + 0x10]         ; 00592e12
        ;   Label: LAB_00592e12
    FMUL double ptr [ESP + 0x20]        ; 00592e16
    FLD double ptr [ESP + 0x28]         ; 00592e1a
    FMUL double ptr [ESP + 0x30]        ; 00592e1e
    FLD double ptr [ESP + 0x38]         ; 00592e22
    FMUL double ptr [ESP + 0x18]        ; 00592e26
    FLD double ptr [ESP + 0x28]         ; 00592e2a
    FMUL double ptr [ESP + 0x18]        ; 00592e2e
    FLD double ptr [ESP + 0x38]         ; 00592e32
    FMUL double ptr [ESP + 0x20]        ; 00592e36
    FLD double ptr [ESP + 0x30]         ; 00592e3a
    FMUL double ptr [ESP + 0x10]        ; 00592e3e
    FXCH ST2                            ; 00592e42
    FSUBP ST5,ST0                       ; 00592e44
    FSUBP ST3,ST0                       ; 00592e46
    FLD double ptr [0x005eed7e]         ; 00592e48 | DAT_005eed7e
    FLD double ptr [ESP]                ; 00592e4e
    FMUL ST1                            ; 00592e51
    FLD double ptr [ESP + 0x60]         ; 00592e53
    FMUL ST2                            ; 00592e57
    FXCH                                ; 00592e59
    FADDP ST6,ST0                       ; 00592e5b
    FXCH ST5                            ; 00592e5d
    FST double ptr [ESP + 0xb0]         ; 00592e5f
    FMUL double ptr [ESP + 0xb0]        ; 00592e66
    FXCH ST2                            ; 00592e6d
    FSUBP ST3,ST0                       ; 00592e6f
    FXCH ST4                            ; 00592e71
    FADDP ST3,ST0                       ; 00592e73
    FXCH ST2                            ; 00592e75
    FST double ptr [ESP + 0x78]         ; 00592e77
    FMUL double ptr [ESP + 0x78]        ; 00592e7b
    FLD double ptr [ESP + 0x8]          ; 00592e7f
    FMUL ST4                            ; 00592e83
    FXCH                                ; 00592e85
    FADDP ST3,ST0                       ; 00592e87
    FADDP                               ; 00592e89
    FST double ptr [ESP + 0x80]         ; 00592e8b
    FMUL double ptr [ESP + 0x80]        ; 00592e92
    FADDP                               ; 00592e99
    FSQRT                               ; 00592e9b
    FLD double ptr [ESP + 0x18]         ; 00592e9d
    FMUL double ptr [ESP + 0x8]         ; 00592ea1
    FLD double ptr [ESP + 0x20]         ; 00592ea5
    FMUL double ptr [ESP]               ; 00592ea9
    FLD double ptr [ESP + 0x30]         ; 00592eac
    FMUL double ptr [ESP + 0x60]        ; 00592eb0
    FLD double ptr [ESP + 0x20]         ; 00592eb4
    FMUL double ptr [ESP + 0x60]        ; 00592eb8
    FLD double ptr [ESP + 0x30]         ; 00592ebc
    FMUL double ptr [ESP + 0x8]         ; 00592ec0
    FXCH                                ; 00592ec4
    FSUBP ST4,ST0                       ; 00592ec6
    FLD double ptr [ESP + 0x18]         ; 00592ec8
    FMUL double ptr [ESP]               ; 00592ecc
    FXCH                                ; 00592ecf
    FSUBP ST3,ST0                       ; 00592ed1
    FLD double ptr [ESP + 0x38]         ; 00592ed3
    FMUL ST6                            ; 00592ed7
    FXCH                                ; 00592ed9
    FSUBP ST2,ST0                       ; 00592edb
    FLD double ptr [ESP + 0x10]         ; 00592edd
    FMUL ST6                            ; 00592ee1
    FXCH                                ; 00592ee3
    FADDP ST4,ST0                       ; 00592ee5
    FXCH ST3                            ; 00592ee7
    FSTP double ptr [ESP + 0x88]        ; 00592ee9
    FLD double ptr [ESP + 0x28]         ; 00592ef0
    FMUL ST5                            ; 00592ef4
    FLD double ptr [ESP + 0x88]         ; 00592ef6
    FMUL ST0                            ; 00592efd
    FXCH ST4                            ; 00592eff
    FADDP ST3,ST0                       ; 00592f01
    FXCH ST2                            ; 00592f03
    FST double ptr [ESP + 0x90]         ; 00592f05
    FMUL double ptr [ESP + 0x90]        ; 00592f0c
    FXCH ST2                            ; 00592f13
    FADDP                               ; 00592f15
    FXCH                                ; 00592f17
    FADDP ST2,ST0                       ; 00592f19
    FST double ptr [ESP + 0x98]         ; 00592f1b
    FMUL double ptr [ESP + 0x98]        ; 00592f22
    FADDP                               ; 00592f29
    FSQRT                               ; 00592f2b
    FLD double ptr [ESP + 0x60]         ; 00592f2d
    FMUL double ptr [ESP + 0x28]        ; 00592f31
    FLD double ptr [ESP + 0x8]          ; 00592f35
    FMUL double ptr [ESP + 0x10]        ; 00592f39
    FLD double ptr [ESP + 0x8]          ; 00592f3d
    FXCH                                ; 00592f41
    FSUBP ST2,ST0                       ; 00592f43
    FMUL double ptr [ESP + 0x38]        ; 00592f45
    FLD double ptr [ESP + 0x30]         ; 00592f49
    FMUL ST5                            ; 00592f4d
    FLD double ptr [ESP]                ; 00592f4f
    FMUL double ptr [ESP + 0x28]        ; 00592f52
    FXCH                                ; 00592f56
    FADDP ST3,ST0                       ; 00592f58
    FLD double ptr [ESP]                ; 00592f5a
    FMUL double ptr [ESP + 0x10]        ; 00592f5d
    FXCH                                ; 00592f61
    FSUBP ST2,ST0                       ; 00592f63
    FXCH ST2                            ; 00592f65
    FSTP double ptr [ESP + 0xa0]        ; 00592f67
    FLD double ptr [ESP + 0x18]         ; 00592f6e
    FMUL ST5                            ; 00592f72
    FLD double ptr [ESP + 0x60]         ; 00592f74
    FMUL double ptr [ESP + 0x38]        ; 00592f78
    FXCH                                ; 00592f7c
    FADDP ST2,ST0                       ; 00592f7e
    FLD double ptr [ESP + 0xa0]         ; 00592f80
    FMUL ST0                            ; 00592f87
    FXCH                                ; 00592f89
    FSUBP ST3,ST0                       ; 00592f8b
    FXCH                                ; 00592f8d
    FST double ptr [ESP + 0xa8]         ; 00592f8f
    FMUL double ptr [ESP + 0xa8]        ; 00592f96
    FLD double ptr [ESP + 0x20]         ; 00592f9d
    FMULP ST6                           ; 00592fa1
    FADDP                               ; 00592fa3
    FXCH ST4                            ; 00592fa5
    FADDP                               ; 00592fa7
    FST double ptr [ESP + 0xc0]         ; 00592fa9
    FMUL double ptr [ESP + 0xc0]        ; 00592fb0
    FADDP ST3,ST0                       ; 00592fb7
    FXCH ST2                            ; 00592fb9
    FSQRT                               ; 00592fbb
    FLD1                                ; 00592fbd
    FDIVRP ST3,ST0                      ; 00592fbf
    FLD1                                ; 00592fc1
    FDIVRP ST2,ST0                      ; 00592fc3
    FLD double ptr [ESP + 0xb0]         ; 00592fc5
    FMUL ST2                            ; 00592fcc
    FLD double ptr [ESP + 0x78]         ; 00592fce
    FMUL ST3                            ; 00592fd2
    FLD double ptr [ESP + 0x80]         ; 00592fd4
    FMULP ST4                           ; 00592fdb
    FLD double ptr [ESP + 0x88]         ; 00592fdd
    FXCH ST5                            ; 00592fe4
    FSTP double ptr [ESP + 0xb8]        ; 00592fe6
    FXCH ST4                            ; 00592fed
    FMUL double ptr [ESP + 0xb8]        ; 00592fef
    FXCH ST2                            ; 00592ff6
    FSTP double ptr [ESP + 0xd8]        ; 00592ff8
    FLD double ptr [ESP + 0x90]         ; 00592fff
    FMUL double ptr [ESP + 0xb8]        ; 00593006
    FLD1                                ; 0059300d
    FXCH ST2                            ; 0059300f
    FSTP double ptr [ESP]               ; 00593011
    FLD double ptr [ESP + 0xa0]         ; 00593014
    FLD double ptr [ESP + 0x98]         ; 0059301b
    FMUL double ptr [ESP + 0xb8]        ; 00593022
    FXCH ST3                            ; 00593029
    FDIV double ptr [ESP + 0xd8]        ; 0059302b
    FSTP double ptr [ESP + 0xb8]        ; 00593032
    FMUL double ptr [ESP + 0xb8]        ; 00593039
    FXCH ST5                            ; 00593040
    FSTP double ptr [ESP + 0x60]        ; 00593042
    FLD double ptr [ESP + 0xa8]         ; 00593046
    FMUL double ptr [ESP + 0xb8]        ; 0059304d
    FXCH ST4                            ; 00593054
    FSTP double ptr [ESP + 0x8]         ; 00593056
    FLD double ptr [ESP + 0xc0]         ; 0059305a
    FMUL double ptr [ESP + 0xb8]        ; 00593061
    INC EDX                             ; 00593068
    FXCH ST3                            ; 00593069
    FSTP double ptr [ESP + 0x38]        ; 0059306b
    FSTP double ptr [ESP + 0x10]        ; 0059306f
    FSTP double ptr [ESP + 0x28]        ; 00593073
    FXCH ST2                            ; 00593077
    FSTP double ptr [ESP + 0x30]        ; 00593079
    FSTP double ptr [ESP + 0x18]        ; 0059307d
    FSTP double ptr [ESP + 0x20]        ; 00593081
    CMP EDX,0xa                         ; 00593085
    JL 0x00592e12                       ; 00593088
        ;   XREF to: 00592e12 (CONDITIONAL_JUMP)  ; LAB_00592e12
    FLD double ptr [ESP + 0x20]         ; 0059308e
    FLD double ptr [ESP + 0x10]         ; 00593092
    FMUL ST1                            ; 00593096
    FLD double ptr [ESP + 0x28]         ; 00593098
    FLD ST0                             ; 0059309c
    FLD double ptr [ESP + 0x30]         ; 0059309e
    FXCH                                ; 005930a2
    FMUL ST1                            ; 005930a4
    FLD double ptr [ESP + 0x38]         ; 005930a6
    FLD ST0                             ; 005930aa
    FMUL double ptr [ESP + 0x18]        ; 005930ac
    FXCH ST4                            ; 005930b0
    FMUL double ptr [ESP + 0x18]        ; 005930b2
    FXCH                                ; 005930b6
    FMULP ST6                           ; 005930b8
    FXCH ST2                            ; 005930ba
    FMUL double ptr [ESP + 0x10]        ; 005930bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 005930c0
    FXCH ST2                            ; 005930c3
    FSUBP ST4,ST0                       ; 005930c5
    FSUBRP ST4,ST0                      ; 005930c7
    FSUBP                               ; 005930c9
    FXCH ST2                            ; 005930cb
    FSTP double ptr [ESP + 0x50]        ; 005930cd
    FXCH                                ; 005930d1
    FSTP double ptr [ESP + 0x58]        ; 005930d3
    FSTP double ptr [ESP + 0x48]        ; 005930d7
    TEST EBX,EBX                        ; 005930db
    JNZ 0x00593156                      ; 005930dd
        ;   XREF to: 00593156 (CONDITIONAL_JUMP)  ; LAB_00593156
    FLD double ptr [ESP + 0x48]         ; 005930df
        ;   Label: LAB_005930df
    FLD double ptr [ESP + 0x50]         ; 005930e3
    FLD double ptr [ESP + 0x58]         ; 005930e7
    FLD double ptr [ESP + 0x38]         ; 005930eb
    FLD double ptr [ESP + 0x10]         ; 005930ef
    FLD double ptr [ESP + 0x28]         ; 005930f3
    FLD double ptr [ESP + 0x30]         ; 005930f7
    FXCH ST5                            ; 005930fb
    FSTP float ptr [ECX + 0x4]          ; 005930fd
    FLD double ptr [ESP + 0x18]         ; 00593100
    FXCH ST4                            ; 00593104
    FSTP float ptr [ECX + 0x8]          ; 00593106
    FLD double ptr [ESP + 0x20]         ; 00593109
    FXCH ST3                            ; 0059310d
    FSTP float ptr [ECX + 0x10]         ; 0059310f
    FXCH                                ; 00593112
    FSTP float ptr [ECX + 0x14]         ; 00593114
    FSTP float ptr [ECX + 0x18]         ; 00593117
    FXCH ST2                            ; 0059311a
    FSTP float ptr [ECX + 0x20]         ; 0059311c
    FSTP float ptr [ECX + 0x24]         ; 0059311f
    FSTP float ptr [ECX + 0x28]         ; 00593122
    FSTP float ptr [ECX]                ; 00593125
    MOV ESP,EBP                         ; 00593127
    POP EBP                             ; 00593129
    POP EDI                             ; 0059312a
    POP ESI                             ; 0059312b
    POP EBX                             ; 0059312c
    RET                                 ; 0059312d
    XOR EDX,EDX                         ; 0059312e
        ;   Label: LAB_0059312e
    MOV EBX,0x3ff00000                  ; 00593130
    MOV dword ptr [ESP + 0x40],EDX      ; 00593135
    MOV dword ptr [ESP + 0x44],EBX      ; 00593139
    JMP 0x00592d39                      ; 0059313d
        ;   XREF to: 00592d39 (UNCONDITIONAL_JUMP)  ; LAB_00592d39
    XOR EAX,EAX                         ; 00593142
        ;   Label: LAB_00593142
    MOV EDX,0x3ff00000                  ; 00593144
    MOV dword ptr [ESP + 0x68],EAX      ; 00593149
    MOV dword ptr [ESP + 0x6c],EDX      ; 0059314d
    JMP 0x00592d62                      ; 00593151
        ;   XREF to: 00592d62 (UNCONDITIONAL_JUMP)  ; LAB_00592d62
    FLD double ptr [ESP + 0x40]         ; 00593156
        ;   Label: LAB_00593156
    FLD double ptr [ESP + 0x48]         ; 0059315a
    FMUL ST1                            ; 0059315e
    FLD double ptr [ESP + 0x50]         ; 00593160
    FMUL ST2                            ; 00593164
    FLD double ptr [ESP + 0x58]         ; 00593166
    FMULP ST3                           ; 0059316a
    FLD double ptr [ESP + 0x70]         ; 0059316c
    FLD double ptr [ESP + 0x38]         ; 00593170
    FMUL ST1                            ; 00593174
    FLD double ptr [ESP + 0x10]         ; 00593176
    FMUL ST2                            ; 0059317a
    FLD double ptr [ESP + 0x28]         ; 0059317c
    FMULP ST3                           ; 00593180
    FLD double ptr [ESP + 0x30]         ; 00593182
    FMUL double ptr [ESP + 0x68]        ; 00593186
    FXCH ST4                            ; 0059318a
    FSTP double ptr [ESP + 0x50]        ; 0059318c
    FLD double ptr [ESP + 0x18]         ; 00593190
    FMUL double ptr [ESP + 0x68]        ; 00593194
    FXCH ST6                            ; 00593198
    FSTP double ptr [ESP + 0x58]        ; 0059319a
    FLD double ptr [ESP + 0x20]         ; 0059319e
    FMUL double ptr [ESP + 0x68]        ; 005931a2
    FXCH ST2                            ; 005931a6
    FSTP double ptr [ESP + 0x38]        ; 005931a8
    FSTP double ptr [ESP + 0x10]        ; 005931ac
    FXCH                                ; 005931b0
    FSTP double ptr [ESP + 0x28]        ; 005931b2
    FXCH                                ; 005931b6
    FSTP double ptr [ESP + 0x30]        ; 005931b8
    FXCH ST2                            ; 005931bc
    FSTP double ptr [ESP + 0x18]        ; 005931be
    FXCH                                ; 005931c2
    FSTP double ptr [ESP + 0x20]        ; 005931c4
    FSTP double ptr [ESP + 0x48]        ; 005931c8
    JMP 0x005930df                      ; 005931cc
        ;   XREF to: 005930df (UNCONDITIONAL_JUMP)  ; LAB_005930df

