; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005bd120(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa794
;   undefined4 DAT_005fa798
;   undefined4 DAT_005fa79c
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   crt_string.c__strnicmp_FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd120
        ;   Label: core_zombie.cpp_FUN_005bd120
    PUSH EDI                            ; 005bd121
    PUSH EBP                            ; 005bd122
    MOV EBP,ESP                         ; 005bd123
    SUB ESP,0x1fc                       ; 005bd125
    SUB EBP,0x7e                        ; 005bd12b
    MOV EBX,ESI                         ; 005bd12e
    MOV EAX,dword ptr [EBP + 0x92]      ; 005bd130
    SHL EAX,0x3                         ; 005bd136
    MOV ESI,EAX                         ; 005bd139
    SHL EAX,0x4                         ; 005bd13b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005bd13e
    SUB EAX,ESI                         ; 005bd144
    ADD EAX,EDX                         ; 005bd146
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 005bd148
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 005bd14e
    MOV dword ptr [EBP + 0x7a],EAX      ; 005bd154
    MOV EAX,dword ptr [EDX + 0xc27c]    ; 005bd157
    CMP EAX,0x1                         ; 005bd15d
    JC 0x005bd42f                       ; 005bd160
        ;   XREF to: 005bd42f (CONDITIONAL_JUMP)  ; LAB_005bd42f
    JA 0x005bd426                       ; 005bd166
        ;   XREF to: 005bd426 (CONDITIONAL_JUMP)  ; LAB_005bd426
    PUSH 0x3                            ; 005bd16c
        ;   Label: LAB_005bd16c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005bd16e
    PUSH 0x5fa794                       ; 005bd174 | DAT_005fa794
    ADD EAX,0x24a8                      ; 005bd179
    PUSH EAX                            ; 005bd17e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005bd17f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005bd184
    TEST EAX,EAX                        ; 005bd187
    JNZ 0x005bd40c                      ; 005bd189
        ;   XREF to: 005bd40c (CONDITIONAL_JUMP)  ; LAB_005bd40c
    MOV ECX,0xbf7c6a90                  ; 005bd18f
    MOV EDI,0x3f7343c8                  ; 005bd194
    MOV EDX,0xbf93b0b4                  ; 005bd199
    MOV dword ptr [EBP + -0x1a],ECX     ; 005bd19e
    MOV dword ptr [EBP + -0x1e],EDI     ; 005bd1a1
    MOV dword ptr [EBP + -0x22],EDX     ; 005bd1a4
    LEA EAX,[EBP + -0x22]               ; 005bd1a7
        ;   Label: LAB_005bd1a7
    PUSH EAX                            ; 005bd1aa
    PUSH 0x2c8af28                      ; 005bd1ab | DAT_02c8af28
    LEA EAX,[EBP + 0xfffffee2]          ; 005bd1b0
    PUSH EAX                            ; 005bd1b6
    CALL core_xform.cpp_FUN_005b5760    ; 005bd1b7
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005bd1bc
    MOV EAX,dword ptr [ESI + 0x154]     ; 005bd1bf
    PUSH ESI                            ; 005bd1c5
    LEA ESI,[EBP + 0xffffff42]          ; 005bd1c6
    LEA EDI,[EBP + 0xffffff2a]          ; 005bd1cc
    CALL dword ptr [EAX + 0x1c]         ; 005bd1d2
    MOV ECX,0x6                         ; 005bd1d5
    ADD ESP,0x4                         ; 005bd1da
    LEA EAX,[EBP + 0x3e]                ; 005bd1dd
    LEA ESI,[EBP + 0xffffff42]          ; 005bd1e0
    PUSH EAX                            ; 005bd1e6
    MOVSD.REP ES:EDI,ESI                ; 005bd1e7
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005bd1e9
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [EBP + 0xffffff2a]    ; 005bd1ee
    FLD float ptr [EBP + 0xffffff2e]    ; 005bd1f4
    FLD float ptr [EBP + 0xffffff32]    ; 005bd1fa
    LEA EDI,[EBP + 0xffffff72]          ; 005bd200
    LEA ESI,[EBP + 0x3e]                ; 005bd206
    LEA EAX,[EBP + -0xa]                ; 005bd209
    ADD ESP,0x4                         ; 005bd20c
    FXCH ST2                            ; 005bd20f
    FADD float ptr [EBP + 0xffffff36]   ; 005bd211
    FXCH                                ; 005bd217
    FADD float ptr [EBP + 0xffffff3a]   ; 005bd219
    FXCH ST2                            ; 005bd21f
    FADD float ptr [EBP + 0xffffff3e]   ; 005bd221
    PUSH EAX                            ; 005bd227
    FXCH                                ; 005bd228
    FSTP float ptr [EBP + 0x3e]         ; 005bd22a
    FXCH                                ; 005bd22d
    FSTP float ptr [EBP + 0x42]         ; 005bd22f
    FSTP float ptr [EBP + 0x46]         ; 005bd232
    MOVSD ES:EDI,ESI                    ; 005bd235
    MOVSD ES:EDI,ESI                    ; 005bd236
    MOVSD ES:EDI,ESI                    ; 005bd237
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005bd238
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [0x005fa798]          ; 005bd23d | DAT_005fa798
    FLD float ptr [EBP + 0xffffff72]    ; 005bd243
    FMUL ST1                            ; 005bd249
    FLD float ptr [EBP + 0xffffff76]    ; 005bd24b
    FMUL ST2                            ; 005bd251
    FLD float ptr [EBP + 0xffffff7a]    ; 005bd253
    FMULP ST3                           ; 005bd259
    FLD float ptr [EBP + 0xffffff32]    ; 005bd25b
    LEA EDI,[EBP + -0x6a]               ; 005bd261
    LEA ESI,[EBP + -0xa]                ; 005bd264
    LEA EDX,[EBP + 0x56]                ; 005bd267
    LEA EAX,[EBP + -0x52]               ; 005bd26a
    ADD ESP,0x4                         ; 005bd26d
    FXCH ST2                            ; 005bd270
    FSTP float ptr [EBP + -0xa]         ; 005bd272
    FSTP float ptr [EBP + -0x6]         ; 005bd275
    FXCH                                ; 005bd278
    FSTP float ptr [EBP + -0x2]         ; 005bd27a
    MOVSD ES:EDI,ESI                    ; 005bd27d
    MOVSD ES:EDI,ESI                    ; 005bd27e
    MOVSD ES:EDI,ESI                    ; 005bd27f
    FADD double ptr [0x005fa79c]        ; 005bd280 | DAT_005fa79c
    LEA EDI,[EBP + 0x56]                ; 005bd286
    LEA ESI,[EBP + -0x6a]               ; 005bd289
    FSTP float ptr [EBP + -0x62]        ; 005bd28c
    MOVSD ES:EDI,ESI                    ; 005bd28f
    MOVSD ES:EDI,ESI                    ; 005bd290
    MOVSD ES:EDI,ESI                    ; 005bd291
    CMP EAX,EDX                         ; 005bd292
    JZ 0x005bd2a8                       ; 005bd294
        ;   XREF to: 005bd2a8 (CONDITIONAL_JUMP)  ; LAB_005bd2a8
    MOV EAX,dword ptr [EBP + 0x56]      ; 005bd296
    MOV dword ptr [EBP + -0x52],EAX     ; 005bd299
    MOV EAX,dword ptr [EBP + 0x5a]      ; 005bd29c
    MOV dword ptr [EBP + -0x4e],EAX     ; 005bd29f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 005bd2a2
    MOV dword ptr [EBP + -0x4a],EAX     ; 005bd2a5
    MOV ESI,dword ptr [EBP + 0x7a]      ; 005bd2a8
        ;   Label: LAB_005bd2a8
    LEA EAX,[ESI*0x4 + 0x0]             ; 005bd2ab
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005bd2b2
    SUB EAX,ESI                         ; 005bd2b8
    ADD EDX,0xfd8                       ; 005bd2ba
    SHL EAX,0x4                         ; 005bd2c0
    ADD EAX,EDX                         ; 005bd2c3
    MOV EDX,ESI                         ; 005bd2c5
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005bd2c7
    CMP EDX,dword ptr [ESI + 0xc2fc]    ; 005bd2cd
    JNZ 0x005bd507                      ; 005bd2d3
        ;   XREF to: 005bd507 (CONDITIONAL_JUMP)  ; LAB_005bd507
    MOV EDX,0xbecccccd                  ; 005bd2d9
    LEA ESI,[EBP + 0x62]                ; 005bd2de
    LEA EDI,[EBP + 0x1a]                ; 005bd2e1
    PUSH EAX                            ; 005bd2e4
    XOR ECX,ECX                         ; 005bd2e5
    LEA EAX,[EBP + -0x5e]               ; 005bd2e7
    MOV dword ptr [EBP + -0x5e],EDX     ; 005bd2ea
    PUSH EAX                            ; 005bd2ed
    MOV dword ptr [EBP + -0x5a],ECX     ; 005bd2ee
    MOV dword ptr [EBP + -0x56],ECX     ; 005bd2f1
    CALL core_xform.cpp_FUN_005b5080    ; 005bd2f4
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + 0x62]                ; 005bd2f9
    MOVSD ES:EDI,ESI                    ; 005bd2fc
    MOVSD ES:EDI,ESI                    ; 005bd2fd
    MOVSD ES:EDI,ESI                    ; 005bd2fe
    LEA EAX,[EBP + 0x1a]                ; 005bd2ff
    LEA ESI,[EBP + 0xffffff7e]          ; 005bd302
    ADD ESP,0x8                         ; 005bd308
    CMP ESI,EAX                         ; 005bd30b
    JZ 0x005bd324                       ; 005bd30d
        ;   XREF to: 005bd324 (CONDITIONAL_JUMP)  ; LAB_005bd324
    MOV EAX,dword ptr [EBP + 0x1a]      ; 005bd30f
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 005bd312
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005bd318
    MOV dword ptr [EBP + -0x7e],EAX     ; 005bd31b
    MOV EAX,dword ptr [EBP + 0x22]      ; 005bd31e
    MOV dword ptr [EBP + -0x7a],EAX     ; 005bd321
        ;   Label: LAB_005bd321
    MOV ESI,dword ptr [EBP + 0x7a]      ; 005bd324
        ;   Label: LAB_005bd324
    LEA EAX,[ESI*0x4 + 0x0]             ; 005bd327
    SUB EAX,ESI                         ; 005bd32e
    MOV ESI,EAX                         ; 005bd330
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005bd332
    SHL ESI,0x4                         ; 005bd338
    ADD EAX,0xfd8                       ; 005bd33b
    ADD EAX,ESI                         ; 005bd340
    PUSH EAX                            ; 005bd342
    LEA EAX,[EBP + 0xfffffee2]          ; 005bd343
    PUSH EAX                            ; 005bd349
    LEA ESI,[EBP + 0xfffffe82]          ; 005bd34a
    LEA EDI,[EBP + 0xfffffeb2]          ; 005bd350
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 005bd356
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 005bd35b
    ADD ESP,0x8                         ; 005bd360
    LEA EAX,[EBP + 0xfffffeb2]          ; 005bd363
    LEA ESI,[EBP + 0xfffffe82]          ; 005bd369
    PUSH EAX                            ; 005bd36f
    LEA EAX,[EBP + -0x52]               ; 005bd370
    MOVSD.REP ES:EDI,ESI                ; 005bd373
    PUSH EAX                            ; 005bd375
    LEA ESI,[EBP + 0x6e]                ; 005bd376
    LEA EDI,[EBP + 0x32]                ; 005bd379
    CALL core_xform.cpp_FUN_005b5080    ; 005bd37c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    FLD float ptr [EBP + 0xffffff7e]    ; 005bd381
    FLD float ptr [EBP + -0x7e]         ; 005bd387
    FLD float ptr [EBP + -0x7a]         ; 005bd38a
    FLD float ptr [EBP + 0xfffffebe]    ; 005bd38d
    FLD float ptr [EBP + 0xfffffece]    ; 005bd393
    LEA ESI,[EBP + 0x6e]                ; 005bd399
    FLD float ptr [EBP + 0xfffffede]    ; 005bd39c
    MOVSD ES:EDI,ESI                    ; 005bd3a2
    MOVSD ES:EDI,ESI                    ; 005bd3a3
    MOVSD ES:EDI,ESI                    ; 005bd3a4
    MOV ECX,0xc                         ; 005bd3a5
    LEA EDI,[EBP + 0x26]                ; 005bd3aa
    LEA ESI,[EBP + -0x76]               ; 005bd3ad
    FXCH ST5                            ; 005bd3b0
    FSUB float ptr [EBP + 0x32]         ; 005bd3b2
    FXCH ST4                            ; 005bd3b5
    FSUB float ptr [EBP + 0x36]         ; 005bd3b7
    FXCH ST3                            ; 005bd3ba
    FSUB float ptr [EBP + 0x3a]         ; 005bd3bc
    FXCH ST4                            ; 005bd3bf
    FSTP float ptr [EBP + -0x76]        ; 005bd3c1
    FXCH ST2                            ; 005bd3c4
    FSTP float ptr [EBP + -0x72]        ; 005bd3c6
    FXCH ST2                            ; 005bd3c9
    FSTP float ptr [EBP + -0x6e]        ; 005bd3cb
    MOVSD ES:EDI,ESI                    ; 005bd3ce
    MOVSD ES:EDI,ESI                    ; 005bd3cf
    MOVSD ES:EDI,ESI                    ; 005bd3d0
    ADD ESP,0x8                         ; 005bd3d1
    LEA ESI,[EBP + 0xfffffeb2]          ; 005bd3d4
    MOV EDI,EBX                         ; 005bd3da
    FXCH                                ; 005bd3dc
    FADD float ptr [EBP + 0x26]         ; 005bd3de
    FXCH                                ; 005bd3e1
    FADD float ptr [EBP + 0x2a]         ; 005bd3e3
    FXCH ST2                            ; 005bd3e6
    FADD float ptr [EBP + 0x2e]         ; 005bd3e8
    FXCH                                ; 005bd3eb
    FSTP float ptr [EBP + 0xfffffebe]   ; 005bd3ed
    FXCH                                ; 005bd3f3
    FSTP float ptr [EBP + 0xfffffece]   ; 005bd3f5
    FSTP float ptr [EBP + 0xfffffede]   ; 005bd3fb
    MOVSD.REP ES:EDI,ESI                ; 005bd401
    MOV EAX,EBX                         ; 005bd403
    LEA ESP,[EBP + 0x7e]                ; 005bd405
    POP EBP                             ; 005bd408
    POP EDI                             ; 005bd409
    POP EBX                             ; 005bd40a
    RET                                 ; 005bd40b
    MOV EAX,0x3f676c8b                  ; 005bd40c
        ;   Label: LAB_005bd40c
    XOR EDI,EDI                         ; 005bd411
    MOV ECX,0x3e1eb852                  ; 005bd413
    MOV dword ptr [EBP + -0x1a],EDI     ; 005bd418
    MOV dword ptr [EBP + -0x1e],EAX     ; 005bd41b
    MOV dword ptr [EBP + -0x22],ECX     ; 005bd41e
    JMP 0x005bd1a7                      ; 005bd421
        ;   XREF to: 005bd1a7 (UNCONDITIONAL_JUMP)  ; LAB_005bd1a7
    CMP EAX,0x3                         ; 005bd426
        ;   Label: LAB_005bd426
    JZ 0x005bd16c                       ; 005bd429
        ;   XREF to: 005bd16c (CONDITIONAL_JUMP)  ; LAB_005bd16c
    PUSH ESI                            ; 005bd42f
        ;   Label: LAB_005bd42f
    MOV EAX,dword ptr [ESI + 0x154]     ; 005bd430
    LEA ESI,[EBP + 0xffffff5a]          ; 005bd436
    LEA EDI,[EBP + 0xffffff12]          ; 005bd43c
    CALL dword ptr [EAX + 0x1c]         ; 005bd442
    MOV ECX,0x6                         ; 005bd445
    LEA ESI,[EBP + 0xffffff5a]          ; 005bd44a
    MOVSD.REP ES:EDI,ESI                ; 005bd450
    LEA EAX,[EBP + 0xffffff12]          ; 005bd452
    FLD float ptr [EBP + 0xffffff12]    ; 005bd458
    FLD float ptr [EBP + 0xffffff16]    ; 005bd45e
    FLD float ptr [EBP + 0xffffff1a]    ; 005bd464
    LEA EDI,[EBP + 0xe]                 ; 005bd46a
    LEA ESI,[EBP + -0x2e]               ; 005bd46d
    FXCH ST2                            ; 005bd470
    FADD float ptr [EAX + 0xc]          ; 005bd472
    FXCH                                ; 005bd475
    FADD float ptr [EAX + 0x10]         ; 005bd477
    FXCH ST2                            ; 005bd47a
    FADD float ptr [EAX + 0x14]         ; 005bd47c
    FXCH                                ; 005bd47f
    FSTP float ptr [EBP + -0x2e]        ; 005bd481
    FXCH                                ; 005bd484
    FSTP float ptr [EBP + -0x2a]        ; 005bd486
    FSTP float ptr [EBP + -0x26]        ; 005bd489
    MOVSD ES:EDI,ESI                    ; 005bd48c
    MOVSD ES:EDI,ESI                    ; 005bd48d
    MOVSD ES:EDI,ESI                    ; 005bd48e
    FLD float ptr [0x005fa798]          ; 005bd48f | DAT_005fa798
    FLD float ptr [EBP + 0xe]           ; 005bd495
    FMUL ST1                            ; 005bd498
    FLD float ptr [EBP + 0x12]          ; 005bd49a
    FMUL ST2                            ; 005bd49d
    FLD float ptr [EBP + 0x16]          ; 005bd49f
    FMULP ST3                           ; 005bd4a2
    LEA EDI,[EBP + 0x4a]                ; 005bd4a4
    LEA ESI,[EBP + 0x2]                 ; 005bd4a7
    FXCH                                ; 005bd4aa
    FSTP float ptr [EBP + 0x2]          ; 005bd4ac
    FSTP float ptr [EBP + 0x6]          ; 005bd4af
    FSTP float ptr [EBP + 0xa]          ; 005bd4b2
    MOVSD ES:EDI,ESI                    ; 005bd4b5
    MOVSD ES:EDI,ESI                    ; 005bd4b6
    MOVSD ES:EDI,ESI                    ; 005bd4b7
    LEA EAX,[EBP + -0x52]               ; 005bd4b8
    LEA ESI,[EBP + 0x4a]                ; 005bd4bb
    ADD ESP,0x4                         ; 005bd4be
    CMP EAX,ESI                         ; 005bd4c1
    JZ 0x005bd4d7                       ; 005bd4c3
        ;   XREF to: 005bd4d7 (CONDITIONAL_JUMP)  ; LAB_005bd4d7
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005bd4c5
    MOV dword ptr [EBP + -0x52],EAX     ; 005bd4c8
    MOV EAX,dword ptr [EBP + 0x4e]      ; 005bd4cb
    MOV dword ptr [EBP + -0x4e],EAX     ; 005bd4ce
    MOV EAX,dword ptr [EBP + 0x52]      ; 005bd4d1
    MOV dword ptr [EBP + -0x4a],EAX     ; 005bd4d4
    MOV EAX,dword ptr [EBP + 0x92]      ; 005bd4d7
        ;   Label: LAB_005bd4d7
    SHL EAX,0x3                         ; 005bd4dd
    MOV ESI,EAX                         ; 005bd4e0
    SHL EAX,0x4                         ; 005bd4e2
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005bd4e5
    SUB EAX,ESI                         ; 005bd4eb
    ADD EAX,EDX                         ; 005bd4ed
    MOV ECX,0xc                         ; 005bd4ef
    LEA EDI,[EBP + 0xfffffee2]          ; 005bd4f4
    LEA ESI,[EAX + 0x25b4]              ; 005bd4fa
    MOVSD.REP ES:EDI,ESI                ; 005bd500
    JMP 0x005bd2a8                      ; 005bd502
        ;   XREF to: 005bd2a8 (UNCONDITIONAL_JUMP)  ; LAB_005bd2a8
    MOV ESI,0x3ecccccd                  ; 005bd507
        ;   Label: LAB_005bd507
    PUSH EAX                            ; 005bd50c
    XOR EDI,EDI                         ; 005bd50d
    LEA EAX,[EBP + -0x3a]               ; 005bd50f
    MOV dword ptr [EBP + -0x3a],ESI     ; 005bd512
    MOV dword ptr [EBP + -0x36],EDI     ; 005bd515
    MOV dword ptr [EBP + -0x32],EDI     ; 005bd518
    PUSH EAX                            ; 005bd51b
    LEA ESI,[EBP + -0x46]               ; 005bd51c
    LEA EDI,[EBP + -0x16]               ; 005bd51f
    CALL core_xform.cpp_FUN_005b5080    ; 005bd522
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + -0x46]               ; 005bd527
    MOVSD ES:EDI,ESI                    ; 005bd52a
    MOVSD ES:EDI,ESI                    ; 005bd52b
    MOVSD ES:EDI,ESI                    ; 005bd52c
    LEA EAX,[EBP + -0x16]               ; 005bd52d
    LEA ESI,[EBP + 0xffffff7e]          ; 005bd530
    ADD ESP,0x8                         ; 005bd536
    CMP ESI,EAX                         ; 005bd539
    JZ 0x005bd324                       ; 005bd53b
        ;   XREF to: 005bd324 (CONDITIONAL_JUMP)  ; LAB_005bd324
    MOV EAX,dword ptr [EBP + -0x16]     ; 005bd541
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 005bd544
    MOV EAX,dword ptr [EBP + -0x12]     ; 005bd54a
    MOV dword ptr [EBP + -0x7e],EAX     ; 005bd54d
    MOV EAX,dword ptr [EBP + -0xe]      ; 005bd550
    JMP 0x005bd321                      ; 005bd553
        ;   XREF to: 005bd321 (UNCONDITIONAL_JUMP)  ; LAB_005bd321

