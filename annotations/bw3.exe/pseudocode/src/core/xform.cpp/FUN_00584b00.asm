; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00584b00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d817b
;
; *****************************************************************************

section .text

    FSTP double ptr [ESP + 0x60]        ; 00584b00
        ;   Label: core_xform.cpp_FUN_00584b00
    FLD double ptr [ESP + 0x18]         ; 00584b04
    FMUL double ptr [ESP + 0xb8]        ; 00584b08
    FXCH ST5                            ; 00584b0f
    FSTP double ptr [ESP + 0x8]         ; 00584b11
    FLD double ptr [ESP + 0x20]         ; 00584b15
    FMUL double ptr [ESP + 0xb8]        ; 00584b19
    XOR EDX,EDX                         ; 00584b20
    FXCH ST2                            ; 00584b22
    FSTP double ptr [ESP + 0x38]        ; 00584b24
    FSTP double ptr [ESP + 0x10]        ; 00584b28
    FXCH                                ; 00584b2c
    FSTP double ptr [ESP + 0x28]        ; 00584b2e
    FXCH                                ; 00584b32
    FSTP double ptr [ESP + 0x30]        ; 00584b34
    FXCH                                ; 00584b38
    FSTP double ptr [ESP + 0x18]        ; 00584b3a
    FSTP double ptr [ESP + 0x20]        ; 00584b3e
    FLD double ptr [ESP + 0x10]         ; 00584b42
        ;   Label: LAB_00584b42
    FMUL double ptr [ESP + 0x20]        ; 00584b46
    FLD double ptr [ESP + 0x28]         ; 00584b4a
    FMUL double ptr [ESP + 0x30]        ; 00584b4e
    FLD double ptr [ESP + 0x38]         ; 00584b52
    FMUL double ptr [ESP + 0x18]        ; 00584b56
    FLD double ptr [ESP + 0x28]         ; 00584b5a
    FMUL double ptr [ESP + 0x18]        ; 00584b5e
    FLD double ptr [ESP + 0x38]         ; 00584b62
    FMUL double ptr [ESP + 0x20]        ; 00584b66
    FLD double ptr [ESP + 0x30]         ; 00584b6a
    FMUL double ptr [ESP + 0x10]        ; 00584b6e
    FXCH ST2                            ; 00584b72
    FSUBP ST5,ST0                       ; 00584b74
    FSUBP ST3,ST0                       ; 00584b76
    FLD double ptr [0x005d817b]         ; 00584b78 | DAT_005d817b
    FLD double ptr [ESP]                ; 00584b7e
    FMUL ST1                            ; 00584b81
    FLD double ptr [ESP + 0x60]         ; 00584b83
    FMUL ST2                            ; 00584b87
    FXCH                                ; 00584b89
    FADDP ST6,ST0                       ; 00584b8b
    FXCH ST5                            ; 00584b8d
    FST double ptr [ESP + 0xb0]         ; 00584b8f
    FMUL double ptr [ESP + 0xb0]        ; 00584b96
    FXCH ST2                            ; 00584b9d
    FSUBP ST3,ST0                       ; 00584b9f
    FXCH ST4                            ; 00584ba1
    FADDP ST3,ST0                       ; 00584ba3
    FXCH ST2                            ; 00584ba5
    FST double ptr [ESP + 0x78]         ; 00584ba7
    FMUL double ptr [ESP + 0x78]        ; 00584bab
    FLD double ptr [ESP + 0x8]          ; 00584baf
    FMUL ST4                            ; 00584bb3
    FXCH                                ; 00584bb5
    FADDP ST3,ST0                       ; 00584bb7
    FADDP                               ; 00584bb9
    FST double ptr [ESP + 0x80]         ; 00584bbb
    FMUL double ptr [ESP + 0x80]        ; 00584bc2
    FADDP                               ; 00584bc9
    FSQRT                               ; 00584bcb
    FLD double ptr [ESP + 0x18]         ; 00584bcd
    FMUL double ptr [ESP + 0x8]         ; 00584bd1
    FLD double ptr [ESP + 0x20]         ; 00584bd5
    FMUL double ptr [ESP]               ; 00584bd9
    FLD double ptr [ESP + 0x30]         ; 00584bdc
    FMUL double ptr [ESP + 0x60]        ; 00584be0
    FLD double ptr [ESP + 0x20]         ; 00584be4
    FMUL double ptr [ESP + 0x60]        ; 00584be8
    FLD double ptr [ESP + 0x30]         ; 00584bec
    FMUL double ptr [ESP + 0x8]         ; 00584bf0
    FXCH                                ; 00584bf4
    FSUBP ST4,ST0                       ; 00584bf6
    FLD double ptr [ESP + 0x18]         ; 00584bf8
    FMUL double ptr [ESP]               ; 00584bfc
    FXCH                                ; 00584bff
    FSUBP ST3,ST0                       ; 00584c01
    FLD double ptr [ESP + 0x38]         ; 00584c03
    FMUL ST6                            ; 00584c07
    FXCH                                ; 00584c09
    FSUBP ST2,ST0                       ; 00584c0b
    FLD double ptr [ESP + 0x10]         ; 00584c0d
    FMUL ST6                            ; 00584c11
    FXCH                                ; 00584c13
    FADDP ST4,ST0                       ; 00584c15
    FXCH ST3                            ; 00584c17
    FSTP double ptr [ESP + 0x88]        ; 00584c19
    FLD double ptr [ESP + 0x28]         ; 00584c20
    FMUL ST5                            ; 00584c24
    FLD double ptr [ESP + 0x88]         ; 00584c26
    FMUL ST0                            ; 00584c2d
    FXCH ST4                            ; 00584c2f
    FADDP ST3,ST0                       ; 00584c31
    FXCH ST2                            ; 00584c33
    FST double ptr [ESP + 0x90]         ; 00584c35
    FMUL double ptr [ESP + 0x90]        ; 00584c3c
    FXCH ST2                            ; 00584c43
    FADDP                               ; 00584c45
    FXCH                                ; 00584c47
    FADDP ST2,ST0                       ; 00584c49
    FST double ptr [ESP + 0x98]         ; 00584c4b
    FMUL double ptr [ESP + 0x98]        ; 00584c52
    FADDP                               ; 00584c59
    FSQRT                               ; 00584c5b
    FLD double ptr [ESP + 0x60]         ; 00584c5d
    FMUL double ptr [ESP + 0x28]        ; 00584c61
    FLD double ptr [ESP + 0x8]          ; 00584c65
    FMUL double ptr [ESP + 0x10]        ; 00584c69
    FLD double ptr [ESP + 0x8]          ; 00584c6d
    FXCH                                ; 00584c71
    FSUBP ST2,ST0                       ; 00584c73
    FMUL double ptr [ESP + 0x38]        ; 00584c75
    FLD double ptr [ESP + 0x30]         ; 00584c79
    FMUL ST5                            ; 00584c7d
    FLD double ptr [ESP]                ; 00584c7f
    FMUL double ptr [ESP + 0x28]        ; 00584c82
    FXCH                                ; 00584c86
    FADDP ST3,ST0                       ; 00584c88
    FLD double ptr [ESP]                ; 00584c8a
    FMUL double ptr [ESP + 0x10]        ; 00584c8d
    FXCH                                ; 00584c91
    FSUBP ST2,ST0                       ; 00584c93
    FXCH ST2                            ; 00584c95
    FSTP double ptr [ESP + 0xa0]        ; 00584c97
    FLD double ptr [ESP + 0x18]         ; 00584c9e
    FMUL ST5                            ; 00584ca2
    FLD double ptr [ESP + 0x60]         ; 00584ca4
    FMUL double ptr [ESP + 0x38]        ; 00584ca8
    FXCH                                ; 00584cac
    FADDP ST2,ST0                       ; 00584cae
    FLD double ptr [ESP + 0xa0]         ; 00584cb0
    FMUL ST0                            ; 00584cb7
    FXCH                                ; 00584cb9
    FSUBP ST3,ST0                       ; 00584cbb
    FXCH                                ; 00584cbd
    FST double ptr [ESP + 0xa8]         ; 00584cbf
    FMUL double ptr [ESP + 0xa8]        ; 00584cc6
    FLD double ptr [ESP + 0x20]         ; 00584ccd
    FMULP ST6                           ; 00584cd1
    FADDP                               ; 00584cd3
    FXCH ST4                            ; 00584cd5
    FADDP                               ; 00584cd7
    FST double ptr [ESP + 0xc0]         ; 00584cd9
    FMUL double ptr [ESP + 0xc0]        ; 00584ce0
    FADDP ST3,ST0                       ; 00584ce7
    FXCH ST2                            ; 00584ce9
    FSQRT                               ; 00584ceb
    FLD1                                ; 00584ced
    FDIVRP ST3,ST0                      ; 00584cef
    FLD1                                ; 00584cf1
    FDIVRP ST2,ST0                      ; 00584cf3
    FLD double ptr [ESP + 0xb0]         ; 00584cf5
    FMUL ST2                            ; 00584cfc
    FLD double ptr [ESP + 0x78]         ; 00584cfe
    FMUL ST3                            ; 00584d02
    FLD double ptr [ESP + 0x80]         ; 00584d04
    FMULP ST4                           ; 00584d0b
    FLD double ptr [ESP + 0x88]         ; 00584d0d
    FXCH ST5                            ; 00584d14
    FSTP double ptr [ESP + 0xb8]        ; 00584d16
    FXCH ST4                            ; 00584d1d
    FMUL double ptr [ESP + 0xb8]        ; 00584d1f
    FXCH ST2                            ; 00584d26
    FSTP double ptr [ESP + 0xd8]        ; 00584d28
    FLD double ptr [ESP + 0x90]         ; 00584d2f
    FMUL double ptr [ESP + 0xb8]        ; 00584d36
    FLD1                                ; 00584d3d
    FXCH ST2                            ; 00584d3f
    FSTP double ptr [ESP]               ; 00584d41
    FLD double ptr [ESP + 0xa0]         ; 00584d44
    FLD double ptr [ESP + 0x98]         ; 00584d4b
    FMUL double ptr [ESP + 0xb8]        ; 00584d52
    FXCH ST3                            ; 00584d59
    FDIV double ptr [ESP + 0xd8]        ; 00584d5b
    FSTP double ptr [ESP + 0xb8]        ; 00584d62
    FMUL double ptr [ESP + 0xb8]        ; 00584d69
    FXCH ST5                            ; 00584d70
    FSTP double ptr [ESP + 0x60]        ; 00584d72
    FLD double ptr [ESP + 0xa8]         ; 00584d76
    FMUL double ptr [ESP + 0xb8]        ; 00584d7d
    FXCH ST4                            ; 00584d84
    FSTP double ptr [ESP + 0x8]         ; 00584d86
    FLD double ptr [ESP + 0xc0]         ; 00584d8a
    FMUL double ptr [ESP + 0xb8]        ; 00584d91
    INC EDX                             ; 00584d98
    FXCH ST3                            ; 00584d99
    FSTP double ptr [ESP + 0x38]        ; 00584d9b
    FSTP double ptr [ESP + 0x10]        ; 00584d9f
    FSTP double ptr [ESP + 0x28]        ; 00584da3
    FXCH ST2                            ; 00584da7
    FSTP double ptr [ESP + 0x30]        ; 00584da9
    FSTP double ptr [ESP + 0x18]        ; 00584dad
    FSTP double ptr [ESP + 0x20]        ; 00584db1
    CMP EDX,0xa                         ; 00584db5
    JL 0x00584b42                       ; 00584db8
        ;   XREF to: 00584b42 (CONDITIONAL_JUMP)  ; LAB_00584b42
    FLD double ptr [ESP + 0x20]         ; 00584dbe
    FLD double ptr [ESP + 0x10]         ; 00584dc2
    FMUL ST1                            ; 00584dc6
    FLD double ptr [ESP + 0x28]         ; 00584dc8
    FLD ST0                             ; 00584dcc
    FLD double ptr [ESP + 0x30]         ; 00584dce
    FXCH                                ; 00584dd2
    FMUL ST1                            ; 00584dd4
    FLD double ptr [ESP + 0x38]         ; 00584dd6
    FLD ST0                             ; 00584dda
    FMUL double ptr [ESP + 0x18]        ; 00584ddc
    FXCH ST4                            ; 00584de0
    FMUL double ptr [ESP + 0x18]        ; 00584de2
    FXCH                                ; 00584de6
    FMULP ST6                           ; 00584de8
    FXCH ST2                            ; 00584dea
    FMUL double ptr [ESP + 0x10]        ; 00584dec
    MOV EBX,dword ptr [EBP + 0x18]      ; 00584df0
    FXCH ST2                            ; 00584df3
    FSUBP ST4,ST0                       ; 00584df5
    FSUBRP ST4,ST0                      ; 00584df7
    FSUBP                               ; 00584df9
    FXCH ST2                            ; 00584dfb
    FSTP double ptr [ESP + 0x50]        ; 00584dfd
    FXCH                                ; 00584e01
    FSTP double ptr [ESP + 0x58]        ; 00584e03
    FSTP double ptr [ESP + 0x48]        ; 00584e07
    TEST EBX,EBX                        ; 00584e0b
    JNZ 0x00584e86                      ; 00584e0d
        ;   XREF to: 00584e86 (CONDITIONAL_JUMP)  ; LAB_00584e86
    FLD double ptr [ESP + 0x48]         ; 00584e0f
        ;   Label: LAB_00584e0f
    FLD double ptr [ESP + 0x50]         ; 00584e13
    FLD double ptr [ESP + 0x58]         ; 00584e17
    FLD double ptr [ESP + 0x38]         ; 00584e1b
    FLD double ptr [ESP + 0x10]         ; 00584e1f
    FLD double ptr [ESP + 0x28]         ; 00584e23
    FLD double ptr [ESP + 0x30]         ; 00584e27
    FXCH ST5                            ; 00584e2b
    FSTP float ptr [ECX + 0x4]          ; 00584e2d
    FLD double ptr [ESP + 0x18]         ; 00584e30
    FXCH ST4                            ; 00584e34
    FSTP float ptr [ECX + 0x8]          ; 00584e36
    FLD double ptr [ESP + 0x20]         ; 00584e39
    FXCH ST3                            ; 00584e3d
    FSTP float ptr [ECX + 0x10]         ; 00584e3f
    FXCH                                ; 00584e42
    FSTP float ptr [ECX + 0x14]         ; 00584e44
    FSTP float ptr [ECX + 0x18]         ; 00584e47
    FXCH ST2                            ; 00584e4a
    FSTP float ptr [ECX + 0x20]         ; 00584e4c
    FSTP float ptr [ECX + 0x24]         ; 00584e4f
    FSTP float ptr [ECX + 0x28]         ; 00584e52
    FSTP float ptr [ECX]                ; 00584e55
    MOV ESP,EBP                         ; 00584e57
    POP EBP                             ; 00584e59
    POP EDI                             ; 00584e5a
    POP ESI                             ; 00584e5b
    POP EBX                             ; 00584e5c
    RET                                 ; 00584e5d
    FLD double ptr [ESP + 0x40]         ; 00584e86
        ;   Label: LAB_00584e86
    FLD double ptr [ESP + 0x48]         ; 00584e8a
    FMUL ST1                            ; 00584e8e
    FLD double ptr [ESP + 0x50]         ; 00584e90
    FMUL ST2                            ; 00584e94
    FLD double ptr [ESP + 0x58]         ; 00584e96
    FMULP ST3                           ; 00584e9a
    FLD double ptr [ESP + 0x70]         ; 00584e9c
    FLD double ptr [ESP + 0x38]         ; 00584ea0
    FMUL ST1                            ; 00584ea4
    FLD double ptr [ESP + 0x10]         ; 00584ea6
    FMUL ST2                            ; 00584eaa
    FLD double ptr [ESP + 0x28]         ; 00584eac
    FMULP ST3                           ; 00584eb0
    FLD double ptr [ESP + 0x30]         ; 00584eb2
    FMUL double ptr [ESP + 0x68]        ; 00584eb6
    FXCH ST4                            ; 00584eba
    FSTP double ptr [ESP + 0x50]        ; 00584ebc
    FLD double ptr [ESP + 0x18]         ; 00584ec0
    FMUL double ptr [ESP + 0x68]        ; 00584ec4
    FXCH ST6                            ; 00584ec8
    FSTP double ptr [ESP + 0x58]        ; 00584eca
    FLD double ptr [ESP + 0x20]         ; 00584ece
    FMUL double ptr [ESP + 0x68]        ; 00584ed2
    FXCH ST2                            ; 00584ed6
    FSTP double ptr [ESP + 0x38]        ; 00584ed8
    FSTP double ptr [ESP + 0x10]        ; 00584edc
    FXCH                                ; 00584ee0
    FSTP double ptr [ESP + 0x28]        ; 00584ee2
    FXCH                                ; 00584ee6
    FSTP double ptr [ESP + 0x30]        ; 00584ee8
    FXCH ST2                            ; 00584eec
    FSTP double ptr [ESP + 0x18]        ; 00584eee
    FXCH                                ; 00584ef2
    FSTP double ptr [ESP + 0x20]        ; 00584ef4
    FSTP double ptr [ESP + 0x48]        ; 00584ef8
    JMP 0x00584e0f                      ; 00584efc
        ;   XREF to: 00584e0f (UNCONDITIONAL_JUMP)  ; LAB_00584e0f

