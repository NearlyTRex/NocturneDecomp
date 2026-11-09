; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setdir_cpp_FUN_0053a1b0(SVDBox *obb_a,SVDBox *obb_b)
;
; Parameters:
; SVDBox *         Stack[0x4]:4   obb_a
; SVDBox *         Stack[0x8]:4   obb_b
; Local Variables:
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_setdir.cpp_FUN_0053a610 at 0053a700
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_FUN_0041af70
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a1b0
        ;   Label: core_setdir.cpp_FUN_0053a1b0
    PUSH ESI                            ; 0053a1b1
    PUSH EDI                            ; 0053a1b2
    PUSH EBP                            ; 0053a1b3
    MOV EBP,ESP                         ; 0053a1b4
    SUB ESP,0x184                       ; 0053a1b6
    SUB EBP,0x7a                        ; 0053a1bc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0053a1bf
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a1c5
    LEA EDI,[EBP + -0x32]               ; 0053a1cb
    LEA ESI,[EBP + 0xa]                 ; 0053a1ce
    FLD float ptr [EAX + 0xc]           ; 0053a1d1
    FLD float ptr [EAX + 0x10]          ; 0053a1d4
    FLD float ptr [EAX + 0x14]          ; 0053a1d7
    FXCH ST2                            ; 0053a1da
    FCHS                                ; 0053a1dc
    FXCH                                ; 0053a1de
    FCHS                                ; 0053a1e0
    FXCH ST2                            ; 0053a1e2
    FCHS                                ; 0053a1e4
    FXCH                                ; 0053a1e6
    FSTP float ptr [EBP + 0xa]          ; 0053a1e8
    FXCH                                ; 0053a1eb
    FSTP float ptr [EBP + 0xe]          ; 0053a1ed
    FSTP float ptr [EBP + 0x12]         ; 0053a1f0
    MOVSD ES:EDI,ESI                    ; 0053a1f3
    MOVSD ES:EDI,ESI                    ; 0053a1f4
    MOVSD ES:EDI,ESI                    ; 0053a1f5
    LEA EAX,[EBP + 0xffffff56]          ; 0053a1f6
    LEA ESI,[EBP + -0x32]               ; 0053a1fc
    CMP EAX,ESI                         ; 0053a1ff
    JNZ 0x0053a588                      ; 0053a201
        ;   XREF to: 0053a588 (CONDITIONAL_JUMP)  ; LAB_0053a588
    MOV ESI,dword ptr [EBP + 0x92]      ; 0053a207
        ;   Label: LAB_0053a207
    LEA EAX,[EBP + 0xffffff62]          ; 0053a20d
    ADD ESI,0xc                         ; 0053a213
    CMP EAX,ESI                         ; 0053a216
    JNZ 0x0053a5a8                      ; 0053a218
        ;   XREF to: 0053a5a8 (CONDITIONAL_JUMP)  ; LAB_0053a5a8
    PUSH 0x5f22b0                       ; 0053a21e | g_CVectorTypeInfo
        ;   Label: LAB_0053a21e
    PUSH 0x8                            ; 0053a223
    LEA EAX,[EBP + 0xfffffef6]          ; 0053a225
    PUSH EAX                            ; 0053a22b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0053a22c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a231
    ADD ESP,0xc                         ; 0053a237
    ADD EAX,0x18                        ; 0053a23a
    XOR EDX,EDX                         ; 0053a23d
    MOV dword ptr [EBP + 0x6e],EAX      ; 0053a23f
    LEA EAX,[EBX + 0x18]                ; 0053a242
    MOV dword ptr [EBP + 0x6a],EDX      ; 0053a245
    MOV dword ptr [EBP + 0x56],EAX      ; 0053a248
    MOV EAX,dword ptr [EBX + 0xc]       ; 0053a24b
        ;   Label: LAB_0053a24b
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0053a24e
    MOV dword ptr [EBP + 0x5a],EAX      ; 0053a251
    IMUL EAX,ECX,0xc                    ; 0053a254
    LEA ESI,[EBP + 0xfffffef6]          ; 0053a257
    ADD EAX,ESI                         ; 0053a25d
    MOV dword ptr [EBP + 0x66],EAX      ; 0053a25f
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0053a262
        ;   Label: LAB_0053a262
    MOV dword ptr [EBP + -0x56],EAX     ; 0053a265
    TEST byte ptr [EBP + 0x6a],0x2      ; 0053a268
    JZ 0x0053a5de                       ; 0053a26c
        ;   XREF to: 0053a5de (CONDITIONAL_JUMP)  ; LAB_0053a5de
    FLD float ptr [EBX + 0x10]          ; 0053a272
    FCHS                                ; 0053a275
    FSTP float ptr [EBP + 0x5e]         ; 0053a277
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0053a27a
        ;   Label: LAB_0053a27a
    MOV DL,byte ptr [EBP + 0x6a]        ; 0053a27d
    MOV dword ptr [EBP + -0x52],EAX     ; 0053a280
    TEST DL,0x4                         ; 0053a283
    JZ 0x0053a5e9                       ; 0053a286
        ;   XREF to: 0053a5e9 (CONDITIONAL_JUMP)  ; LAB_0053a5e9
    FLD float ptr [EBX + 0x14]          ; 0053a28c
    FCHS                                ; 0053a28f
    FSTP float ptr [EBP + 0x62]         ; 0053a291
    MOV EAX,dword ptr [EBP + 0x62]      ; 0053a294
        ;   Label: LAB_0053a294
    MOV dword ptr [EBP + -0x4e],EAX     ; 0053a297
    LEA EAX,[EBP + -0x56]               ; 0053a29a
    PUSH EAX                            ; 0053a29d
    MOV ESI,dword ptr [EBP + 0x56]      ; 0053a29e
    PUSH ESI                            ; 0053a2a1
    LEA ESI,[EBP + 0x22]                ; 0053a2a2
    LEA EDI,[EBP + -0x3e]               ; 0053a2a5
    CALL core_dirmat.cpp_FUN_00449530   ; 0053a2a8
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[EBP + 0x22]                ; 0053a2ad
    MOVSD ES:EDI,ESI                    ; 0053a2b0
    MOVSD ES:EDI,ESI                    ; 0053a2b1
    MOVSD ES:EDI,ESI                    ; 0053a2b2
    FLD float ptr [EBP + -0x3e]         ; 0053a2b3
    FLD float ptr [EBP + -0x3a]         ; 0053a2b6
    FLD float ptr [EBP + -0x36]         ; 0053a2b9
    LEA EDI,[EBP + -0x7a]               ; 0053a2bc
    LEA ESI,[EBP + -0x26]               ; 0053a2bf
    FXCH ST2                            ; 0053a2c2
    FADD float ptr [EBX]                ; 0053a2c4
    FXCH                                ; 0053a2c6
    FADD float ptr [EBX + 0x4]          ; 0053a2c8
    FXCH ST2                            ; 0053a2cb
    FADD float ptr [EBX + 0x8]          ; 0053a2cd
    FXCH                                ; 0053a2d0
    FSTP float ptr [EBP + -0x26]        ; 0053a2d2
    FXCH                                ; 0053a2d5
    FSTP float ptr [EBP + -0x22]        ; 0053a2d7
    FSTP float ptr [EBP + -0x1e]        ; 0053a2da
    MOVSD ES:EDI,ESI                    ; 0053a2dd
    MOVSD ES:EDI,ESI                    ; 0053a2de
    MOVSD ES:EDI,ESI                    ; 0053a2df
    LEA EAX,[EBP + -0x56]               ; 0053a2e0
    LEA ESI,[EBP + -0x7a]               ; 0053a2e3
    ADD ESP,0x8                         ; 0053a2e6
    CMP EAX,ESI                         ; 0053a2e9
    JZ 0x0053a2ff                       ; 0053a2eb
        ;   XREF to: 0053a2ff (CONDITIONAL_JUMP)  ; LAB_0053a2ff
    MOV EAX,dword ptr [EBP + -0x7a]     ; 0053a2ed
    MOV dword ptr [EBP + -0x56],EAX     ; 0053a2f0
    MOV EAX,dword ptr [EBP + -0x76]     ; 0053a2f3
    MOV dword ptr [EBP + -0x52],EAX     ; 0053a2f6
    MOV EAX,dword ptr [EBP + -0x72]     ; 0053a2f9
    MOV dword ptr [EBP + -0x4e],EAX     ; 0053a2fc
    FLD float ptr [EBP + -0x56]         ; 0053a2ff
        ;   Label: LAB_0053a2ff
    FLD float ptr [EBP + -0x52]         ; 0053a302
    FLD float ptr [EBP + -0x4e]         ; 0053a305
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a308
    LEA EDI,[EBP + 0xffffff7a]          ; 0053a30e
    LEA ESI,[EBP + -0x1a]               ; 0053a314
    FXCH ST2                            ; 0053a317
    FSUB float ptr [EAX]                ; 0053a319
    FXCH                                ; 0053a31b
    FSUB float ptr [EAX + 0x4]          ; 0053a31d
    FXCH ST2                            ; 0053a320
    FSUB float ptr [EAX + 0x8]          ; 0053a322
    FXCH                                ; 0053a325
    FSTP float ptr [EBP + -0x1a]        ; 0053a327
    FXCH                                ; 0053a32a
    FSTP float ptr [EBP + -0x16]        ; 0053a32c
    FSTP float ptr [EBP + -0x12]        ; 0053a32f
    LEA EAX,[EBP + 0xffffff7a]          ; 0053a332
    MOVSD ES:EDI,ESI                    ; 0053a338
    MOVSD ES:EDI,ESI                    ; 0053a339
    MOVSD ES:EDI,ESI                    ; 0053a33a
    PUSH EAX                            ; 0053a33b
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0053a33c
    PUSH EDI                            ; 0053a33f
    LEA ESI,[EBP + -0x2]                ; 0053a340
    LEA EDI,[EBP + -0xe]                ; 0053a343
    CALL core_dirmat.cpp_FUN_004495a0   ; 0053a346
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[EBP + -0x2]                ; 0053a34b
    MOVSD ES:EDI,ESI                    ; 0053a34e
    MOVSD ES:EDI,ESI                    ; 0053a34f
    MOVSD ES:EDI,ESI                    ; 0053a350
    LEA EAX,[EBP + -0x56]               ; 0053a351
    LEA ESI,[EBP + -0xe]                ; 0053a354
    ADD ESP,0x8                         ; 0053a357
    CMP EAX,ESI                         ; 0053a35a
    JZ 0x0053a370                       ; 0053a35c
        ;   XREF to: 0053a370 (CONDITIONAL_JUMP)  ; LAB_0053a370
    MOV EAX,dword ptr [EBP + -0xe]      ; 0053a35e
    MOV dword ptr [EBP + -0x56],EAX     ; 0053a361
    MOV EAX,dword ptr [EBP + -0xa]      ; 0053a364
    MOV dword ptr [EBP + -0x52],EAX     ; 0053a367
    MOV EAX,dword ptr [EBP + -0x6]      ; 0053a36a
    MOV dword ptr [EBP + -0x4e],EAX     ; 0053a36d
    FLD float ptr [EBP + 0xffffff56]    ; 0053a370
        ;   Label: LAB_0053a370
    FCOMP float ptr [EBP + -0x56]       ; 0053a376
    FNSTSW AX                           ; 0053a379
    SAHF                                ; 0053a37b
    JA 0x0053a3c8                       ; 0053a37c
        ;   XREF to: 0053a3c8 (CONDITIONAL_JUMP)  ; LAB_0053a3c8
    FLD float ptr [EBP + 0xffffff5a]    ; 0053a37e
    FCOMP float ptr [EBP + -0x52]       ; 0053a384
    FNSTSW AX                           ; 0053a387
    SAHF                                ; 0053a389
    JA 0x0053a3c8                       ; 0053a38a
        ;   XREF to: 0053a3c8 (CONDITIONAL_JUMP)  ; LAB_0053a3c8
    FLD float ptr [EBP + 0xffffff5e]    ; 0053a38c
    FCOMP float ptr [EBP + -0x4e]       ; 0053a392
    FNSTSW AX                           ; 0053a395
    SAHF                                ; 0053a397
    JA 0x0053a3c8                       ; 0053a398
        ;   XREF to: 0053a3c8 (CONDITIONAL_JUMP)  ; LAB_0053a3c8
    FLD float ptr [EBP + 0xffffff62]    ; 0053a39a
    FCOMP float ptr [EBP + -0x56]       ; 0053a3a0
    FNSTSW AX                           ; 0053a3a3
    SAHF                                ; 0053a3a5
    JC 0x0053a3c8                       ; 0053a3a6
        ;   XREF to: 0053a3c8 (CONDITIONAL_JUMP)  ; LAB_0053a3c8
    FLD float ptr [EBP + 0xffffff66]    ; 0053a3a8
    FCOMP float ptr [EBP + -0x52]       ; 0053a3ae
    FNSTSW AX                           ; 0053a3b1
    SAHF                                ; 0053a3b3
    JC 0x0053a3c8                       ; 0053a3b4
        ;   XREF to: 0053a3c8 (CONDITIONAL_JUMP)  ; LAB_0053a3c8
    FLD float ptr [EBP + 0xffffff6a]    ; 0053a3b6
    FCOMP float ptr [EBP + -0x4e]       ; 0053a3bc
    FNSTSW AX                           ; 0053a3bf
    SAHF                                ; 0053a3c1
    JNC 0x0053a5f4                      ; 0053a3c2
        ;   XREF to: 0053a5f4 (CONDITIONAL_JUMP)  ; LAB_0053a5f4
    MOV EDX,dword ptr [EBP + 0x66]      ; 0053a3c8
        ;   Label: LAB_0053a3c8
    LEA EAX,[EBP + -0x56]               ; 0053a3cb
    CMP EAX,EDX                         ; 0053a3ce
    JZ 0x0053a3e3                       ; 0053a3d0
        ;   XREF to: 0053a3e3 (CONDITIONAL_JUMP)  ; LAB_0053a3e3
    MOV EAX,dword ptr [EBP + -0x56]     ; 0053a3d2
    MOV dword ptr [EDX],EAX             ; 0053a3d5
    MOV EAX,dword ptr [EBP + -0x52]     ; 0053a3d7
    MOV dword ptr [EDX + 0x4],EAX       ; 0053a3da
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0053a3dd
    MOV dword ptr [EDX + 0x8],EAX       ; 0053a3e0
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0053a3e3
        ;   Label: LAB_0053a3e3
    MOV ECX,dword ptr [EBP + 0x66]      ; 0053a3e6
    INC ESI                             ; 0053a3e9
    ADD ECX,0xc                         ; 0053a3ea
    MOV dword ptr [EBP + 0x6a],ESI      ; 0053a3ed
    MOV dword ptr [EBP + 0x66],ECX      ; 0053a3f0
    CMP ESI,0x8                         ; 0053a3f3
    JL 0x0053a5c7                       ; 0053a3f6
        ;   XREF to: 0053a5c7 (CONDITIONAL_JUMP)  ; LAB_0053a5c7
    XOR EAX,EAX                         ; 0053a3fc
    LEA EBX,[EBP + 0xfffffef6]          ; 0053a3fe
    MOV dword ptr [EBP + 0x52],EAX      ; 0053a404
    MOV EAX,dword ptr [EBP + 0x52]      ; 0053a407
        ;   Label: LAB_0053a407
    XOR AL,0x1                          ; 0053a40a
    IMUL EAX,EAX,0xc                    ; 0053a40c
    LEA ESI,[EBP + 0xfffffef6]          ; 0053a40f
    PUSH 0x0                            ; 0053a415
    LEA EDI,[EBP + 0x16]                ; 0053a417
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0053a41a
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0053a41e
    FLD float ptr [ESI + EAX*0x1]       ; 0053a422
    LEA ESI,[EBP + -0x4a]               ; 0053a425
    LEA EAX,[EBP + 0x16]                ; 0053a428
    FSUB float ptr [EBX]                ; 0053a42b
    FXCH ST2                            ; 0053a42d
    FSUB float ptr [EBX + 0x4]          ; 0053a42f
    FXCH                                ; 0053a432
    FSUB float ptr [EBX + 0x8]          ; 0053a434
    FXCH ST2                            ; 0053a437
    FSTP float ptr [EBP + -0x4a]        ; 0053a439
    PUSH EAX                            ; 0053a43c
    FSTP float ptr [EBP + -0x46]        ; 0053a43d
    LEA EAX,[EBP + 0xffffff56]          ; 0053a440
    PUSH EBX                            ; 0053a446
    FSTP float ptr [EBP + -0x42]        ; 0053a447
    PUSH EAX                            ; 0053a44a
    MOVSD ES:EDI,ESI                    ; 0053a44b
    MOVSD ES:EDI,ESI                    ; 0053a44c
    MOVSD ES:EDI,ESI                    ; 0053a44d
    CALL core_box.cpp_FUN_0041af70      ; 0053a44e
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    FLDZ                                ; 0053a453
    MOV dword ptr [EBP + 0x76],EAX      ; 0053a455
    ADD ESP,0x10                        ; 0053a458
    MOV EAX,dword ptr [EBP + 0x76]      ; 0053a45b
    MOV dword ptr [EBP + 0x72],EAX      ; 0053a45e
    FLD float ptr [EBP + 0x72]          ; 0053a461
    FSTP double ptr [EBP + 0x4a]        ; 0053a464
    FCOMP double ptr [EBP + 0x4a]       ; 0053a467
    FNSTSW AX                           ; 0053a46a
    SAHF                                ; 0053a46c
    JA 0x0053a47d                       ; 0053a46d
        ;   XREF to: 0053a47d (CONDITIONAL_JUMP)  ; LAB_0053a47d
    FLD1                                ; 0053a46f
    FCOMP double ptr [EBP + 0x4a]       ; 0053a471
    FNSTSW AX                           ; 0053a474
    SAHF                                ; 0053a476
    JNC 0x0053a5f4                      ; 0053a477
        ;   XREF to: 0053a5f4 (CONDITIONAL_JUMP)  ; LAB_0053a5f4
    MOV ESI,dword ptr [EBP + 0x52]      ; 0053a47d
        ;   Label: LAB_0053a47d
    XOR SI,0x2                          ; 0053a480
    IMUL ESI,ESI,0xc                    ; 0053a484
    LEA EAX,[EBP + 0xfffffef6]          ; 0053a487
    PUSH 0x0                            ; 0053a48d
    LEA EDI,[EBP + 0x2e]                ; 0053a48f
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0053a492
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0053a496
    FLD float ptr [ESI + EAX*0x1]       ; 0053a49a
    LEA ESI,[EBP + -0x6e]               ; 0053a49d
    LEA EAX,[EBP + 0x2e]                ; 0053a4a0
    FSUB float ptr [EBX]                ; 0053a4a3
    FXCH ST2                            ; 0053a4a5
    FSUB float ptr [EBX + 0x4]          ; 0053a4a7
    FXCH                                ; 0053a4aa
    FSUB float ptr [EBX + 0x8]          ; 0053a4ac
    FXCH ST2                            ; 0053a4af
    FSTP float ptr [EBP + -0x6e]        ; 0053a4b1
    PUSH EAX                            ; 0053a4b4
    FSTP float ptr [EBP + -0x6a]        ; 0053a4b5
    LEA EAX,[EBP + 0xffffff56]          ; 0053a4b8
    PUSH EBX                            ; 0053a4be
    FSTP float ptr [EBP + -0x66]        ; 0053a4bf
    PUSH EAX                            ; 0053a4c2
    MOVSD ES:EDI,ESI                    ; 0053a4c3
    MOVSD ES:EDI,ESI                    ; 0053a4c4
    MOVSD ES:EDI,ESI                    ; 0053a4c5
    CALL core_box.cpp_FUN_0041af70      ; 0053a4c6
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    FLDZ                                ; 0053a4cb
    MOV dword ptr [EBP + 0x76],EAX      ; 0053a4cd
    ADD ESP,0x10                        ; 0053a4d0
    FLD float ptr [EBP + 0x76]          ; 0053a4d3
    FSTP double ptr [EBP + 0x42]        ; 0053a4d6
    FCOMP double ptr [EBP + 0x42]       ; 0053a4d9
    FNSTSW AX                           ; 0053a4dc
    SAHF                                ; 0053a4de
    JA 0x0053a4ef                       ; 0053a4df
        ;   XREF to: 0053a4ef (CONDITIONAL_JUMP)  ; LAB_0053a4ef
    FLD1                                ; 0053a4e1
    FCOMP double ptr [EBP + 0x42]       ; 0053a4e3
    FNSTSW AX                           ; 0053a4e6
    SAHF                                ; 0053a4e8
    JNC 0x0053a5f4                      ; 0053a4e9
        ;   XREF to: 0053a5f4 (CONDITIONAL_JUMP)  ; LAB_0053a5f4
    MOV EAX,dword ptr [EBP + 0x52]      ; 0053a4ef
        ;   Label: LAB_0053a4ef
    XOR AL,0x4                          ; 0053a4f2
    IMUL EAX,EAX,0xc                    ; 0053a4f4
    LEA ESI,[EBP + 0xfffffef6]          ; 0053a4f7
    PUSH 0x0                            ; 0053a4fd
    LEA EDI,[EBP + -0x62]               ; 0053a4ff
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0053a502
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0053a506
    FLD float ptr [ESI + EAX*0x1]       ; 0053a50a
    LEA ESI,[EBP + 0xffffff6e]          ; 0053a50d
    LEA EAX,[EBP + -0x62]               ; 0053a513
    FSUB float ptr [EBX]                ; 0053a516
    FXCH ST2                            ; 0053a518
    FSUB float ptr [EBX + 0x4]          ; 0053a51a
    FXCH                                ; 0053a51d
    FSUB float ptr [EBX + 0x8]          ; 0053a51f
    FXCH ST2                            ; 0053a522
    FSTP float ptr [EBP + 0xffffff6e]   ; 0053a524
    PUSH EAX                            ; 0053a52a
    FSTP float ptr [EBP + 0xffffff72]   ; 0053a52b
    LEA EAX,[EBP + 0xffffff56]          ; 0053a531
    PUSH EBX                            ; 0053a537
    FSTP float ptr [EBP + 0xffffff76]   ; 0053a538
    PUSH EAX                            ; 0053a53e
    MOVSD ES:EDI,ESI                    ; 0053a53f
    MOVSD ES:EDI,ESI                    ; 0053a540
    MOVSD ES:EDI,ESI                    ; 0053a541
    CALL core_box.cpp_FUN_0041af70      ; 0053a542
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    FLDZ                                ; 0053a547
    MOV dword ptr [EBP + 0x76],EAX      ; 0053a549
    ADD ESP,0x10                        ; 0053a54c
    FLD float ptr [EBP + 0x76]          ; 0053a54f
    FSTP double ptr [EBP + 0x3a]        ; 0053a552
    FCOMP double ptr [EBP + 0x3a]       ; 0053a555
    FNSTSW AX                           ; 0053a558
    SAHF                                ; 0053a55a
    JA 0x0053a56b                       ; 0053a55b
        ;   XREF to: 0053a56b (CONDITIONAL_JUMP)  ; LAB_0053a56b
    FLD1                                ; 0053a55d
    FCOMP double ptr [EBP + 0x3a]       ; 0053a55f
    FNSTSW AX                           ; 0053a562
    SAHF                                ; 0053a564
    JNC 0x0053a5f4                      ; 0053a565
        ;   XREF to: 0053a5f4 (CONDITIONAL_JUMP)  ; LAB_0053a5f4
    MOV EDX,dword ptr [EBP + 0x52]      ; 0053a56b
        ;   Label: LAB_0053a56b
    INC EDX                             ; 0053a56e
    ADD EBX,0xc                         ; 0053a56f
    MOV dword ptr [EBP + 0x52],EDX      ; 0053a572
    CMP EDX,0x8                         ; 0053a575
    JL 0x0053a407                       ; 0053a578
        ;   XREF to: 0053a407 (CONDITIONAL_JUMP)  ; LAB_0053a407
    XOR EAX,EAX                         ; 0053a57e
    LEA ESP,[EBP + 0x7a]                ; 0053a580
    POP EBP                             ; 0053a583
    POP EDI                             ; 0053a584
    POP ESI                             ; 0053a585
    POP EBX                             ; 0053a586
    RET                                 ; 0053a587
    MOV EAX,dword ptr [EBP + -0x32]     ; 0053a588
        ;   Label: LAB_0053a588
    MOV dword ptr [EBP + 0xffffff56],EAX ; 0053a58b
    MOV EAX,dword ptr [EBP + -0x2e]     ; 0053a591
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 0053a594
    MOV EAX,dword ptr [EBP + -0x2a]     ; 0053a59a
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 0053a59d
    JMP 0x0053a207                      ; 0053a5a3
        ;   XREF to: 0053a207 (UNCONDITIONAL_JUMP)  ; LAB_0053a207
    MOV EAX,dword ptr [ESI]             ; 0053a5a8
        ;   Label: LAB_0053a5a8
    MOV dword ptr [EBP + 0xffffff62],EAX ; 0053a5aa
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053a5b0
    MOV dword ptr [EBP + 0xffffff66],EAX ; 0053a5b3
    MOV EAX,dword ptr [ESI + 0x8]       ; 0053a5b9
    MOV dword ptr [EBP + 0xffffff6a],EAX ; 0053a5bc
    JMP 0x0053a21e                      ; 0053a5c2
        ;   XREF to: 0053a21e (UNCONDITIONAL_JUMP)  ; LAB_0053a21e
    TEST byte ptr [EBP + 0x6a],0x1      ; 0053a5c7
        ;   Label: LAB_0053a5c7
    JZ 0x0053a24b                       ; 0053a5cb
        ;   XREF to: 0053a24b (CONDITIONAL_JUMP)  ; LAB_0053a24b
    FLD float ptr [EBX + 0xc]           ; 0053a5d1
    FCHS                                ; 0053a5d4
    FSTP float ptr [EBP + 0x5a]         ; 0053a5d6
    JMP 0x0053a262                      ; 0053a5d9
        ;   XREF to: 0053a262 (UNCONDITIONAL_JUMP)  ; LAB_0053a262
    MOV EAX,dword ptr [EBX + 0x10]      ; 0053a5de
        ;   Label: LAB_0053a5de
    MOV dword ptr [EBP + 0x5e],EAX      ; 0053a5e1
    JMP 0x0053a27a                      ; 0053a5e4
        ;   XREF to: 0053a27a (UNCONDITIONAL_JUMP)  ; LAB_0053a27a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0053a5e9
        ;   Label: LAB_0053a5e9
    MOV dword ptr [EBP + 0x62],EAX      ; 0053a5ec
    JMP 0x0053a294                      ; 0053a5ef
        ;   XREF to: 0053a294 (UNCONDITIONAL_JUMP)  ; LAB_0053a294
    MOV EAX,0x1                         ; 0053a5f4
        ;   Label: LAB_0053a5f4
    LEA ESP,[EBP + 0x7a]                ; 0053a5f9
    POP EBP                             ; 0053a5fc
    POP EDI                             ; 0053a5fd
    POP ESI                             ; 0053a5fe
    POP EBX                             ; 0053a5ff
    RET                                 ; 0053a600

