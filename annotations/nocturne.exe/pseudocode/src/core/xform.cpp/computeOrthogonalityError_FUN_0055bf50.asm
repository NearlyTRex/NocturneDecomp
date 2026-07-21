; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_xform_cpp_computeOrthogonalityError_FUN_0055bf50(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bf50
        ;   Label: core_xform.cpp_computeOrthogonalityError_FUN_0055bf50
    PUSH ESI                            ; 0055bf51
    PUSH EDI                            ; 0055bf52
    PUSH EBP                            ; 0055bf53
    MOV EBP,ESP                         ; 0055bf54
    SUB ESP,0x84                        ; 0055bf56
    AND ESP,0xfffffff8                  ; 0055bf5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055bf5f
    FLD float ptr [EAX]                 ; 0055bf62
    FST double ptr [ESP]                ; 0055bf64
    FMUL double ptr [ESP]               ; 0055bf67
    FLD float ptr [EAX + 0x4]           ; 0055bf6a
    FST double ptr [ESP + 0x8]          ; 0055bf6d
    FMUL double ptr [ESP + 0x8]         ; 0055bf71
    FLD float ptr [EAX + 0x8]           ; 0055bf75
    FXCH                                ; 0055bf78
    FADDP ST2,ST0                       ; 0055bf7a
    FST double ptr [ESP + 0x10]         ; 0055bf7c
    FMUL double ptr [ESP + 0x10]        ; 0055bf80
    FLD float ptr [EAX + 0x10]          ; 0055bf84
    FLD float ptr [EAX + 0x14]          ; 0055bf87
    FLD float ptr [EAX + 0x18]          ; 0055bf8a
    FLD float ptr [EAX + 0x20]          ; 0055bf8d
    FLD float ptr [EAX + 0x24]          ; 0055bf90
    FXCH ST4                            ; 0055bf93
    FSTP double ptr [ESP + 0x18]        ; 0055bf95
    FXCH ST4                            ; 0055bf99
    FADDP ST5,ST0                       ; 0055bf9b
    FLD float ptr [EAX + 0x28]          ; 0055bf9d
    FXCH ST5                            ; 0055bfa0
    FSQRT                               ; 0055bfa2
    FXCH ST2                            ; 0055bfa4
    FSTP double ptr [ESP + 0x20]        ; 0055bfa6
    FLD double ptr [ESP + 0x18]         ; 0055bfaa
    FMUL ST0                            ; 0055bfae
    FLD double ptr [ESP + 0x20]         ; 0055bfb0
    FMUL ST0                            ; 0055bfb4
    FADDP                               ; 0055bfb6
    FXCH                                ; 0055bfb8
    FST double ptr [ESP + 0x28]         ; 0055bfba
    FMUL double ptr [ESP + 0x28]        ; 0055bfbe
    FADDP                               ; 0055bfc2
    FSQRT                               ; 0055bfc4
    FXCH ST3                            ; 0055bfc6
    FST double ptr [ESP + 0x50]         ; 0055bfc8
    FMUL double ptr [ESP + 0x50]        ; 0055bfcc
    FXCH ST2                            ; 0055bfd0
    FST double ptr [ESP + 0x48]         ; 0055bfd2
    FMUL double ptr [ESP + 0x48]        ; 0055bfd6
    FADDP ST2,ST0                       ; 0055bfda
    FXCH ST3                            ; 0055bfdc
    FST double ptr [ESP + 0x58]         ; 0055bfde
    FMUL double ptr [ESP + 0x58]        ; 0055bfe2
    FADDP                               ; 0055bfe6
    FSQRT                               ; 0055bfe8
    FLDZ                                ; 0055bfea
    FXCH ST3                            ; 0055bfec
    FSTP double ptr [ESP + 0x40]        ; 0055bfee
    FXCH                                ; 0055bff2
    FSTP double ptr [ESP + 0x38]        ; 0055bff4
    FSTP double ptr [ESP + 0x30]        ; 0055bff8
    FCOMP double ptr [ESP + 0x40]       ; 0055bffc
    FNSTSW AX                           ; 0055c000
    SAHF                                ; 0055c002
    JNC 0x0055c14f                      ; 0055c003
        ;   XREF to: 0055c14f (CONDITIONAL_JUMP)  ; LAB_0055c14f
    FLDZ                                ; 0055c009
        ;   Label: LAB_0055c009
    FCOMP double ptr [ESP + 0x38]       ; 0055c00b
    FNSTSW AX                           ; 0055c00f
    SAHF                                ; 0055c011
    JC 0x0055c023                       ; 0055c012
        ;   XREF to: 0055c023 (CONDITIONAL_JUMP)  ; LAB_0055c023
    XOR EBX,EBX                         ; 0055c014
    MOV ESI,0x3ff00000                  ; 0055c016
    MOV dword ptr [ESP + 0x38],EBX      ; 0055c01b
    MOV dword ptr [ESP + 0x3c],ESI      ; 0055c01f
    FLDZ                                ; 0055c023
        ;   Label: LAB_0055c023
    FCOMP double ptr [ESP + 0x30]       ; 0055c025
    FNSTSW AX                           ; 0055c029
    SAHF                                ; 0055c02b
    JNC 0x0055c163                      ; 0055c02c
        ;   XREF to: 0055c163 (CONDITIONAL_JUMP)  ; LAB_0055c163
    FLD1                                ; 0055c032
        ;   Label: LAB_0055c032
    FDIV double ptr [ESP + 0x40]        ; 0055c034
    FLD1                                ; 0055c038
    FDIV double ptr [ESP + 0x38]        ; 0055c03a
    FLD double ptr [ESP]                ; 0055c03e
    FMUL ST2                            ; 0055c041
    FLD double ptr [ESP + 0x8]          ; 0055c043
    FMUL ST3                            ; 0055c047
    FLD double ptr [ESP + 0x10]         ; 0055c049
    FMULP ST4                           ; 0055c04d
    FLD double ptr [ESP + 0x18]         ; 0055c04f
    FXCH ST3                            ; 0055c053
    FSTP double ptr [ESP + 0x78]        ; 0055c055
    FXCH ST2                            ; 0055c059
    FMUL double ptr [ESP + 0x78]        ; 0055c05b
    FLD double ptr [ESP + 0x20]         ; 0055c05f
    FMUL double ptr [ESP + 0x78]        ; 0055c063
    FLD double ptr [ESP + 0x28]         ; 0055c067
    FXCH ST3                            ; 0055c06b
    FSTP double ptr [ESP]               ; 0055c06d
    FLD1                                ; 0055c070
    FLD double ptr [ESP + 0x50]         ; 0055c072
    FXCH ST4                            ; 0055c076
    FMUL double ptr [ESP + 0x78]        ; 0055c078
    FXCH                                ; 0055c07c
    FDIV double ptr [ESP + 0x30]        ; 0055c07e
    FSTP double ptr [ESP + 0x78]        ; 0055c082
    FXCH ST3                            ; 0055c086
    FMUL double ptr [ESP + 0x78]        ; 0055c088
    FXCH ST4                            ; 0055c08c
    FSTP double ptr [ESP + 0x8]         ; 0055c08e
    FLD double ptr [ESP + 0x48]         ; 0055c092
    FMUL double ptr [ESP + 0x78]        ; 0055c096
    FXCH ST5                            ; 0055c09a
    FSTP double ptr [ESP + 0x10]        ; 0055c09c
    FLD double ptr [ESP + 0x58]         ; 0055c0a0
    FMUL double ptr [ESP + 0x78]        ; 0055c0a4
    FXCH ST2                            ; 0055c0a8
    FSTP double ptr [ESP + 0x18]        ; 0055c0aa
    FLD double ptr [ESP]                ; 0055c0ae
    FMUL double ptr [ESP + 0x18]        ; 0055c0b1
    FXCH ST4                            ; 0055c0b5
    FSTP double ptr [ESP + 0x50]        ; 0055c0b7
    FLD double ptr [ESP]                ; 0055c0bb
    FMUL double ptr [ESP + 0x50]        ; 0055c0be
    FXCH                                ; 0055c0c2
    FSTP double ptr [ESP + 0x20]        ; 0055c0c4
    FLD double ptr [ESP + 0x18]         ; 0055c0c8
    FMUL double ptr [ESP + 0x50]        ; 0055c0cc
    FXCH ST3                            ; 0055c0d0
    FSTP double ptr [ESP + 0x28]        ; 0055c0d2
    FLD double ptr [ESP + 0x8]          ; 0055c0d6
    FMUL double ptr [ESP + 0x20]        ; 0055c0da
    FXCH ST5                            ; 0055c0de
    FSTP double ptr [ESP + 0x48]        ; 0055c0e0
    FLD double ptr [ESP + 0x8]          ; 0055c0e4
    FMUL double ptr [ESP + 0x48]        ; 0055c0e8
    FLD double ptr [ESP + 0x20]         ; 0055c0ec
    FXCH ST6                            ; 0055c0f0
    FADDP ST5,ST0                       ; 0055c0f2
    FXCH ST5                            ; 0055c0f4
    FMUL double ptr [ESP + 0x48]        ; 0055c0f6
    FLD double ptr [ESP + 0x10]         ; 0055c0fa
    FMUL double ptr [ESP + 0x28]        ; 0055c0fe
    FXCH ST6                            ; 0055c102
    FADDP ST2,ST0                       ; 0055c104
    FXCH ST2                            ; 0055c106
    FSTP double ptr [ESP + 0x58]        ; 0055c108
    FLD double ptr [ESP + 0x10]         ; 0055c10c
    FMUL double ptr [ESP + 0x58]        ; 0055c110
    FXCH ST5                            ; 0055c114
    FADDP ST4,ST0                       ; 0055c116
    FLD ST3                             ; 0055c118
    FMULP ST4                           ; 0055c11a
    FXCH                                ; 0055c11c
    FADDP ST2,ST0                       ; 0055c11e
    FADDP ST3,ST0                       ; 0055c120
    FLD ST2                             ; 0055c122
    FMULP ST3                           ; 0055c124
    FLD double ptr [ESP + 0x28]         ; 0055c126
    FMUL double ptr [ESP + 0x58]        ; 0055c12a
    FXCH ST3                            ; 0055c12e
    FADDP ST2,ST0                       ; 0055c130
    FADDP ST2,ST0                       ; 0055c132
    FLD ST1                             ; 0055c134
    FMULP ST2                           ; 0055c136
    FADDP                               ; 0055c138
    FSTP float ptr [ESP + 0x80]         ; 0055c13a
    MOV EAX,dword ptr [ESP + 0x80]      ; 0055c141
    MOV ESP,EBP                         ; 0055c148
    POP EBP                             ; 0055c14a
    POP EDI                             ; 0055c14b
    POP ESI                             ; 0055c14c
    POP EBX                             ; 0055c14d
    RET                                 ; 0055c14e
    XOR EDX,EDX                         ; 0055c14f
        ;   Label: LAB_0055c14f
    MOV ECX,0x3ff00000                  ; 0055c151
    MOV dword ptr [ESP + 0x40],EDX      ; 0055c156
    MOV dword ptr [ESP + 0x44],ECX      ; 0055c15a
    JMP 0x0055c009                      ; 0055c15e
        ;   XREF to: 0055c009 (UNCONDITIONAL_JUMP)  ; LAB_0055c009
    XOR EDI,EDI                         ; 0055c163
        ;   Label: LAB_0055c163
    MOV EAX,0x3ff00000                  ; 0055c165
    MOV dword ptr [ESP + 0x30],EDI      ; 0055c16a
    MOV dword ptr [ESP + 0x34],EAX      ; 0055c16e
    JMP 0x0055c032                      ; 0055c172
        ;   XREF to: 0055c032 (UNCONDITIONAL_JUMP)  ; LAB_0055c032

