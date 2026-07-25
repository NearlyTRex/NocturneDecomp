; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(int param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   core_pendulum.cpp_CPendulum_process_FUN_004f3a20 at 004f3b43
;
; Referenced Globals:
;   float FLOAT_0058d01c = 0.5
;   undefined4 DAT_005a1228
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2e60
        ;   Label: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60
    PUSH ESI                            ; 004f2e61
    PUSH EDI                            ; 004f2e62
    PUSH EBP                            ; 004f2e63
    MOV EBP,ESP                         ; 004f2e64
    SUB ESP,0xfc                        ; 004f2e66
    AND ESP,0xfffffff8                  ; 004f2e6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f2e6f
    MOV EAX,ESP                         ; 004f2e72
    PUSH EAX                            ; 004f2e74
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 004f2e75
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990()
    ADD ESP,0x4                         ; 004f2e7a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004f2e7d
    TEST EDX,EDX                        ; 004f2e80
    JNZ 0x004f2ea6                      ; 004f2e82
        ;   XREF to: 004f2ea6 (CONDITIONAL_JUMP)  ; LAB_004f2ea6
    MOV ESI,dword ptr [EBP + 0x20]      ; 004f2e84
        ;   Label: LAB_004f2e84
    TEST ESI,ESI                        ; 004f2e87
    JZ 0x004f2ebc                       ; 004f2e89
        ;   XREF to: 004f2ebc (CONDITIONAL_JUMP)  ; LAB_004f2ebc
    PUSH ESI                            ; 004f2e8b
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004f2e8c
    CALL dword ptr [EAX + 0x104]        ; 004f2e92
    ADD ESP,0x4                         ; 004f2e98
    TEST EAX,EAX                        ; 004f2e9b
    JZ 0x004f2ebc                       ; 004f2e9d
        ;   XREF to: 004f2ebc (CONDITIONAL_JUMP)  ; LAB_004f2ebc
    MOV ESP,EBP                         ; 004f2e9f
        ;   Label: LAB_004f2e9f
    POP EBP                             ; 004f2ea1
    POP EDI                             ; 004f2ea2
    POP ESI                             ; 004f2ea3
    POP EBX                             ; 004f2ea4
    RET                                 ; 004f2ea5
    PUSH EDX                            ; 004f2ea6
        ;   Label: LAB_004f2ea6
    MOV EAX,dword ptr [EDX + 0x14c]     ; 004f2ea7
    CALL dword ptr [EAX + 0x104]        ; 004f2ead
    ADD ESP,0x4                         ; 004f2eb3
    TEST EAX,EAX                        ; 004f2eb6
    JNZ 0x004f2e9f                      ; 004f2eb8
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    JMP 0x004f2e84                      ; 004f2eba
        ;   XREF to: 004f2e84 (UNCONDITIONAL_JUMP)  ; LAB_004f2e84
    MOV EDX,ESP                         ; 004f2ebc
        ;   Label: LAB_004f2ebc
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f2ebe
    PUSH EDX                            ; 004f2ec1
    MOV EDX,dword ptr [EBP + 0x18]      ; 004f2ec2
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004f2ec5
    PUSH EDX                            ; 004f2ecb
    CALL dword ptr [EAX + 0x34]         ; 004f2ecc
    ADD ESP,0x8                         ; 004f2ecf
    CMP EAX,0x2                         ; 004f2ed2
    JNZ 0x004f2e9f                      ; 004f2ed5
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    LEA EAX,[ESP + 0x58]                ; 004f2ed7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004f2edb
    PUSH EAX                            ; 004f2ede
    MOV ECX,dword ptr [EBP + 0x18]      ; 004f2edf
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004f2ee2
    PUSH ECX                            ; 004f2ee8
    CALL dword ptr [EDX + 0x14]         ; 004f2ee9
    LEA EDX,[EAX + 0xc]                 ; 004f2eec
    FLD float ptr [EAX]                 ; 004f2eef
    FADD float ptr [EDX]                ; 004f2ef1
    ADD ESP,0x8                         ; 004f2ef3
    FST float ptr [ESP + 0xb8]          ; 004f2ef6
    FLD float ptr [EAX + 0x4]           ; 004f2efd
    FADD float ptr [EDX + 0x4]          ; 004f2f00
    FXCH                                ; 004f2f03
    FLD float ptr [0x0058d01c]          ; 004f2f05 | FLOAT_0058d01c
    FXCH                                ; 004f2f0b
    FMUL ST1                            ; 004f2f0d
    FXCH ST2                            ; 004f2f0f
    FST float ptr [ESP + 0xbc]          ; 004f2f11
    FLD float ptr [EAX + 0x8]           ; 004f2f18
    FADD float ptr [EDX + 0x8]          ; 004f2f1b
    FXCH                                ; 004f2f1e
    FMUL ST2                            ; 004f2f20
    FXCH                                ; 004f2f22
    FST float ptr [ESP + 0xc0]          ; 004f2f24
    FMULP ST2                           ; 004f2f2b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f2f2d
    FXCH ST2                            ; 004f2f30
    FSTP float ptr [ESP + 0xdc]         ; 004f2f32
    FXCH                                ; 004f2f39
    FSTP float ptr [ESP + 0xe0]         ; 004f2f3b
    FSTP float ptr [ESP + 0xe4]         ; 004f2f42
    FLD float ptr [EAX + 0x20]          ; 004f2f49
    FADD float ptr [ESP + 0xdc]         ; 004f2f4c
    FSTP float ptr [ESP + 0x94]         ; 004f2f53
    FLD float ptr [EAX + 0x24]          ; 004f2f5a
    FADD float ptr [ESP + 0xe0]         ; 004f2f5d
    FLD float ptr [ESP + 0x94]          ; 004f2f64
    FXCH                                ; 004f2f6b
    FSTP float ptr [ESP + 0x98]         ; 004f2f6d
    FLD float ptr [EAX + 0x28]          ; 004f2f74
    FADD float ptr [ESP + 0xe4]         ; 004f2f77
    LEA EAX,[EBX + 0x20]                ; 004f2f7e
    FSTP float ptr [ESP + 0x9c]         ; 004f2f81
    FSUB float ptr [EAX]                ; 004f2f88
    FLD float ptr [ESP + 0x98]          ; 004f2f8a
    FXCH                                ; 004f2f91
    FSTP float ptr [ESP + 0xa0]         ; 004f2f93
    FSUB float ptr [EAX + 0x4]          ; 004f2f9a
    FLD float ptr [ESP + 0x9c]          ; 004f2f9d
    FXCH                                ; 004f2fa4
    FSTP float ptr [ESP + 0xa4]         ; 004f2fa6
    FSUB float ptr [EAX + 0x8]          ; 004f2fad
    LEA EAX,[ESP + 0xa0]                ; 004f2fb0
    PUSH EAX                            ; 004f2fb7
    LEA EAX,[ESP + 0xd4]                ; 004f2fb8
    PUSH EAX                            ; 004f2fbf
    LEA EAX,[EBX + 0x3c]                ; 004f2fc0
    PUSH EAX                            ; 004f2fc3
    FSTP float ptr [ESP + 0xb4]         ; 004f2fc4
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004f2fcb
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    MOV EDX,EAX                         ; 004f2fd0
    LEA EAX,[ESP + 0xa0]                ; 004f2fd2
    ADD ESP,0xc                         ; 004f2fd9
    CMP EAX,EDX                         ; 004f2fdc
    JZ 0x004f2ffd                       ; 004f2fde
        ;   XREF to: 004f2ffd (CONDITIONAL_JUMP)  ; LAB_004f2ffd
    MOV EAX,dword ptr [EDX]             ; 004f2fe0
    MOV dword ptr [ESP + 0x94],EAX      ; 004f2fe2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f2fe9
    MOV dword ptr [ESP + 0x98],EAX      ; 004f2fec
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f2ff3
    MOV dword ptr [ESP + 0x9c],EAX      ; 004f2ff6
    LEA EAX,[ESP + 0x28]                ; 004f2ffd
        ;   Label: LAB_004f2ffd
    PUSH EAX                            ; 004f3001
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004f3002
    PUSH EBX                            ; 004f3008
    CALL dword ptr [EDX + 0x14]         ; 004f3009
    FLD float ptr [EAX]                 ; 004f300c
    ADD ESP,0x8                         ; 004f300e
    MOV EDX,EAX                         ; 004f3011
    FCOMP float ptr [ESP + 0x94]        ; 004f3013
    FNSTSW AX                           ; 004f301a
    SAHF                                ; 004f301c
    JA 0x004f2e9f                       ; 004f301d
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    FLD float ptr [EDX + 0x4]           ; 004f3023
    FCOMP float ptr [ESP + 0x98]        ; 004f3026
    FNSTSW AX                           ; 004f302d
    SAHF                                ; 004f302f
    JA 0x004f2e9f                       ; 004f3030
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    FLD float ptr [EDX + 0x8]           ; 004f3036
    FCOMP float ptr [ESP + 0x9c]        ; 004f3039
    FNSTSW AX                           ; 004f3040
    SAHF                                ; 004f3042
    JA 0x004f2e9f                       ; 004f3043
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    FLD float ptr [EDX + 0xc]           ; 004f3049
    FCOMP float ptr [ESP + 0x94]        ; 004f304c
    FNSTSW AX                           ; 004f3053
    SAHF                                ; 004f3055
    JC 0x004f2e9f                       ; 004f3056
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    FLD float ptr [EDX + 0x10]          ; 004f305c
    FCOMP float ptr [ESP + 0x98]        ; 004f305f
    FNSTSW AX                           ; 004f3066
    SAHF                                ; 004f3068
    JC 0x004f2e9f                       ; 004f3069
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    FLD float ptr [EDX + 0x14]          ; 004f306f
    FCOMP float ptr [ESP + 0x9c]        ; 004f3072
    FNSTSW AX                           ; 004f3079
    SAHF                                ; 004f307b
    JC 0x004f2e9f                       ; 004f307c
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    LEA EAX,[EBX + 0x150]               ; 004f3082
    PUSH EAX                            ; 004f3088
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004f3089
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 004f308e
    FLD float ptr [ESP + 0x1c]          ; 004f3091
    FMUL ST0                            ; 004f3095
    XOR EDI,EDI                         ; 004f3097
    MOV EDX,dword ptr [EAX + 0x104]     ; 004f3099
    MOV ESI,dword ptr [EAX + 0x10c]     ; 004f309f
    MOV dword ptr [ESP + 0xf0],EDX      ; 004f30a5
    MOV dword ptr [ESP + 0xf4],EDI      ; 004f30ac
    FSTP float ptr [ESP + 0xec]         ; 004f30b3
    TEST EDX,EDX                        ; 004f30ba
    JLE 0x004f2e9f                      ; 004f30bc
        ;   XREF to: 004f2e9f (CONDITIONAL_JUMP)  ; LAB_004f2e9f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f30c2
    LEA EDI,[EBX + 0x20]                ; 004f30c5
    ADD EAX,0x20                        ; 004f30c8
    ADD EBX,0x3c                        ; 004f30cb
    MOV dword ptr [ESP + 0xf8],EAX      ; 004f30ce
    MOV dword ptr [ESP + 0xe8],EBX      ; 004f30d5
    LEA EBX,[ESP + 0x70]                ; 004f30dc
        ;   Label: LAB_004f30dc
    MOV EAX,ESI                         ; 004f30e0
    FILD dword ptr [EAX]                ; 004f30e2
    FMUL float ptr [0x005a1228]         ; 004f30e4 | DAT_005a1228
    FSTP float ptr [EBX]                ; 004f30ea
    FILD dword ptr [EAX + 0x4]          ; 004f30ec
    FMUL float ptr [0x005a1228]         ; 004f30ef | DAT_005a1228
    FSTP float ptr [EBX + 0x4]          ; 004f30f5
    FILD dword ptr [EAX + 0x8]          ; 004f30f8
    FMUL float ptr [0x005a1228]         ; 004f30fb | DAT_005a1228
    FSTP float ptr [EBX + 0x8]          ; 004f3101
    LEA EAX,[ESP + 0x70]                ; 004f3104
    PUSH EAX                            ; 004f3108
    LEA EAX,[ESP + 0xb0]                ; 004f3109
    PUSH EAX                            ; 004f3110
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004f3111
    PUSH ECX                            ; 004f3118
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004f3119
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    MOV EDX,EAX                         ; 004f311e
    LEA EAX,[ESP + 0x7c]                ; 004f3120
    ADD ESP,0xc                         ; 004f3124
    CMP EAX,EDX                         ; 004f3127
    JNZ 0x004f31b7                      ; 004f3129
        ;   XREF to: 004f31b7 (CONDITIONAL_JUMP)  ; LAB_004f31b7
    FLD float ptr [ESP + 0x74]          ; 004f312f
        ;   Label: LAB_004f312f
    FLD float ptr [ESP + 0x70]          ; 004f3133
    FADD float ptr [EDI]                ; 004f3137
    FLD float ptr [ESP + 0x78]          ; 004f3139
    FXCH                                ; 004f313d
    FSTP float ptr [ESP + 0x70]         ; 004f313f
    FXCH                                ; 004f3143
    FADD float ptr [EDI + 0x4]          ; 004f3145
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004f3148
    FSTP float ptr [ESP + 0x74]         ; 004f314f
    FADD float ptr [EDI + 0x8]          ; 004f3153
    FLD float ptr [ESP + 0x70]          ; 004f3156
    FXCH                                ; 004f315a
    FSTP float ptr [ESP + 0x78]         ; 004f315c
    FSUB float ptr [EAX]                ; 004f3160
    FLD float ptr [ESP + 0x74]          ; 004f3162
    FXCH                                ; 004f3166
    FSTP float ptr [ESP + 0x70]         ; 004f3168
    FSUB float ptr [EAX + 0x4]          ; 004f316c
    FLD float ptr [ESP + 0x78]          ; 004f316f
    FXCH                                ; 004f3173
    FSTP float ptr [ESP + 0x74]         ; 004f3175
    FSUB float ptr [EAX + 0x8]          ; 004f3179
    FLD float ptr [ESP + 0x74]          ; 004f317c
    FXCH                                ; 004f3180
    FSTP float ptr [ESP + 0x78]         ; 004f3182
    FCOMP float ptr [ESP + 0x14]        ; 004f3186
    FNSTSW AX                           ; 004f318a
    SAHF                                ; 004f318c
    JNC 0x004f31d0                      ; 004f318d
        ;   XREF to: 004f31d0 (CONDITIONAL_JUMP)  ; LAB_004f31d0
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004f318f
        ;   Label: LAB_004f318f
    MOV EDX,dword ptr [ESP + 0xf0]      ; 004f3196
    INC EAX                             ; 004f319d
    ADD ESI,0xc                         ; 004f319e
    MOV dword ptr [ESP + 0xf4],EAX      ; 004f31a1
    CMP EAX,EDX                         ; 004f31a8
    JL 0x004f30dc                       ; 004f31aa
        ;   XREF to: 004f30dc (CONDITIONAL_JUMP)  ; LAB_004f30dc
    MOV ESP,EBP                         ; 004f31b0
    POP EBP                             ; 004f31b2
    POP EDI                             ; 004f31b3
    POP ESI                             ; 004f31b4
    POP EBX                             ; 004f31b5
    RET                                 ; 004f31b6
    MOV EAX,dword ptr [EDX]             ; 004f31b7
        ;   Label: LAB_004f31b7
    MOV dword ptr [ESP + 0x70],EAX      ; 004f31b9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f31bd
    MOV dword ptr [ESP + 0x74],EAX      ; 004f31c0
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f31c4
    MOV dword ptr [ESP + 0x78],EAX      ; 004f31c7
    JMP 0x004f312f                      ; 004f31cb
        ;   XREF to: 004f312f (UNCONDITIONAL_JUMP)  ; LAB_004f312f
    FLD float ptr [ESP + 0x18]          ; 004f31d0
        ;   Label: LAB_004f31d0
    FLD1                                ; 004f31d4
    FADDP                               ; 004f31d6
    FLD float ptr [ESP + 0x74]          ; 004f31d8
    FCOMPP                              ; 004f31dc
    FNSTSW AX                           ; 004f31de
    SAHF                                ; 004f31e0
    JA 0x004f318f                       ; 004f31e1
        ;   XREF to: 004f318f (CONDITIONAL_JUMP)  ; LAB_004f318f
    FLD float ptr [ESP + 0x78]          ; 004f31e3
    FMUL ST0                            ; 004f31e7
    FLD float ptr [ESP + 0x70]          ; 004f31e9
    FMUL ST0                            ; 004f31ed
    FADDP                               ; 004f31ef
    FCOMP float ptr [ESP + 0xec]        ; 004f31f1
    FNSTSW AX                           ; 004f31f8
    SAHF                                ; 004f31fa
    JA 0x004f318f                       ; 004f31fb
        ;   XREF to: 004f318f (CONDITIONAL_JUMP)  ; LAB_004f318f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004f31fd
    TEST EBX,EBX                        ; 004f3200
    JZ 0x004f321d                       ; 004f3202
        ;   XREF to: 004f321d (CONDITIONAL_JUMP)  ; LAB_004f321d
    PUSH 0xbf800000                     ; 004f3204
    PUSH 0x0                            ; 004f3209
    PUSH 0x7                            ; 004f320b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004f320d
    PUSH EBX                            ; 004f3213
    CALL dword ptr [EAX + 0xd4]         ; 004f3214
    ADD ESP,0x10                        ; 004f321a
    MOV EDI,dword ptr [EBP + 0x20]      ; 004f321d
        ;   Label: LAB_004f321d
    TEST EDI,EDI                        ; 004f3220
    JZ 0x004f323d                       ; 004f3222
        ;   XREF to: 004f323d (CONDITIONAL_JUMP)  ; LAB_004f323d
    PUSH 0xbf800000                     ; 004f3224
    PUSH 0x0                            ; 004f3229
    PUSH 0x7                            ; 004f322b
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004f322d
    PUSH EDI                            ; 004f3233
    CALL dword ptr [EAX + 0xd4]         ; 004f3234
    ADD ESP,0x10                        ; 004f323a
    LEA EAX,[ESP + 0x40]                ; 004f323d
        ;   Label: LAB_004f323d
    MOV EDX,dword ptr [EBP + 0x18]      ; 004f3241
    PUSH EAX                            ; 004f3244
    MOV ECX,dword ptr [EBP + 0x18]      ; 004f3245
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004f3248
    PUSH ECX                            ; 004f324e
    CALL dword ptr [EDX + 0x14]         ; 004f324f
    LEA EDX,[EAX + 0xc]                 ; 004f3252
    FLD float ptr [EAX]                 ; 004f3255
    FADD float ptr [EDX]                ; 004f3257
    ADD ESP,0x8                         ; 004f3259
    FST float ptr [ESP + 0x7c]          ; 004f325c
    FLD float ptr [EAX + 0x4]           ; 004f3260
    FADD float ptr [EDX + 0x4]          ; 004f3263
    FXCH                                ; 004f3266
    FLD float ptr [0x0058d01c]          ; 004f3268 | FLOAT_0058d01c
    FXCH                                ; 004f326e
    FMUL ST1                            ; 004f3270
    FXCH ST2                            ; 004f3272
    FST float ptr [ESP + 0x80]          ; 004f3274
    FLD float ptr [EAX + 0x8]           ; 004f327b
    FADD float ptr [EDX + 0x8]          ; 004f327e
    FXCH                                ; 004f3281
    FMUL ST2                            ; 004f3283
    FXCH                                ; 004f3285
    FST float ptr [ESP + 0x84]          ; 004f3287
    FMULP ST2                           ; 004f328e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f3290
    FXCH ST2                            ; 004f3293
    FSTP float ptr [ESP + 0x88]         ; 004f3295
    FXCH                                ; 004f329c
    FSTP float ptr [ESP + 0x8c]         ; 004f329e
    FSTP float ptr [ESP + 0x90]         ; 004f32a5
    FLD float ptr [EAX + 0x20]          ; 004f32ac
    FADD float ptr [ESP + 0x88]         ; 004f32af
    FSTP float ptr [ESP + 0xc4]         ; 004f32b6
    FLD float ptr [EAX + 0x24]          ; 004f32bd
    FADD float ptr [ESP + 0x8c]         ; 004f32c0
    LEA EDX,[ESP + 0x70]                ; 004f32c7
    FSTP float ptr [ESP + 0xc8]         ; 004f32cb
    FLD float ptr [EAX + 0x28]          ; 004f32d2
    FADD float ptr [ESP + 0x90]         ; 004f32d5
    LEA EAX,[ESP + 0xc4]                ; 004f32dc
    FSTP float ptr [ESP + 0xcc]         ; 004f32e3
    CMP EDX,EAX                         ; 004f32ea
    JZ 0x004f330f                       ; 004f32ec
        ;   XREF to: 004f330f (CONDITIONAL_JUMP)  ; LAB_004f330f
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004f32ee
    MOV dword ptr [ESP + 0x70],EAX      ; 004f32f5
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004f32f9
    MOV dword ptr [ESP + 0x74],EAX      ; 004f3300
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004f3304
    MOV dword ptr [ESP + 0x78],EAX      ; 004f330b
    PUSH 0x0                            ; 004f330f
        ;   Label: LAB_004f330f
    PUSH 0xc8                           ; 004f3311
    PUSH 0x0                            ; 004f3316
    LEA EAX,[ESP + 0x7c]                ; 004f3318
    PUSH EAX                            ; 004f331c
    MOV EBX,dword ptr [0x005b96c4]      ; 004f331d | INT_005b96c4
    PUSH EBX                            ; 004f3323
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 004f3324
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    ADD ESP,0x14                        ; 004f3329
    MOV ESP,EBP                         ; 004f332c
    POP EBP                             ; 004f332e
    POP EDI                             ; 004f332f
    POP ESI                             ; 004f3330
    POP EBX                             ; 004f3331
    RET                                 ; 004f3332

