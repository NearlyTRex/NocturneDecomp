; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053e080(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb3e0
;   undefined4 DAT_005fb410
;   undefined4 DAT_005fb414
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e080
        ;   Label: core_shadow.cpp_FUN_0053e080
    PUSH ESI                            ; 0053e081
    PUSH EDI                            ; 0053e082
    PUSH EBP                            ; 0053e083
    SUB ESP,0x134                       ; 0053e084
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0053e08a
    FLD float ptr [EBP]                 ; 0053e091
    FLD float ptr [EBP + 0x4]           ; 0053e094
    LEA EDI,[ESP + 0x10c]               ; 0053e097
    MOV EAX,[0x005fb410]                ; 0053e09e | DAT_005fb410
    LEA ESI,[ESP + 0xf4]                ; 0053e0a3
    MOV dword ptr [ESP + 0x130],EAX     ; 0053e0aa
    MOV EAX,[0x005fb414]                ; 0053e0b1 | DAT_005fb414
    FXCH                                ; 0053e0b6
    FADD float ptr [ESP + 0x130]        ; 0053e0b8
    MOV dword ptr [ESP + 0x128],EAX     ; 0053e0bf
    FSTP float ptr [ESP + 0xf4]         ; 0053e0c6
    MOV EAX,dword ptr [EBP + 0x8]       ; 0053e0cd
    FADD float ptr [ESP + 0x128]        ; 0053e0d0
    MOV dword ptr [ESP + 0xfc],EAX      ; 0053e0d7
    FSTP float ptr [ESP + 0xf8]         ; 0053e0de
    MOVSD ES:EDI,ESI                    ; 0053e0e5
    MOVSD ES:EDI,ESI                    ; 0053e0e6
    MOVSD ES:EDI,ESI                    ; 0053e0e7
    MOV EAX,dword ptr [ESP + 0x148]     ; 0053e0e8
    FLD float ptr [ESP + 0x10c]         ; 0053e0ef
    FMUL float ptr [EAX + 0x2824]       ; 0053e0f6
    FLD float ptr [ESP + 0x110]         ; 0053e0fc
    FMUL float ptr [EAX + 0x2824]       ; 0053e103
    FLD float ptr [ESP + 0x114]         ; 0053e109
    FMUL float ptr [EAX + 0x2824]       ; 0053e110
    LEA EDX,[ESP + 0x4c]                ; 0053e116
    LEA EDI,[ESP + 0x7c]                ; 0053e11a
    LEA ESI,[ESP + 0x70]                ; 0053e11e
    FXCH ST2                            ; 0053e122
    FSTP float ptr [ESP + 0x70]         ; 0053e124
    FSTP float ptr [ESP + 0x74]         ; 0053e128
    FSTP float ptr [ESP + 0x78]         ; 0053e12c
    LEA EAX,[ESP + 0x7c]                ; 0053e130
    MOVSD ES:EDI,ESI                    ; 0053e134
    MOVSD ES:EDI,ESI                    ; 0053e135
    MOVSD ES:EDI,ESI                    ; 0053e136
    CMP EDX,EAX                         ; 0053e137
    JZ 0x0053e159                       ; 0053e139
        ;   XREF to: 0053e159 (CONDITIONAL_JUMP)  ; LAB_0053e159
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0053e13b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053e13f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0053e143
    MOV dword ptr [ESP + 0x50],EAX      ; 0053e14a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0053e14e
    MOV dword ptr [ESP + 0x54],EAX      ; 0053e155
    LEA EBX,[ESP + 0x34]                ; 0053e159
        ;   Label: LAB_0053e159
    LEA EAX,[ESP + 0x4c]                ; 0053e15d
    MOV EDX,dword ptr [0x0060b280]      ; 0053e161 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0053e167
    FMUL float ptr [0x005fb3e0]         ; 0053e169 | DAT_005fb3e0
    FISTP dword ptr [EBX]               ; 0053e16f
    FLD float ptr [EAX + 0x4]           ; 0053e171
    FMUL float ptr [0x005fb3e0]         ; 0053e174 | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x4]         ; 0053e17a
    FLD float ptr [EAX + 0x8]           ; 0053e17d
    FMUL float ptr [0x005fb3e0]         ; 0053e180 | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x8]         ; 0053e186
    LEA EAX,[ESP + 0x34]                ; 0053e189
    PUSH EAX                            ; 0053e18d
    MOV EAX,dword ptr [EDX]             ; 0053e18e
    PUSH EAX                            ; 0053e190
    LEA EDI,[ESP + 0x48]                ; 0053e191
    LEA ESI,[ESP + 0x30]                ; 0053e195
    CALL engine_special.cpp_FUN_0055d723 ; 0053e199
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005fb410]          ; 0053e19e | DAT_005fb410
    FLD float ptr [EBP]                 ; 0053e1a4
    FLD float ptr [EBP + 0x4]           ; 0053e1a7
    MOV EAX,[0x005fb414]                ; 0053e1aa | DAT_005fb414
    ADD ESP,0x8                         ; 0053e1af
    FXCH ST2                            ; 0053e1b2
    FCHS                                ; 0053e1b4
    MOV dword ptr [ESP + 0x12c],EAX     ; 0053e1b6
    FADDP                               ; 0053e1bd
    MOV EAX,dword ptr [EBP + 0x8]       ; 0053e1bf
    FSTP float ptr [ESP + 0x28]         ; 0053e1c2
    FADD float ptr [ESP + 0x12c]        ; 0053e1c6
    MOV dword ptr [ESP + 0x30],EAX      ; 0053e1cd
    FSTP float ptr [ESP + 0x2c]         ; 0053e1d1
    MOVSD ES:EDI,ESI                    ; 0053e1d5
    MOVSD ES:EDI,ESI                    ; 0053e1d6
    MOVSD ES:EDI,ESI                    ; 0053e1d7
    MOV EAX,dword ptr [ESP + 0x148]     ; 0053e1d8
    FLD float ptr [ESP + 0x40]          ; 0053e1df
    FMUL float ptr [EAX + 0x2824]       ; 0053e1e3
    FLD float ptr [ESP + 0x44]          ; 0053e1e9
    FMUL float ptr [EAX + 0x2824]       ; 0053e1ed
    FLD float ptr [ESP + 0x48]          ; 0053e1f3
    FMUL float ptr [EAX + 0x2824]       ; 0053e1f7
    LEA EDX,[ESP + 0x4c]                ; 0053e1fd
    LEA EDI,[ESP + 0xa0]                ; 0053e201
    LEA ESI,[ESP + 0xb8]                ; 0053e208
    FXCH ST2                            ; 0053e20f
    FSTP float ptr [ESP + 0xb8]         ; 0053e211
    FSTP float ptr [ESP + 0xbc]         ; 0053e218
    FSTP float ptr [ESP + 0xc0]         ; 0053e21f
    LEA EAX,[ESP + 0xa0]                ; 0053e226
    MOVSD ES:EDI,ESI                    ; 0053e22d
    MOVSD ES:EDI,ESI                    ; 0053e22e
    MOVSD ES:EDI,ESI                    ; 0053e22f
    CMP EDX,EAX                         ; 0053e230
    JZ 0x0053e255                       ; 0053e232
        ;   XREF to: 0053e255 (CONDITIONAL_JUMP)  ; LAB_0053e255
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0053e234
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053e23b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0053e23f
    MOV dword ptr [ESP + 0x50],EAX      ; 0053e246
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0053e24a
    MOV dword ptr [ESP + 0x54],EAX      ; 0053e251
    LEA EBX,[ESP + 0x118]               ; 0053e255
        ;   Label: LAB_0053e255
    LEA EAX,[ESP + 0x4c]                ; 0053e25c
    MOV EDX,dword ptr [0x0060b280]      ; 0053e260 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0053e266
    FMUL float ptr [0x005fb3e0]         ; 0053e268 | DAT_005fb3e0
    FISTP dword ptr [EBX]               ; 0053e26e
    FLD float ptr [EAX + 0x4]           ; 0053e270
    FMUL float ptr [0x005fb3e0]         ; 0053e273 | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x4]         ; 0053e279
    FLD float ptr [EAX + 0x8]           ; 0053e27c
    FMUL float ptr [0x005fb3e0]         ; 0053e27f | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x8]         ; 0053e285
    LEA EAX,[ESP + 0x118]               ; 0053e288
    PUSH EAX                            ; 0053e28f
    MOV EAX,dword ptr [EDX]             ; 0053e290
    ADD EAX,0x30                        ; 0053e292
    PUSH EAX                            ; 0053e295
    LEA EDI,[ESP + 0xcc]                ; 0053e296
    LEA ESI,[ESP + 0x9c]                ; 0053e29d
    CALL engine_special.cpp_FUN_0055d723 ; 0053e2a4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005fb414]          ; 0053e2a9 | DAT_005fb414
    FLD float ptr [0x005fb410]          ; 0053e2af | DAT_005fb410
    FLD float ptr [EBP + 0x4]           ; 0053e2b5
    ADD ESP,0x8                         ; 0053e2b8
    FXCH ST2                            ; 0053e2bb
    FCHS                                ; 0053e2bd
    MOV EAX,dword ptr [EBP + 0x8]       ; 0053e2bf
    FXCH                                ; 0053e2c2
    FCHS                                ; 0053e2c4
    MOV dword ptr [ESP + 0x9c],EAX      ; 0053e2c6
    FADD float ptr [EBP]                ; 0053e2cd
    FXCH ST2                            ; 0053e2d0
    FADDP                               ; 0053e2d2
    FXCH                                ; 0053e2d4
    FSTP float ptr [ESP + 0x94]         ; 0053e2d6
    FSTP float ptr [ESP + 0x98]         ; 0053e2dd
    MOVSD ES:EDI,ESI                    ; 0053e2e4
    MOVSD ES:EDI,ESI                    ; 0053e2e5
    MOVSD ES:EDI,ESI                    ; 0053e2e6
    MOV EAX,dword ptr [ESP + 0x148]     ; 0053e2e7
    FLD float ptr [ESP + 0xc4]          ; 0053e2ee
    FMUL float ptr [EAX + 0x2824]       ; 0053e2f5
    FLD float ptr [ESP + 0xc8]          ; 0053e2fb
    FMUL float ptr [EAX + 0x2824]       ; 0053e302
    FLD float ptr [ESP + 0xcc]          ; 0053e308
    FMUL float ptr [EAX + 0x2824]       ; 0053e30f
    LEA EDX,[ESP + 0x4c]                ; 0053e315
    LEA EDI,[ESP + 0xe8]                ; 0053e319
    LEA ESI,[ESP + 0xdc]                ; 0053e320
    FXCH ST2                            ; 0053e327
    FSTP float ptr [ESP + 0xdc]         ; 0053e329
    FSTP float ptr [ESP + 0xe0]         ; 0053e330
    FSTP float ptr [ESP + 0xe4]         ; 0053e337
    LEA EAX,[ESP + 0xe8]                ; 0053e33e
    MOVSD ES:EDI,ESI                    ; 0053e345
    MOVSD ES:EDI,ESI                    ; 0053e346
    MOVSD ES:EDI,ESI                    ; 0053e347
    CMP EDX,EAX                         ; 0053e348
    JZ 0x0053e36d                       ; 0053e34a
        ;   XREF to: 0053e36d (CONDITIONAL_JUMP)  ; LAB_0053e36d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0053e34c
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053e353
    MOV EAX,dword ptr [ESP + 0xec]      ; 0053e357
    MOV dword ptr [ESP + 0x50],EAX      ; 0053e35e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0053e362
    MOV dword ptr [ESP + 0x54],EAX      ; 0053e369
    LEA EBX,[ESP + 0x58]                ; 0053e36d
        ;   Label: LAB_0053e36d
    LEA EAX,[ESP + 0x4c]                ; 0053e371
    MOV EDX,dword ptr [0x0060b280]      ; 0053e375 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0053e37b
    FMUL float ptr [0x005fb3e0]         ; 0053e37d | DAT_005fb3e0
    FISTP dword ptr [EBX]               ; 0053e383
    FLD float ptr [EAX + 0x4]           ; 0053e385
    FMUL float ptr [0x005fb3e0]         ; 0053e388 | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x4]         ; 0053e38e
    FLD float ptr [EAX + 0x8]           ; 0053e391
    FMUL float ptr [0x005fb3e0]         ; 0053e394 | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x8]         ; 0053e39a
    LEA EAX,[ESP + 0x58]                ; 0053e39d
    PUSH EAX                            ; 0053e3a1
    MOV EAX,dword ptr [EDX]             ; 0053e3a2
    ADD EAX,0x60                        ; 0053e3a4
    PUSH EAX                            ; 0053e3a7
    LEA EDI,[ESP + 0x90]                ; 0053e3a8
    LEA ESI,[ESP + 0x6c]                ; 0053e3af
    CALL engine_special.cpp_FUN_0055d723 ; 0053e3b3
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005fb414]          ; 0053e3b8 | DAT_005fb414
    FLD float ptr [0x005fb410]          ; 0053e3be | DAT_005fb410
    FLD float ptr [EBP + 0x4]           ; 0053e3c4
    ADD ESP,0x8                         ; 0053e3c7
    MOV EAX,dword ptr [EBP + 0x8]       ; 0053e3ca
    FXCH ST2                            ; 0053e3cd
    FCHS                                ; 0053e3cf
    MOV dword ptr [ESP + 0x6c],EAX      ; 0053e3d1
    FXCH                                ; 0053e3d5
    FADD float ptr [EBP]                ; 0053e3d7
    FXCH ST2                            ; 0053e3da
    FADDP                               ; 0053e3dc
    FXCH                                ; 0053e3de
    FSTP float ptr [ESP + 0x64]         ; 0053e3e0
    FSTP float ptr [ESP + 0x68]         ; 0053e3e4
    MOVSD ES:EDI,ESI                    ; 0053e3e8
    MOVSD ES:EDI,ESI                    ; 0053e3e9
    MOVSD ES:EDI,ESI                    ; 0053e3ea
    MOV EAX,dword ptr [ESP + 0x148]     ; 0053e3eb
    FLD float ptr [ESP + 0x88]          ; 0053e3f2
    FMUL float ptr [EAX + 0x2824]       ; 0053e3f9
    FLD float ptr [ESP + 0x8c]          ; 0053e3ff
    FMUL float ptr [EAX + 0x2824]       ; 0053e406
    FLD float ptr [ESP + 0x90]          ; 0053e40c
    FMUL float ptr [EAX + 0x2824]       ; 0053e413
    LEA EBX,[ESP + 0x4c]                ; 0053e419
    LEA EDI,[ESP + 0x100]               ; 0053e41d
    LEA ESI,[ESP + 0xd0]                ; 0053e424
    FXCH ST2                            ; 0053e42b
    FSTP float ptr [ESP + 0xd0]         ; 0053e42d
    FSTP float ptr [ESP + 0xd4]         ; 0053e434
    FSTP float ptr [ESP + 0xd8]         ; 0053e43b
    LEA EAX,[ESP + 0x100]               ; 0053e442
    MOVSD ES:EDI,ESI                    ; 0053e449
    MOVSD ES:EDI,ESI                    ; 0053e44a
    MOVSD ES:EDI,ESI                    ; 0053e44b
    CMP EBX,EAX                         ; 0053e44c
    JZ 0x0053e471                       ; 0053e44e
        ;   XREF to: 0053e471 (CONDITIONAL_JUMP)  ; LAB_0053e471
    MOV EAX,dword ptr [ESP + 0x100]     ; 0053e450
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053e457
    MOV EAX,dword ptr [ESP + 0x104]     ; 0053e45b
    MOV dword ptr [ESP + 0x50],EAX      ; 0053e462
    MOV EAX,dword ptr [ESP + 0x108]     ; 0053e466
    MOV dword ptr [ESP + 0x54],EAX      ; 0053e46d
    LEA EBX,[ESP + 0xac]                ; 0053e471
        ;   Label: LAB_0053e471
    LEA EAX,[ESP + 0x4c]                ; 0053e478
    MOV EBP,dword ptr [0x0060b280]      ; 0053e47c | DAT_0060b280
    FLD float ptr [EAX]                 ; 0053e482
    FMUL float ptr [0x005fb3e0]         ; 0053e484 | DAT_005fb3e0
    FISTP dword ptr [EBX]               ; 0053e48a
    FLD float ptr [EAX + 0x4]           ; 0053e48c
    FMUL float ptr [0x005fb3e0]         ; 0053e48f | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x4]         ; 0053e495
    FLD float ptr [EAX + 0x8]           ; 0053e498
    FMUL float ptr [0x005fb3e0]         ; 0053e49b | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x8]         ; 0053e4a1
    LEA EAX,[ESP + 0xac]                ; 0053e4a4
    PUSH EAX                            ; 0053e4ab
    MOV EAX,dword ptr [EBP]             ; 0053e4ac
    ADD EAX,0x90                        ; 0053e4af
    PUSH EAX                            ; 0053e4b4
    CALL engine_special.cpp_FUN_0055d723 ; 0053e4b5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0053e4ba | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 0053e4bf
    MOV dword ptr [EDX + 0x20],0xffff   ; 0053e4c1
    MOV EBX,dword ptr [EAX]             ; 0053e4c8
    MOV dword ptr [EBX + 0x24],0x0      ; 0053e4ca
    MOV EBX,dword ptr [EAX]             ; 0053e4d1
    MOV dword ptr [EBX + 0x28],0x0      ; 0053e4d3
    MOV EDX,dword ptr [EAX]             ; 0053e4da
    MOV dword ptr [EDX + 0x50],0xffff   ; 0053e4dc
    MOV EDX,dword ptr [EAX]             ; 0053e4e3
    MOV dword ptr [EDX + 0x54],0x0      ; 0053e4e5
    MOV EBX,dword ptr [EAX]             ; 0053e4ec
    MOV dword ptr [EBX + 0x58],0x0      ; 0053e4ee
    MOV EBX,dword ptr [EAX]             ; 0053e4f5
    MOV dword ptr [EBX + 0x80],0xffff   ; 0053e4f7
    MOV EBX,dword ptr [EAX]             ; 0053e501
    MOV dword ptr [EBX + 0x84],0x0      ; 0053e503
    MOV EBX,dword ptr [EAX]             ; 0053e50d
    MOV dword ptr [EBX + 0x88],0x0      ; 0053e50f
    MOV EBX,dword ptr [EAX]             ; 0053e519
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0053e51b
    MOV EDX,dword ptr [EAX]             ; 0053e525
    MOV dword ptr [EDX + 0xb4],0x0      ; 0053e527
    MOV EBX,dword ptr [EAX]             ; 0053e531
    MOV dword ptr [EBX + 0xb8],0x0      ; 0053e533
    MOV EBX,dword ptr [EAX]             ; 0053e53d
    MOV dword ptr [EBX + 0x2c],0x4000   ; 0053e53f
    MOV EBX,dword ptr [EAX]             ; 0053e546
    MOV dword ptr [EBX + 0x5c],0x4000   ; 0053e548
    MOV EBX,dword ptr [EAX]             ; 0053e54f
    MOV dword ptr [EBX + 0x8c],0x4000   ; 0053e551
    MOV EDX,dword ptr [EAX]             ; 0053e55b
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0053e55d
    MOV EBX,dword ptr [EAX]             ; 0053e567
    MOV dword ptr [EBX + 0x18],0x80000  ; 0053e569
    MOV EDX,dword ptr [EAX]             ; 0053e570
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0053e572
    MOV EBX,dword ptr [EAX]             ; 0053e579
    ADD ESP,0x8                         ; 0053e57b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0053e57e
    MOV EBX,dword ptr [EAX]             ; 0053e585
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0053e587
    MOV EBX,dword ptr [EAX]             ; 0053e58e
    MOV dword ptr [EBX + 0x78],0xf80000 ; 0053e590
    MOV EBX,dword ptr [EAX]             ; 0053e597
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0053e599
    MOV EBX,dword ptr [EAX]             ; 0053e5a0
    MOV EDX,0x4                         ; 0053e5a2
    MOV dword ptr [EBX + 0xa8],0x80000  ; 0053e5a7
    PUSH 0x61bb70                       ; 0053e5b1
    MOV EBX,dword ptr [EAX]             ; 0053e5b6
    XOR ECX,ECX                         ; 0053e5b8
    PUSH EAX                            ; 0053e5ba
    MOV dword ptr [EBX + 0xac],0x80000  ; 0053e5bb
    MOV EBX,0x3                         ; 0053e5c5
    MOV dword ptr [ESP + 0xc],EDX       ; 0053e5ca
    MOV dword ptr [ESP + 0x1c],ECX      ; 0053e5ce
    MOV dword ptr [ESP + 0x18],ECX      ; 0053e5d2
    MOV dword ptr [ESP + 0x14],ECX      ; 0053e5d6
    MOV dword ptr [ESP + 0x10],ECX      ; 0053e5da
    MOV dword ptr [ESP + 0x20],ECX      ; 0053e5de
    MOV EDX,0x1                         ; 0053e5e2
    MOV ECX,0x2                         ; 0053e5e7
    MOV dword ptr [ESP + 0x2c],EBX      ; 0053e5ec
    MOV dword ptr [ESP + 0x24],EDX      ; 0053e5f0
    MOV dword ptr [ESP + 0x28],ECX      ; 0053e5f4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0053e5f8
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0053e5fd
    PUSH 0x1                            ; 0053e600
    MOV ESI,dword ptr [0x0060b280]      ; 0053e602 | DAT_0060b280
    PUSH ESI                            ; 0053e608
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0053e609
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053e60e
    MOV EAX,ESP                         ; 0053e611
    PUSH EAX                            ; 0053e613
    MOV EDI,dword ptr [0x0060b280]      ; 0053e614 | DAT_0060b280
    PUSH EDI                            ; 0053e61a
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0053e61b
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0053e620
    XOR EBP,EBP                         ; 0053e623
    PUSH EBP                            ; 0053e625
    MOV EBP,dword ptr [0x0060b280]      ; 0053e626 | DAT_0060b280
    PUSH EBP                            ; 0053e62c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0053e62d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053e632
    ADD ESP,0x134                       ; 0053e635
    POP EBP                             ; 0053e63b
    POP EDI                             ; 0053e63c
    POP ESI                             ; 0053e63d
    POP EBX                             ; 0053e63e
    RET                                 ; 0053e63f

