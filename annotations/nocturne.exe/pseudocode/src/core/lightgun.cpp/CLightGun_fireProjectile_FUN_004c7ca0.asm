; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightgun_cpp_CLightGun_fireProjectile_FUN_004c7ca0(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
;
; Referenced Globals:
;   double DOUBLE_00587aad = 18
;   double DOUBLE_00587ab5 = 0.100000000000000
;   double DOUBLE_00587abd = 0.015625
;   float FLOAT_0059fd64 = 112
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7ca0
        ;   Label: core_lightgun.cpp_CLightGun_fireProjectile_FUN_004c7ca0
    PUSH ESI                            ; 004c7ca1
    PUSH EDI                            ; 004c7ca2
    PUSH EBP                            ; 004c7ca3
    MOV EBP,ESP                         ; 004c7ca4
    SUB ESP,0x8c                        ; 004c7ca6
    AND ESP,0xfffffff8                  ; 004c7cac
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c7caf
    MOV EDX,dword ptr [0x005ae704]      ; 004c7cb2 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004c7cb8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004c7cb9
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c7cbe
    TEST EAX,EAX                        ; 004c7cc1
    JZ 0x004c7cd7                       ; 004c7cc3
        ;   XREF to: 004c7cd7 (CONDITIONAL_JUMP)  ; LAB_004c7cd7
    LEA EAX,[EAX]                       ; 004c7cc5
    LEA EDX,[EDX]                       ; 004c7ccb
    MOV EBX,EBX                         ; 004c7cce
    MOV ESP,EBP                         ; 004c7cd0
        ;   Label: LAB_004c7cd0
    POP EBP                             ; 004c7cd2
    POP EDI                             ; 004c7cd3
    POP ESI                             ; 004c7cd4
    POP EBX                             ; 004c7cd5
    RET                                 ; 004c7cd6
    LEA EAX,[ESP + 0xc]                 ; 004c7cd7
        ;   Label: LAB_004c7cd7
    PUSH EAX                            ; 004c7cdb
    MOV EBX,dword ptr [ESI + 0x14c]     ; 004c7cdc
    PUSH ESI                            ; 004c7ce2
    CALL dword ptr [EBX + 0xd8]         ; 004c7ce3
    ADD ESP,0x8                         ; 004c7ce9
    PUSH EAX                            ; 004c7cec
    LEA EAX,[ESP + 0x58]                ; 004c7ced
    PUSH EAX                            ; 004c7cf1
    PUSH ESI                            ; 004c7cf2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004c7cf3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004c7cf8
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004c7cfb
    MOV dword ptr [ESP + 0x44],EAX      ; 004c7d01
    LEA EAX,[ESP + 0x3c]                ; 004c7d05
    PUSH EAX                            ; 004c7d09
    LEA EAX,[ESP + 0x7c]                ; 004c7d0a
    PUSH EAX                            ; 004c7d0e
    LEA EBX,[ESP + 0x74]                ; 004c7d0f
    XOR ECX,ECX                         ; 004c7d13
    PUSH ESI                            ; 004c7d15
    MOV dword ptr [ESP + 0x48],ECX      ; 004c7d16
    MOV dword ptr [ESP + 0x4c],ECX      ; 004c7d1a
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004c7d1e
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004c7d23
    LEA EAX,[ESP + 0x48]                ; 004c7d26
    FLD float ptr [ESP + 0x54]          ; 004c7d2a
    FLD float ptr [ESP + 0x58]          ; 004c7d2e
    FLD float ptr [ESP + 0x5c]          ; 004c7d32
    FLD float ptr [ESP + 0x78]          ; 004c7d36
    FLD float ptr [ESP + 0x7c]          ; 004c7d3a
    FLD float ptr [ESP + 0x80]          ; 004c7d3e
    FXCH ST2                            ; 004c7d45
    FCHS                                ; 004c7d47
    FXCH                                ; 004c7d49
    FCHS                                ; 004c7d4b
    FXCH ST2                            ; 004c7d4d
    FCHS                                ; 004c7d4f
    FXCH                                ; 004c7d51
    FSTP float ptr [ESP + 0x48]         ; 004c7d53
    FXCH                                ; 004c7d57
    FSTP float ptr [ESP + 0x4c]         ; 004c7d59
    FSTP float ptr [ESP + 0x50]         ; 004c7d5d
    FXCH ST2                            ; 004c7d61
    FADD float ptr [ESP + 0x78]         ; 004c7d63
    FXCH                                ; 004c7d67
    FADD float ptr [ESP + 0x7c]         ; 004c7d69
    FXCH ST2                            ; 004c7d6d
    FADD float ptr [ESP + 0x80]         ; 004c7d6f
    FXCH                                ; 004c7d76
    FSTP float ptr [ESP + 0x60]         ; 004c7d78
    FXCH                                ; 004c7d7c
    FSTP float ptr [ESP + 0x64]         ; 004c7d7e
    FSTP float ptr [ESP + 0x68]         ; 004c7d82
    CMP EBX,EAX                         ; 004c7d86
    JZ 0x004c7da2                       ; 004c7d88
        ;   XREF to: 004c7da2 (CONDITIONAL_JUMP)  ; LAB_004c7da2
    MOV EAX,dword ptr [ESP + 0x48]      ; 004c7d8a
    MOV dword ptr [ESP + 0x6c],EAX      ; 004c7d8e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004c7d92
    MOV dword ptr [ESP + 0x70],EAX      ; 004c7d96
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c7d9a
    MOV dword ptr [ESP + 0x74],EAX      ; 004c7d9e
    FLD float ptr [ESP + 0x70]          ; 004c7da2
        ;   Label: LAB_004c7da2
    FMUL ST0                            ; 004c7da6
    FLD float ptr [ESP + 0x6c]          ; 004c7da8
    FMUL ST0                            ; 004c7dac
    FADDP                               ; 004c7dae
    FLD float ptr [ESP + 0x74]          ; 004c7db0
    FMUL ST0                            ; 004c7db4
    FADDP                               ; 004c7db6
    FSQRT                               ; 004c7db8
    FST float ptr [ESP]                 ; 004c7dba
    FLDZ                                ; 004c7dbd
    FCOMPP                              ; 004c7dbf
    FNSTSW AX                           ; 004c7dc1
    SAHF                                ; 004c7dc3
    JNC 0x004c7fd5                      ; 004c7dc4
        ;   XREF to: 004c7fd5 (CONDITIONAL_JUMP)  ; LAB_004c7fd5
    FLD1                                ; 004c7dca
    FLD float ptr [ESP + 0x6c]          ; 004c7dcc
    FXCH                                ; 004c7dd0
    FDIV float ptr [ESP]                ; 004c7dd2
    FXCH                                ; 004c7dd5
    FMUL ST1                            ; 004c7dd7
    FLD float ptr [ESP + 0x70]          ; 004c7dd9
    FMUL ST2                            ; 004c7ddd
    FLD float ptr [ESP + 0x74]          ; 004c7ddf
    FMULP ST3                           ; 004c7de3
    FXCH                                ; 004c7de5
    FSTP float ptr [ESP + 0x6c]         ; 004c7de7
    FSTP float ptr [ESP + 0x70]         ; 004c7deb
    FSTP float ptr [ESP + 0x74]         ; 004c7def
    FLD float ptr [0x0059fd64]          ; 004c7df3 | FLOAT_0059fd64
        ;   Label: LAB_004c7df3
    FDIVR double ptr [0x00587aad]       ; 004c7df9 | DOUBLE_00587aad
    FLD1                                ; 004c7dff
    FPATAN                              ; 004c7e01
    FSTP float ptr [ESP + 0x4]          ; 004c7e03
    PUSH dword ptr [ESP + 0x4]          ; 004c7e07
    PUSH 0xb4                           ; 004c7e0b
    PUSH 0xff                           ; 004c7e10
    PUSH 0xff                           ; 004c7e15
    LEA EAX,[ESP + 0x70]                ; 004c7e1a
    PUSH 0x3f800000                     ; 004c7e1e
    PUSH EAX                            ; 004c7e23
    LEA EAX,[ESP + 0x6c]                ; 004c7e24
    PUSH EAX                            ; 004c7e28
    MOV ECX,dword ptr [0x005b80f0]      ; 004c7e29 | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 004c7e2f
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0 ; 004c7e30
        ;   XREF to: 0048b3e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    MOV EBX,dword ptr [ESI + 0x580]     ; 004c7e35
    ADD ESP,0x20                        ; 004c7e3b
    TEST EBX,EBX                        ; 004c7e3e
    JZ 0x004c7cd0                       ; 004c7e40
        ;   XREF to: 004c7cd0 (CONDITIONAL_JUMP)  ; LAB_004c7cd0
    MOV EBX,0x1                         ; 004c7e46
    MOV dword ptr [ESI + 0x580],0x0     ; 004c7e4b
    FLD float ptr [ESP + 0x4]           ; 004c7e55
        ;   Label: LAB_004c7e55
    FMUL double ptr [0x00587ab5]        ; 004c7e59 | DOUBLE_00587ab5
    MOV dword ptr [ESP + 0x88],EBX      ; 004c7e5f
    FILD dword ptr [ESP + 0x88]         ; 004c7e66
    FMULP                               ; 004c7e6d
    SUB ESP,0x4                         ; 004c7e6f
    FSTP float ptr [ESP]                ; 004c7e72
    PUSH 0xb4                           ; 004c7e75
    PUSH 0xff                           ; 004c7e7a
    PUSH 0xff                           ; 004c7e7f
    LEA EAX,[ESP + 0x70]                ; 004c7e84
    PUSH 0x3f800000                     ; 004c7e88
    PUSH EAX                            ; 004c7e8d
    LEA EAX,[ESP + 0x6c]                ; 004c7e8e
    PUSH EAX                            ; 004c7e92
    MOV EDI,dword ptr [0x005b80f0]      ; 004c7e93 | g_CFireEffect_PTR_005b80f0
    PUSH EDI                            ; 004c7e99
    INC EBX                             ; 004c7e9a
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0 ; 004c7e9b
        ;   XREF to: 0048b3e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 004c7ea0
    CMP EBX,0xa                         ; 004c7ea3
    JL 0x004c7e55                       ; 004c7ea6
        ;   XREF to: 004c7e55 (CONDITIONAL_JUMP)  ; LAB_004c7e55
    FLD float ptr [ESP + 0x60]          ; 004c7ea8
    FLD float ptr [ESP + 0x64]          ; 004c7eac
    FSUB float ptr [ESP + 0x58]         ; 004c7eb0
    FXCH                                ; 004c7eb4
    FSUB float ptr [ESP + 0x54]         ; 004c7eb6
    FXCH                                ; 004c7eba
    FST float ptr [ESP + 0x34]          ; 004c7ebc
    FMUL float ptr [ESP + 0x34]         ; 004c7ec0
    FXCH                                ; 004c7ec4
    FST float ptr [ESP + 0x30]          ; 004c7ec6
    FMUL float ptr [ESP + 0x30]         ; 004c7eca
    FLD float ptr [ESP + 0x68]          ; 004c7ece
    MOV EAX,dword ptr [ESP + 0x54]      ; 004c7ed2
    FSUB float ptr [ESP + 0x5c]         ; 004c7ed6
    MOV dword ptr [ESP + 0x18],EAX      ; 004c7eda
    FSTP float ptr [ESP + 0x38]         ; 004c7ede
    FADDP                               ; 004c7ee2
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c7ee4
    FLD float ptr [ESP + 0x38]          ; 004c7ee8
    FMUL ST0                            ; 004c7eec
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c7eee
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c7ef2
    FADDP                               ; 004c7ef6
    MOV dword ptr [ESP + 0x20],EAX      ; 004c7ef8
    FSQRT                               ; 004c7efc
    FST float ptr [ESP + 0x8]           ; 004c7efe
    FLDZ                                ; 004c7f02
    FCOMPP                              ; 004c7f04
    FNSTSW AX                           ; 004c7f06
    SAHF                                ; 004c7f08
    JC 0x004c7fe8                       ; 004c7f09
        ;   XREF to: 004c7fe8 (CONDITIONAL_JUMP)  ; LAB_004c7fe8
    XOR EAX,EAX                         ; 004c7f0f
    MOV dword ptr [ESP + 0x34],EAX      ; 004c7f11
    MOV dword ptr [ESP + 0x30],EAX      ; 004c7f15
    MOV dword ptr [ESP + 0x38],EAX      ; 004c7f19
    FLD float ptr [ESI + 0x584]         ; 004c7f1d
        ;   Label: LAB_004c7f1d
    FMUL double ptr [0x00587abd]        ; 004c7f23 | DOUBLE_00587abd
    FLD float ptr [ESP + 0x30]          ; 004c7f29
    FXCH                                ; 004c7f2d
    FSTP float ptr [ESP + 0x84]         ; 004c7f2f
    FMUL float ptr [ESP + 0x84]         ; 004c7f36
    FLD float ptr [ESP + 0x34]          ; 004c7f3d
    FMUL float ptr [ESP + 0x84]         ; 004c7f41
    FLD float ptr [ESP + 0x38]          ; 004c7f48
    FMUL float ptr [ESP + 0x84]         ; 004c7f4c
    LEA EAX,[ESP + 0x24]                ; 004c7f53
    LEA EBX,[ESP + 0x30]                ; 004c7f57
    FXCH ST2                            ; 004c7f5b
    FSTP float ptr [ESP + 0x24]         ; 004c7f5d
    FSTP float ptr [ESP + 0x28]         ; 004c7f61
    FSTP float ptr [ESP + 0x2c]         ; 004c7f65
    CMP EBX,EAX                         ; 004c7f69
    JNZ 0x004c8017                      ; 004c7f6b
        ;   XREF to: 004c8017 (CONDITIONAL_JUMP)  ; LAB_004c8017
    XOR EBX,EBX                         ; 004c7f71
        ;   Label: LAB_004c7f71
    XOR ESI,ESI                         ; 004c7f73
    PUSH 0x3333                         ; 004c7f75
        ;   Label: LAB_004c7f75
    PUSH ESI                            ; 004c7f7a
    PUSH 0x4000                         ; 004c7f7b
    PUSH 0x8000                         ; 004c7f80
    PUSH ESI                            ; 004c7f85
    LEA EAX,[ESP + 0x2c]                ; 004c7f86
    PUSH EAX                            ; 004c7f8a
    MOV EDI,dword ptr [0x005b80f0]      ; 004c7f8b | g_CFireEffect_PTR_005b80f0
    PUSH EDI                            ; 004c7f91
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 004c7f92
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004c7f97
    INC EBX                             ; 004c7f9a
    FLD float ptr [ESP + 0x18]          ; 004c7f9b
    FLD float ptr [ESP + 0x1c]          ; 004c7f9f
    FLD float ptr [ESP + 0x20]          ; 004c7fa3
    FXCH ST2                            ; 004c7fa7
    FADD float ptr [ESP + 0x30]         ; 004c7fa9
    FXCH                                ; 004c7fad
    FADD float ptr [ESP + 0x34]         ; 004c7faf
    FXCH ST2                            ; 004c7fb3
    FADD float ptr [ESP + 0x38]         ; 004c7fb5
    FXCH                                ; 004c7fb9
    FSTP float ptr [ESP + 0x18]         ; 004c7fbb
    FXCH                                ; 004c7fbf
    FSTP float ptr [ESP + 0x1c]         ; 004c7fc1
    FSTP float ptr [ESP + 0x20]         ; 004c7fc5
    CMP EBX,0x40                        ; 004c7fc9
    JL 0x004c7f75                       ; 004c7fcc
        ;   XREF to: 004c7f75 (CONDITIONAL_JUMP)  ; LAB_004c7f75
    MOV ESP,EBP                         ; 004c7fce
    POP EBP                             ; 004c7fd0
    POP EDI                             ; 004c7fd1
    POP ESI                             ; 004c7fd2
    POP EBX                             ; 004c7fd3
    RET                                 ; 004c7fd4
    XOR EDI,EDI                         ; 004c7fd5
        ;   Label: LAB_004c7fd5
    MOV dword ptr [ESP + 0x70],EDI      ; 004c7fd7
    MOV dword ptr [ESP + 0x6c],EDI      ; 004c7fdb
    MOV dword ptr [ESP + 0x74],EDI      ; 004c7fdf
    JMP 0x004c7df3                      ; 004c7fe3
        ;   XREF to: 004c7df3 (UNCONDITIONAL_JUMP)  ; LAB_004c7df3
    FLD1                                ; 004c7fe8
        ;   Label: LAB_004c7fe8
    FLD float ptr [ESP + 0x30]          ; 004c7fea
    FXCH                                ; 004c7fee
    FDIV float ptr [ESP + 0x8]          ; 004c7ff0
    FXCH                                ; 004c7ff4
    FMUL ST1                            ; 004c7ff6
    FLD float ptr [ESP + 0x34]          ; 004c7ff8
    FMUL ST2                            ; 004c7ffc
    FLD float ptr [ESP + 0x38]          ; 004c7ffe
    FMULP ST3                           ; 004c8002
    FXCH                                ; 004c8004
    FSTP float ptr [ESP + 0x30]         ; 004c8006
    FSTP float ptr [ESP + 0x34]         ; 004c800a
    FSTP float ptr [ESP + 0x38]         ; 004c800e
    JMP 0x004c7f1d                      ; 004c8012
        ;   XREF to: 004c7f1d (UNCONDITIONAL_JUMP)  ; LAB_004c7f1d
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c8017
        ;   Label: LAB_004c8017
    MOV dword ptr [ESP + 0x30],EAX      ; 004c801b
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c801f
    MOV dword ptr [ESP + 0x34],EAX      ; 004c8023
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c8027
    MOV dword ptr [ESP + 0x38],EAX      ; 004c802b
    JMP 0x004c7f71                      ; 004c802f
        ;   XREF to: 004c7f71 (UNCONDITIONAL_JUMP)  ; LAB_004c7f71

