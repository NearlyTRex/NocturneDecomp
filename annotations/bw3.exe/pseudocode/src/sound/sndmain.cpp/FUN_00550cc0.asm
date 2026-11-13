; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00550cc0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d2362
;   undefined4 DAT_005d236a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550cc0
        ;   Label: sound_sndmain.cpp_FUN_00550cc0
    PUSH ESI                            ; 00550cc1
    PUSH EDI                            ; 00550cc2
    PUSH EBP                            ; 00550cc3
    MOV EBP,ESP                         ; 00550cc4
    SUB ESP,0x9c                        ; 00550cc6
    AND ESP,0xfffffff8                  ; 00550ccc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00550ccf
    MOV ECX,0x1                         ; 00550cd2
    MOV EDI,dword ptr [EBP + 0x14]      ; 00550cd7
    MOV dword ptr [ESP + 0x88],EAX      ; 00550cda
    MOV EAX,dword ptr [EBP + 0x20]      ; 00550ce1
    XOR EDX,EDX                         ; 00550ce4
    MOV dword ptr [ESP + 0x8c],EAX      ; 00550ce6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00550ced
    MOV dword ptr [ESP + 0x78],EDX      ; 00550cf0
    MOV dword ptr [ESP + 0x84],EAX      ; 00550cf4
    MOV dword ptr [ESP + 0x7c],ECX      ; 00550cfb
    MOV EBX,dword ptr [ESP + 0x84]      ; 00550cff
    MOV CL,byte ptr [ESP + 0x7c]        ; 00550d06
        ;   Label: LAB_00550d06
    MOV EAX,0x1                         ; 00550d0a
    SHL EAX,CL                          ; 00550d0f
    CMP EAX,EBX                         ; 00550d11
    JL 0x00550fe7                       ; 00550d13
        ;   XREF to: 00550fe7 (CONDITIONAL_JUMP)  ; LAB_00550fe7
    XOR ESI,ESI                         ; 00550d19
    TEST EBX,EBX                        ; 00550d1b
    JLE 0x00550d7d                      ; 00550d1d
        ;   XREF to: 00550d7d (CONDITIONAL_JUMP)  ; LAB_00550d7d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00550d1f
        ;   Label: LAB_00550d1f
    MOV ECX,ESI                         ; 00550d23
    XOR EDX,EDX                         ; 00550d25
    XOR EAX,EAX                         ; 00550d27
    TEST EBX,EBX                        ; 00550d29
    JLE 0x00550d41                      ; 00550d2b
        ;   XREF to: 00550d41 (CONDITIONAL_JUMP)  ; LAB_00550d41
    MOV EBX,ECX                         ; 00550d2d
        ;   Label: LAB_00550d2d
    ADD EAX,EAX                         ; 00550d2f
    AND EBX,0x1                         ; 00550d31
    INC EDX                             ; 00550d34
    OR EAX,EBX                          ; 00550d35
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00550d37
    SAR ECX,0x1                         ; 00550d3b
    CMP EDX,EBX                         ; 00550d3d
    JL 0x00550d2d                       ; 00550d3f
        ;   XREF to: 00550d2d (CONDITIONAL_JUMP)  ; LAB_00550d2d
    FLD float ptr [EDI]                 ; 00550d41
        ;   Label: LAB_00550d41
    MOV EDX,dword ptr [ESP + 0x88]      ; 00550d43
    SHL EAX,0x2                         ; 00550d4a
    MOV EBX,dword ptr [ESP + 0x78]      ; 00550d4d
    FSTP float ptr [EDX + EAX*0x1]      ; 00550d51
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00550d54
    LEA ECX,[ESI*0x4 + 0x0]             ; 00550d5b
    ADD EAX,EDX                         ; 00550d62
    TEST EBX,EBX                        ; 00550d64
    JNZ 0x00550ff0                      ; 00550d66
        ;   XREF to: 00550ff0 (CONDITIONAL_JUMP)  ; LAB_00550ff0
    MOV dword ptr [EAX],EBX             ; 00550d6c
    MOV ECX,dword ptr [ESP + 0x84]      ; 00550d6e
        ;   Label: LAB_00550d6e
    INC ESI                             ; 00550d75
    ADD EDI,0x4                         ; 00550d76
    CMP ESI,ECX                         ; 00550d79
    JL 0x00550d1f                       ; 00550d7b
        ;   XREF to: 00550d1f (CONDITIONAL_JUMP)  ; LAB_00550d1f
    MOV EBX,0x2                         ; 00550d7d
        ;   Label: LAB_00550d7d
    MOV ESI,dword ptr [ESP + 0x84]      ; 00550d82
    MOV dword ptr [ESP + 0x80],EBX      ; 00550d89
    CMP ESI,EBX                         ; 00550d90
    JL 0x00550fe0                       ; 00550d92
        ;   XREF to: 00550fe0 (CONDITIONAL_JUMP)  ; LAB_00550fe0
    MOV EAX,dword ptr [ESP + 0x80]      ; 00550d98
        ;   Label: LAB_00550d98
    MOV EDX,EAX                         ; 00550d9f
    SAR EDX,0x1f                        ; 00550da1
    SUB EAX,EDX                         ; 00550da4
    SAR EAX,0x1                         ; 00550da6
    MOV dword ptr [ESP + 0x98],EAX      ; 00550da8
    MOV dword ptr [ESP + 0x94],EAX      ; 00550daf
    FILD dword ptr [ESP + 0x98]         ; 00550db6
    FDIVR float ptr [0x005d236a]        ; 00550dbd | DAT_005d236a
    FLD ST0                             ; 00550dc3
    FSINCOS                             ; 00550dc5
    FXCH ST2                            ; 00550dc7
    FLD double ptr [0x005d2362]         ; 00550dc9 | DAT_005d2362
    FXCH                                ; 00550dcf
    FMUL ST1                            ; 00550dd1
    FLD ST0                             ; 00550dd3
    FSIN                                ; 00550dd5
    FXCH                                ; 00550dd7
    FCOS                                ; 00550dd9
    FXCH ST4                            ; 00550ddb
    FSTP double ptr [ESP + 0x70]        ; 00550ddd
    MOV EAX,dword ptr [ESP + 0x70]      ; 00550de1
    MOV dword ptr [ESP + 0x20],EAX      ; 00550de5
    MOV EAX,dword ptr [ESP + 0x74]      ; 00550de9
    MOV dword ptr [ESP + 0x24],EAX      ; 00550ded
    FLD double ptr [ESP + 0x20]         ; 00550df1
    FMULP ST2                           ; 00550df5
    XOR ESI,ESI                         ; 00550df7
    MOV EDI,dword ptr [ESP + 0x84]      ; 00550df9
    MOV dword ptr [ESP + 0x90],ESI      ; 00550e00
    FXCH ST2                            ; 00550e07
    FSTP double ptr [ESP]               ; 00550e09
    FXCH ST2                            ; 00550e0c
    FSTP double ptr [ESP + 0x70]        ; 00550e0e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00550e12
    FSTP double ptr [ESP + 0x10]        ; 00550e16
    MOV dword ptr [ESP + 0x18],EAX      ; 00550e1a
    MOV EAX,dword ptr [ESP + 0x74]      ; 00550e1e
    FSTP double ptr [ESP + 0x8]         ; 00550e22
    MOV dword ptr [ESP + 0x1c],EAX      ; 00550e26
    TEST EDI,EDI                        ; 00550e2a
    JLE 0x00550fc1                      ; 00550e2c
        ;   XREF to: 00550fc1 (CONDITIONAL_JUMP)  ; LAB_00550fc1
    MOV EAX,dword ptr [ESP + 0x20]      ; 00550e32
        ;   Label: LAB_00550e32
    MOV dword ptr [ESP + 0x30],EAX      ; 00550e36
    MOV EAX,dword ptr [ESP + 0x24]      ; 00550e3a
    MOV dword ptr [ESP + 0x34],EAX      ; 00550e3e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00550e42
    MOV dword ptr [ESP + 0x38],EAX      ; 00550e46
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00550e4a
    MOV dword ptr [ESP + 0x3c],EAX      ; 00550e4e
    MOV EAX,dword ptr [ESP]             ; 00550e52
    MOV dword ptr [ESP + 0x48],EAX      ; 00550e55
    MOV EAX,dword ptr [ESP + 0x4]       ; 00550e59
    MOV dword ptr [ESP + 0x4c],EAX      ; 00550e5d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00550e61
    MOV EBX,dword ptr [ESP + 0x94]      ; 00550e65
    MOV dword ptr [ESP + 0x50],EAX      ; 00550e6c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00550e70
    XOR ESI,ESI                         ; 00550e74
    MOV dword ptr [ESP + 0x54],EAX      ; 00550e76
    TEST EBX,EBX                        ; 00550e7a
    JLE 0x00550f9b                      ; 00550e7c
        ;   XREF to: 00550f9b (CONDITIONAL_JUMP)  ; LAB_00550f9b
    FLD double ptr [ESP + 0x8]          ; 00550e82
    MOV ECX,dword ptr [ESP + 0x90]      ; 00550e86
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00550e8d
    SHL EBX,0x2                         ; 00550e94
    MOV EDX,dword ptr [ESP + 0x88]      ; 00550e97
    MOV dword ptr [ESP + 0x98],EBX      ; 00550e9e
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00550ea5
    MOV EDI,dword ptr [ESP + 0x98]      ; 00550eac
    SHL ECX,0x2                         ; 00550eb3
    ADD EBX,EDI                         ; 00550eb6
    MOV EDI,dword ptr [ESP + 0x88]      ; 00550eb8
    ADD EAX,ECX                         ; 00550ebf
    ADD EDI,dword ptr [ESP + 0x98]      ; 00550ec1
    ADD EDX,ECX                         ; 00550ec8
    ADD EDI,ECX                         ; 00550eca
    ADD EBX,ECX                         ; 00550ecc
    MOV ECX,EDI                         ; 00550ece
    FLD ST0                             ; 00550ed0
        ;   Label: LAB_00550ed0
    FMUL double ptr [ESP + 0x30]        ; 00550ed2
    FLD ST1                             ; 00550ed6
    FMUL double ptr [ESP + 0x48]        ; 00550ed8
    FXCH                                ; 00550edc
    FSUB double ptr [ESP + 0x38]        ; 00550ede
    FLD float ptr [ECX]                 ; 00550ee2
    FXCH                                ; 00550ee4
    FST double ptr [ESP + 0x28]         ; 00550ee6
    FMUL ST1                            ; 00550eea
    FXCH ST2                            ; 00550eec
    FSUB double ptr [ESP + 0x50]        ; 00550eee
    FLD float ptr [EBX]                 ; 00550ef2
    FLD double ptr [ESP + 0x28]         ; 00550ef4
    FMUL ST1                            ; 00550ef8
    FXCH ST2                            ; 00550efa
    FST double ptr [ESP + 0x40]         ; 00550efc
    FMULP                               ; 00550f00
    FLD double ptr [ESP + 0x40]         ; 00550f02
    FMULP ST3                           ; 00550f06
    FLD float ptr [EDX]                 ; 00550f08
    MOV EDI,dword ptr [ESP + 0x30]      ; 00550f0a
    ADD EAX,0x4                         ; 00550f0e
    ADD EDX,0x4                         ; 00550f11
    MOV dword ptr [ESP + 0x38],EDI      ; 00550f14
    MOV EDI,dword ptr [ESP + 0x34]      ; 00550f18
    ADD EBX,0x4                         ; 00550f1c
    MOV dword ptr [ESP + 0x3c],EDI      ; 00550f1f
    MOV EDI,dword ptr [ESP + 0x28]      ; 00550f23
    ADD ECX,0x4                         ; 00550f27
    MOV dword ptr [ESP + 0x30],EDI      ; 00550f2a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00550f2e
    INC ESI                             ; 00550f32
    MOV dword ptr [ESP + 0x34],EDI      ; 00550f33
    FXCH                                ; 00550f37
    FSUBP ST4,ST0                       ; 00550f39
    MOV EDI,dword ptr [ESP + 0x48]      ; 00550f3b
    FXCH ST2                            ; 00550f3f
    FADDP                               ; 00550f41
    FXCH                                ; 00550f43
    FSUB ST0,ST2                        ; 00550f45
    MOV dword ptr [ESP + 0x50],EDI      ; 00550f47
    FSTP float ptr [ECX + -0x4]         ; 00550f4b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00550f4e
    FLD float ptr [EAX + -0x4]          ; 00550f52
    MOV dword ptr [ESP + 0x54],EDI      ; 00550f55
    FSUB ST0,ST1                        ; 00550f59
    MOV EDI,dword ptr [ESP + 0x40]      ; 00550f5b
    FSTP float ptr [EBX + -0x4]         ; 00550f5f
    FLD float ptr [EDX + -0x4]          ; 00550f62
    MOV dword ptr [ESP + 0x48],EDI      ; 00550f65
    FLD ST0                             ; 00550f69
    MOV EDI,dword ptr [ESP + 0x44]      ; 00550f6b
    FADDP ST3,ST0                       ; 00550f6f
    MOV dword ptr [ESP + 0x4c],EDI      ; 00550f71
    FXCH ST2                            ; 00550f75
    FSTP ST2                            ; 00550f77
    FXCH                                ; 00550f79
    FSTP float ptr [EDX + -0x4]         ; 00550f7b
    FLD float ptr [EAX + -0x4]          ; 00550f7e
    FADD ST1,ST0                        ; 00550f81
    MOV EDI,dword ptr [ESP + 0x94]      ; 00550f83
    FXCH                                ; 00550f8a
    FSTP ST1                            ; 00550f8c
    FSTP float ptr [EAX + -0x4]         ; 00550f8e
    CMP ESI,EDI                         ; 00550f91
    JL 0x00550ed0                       ; 00550f93
        ;   XREF to: 00550ed0 (CONDITIONAL_JUMP)  ; LAB_00550ed0
    FSTP ST0                            ; 00550f99
    MOV EAX,dword ptr [ESP + 0x80]      ; 00550f9b
        ;   Label: LAB_00550f9b
    MOV EDX,dword ptr [ESP + 0x90]      ; 00550fa2
    ADD EDX,EAX                         ; 00550fa9
    MOV ECX,dword ptr [ESP + 0x84]      ; 00550fab
    MOV dword ptr [ESP + 0x90],EDX      ; 00550fb2
    CMP EDX,ECX                         ; 00550fb9
    JL 0x00550e32                       ; 00550fbb
        ;   XREF to: 00550e32 (CONDITIONAL_JUMP)  ; LAB_00550e32
    MOV ECX,dword ptr [ESP + 0x80]      ; 00550fc1
        ;   Label: LAB_00550fc1
    ADD ECX,ECX                         ; 00550fc8
    MOV EBX,dword ptr [ESP + 0x84]      ; 00550fca
    MOV dword ptr [ESP + 0x80],ECX      ; 00550fd1
    CMP ECX,EBX                         ; 00550fd8
    JLE 0x00550d98                      ; 00550fda
        ;   XREF to: 00550d98 (CONDITIONAL_JUMP)  ; LAB_00550d98
    MOV ESP,EBP                         ; 00550fe0
        ;   Label: LAB_00550fe0
    POP EBP                             ; 00550fe2
    POP EDI                             ; 00550fe3
    POP ESI                             ; 00550fe4
    POP EBX                             ; 00550fe5
    RET                                 ; 00550fe6
    INC dword ptr [ESP + 0x7c]          ; 00550fe7
        ;   Label: LAB_00550fe7
    JMP 0x00550d06                      ; 00550feb
        ;   XREF to: 00550d06 (UNCONDITIONAL_JUMP)  ; LAB_00550d06
    ADD ECX,EBX                         ; 00550ff0
        ;   Label: LAB_00550ff0
    MOV EDX,dword ptr [ECX]             ; 00550ff2
    MOV dword ptr [EAX],EDX             ; 00550ff4
    JMP 0x00550d6e                      ; 00550ff6
        ;   XREF to: 00550d6e (UNCONDITIONAL_JUMP)  ; LAB_00550d6e

