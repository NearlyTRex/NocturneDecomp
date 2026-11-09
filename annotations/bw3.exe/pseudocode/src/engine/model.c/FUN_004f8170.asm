; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * engine_model_c_FUN_004f8170(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_FUN_005a28c0
;   engine_boss.c_FUN_0041acc0
;   engine_model.c_FUN_004f80f0
;   engine_model.c_loadModelFile_FUN_004f7f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8170
        ;   Label: engine_model.c_FUN_004f8170
    PUSH EDI                            ; 004f8171
    PUSH EBP                            ; 004f8172
    SUB ESP,0x154                       ; 004f8173
    MOV EAX,dword ptr [ESP + 0x164]     ; 004f8179
    MOV dword ptr [ESP + 0x130],ESI     ; 004f8180
    MOV EDX,dword ptr [EAX]             ; 004f8187
    MOV EBX,EAX                         ; 004f8189
    CMP EDX,0x20                        ; 004f818b
    JZ 0x004f8580                       ; 004f818e
        ;   XREF to: 004f8580 (CONDITIONAL_JUMP)  ; LAB_004f8580
    CMP EDX,0x26                        ; 004f8194
    JZ 0x004f85ce                       ; 004f8197
        ;   XREF to: 004f85ce (CONDITIONAL_JUMP)  ; LAB_004f85ce
    LEA EDX,[EAX + 0x8]                 ; 004f819d
    MOV dword ptr [ESP + 0x138],EDX     ; 004f81a0
    LEA EDX,[EAX + 0x14]                ; 004f81a7
    MOV ESI,dword ptr [EAX]             ; 004f81aa
    MOV dword ptr [ESP + 0x12c],EDX     ; 004f81ac
    CMP ESI,0x14                        ; 004f81b3
    JNZ 0x004f85f3                      ; 004f81b6
        ;   XREF to: 004f85f3 (CONDITIONAL_JUMP)  ; LAB_004f85f3
    MOV EAX,0x7fffffff                  ; 004f81bc
        ;   Label: LAB_004f81bc
    MOV EDX,EAX                         ; 004f81c1
    MOV ECX,dword ptr [EBX + 0x4]       ; 004f81c3
    SAR EDX,0x1f                        ; 004f81c6
    IDIV ECX                            ; 004f81c9
    ADD EAX,EAX                         ; 004f81cb
    MOV dword ptr [ESP + 0x134],EAX     ; 004f81cd
    MOV EAX,dword ptr [ESP + 0x138]     ; 004f81d4
    CMP dword ptr [EAX],0x2             ; 004f81db
    JZ 0x004f8213                       ; 004f81de
        ;   XREF to: 004f8213 (CONDITIONAL_JUMP)  ; LAB_004f8213
    PUSH 0x5c9061                       ; 004f81e0
    LEA EAX,[ESP + 0x4]                 ; 004f81e5
    PUSH EAX                            ; 004f81e9
    MOV ESI,0x5c9084                    ; 004f81ea
    CALL crt_unknown.c_FUN_005a28c0     ; 004f81ef
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 004f81f4
    MOV EAX,ESP                         ; 004f81f7
    MOV EDI,0x177                       ; 004f81f9
    PUSH EAX                            ; 004f81fe
    MOV dword ptr [0x01d71de0],ESI      ; 004f81ff | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004f8205 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f820b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f8210
    MOV EBP,0x80000000                  ; 004f8213
        ;   Label: LAB_004f8213
    MOV EAX,0x7fffffff                  ; 004f8218
    XOR EDX,EDX                         ; 004f821d
    MOV EDI,EBP                         ; 004f821f
    MOV ESI,EBP                         ; 004f8221
    MOV dword ptr [ESP + 0x140],EAX     ; 004f8223
    MOV ECX,EAX                         ; 004f822a
    MOV EBX,EAX                         ; 004f822c
    MOV dword ptr [ESP + 0x13c],EBP     ; 004f822e
    MOV EAX,dword ptr [ESP + 0x138]     ; 004f8235
    MOV dword ptr [ESP + 0x144],EDX     ; 004f823c
    MOV dword ptr [ESP + 0x148],EDX     ; 004f8243
    MOV EBP,dword ptr [EAX + 0x8]       ; 004f824a
    MOV dword ptr [ESP + 0x14c],EDX     ; 004f824d
    TEST EBP,EBP                        ; 004f8254
    JLE 0x004f82fb                      ; 004f8256
        ;   XREF to: 004f82fb (CONDITIONAL_JUMP)  ; LAB_004f82fb
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004f825c
    MOV EBP,dword ptr [EAX]             ; 004f8263
        ;   Label: LAB_004f8263
    CMP ESI,EBP                         ; 004f8265
    JGE 0x004f826b                      ; 004f8267
        ;   XREF to: 004f826b (CONDITIONAL_JUMP)  ; LAB_004f826b
    MOV ESI,EBP                         ; 004f8269
    MOV EBP,dword ptr [EAX + 0x4]       ; 004f826b
        ;   Label: LAB_004f826b
    CMP EDI,EBP                         ; 004f826e
    JGE 0x004f8274                      ; 004f8270
        ;   XREF to: 004f8274 (CONDITIONAL_JUMP)  ; LAB_004f8274
    MOV EDI,EBP                         ; 004f8272
    MOV EBP,dword ptr [EAX + 0x8]       ; 004f8274
        ;   Label: LAB_004f8274
    CMP EBP,dword ptr [ESP + 0x13c]     ; 004f8277
    JLE 0x004f8287                      ; 004f827e
        ;   XREF to: 004f8287 (CONDITIONAL_JUMP)  ; LAB_004f8287
    MOV dword ptr [ESP + 0x13c],EBP     ; 004f8280
    MOV EBP,dword ptr [EAX]             ; 004f8287
        ;   Label: LAB_004f8287
    CMP EBX,EBP                         ; 004f8289
    JLE 0x004f828f                      ; 004f828b
        ;   XREF to: 004f828f (CONDITIONAL_JUMP)  ; LAB_004f828f
    MOV EBX,EBP                         ; 004f828d
    MOV EBP,dword ptr [EAX + 0x4]       ; 004f828f
        ;   Label: LAB_004f828f
    CMP ECX,EBP                         ; 004f8292
    JLE 0x004f8298                      ; 004f8294
        ;   XREF to: 004f8298 (CONDITIONAL_JUMP)  ; LAB_004f8298
    MOV ECX,EBP                         ; 004f8296
    MOV EBP,dword ptr [EAX + 0x8]       ; 004f8298
        ;   Label: LAB_004f8298
    CMP EBP,dword ptr [ESP + 0x140]     ; 004f829b
    JGE 0x004f82ab                      ; 004f82a2
        ;   XREF to: 004f82ab (CONDITIONAL_JUMP)  ; LAB_004f82ab
    MOV dword ptr [ESP + 0x140],EBP     ; 004f82a4
    FILD dword ptr [EAX]                ; 004f82ab
        ;   Label: LAB_004f82ab
    FILD dword ptr [EAX + 0x4]          ; 004f82ad
    FILD dword ptr [EAX + 0x8]          ; 004f82b0
    MOV EBP,dword ptr [ESP + 0x138]     ; 004f82b3
    ADD EAX,0xc                         ; 004f82ba
    INC EDX                             ; 004f82bd
    FXCH ST2                            ; 004f82be
    FADD float ptr [ESP + 0x14c]        ; 004f82c0
    FXCH                                ; 004f82c7
    FADD float ptr [ESP + 0x148]        ; 004f82c9
    FXCH ST2                            ; 004f82d0
    FADD float ptr [ESP + 0x144]        ; 004f82d2
    FXCH                                ; 004f82d9
    FSTP float ptr [ESP + 0x14c]        ; 004f82db
    FXCH                                ; 004f82e2
    FSTP float ptr [ESP + 0x148]        ; 004f82e4
    FSTP float ptr [ESP + 0x144]        ; 004f82eb
    CMP EDX,dword ptr [EBP + 0x8]       ; 004f82f2
    JL 0x004f8263                       ; 004f82f5
        ;   XREF to: 004f8263 (CONDITIONAL_JUMP)  ; LAB_004f8263
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f82fb
        ;   Label: LAB_004f82fb
    MOV EDX,ESI                         ; 004f8302
    IMUL EDX                            ; 004f8304
    SHRD EAX,EDX,0x10                   ; 004f8306
    MOV ESI,EAX                         ; 004f830a
    MOV dword ptr [ESP + 0xc4],EAX      ; 004f830c
    MOV EDX,EDI                         ; 004f8313
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f8315
    IMUL EDX                            ; 004f831c
    SHRD EAX,EDX,0x10                   ; 004f831e
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004f8322
    MOV dword ptr [ESP + 0xc8],EAX      ; 004f8329
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f8330
    IMUL EDX                            ; 004f8337
    SHRD EAX,EDX,0x10                   ; 004f8339
    MOV dword ptr [ESP + 0xcc],EAX      ; 004f833d
    MOV EDX,EBX                         ; 004f8344
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f8346
    IMUL EDX                            ; 004f834d
    SHRD EAX,EDX,0x10                   ; 004f834f
    MOV EBX,EAX                         ; 004f8353
    MOV dword ptr [ESP + 0xb8],EAX      ; 004f8355
    MOV EDX,ECX                         ; 004f835c
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f835e
    IMUL EDX                            ; 004f8365
    SHRD EAX,EDX,0x10                   ; 004f8367
    MOV EDX,dword ptr [ESP + 0x140]     ; 004f836b
    MOV dword ptr [ESP + 0xbc],EAX      ; 004f8372
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f8379
    IMUL EDX                            ; 004f8380
    SHRD EAX,EDX,0x10                   ; 004f8382
    MOV dword ptr [ESP + 0xc0],EAX      ; 004f8386
    MOV EAX,dword ptr [ESP + 0x138]     ; 004f838d
    FLD float ptr [ESP + 0x14c]         ; 004f8394
    FILD dword ptr [EAX + 0x8]          ; 004f839b
    FLD1                                ; 004f839e
    FDIVRP                              ; 004f83a0
    FXCH                                ; 004f83a2
    FMUL ST1                            ; 004f83a4
    FLD float ptr [ESP + 0x148]         ; 004f83a6
    FMUL ST2                            ; 004f83ad
    FLD float ptr [ESP + 0x144]         ; 004f83af
    FMULP ST3                           ; 004f83b6
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f83b8
    FXCH                                ; 004f83bf
    FSTP float ptr [ESP + 0x14c]        ; 004f83c1
    FSTP float ptr [ESP + 0x148]        ; 004f83c8
    FLD float ptr [ESP + 0x14c]         ; 004f83cf
    CALL crt_math.c_round_FUN_005a3120  ; 004f83d6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x150]       ; 004f83db
    MOV EDX,dword ptr [ESP + 0x150]     ; 004f83e2
    FSTP float ptr [ESP + 0x144]        ; 004f83e9
    IMUL EDX                            ; 004f83f0
    SHRD EAX,EDX,0x10                   ; 004f83f2
    FLD float ptr [ESP + 0x148]         ; 004f83f6
    MOV dword ptr [ESP + 0xd0],EAX      ; 004f83fd
    CALL crt_math.c_round_FUN_005a3120  ; 004f8404
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x150]       ; 004f8409
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f8410
    MOV EDX,dword ptr [ESP + 0x150]     ; 004f8417
    IMUL EDX                            ; 004f841e
    SHRD EAX,EDX,0x10                   ; 004f8420
    FLD float ptr [ESP + 0x144]         ; 004f8424
    MOV dword ptr [ESP + 0xd4],EAX      ; 004f842b
    CALL crt_math.c_round_FUN_005a3120  ; 004f8432
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x150]       ; 004f8437
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f843e
    MOV EDX,dword ptr [ESP + 0x150]     ; 004f8445
    IMUL EDX                            ; 004f844c
    SHRD EAX,EDX,0x10                   ; 004f844e
    MOV dword ptr [ESP + 0xd8],EAX      ; 004f8452
    MOV EAX,ESI                         ; 004f8459
    CDQ                                 ; 004f845b
    XOR EAX,EDX                         ; 004f845c
    SUB EAX,EDX                         ; 004f845e
    MOV ECX,EAX                         ; 004f8460
    MOV dword ptr [ESP + 0xe0],EAX      ; 004f8462
    MOV EAX,EBX                         ; 004f8469
    CDQ                                 ; 004f846b
    XOR EAX,EDX                         ; 004f846c
    SUB EAX,EDX                         ; 004f846e
    CMP ECX,EAX                         ; 004f8470
    JGE 0x004f8482                      ; 004f8472
        ;   XREF to: 004f8482 (CONDITIONAL_JUMP)  ; LAB_004f8482
    MOV EAX,EBX                         ; 004f8474
    CDQ                                 ; 004f8476
    XOR EAX,EDX                         ; 004f8477
    SUB EAX,EDX                         ; 004f8479
    MOV dword ptr [ESP + 0xe0],EAX      ; 004f847b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004f8482
        ;   Label: LAB_004f8482
    CDQ                                 ; 004f8489
    XOR EAX,EDX                         ; 004f848a
    SUB EAX,EDX                         ; 004f848c
    MOV ECX,EAX                         ; 004f848e
    MOV dword ptr [ESP + 0xe4],EAX      ; 004f8490
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004f8497
    CDQ                                 ; 004f849e
    XOR EAX,EDX                         ; 004f849f
    SUB EAX,EDX                         ; 004f84a1
    CMP ECX,EAX                         ; 004f84a3
    JGE 0x004f84ba                      ; 004f84a5
        ;   XREF to: 004f84ba (CONDITIONAL_JUMP)  ; LAB_004f84ba
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004f84a7
    CDQ                                 ; 004f84ae
    XOR EAX,EDX                         ; 004f84af
    SUB EAX,EDX                         ; 004f84b1
    MOV dword ptr [ESP + 0xe4],EAX      ; 004f84b3
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004f84ba
        ;   Label: LAB_004f84ba
    CDQ                                 ; 004f84c1
    XOR EAX,EDX                         ; 004f84c2
    SUB EAX,EDX                         ; 004f84c4
    MOV ECX,EAX                         ; 004f84c6
    MOV dword ptr [ESP + 0xe8],EAX      ; 004f84c8
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004f84cf
    CDQ                                 ; 004f84d6
    XOR EAX,EDX                         ; 004f84d7
    SUB EAX,EDX                         ; 004f84d9
    CMP ECX,EAX                         ; 004f84db
    JGE 0x004f84f2                      ; 004f84dd
        ;   XREF to: 004f84f2 (CONDITIONAL_JUMP)  ; LAB_004f84f2
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004f84df
    CDQ                                 ; 004f84e6
    XOR EAX,EDX                         ; 004f84e7
    SUB EAX,EDX                         ; 004f84e9
    MOV dword ptr [ESP + 0xe8],EAX      ; 004f84eb
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004f84f2
        ;   Label: LAB_004f84f2
    MOV dword ptr [ESP + 0x150],EAX     ; 004f84f9
    FILD dword ptr [ESP + 0x150]        ; 004f8500
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004f8507
    FLD ST0                             ; 004f850e
    MOV dword ptr [ESP + 0x150],EAX     ; 004f8510
    FMULP                               ; 004f8517
    FILD dword ptr [ESP + 0x150]        ; 004f8519
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004f8520
    FMUL ST0                            ; 004f8527
    MOV dword ptr [ESP + 0x150],EAX     ; 004f8529
    FADDP                               ; 004f8530
    FILD dword ptr [ESP + 0x150]        ; 004f8532
    FMUL ST0                            ; 004f8539
    FADDP                               ; 004f853b
    FSQRT                               ; 004f853d
    MOV ECX,0xd                         ; 004f853f
    LEA EDI,[ESP + 0x50]                ; 004f8544
    LEA ESI,[ESP + 0xb8]                ; 004f8548
    CALL crt_math.c_round_FUN_005a3120  ; 004f854f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xdc]        ; 004f8554
    MOVSD.REP ES:EDI,ESI                ; 004f855b
        ;   Label: LAB_004f855b
    MOV ECX,0xd                         ; 004f855d
    MOV EDI,dword ptr [ESP + 0x130]     ; 004f8562
    LEA ESI,[ESP + 0x50]                ; 004f8569
    MOVSD.REP ES:EDI,ESI                ; 004f856d
    MOV EAX,dword ptr [ESP + 0x130]     ; 004f856f
    ADD ESP,0x154                       ; 004f8576
    POP EBP                             ; 004f857c
    POP EDI                             ; 004f857d
    POP EBX                             ; 004f857e
    RET                                 ; 004f857f
    ADD EAX,0x18                        ; 004f8580
        ;   Label: LAB_004f8580
    PUSH EAX                            ; 004f8583
    CALL engine_model.c_loadModelFile_FUN_004f7f20 ; 004f8584
        ;   XREF to: 004f7f20 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_loadModelFile_FUN_004f7f20()
    ADD ESP,0x4                         ; 004f8589
    LEA ESI,[ESP + 0xec]                ; 004f858c
    PUSH EAX                            ; 004f8593
    LEA EDI,[ESP + 0xbc]                ; 004f8594
    MOV EBX,EAX                         ; 004f859b
    CALL engine_model.c_FUN_004f8170    ; 004f859d
        ;   XREF to: 004f8170 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_004f8170()
    ADD ESP,0x4                         ; 004f85a2
    MOV ECX,0xd                         ; 004f85a5
    LEA ESI,[ESP + 0xec]                ; 004f85aa
    PUSH EBX                            ; 004f85b1
    MOVSD.REP ES:EDI,ESI                ; 004f85b2
    CALL engine_model.c_FUN_004f80f0    ; 004f85b4
        ;   XREF to: 004f80f0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_004f80f0()
    MOV ECX,0xd                         ; 004f85b9
    LEA EDI,[ESP + 0x54]                ; 004f85be
    LEA ESI,[ESP + 0xbc]                ; 004f85c2
    ADD ESP,0x4                         ; 004f85c9
    JMP 0x004f855b                      ; 004f85cc
        ;   XREF to: 004f855b (UNCONDITIONAL_JUMP)  ; LAB_004f855b
    PUSH EAX                            ; 004f85ce
        ;   Label: LAB_004f85ce
    LEA ESI,[ESP + 0x88]                ; 004f85cf
    LEA EDI,[ESP + 0x54]                ; 004f85d6
    CALL engine_boss.c_FUN_0041acc0     ; 004f85da
        ;   XREF to: 0041acc0 (UNCONDITIONAL_CALL)  ; undefined engine_boss.c_FUN_0041acc0()
    MOV ECX,0xd                         ; 004f85df
    LEA ESI,[ESP + 0x88]                ; 004f85e4
    ADD ESP,0x4                         ; 004f85eb
    JMP 0x004f855b                      ; 004f85ee
        ;   XREF to: 004f855b (UNCONDITIONAL_JUMP)  ; LAB_004f855b
    MOV EDI,0x5c9037                    ; 004f85f3
        ;   Label: LAB_004f85f3
    MOV EBP,0x173                       ; 004f85f8
    PUSH 0x5c9049                       ; 004f85fd
    MOV dword ptr [0x01d71de0],EDI      ; 004f8602 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004f8608 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f860e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f8613
    JMP 0x004f81bc                      ; 004f8616
        ;   XREF to: 004f81bc (UNCONDITIONAL_JUMP)  ; LAB_004f81bc

