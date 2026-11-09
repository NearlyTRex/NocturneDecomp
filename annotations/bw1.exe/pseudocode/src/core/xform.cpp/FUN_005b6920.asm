; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b6920(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa150
;
; *****************************************************************************

section .text

    FSTP double ptr [ESP + 0x60]        ; 005b6920
        ;   Label: core_xform.cpp_FUN_005b6920
    FLD double ptr [ESP + 0x18]         ; 005b6924
    FMUL double ptr [ESP + 0xb8]        ; 005b6928
    FXCH ST5                            ; 005b692f
    FSTP double ptr [ESP + 0x8]         ; 005b6931
    FLD double ptr [ESP + 0x20]         ; 005b6935
    FMUL double ptr [ESP + 0xb8]        ; 005b6939
    XOR EDX,EDX                         ; 005b6940
    FXCH ST2                            ; 005b6942
    FSTP double ptr [ESP + 0x38]        ; 005b6944
    FSTP double ptr [ESP + 0x10]        ; 005b6948
    FXCH                                ; 005b694c
    FSTP double ptr [ESP + 0x28]        ; 005b694e
    FXCH                                ; 005b6952
    FSTP double ptr [ESP + 0x30]        ; 005b6954
    FXCH                                ; 005b6958
    FSTP double ptr [ESP + 0x18]        ; 005b695a
    FSTP double ptr [ESP + 0x20]        ; 005b695e
    FLD double ptr [ESP + 0x10]         ; 005b6962
        ;   Label: LAB_005b6962
    FMUL double ptr [ESP + 0x20]        ; 005b6966
    FLD double ptr [ESP + 0x28]         ; 005b696a
    FMUL double ptr [ESP + 0x30]        ; 005b696e
    FLD double ptr [ESP + 0x38]         ; 005b6972
    FMUL double ptr [ESP + 0x18]        ; 005b6976
    FLD double ptr [ESP + 0x28]         ; 005b697a
    FMUL double ptr [ESP + 0x18]        ; 005b697e
    FLD double ptr [ESP + 0x38]         ; 005b6982
    FMUL double ptr [ESP + 0x20]        ; 005b6986
    FLD double ptr [ESP + 0x30]         ; 005b698a
    FMUL double ptr [ESP + 0x10]        ; 005b698e
    FXCH ST2                            ; 005b6992
    FSUBP ST5,ST0                       ; 005b6994
    FSUBP ST3,ST0                       ; 005b6996
    FLD double ptr [0x005fa150]         ; 005b6998 | DAT_005fa150
    FLD double ptr [ESP]                ; 005b699e
    FMUL ST1                            ; 005b69a1
    FLD double ptr [ESP + 0x60]         ; 005b69a3
    FMUL ST2                            ; 005b69a7
    FXCH                                ; 005b69a9
    FADDP ST6,ST0                       ; 005b69ab
    FXCH ST5                            ; 005b69ad
    FST double ptr [ESP + 0xb0]         ; 005b69af
    FMUL double ptr [ESP + 0xb0]        ; 005b69b6
    FXCH ST2                            ; 005b69bd
    FSUBP ST3,ST0                       ; 005b69bf
    FXCH ST4                            ; 005b69c1
    FADDP ST3,ST0                       ; 005b69c3
    FXCH ST2                            ; 005b69c5
    FST double ptr [ESP + 0x78]         ; 005b69c7
    FMUL double ptr [ESP + 0x78]        ; 005b69cb
    FLD double ptr [ESP + 0x8]          ; 005b69cf
    FMUL ST4                            ; 005b69d3
    FXCH                                ; 005b69d5
    FADDP ST3,ST0                       ; 005b69d7
    FADDP                               ; 005b69d9
    FST double ptr [ESP + 0x80]         ; 005b69db
    FMUL double ptr [ESP + 0x80]        ; 005b69e2
    FADDP                               ; 005b69e9
    FSQRT                               ; 005b69eb
    FLD double ptr [ESP + 0x18]         ; 005b69ed
    FMUL double ptr [ESP + 0x8]         ; 005b69f1
    FLD double ptr [ESP + 0x20]         ; 005b69f5
    FMUL double ptr [ESP]               ; 005b69f9
    FLD double ptr [ESP + 0x30]         ; 005b69fc
    FMUL double ptr [ESP + 0x60]        ; 005b6a00
    FLD double ptr [ESP + 0x20]         ; 005b6a04
    FMUL double ptr [ESP + 0x60]        ; 005b6a08
    FLD double ptr [ESP + 0x30]         ; 005b6a0c
    FMUL double ptr [ESP + 0x8]         ; 005b6a10
    FXCH                                ; 005b6a14
    FSUBP ST4,ST0                       ; 005b6a16
    FLD double ptr [ESP + 0x18]         ; 005b6a18
    FMUL double ptr [ESP]               ; 005b6a1c
    FXCH                                ; 005b6a1f
    FSUBP ST3,ST0                       ; 005b6a21
    FLD double ptr [ESP + 0x38]         ; 005b6a23
    FMUL ST6                            ; 005b6a27
    FXCH                                ; 005b6a29
    FSUBP ST2,ST0                       ; 005b6a2b
    FLD double ptr [ESP + 0x10]         ; 005b6a2d
    FMUL ST6                            ; 005b6a31
    FXCH                                ; 005b6a33
    FADDP ST4,ST0                       ; 005b6a35
    FXCH ST3                            ; 005b6a37
    FSTP double ptr [ESP + 0x88]        ; 005b6a39
    FLD double ptr [ESP + 0x28]         ; 005b6a40
    FMUL ST5                            ; 005b6a44
    FLD double ptr [ESP + 0x88]         ; 005b6a46
    FMUL ST0                            ; 005b6a4d
    FXCH ST4                            ; 005b6a4f
    FADDP ST3,ST0                       ; 005b6a51
    FXCH ST2                            ; 005b6a53
    FST double ptr [ESP + 0x90]         ; 005b6a55
    FMUL double ptr [ESP + 0x90]        ; 005b6a5c
    FXCH ST2                            ; 005b6a63
    FADDP                               ; 005b6a65
    FXCH                                ; 005b6a67
    FADDP ST2,ST0                       ; 005b6a69
    FST double ptr [ESP + 0x98]         ; 005b6a6b
    FMUL double ptr [ESP + 0x98]        ; 005b6a72
    FADDP                               ; 005b6a79
    FSQRT                               ; 005b6a7b
    FLD double ptr [ESP + 0x60]         ; 005b6a7d
    FMUL double ptr [ESP + 0x28]        ; 005b6a81
    FLD double ptr [ESP + 0x8]          ; 005b6a85
    FMUL double ptr [ESP + 0x10]        ; 005b6a89
    FLD double ptr [ESP + 0x8]          ; 005b6a8d
    FXCH                                ; 005b6a91
    FSUBP ST2,ST0                       ; 005b6a93
    FMUL double ptr [ESP + 0x38]        ; 005b6a95
    FLD double ptr [ESP + 0x30]         ; 005b6a99
    FMUL ST5                            ; 005b6a9d
    FLD double ptr [ESP]                ; 005b6a9f
    FMUL double ptr [ESP + 0x28]        ; 005b6aa2
    FXCH                                ; 005b6aa6
    FADDP ST3,ST0                       ; 005b6aa8
    FLD double ptr [ESP]                ; 005b6aaa
    FMUL double ptr [ESP + 0x10]        ; 005b6aad
    FXCH                                ; 005b6ab1
    FSUBP ST2,ST0                       ; 005b6ab3
    FXCH ST2                            ; 005b6ab5
    FSTP double ptr [ESP + 0xa0]        ; 005b6ab7
    FLD double ptr [ESP + 0x18]         ; 005b6abe
    FMUL ST5                            ; 005b6ac2
    FLD double ptr [ESP + 0x60]         ; 005b6ac4
    FMUL double ptr [ESP + 0x38]        ; 005b6ac8
    FXCH                                ; 005b6acc
    FADDP ST2,ST0                       ; 005b6ace
    FLD double ptr [ESP + 0xa0]         ; 005b6ad0
    FMUL ST0                            ; 005b6ad7
    FXCH                                ; 005b6ad9
    FSUBP ST3,ST0                       ; 005b6adb
    FXCH                                ; 005b6add
    FST double ptr [ESP + 0xa8]         ; 005b6adf
    FMUL double ptr [ESP + 0xa8]        ; 005b6ae6
    FLD double ptr [ESP + 0x20]         ; 005b6aed
    FMULP ST6                           ; 005b6af1
    FADDP                               ; 005b6af3
    FXCH ST4                            ; 005b6af5
    FADDP                               ; 005b6af7
    FST double ptr [ESP + 0xc0]         ; 005b6af9
    FMUL double ptr [ESP + 0xc0]        ; 005b6b00
    FADDP ST3,ST0                       ; 005b6b07
    FXCH ST2                            ; 005b6b09
    FSQRT                               ; 005b6b0b
    FLD1                                ; 005b6b0d
    FDIVRP ST3,ST0                      ; 005b6b0f
    FLD1                                ; 005b6b11
    FDIVRP ST2,ST0                      ; 005b6b13
    FLD double ptr [ESP + 0xb0]         ; 005b6b15
    FMUL ST2                            ; 005b6b1c
    FLD double ptr [ESP + 0x78]         ; 005b6b1e
    FMUL ST3                            ; 005b6b22
    FLD double ptr [ESP + 0x80]         ; 005b6b24
    FMULP ST4                           ; 005b6b2b
    FLD double ptr [ESP + 0x88]         ; 005b6b2d
    FXCH ST5                            ; 005b6b34
    FSTP double ptr [ESP + 0xb8]        ; 005b6b36
    FXCH ST4                            ; 005b6b3d
    FMUL double ptr [ESP + 0xb8]        ; 005b6b3f
    FXCH ST2                            ; 005b6b46
    FSTP double ptr [ESP + 0xd8]        ; 005b6b48
    FLD double ptr [ESP + 0x90]         ; 005b6b4f
    FMUL double ptr [ESP + 0xb8]        ; 005b6b56
    FLD1                                ; 005b6b5d
    FXCH ST2                            ; 005b6b5f
    FSTP double ptr [ESP]               ; 005b6b61
    FLD double ptr [ESP + 0xa0]         ; 005b6b64
    FLD double ptr [ESP + 0x98]         ; 005b6b6b
    FMUL double ptr [ESP + 0xb8]        ; 005b6b72
    FXCH ST3                            ; 005b6b79
    FDIV double ptr [ESP + 0xd8]        ; 005b6b7b
    FSTP double ptr [ESP + 0xb8]        ; 005b6b82
    FMUL double ptr [ESP + 0xb8]        ; 005b6b89
    FXCH ST5                            ; 005b6b90
    FSTP double ptr [ESP + 0x60]        ; 005b6b92
    FLD double ptr [ESP + 0xa8]         ; 005b6b96
    FMUL double ptr [ESP + 0xb8]        ; 005b6b9d
    FXCH ST4                            ; 005b6ba4
    FSTP double ptr [ESP + 0x8]         ; 005b6ba6
    FLD double ptr [ESP + 0xc0]         ; 005b6baa
    FMUL double ptr [ESP + 0xb8]        ; 005b6bb1
    INC EDX                             ; 005b6bb8
    FXCH ST3                            ; 005b6bb9
    FSTP double ptr [ESP + 0x38]        ; 005b6bbb
    FSTP double ptr [ESP + 0x10]        ; 005b6bbf
    FSTP double ptr [ESP + 0x28]        ; 005b6bc3
    FXCH ST2                            ; 005b6bc7
    FSTP double ptr [ESP + 0x30]        ; 005b6bc9
    FSTP double ptr [ESP + 0x18]        ; 005b6bcd
    FSTP double ptr [ESP + 0x20]        ; 005b6bd1
    CMP EDX,0xa                         ; 005b6bd5
    JL 0x005b6962                       ; 005b6bd8
        ;   XREF to: 005b6962 (CONDITIONAL_JUMP)  ; LAB_005b6962
    FLD double ptr [ESP + 0x20]         ; 005b6bde
    FLD double ptr [ESP + 0x10]         ; 005b6be2
    FMUL ST1                            ; 005b6be6
    FLD double ptr [ESP + 0x28]         ; 005b6be8
    FLD ST0                             ; 005b6bec
    FLD double ptr [ESP + 0x30]         ; 005b6bee
    FXCH                                ; 005b6bf2
    FMUL ST1                            ; 005b6bf4
    FLD double ptr [ESP + 0x38]         ; 005b6bf6
    FLD ST0                             ; 005b6bfa
    FMUL double ptr [ESP + 0x18]        ; 005b6bfc
    FXCH ST4                            ; 005b6c00
    FMUL double ptr [ESP + 0x18]        ; 005b6c02
    FXCH                                ; 005b6c06
    FMULP ST6                           ; 005b6c08
    FXCH ST2                            ; 005b6c0a
    FMUL double ptr [ESP + 0x10]        ; 005b6c0c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005b6c10
    FXCH ST2                            ; 005b6c13
    FSUBP ST4,ST0                       ; 005b6c15
    FSUBRP ST4,ST0                      ; 005b6c17
    FSUBP                               ; 005b6c19
    FXCH ST2                            ; 005b6c1b
    FSTP double ptr [ESP + 0x50]        ; 005b6c1d
    FXCH                                ; 005b6c21
    FSTP double ptr [ESP + 0x58]        ; 005b6c23
    FSTP double ptr [ESP + 0x48]        ; 005b6c27
    TEST EBX,EBX                        ; 005b6c2b
    JNZ 0x005b6ca6                      ; 005b6c2d
        ;   XREF to: 005b6ca6 (CONDITIONAL_JUMP)  ; LAB_005b6ca6
    FLD double ptr [ESP + 0x48]         ; 005b6c2f
        ;   Label: LAB_005b6c2f
    FLD double ptr [ESP + 0x50]         ; 005b6c33
    FLD double ptr [ESP + 0x58]         ; 005b6c37
    FLD double ptr [ESP + 0x38]         ; 005b6c3b
    FLD double ptr [ESP + 0x10]         ; 005b6c3f
    FLD double ptr [ESP + 0x28]         ; 005b6c43
    FLD double ptr [ESP + 0x30]         ; 005b6c47
    FXCH ST5                            ; 005b6c4b
    FSTP float ptr [ECX + 0x4]          ; 005b6c4d
    FLD double ptr [ESP + 0x18]         ; 005b6c50
    FXCH ST4                            ; 005b6c54
    FSTP float ptr [ECX + 0x8]          ; 005b6c56
    FLD double ptr [ESP + 0x20]         ; 005b6c59
    FXCH ST3                            ; 005b6c5d
    FSTP float ptr [ECX + 0x10]         ; 005b6c5f
    FXCH                                ; 005b6c62
    FSTP float ptr [ECX + 0x14]         ; 005b6c64
    FSTP float ptr [ECX + 0x18]         ; 005b6c67
    FXCH ST2                            ; 005b6c6a
    FSTP float ptr [ECX + 0x20]         ; 005b6c6c
    FSTP float ptr [ECX + 0x24]         ; 005b6c6f
    FSTP float ptr [ECX + 0x28]         ; 005b6c72
    FSTP float ptr [ECX]                ; 005b6c75
    MOV ESP,EBP                         ; 005b6c77
    POP EBP                             ; 005b6c79
    POP EDI                             ; 005b6c7a
    POP ESI                             ; 005b6c7b
    POP EBX                             ; 005b6c7c
    RET                                 ; 005b6c7d
    FLD double ptr [ESP + 0x40]         ; 005b6ca6
        ;   Label: LAB_005b6ca6
    FLD double ptr [ESP + 0x48]         ; 005b6caa
    FMUL ST1                            ; 005b6cae
    FLD double ptr [ESP + 0x50]         ; 005b6cb0
    FMUL ST2                            ; 005b6cb4
    FLD double ptr [ESP + 0x58]         ; 005b6cb6
    FMULP ST3                           ; 005b6cba
    FLD double ptr [ESP + 0x70]         ; 005b6cbc
    FLD double ptr [ESP + 0x38]         ; 005b6cc0
    FMUL ST1                            ; 005b6cc4
    FLD double ptr [ESP + 0x10]         ; 005b6cc6
    FMUL ST2                            ; 005b6cca
    FLD double ptr [ESP + 0x28]         ; 005b6ccc
    FMULP ST3                           ; 005b6cd0
    FLD double ptr [ESP + 0x30]         ; 005b6cd2
    FMUL double ptr [ESP + 0x68]        ; 005b6cd6
    FXCH ST4                            ; 005b6cda
    FSTP double ptr [ESP + 0x50]        ; 005b6cdc
    FLD double ptr [ESP + 0x18]         ; 005b6ce0
    FMUL double ptr [ESP + 0x68]        ; 005b6ce4
    FXCH ST6                            ; 005b6ce8
    FSTP double ptr [ESP + 0x58]        ; 005b6cea
    FLD double ptr [ESP + 0x20]         ; 005b6cee
    FMUL double ptr [ESP + 0x68]        ; 005b6cf2
    FXCH ST2                            ; 005b6cf6
    FSTP double ptr [ESP + 0x38]        ; 005b6cf8
    FSTP double ptr [ESP + 0x10]        ; 005b6cfc
    FXCH                                ; 005b6d00
    FSTP double ptr [ESP + 0x28]        ; 005b6d02
    FXCH                                ; 005b6d06
    FSTP double ptr [ESP + 0x30]        ; 005b6d08
    FXCH ST2                            ; 005b6d0c
    FSTP double ptr [ESP + 0x18]        ; 005b6d0e
    FXCH                                ; 005b6d12
    FSTP double ptr [ESP + 0x20]        ; 005b6d14
    FSTP double ptr [ESP + 0x48]        ; 005b6d18
    JMP 0x005b6c2f                      ; 005b6d1c
        ;   XREF to: 005b6c2f (UNCONDITIONAL_JUMP)  ; LAB_005b6c2f

