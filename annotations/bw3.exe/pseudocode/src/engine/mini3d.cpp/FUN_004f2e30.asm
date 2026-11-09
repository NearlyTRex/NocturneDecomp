; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_mini3d_cpp_FUN_004f2e30(float *param_1,int param_2,int param_3,int param_4)
;
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004edea0 at 004ee0cb
;   engine_mini3d.cpp_FUN_004ee1a0 at 004ee32f
;   engine_mini3d.cpp_FUN_004ee51e at 004ee53f
;
; Referenced Globals:
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   undefined4 DAT_01c6e318
;   undefined4 DAT_01c6e31c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76c6c
;   undefined4 DAT_01d76c70
;   undefined4 DAT_01d76c74
;   undefined4 DAT_01d76c78
;   ... and 21 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3650
;   engine_mini3d.cpp_FUN_004efd80
;   engine_mini3d.cpp_FUN_004f12b0
;   engine_mini3d.cpp_FUN_004f2cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2e30
        ;   Label: engine_mini3d.cpp_FUN_004f2e30
    PUSH ESI                            ; 004f2e31
    PUSH EDI                            ; 004f2e32
    PUSH EBP                            ; 004f2e33
    SUB ESP,0x9c                        ; 004f2e34
    MOV EDX,dword ptr [ESP + 0xb4]      ; 004f2e3a
    XOR EBP,EBP                         ; 004f2e41
    TEST EDX,EDX                        ; 004f2e43
    JLE 0x004f2f09                      ; 004f2e45
        ;   XREF to: 004f2f09 (CONDITIONAL_JUMP)  ; LAB_004f2f09
    FLD float ptr [0x01d76c94]          ; 004f2e4b | DAT_01d76c94
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004f2e51
    MOV ECX,dword ptr [EAX]             ; 004f2e58
        ;   Label: LAB_004f2e58
    MOV dword ptr [ESP + 0x70],ECX      ; 004f2e5a
    FLD float ptr [ESP + 0x70]          ; 004f2e5e
    FMUL float ptr [0x01d76c6c]         ; 004f2e62 | DAT_01d76c6c
    FLD float ptr [ESP + 0x70]          ; 004f2e68
    FMUL float ptr [0x01d76c70]         ; 004f2e6c | DAT_01d76c70
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f2e72
    FLD float ptr [ESP + 0x70]          ; 004f2e75
    MOV dword ptr [ESP + 0x74],ECX      ; 004f2e79
    FMUL float ptr [0x01d76c74]         ; 004f2e7d | DAT_01d76c74
    FLD float ptr [ESP + 0x74]          ; 004f2e83
    FMUL float ptr [0x01d76c78]         ; 004f2e87 | DAT_01d76c78
    FLD float ptr [ESP + 0x74]          ; 004f2e8d
    FMUL float ptr [0x01d76c7c]         ; 004f2e91 | DAT_01d76c7c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f2e97
    FLD float ptr [ESP + 0x74]          ; 004f2e9a
    MOV dword ptr [ESP + 0x78],ECX      ; 004f2e9e
    FXCH ST2                            ; 004f2ea2
    FADDP ST5,ST0                       ; 004f2ea4
    FXCH                                ; 004f2ea6
    FMUL float ptr [0x01d76c80]         ; 004f2ea8 | DAT_01d76c80
    FLD float ptr [ESP + 0x78]          ; 004f2eae
    FMUL float ptr [0x01d76c84]         ; 004f2eb2 | DAT_01d76c84
    FXCH ST2                            ; 004f2eb8
    FADDP ST4,ST0                       ; 004f2eba
    FADDP ST2,ST0                       ; 004f2ebc
    FLD float ptr [ESP + 0x78]          ; 004f2ebe
    FMUL float ptr [0x01d76c88]         ; 004f2ec2 | DAT_01d76c88
    FLD float ptr [ESP + 0x78]          ; 004f2ec8
    FMUL float ptr [0x01d76c8c]         ; 004f2ecc | DAT_01d76c8c
    ADD EAX,0x40                        ; 004f2ed2
    INC EBP                             ; 004f2ed5
    FXCH ST2                            ; 004f2ed6
    FADDP ST5,ST0                       ; 004f2ed8
    FADDP ST3,ST0                       ; 004f2eda
    FADDP                               ; 004f2edc
    FXCH ST2                            ; 004f2ede
    FADD float ptr [0x01d76c90]         ; 004f2ee0 | DAT_01d76c90
    FXCH                                ; 004f2ee6
    FADD ST0,ST3                        ; 004f2ee8
    FXCH ST2                            ; 004f2eea
    FADD float ptr [0x01d76c98]         ; 004f2eec | DAT_01d76c98
    FXCH                                ; 004f2ef2
    FSTP float ptr [EAX + -0x40]        ; 004f2ef4
    FXCH                                ; 004f2ef7
    FSTP float ptr [EAX + -0x3c]        ; 004f2ef9
    FSTP float ptr [EAX + -0x38]        ; 004f2efc
    CMP EBP,EDX                         ; 004f2eff
    JL 0x004f2e58                       ; 004f2f01
        ;   XREF to: 004f2e58 (CONDITIONAL_JUMP)  ; LAB_004f2e58
    FSTP ST0                            ; 004f2f07
    CMP dword ptr [0x01d7a6ac],0x0      ; 004f2f09 | DAT_01d7a6ac
        ;   Label: LAB_004f2f09
    JZ 0x004f3037                       ; 004f2f10
        ;   XREF to: 004f3037 (CONDITIONAL_JUMP)  ; LAB_004f3037
    XOR EBP,EBP                         ; 004f2f16
        ;   Label: LAB_004f2f16
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004f2f18
    MOV dword ptr [ESP + 0x90],EBP      ; 004f2f1f
    MOV dword ptr [ESP + 0x98],EBP      ; 004f2f26
    TEST EDX,EDX                        ; 004f2f2d
    JLE 0x004f30ec                      ; 004f2f2f
        ;   XREF to: 004f30ec (CONDITIONAL_JUMP)  ; LAB_004f30ec
    MOV dword ptr [ESP + 0x94],EBP      ; 004f2f35
    MOV ECX,dword ptr [ESP + 0xb8]      ; 004f2f3c
        ;   Label: LAB_004f2f3c
    MOV ESI,dword ptr [ESP + 0x94]      ; 004f2f43
    MOV EDI,dword ptr [ESP + 0x94]      ; 004f2f4a
    ADD ECX,ESI                         ; 004f2f51
    MOV ESI,dword ptr [ESP + 0xb8]      ; 004f2f53
    MOV EBX,dword ptr [ESP + 0xb0]      ; 004f2f5a
    ADD ESI,0x6                         ; 004f2f61
    MOV EAX,ESP                         ; 004f2f64
    ADD ESI,EDI                         ; 004f2f66
    XOR EDX,EDX                         ; 004f2f68
        ;   Label: LAB_004f2f68
    MOV DX,word ptr [ECX]               ; 004f2f6a
    SHL EDX,0x6                         ; 004f2f6d
    ADD EDX,EBX                         ; 004f2f70
    ADD EAX,0x24                        ; 004f2f72
    ADD ECX,0x2                         ; 004f2f75
    MOV EDI,dword ptr [EDX]             ; 004f2f78
    MOV dword ptr [EAX + -0x24],EDI     ; 004f2f7a
    MOV EDI,dword ptr [EDX + 0x4]       ; 004f2f7d
    MOV dword ptr [EAX + -0x20],EDI     ; 004f2f80
    MOV EDI,dword ptr [EDX + 0x8]       ; 004f2f83
    MOV dword ptr [EAX + -0x1c],EDI     ; 004f2f86
    MOV EDI,dword ptr [EDX + 0x1c]      ; 004f2f89
    MOV dword ptr [EAX + -0x8],EDI      ; 004f2f8c
    MOV EDI,dword ptr [EDX + 0x20]      ; 004f2f8f
    MOV dword ptr [EAX + -0x4],EDI      ; 004f2f92
    MOV EDI,dword ptr [EDX + 0x24]      ; 004f2f95
    MOV dword ptr [EAX + -0x18],EDI     ; 004f2f98
    MOV EDI,dword ptr [EDX + 0x28]      ; 004f2f9b
    MOV dword ptr [EAX + -0x14],EDI     ; 004f2f9e
    MOV EDI,dword ptr [EDX + 0x2c]      ; 004f2fa1
    MOV dword ptr [EAX + -0x10],EDI     ; 004f2fa4
    MOV EDI,dword ptr [EDX + 0x30]      ; 004f2fa7
    MOV dword ptr [EAX + -0xc],EDI      ; 004f2faa
    CMP ECX,ESI                         ; 004f2fad
    JNZ 0x004f2f68                      ; 004f2faf
        ;   XREF to: 004f2f68 (CONDITIONAL_JUMP)  ; LAB_004f2f68
    IMUL EDX,dword ptr [ESP + 0x98],0x24 ; 004f2fb1
    LEA EAX,[ESP + 0x6c]                ; 004f2fb9
    PUSH EAX                            ; 004f2fbd
    MOV EAX,[0x01d7a6ac]                ; 004f2fbe | DAT_01d7a6ac
    ADD EAX,EDX                         ; 004f2fc3
    PUSH EAX                            ; 004f2fc5
    PUSH 0x3                            ; 004f2fc6
    LEA EAX,[ESP + 0xc]                 ; 004f2fc8
    XOR ESI,ESI                         ; 004f2fcc
    PUSH EAX                            ; 004f2fce
    MOV dword ptr [ESP + 0x7c],ESI      ; 004f2fcf
    CALL engine_mini3d.cpp_FUN_004f2cf0 ; 004f2fd3
        ;   XREF to: 004f2cf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2cf0()
    ADD ESP,0x10                        ; 004f2fd8
    CMP dword ptr [ESP + 0x6c],0x2      ; 004f2fdb
    JLE 0x004f30bd                      ; 004f2fe0
        ;   XREF to: 004f30bd (CONDITIONAL_JUMP)  ; LAB_004f30bd
    MOV ECX,dword ptr [ESP + 0x98]      ; 004f2fe6
    MOV EBX,dword ptr [ESP + 0x98]      ; 004f2fed
    MOV EDI,dword ptr [ESP + 0x98]      ; 004f2ff4
    XOR EDX,EDX                         ; 004f2ffb
    ADD EBX,0x2                         ; 004f2ffd
    INC ECX                             ; 004f3000
    ADD EBX,ESI                         ; 004f3001
    ADD ECX,ESI                         ; 004f3003
    LEA ESI,[EBP + EBP*0x1]             ; 004f3005
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004f3009
        ;   Label: LAB_004f3009
    SUB EAX,0x2                         ; 004f300d
    CMP EDX,EAX                         ; 004f3010
    JGE 0x004f30b2                      ; 004f3012
        ;   XREF to: 004f30b2 (CONDITIONAL_JUMP)  ; LAB_004f30b2
    MOV EAX,[0x01d7a6b0]                ; 004f3018 | DAT_01d7a6b0
    ADD ESI,0x6                         ; 004f301d
    MOV word ptr [ESI + EAX*0x1 + -0x6],DI ; 004f3020
    ADD EBP,0x3                         ; 004f3025
    MOV word ptr [ESI + EAX*0x1 + -0x4],CX ; 004f3028
    INC EDX                             ; 004f302d
    MOV word ptr [ESI + EAX*0x1 + -0x2],BX ; 004f302e
    INC EBX                             ; 004f3033
    INC ECX                             ; 004f3034
    JMP 0x004f3009                      ; 004f3035
        ;   XREF to: 004f3009 (UNCONDITIONAL_JUMP)  ; LAB_004f3009
    PUSH 0x57e40                        ; 004f3037
        ;   Label: LAB_004f3037
    CALL crt_unknown.c_FUN_005a3650     ; 004f303c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004f3041
    MOV [0x01d7a6ac],EAX                ; 004f3044 | DAT_01d7a6ac
    TEST EAX,EAX                        ; 004f3049
    JNZ 0x004f3070                      ; 004f304b
        ;   XREF to: 004f3070 (CONDITIONAL_JUMP)  ; LAB_004f3070
    MOV ECX,0x5c82ad                    ; 004f304d
    MOV EBX,0x14e5                      ; 004f3052
    PUSH 0x5c82c2                       ; 004f3057
    MOV dword ptr [0x01d71de0],ECX      ; 004f305c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004f3062 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f3068
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f306d
    PUSH 0xea60                         ; 004f3070
        ;   Label: LAB_004f3070
    CALL crt_unknown.c_FUN_005a3650     ; 004f3075
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004f307a
    MOV [0x01d7a6b0],EAX                ; 004f307d | DAT_01d7a6b0
    TEST EAX,EAX                        ; 004f3082
    JNZ 0x004f2f16                      ; 004f3084
        ;   XREF to: 004f2f16 (CONDITIONAL_JUMP)  ; LAB_004f2f16
    MOV ESI,0x5c82ec                    ; 004f308a
    MOV EDI,0x14e9                      ; 004f308f
    PUSH 0x5c8301                       ; 004f3094
    MOV dword ptr [0x01d71de0],ESI      ; 004f3099 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004f309f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f30a5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f30aa
    JMP 0x004f2f16                      ; 004f30ad
        ;   XREF to: 004f2f16 (UNCONDITIONAL_JUMP)  ; LAB_004f2f16
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004f30b2
        ;   Label: LAB_004f30b2
    ADD dword ptr [ESP + 0x98],EAX      ; 004f30b6
    MOV ECX,dword ptr [ESP + 0x94]      ; 004f30bd
        ;   Label: LAB_004f30bd
    MOV EBX,dword ptr [ESP + 0x90]      ; 004f30c4
    MOV ESI,dword ptr [ESP + 0xbc]      ; 004f30cb
    ADD ECX,0x6                         ; 004f30d2
    INC EBX                             ; 004f30d5
    MOV dword ptr [ESP + 0x94],ECX      ; 004f30d6
    MOV dword ptr [ESP + 0x90],EBX      ; 004f30dd
    CMP EBX,ESI                         ; 004f30e4
    JL 0x004f2f3c                       ; 004f30e6
        ;   XREF to: 004f2f3c (CONDITIONAL_JUMP)  ; LAB_004f2f3c
    MOV ECX,0x3                         ; 004f30ec
        ;   Label: LAB_004f30ec
    MOV EDX,EBP                         ; 004f30f1
    MOV EAX,EBP                         ; 004f30f3
    SAR EDX,0x1f                        ; 004f30f5
    IDIV ECX                            ; 004f30f8
    MOV EDI,dword ptr [0x01d76d00]      ; 004f30fa | DAT_01d76d00
    MOV EBP,EAX                         ; 004f3100
    MOV EAX,dword ptr [ESP + 0x98]      ; 004f3102
    XOR EBX,EBX                         ; 004f3109
    SHL EAX,0x6                         ; 004f310b
    TEST EDI,EDI                        ; 004f310e
    JNZ 0x004f3260                      ; 004f3110
        ;   XREF to: 004f3260 (CONDITIONAL_JUMP)  ; LAB_004f3260
    CMP dword ptr [ESP + 0x98],0x0      ; 004f3116
    JLE 0x004f3240                      ; 004f311e
        ;   XREF to: 004f3240 (CONDITIONAL_JUMP)  ; LAB_004f3240
    MOV dword ptr [ESP + 0x88],EAX      ; 004f3124
    XOR ESI,ESI                         ; 004f312b
    FLD float ptr [0x01d76c90]          ; 004f312d | DAT_01d76c90
        ;   Label: LAB_004f312d
    FLD float ptr [0x01d76c94]          ; 004f3133 | DAT_01d76c94
    MOV EAX,[0x01d7a6ac]                ; 004f3139 | DAT_01d7a6ac
    FILD dword ptr [0x01c6e308]         ; 004f313e | DAT_01c6e308
    FXCH                                ; 004f3144
    FSUBR float ptr [EDI + EAX*0x1 + 0x4] ; 004f3146
    FXCH ST2                            ; 004f314a
    FSUBR float ptr [EDI + EAX*0x1]     ; 004f314c
    FXCH ST2                            ; 004f314f
    FSTP float ptr [EDI + EAX*0x1 + 0x4] ; 004f3151
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 004f3155
    FXCH                                ; 004f3159
    FSTP float ptr [EDI + EAX*0x1]      ; 004f315b
    FILD dword ptr [0x01c6e2fc]         ; 004f315e | DAT_01c6e2fc
    FMUL float ptr [EDI + EAX*0x1]      ; 004f3164
    FLD float ptr [0x01d76c98]          ; 004f3167 | DAT_01d76c98
    MOV EDX,dword ptr [0x01d76f60]      ; 004f316d | DAT_01d76f60
    FSUBR float ptr [EDI + EAX*0x1 + 0x8] ; 004f3173
    FXCH                                ; 004f3177
    FADDP ST2,ST0                       ; 004f3179
    FSTP float ptr [EDI + EAX*0x1 + 0x8] ; 004f317b
    FILD dword ptr [0x01c6e314]         ; 004f317f | DAT_01c6e314
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 004f3185
    ADD EDX,ESI                         ; 004f3189
    FADDP                               ; 004f318b
    FILD dword ptr [0x01c6e30c]         ; 004f318d | DAT_01c6e30c
    FXCH                                ; 004f3193
    FSTP float ptr [EDX]                ; 004f3195
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 004f3197
    FILD dword ptr [0x01c6e300]         ; 004f319b | DAT_01c6e300
    FMUL float ptr [EDI + EAX*0x1]      ; 004f31a1
    FADDP                               ; 004f31a4
    FILD dword ptr [0x01c6e318]         ; 004f31a6 | DAT_01c6e318
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 004f31ac
    FADDP                               ; 004f31b0
    FILD dword ptr [0x01c6e310]         ; 004f31b2 | DAT_01c6e310
    FXCH                                ; 004f31b8
    FSTP float ptr [EDX + 0x4]          ; 004f31ba
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 004f31bd
    FILD dword ptr [0x01c6e304]         ; 004f31c1 | DAT_01c6e304
    FMUL float ptr [EDI + EAX*0x1]      ; 004f31c7
    FADDP                               ; 004f31ca
    FILD dword ptr [0x01c6e31c]         ; 004f31cc | DAT_01c6e31c
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 004f31d2
    ADD EDI,0x24                        ; 004f31d6
    PUSH EDX                            ; 004f31d9
    FADDP                               ; 004f31da
    ADD ESI,0x40                        ; 004f31dc
    FSTP float ptr [EDX + 0x8]          ; 004f31df
    CALL engine_mini3d.cpp_FUN_004efd80 ; 004f31e2
        ;   XREF to: 004efd80 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004efd80()
    MOV EDX,dword ptr [0x01d7a6ac]      ; 004f31e7 | DAT_01d7a6ac
    MOV EAX,[0x01d76f60]                ; 004f31ed | DAT_01d76f60
    ADD ESP,0x4                         ; 004f31f2
    FLD float ptr [EDX + EDI*0x1 + -0x8] ; 004f31f5
    MOV ECX,dword ptr [ESP + 0x88]      ; 004f31f9
    FSTP float ptr [ESI + EAX*0x1 + -0x24] ; 004f3200
    FLD float ptr [EDX + EDI*0x1 + -0x4] ; 004f3204
    FSTP float ptr [ESI + EAX*0x1 + -0x20] ; 004f3208
    FLD float ptr [EDX + EDI*0x1 + -0x18] ; 004f320c
    FSTP float ptr [ESI + EAX*0x1 + -0x1c] ; 004f3210
    FLD float ptr [EDX + EDI*0x1 + -0x14] ; 004f3214
    FSTP float ptr [ESI + EAX*0x1 + -0x18] ; 004f3218
    FLD float ptr [EDX + EDI*0x1 + -0x10] ; 004f321c
    FSTP float ptr [ESI + EAX*0x1 + -0x14] ; 004f3220
    FLD float ptr [EDX + EDI*0x1 + -0xc] ; 004f3224
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x30] ; 004f3228
    FSTP float ptr [ESI + EAX*0x1 + -0x10] ; 004f322c
    OR EBX,EDX                          ; 004f3230
    CMP ESI,ECX                         ; 004f3232
    JL 0x004f312d                       ; 004f3234
        ;   XREF to: 004f312d (CONDITIONAL_JUMP)  ; LAB_004f312d
    LEA EAX,[EAX]                       ; 004f323a
    MOV ESI,dword ptr [ESP + 0x98]      ; 004f3240
        ;   Label: LAB_004f3240
    CMP ESI,0x3                         ; 004f3247
    JL 0x004f3255                       ; 004f324a
        ;   XREF to: 004f3255 (CONDITIONAL_JUMP)  ; LAB_004f3255
    CMP EBP,0x1                         ; 004f324c
    JGE 0x004f336e                      ; 004f324f
        ;   XREF to: 004f336e (CONDITIONAL_JUMP)  ; LAB_004f336e
    ADD ESP,0x9c                        ; 004f3255
        ;   Label: LAB_004f3255
    POP EBP                             ; 004f325b
    POP EDI                             ; 004f325c
    POP ESI                             ; 004f325d
    POP EBX                             ; 004f325e
    RET                                 ; 004f325f
    CMP dword ptr [ESP + 0x98],0x0      ; 004f3260
        ;   Label: LAB_004f3260
    JLE 0x004f3240                      ; 004f3268
        ;   XREF to: 004f3240 (CONDITIONAL_JUMP)  ; LAB_004f3240
    MOV dword ptr [ESP + 0x8c],EAX      ; 004f326a
    XOR EDI,EDI                         ; 004f3271
    XOR ESI,ESI                         ; 004f3273
    MOV EAX,[0x01d7a6ac]                ; 004f3275 | DAT_01d7a6ac
        ;   Label: LAB_004f3275
    FLD float ptr [EDI + EAX*0x1 + 0x4] ; 004f327a
    FSUB float ptr [0x01d76c94]         ; 004f327e | DAT_01d76c94
    FLD ST0                             ; 004f3284
    FMUL float ptr [0x01d76d10]         ; 004f3286 | DAT_01d76d10
    FLD float ptr [EDI + EAX*0x1]       ; 004f328c
    FSUB float ptr [0x01d76c90]         ; 004f328f | DAT_01d76c90
    FLD ST0                             ; 004f3295
    FMUL float ptr [0x01d76d08]         ; 004f3297 | DAT_01d76d08
    FLD ST1                             ; 004f329d
    FMUL float ptr [0x01d76d0c]         ; 004f329f | DAT_01d76d0c
    FXCH ST2                            ; 004f32a5
    FMUL float ptr [0x01d76d04]         ; 004f32a7 | DAT_01d76d04
    FLD ST4                             ; 004f32ad
    FMUL float ptr [0x01d76d14]         ; 004f32af | DAT_01d76d14
    FXCH ST5                            ; 004f32b5
    FMUL float ptr [0x01d76d18]         ; 004f32b7 | DAT_01d76d18
    FLD float ptr [EDI + EAX*0x1 + 0x8] ; 004f32bd
    FSUB float ptr [0x01d76c98]         ; 004f32c1 | DAT_01d76c98
    FXCH ST2                            ; 004f32c7
    FADDP ST5,ST0                       ; 004f32c9
    FXCH ST5                            ; 004f32cb
    FADDP ST2,ST0                       ; 004f32cd
    FLD ST0                             ; 004f32cf
    FMUL float ptr [0x01d76d1c]         ; 004f32d1 | DAT_01d76d1c
    FLD ST1                             ; 004f32d7
    FMUL float ptr [0x01d76d20]         ; 004f32d9 | DAT_01d76d20
    FXCH ST6                            ; 004f32df
    FADDP ST4,ST0                       ; 004f32e1
    MOV EAX,[0x01d76f60]                ; 004f32e3 | DAT_01d76f60
    FXCH                                ; 004f32e8
    FMUL float ptr [0x01d76d24]         ; 004f32ea | DAT_01d76d24
    ADD EAX,ESI                         ; 004f32f0
    ADD EDI,0x24                        ; 004f32f2
    PUSH EAX                            ; 004f32f5
    ADD ESI,0x40                        ; 004f32f6
    FXCH                                ; 004f32f9
    FADDP ST4,ST0                       ; 004f32fb
    FXCH ST4                            ; 004f32fd
    FADDP                               ; 004f32ff
    FXCH ST3                            ; 004f3301
    FADDP                               ; 004f3303
    FXCH                                ; 004f3305
    FSTP float ptr [EAX]                ; 004f3307
    FXCH                                ; 004f3309
    FSTP float ptr [EAX + 0x4]          ; 004f330b
    FSTP float ptr [EAX + 0x8]          ; 004f330e
    CALL engine_mini3d.cpp_FUN_004efd80 ; 004f3311
        ;   XREF to: 004efd80 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004efd80()
    MOV EDX,dword ptr [0x01d7a6ac]      ; 004f3316 | DAT_01d7a6ac
    MOV EAX,[0x01d76f60]                ; 004f331c | DAT_01d76f60
    ADD ESP,0x4                         ; 004f3321
    FLD float ptr [EDX + EDI*0x1 + -0x8] ; 004f3324
    MOV ECX,dword ptr [ESP + 0x8c]      ; 004f3328
    FSTP float ptr [ESI + EAX*0x1 + -0x24] ; 004f332f
    FLD float ptr [EDX + EDI*0x1 + -0x4] ; 004f3333
    FSTP float ptr [ESI + EAX*0x1 + -0x20] ; 004f3337
    FLD float ptr [EDX + EDI*0x1 + -0x18] ; 004f333b
    FSTP float ptr [ESI + EAX*0x1 + -0x1c] ; 004f333f
    FLD float ptr [EDX + EDI*0x1 + -0x14] ; 004f3343
    FSTP float ptr [ESI + EAX*0x1 + -0x18] ; 004f3347
    FLD float ptr [EDX + EDI*0x1 + -0x10] ; 004f334b
    FSTP float ptr [ESI + EAX*0x1 + -0x14] ; 004f334f
    FLD float ptr [EDX + EDI*0x1 + -0xc] ; 004f3353
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x30] ; 004f3357
    FSTP float ptr [ESI + EAX*0x1 + -0x10] ; 004f335b
    OR EBX,EDX                          ; 004f335f
    CMP ESI,ECX                         ; 004f3361
    JL 0x004f3275                       ; 004f3363
        ;   XREF to: 004f3275 (CONDITIONAL_JUMP)  ; LAB_004f3275
    JMP 0x004f3240                      ; 004f3369
        ;   XREF to: 004f3240 (UNCONDITIONAL_JUMP)  ; LAB_004f3240
    PUSH EBX                            ; 004f336e
        ;   Label: LAB_004f336e
    PUSH EBP                            ; 004f336f
    MOV EDI,dword ptr [0x01d7a6b0]      ; 004f3370 | DAT_01d7a6b0
    PUSH EDI                            ; 004f3376
    PUSH ESI                            ; 004f3377
    MOV EAX,[0x01d76f60]                ; 004f3378 | DAT_01d76f60
    PUSH EAX                            ; 004f337d
    CALL engine_mini3d.cpp_FUN_004f12b0 ; 004f337e
        ;   XREF to: 004f12b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f12b0()
    ADD ESP,0x14                        ; 004f3383
    ADD ESP,0x9c                        ; 004f3386
    POP EBP                             ; 004f338c
    POP EDI                             ; 004f338d
    POP ESI                             ; 004f338e
    POP EBX                             ; 004f338f
    RET                                 ; 004f3390

