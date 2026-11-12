; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setcolid_cpp_intersectXZCylinder_FUN_00557e10(float *param_1,float param_2,float param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005f0e2d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557e10
        ;   Label: core_setcolid.cpp_intersectXZCylinder_FUN_00557e10
    PUSH EBP                            ; 00557e11
    MOV EBP,ESP                         ; 00557e12
    SUB ESP,0xc0                        ; 00557e14
    AND ESP,0xfffffff8                  ; 00557e1a
    MOV EDX,dword ptr [EBP + 0xc]       ; 00557e1d
    MOV ECX,dword ptr [EBP + 0x18]      ; 00557e20
    FLD float ptr [EDX + 0x24]          ; 00557e23
    FCOMP float ptr [ECX + 0x14]        ; 00557e26
    FNSTSW AX                           ; 00557e29
    SAHF                                ; 00557e2b
    JBE 0x00557ebc                      ; 00557e2c
        ;   XREF to: 00557ebc (CONDITIONAL_JUMP)  ; LAB_00557ebc
    FLD float ptr [EDX + 0x28]          ; 00557e32
    FCOMP float ptr [ECX + 0x18]        ; 00557e35
    FNSTSW AX                           ; 00557e38
    SAHF                                ; 00557e3a
    JNC 0x00557ebc                      ; 00557e3b
        ;   XREF to: 00557ebc (CONDITIONAL_JUMP)  ; LAB_00557ebc
    FLD float ptr [EBP + 0x10]          ; 00557e41
    FSUB float ptr [EDX + 0x10]         ; 00557e44
    FST double ptr [ESP + 0x78]         ; 00557e47
    FMUL double ptr [ESP + 0x78]        ; 00557e4b
    FLD float ptr [ECX + 0x1c]          ; 00557e4f
    FLD float ptr [EBP + 0x14]          ; 00557e52
    FSUB float ptr [EDX + 0x14]         ; 00557e55
    FXCH                                ; 00557e58
    FADD float ptr [EDX + 0x20]         ; 00557e5a
    FXCH                                ; 00557e5d
    FST double ptr [ESP + 0x30]         ; 00557e5f
    FMUL double ptr [ESP + 0x30]        ; 00557e63
    FXCH                                ; 00557e67
    FST double ptr [ESP + 0x48]         ; 00557e69
    FMUL double ptr [ESP + 0x48]        ; 00557e6d
    FXCH                                ; 00557e71
    FADDP ST2,ST0                       ; 00557e73
    FSTP double ptr [ESP + 0x58]        ; 00557e75
    FST double ptr [ESP + 0x20]         ; 00557e79
    FCOMP double ptr [ESP + 0x58]       ; 00557e7d
    FNSTSW AX                           ; 00557e81
    SAHF                                ; 00557e83
    JNC 0x00557ef2                      ; 00557e84
        ;   XREF to: 00557ef2 (CONDITIONAL_JUMP)  ; LAB_00557ef2
    FLD double ptr [ESP + 0x20]         ; 00557e86
    FSQRT                               ; 00557e8a
    FSUB double ptr [ESP + 0x48]        ; 00557e8c
    FST double ptr [ESP + 0x70]         ; 00557e90
    FCOMP double ptr [0x005f0e2d]       ; 00557e94 | DAT_005f0e2d
    FNSTSW AX                           ; 00557e9a
    SAHF                                ; 00557e9c
    JBE 0x00557eb1                      ; 00557e9d
        ;   XREF to: 00557eb1 (CONDITIONAL_JUMP)  ; LAB_00557eb1
    MOV ECX,0xd2f1a9fc                  ; 00557e9f
    MOV EBX,0xbf50624d                  ; 00557ea4
    MOV dword ptr [ESP + 0x70],ECX      ; 00557ea9
    MOV dword ptr [ESP + 0x74],EBX      ; 00557ead
    FLD float ptr [EDX]                 ; 00557eb1
        ;   Label: LAB_00557eb1
    FCOMP double ptr [ESP + 0x70]       ; 00557eb3
    FNSTSW AX                           ; 00557eb7
    SAHF                                ; 00557eb9
    JA 0x00557ec3                       ; 00557eba
        ;   XREF to: 00557ec3 (CONDITIONAL_JUMP)  ; LAB_00557ec3
    XOR EAX,EAX                         ; 00557ebc
        ;   Label: LAB_00557ebc
    MOV ESP,EBP                         ; 00557ebe
    POP EBP                             ; 00557ec0
    POP EBX                             ; 00557ec1
    RET                                 ; 00557ec2
    FLD double ptr [ESP + 0x70]         ; 00557ec3
        ;   Label: LAB_00557ec3
    FLD double ptr [ESP + 0x78]         ; 00557ec7
    FLD double ptr [ESP + 0x30]         ; 00557ecb
    MOV EAX,0x1                         ; 00557ecf
    FXCH                                ; 00557ed4
    FCHS                                ; 00557ed6
    MOV dword ptr [EDX + 0x8],0x0       ; 00557ed8
    FXCH                                ; 00557edf
    FCHS                                ; 00557ee1
    FXCH ST2                            ; 00557ee3
    FSTP float ptr [EDX]                ; 00557ee5
    FSTP float ptr [EDX + 0x4]          ; 00557ee7
    FSTP float ptr [EDX + 0xc]          ; 00557eea
    MOV ESP,EBP                         ; 00557eed
    POP EBP                             ; 00557eef
    POP EBX                             ; 00557ef0
    RET                                 ; 00557ef1
    FLD double ptr [ESP + 0x78]         ; 00557ef2
        ;   Label: LAB_00557ef2
    FLD float ptr [EDX + 0x34]          ; 00557ef6
    FSTP double ptr [ESP + 0x38]        ; 00557ef9
    FMUL double ptr [ESP + 0x38]        ; 00557efd
    FLD float ptr [EDX + 0x38]          ; 00557f01
    FSTP double ptr [ESP + 0x68]        ; 00557f04
    FLD double ptr [ESP + 0x30]         ; 00557f08
    FMUL double ptr [ESP + 0x68]        ; 00557f0c
    FADDP                               ; 00557f10
    FLDZ                                ; 00557f12
    FXCH                                ; 00557f14
    FSTP double ptr [ESP + 0x60]        ; 00557f16
    FCOMP double ptr [ESP + 0x60]       ; 00557f1a
    FNSTSW AX                           ; 00557f1e
    SAHF                                ; 00557f20
    JNC 0x00557ebc                      ; 00557f21
        ;   XREF to: 00557ebc (CONDITIONAL_JUMP)  ; LAB_00557ebc
    FLD double ptr [ESP + 0x60]         ; 00557f23
    FLD double ptr [ESP + 0x38]         ; 00557f27
    FMUL ST1                            ; 00557f2b
    FLD double ptr [ESP + 0x68]         ; 00557f2d
    FMULP ST2                           ; 00557f31
    FLD float ptr [EDX + 0x10]          ; 00557f33
    FSTP double ptr [ESP + 0x10]        ; 00557f36
    FADD double ptr [ESP + 0x10]        ; 00557f3a
    FLD float ptr [EBP + 0x10]          ; 00557f3e
    FXCH                                ; 00557f41
    FSTP double ptr [ESP + 0x18]        ; 00557f43
    FSUB double ptr [ESP + 0x18]        ; 00557f47
    FMUL ST0                            ; 00557f4b
    FLD float ptr [EDX + 0x14]          ; 00557f4d
    FSTP double ptr [ESP + 0x8]         ; 00557f50
    FXCH                                ; 00557f54
    FADD double ptr [ESP + 0x8]         ; 00557f56
    FLD float ptr [EBP + 0x14]          ; 00557f5a
    FXCH                                ; 00557f5d
    FSTP double ptr [ESP]               ; 00557f5f
    FSUB double ptr [ESP]               ; 00557f62
    FMUL ST0                            ; 00557f65
    FADDP                               ; 00557f67
    FST double ptr [ESP + 0x28]         ; 00557f69
    FCOMP double ptr [ESP + 0x58]       ; 00557f6d
    FNSTSW AX                           ; 00557f71
    SAHF                                ; 00557f73
    JNC 0x00557ebc                      ; 00557f74
        ;   XREF to: 00557ebc (CONDITIONAL_JUMP)  ; LAB_00557ebc
    FLD float ptr [EDX + 0x18]          ; 00557f7a
    FST double ptr [ESP + 0x40]         ; 00557f7d
    FABS                                ; 00557f81
    FLD double ptr [ESP + 0x58]         ; 00557f83
    FSUB double ptr [ESP + 0x28]        ; 00557f87
    FSQRT                               ; 00557f8b
    FLD float ptr [EDX + 0x1c]          ; 00557f8d
    FST double ptr [ESP + 0x80]         ; 00557f90
    FABS                                ; 00557f97
    FLD double ptr [ESP + 0x38]         ; 00557f99
    FMUL ST2                            ; 00557f9d
    FLD double ptr [ESP + 0x68]         ; 00557f9f
    FMULP ST3                           ; 00557fa3
    FLD double ptr [ESP]                ; 00557fa5
    FLD double ptr [ESP + 0x18]         ; 00557fa8
    FSUBRP ST2,ST0                      ; 00557fac
    FSUBRP ST3,ST0                      ; 00557fae
    FSTP double ptr [ESP + 0x90]        ; 00557fb0
    FXCH                                ; 00557fb7
    FSTP double ptr [ESP + 0x50]        ; 00557fb9
    FCOMPP                              ; 00557fbd
    FNSTSW AX                           ; 00557fbf
    SAHF                                ; 00557fc1
    JNC 0x00558013                      ; 00557fc2
        ;   XREF to: 00558013 (CONDITIONAL_JUMP)  ; LAB_00558013
    FLD double ptr [ESP + 0x90]         ; 00557fc4
    FSUB double ptr [ESP + 0x10]        ; 00557fcb
    FDIV double ptr [ESP + 0x40]        ; 00557fcf
    FSTP double ptr [ESP + 0x88]        ; 00557fd3
        ;   Label: LAB_00557fd3
    FLDZ                                ; 00557fda
    FCOMP double ptr [ESP + 0x88]       ; 00557fdc
    FNSTSW AX                           ; 00557fe3
    SAHF                                ; 00557fe5
    JA 0x00557ebc                       ; 00557fe6
        ;   XREF to: 00557ebc (CONDITIONAL_JUMP)  ; LAB_00557ebc
    FLD float ptr [EDX]                 ; 00557fec
    FCOMP double ptr [ESP + 0x88]       ; 00557fee
    FNSTSW AX                           ; 00557ff5
    SAHF                                ; 00557ff7
    JBE 0x00557ebc                      ; 00557ff8
        ;   XREF to: 00557ebc (CONDITIONAL_JUMP)  ; LAB_00557ebc
    FLD1                                ; 00557ffe
    FCOMP double ptr [ESP + 0x88]       ; 00558000
    FNSTSW AX                           ; 00558007
    SAHF                                ; 00558009
    JNC 0x00558024                      ; 0055800a
        ;   XREF to: 00558024 (CONDITIONAL_JUMP)  ; LAB_00558024
    XOR EAX,EAX                         ; 0055800c
    MOV ESP,EBP                         ; 0055800e
    POP EBP                             ; 00558010
    POP EBX                             ; 00558011
    RET                                 ; 00558012
    FLD double ptr [ESP + 0x50]         ; 00558013
        ;   Label: LAB_00558013
    FSUB double ptr [ESP + 0x8]         ; 00558017
    FDIV double ptr [ESP + 0x80]        ; 0055801b
    JMP 0x00557fd3                      ; 00558022
        ;   XREF to: 00557fd3 (UNCONDITIONAL_JUMP)  ; LAB_00557fd3
    FLD double ptr [ESP + 0x88]         ; 00558024
        ;   Label: LAB_00558024
    FLD float ptr [EBP + 0x10]          ; 0055802b
    FLD float ptr [EBP + 0x14]          ; 0055802e
    MOV dword ptr [EDX + 0x8],0x0       ; 00558031
    MOV EAX,0x1                         ; 00558038
    FXCH ST2                            ; 0055803d
    FSTP float ptr [EDX]                ; 0055803f
    FSUBR double ptr [ESP + 0x90]       ; 00558041
    FXCH                                ; 00558048
    FSUBR double ptr [ESP + 0x50]       ; 0055804a
    FXCH                                ; 0055804e
    FSTP float ptr [EDX + 0x4]          ; 00558050
    FSTP float ptr [EDX + 0xc]          ; 00558053
    MOV ESP,EBP                         ; 00558056
    POP EBP                             ; 00558058
    POP EBX                             ; 00558059
    RET                                 ; 0055805a

