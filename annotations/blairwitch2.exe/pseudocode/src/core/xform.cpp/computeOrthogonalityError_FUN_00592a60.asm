; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_xform_cpp_computeOrthogonalityError_FUN_00592a60(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592a60
        ;   Label: core_xform.cpp_computeOrthogonalityError_FUN_00592a60
    PUSH ESI                            ; 00592a61
    PUSH EDI                            ; 00592a62
    PUSH EBP                            ; 00592a63
    MOV EBP,ESP                         ; 00592a64
    SUB ESP,0x84                        ; 00592a66
    AND ESP,0xfffffff8                  ; 00592a6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592a6f
    FLD float ptr [EAX]                 ; 00592a72
    FST double ptr [ESP]                ; 00592a74
    FMUL double ptr [ESP]               ; 00592a77
    FLD float ptr [EAX + 0x4]           ; 00592a7a
    FST double ptr [ESP + 0x8]          ; 00592a7d
    FMUL double ptr [ESP + 0x8]         ; 00592a81
    FLD float ptr [EAX + 0x8]           ; 00592a85
    FXCH                                ; 00592a88
    FADDP ST2,ST0                       ; 00592a8a
    FST double ptr [ESP + 0x10]         ; 00592a8c
    FMUL double ptr [ESP + 0x10]        ; 00592a90
    FLD float ptr [EAX + 0x10]          ; 00592a94
    FLD float ptr [EAX + 0x14]          ; 00592a97
    FLD float ptr [EAX + 0x18]          ; 00592a9a
    FLD float ptr [EAX + 0x20]          ; 00592a9d
    FLD float ptr [EAX + 0x24]          ; 00592aa0
    FXCH ST4                            ; 00592aa3
    FSTP double ptr [ESP + 0x18]        ; 00592aa5
    FXCH ST4                            ; 00592aa9
    FADDP ST5,ST0                       ; 00592aab
    FLD float ptr [EAX + 0x28]          ; 00592aad
    FXCH ST5                            ; 00592ab0
    FSQRT                               ; 00592ab2
    FXCH ST2                            ; 00592ab4
    FSTP double ptr [ESP + 0x20]        ; 00592ab6
    FLD double ptr [ESP + 0x18]         ; 00592aba
    FMUL ST0                            ; 00592abe
    FLD double ptr [ESP + 0x20]         ; 00592ac0
    FMUL ST0                            ; 00592ac4
    FADDP                               ; 00592ac6
    FXCH                                ; 00592ac8
    FST double ptr [ESP + 0x28]         ; 00592aca
    FMUL double ptr [ESP + 0x28]        ; 00592ace
    FADDP                               ; 00592ad2
    FSQRT                               ; 00592ad4
    FXCH ST3                            ; 00592ad6
    FST double ptr [ESP + 0x50]         ; 00592ad8
    FMUL double ptr [ESP + 0x50]        ; 00592adc
    FXCH ST2                            ; 00592ae0
    FST double ptr [ESP + 0x48]         ; 00592ae2
    FMUL double ptr [ESP + 0x48]        ; 00592ae6
    FADDP ST2,ST0                       ; 00592aea
    FXCH ST3                            ; 00592aec
    FST double ptr [ESP + 0x58]         ; 00592aee
    FMUL double ptr [ESP + 0x58]        ; 00592af2
    FADDP                               ; 00592af6
    FSQRT                               ; 00592af8
    FLDZ                                ; 00592afa
    FXCH ST3                            ; 00592afc
    FSTP double ptr [ESP + 0x40]        ; 00592afe
    FXCH                                ; 00592b02
    FSTP double ptr [ESP + 0x38]        ; 00592b04
    FSTP double ptr [ESP + 0x30]        ; 00592b08
    FCOMP double ptr [ESP + 0x40]       ; 00592b0c
    FNSTSW AX                           ; 00592b10
    SAHF                                ; 00592b12
    JNC 0x00592c5f                      ; 00592b13
        ;   XREF to: 00592c5f (CONDITIONAL_JUMP)  ; LAB_00592c5f
    FLDZ                                ; 00592b19
        ;   Label: LAB_00592b19
    FCOMP double ptr [ESP + 0x38]       ; 00592b1b
    FNSTSW AX                           ; 00592b1f
    SAHF                                ; 00592b21
    JC 0x00592b33                       ; 00592b22
        ;   XREF to: 00592b33 (CONDITIONAL_JUMP)  ; LAB_00592b33
    XOR EBX,EBX                         ; 00592b24
    MOV ESI,0x3ff00000                  ; 00592b26
    MOV dword ptr [ESP + 0x38],EBX      ; 00592b2b
    MOV dword ptr [ESP + 0x3c],ESI      ; 00592b2f
    FLDZ                                ; 00592b33
        ;   Label: LAB_00592b33
    FCOMP double ptr [ESP + 0x30]       ; 00592b35
    FNSTSW AX                           ; 00592b39
    SAHF                                ; 00592b3b
    JNC 0x00592c73                      ; 00592b3c
        ;   XREF to: 00592c73 (CONDITIONAL_JUMP)  ; LAB_00592c73
    FLD1                                ; 00592b42
        ;   Label: LAB_00592b42
    FDIV double ptr [ESP + 0x40]        ; 00592b44
    FLD1                                ; 00592b48
    FDIV double ptr [ESP + 0x38]        ; 00592b4a
    FLD double ptr [ESP]                ; 00592b4e
    FMUL ST2                            ; 00592b51
    FLD double ptr [ESP + 0x8]          ; 00592b53
    FMUL ST3                            ; 00592b57
    FLD double ptr [ESP + 0x10]         ; 00592b59
    FMULP ST4                           ; 00592b5d
    FLD double ptr [ESP + 0x18]         ; 00592b5f
    FXCH ST3                            ; 00592b63
    FSTP double ptr [ESP + 0x78]        ; 00592b65
    FXCH ST2                            ; 00592b69
    FMUL double ptr [ESP + 0x78]        ; 00592b6b
    FLD double ptr [ESP + 0x20]         ; 00592b6f
    FMUL double ptr [ESP + 0x78]        ; 00592b73
    FLD double ptr [ESP + 0x28]         ; 00592b77
    FXCH ST3                            ; 00592b7b
    FSTP double ptr [ESP]               ; 00592b7d
    FLD1                                ; 00592b80
    FLD double ptr [ESP + 0x50]         ; 00592b82
    FXCH ST4                            ; 00592b86
    FMUL double ptr [ESP + 0x78]        ; 00592b88
    FXCH                                ; 00592b8c
    FDIV double ptr [ESP + 0x30]        ; 00592b8e
    FSTP double ptr [ESP + 0x78]        ; 00592b92
    FXCH ST3                            ; 00592b96
    FMUL double ptr [ESP + 0x78]        ; 00592b98
    FXCH ST4                            ; 00592b9c
    FSTP double ptr [ESP + 0x8]         ; 00592b9e
    FLD double ptr [ESP + 0x48]         ; 00592ba2
    FMUL double ptr [ESP + 0x78]        ; 00592ba6
    FXCH ST5                            ; 00592baa
    FSTP double ptr [ESP + 0x10]        ; 00592bac
    FLD double ptr [ESP + 0x58]         ; 00592bb0
    FMUL double ptr [ESP + 0x78]        ; 00592bb4
    FXCH ST2                            ; 00592bb8
    FSTP double ptr [ESP + 0x18]        ; 00592bba
    FLD double ptr [ESP]                ; 00592bbe
    FMUL double ptr [ESP + 0x18]        ; 00592bc1
    FXCH ST4                            ; 00592bc5
    FSTP double ptr [ESP + 0x50]        ; 00592bc7
    FLD double ptr [ESP]                ; 00592bcb
    FMUL double ptr [ESP + 0x50]        ; 00592bce
    FXCH                                ; 00592bd2
    FSTP double ptr [ESP + 0x20]        ; 00592bd4
    FLD double ptr [ESP + 0x18]         ; 00592bd8
    FMUL double ptr [ESP + 0x50]        ; 00592bdc
    FXCH ST3                            ; 00592be0
    FSTP double ptr [ESP + 0x28]        ; 00592be2
    FLD double ptr [ESP + 0x8]          ; 00592be6
    FMUL double ptr [ESP + 0x20]        ; 00592bea
    FXCH ST5                            ; 00592bee
    FSTP double ptr [ESP + 0x48]        ; 00592bf0
    FLD double ptr [ESP + 0x8]          ; 00592bf4
    FMUL double ptr [ESP + 0x48]        ; 00592bf8
    FLD double ptr [ESP + 0x20]         ; 00592bfc
    FXCH ST6                            ; 00592c00
    FADDP ST5,ST0                       ; 00592c02
    FXCH ST5                            ; 00592c04
    FMUL double ptr [ESP + 0x48]        ; 00592c06
    FLD double ptr [ESP + 0x10]         ; 00592c0a
    FMUL double ptr [ESP + 0x28]        ; 00592c0e
    FXCH ST6                            ; 00592c12
    FADDP ST2,ST0                       ; 00592c14
    FXCH ST2                            ; 00592c16
    FSTP double ptr [ESP + 0x58]        ; 00592c18
    FLD double ptr [ESP + 0x10]         ; 00592c1c
    FMUL double ptr [ESP + 0x58]        ; 00592c20
    FXCH ST5                            ; 00592c24
    FADDP ST4,ST0                       ; 00592c26
    FLD ST3                             ; 00592c28
    FMULP ST4                           ; 00592c2a
    FXCH                                ; 00592c2c
    FADDP ST2,ST0                       ; 00592c2e
    FADDP ST3,ST0                       ; 00592c30
    FLD ST2                             ; 00592c32
    FMULP ST3                           ; 00592c34
    FLD double ptr [ESP + 0x28]         ; 00592c36
    FMUL double ptr [ESP + 0x58]        ; 00592c3a
    FXCH ST3                            ; 00592c3e
    FADDP ST2,ST0                       ; 00592c40
    FADDP ST2,ST0                       ; 00592c42
    FLD ST1                             ; 00592c44
    FMULP ST2                           ; 00592c46
    FADDP                               ; 00592c48
    FSTP float ptr [ESP + 0x80]         ; 00592c4a
    MOV EAX,dword ptr [ESP + 0x80]      ; 00592c51
    MOV ESP,EBP                         ; 00592c58
    POP EBP                             ; 00592c5a
    POP EDI                             ; 00592c5b
    POP ESI                             ; 00592c5c
    POP EBX                             ; 00592c5d
    RET                                 ; 00592c5e
    XOR EDX,EDX                         ; 00592c5f
        ;   Label: LAB_00592c5f
    MOV ECX,0x3ff00000                  ; 00592c61
    MOV dword ptr [ESP + 0x40],EDX      ; 00592c66
    MOV dword ptr [ESP + 0x44],ECX      ; 00592c6a
    JMP 0x00592b19                      ; 00592c6e
        ;   XREF to: 00592b19 (UNCONDITIONAL_JUMP)  ; LAB_00592b19
    XOR EDI,EDI                         ; 00592c73
        ;   Label: LAB_00592c73
    MOV EAX,0x3ff00000                  ; 00592c75
    MOV dword ptr [ESP + 0x30],EDI      ; 00592c7a
    MOV dword ptr [ESP + 0x34],EAX      ; 00592c7e
    JMP 0x00592b42                      ; 00592c82
        ;   XREF to: 00592b42 (UNCONDITIONAL_JUMP)  ; LAB_00592b42

