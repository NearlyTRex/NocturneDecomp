; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_FUN_0045b120(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d80b3
;   undefined4 DAT_005d80b7
;   undefined4 DAT_005d80bb
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

    PUSH EBX                            ; 0045b120
        ;   Label: core_demnfolk.cpp_FUN_0045b120
    PUSH EDI                            ; 0045b121
    PUSH EBP                            ; 0045b122
    MOV EBP,ESP                         ; 0045b123
    SUB ESP,0x1fc                       ; 0045b125
    SUB EBP,0x7e                        ; 0045b12b
    MOV EBX,ESI                         ; 0045b12e
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045b130
    SHL EAX,0x3                         ; 0045b136
    MOV ESI,EAX                         ; 0045b139
    SHL EAX,0x4                         ; 0045b13b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0045b13e
    SUB EAX,ESI                         ; 0045b144
    ADD EAX,EDX                         ; 0045b146
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 0045b148
    MOV EAX,dword ptr [EAX + 0x25a8]    ; 0045b14e
    MOV dword ptr [EBP + 0x7a],EAX      ; 0045b154
    MOV EAX,dword ptr [EDX + 0xc27c]    ; 0045b157
    CMP EAX,0x1                         ; 0045b15d
    JC 0x0045b42f                       ; 0045b160
        ;   XREF to: 0045b42f (CONDITIONAL_JUMP)  ; LAB_0045b42f
    JA 0x0045b426                       ; 0045b166
        ;   XREF to: 0045b426 (CONDITIONAL_JUMP)  ; LAB_0045b426
    PUSH 0x3                            ; 0045b16c
        ;   Label: LAB_0045b16c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0045b16e
    PUSH 0x5d80b3                       ; 0045b174 | DAT_005d80b3
    ADD EAX,0x24a8                      ; 0045b179
    PUSH EAX                            ; 0045b17e
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0045b17f
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0045b184
    TEST EAX,EAX                        ; 0045b187
    JNZ 0x0045b40c                      ; 0045b189
        ;   XREF to: 0045b40c (CONDITIONAL_JUMP)  ; LAB_0045b40c
    MOV ECX,0xbf7c6a90                  ; 0045b18f
    MOV EDI,0x3f7343c8                  ; 0045b194
    MOV EDX,0xbf93b0b4                  ; 0045b199
    MOV dword ptr [EBP + -0x1a],ECX     ; 0045b19e
    MOV dword ptr [EBP + -0x1e],EDI     ; 0045b1a1
    MOV dword ptr [EBP + -0x22],EDX     ; 0045b1a4
    LEA EAX,[EBP + -0x22]               ; 0045b1a7
        ;   Label: LAB_0045b1a7
    PUSH EAX                            ; 0045b1aa
    PUSH 0x2c8af28                      ; 0045b1ab | DAT_02c8af28
    LEA EAX,[EBP + 0xfffffee2]          ; 0045b1b0
    PUSH EAX                            ; 0045b1b6
    CALL core_xform.cpp_FUN_005b5760    ; 0045b1b7
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0045b1bc
    MOV EAX,dword ptr [ESI + 0x154]     ; 0045b1bf
    PUSH ESI                            ; 0045b1c5
    LEA ESI,[EBP + 0xffffff42]          ; 0045b1c6
    LEA EDI,[EBP + 0xffffff2a]          ; 0045b1cc
    CALL dword ptr [EAX + 0x1c]         ; 0045b1d2
    MOV ECX,0x6                         ; 0045b1d5
    ADD ESP,0x4                         ; 0045b1da
    LEA EAX,[EBP + 0x3e]                ; 0045b1dd
    LEA ESI,[EBP + 0xffffff42]          ; 0045b1e0
    PUSH EAX                            ; 0045b1e6
    MOVSD.REP ES:EDI,ESI                ; 0045b1e7
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0045b1e9
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [EBP + 0xffffff2a]    ; 0045b1ee
    FLD float ptr [EBP + 0xffffff2e]    ; 0045b1f4
    FLD float ptr [EBP + 0xffffff32]    ; 0045b1fa
    LEA EDI,[EBP + 0xffffff72]          ; 0045b200
    LEA ESI,[EBP + 0x3e]                ; 0045b206
    LEA EAX,[EBP + -0xa]                ; 0045b209
    ADD ESP,0x4                         ; 0045b20c
    FXCH ST2                            ; 0045b20f
    FADD float ptr [EBP + 0xffffff36]   ; 0045b211
    FXCH                                ; 0045b217
    FADD float ptr [EBP + 0xffffff3a]   ; 0045b219
    FXCH ST2                            ; 0045b21f
    FADD float ptr [EBP + 0xffffff3e]   ; 0045b221
    PUSH EAX                            ; 0045b227
    FXCH                                ; 0045b228
    FSTP float ptr [EBP + 0x3e]         ; 0045b22a
    FXCH                                ; 0045b22d
    FSTP float ptr [EBP + 0x42]         ; 0045b22f
    FSTP float ptr [EBP + 0x46]         ; 0045b232
    MOVSD ES:EDI,ESI                    ; 0045b235
    MOVSD ES:EDI,ESI                    ; 0045b236
    MOVSD ES:EDI,ESI                    ; 0045b237
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0045b238
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [0x005d80b7]          ; 0045b23d | DAT_005d80b7
    FLD float ptr [EBP + 0xffffff72]    ; 0045b243
    FMUL ST1                            ; 0045b249
    FLD float ptr [EBP + 0xffffff76]    ; 0045b24b
    FMUL ST2                            ; 0045b251
    FLD float ptr [EBP + 0xffffff7a]    ; 0045b253
    FMULP ST3                           ; 0045b259
    FLD float ptr [EBP + 0xffffff32]    ; 0045b25b
    LEA EDI,[EBP + -0x6a]               ; 0045b261
    LEA ESI,[EBP + -0xa]                ; 0045b264
    LEA EDX,[EBP + 0x56]                ; 0045b267
    LEA EAX,[EBP + -0x52]               ; 0045b26a
    ADD ESP,0x4                         ; 0045b26d
    FXCH ST2                            ; 0045b270
    FSTP float ptr [EBP + -0xa]         ; 0045b272
    FSTP float ptr [EBP + -0x6]         ; 0045b275
    FXCH                                ; 0045b278
    FSTP float ptr [EBP + -0x2]         ; 0045b27a
    MOVSD ES:EDI,ESI                    ; 0045b27d
    MOVSD ES:EDI,ESI                    ; 0045b27e
    MOVSD ES:EDI,ESI                    ; 0045b27f
    FADD double ptr [0x005d80bb]        ; 0045b280 | DAT_005d80bb
    LEA EDI,[EBP + 0x56]                ; 0045b286
    LEA ESI,[EBP + -0x6a]               ; 0045b289
    FSTP float ptr [EBP + -0x62]        ; 0045b28c
    MOVSD ES:EDI,ESI                    ; 0045b28f
    MOVSD ES:EDI,ESI                    ; 0045b290
    MOVSD ES:EDI,ESI                    ; 0045b291
    CMP EAX,EDX                         ; 0045b292
    JZ 0x0045b2a8                       ; 0045b294
        ;   XREF to: 0045b2a8 (CONDITIONAL_JUMP)  ; LAB_0045b2a8
    MOV EAX,dword ptr [EBP + 0x56]      ; 0045b296
    MOV dword ptr [EBP + -0x52],EAX     ; 0045b299
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0045b29c
    MOV dword ptr [EBP + -0x4e],EAX     ; 0045b29f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0045b2a2
    MOV dword ptr [EBP + -0x4a],EAX     ; 0045b2a5
    MOV ESI,dword ptr [EBP + 0x7a]      ; 0045b2a8
        ;   Label: LAB_0045b2a8
    LEA EAX,[ESI*0x4 + 0x0]             ; 0045b2ab
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0045b2b2
    SUB EAX,ESI                         ; 0045b2b8
    ADD EDX,0xfd8                       ; 0045b2ba
    SHL EAX,0x4                         ; 0045b2c0
    ADD EAX,EDX                         ; 0045b2c3
    MOV EDX,ESI                         ; 0045b2c5
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0045b2c7
    CMP EDX,dword ptr [ESI + 0xc300]    ; 0045b2cd
    JNZ 0x0045b507                      ; 0045b2d3
        ;   XREF to: 0045b507 (CONDITIONAL_JUMP)  ; LAB_0045b507
    MOV EDX,0xbecccccd                  ; 0045b2d9
    LEA ESI,[EBP + 0x62]                ; 0045b2de
    LEA EDI,[EBP + 0x1a]                ; 0045b2e1
    PUSH EAX                            ; 0045b2e4
    XOR ECX,ECX                         ; 0045b2e5
    LEA EAX,[EBP + -0x5e]               ; 0045b2e7
    MOV dword ptr [EBP + -0x5e],EDX     ; 0045b2ea
    PUSH EAX                            ; 0045b2ed
    MOV dword ptr [EBP + -0x5a],ECX     ; 0045b2ee
    MOV dword ptr [EBP + -0x56],ECX     ; 0045b2f1
    CALL core_xform.cpp_FUN_005b5080    ; 0045b2f4
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + 0x62]                ; 0045b2f9
    MOVSD ES:EDI,ESI                    ; 0045b2fc
    MOVSD ES:EDI,ESI                    ; 0045b2fd
    MOVSD ES:EDI,ESI                    ; 0045b2fe
    LEA EAX,[EBP + 0x1a]                ; 0045b2ff
    LEA ESI,[EBP + 0xffffff7e]          ; 0045b302
    ADD ESP,0x8                         ; 0045b308
    CMP ESI,EAX                         ; 0045b30b
    JZ 0x0045b324                       ; 0045b30d
        ;   XREF to: 0045b324 (CONDITIONAL_JUMP)  ; LAB_0045b324
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0045b30f
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 0045b312
    MOV EAX,dword ptr [EBP + 0x1e]      ; 0045b318
    MOV dword ptr [EBP + -0x7e],EAX     ; 0045b31b
    MOV EAX,dword ptr [EBP + 0x22]      ; 0045b31e
    MOV dword ptr [EBP + -0x7a],EAX     ; 0045b321
        ;   Label: LAB_0045b321
    MOV ESI,dword ptr [EBP + 0x7a]      ; 0045b324
        ;   Label: LAB_0045b324
    LEA EAX,[ESI*0x4 + 0x0]             ; 0045b327
    SUB EAX,ESI                         ; 0045b32e
    MOV ESI,EAX                         ; 0045b330
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0045b332
    SHL ESI,0x4                         ; 0045b338
    ADD EAX,0xfd8                       ; 0045b33b
    ADD EAX,ESI                         ; 0045b340
    PUSH EAX                            ; 0045b342
    LEA EAX,[EBP + 0xfffffee2]          ; 0045b343
    PUSH EAX                            ; 0045b349
    LEA ESI,[EBP + 0xfffffe82]          ; 0045b34a
    LEA EDI,[EBP + 0xfffffeb2]          ; 0045b350
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0045b356
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0045b35b
    ADD ESP,0x8                         ; 0045b360
    LEA EAX,[EBP + 0xfffffeb2]          ; 0045b363
    LEA ESI,[EBP + 0xfffffe82]          ; 0045b369
    PUSH EAX                            ; 0045b36f
    LEA EAX,[EBP + -0x52]               ; 0045b370
    MOVSD.REP ES:EDI,ESI                ; 0045b373
    PUSH EAX                            ; 0045b375
    LEA ESI,[EBP + 0x6e]                ; 0045b376
    LEA EDI,[EBP + 0x32]                ; 0045b379
    CALL core_xform.cpp_FUN_005b5080    ; 0045b37c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    FLD float ptr [EBP + 0xffffff7e]    ; 0045b381
    FLD float ptr [EBP + -0x7e]         ; 0045b387
    FLD float ptr [EBP + -0x7a]         ; 0045b38a
    FLD float ptr [EBP + 0xfffffebe]    ; 0045b38d
    FLD float ptr [EBP + 0xfffffece]    ; 0045b393
    LEA ESI,[EBP + 0x6e]                ; 0045b399
    FLD float ptr [EBP + 0xfffffede]    ; 0045b39c
    MOVSD ES:EDI,ESI                    ; 0045b3a2
    MOVSD ES:EDI,ESI                    ; 0045b3a3
    MOVSD ES:EDI,ESI                    ; 0045b3a4
    MOV ECX,0xc                         ; 0045b3a5
    LEA EDI,[EBP + 0x26]                ; 0045b3aa
    LEA ESI,[EBP + -0x76]               ; 0045b3ad
    FXCH ST5                            ; 0045b3b0
    FSUB float ptr [EBP + 0x32]         ; 0045b3b2
    FXCH ST4                            ; 0045b3b5
    FSUB float ptr [EBP + 0x36]         ; 0045b3b7
    FXCH ST3                            ; 0045b3ba
    FSUB float ptr [EBP + 0x3a]         ; 0045b3bc
    FXCH ST4                            ; 0045b3bf
    FSTP float ptr [EBP + -0x76]        ; 0045b3c1
    FXCH ST2                            ; 0045b3c4
    FSTP float ptr [EBP + -0x72]        ; 0045b3c6
    FXCH ST2                            ; 0045b3c9
    FSTP float ptr [EBP + -0x6e]        ; 0045b3cb
    MOVSD ES:EDI,ESI                    ; 0045b3ce
    MOVSD ES:EDI,ESI                    ; 0045b3cf
    MOVSD ES:EDI,ESI                    ; 0045b3d0
    ADD ESP,0x8                         ; 0045b3d1
    LEA ESI,[EBP + 0xfffffeb2]          ; 0045b3d4
    MOV EDI,EBX                         ; 0045b3da
    FXCH                                ; 0045b3dc
    FADD float ptr [EBP + 0x26]         ; 0045b3de
    FXCH                                ; 0045b3e1
    FADD float ptr [EBP + 0x2a]         ; 0045b3e3
    FXCH ST2                            ; 0045b3e6
    FADD float ptr [EBP + 0x2e]         ; 0045b3e8
    FXCH                                ; 0045b3eb
    FSTP float ptr [EBP + 0xfffffebe]   ; 0045b3ed
    FXCH                                ; 0045b3f3
    FSTP float ptr [EBP + 0xfffffece]   ; 0045b3f5
    FSTP float ptr [EBP + 0xfffffede]   ; 0045b3fb
    MOVSD.REP ES:EDI,ESI                ; 0045b401
    MOV EAX,EBX                         ; 0045b403
    LEA ESP,[EBP + 0x7e]                ; 0045b405
    POP EBP                             ; 0045b408
    POP EDI                             ; 0045b409
    POP EBX                             ; 0045b40a
    RET                                 ; 0045b40b
    MOV EAX,0x3f676c8b                  ; 0045b40c
        ;   Label: LAB_0045b40c
    XOR EDI,EDI                         ; 0045b411
    MOV ECX,0x3e1eb852                  ; 0045b413
    MOV dword ptr [EBP + -0x1a],EDI     ; 0045b418
    MOV dword ptr [EBP + -0x1e],EAX     ; 0045b41b
    MOV dword ptr [EBP + -0x22],ECX     ; 0045b41e
    JMP 0x0045b1a7                      ; 0045b421
        ;   XREF to: 0045b1a7 (UNCONDITIONAL_JUMP)  ; LAB_0045b1a7
    CMP EAX,0x3                         ; 0045b426
        ;   Label: LAB_0045b426
    JZ 0x0045b16c                       ; 0045b429
        ;   XREF to: 0045b16c (CONDITIONAL_JUMP)  ; LAB_0045b16c
    PUSH ESI                            ; 0045b42f
        ;   Label: LAB_0045b42f
    MOV EAX,dword ptr [ESI + 0x154]     ; 0045b430
    LEA ESI,[EBP + 0xffffff5a]          ; 0045b436
    LEA EDI,[EBP + 0xffffff12]          ; 0045b43c
    CALL dword ptr [EAX + 0x1c]         ; 0045b442
    MOV ECX,0x6                         ; 0045b445
    LEA ESI,[EBP + 0xffffff5a]          ; 0045b44a
    MOVSD.REP ES:EDI,ESI                ; 0045b450
    LEA EAX,[EBP + 0xffffff12]          ; 0045b452
    FLD float ptr [EBP + 0xffffff12]    ; 0045b458
    FLD float ptr [EBP + 0xffffff16]    ; 0045b45e
    FLD float ptr [EBP + 0xffffff1a]    ; 0045b464
    LEA EDI,[EBP + 0xe]                 ; 0045b46a
    LEA ESI,[EBP + -0x2e]               ; 0045b46d
    FXCH ST2                            ; 0045b470
    FADD float ptr [EAX + 0xc]          ; 0045b472
    FXCH                                ; 0045b475
    FADD float ptr [EAX + 0x10]         ; 0045b477
    FXCH ST2                            ; 0045b47a
    FADD float ptr [EAX + 0x14]         ; 0045b47c
    FXCH                                ; 0045b47f
    FSTP float ptr [EBP + -0x2e]        ; 0045b481
    FXCH                                ; 0045b484
    FSTP float ptr [EBP + -0x2a]        ; 0045b486
    FSTP float ptr [EBP + -0x26]        ; 0045b489
    MOVSD ES:EDI,ESI                    ; 0045b48c
    MOVSD ES:EDI,ESI                    ; 0045b48d
    MOVSD ES:EDI,ESI                    ; 0045b48e
    FLD float ptr [0x005d80b7]          ; 0045b48f | DAT_005d80b7
    FLD float ptr [EBP + 0xe]           ; 0045b495
    FMUL ST1                            ; 0045b498
    FLD float ptr [EBP + 0x12]          ; 0045b49a
    FMUL ST2                            ; 0045b49d
    FLD float ptr [EBP + 0x16]          ; 0045b49f
    FMULP ST3                           ; 0045b4a2
    LEA EDI,[EBP + 0x4a]                ; 0045b4a4
    LEA ESI,[EBP + 0x2]                 ; 0045b4a7
    FXCH                                ; 0045b4aa
    FSTP float ptr [EBP + 0x2]          ; 0045b4ac
    FSTP float ptr [EBP + 0x6]          ; 0045b4af
    FSTP float ptr [EBP + 0xa]          ; 0045b4b2
    MOVSD ES:EDI,ESI                    ; 0045b4b5
    MOVSD ES:EDI,ESI                    ; 0045b4b6
    MOVSD ES:EDI,ESI                    ; 0045b4b7
    LEA EAX,[EBP + -0x52]               ; 0045b4b8
    LEA ESI,[EBP + 0x4a]                ; 0045b4bb
    ADD ESP,0x4                         ; 0045b4be
    CMP EAX,ESI                         ; 0045b4c1
    JZ 0x0045b4d7                       ; 0045b4c3
        ;   XREF to: 0045b4d7 (CONDITIONAL_JUMP)  ; LAB_0045b4d7
    MOV EAX,dword ptr [EBP + 0x4a]      ; 0045b4c5
    MOV dword ptr [EBP + -0x52],EAX     ; 0045b4c8
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0045b4cb
    MOV dword ptr [EBP + -0x4e],EAX     ; 0045b4ce
    MOV EAX,dword ptr [EBP + 0x52]      ; 0045b4d1
    MOV dword ptr [EBP + -0x4a],EAX     ; 0045b4d4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045b4d7
        ;   Label: LAB_0045b4d7
    SHL EAX,0x3                         ; 0045b4dd
    MOV ESI,EAX                         ; 0045b4e0
    SHL EAX,0x4                         ; 0045b4e2
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0045b4e5
    SUB EAX,ESI                         ; 0045b4eb
    ADD EAX,EDX                         ; 0045b4ed
    MOV ECX,0xc                         ; 0045b4ef
    LEA EDI,[EBP + 0xfffffee2]          ; 0045b4f4
    LEA ESI,[EAX + 0x25b4]              ; 0045b4fa
    MOVSD.REP ES:EDI,ESI                ; 0045b500
    JMP 0x0045b2a8                      ; 0045b502
        ;   XREF to: 0045b2a8 (UNCONDITIONAL_JUMP)  ; LAB_0045b2a8
    MOV ESI,0x3ecccccd                  ; 0045b507
        ;   Label: LAB_0045b507
    PUSH EAX                            ; 0045b50c
    XOR EDI,EDI                         ; 0045b50d
    LEA EAX,[EBP + -0x3a]               ; 0045b50f
    MOV dword ptr [EBP + -0x3a],ESI     ; 0045b512
    MOV dword ptr [EBP + -0x36],EDI     ; 0045b515
    MOV dword ptr [EBP + -0x32],EDI     ; 0045b518
    PUSH EAX                            ; 0045b51b
    LEA ESI,[EBP + -0x46]               ; 0045b51c
    LEA EDI,[EBP + -0x16]               ; 0045b51f
    CALL core_xform.cpp_FUN_005b5080    ; 0045b522
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + -0x46]               ; 0045b527
    MOVSD ES:EDI,ESI                    ; 0045b52a
    MOVSD ES:EDI,ESI                    ; 0045b52b
    MOVSD ES:EDI,ESI                    ; 0045b52c
    LEA EAX,[EBP + -0x16]               ; 0045b52d
    LEA ESI,[EBP + 0xffffff7e]          ; 0045b530
    ADD ESP,0x8                         ; 0045b536
    CMP ESI,EAX                         ; 0045b539
    JZ 0x0045b324                       ; 0045b53b
        ;   XREF to: 0045b324 (CONDITIONAL_JUMP)  ; LAB_0045b324
    MOV EAX,dword ptr [EBP + -0x16]     ; 0045b541
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 0045b544
    MOV EAX,dword ptr [EBP + -0x12]     ; 0045b54a
    MOV dword ptr [EBP + -0x7e],EAX     ; 0045b54d
    MOV EAX,dword ptr [EBP + -0xe]      ; 0045b550
    JMP 0x0045b321                      ; 0045b553
        ;   XREF to: 0045b321 (UNCONDITIONAL_JUMP)  ; LAB_0045b321

