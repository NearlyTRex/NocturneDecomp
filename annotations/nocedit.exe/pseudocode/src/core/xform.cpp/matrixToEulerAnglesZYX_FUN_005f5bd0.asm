; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x3f *matrix_ptr,CVector3f *euler_out)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix_ptr
; CVector3f *      Stack[0x8]:4   euler_out
; Local Variables:
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_bodypart.cpp_CBodyPart_FUN_0041a630 at 0041a8c4
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005980d5
;   core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0 at 005f7b10
;
; Referenced Globals:
;   double g_MathConstantNegativeOne = -1
;   double g_MathConstantNegativePi = -3.14159265359000
;   float g_MathConstantTwoPi = 6.283185
;   double g_MathConstantSqrtTwoOverTwo = 0.707000000000000
;   double g_MathConstantNegativeSqrtTwoOverTwo = -0.707000000000000
;   double g_MathConstantPi = 3.14159265359000
;   float g_MathConstantNegativeTwoPi = -6.283185
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;   crt_math.c_asin_FUN_00600b94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f5bd0
        ;   Label: core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
    PUSH EDI                            ; 005f5bd1
    PUSH EBP                            ; 005f5bd2
    MOV EBP,ESP                         ; 005f5bd3
    SUB ESP,0x9c                        ; 005f5bd5
    AND ESP,0xfffffff8                  ; 005f5bdb
    MOV EDX,dword ptr [EBP + 0x10]      ; 005f5bde
    MOV ECX,dword ptr [EBP + 0x14]      ; 005f5be1
    FLD float ptr [EDX + 0x4]           ; 005f5be4
    FMUL ST0                            ; 005f5be7
    FLD float ptr [EDX]                 ; 005f5be9
    FMUL ST0                            ; 005f5beb
    FADDP                               ; 005f5bed
    FLD float ptr [EDX + 0x8]           ; 005f5bef
    FMUL ST0                            ; 005f5bf2
    FADDP                               ; 005f5bf4
    FSQRT                               ; 005f5bf6
    FLDZ                                ; 005f5bf8
    FXCH                                ; 005f5bfa
    FSTP double ptr [ESP + 0x20]        ; 005f5bfc
    FCOMP double ptr [ESP + 0x20]       ; 005f5c00
    FNSTSW AX                           ; 005f5c04
    SAHF                                ; 005f5c06
    JC 0x005f5d84                       ; 005f5c07
        ;   XREF to: 005f5d84 (CONDITIONAL_JUMP)  ; LAB_005f5d84
    FLD float ptr [EDX + 0x10]          ; 005f5c0d
        ;   Label: LAB_005f5c0d
    FMUL ST0                            ; 005f5c10
    FLD float ptr [EDX + 0x14]          ; 005f5c12
    FMUL ST0                            ; 005f5c15
    FADDP                               ; 005f5c17
    FLD float ptr [EDX + 0x18]          ; 005f5c19
    FMUL ST0                            ; 005f5c1c
    FADDP                               ; 005f5c1e
    FSQRT                               ; 005f5c20
    FLDZ                                ; 005f5c22
    FXCH                                ; 005f5c24
    FSTP double ptr [ESP + 0x10]        ; 005f5c26
    FCOMP double ptr [ESP + 0x10]       ; 005f5c2a
    FNSTSW AX                           ; 005f5c2e
    SAHF                                ; 005f5c30
    JNC 0x005f5c3d                      ; 005f5c31
        ;   XREF to: 005f5c3d (CONDITIONAL_JUMP)  ; LAB_005f5c3d
    FLD1                                ; 005f5c33
    FDIV double ptr [ESP + 0x10]        ; 005f5c35
    FSTP double ptr [ESP + 0x10]        ; 005f5c39
    FLD float ptr [EDX + 0x20]          ; 005f5c3d
        ;   Label: LAB_005f5c3d
    FMUL ST0                            ; 005f5c40
    FLD float ptr [EDX + 0x24]          ; 005f5c42
    FMUL ST0                            ; 005f5c45
    FADDP                               ; 005f5c47
    FLD float ptr [EDX + 0x28]          ; 005f5c49
    FMUL ST0                            ; 005f5c4c
    FADDP                               ; 005f5c4e
    FSQRT                               ; 005f5c50
    FLDZ                                ; 005f5c52
    FXCH                                ; 005f5c54
    FSTP double ptr [ESP + 0x28]        ; 005f5c56
    FCOMP double ptr [ESP + 0x28]       ; 005f5c5a
    FNSTSW AX                           ; 005f5c5e
    SAHF                                ; 005f5c60
    JNC 0x005f5c6d                      ; 005f5c61
        ;   XREF to: 005f5c6d (CONDITIONAL_JUMP)  ; LAB_005f5c6d
    FLD1                                ; 005f5c63
    FDIV double ptr [ESP + 0x28]        ; 005f5c65
    FSTP double ptr [ESP + 0x28]        ; 005f5c69
    FLD float ptr [EDX + 0x24]          ; 005f5c6d
        ;   Label: LAB_005f5c6d
    FCHS                                ; 005f5c70
    FMUL double ptr [ESP + 0x28]        ; 005f5c72
    FST double ptr [ESP + 0x18]         ; 005f5c76
    FCOMP double ptr [0x00658355]       ; 005f5c7a | g_MathConstantNegativeOne
    FNSTSW AX                           ; 005f5c80
    SAHF                                ; 005f5c82
    JA 0x005f5d93                       ; 005f5c83
        ;   XREF to: 005f5d93 (CONDITIONAL_JUMP)  ; LAB_005f5d93
    MOV dword ptr [ECX],0xbfc90fdb      ; 005f5c89
    MOV dword ptr [ECX + 0x8],0x0       ; 005f5c8f
        ;   Label: LAB_005f5c8f
    FLD float ptr [EDX + 0x8]           ; 005f5c96
    FCHS                                ; 005f5c99
    FLD double ptr [ESP + 0x20]         ; 005f5c9b
    FXCH                                ; 005f5c9f
    FMUL ST1                            ; 005f5ca1
    FLD float ptr [EDX]                 ; 005f5ca3
    FMULP ST2                           ; 005f5ca5
    FSTP double ptr [ESP + 0x8]         ; 005f5ca7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f5cab
    MOV dword ptr [ESP + 0x30],EAX      ; 005f5caf
    MOV EAX,dword ptr [ESP + 0xc]       ; 005f5cb3
    FSTP double ptr [ESP + 0x40]        ; 005f5cb7
    MOV dword ptr [ESP + 0x34],EAX      ; 005f5cbb
    MOV EAX,dword ptr [ESP + 0x40]      ; 005f5cbf
    MOV dword ptr [ESP + 0x68],EAX      ; 005f5cc3
    MOV EAX,dword ptr [ESP + 0x44]      ; 005f5cc7
    FLD double ptr [ESP + 0x8]          ; 005f5ccb
    MOV dword ptr [ESP + 0x6c],EAX      ; 005f5ccf
    FCOMP double ptr [0x0065836d]       ; 005f5cd3 | g_MathConstantSqrtTwoOverTwo
    FNSTSW AX                           ; 005f5cd9
    SAHF                                ; 005f5cdb
    JNC 0x005f5feb                      ; 005f5cdc
        ;   XREF to: 005f5feb (CONDITIONAL_JUMP)  ; LAB_005f5feb
    FLD double ptr [ESP + 0x8]          ; 005f5ce2
    FCOMP double ptr [0x00658375]       ; 005f5ce6 | g_MathConstantNegativeSqrtTwoOverTwo
    FNSTSW AX                           ; 005f5cec
    SAHF                                ; 005f5cee
    JBE 0x005f5feb                      ; 005f5cef
        ;   XREF to: 005f5feb (CONDITIONAL_JUMP)  ; LAB_005f5feb
    FLD double ptr [ESP + 0x8]          ; 005f5cf5
    CALL crt_math.c_asin_FUN_00600b94   ; 005f5cf9
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 005f5cfe
    FXCH                                ; 005f5d00
    FSTP float ptr [ESP + 0x94]         ; 005f5d02
    FCOMP double ptr [ESP + 0x40]       ; 005f5d09
    FNSTSW AX                           ; 005f5d0d
    SAHF                                ; 005f5d0f
    JBE 0x005f5d26                      ; 005f5d10
        ;   XREF to: 005f5d26 (CONDITIONAL_JUMP)  ; LAB_005f5d26
    FLD float ptr [ESP + 0x94]          ; 005f5d12
    FSUBR double ptr [0x0065837d]       ; 005f5d19 | g_MathConstantPi
    FSTP float ptr [ESP + 0x94]         ; 005f5d1f
    FLD float ptr [ESP + 0x94]          ; 005f5d26
        ;   Label: LAB_005f5d26
    FCOMP double ptr [0x0065835d]       ; 005f5d2d | g_MathConstantNegativePi
    FNSTSW AX                           ; 005f5d33
    SAHF                                ; 005f5d35
    JNC 0x005f5d4c                      ; 005f5d36
        ;   XREF to: 005f5d4c (CONDITIONAL_JUMP)  ; LAB_005f5d4c
    FLD float ptr [ESP + 0x94]          ; 005f5d38
    FADD float ptr [0x00658365]         ; 005f5d3f | g_MathConstantTwoPi
    FSTP float ptr [ESP + 0x94]         ; 005f5d45
    FLD float ptr [ESP + 0x94]          ; 005f5d4c
        ;   Label: LAB_005f5d4c
    FCOMP double ptr [0x0065837d]       ; 005f5d53 | g_MathConstantPi
    FNSTSW AX                           ; 005f5d59
    SAHF                                ; 005f5d5b
    JBE 0x005f5d72                      ; 005f5d5c
        ;   XREF to: 005f5d72 (CONDITIONAL_JUMP)  ; LAB_005f5d72
    FLD float ptr [ESP + 0x94]          ; 005f5d5e
    FADD float ptr [0x00658385]         ; 005f5d65 | g_MathConstantNegativeTwoPi
    FSTP float ptr [ESP + 0x94]         ; 005f5d6b
    MOV EAX,dword ptr [ESP + 0x94]      ; 005f5d72
        ;   Label: LAB_005f5d72
    MOV dword ptr [ECX + 0x4],EAX       ; 005f5d79
    MOV EAX,ECX                         ; 005f5d7c
    MOV ESP,EBP                         ; 005f5d7e
    POP EBP                             ; 005f5d80
    POP EDI                             ; 005f5d81
    POP EBX                             ; 005f5d82
    RET                                 ; 005f5d83
    FLD1                                ; 005f5d84
        ;   Label: LAB_005f5d84
    FDIV double ptr [ESP + 0x20]        ; 005f5d86
    FSTP double ptr [ESP + 0x20]        ; 005f5d8a
    JMP 0x005f5c0d                      ; 005f5d8e
        ;   XREF to: 005f5c0d (UNCONDITIONAL_JUMP)  ; LAB_005f5c0d
    FLD1                                ; 005f5d93
        ;   Label: LAB_005f5d93
    FCOMP double ptr [ESP + 0x18]       ; 005f5d95
    FNSTSW AX                           ; 005f5d99
    SAHF                                ; 005f5d9b
    JA 0x005f5da9                       ; 005f5d9c
        ;   XREF to: 005f5da9 (CONDITIONAL_JUMP)  ; LAB_005f5da9
    MOV dword ptr [ECX],0x3fc90fdb      ; 005f5d9e
    JMP 0x005f5c8f                      ; 005f5da4
        ;   XREF to: 005f5c8f (UNCONDITIONAL_JUMP)  ; LAB_005f5c8f
    FLD double ptr [ESP + 0x18]         ; 005f5da9
        ;   Label: LAB_005f5da9
    FLD ST0                             ; 005f5dad
    CALL crt_math.c_asin_FUN_00600b94   ; 005f5daf
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLD ST1                             ; 005f5db4
    FMULP ST2                           ; 005f5db6
    FLD1                                ; 005f5db8
    FSUBRP ST2,ST0                      ; 005f5dba
    FXCH                                ; 005f5dbc
    FSQRT                               ; 005f5dbe
    FXCH                                ; 005f5dc0
    FST float ptr [ECX]                 ; 005f5dc2
    FXCH                                ; 005f5dc4
    FSTP double ptr [ESP + 0x50]        ; 005f5dc6
    FCOMP double ptr [0x0065835d]       ; 005f5dca | g_MathConstantNegativePi
    FNSTSW AX                           ; 005f5dd0
    SAHF                                ; 005f5dd2
    JNC 0x005f5ddf                      ; 005f5dd3
        ;   XREF to: 005f5ddf (CONDITIONAL_JUMP)  ; LAB_005f5ddf
    FLD float ptr [ECX]                 ; 005f5dd5
    FADD float ptr [0x00658365]         ; 005f5dd7 | g_MathConstantTwoPi
    FSTP float ptr [ECX]                ; 005f5ddd
    FLDZ                                ; 005f5ddf
        ;   Label: LAB_005f5ddf
    FCOMP double ptr [ESP + 0x50]       ; 005f5de1
    FNSTSW AX                           ; 005f5de5
    SAHF                                ; 005f5de7
    JNC 0x005f5c8f                      ; 005f5de8
        ;   XREF to: 005f5c8f (CONDITIONAL_JUMP)  ; LAB_005f5c8f
    FLD1                                ; 005f5dee
    FDIV double ptr [ESP + 0x50]        ; 005f5df0
    FLD double ptr [ESP + 0x28]         ; 005f5df4
    FLD float ptr [EDX + 0x28]          ; 005f5df8
    FMUL ST1                            ; 005f5dfb
    FLD float ptr [EDX + 0x20]          ; 005f5dfd
    FMULP ST2                           ; 005f5e00
    FXCH ST2                            ; 005f5e02
    FSTP double ptr [ESP + 0x70]        ; 005f5e04
    FMUL double ptr [ESP + 0x70]        ; 005f5e08
    FXCH                                ; 005f5e0c
    FMUL double ptr [ESP + 0x70]        ; 005f5e0e
    FXCH                                ; 005f5e12
    FSTP double ptr [ESP + 0x78]        ; 005f5e14
    MOV EAX,dword ptr [ESP + 0x78]      ; 005f5e18
    MOV dword ptr [ESP + 0x80],EAX      ; 005f5e1c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005f5e23
    FSTP double ptr [ESP + 0x48]        ; 005f5e27
    MOV dword ptr [ESP + 0x84],EAX      ; 005f5e2b
    MOV EAX,dword ptr [ESP + 0x48]      ; 005f5e32
    MOV dword ptr [ESP + 0x58],EAX      ; 005f5e36
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005f5e3a
    FLD double ptr [ESP + 0x78]         ; 005f5e3e
    MOV dword ptr [ESP + 0x5c],EAX      ; 005f5e42
    FCOMP double ptr [0x0065836d]       ; 005f5e46 | g_MathConstantSqrtTwoOverTwo
    FNSTSW AX                           ; 005f5e4c
    SAHF                                ; 005f5e4e
    JNC 0x005f6049                      ; 005f5e4f
        ;   XREF to: 005f6049 (CONDITIONAL_JUMP)  ; LAB_005f6049
    FLD double ptr [ESP + 0x78]         ; 005f5e55
    FCOMP double ptr [0x00658375]       ; 005f5e59 | g_MathConstantNegativeSqrtTwoOverTwo
    FNSTSW AX                           ; 005f5e5f
    SAHF                                ; 005f5e61
    JBE 0x005f6049                      ; 005f5e62
        ;   XREF to: 005f6049 (CONDITIONAL_JUMP)  ; LAB_005f6049
    FLD double ptr [ESP + 0x78]         ; 005f5e68
    CALL crt_math.c_asin_FUN_00600b94   ; 005f5e6c
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 005f5e71
    FXCH                                ; 005f5e73
    FSTP float ptr [ESP + 0x98]         ; 005f5e75
    FCOMP double ptr [ESP + 0x48]       ; 005f5e7c
    FNSTSW AX                           ; 005f5e80
    SAHF                                ; 005f5e82
    JBE 0x005f5e99                      ; 005f5e83
        ;   XREF to: 005f5e99 (CONDITIONAL_JUMP)  ; LAB_005f5e99
    FLD float ptr [ESP + 0x98]          ; 005f5e85
    FSUBR double ptr [0x0065837d]       ; 005f5e8c | g_MathConstantPi
    FSTP float ptr [ESP + 0x98]         ; 005f5e92
    FLD float ptr [ESP + 0x98]          ; 005f5e99
        ;   Label: LAB_005f5e99
    FCOMP double ptr [0x0065835d]       ; 005f5ea0 | g_MathConstantNegativePi
    FNSTSW AX                           ; 005f5ea6
    SAHF                                ; 005f5ea8
    JNC 0x005f5ebf                      ; 005f5ea9
        ;   XREF to: 005f5ebf (CONDITIONAL_JUMP)  ; LAB_005f5ebf
    FLD float ptr [ESP + 0x98]          ; 005f5eab
    FADD float ptr [0x00658365]         ; 005f5eb2 | g_MathConstantTwoPi
    FSTP float ptr [ESP + 0x98]         ; 005f5eb8
    FLD float ptr [ESP + 0x98]          ; 005f5ebf
        ;   Label: LAB_005f5ebf
    FCOMP double ptr [0x0065837d]       ; 005f5ec6 | g_MathConstantPi
    FNSTSW AX                           ; 005f5ecc
    SAHF                                ; 005f5ece
    JBE 0x005f5ee5                      ; 005f5ecf
        ;   XREF to: 005f5ee5 (CONDITIONAL_JUMP)  ; LAB_005f5ee5
    FLD float ptr [ESP + 0x98]          ; 005f5ed1
    FADD float ptr [0x00658385]         ; 005f5ed8 | g_MathConstantNegativeTwoPi
    FSTP float ptr [ESP + 0x98]         ; 005f5ede
    MOV EAX,dword ptr [ESP + 0x98]      ; 005f5ee5
        ;   Label: LAB_005f5ee5
    MOV dword ptr [ECX + 0x4],EAX       ; 005f5eec
    FLD float ptr [EDX + 0x4]           ; 005f5eef
    FMUL double ptr [ESP + 0x20]        ; 005f5ef2
    FLD float ptr [EDX + 0x14]          ; 005f5ef6
    FMUL double ptr [ESP + 0x10]        ; 005f5ef9
    FXCH                                ; 005f5efd
    FLD double ptr [ESP + 0x70]         ; 005f5eff
    FXCH                                ; 005f5f03
    FMUL ST1                            ; 005f5f05
    FXCH ST2                            ; 005f5f07
    FMULP                               ; 005f5f09
    FXCH                                ; 005f5f0b
    FSTP double ptr [ESP]               ; 005f5f0d
    MOV EAX,dword ptr [ESP]             ; 005f5f10
    MOV dword ptr [ESP + 0x88],EAX      ; 005f5f13
    MOV EAX,dword ptr [ESP + 0x4]       ; 005f5f1a
    FSTP double ptr [ESP + 0x38]        ; 005f5f1e
    MOV dword ptr [ESP + 0x8c],EAX      ; 005f5f22
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f5f29
    MOV dword ptr [ESP + 0x60],EAX      ; 005f5f2d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005f5f31
    FLD double ptr [ESP]                ; 005f5f35
    MOV dword ptr [ESP + 0x64],EAX      ; 005f5f38
    FCOMP double ptr [0x0065836d]       ; 005f5f3c | g_MathConstantSqrtTwoOverTwo
    FNSTSW AX                           ; 005f5f42
    SAHF                                ; 005f5f44
    JNC 0x005f60aa                      ; 005f5f45
        ;   XREF to: 005f60aa (CONDITIONAL_JUMP)  ; LAB_005f60aa
    FLD double ptr [ESP]                ; 005f5f4b
    FCOMP double ptr [0x00658375]       ; 005f5f4e | g_MathConstantNegativeSqrtTwoOverTwo
    FNSTSW AX                           ; 005f5f54
    SAHF                                ; 005f5f56
    JBE 0x005f60aa                      ; 005f5f57
        ;   XREF to: 005f60aa (CONDITIONAL_JUMP)  ; LAB_005f60aa
    FLD double ptr [ESP]                ; 005f5f5d
    CALL crt_math.c_asin_FUN_00600b94   ; 005f5f60
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 005f5f65
    FXCH                                ; 005f5f67
    FSTP float ptr [ESP + 0x90]         ; 005f5f69
    FCOMP double ptr [ESP + 0x38]       ; 005f5f70
    FNSTSW AX                           ; 005f5f74
    SAHF                                ; 005f5f76
    JBE 0x005f5f8d                      ; 005f5f77
        ;   XREF to: 005f5f8d (CONDITIONAL_JUMP)  ; LAB_005f5f8d
    FLD float ptr [ESP + 0x90]          ; 005f5f79
    FSUBR double ptr [0x0065837d]       ; 005f5f80 | g_MathConstantPi
    FSTP float ptr [ESP + 0x90]         ; 005f5f86
    FLD float ptr [ESP + 0x90]          ; 005f5f8d
        ;   Label: LAB_005f5f8d
    FCOMP double ptr [0x0065835d]       ; 005f5f94 | g_MathConstantNegativePi
    FNSTSW AX                           ; 005f5f9a
    SAHF                                ; 005f5f9c
    JNC 0x005f5fb3                      ; 005f5f9d
        ;   XREF to: 005f5fb3 (CONDITIONAL_JUMP)  ; LAB_005f5fb3
    FLD float ptr [ESP + 0x90]          ; 005f5f9f
    FADD float ptr [0x00658365]         ; 005f5fa6 | g_MathConstantTwoPi
    FSTP float ptr [ESP + 0x90]         ; 005f5fac
    FLD float ptr [ESP + 0x90]          ; 005f5fb3
        ;   Label: LAB_005f5fb3
    FCOMP double ptr [0x0065837d]       ; 005f5fba | g_MathConstantPi
    FNSTSW AX                           ; 005f5fc0
    SAHF                                ; 005f5fc2
    JBE 0x005f5fd9                      ; 005f5fc3
        ;   XREF to: 005f5fd9 (CONDITIONAL_JUMP)  ; LAB_005f5fd9
    FLD float ptr [ESP + 0x90]          ; 005f5fc5
    FADD float ptr [0x00658385]         ; 005f5fcc | g_MathConstantNegativeTwoPi
    FSTP float ptr [ESP + 0x90]         ; 005f5fd2
    MOV EAX,dword ptr [ESP + 0x90]      ; 005f5fd9
        ;   Label: LAB_005f5fd9
    MOV dword ptr [ECX + 0x8],EAX       ; 005f5fe0
    MOV EAX,ECX                         ; 005f5fe3
    MOV ESP,EBP                         ; 005f5fe5
    POP EBP                             ; 005f5fe7
    POP EDI                             ; 005f5fe8
    POP EBX                             ; 005f5fe9
    RET                                 ; 005f5fea
    FLD double ptr [ESP + 0x68]         ; 005f5feb
        ;   Label: LAB_005f5feb
    FCOMP double ptr [0x00658355]       ; 005f5fef | g_MathConstantNegativeOne
    FNSTSW AX                           ; 005f5ff5
    SAHF                                ; 005f5ff7
    JA 0x005f6021                       ; 005f5ff8
        ;   XREF to: 005f6021 (CONDITIONAL_JUMP)  ; LAB_005f6021
    MOV dword ptr [ESP + 0x94],0x40490fdb ; 005f5ffa
    FLDZ                                ; 005f6005
        ;   Label: LAB_005f6005
    FCOMP double ptr [ESP + 0x30]       ; 005f6007
    FNSTSW AX                           ; 005f600b
    SAHF                                ; 005f600d
    JBE 0x005f5d26                      ; 005f600e
        ;   XREF to: 005f5d26 (CONDITIONAL_JUMP)  ; LAB_005f5d26
    XOR byte ptr [ESP + 0x97],0x80      ; 005f6014
    JMP 0x005f5d26                      ; 005f601c
        ;   XREF to: 005f5d26 (UNCONDITIONAL_JUMP)  ; LAB_005f5d26
    FLD1                                ; 005f6021
        ;   Label: LAB_005f6021
    FCOMP double ptr [ESP + 0x68]       ; 005f6023
    FNSTSW AX                           ; 005f6027
    SAHF                                ; 005f6029
    JA 0x005f6037                       ; 005f602a
        ;   XREF to: 005f6037 (CONDITIONAL_JUMP)  ; LAB_005f6037
    XOR EDX,EDX                         ; 005f602c
    MOV dword ptr [ESP + 0x94],EDX      ; 005f602e
    JMP 0x005f6005                      ; 005f6035
        ;   XREF to: 005f6005 (UNCONDITIONAL_JUMP)  ; LAB_005f6005
    FLD double ptr [ESP + 0x68]         ; 005f6037
        ;   Label: LAB_005f6037
    CALL crt_math.c_acos_FUN_00600162   ; 005f603b
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x94]         ; 005f6040
    JMP 0x005f6005                      ; 005f6047
        ;   XREF to: 005f6005 (UNCONDITIONAL_JUMP)  ; LAB_005f6005
    FLD double ptr [ESP + 0x58]         ; 005f6049
        ;   Label: LAB_005f6049
    FCOMP double ptr [0x00658355]       ; 005f604d | g_MathConstantNegativeOne
    FNSTSW AX                           ; 005f6053
    SAHF                                ; 005f6055
    JA 0x005f6082                       ; 005f6056
        ;   XREF to: 005f6082 (CONDITIONAL_JUMP)  ; LAB_005f6082
    MOV dword ptr [ESP + 0x98],0x40490fdb ; 005f6058
    FLDZ                                ; 005f6063
        ;   Label: LAB_005f6063
    FCOMP double ptr [ESP + 0x80]       ; 005f6065
    FNSTSW AX                           ; 005f606c
    SAHF                                ; 005f606e
    JBE 0x005f5e99                      ; 005f606f
        ;   XREF to: 005f5e99 (CONDITIONAL_JUMP)  ; LAB_005f5e99
    XOR byte ptr [ESP + 0x9b],0x80      ; 005f6075
    JMP 0x005f5e99                      ; 005f607d
        ;   XREF to: 005f5e99 (UNCONDITIONAL_JUMP)  ; LAB_005f5e99
    FLD1                                ; 005f6082
        ;   Label: LAB_005f6082
    FCOMP double ptr [ESP + 0x58]       ; 005f6084
    FNSTSW AX                           ; 005f6088
    SAHF                                ; 005f608a
    JA 0x005f6098                       ; 005f608b
        ;   XREF to: 005f6098 (CONDITIONAL_JUMP)  ; LAB_005f6098
    XOR EBX,EBX                         ; 005f608d
    MOV dword ptr [ESP + 0x98],EBX      ; 005f608f
    JMP 0x005f6063                      ; 005f6096
        ;   XREF to: 005f6063 (UNCONDITIONAL_JUMP)  ; LAB_005f6063
    FLD double ptr [ESP + 0x58]         ; 005f6098
        ;   Label: LAB_005f6098
    CALL crt_math.c_acos_FUN_00600162   ; 005f609c
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x98]         ; 005f60a1
    JMP 0x005f6063                      ; 005f60a8
        ;   XREF to: 005f6063 (UNCONDITIONAL_JUMP)  ; LAB_005f6063
    FLD double ptr [ESP + 0x60]         ; 005f60aa
        ;   Label: LAB_005f60aa
    FCOMP double ptr [0x00658355]       ; 005f60ae | g_MathConstantNegativeOne
    FNSTSW AX                           ; 005f60b4
    SAHF                                ; 005f60b6
    JA 0x005f60e3                       ; 005f60b7
        ;   XREF to: 005f60e3 (CONDITIONAL_JUMP)  ; LAB_005f60e3
    MOV dword ptr [ESP + 0x90],0x40490fdb ; 005f60b9
    FLDZ                                ; 005f60c4
        ;   Label: LAB_005f60c4
    FCOMP double ptr [ESP + 0x88]       ; 005f60c6
    FNSTSW AX                           ; 005f60cd
    SAHF                                ; 005f60cf
    JBE 0x005f5f8d                      ; 005f60d0
        ;   XREF to: 005f5f8d (CONDITIONAL_JUMP)  ; LAB_005f5f8d
    XOR byte ptr [ESP + 0x93],0x80      ; 005f60d6
    JMP 0x005f5f8d                      ; 005f60de
        ;   XREF to: 005f5f8d (UNCONDITIONAL_JUMP)  ; LAB_005f5f8d
    FLD1                                ; 005f60e3
        ;   Label: LAB_005f60e3
    FCOMP double ptr [ESP + 0x60]       ; 005f60e5
    FNSTSW AX                           ; 005f60e9
    SAHF                                ; 005f60eb
    JA 0x005f60f9                       ; 005f60ec
        ;   XREF to: 005f60f9 (CONDITIONAL_JUMP)  ; LAB_005f60f9
    XOR EDI,EDI                         ; 005f60ee
    MOV dword ptr [ESP + 0x90],EDI      ; 005f60f0
    JMP 0x005f60c4                      ; 005f60f7
        ;   XREF to: 005f60c4 (UNCONDITIONAL_JUMP)  ; LAB_005f60c4
    FLD double ptr [ESP + 0x60]         ; 005f60f9
        ;   Label: LAB_005f60f9
    CALL crt_math.c_acos_FUN_00600162   ; 005f60fd
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x90]         ; 005f6102
    JMP 0x005f60c4                      ; 005f6109
        ;   XREF to: 005f60c4 (UNCONDITIONAL_JUMP)  ; LAB_005f60c4

