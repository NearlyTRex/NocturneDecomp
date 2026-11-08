; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059f0e0(int param_1,float param_2)
;
;
; Called Functions:
;   FUN_00423a10
;   FUN_00423a60
;   FUN_00424430
;   FUN_00424470
;   FUN_00429420
;   FUN_00429e90
;   FUN_00544f00
;   FUN_0059f390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f0e0
        ;   Label: FUN_0059f0e0
    PUSH EDI                            ; 0059f0e1
    PUSH EBP                            ; 0059f0e2
    SUB ESP,0x9c                        ; 0059f0e3
    MOV EBX,dword ptr [ESP + 0xac]      ; 0059f0e9
    XOR EDX,EDX                         ; 0059f0f0
    LEA EAX,[ESP + 0x30]                ; 0059f0f2
    MOV dword ptr [ESP + 0x34],EDX      ; 0059f0f6
    MOV dword ptr [ESP + 0x38],EDX      ; 0059f0fa
    MOV dword ptr [ESP + 0x30],EDX      ; 0059f0fe
    LEA EDX,[EBX + 0x11354]             ; 0059f102
    CMP EDX,EAX                         ; 0059f108
    JZ 0x0059f120                       ; 0059f10a
        ;   XREF to: 0059f120 (CONDITIONAL_JUMP)  ; LAB_0059f120
    MOV dword ptr [EDX],0x0             ; 0059f10c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059f112
    MOV dword ptr [EDX + 0x4],EAX       ; 0059f116
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059f119
    MOV dword ptr [EDX + 0x8],EAX       ; 0059f11d
    PUSH EBX                            ; 0059f120
        ;   Label: LAB_0059f120
    CALL FUN_00424430                   ; 0059f121
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; undefined FUN_00424430()
    ADD ESP,0x4                         ; 0059f126
    TEST EAX,EAX                        ; 0059f129
    JZ 0x0059f30b                       ; 0059f12b
        ;   XREF to: 0059f30b (CONDITIONAL_JUMP)  ; LAB_0059f30b
    PUSH ESI                            ; 0059f131
    LEA ECX,[EBX + 0x2588]              ; 0059f132
    FLD float ptr [ESP + 0xb4]          ; 0059f138
    FLD float ptr [ECX]                 ; 0059f13f
    FMUL ST1                            ; 0059f141
    FLD float ptr [ECX + 0x4]           ; 0059f143
    FMUL ST2                            ; 0059f146
    FLD float ptr [ECX + 0x8]           ; 0059f148
    FMULP ST3                           ; 0059f14b
    LEA EDI,[ESP + 0x7c]                ; 0059f14d
    LEA ESI,[ESP + 0x4c]                ; 0059f151
    LEA EAX,[EBX + 0x257c]              ; 0059f155
    FXCH                                ; 0059f15b
    FSTP float ptr [ESP + 0x4c]         ; 0059f15d
    FSTP float ptr [ESP + 0x50]         ; 0059f161
    FSTP float ptr [ESP + 0x54]         ; 0059f165
    MOVSD ES:EDI,ESI                    ; 0059f169
    MOVSD ES:EDI,ESI                    ; 0059f16a
    MOVSD ES:EDI,ESI                    ; 0059f16b
    LEA EDX,[EBX + 0x2508]              ; 0059f16c
    FLD float ptr [ESP + 0x7c]          ; 0059f172
    FLD float ptr [ESP + 0x80]          ; 0059f176
    FLD float ptr [ESP + 0x84]          ; 0059f17d
    LEA EDI,[ESP + 0x4]                 ; 0059f184
    LEA ESI,[ESP + 0x64]                ; 0059f188
    FXCH ST2                            ; 0059f18c
    FADD float ptr [EAX]                ; 0059f18e
    FXCH                                ; 0059f190
    FADD float ptr [EAX + 0x4]          ; 0059f192
    FXCH ST2                            ; 0059f195
    FADD float ptr [EAX + 0x8]          ; 0059f197
    FXCH                                ; 0059f19a
    FSTP float ptr [ESP + 0x64]         ; 0059f19c
    FXCH                                ; 0059f1a0
    FSTP float ptr [ESP + 0x68]         ; 0059f1a2
    FSTP float ptr [ESP + 0x6c]         ; 0059f1a6
    MOVSD ES:EDI,ESI                    ; 0059f1aa
    MOVSD ES:EDI,ESI                    ; 0059f1ab
    MOVSD ES:EDI,ESI                    ; 0059f1ac
    LEA EAX,[ESP + 0x70]                ; 0059f1ad
    FLD float ptr [ESP + 0x4]           ; 0059f1b1
    FLD float ptr [ESP + 0x8]           ; 0059f1b5
    FLD float ptr [ESP + 0xc]           ; 0059f1b9
    LEA EDI,[ESP + 0x70]                ; 0059f1bd
    LEA ESI,[ESP + 0x58]                ; 0059f1c1
    FXCH ST2                            ; 0059f1c5
    FADD float ptr [EDX]                ; 0059f1c7
    FXCH                                ; 0059f1c9
    FADD float ptr [EDX + 0x4]          ; 0059f1cb
    FXCH ST2                            ; 0059f1ce
    FADD float ptr [EDX + 0x8]          ; 0059f1d0
    FXCH                                ; 0059f1d3
    FSTP float ptr [ESP + 0x58]         ; 0059f1d5
    FXCH                                ; 0059f1d9
    FSTP float ptr [ESP + 0x5c]         ; 0059f1db
    FSTP float ptr [ESP + 0x60]         ; 0059f1df
    LEA EDX,[EBX + 0x11354]             ; 0059f1e3
    MOVSD ES:EDI,ESI                    ; 0059f1e9
    MOVSD ES:EDI,ESI                    ; 0059f1ea
    MOVSD ES:EDI,ESI                    ; 0059f1eb
    CMP EDX,EAX                         ; 0059f1ec
    JZ 0x0059f204                       ; 0059f1ee
        ;   XREF to: 0059f204 (CONDITIONAL_JUMP)  ; LAB_0059f204
    MOV EAX,dword ptr [ESP + 0x70]      ; 0059f1f0
    MOV dword ptr [EDX],EAX             ; 0059f1f4
    MOV EAX,dword ptr [ESP + 0x74]      ; 0059f1f6
    MOV dword ptr [EDX + 0x4],EAX       ; 0059f1fa
    MOV EAX,dword ptr [ESP + 0x78]      ; 0059f1fd
    MOV dword ptr [EDX + 0x8],EAX       ; 0059f201
    PUSH dword ptr [ESP + 0xb4]         ; 0059f204
        ;   Label: LAB_0059f204
    PUSH EBX                            ; 0059f20b
    CALL FUN_00423a10                   ; 0059f20c
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    LEA ECX,[EBX + 0x2588]              ; 0059f211
    ADD ESP,0x8                         ; 0059f217
    FLD float ptr [ECX]                 ; 0059f21a
    FMUL float ptr [ESP + 0xb4]         ; 0059f21c
    FLD float ptr [ECX + 0x4]           ; 0059f223
    FMUL float ptr [ESP + 0xb4]         ; 0059f226
    FLD float ptr [ECX + 0x8]           ; 0059f22d
    FMUL float ptr [ESP + 0xb4]         ; 0059f230
    LEA EDI,[ESP + 0x94]                ; 0059f237
    LEA ESI,[ESP + 0x28]                ; 0059f23e
    FXCH ST2                            ; 0059f242
    FSTP float ptr [ESP + 0x28]         ; 0059f244
    FSTP float ptr [ESP + 0x2c]         ; 0059f248
    FSTP float ptr [ESP + 0x30]         ; 0059f24c
    MOVSD ES:EDI,ESI                    ; 0059f250
    MOVSD ES:EDI,ESI                    ; 0059f251
    MOVSD ES:EDI,ESI                    ; 0059f252
    LEA EDX,[EBX + 0x257c]              ; 0059f253
    FLD float ptr [ESP + 0x94]          ; 0059f259
    FLD float ptr [ESP + 0x98]          ; 0059f260
    FLD float ptr [ESP + 0x9c]          ; 0059f267
    LEA EDI,[ESP + 0x1c]                ; 0059f26e
    LEA ESI,[ESP + 0x10]                ; 0059f272
    FXCH ST2                            ; 0059f276
    FADD float ptr [EDX]                ; 0059f278
    FXCH                                ; 0059f27a
    FADD float ptr [EDX + 0x4]          ; 0059f27c
    FXCH ST2                            ; 0059f27f
    FADD float ptr [EDX + 0x8]          ; 0059f281
    FXCH                                ; 0059f284
    FSTP float ptr [ESP + 0x10]         ; 0059f286
    FXCH                                ; 0059f28a
    FSTP float ptr [ESP + 0x14]         ; 0059f28c
    FSTP float ptr [ESP + 0x18]         ; 0059f290
    MOVSD ES:EDI,ESI                    ; 0059f294
    MOVSD ES:EDI,ESI                    ; 0059f295
    MOVSD ES:EDI,ESI                    ; 0059f296
    LEA EAX,[EBX + 0x2508]              ; 0059f297
    FLD float ptr [ESP + 0x1c]          ; 0059f29d
    FLD float ptr [ESP + 0x20]          ; 0059f2a1
    FLD float ptr [ESP + 0x24]          ; 0059f2a5
    LEA EDI,[ESP + 0x88]                ; 0059f2a9
    LEA ESI,[ESP + 0x40]                ; 0059f2b0
    FXCH ST2                            ; 0059f2b4
    FADD float ptr [EAX]                ; 0059f2b6
    FXCH                                ; 0059f2b8
    FADD float ptr [EAX + 0x4]          ; 0059f2ba
    FXCH ST2                            ; 0059f2bd
    FADD float ptr [EAX + 0x8]          ; 0059f2bf
    FXCH                                ; 0059f2c2
    FSTP float ptr [ESP + 0x40]         ; 0059f2c4
    FXCH                                ; 0059f2c8
    FSTP float ptr [ESP + 0x44]         ; 0059f2ca
    FSTP float ptr [ESP + 0x48]         ; 0059f2ce
    MOVSD ES:EDI,ESI                    ; 0059f2d2
    MOVSD ES:EDI,ESI                    ; 0059f2d3
    MOVSD ES:EDI,ESI                    ; 0059f2d4
    MOV dword ptr [EDX + 0x8],0x0       ; 0059f2d5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059f2dc
    MOV dword ptr [EDX + 0x4],ECX       ; 0059f2df
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059f2e2
    MOV dword ptr [EDX],ECX             ; 0059f2e5
    MOV dword ptr [EAX + 0x8],0x0       ; 0059f2e7
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059f2ee
    MOV dword ptr [EAX + 0x4],EDX       ; 0059f2f1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059f2f4
    MOV dword ptr [EAX],EDX             ; 0059f2f7
    LEA EAX,[ESP + 0x88]                ; 0059f2f9
    PUSH EAX                            ; 0059f300
    PUSH EBX                            ; 0059f301
    CALL FUN_00423a60                   ; 0059f302
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 0059f307
    POP ESI                             ; 0059f30a
    PUSH EBX                            ; 0059f30b
        ;   Label: LAB_0059f30b
    CALL FUN_00424470                   ; 0059f30c
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 0059f311
    LEA EAX,[EBX + 0x2b4]               ; 0059f314
    PUSH EAX                            ; 0059f31a
    CALL FUN_00544f00                   ; 0059f31b
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 0059f320
    PUSH EBX                            ; 0059f323
    CALL FUN_0059f390                   ; 0059f324
        ;   XREF to: 0059f390 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f390()
    MOV EDI,dword ptr [EBX + 0x27d0]    ; 0059f329
    ADD ESP,0x4                         ; 0059f32f
    TEST EDI,EDI                        ; 0059f332
    JNZ 0x0059f371                      ; 0059f334
        ;   XREF to: 0059f371 (CONDITIONAL_JUMP)  ; LAB_0059f371
    MOV EBP,dword ptr [EBX + 0x10a78]   ; 0059f336
    TEST EBP,EBP                        ; 0059f33c
    JZ 0x0059f37d                       ; 0059f33e
        ;   XREF to: 0059f37d (CONDITIONAL_JUMP)  ; LAB_0059f37d
    PUSH EDI                            ; 0059f340
    PUSH dword ptr [ESP + 0xb4]         ; 0059f341
    PUSH EBX                            ; 0059f348
    MOV dword ptr [EBX + 0x27cc],EBP    ; 0059f349
    CALL FUN_00429420                   ; 0059f34f
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; undefined FUN_00429420()
        ;   Label: LAB_0059f34f
    ADD ESP,0xc                         ; 0059f354
    PUSH dword ptr [ESP + 0xb0]         ; 0059f357
    PUSH EBX                            ; 0059f35e
    CALL FUN_00429e90                   ; 0059f35f
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 0059f364
    ADD ESP,0x9c                        ; 0059f367
    POP EBP                             ; 0059f36d
    POP EDI                             ; 0059f36e
    POP EBX                             ; 0059f36f
    RET                                 ; 0059f370
    PUSH 0x0                            ; 0059f371
        ;   Label: LAB_0059f371
    PUSH dword ptr [ESP + 0xb4]         ; 0059f373
    PUSH EBX                            ; 0059f37a
    JMP 0x0059f34f                      ; 0059f37b
        ;   XREF to: 0059f34f (UNCONDITIONAL_JUMP)  ; LAB_0059f34f
    PUSH 0x1                            ; 0059f37d
        ;   Label: LAB_0059f37d
    PUSH dword ptr [ESP + 0xb4]         ; 0059f37f
    PUSH EBX                            ; 0059f386
    MOV dword ptr [EBX + 0x27cc],EDI    ; 0059f387
    JMP 0x0059f34f                      ; 0059f38d
        ;   XREF to: 0059f34f (UNCONDITIONAL_JUMP)  ; LAB_0059f34f

