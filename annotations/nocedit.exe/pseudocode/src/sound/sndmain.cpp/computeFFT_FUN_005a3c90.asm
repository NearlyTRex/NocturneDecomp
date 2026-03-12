; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_computeFFT_FUN_005a3c90(float *input,int size,float *output_real,float *output_imag)
;
; Parameters:
; float *          Stack[0x4]:4   input
; int              Stack[0x8]:4   size
; float *          Stack[0xc]:4   output_real
; float *          Stack[0x10]:4   output_imag
; Local Variables:
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   double DOUBLE_0064f3a7 = 2
;   double DOUBLE_0064f3af = 3.14159265350000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3c90
        ;   Label: sound_sndmain.cpp_computeFFT_FUN_005a3c90
    PUSH ESI                            ; 005a3c91
    PUSH EDI                            ; 005a3c92
    PUSH EBP                            ; 005a3c93
    MOV EBP,ESP                         ; 005a3c94
    SUB ESP,0x9c                        ; 005a3c96
    AND ESP,0xfffffff8                  ; 005a3c9c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a3c9f
    MOV ECX,0x1                         ; 005a3ca2
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a3ca7
    MOV dword ptr [ESP + 0x90],EAX      ; 005a3caa
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a3cb1
    XOR EDX,EDX                         ; 005a3cb4
    MOV dword ptr [ESP + 0x8c],EAX      ; 005a3cb6
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a3cbd
    MOV dword ptr [ESP + 0x7c],EDX      ; 005a3cc0
    MOV dword ptr [ESP + 0x88],EAX      ; 005a3cc4
    MOV dword ptr [ESP + 0x84],ECX      ; 005a3ccb
    MOV EBX,dword ptr [ESP + 0x88]      ; 005a3cd2
    MOV CL,byte ptr [ESP + 0x84]        ; 005a3cd9
        ;   Label: LAB_005a3cd9
    MOV EAX,0x1                         ; 005a3ce0
    SHL EAX,CL                          ; 005a3ce5
    CMP EAX,EBX                         ; 005a3ce7
    JL 0x005a3fba                       ; 005a3ce9
        ;   XREF to: 005a3fba (CONDITIONAL_JUMP)  ; LAB_005a3fba
    XOR ESI,ESI                         ; 005a3cef
    TEST EBX,EBX                        ; 005a3cf1
    JLE 0x005a3d59                      ; 005a3cf3
        ;   XREF to: 005a3d59 (CONDITIONAL_JUMP)  ; LAB_005a3d59
    MOV EBX,dword ptr [ESP + 0x84]      ; 005a3cf5
        ;   Label: LAB_005a3cf5
    MOV EDX,ESI                         ; 005a3cfc
    XOR ECX,ECX                         ; 005a3cfe
    XOR EAX,EAX                         ; 005a3d00
    TEST EBX,EBX                        ; 005a3d02
    JLE 0x005a3d1d                      ; 005a3d04
        ;   XREF to: 005a3d1d (CONDITIONAL_JUMP)  ; LAB_005a3d1d
    MOV EBX,EDX                         ; 005a3d06
        ;   Label: LAB_005a3d06
    ADD EAX,EAX                         ; 005a3d08
    AND EBX,0x1                         ; 005a3d0a
    INC ECX                             ; 005a3d0d
    OR EAX,EBX                          ; 005a3d0e
    MOV EBX,dword ptr [ESP + 0x84]      ; 005a3d10
    SAR EDX,0x1                         ; 005a3d17
    CMP ECX,EBX                         ; 005a3d19
    JL 0x005a3d06                       ; 005a3d1b
        ;   XREF to: 005a3d06 (CONDITIONAL_JUMP)  ; LAB_005a3d06
    FLD float ptr [EDI]                 ; 005a3d1d
        ;   Label: LAB_005a3d1d
    MOV EDX,dword ptr [ESP + 0x90]      ; 005a3d1f
    SHL EAX,0x2                         ; 005a3d26
    MOV EBX,dword ptr [ESP + 0x7c]      ; 005a3d29
    FSTP float ptr [EDX + EAX*0x1]      ; 005a3d2d
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005a3d30
    LEA ECX,[ESI*0x4 + 0x0]             ; 005a3d37
    ADD EAX,EDX                         ; 005a3d3e
    TEST EBX,EBX                        ; 005a3d40
    JNZ 0x005a3fc6                      ; 005a3d42
        ;   XREF to: 005a3fc6 (CONDITIONAL_JUMP)  ; LAB_005a3fc6
    MOV dword ptr [EAX],EBX             ; 005a3d48
    MOV ECX,dword ptr [ESP + 0x88]      ; 005a3d4a
        ;   Label: LAB_005a3d4a
    INC ESI                             ; 005a3d51
    ADD EDI,0x4                         ; 005a3d52
    CMP ESI,ECX                         ; 005a3d55
    JL 0x005a3cf5                       ; 005a3d57
        ;   XREF to: 005a3cf5 (CONDITIONAL_JUMP)  ; LAB_005a3cf5
    MOV EBX,0x2                         ; 005a3d59
        ;   Label: LAB_005a3d59
    MOV ESI,dword ptr [ESP + 0x88]      ; 005a3d5e
    MOV dword ptr [ESP + 0x80],EBX      ; 005a3d65
    CMP ESI,EBX                         ; 005a3d6c
    JL 0x005a3fb3                       ; 005a3d6e
        ;   XREF to: 005a3fb3 (CONDITIONAL_JUMP)  ; LAB_005a3fb3
    MOV EAX,dword ptr [ESP + 0x80]      ; 005a3d74
        ;   Label: LAB_005a3d74
    MOV EDX,EAX                         ; 005a3d7b
    SAR EDX,0x1f                        ; 005a3d7d
    SUB EAX,EDX                         ; 005a3d80
    SAR EAX,0x1                         ; 005a3d82
    MOV dword ptr [ESP + 0x98],EAX      ; 005a3d84
    MOV dword ptr [ESP + 0x28],EAX      ; 005a3d8b
    FILD dword ptr [ESP + 0x98]         ; 005a3d8f
    FDIVR double ptr [0x0064f3af]       ; 005a3d96 | DOUBLE_0064f3af
    FLD ST0                             ; 005a3d9c
    FSINCOS                             ; 005a3d9e
    FXCH ST2                            ; 005a3da0
    FLD double ptr [0x0064f3a7]         ; 005a3da2 | DOUBLE_0064f3a7
    FXCH                                ; 005a3da8
    FMUL ST1                            ; 005a3daa
    FLD ST0                             ; 005a3dac
    FSIN                                ; 005a3dae
    FXCH                                ; 005a3db0
    FCOS                                ; 005a3db2
    FXCH ST4                            ; 005a3db4
    FSTP double ptr [ESP + 0x74]        ; 005a3db6
    MOV EAX,dword ptr [ESP + 0x74]      ; 005a3dba
    MOV dword ptr [ESP + 0x18],EAX      ; 005a3dbe
    MOV EAX,dword ptr [ESP + 0x78]      ; 005a3dc2
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a3dc6
    FLD double ptr [ESP + 0x18]         ; 005a3dca
    FMULP ST2                           ; 005a3dce
    XOR ESI,ESI                         ; 005a3dd0
    MOV EDI,dword ptr [ESP + 0x88]      ; 005a3dd2
    MOV dword ptr [ESP + 0x94],ESI      ; 005a3dd9
    FXCH ST2                            ; 005a3de0
    FSTP double ptr [ESP + 0x20]        ; 005a3de2
    FXCH ST2                            ; 005a3de6
    FSTP double ptr [ESP + 0x74]        ; 005a3de8
    MOV EAX,dword ptr [ESP + 0x74]      ; 005a3dec
    FSTP double ptr [ESP + 0x8]         ; 005a3df0
    MOV dword ptr [ESP + 0x10],EAX      ; 005a3df4
    MOV EAX,dword ptr [ESP + 0x78]      ; 005a3df8
    FSTP double ptr [ESP]               ; 005a3dfc
    MOV dword ptr [ESP + 0x14],EAX      ; 005a3dff
    TEST EDI,EDI                        ; 005a3e03
    JLE 0x005a3f94                      ; 005a3e05
        ;   XREF to: 005a3f94 (CONDITIONAL_JUMP)  ; LAB_005a3f94
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a3e0b
        ;   Label: LAB_005a3e0b
    MOV dword ptr [ESP + 0x4c],EAX      ; 005a3e0f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a3e13
    MOV dword ptr [ESP + 0x50],EAX      ; 005a3e17
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a3e1b
    MOV dword ptr [ESP + 0x54],EAX      ; 005a3e1f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a3e23
    MOV dword ptr [ESP + 0x58],EAX      ; 005a3e27
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a3e2b
    MOV dword ptr [ESP + 0x34],EAX      ; 005a3e2f
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a3e33
    MOV dword ptr [ESP + 0x38],EAX      ; 005a3e37
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3e3b
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a3e3f
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a3e43
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a3e47
    XOR ESI,ESI                         ; 005a3e4b
    MOV dword ptr [ESP + 0x40],EAX      ; 005a3e4d
    TEST EBX,EBX                        ; 005a3e51
    JLE 0x005a3f6e                      ; 005a3e53
        ;   XREF to: 005a3f6e (CONDITIONAL_JUMP)  ; LAB_005a3f6e
    FLD double ptr [ESP]                ; 005a3e59
    MOV ECX,dword ptr [ESP + 0x94]      ; 005a3e5c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a3e63
    SHL EBX,0x2                         ; 005a3e6a
    MOV EDX,dword ptr [ESP + 0x90]      ; 005a3e6d
    MOV dword ptr [ESP + 0x98],EBX      ; 005a3e74
    MOV EBX,dword ptr [ESP + 0x8c]      ; 005a3e7b
    MOV EDI,dword ptr [ESP + 0x98]      ; 005a3e82
    SHL ECX,0x2                         ; 005a3e89
    ADD EBX,EDI                         ; 005a3e8c
    MOV EDI,dword ptr [ESP + 0x90]      ; 005a3e8e
    ADD EAX,ECX                         ; 005a3e95
    ADD EDI,dword ptr [ESP + 0x98]      ; 005a3e97
    ADD EDX,ECX                         ; 005a3e9e
    ADD EDI,ECX                         ; 005a3ea0
    ADD EBX,ECX                         ; 005a3ea2
    MOV ECX,EDI                         ; 005a3ea4
    FLD ST0                             ; 005a3ea6
        ;   Label: LAB_005a3ea6
    FMUL double ptr [ESP + 0x4c]        ; 005a3ea8
    FLD ST1                             ; 005a3eac
    FMUL double ptr [ESP + 0x34]        ; 005a3eae
    FXCH                                ; 005a3eb2
    FSUB double ptr [ESP + 0x54]        ; 005a3eb4
    FLD float ptr [ECX]                 ; 005a3eb8
    FXCH                                ; 005a3eba
    FST double ptr [ESP + 0x44]         ; 005a3ebc
    FMUL ST1                            ; 005a3ec0
    FXCH ST2                            ; 005a3ec2
    FSUB double ptr [ESP + 0x3c]        ; 005a3ec4
    FLD float ptr [EBX]                 ; 005a3ec8
    FLD double ptr [ESP + 0x44]         ; 005a3eca
    FMUL ST1                            ; 005a3ece
    FXCH ST2                            ; 005a3ed0
    FST double ptr [ESP + 0x2c]         ; 005a3ed2
    FMULP                               ; 005a3ed6
    FLD double ptr [ESP + 0x2c]         ; 005a3ed8
    FMULP ST3                           ; 005a3edc
    FLD float ptr [EDX]                 ; 005a3ede
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005a3ee0
    ADD EAX,0x4                         ; 005a3ee4
    ADD EDX,0x4                         ; 005a3ee7
    MOV dword ptr [ESP + 0x54],EDI      ; 005a3eea
    MOV EDI,dword ptr [ESP + 0x50]      ; 005a3eee
    ADD EBX,0x4                         ; 005a3ef2
    MOV dword ptr [ESP + 0x58],EDI      ; 005a3ef5
    MOV EDI,dword ptr [ESP + 0x44]      ; 005a3ef9
    ADD ECX,0x4                         ; 005a3efd
    MOV dword ptr [ESP + 0x4c],EDI      ; 005a3f00
    MOV EDI,dword ptr [ESP + 0x48]      ; 005a3f04
    INC ESI                             ; 005a3f08
    MOV dword ptr [ESP + 0x50],EDI      ; 005a3f09
    FXCH                                ; 005a3f0d
    FSUBP ST4,ST0                       ; 005a3f0f
    MOV EDI,dword ptr [ESP + 0x34]      ; 005a3f11
    FXCH ST2                            ; 005a3f15
    FADDP                               ; 005a3f17
    FXCH                                ; 005a3f19
    FSUB ST0,ST2                        ; 005a3f1b
    MOV dword ptr [ESP + 0x3c],EDI      ; 005a3f1d
    FSTP float ptr [ECX + -0x4]         ; 005a3f21
    MOV EDI,dword ptr [ESP + 0x38]      ; 005a3f24
    FLD float ptr [EAX + -0x4]          ; 005a3f28
    MOV dword ptr [ESP + 0x40],EDI      ; 005a3f2b
    FSUB ST0,ST1                        ; 005a3f2f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005a3f31
    FSTP float ptr [EBX + -0x4]         ; 005a3f35
    FLD float ptr [EDX + -0x4]          ; 005a3f38
    MOV dword ptr [ESP + 0x34],EDI      ; 005a3f3b
    FLD ST0                             ; 005a3f3f
    MOV EDI,dword ptr [ESP + 0x30]      ; 005a3f41
    FADDP ST3,ST0                       ; 005a3f45
    MOV dword ptr [ESP + 0x38],EDI      ; 005a3f47
    FXCH ST2                            ; 005a3f4b
    FSTP ST2                            ; 005a3f4d
    FXCH                                ; 005a3f4f
    FSTP float ptr [EDX + -0x4]         ; 005a3f51
    FLD float ptr [EAX + -0x4]          ; 005a3f54
    FADD ST1,ST0                        ; 005a3f57
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a3f59
    FXCH                                ; 005a3f5d
    FSTP ST1                            ; 005a3f5f
    FSTP float ptr [EAX + -0x4]         ; 005a3f61
    CMP ESI,EDI                         ; 005a3f64
    JL 0x005a3ea6                       ; 005a3f66
        ;   XREF to: 005a3ea6 (CONDITIONAL_JUMP)  ; LAB_005a3ea6
    FSTP ST0                            ; 005a3f6c
    MOV EAX,dword ptr [ESP + 0x80]      ; 005a3f6e
        ;   Label: LAB_005a3f6e
    MOV EDX,dword ptr [ESP + 0x94]      ; 005a3f75
    ADD EDX,EAX                         ; 005a3f7c
    MOV ECX,dword ptr [ESP + 0x88]      ; 005a3f7e
    MOV dword ptr [ESP + 0x94],EDX      ; 005a3f85
    CMP EDX,ECX                         ; 005a3f8c
    JL 0x005a3e0b                       ; 005a3f8e
        ;   XREF to: 005a3e0b (CONDITIONAL_JUMP)  ; LAB_005a3e0b
    MOV ECX,dword ptr [ESP + 0x80]      ; 005a3f94
        ;   Label: LAB_005a3f94
    ADD ECX,ECX                         ; 005a3f9b
    MOV EBX,dword ptr [ESP + 0x88]      ; 005a3f9d
    MOV dword ptr [ESP + 0x80],ECX      ; 005a3fa4
    CMP ECX,EBX                         ; 005a3fab
    JLE 0x005a3d74                      ; 005a3fad
        ;   XREF to: 005a3d74 (CONDITIONAL_JUMP)  ; LAB_005a3d74
    MOV ESP,EBP                         ; 005a3fb3
        ;   Label: LAB_005a3fb3
    POP EBP                             ; 005a3fb5
    POP EDI                             ; 005a3fb6
    POP ESI                             ; 005a3fb7
    POP EBX                             ; 005a3fb8
    RET                                 ; 005a3fb9
    INC dword ptr [ESP + 0x84]          ; 005a3fba
        ;   Label: LAB_005a3fba
    JMP 0x005a3cd9                      ; 005a3fc1
        ;   XREF to: 005a3cd9 (UNCONDITIONAL_JUMP)  ; LAB_005a3cd9
    ADD ECX,EBX                         ; 005a3fc6
        ;   Label: LAB_005a3fc6
    MOV EDX,dword ptr [ECX]             ; 005a3fc8
    MOV dword ptr [EAX],EDX             ; 005a3fca
    JMP 0x005a3d4a                      ; 005a3fcc
        ;   XREF to: 005a3d4a (UNCONDITIONAL_JUMP)  ; LAB_005a3d4a

