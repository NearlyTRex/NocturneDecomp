; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_FUN_0050df70(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CDemonActor *    Stack[0xc]:4   left_hand_actor
; CDemonActor *    Stack[0x10]:4   right_hand_actor
;
; XREF[1]:
;   core_pendulum.cpp_FUN_0050ed00 at 0050ee23
;
; Referenced Globals:
;   undefined4 DAT_005cbae9
;   undefined4 DAT_005e31a8
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b800
;   core_dirmat.cpp_FUN_0045b870
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_gore.cpp_FUN_004ce9c0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050df70
        ;   Label: core_pendulum.cpp_FUN_0050df70
    PUSH ESI                            ; 0050df71
    PUSH EDI                            ; 0050df72
    PUSH EBP                            ; 0050df73
    MOV EBP,ESP                         ; 0050df74
    SUB ESP,0x1b8                       ; 0050df76
    AND ESP,0xfffffff8                  ; 0050df7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050df7f
    MOV EAX,ESP                         ; 0050df82
    PUSH EAX                            ; 0050df84
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 0050df85
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0050df8a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050df8d
    TEST EDX,EDX                        ; 0050df90
    JNZ 0x0050dfb6                      ; 0050df92
        ;   XREF to: 0050dfb6 (CONDITIONAL_JUMP)  ; LAB_0050dfb6
    MOV ESI,dword ptr [EBP + 0x20]      ; 0050df94
        ;   Label: LAB_0050df94
    TEST ESI,ESI                        ; 0050df97
    JZ 0x0050dfcc                       ; 0050df99
        ;   XREF to: 0050dfcc (CONDITIONAL_JUMP)  ; LAB_0050dfcc
    PUSH ESI                            ; 0050df9b
    MOV EAX,dword ptr [ESI + 0x154]     ; 0050df9c
    CALL dword ptr [EAX + 0x10c]        ; 0050dfa2
    ADD ESP,0x4                         ; 0050dfa8
    TEST EAX,EAX                        ; 0050dfab
    JZ 0x0050dfcc                       ; 0050dfad
        ;   XREF to: 0050dfcc (CONDITIONAL_JUMP)  ; LAB_0050dfcc
    MOV ESP,EBP                         ; 0050dfaf
        ;   Label: LAB_0050dfaf
    POP EBP                             ; 0050dfb1
    POP EDI                             ; 0050dfb2
    POP ESI                             ; 0050dfb3
    POP EBX                             ; 0050dfb4
    RET                                 ; 0050dfb5
    PUSH EDX                            ; 0050dfb6
        ;   Label: LAB_0050dfb6
    MOV EAX,dword ptr [EDX + 0x154]     ; 0050dfb7
    CALL dword ptr [EAX + 0x10c]        ; 0050dfbd
    ADD ESP,0x4                         ; 0050dfc3
    TEST EAX,EAX                        ; 0050dfc6
    JNZ 0x0050dfaf                      ; 0050dfc8
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    JMP 0x0050df94                      ; 0050dfca
        ;   XREF to: 0050df94 (UNCONDITIONAL_JUMP)  ; LAB_0050df94
    MOV EAX,ESP                         ; 0050dfcc
        ;   Label: LAB_0050dfcc
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050dfce
    PUSH EAX                            ; 0050dfd1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050dfd2
    MOV ESI,dword ptr [ESI + 0x154]     ; 0050dfd5
    PUSH EAX                            ; 0050dfdb
    CALL dword ptr [ESI + 0x3c]         ; 0050dfdc
    ADD ESP,0x8                         ; 0050dfdf
    CMP EAX,0x2                         ; 0050dfe2
    JNZ 0x0050dfaf                      ; 0050dfe5
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050dfe7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050dfea
    PUSH EDX                            ; 0050dfed
    MOV EAX,dword ptr [EAX + 0x154]     ; 0050dfee
    LEA ESI,[ESP + 0xa4]                ; 0050dff4
    LEA EDI,[ESP + 0x2c]                ; 0050dffb
    CALL dword ptr [EAX + 0x1c]         ; 0050dfff
    MOV ECX,0x6                         ; 0050e002
    LEA ESI,[ESP + 0xa4]                ; 0050e007
    ADD ESP,0x4                         ; 0050e00e
    MOVSD.REP ES:EDI,ESI                ; 0050e011
    LEA EAX,[ESP + 0x28]                ; 0050e013
    FLD float ptr [ESP + 0x28]          ; 0050e017
    FLD float ptr [ESP + 0x2c]          ; 0050e01b
    FLD float ptr [ESP + 0x30]          ; 0050e01f
    LEA EDI,[ESP + 0x16c]               ; 0050e023
    LEA ESI,[ESP + 0x100]               ; 0050e02a
    FXCH ST2                            ; 0050e031
    FADD float ptr [EAX + 0xc]          ; 0050e033
    FXCH                                ; 0050e036
    FADD float ptr [EAX + 0x10]         ; 0050e038
    FXCH ST2                            ; 0050e03b
    FADD float ptr [EAX + 0x14]         ; 0050e03d
    FXCH                                ; 0050e040
    FSTP float ptr [ESP + 0x100]        ; 0050e042
    FXCH                                ; 0050e049
    FSTP float ptr [ESP + 0x104]        ; 0050e04b
    FSTP float ptr [ESP + 0x108]        ; 0050e052
    MOVSD ES:EDI,ESI                    ; 0050e059
    MOVSD ES:EDI,ESI                    ; 0050e05a
    MOVSD ES:EDI,ESI                    ; 0050e05b
    FLD float ptr [0x005cbae9]          ; 0050e05c | DAT_005cbae9
    FLD float ptr [ESP + 0x16c]         ; 0050e062
    FMUL ST1                            ; 0050e069
    FLD float ptr [ESP + 0x170]         ; 0050e06b
    FMUL ST2                            ; 0050e072
    FLD float ptr [ESP + 0x174]         ; 0050e074
    FMULP ST3                           ; 0050e07b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050e07d
    LEA EDI,[ESP + 0xd0]                ; 0050e080
    LEA ESI,[ESP + 0x190]               ; 0050e087
    FXCH                                ; 0050e08e
    FSTP float ptr [ESP + 0x190]        ; 0050e090
    FSTP float ptr [ESP + 0x194]        ; 0050e097
    FSTP float ptr [ESP + 0x198]        ; 0050e09e
    MOVSD ES:EDI,ESI                    ; 0050e0a5
    MOVSD ES:EDI,ESI                    ; 0050e0a6
    MOVSD ES:EDI,ESI                    ; 0050e0a7
    FLD float ptr [EAX + 0x20]          ; 0050e0a8
    FLD float ptr [EAX + 0x24]          ; 0050e0ab
    FLD float ptr [EAX + 0x28]          ; 0050e0ae
    LEA EDI,[ESP + 0xdc]                ; 0050e0b1
    LEA ESI,[ESP + 0x160]               ; 0050e0b8
    FXCH ST2                            ; 0050e0bf
    FADD float ptr [ESP + 0xd0]         ; 0050e0c1
    FXCH                                ; 0050e0c8
    FADD float ptr [ESP + 0xd4]         ; 0050e0ca
    FXCH ST2                            ; 0050e0d1
    FADD float ptr [ESP + 0xd8]         ; 0050e0d3
    FXCH                                ; 0050e0da
    FSTP float ptr [ESP + 0x160]        ; 0050e0dc
    FXCH                                ; 0050e0e3
    FSTP float ptr [ESP + 0x164]        ; 0050e0e5
    FSTP float ptr [ESP + 0x168]        ; 0050e0ec
    MOVSD ES:EDI,ESI                    ; 0050e0f3
    MOVSD ES:EDI,ESI                    ; 0050e0f4
    MOVSD ES:EDI,ESI                    ; 0050e0f5
    LEA EAX,[EBX + 0x20]                ; 0050e0f6
    FLD float ptr [ESP + 0xdc]          ; 0050e0f9
    FLD float ptr [ESP + 0xe0]          ; 0050e100
    FLD float ptr [ESP + 0xe4]          ; 0050e107
    LEA EDI,[ESP + 0x178]               ; 0050e10e
    LEA ESI,[ESP + 0x10c]               ; 0050e115
    FXCH ST2                            ; 0050e11c
    FSUB float ptr [EAX]                ; 0050e11e
    FXCH                                ; 0050e120
    FSUB float ptr [EAX + 0x4]          ; 0050e122
    FXCH ST2                            ; 0050e125
    FSUB float ptr [EAX + 0x8]          ; 0050e127
    FXCH                                ; 0050e12a
    FSTP float ptr [ESP + 0x10c]        ; 0050e12c
    FXCH                                ; 0050e133
    FSTP float ptr [ESP + 0x110]        ; 0050e135
    LEA EAX,[ESP + 0x178]               ; 0050e13c
    FSTP float ptr [ESP + 0x114]        ; 0050e143
    PUSH EAX                            ; 0050e14a
    LEA EAX,[EBX + 0x3c]                ; 0050e14b
    MOVSD ES:EDI,ESI                    ; 0050e14e
    MOVSD ES:EDI,ESI                    ; 0050e14f
    MOVSD ES:EDI,ESI                    ; 0050e150
    PUSH EAX                            ; 0050e151
    LEA ESI,[ESP + 0x15c]               ; 0050e152
    LEA EDI,[ESP + 0xf0]                ; 0050e159
    CALL core_dirmat.cpp_FUN_0045b870   ; 0050e160
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x15c]               ; 0050e165
    ADD ESP,0x8                         ; 0050e16c
    MOVSD ES:EDI,ESI                    ; 0050e16f
    MOVSD ES:EDI,ESI                    ; 0050e170
    MOVSD ES:EDI,ESI                    ; 0050e171
    LEA EAX,[ESP + 0xe8]                ; 0050e172
    LEA ESI,[ESP + 0xdc]                ; 0050e179
    CMP ESI,EAX                         ; 0050e180
    JZ 0x0050e1ae                       ; 0050e182
        ;   XREF to: 0050e1ae (CONDITIONAL_JUMP)  ; LAB_0050e1ae
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0050e184
    MOV dword ptr [ESP + 0xdc],EAX      ; 0050e18b
    MOV EAX,dword ptr [ESP + 0xec]      ; 0050e192
    MOV dword ptr [ESP + 0xe0],EAX      ; 0050e199
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0050e1a0
    MOV dword ptr [ESP + 0xe4],EAX      ; 0050e1a7
    PUSH EBX                            ; 0050e1ae
        ;   Label: LAB_0050e1ae
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050e1af
    LEA ESI,[ESP + 0x74]                ; 0050e1b5
    LEA EDI,[ESP + 0x5c]                ; 0050e1b9
    CALL dword ptr [EAX + 0x1c]         ; 0050e1bd
    MOV ECX,0x6                         ; 0050e1c0
    LEA ESI,[ESP + 0x74]                ; 0050e1c5
    ADD ESP,0x4                         ; 0050e1c9
    MOVSD.REP ES:EDI,ESI                ; 0050e1cc
    FLD float ptr [ESP + 0x58]          ; 0050e1ce
    FCOMP float ptr [ESP + 0xdc]        ; 0050e1d2
    FNSTSW AX                           ; 0050e1d9
    SAHF                                ; 0050e1db
    JA 0x0050dfaf                       ; 0050e1dc
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    FLD float ptr [ESP + 0x5c]          ; 0050e1e2
    FCOMP float ptr [ESP + 0xe0]        ; 0050e1e6
    FNSTSW AX                           ; 0050e1ed
    SAHF                                ; 0050e1ef
    JA 0x0050dfaf                       ; 0050e1f0
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    FLD float ptr [ESP + 0x60]          ; 0050e1f6
    FCOMP float ptr [ESP + 0xe4]        ; 0050e1fa
    FNSTSW AX                           ; 0050e201
    SAHF                                ; 0050e203
    JA 0x0050dfaf                       ; 0050e204
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    FLD float ptr [ESP + 0x64]          ; 0050e20a
    FCOMP float ptr [ESP + 0xdc]        ; 0050e20e
    FNSTSW AX                           ; 0050e215
    SAHF                                ; 0050e217
    JC 0x0050dfaf                       ; 0050e218
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    FLD float ptr [ESP + 0x68]          ; 0050e21e
    FCOMP float ptr [ESP + 0xe0]        ; 0050e222
    FNSTSW AX                           ; 0050e229
    SAHF                                ; 0050e22b
    JC 0x0050dfaf                       ; 0050e22c
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    FLD float ptr [ESP + 0x6c]          ; 0050e232
    FCOMP float ptr [ESP + 0xe4]        ; 0050e236
    FNSTSW AX                           ; 0050e23d
    SAHF                                ; 0050e23f
    JC 0x0050dfaf                       ; 0050e240
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    LEA EAX,[EBX + 0x158]               ; 0050e246
    PUSH EAX                            ; 0050e24c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0050e24d
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050e252
    FLD float ptr [ESP + 0x1c]          ; 0050e255
    FMUL ST0                            ; 0050e259
    MOV ESI,dword ptr [EAX + 0x104]     ; 0050e25b
    XOR ECX,ECX                         ; 0050e261
    MOV dword ptr [ESP + 0x1a0],ESI     ; 0050e263
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0050e26a
    MOV dword ptr [ESP + 0x1b4],ECX     ; 0050e270
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0050e277
    FSTP float ptr [ESP + 0x1a4]        ; 0050e27e
    TEST ESI,ESI                        ; 0050e285
    JLE 0x0050dfaf                      ; 0050e287
        ;   XREF to: 0050dfaf (CONDITIONAL_JUMP)  ; LAB_0050dfaf
    LEA EAX,[EBX + 0x20]                ; 0050e28d
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0050e290
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050e297
    ADD EBX,0x3c                        ; 0050e29a
    ADD EAX,0x20                        ; 0050e29d
    MOV dword ptr [ESP + 0x19c],EBX     ; 0050e2a0
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0050e2a7
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0050e2ae
        ;   Label: LAB_0050e2ae
    LEA EBX,[ESP + 0x184]               ; 0050e2b5
    FILD dword ptr [EAX]                ; 0050e2bc
    FMUL float ptr [0x005e31a8]         ; 0050e2be | DAT_005e31a8
    FSTP float ptr [EBX]                ; 0050e2c4
    FILD dword ptr [EAX + 0x4]          ; 0050e2c6
    FMUL float ptr [0x005e31a8]         ; 0050e2c9 | DAT_005e31a8
    FSTP float ptr [EBX + 0x4]          ; 0050e2cf
    FILD dword ptr [EAX + 0x8]          ; 0050e2d2
    FMUL float ptr [0x005e31a8]         ; 0050e2d5 | DAT_005e31a8
    FSTP float ptr [EBX + 0x8]          ; 0050e2db
    LEA EAX,[ESP + 0x184]               ; 0050e2de
    PUSH EAX                            ; 0050e2e5
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0050e2e6
    LEA ESI,[ESP + 0x11c]               ; 0050e2ed
    PUSH EAX                            ; 0050e2f4
    LEA EDI,[ESP + 0xfc]                ; 0050e2f5
    LEA EBX,[ESP + 0xfc]                ; 0050e2fc
    CALL core_dirmat.cpp_FUN_0045b800   ; 0050e303
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x120]               ; 0050e308
    ADD ESP,0x8                         ; 0050e30f
    LEA EAX,[ESP + 0x184]               ; 0050e312
    MOVSD ES:EDI,ESI                    ; 0050e319
    MOVSD ES:EDI,ESI                    ; 0050e31a
    MOVSD ES:EDI,ESI                    ; 0050e31b
    CMP EAX,EBX                         ; 0050e31c
    JNZ 0x0050e3ec                      ; 0050e31e
        ;   XREF to: 0050e3ec (CONDITIONAL_JUMP)  ; LAB_0050e3ec
    FLD float ptr [ESP + 0x184]         ; 0050e324
        ;   Label: LAB_0050e324
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0050e32b
    FLD float ptr [ESP + 0x188]         ; 0050e332
    FXCH                                ; 0050e339
    FADD float ptr [EAX]                ; 0050e33b
    FLD float ptr [ESP + 0x18c]         ; 0050e33d
    FXCH                                ; 0050e344
    FSTP float ptr [ESP + 0x184]        ; 0050e346
    FXCH                                ; 0050e34d
    FADD float ptr [EAX + 0x4]          ; 0050e34f
    FLD float ptr [ESP + 0x184]         ; 0050e352
    FXCH                                ; 0050e359
    FSTP float ptr [ESP + 0x188]        ; 0050e35b
    FXCH                                ; 0050e362
    FADD float ptr [EAX + 0x8]          ; 0050e364
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0050e367
    FSTP float ptr [ESP + 0x18c]        ; 0050e36e
    FSUB float ptr [EAX]                ; 0050e375
    FLD float ptr [ESP + 0x188]         ; 0050e377
    FXCH                                ; 0050e37e
    FSTP float ptr [ESP + 0x184]        ; 0050e380
    FSUB float ptr [EAX + 0x4]          ; 0050e387
    FLD float ptr [ESP + 0x18c]         ; 0050e38a
    FXCH                                ; 0050e391
    FSTP float ptr [ESP + 0x188]        ; 0050e393
    FSUB float ptr [EAX + 0x8]          ; 0050e39a
    FLD float ptr [ESP + 0x188]         ; 0050e39d
    FXCH                                ; 0050e3a4
    FSTP float ptr [ESP + 0x18c]        ; 0050e3a6
    FCOMP float ptr [ESP + 0x14]        ; 0050e3ad
    FNSTSW AX                           ; 0050e3b1
    SAHF                                ; 0050e3b3
    JNC 0x0050e41b                      ; 0050e3b4
        ;   XREF to: 0050e41b (CONDITIONAL_JUMP)  ; LAB_0050e41b
    MOV EBX,dword ptr [ESP + 0x1b4]     ; 0050e3b6
        ;   Label: LAB_0050e3b6
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 0050e3bd
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 0050e3c4
    INC EBX                             ; 0050e3cb
    ADD ESI,0xc                         ; 0050e3cc
    MOV dword ptr [ESP + 0x1b4],EBX     ; 0050e3cf
    MOV dword ptr [ESP + 0x1b0],ESI     ; 0050e3d6
    CMP EBX,EDI                         ; 0050e3dd
    JL 0x0050e2ae                       ; 0050e3df
        ;   XREF to: 0050e2ae (CONDITIONAL_JUMP)  ; LAB_0050e2ae
    MOV ESP,EBP                         ; 0050e3e5
    POP EBP                             ; 0050e3e7
    POP EDI                             ; 0050e3e8
    POP ESI                             ; 0050e3e9
    POP EBX                             ; 0050e3ea
    RET                                 ; 0050e3eb
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0050e3ec
        ;   Label: LAB_0050e3ec
    MOV dword ptr [ESP + 0x184],EAX     ; 0050e3f3
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0050e3fa
    MOV dword ptr [ESP + 0x188],EAX     ; 0050e401
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0050e408
    MOV dword ptr [ESP + 0x18c],EAX     ; 0050e40f
    JMP 0x0050e324                      ; 0050e416
        ;   XREF to: 0050e324 (UNCONDITIONAL_JUMP)  ; LAB_0050e324
    FLD float ptr [ESP + 0x18]          ; 0050e41b
        ;   Label: LAB_0050e41b
    FLD1                                ; 0050e41f
    FADDP                               ; 0050e421
    FLD float ptr [ESP + 0x188]         ; 0050e423
    FCOMPP                              ; 0050e42a
    FNSTSW AX                           ; 0050e42c
    SAHF                                ; 0050e42e
    JA 0x0050e3b6                       ; 0050e42f
        ;   XREF to: 0050e3b6 (CONDITIONAL_JUMP)  ; LAB_0050e3b6
    FLD float ptr [ESP + 0x18c]         ; 0050e431
    FMUL ST0                            ; 0050e438
    FLD float ptr [ESP + 0x184]         ; 0050e43a
    FMUL ST0                            ; 0050e441
    FADDP                               ; 0050e443
    FCOMP float ptr [ESP + 0x1a4]       ; 0050e445
    FNSTSW AX                           ; 0050e44c
    SAHF                                ; 0050e44e
    JA 0x0050e3b6                       ; 0050e44f
        ;   XREF to: 0050e3b6 (CONDITIONAL_JUMP)  ; LAB_0050e3b6
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050e455
    TEST EDX,EDX                        ; 0050e458
    JZ 0x0050e475                       ; 0050e45a
        ;   XREF to: 0050e475 (CONDITIONAL_JUMP)  ; LAB_0050e475
    PUSH 0xbf800000                     ; 0050e45c
    PUSH 0x0                            ; 0050e461
    PUSH 0x7                            ; 0050e463
    MOV EAX,dword ptr [EDX + 0x154]     ; 0050e465
    PUSH EDX                            ; 0050e46b
    CALL dword ptr [EAX + 0xdc]         ; 0050e46c
    ADD ESP,0x10                        ; 0050e472
    MOV EBX,dword ptr [EBP + 0x20]      ; 0050e475
        ;   Label: LAB_0050e475
    TEST EBX,EBX                        ; 0050e478
    JZ 0x0050e495                       ; 0050e47a
        ;   XREF to: 0050e495 (CONDITIONAL_JUMP)  ; LAB_0050e495
    PUSH 0xbf800000                     ; 0050e47c
    PUSH 0x0                            ; 0050e481
    PUSH 0x7                            ; 0050e483
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050e485
    PUSH EBX                            ; 0050e48b
    CALL dword ptr [EAX + 0xdc]         ; 0050e48c
    ADD ESP,0x10                        ; 0050e492
    MOV EDI,dword ptr [EBP + 0x18]      ; 0050e495
        ;   Label: LAB_0050e495
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050e498
    PUSH EDI                            ; 0050e49b
    MOV EAX,dword ptr [EAX + 0x154]     ; 0050e49c
    LEA ESI,[ESP + 0x44]                ; 0050e4a2
    CALL dword ptr [EAX + 0x1c]         ; 0050e4a6
    MOV ECX,0x6                         ; 0050e4a9
    LEA EDI,[ESP + 0x8c]                ; 0050e4ae
    LEA ESI,[ESP + 0x44]                ; 0050e4b5
    ADD ESP,0x4                         ; 0050e4b9
    MOVSD.REP ES:EDI,ESI                ; 0050e4bc
    LEA EAX,[ESP + 0x88]                ; 0050e4be
    FLD float ptr [ESP + 0x88]          ; 0050e4c5
    FLD float ptr [ESP + 0x8c]          ; 0050e4cc
    FLD float ptr [ESP + 0x90]          ; 0050e4d3
    LEA EDI,[ESP + 0x148]               ; 0050e4da
    LEA ESI,[ESP + 0x130]               ; 0050e4e1
    FXCH ST2                            ; 0050e4e8
    FADD float ptr [EAX + 0xc]          ; 0050e4ea
    FXCH                                ; 0050e4ed
    FADD float ptr [EAX + 0x10]         ; 0050e4ef
    FXCH ST2                            ; 0050e4f2
    FADD float ptr [EAX + 0x14]         ; 0050e4f4
    FXCH                                ; 0050e4f7
    FSTP float ptr [ESP + 0x130]        ; 0050e4f9
    FXCH                                ; 0050e500
    FSTP float ptr [ESP + 0x134]        ; 0050e502
    FSTP float ptr [ESP + 0x138]        ; 0050e509
    MOVSD ES:EDI,ESI                    ; 0050e510
    MOVSD ES:EDI,ESI                    ; 0050e511
    MOVSD ES:EDI,ESI                    ; 0050e512
    FLD float ptr [0x005cbae9]          ; 0050e513 | DAT_005cbae9
    FLD float ptr [ESP + 0x148]         ; 0050e519
    FMUL ST1                            ; 0050e520
    FLD float ptr [ESP + 0x14c]         ; 0050e522
    FMUL ST2                            ; 0050e529
    FLD float ptr [ESP + 0x150]         ; 0050e52b
    FMULP ST3                           ; 0050e532
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050e534
    LEA EDI,[ESP + 0xc4]                ; 0050e537
    LEA ESI,[ESP + 0x124]               ; 0050e53e
    FXCH                                ; 0050e545
    FSTP float ptr [ESP + 0x124]        ; 0050e547
    FSTP float ptr [ESP + 0x128]        ; 0050e54e
    FSTP float ptr [ESP + 0x12c]        ; 0050e555
    MOVSD ES:EDI,ESI                    ; 0050e55c
    MOVSD ES:EDI,ESI                    ; 0050e55d
    MOVSD ES:EDI,ESI                    ; 0050e55e
    LEA EBX,[ESP + 0x184]               ; 0050e55f
    FLD float ptr [EAX + 0x24]          ; 0050e566
    FLD float ptr [EAX + 0x28]          ; 0050e569
    FLD float ptr [EAX + 0x20]          ; 0050e56c
    LEA EDI,[ESP + 0x13c]               ; 0050e56f
    LEA ESI,[ESP + 0xb8]                ; 0050e576
    LEA EAX,[ESP + 0x13c]               ; 0050e57d
    FADD float ptr [ESP + 0xc4]         ; 0050e584
    FXCH ST2                            ; 0050e58b
    FADD float ptr [ESP + 0xc8]         ; 0050e58d
    FXCH                                ; 0050e594
    FADD float ptr [ESP + 0xcc]         ; 0050e596
    FXCH ST2                            ; 0050e59d
    FSTP float ptr [ESP + 0xb8]         ; 0050e59f
    FSTP float ptr [ESP + 0xbc]         ; 0050e5a6
    FSTP float ptr [ESP + 0xc0]         ; 0050e5ad
    MOVSD ES:EDI,ESI                    ; 0050e5b4
    MOVSD ES:EDI,ESI                    ; 0050e5b5
    MOVSD ES:EDI,ESI                    ; 0050e5b6
    CMP EBX,EAX                         ; 0050e5b7
    JZ 0x0050e5e5                       ; 0050e5b9
        ;   XREF to: 0050e5e5 (CONDITIONAL_JUMP)  ; LAB_0050e5e5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0050e5bb
    MOV dword ptr [ESP + 0x184],EAX     ; 0050e5c2
    MOV EAX,dword ptr [ESP + 0x140]     ; 0050e5c9
    MOV dword ptr [ESP + 0x188],EAX     ; 0050e5d0
    MOV EAX,dword ptr [ESP + 0x144]     ; 0050e5d7
    MOV dword ptr [ESP + 0x18c],EAX     ; 0050e5de
    PUSH 0x0                            ; 0050e5e5
        ;   Label: LAB_0050e5e5
    PUSH 0xc8                           ; 0050e5e7
    PUSH 0x0                            ; 0050e5ec
    LEA EAX,[ESP + 0x190]               ; 0050e5ee
    PUSH EAX                            ; 0050e5f5
    MOV EAX,[0x005fed24]                ; 0050e5f6 | g_CGorePtr
    PUSH EAX                            ; 0050e5fb
    CALL core_gore.cpp_FUN_004ce9c0     ; 0050e5fc
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0050e601
    MOV ESP,EBP                         ; 0050e604
    POP EBP                             ; 0050e606
    POP EDI                             ; 0050e607
    POP ESI                             ; 0050e608
    POP EBX                             ; 0050e609
    RET                                 ; 0050e60a

