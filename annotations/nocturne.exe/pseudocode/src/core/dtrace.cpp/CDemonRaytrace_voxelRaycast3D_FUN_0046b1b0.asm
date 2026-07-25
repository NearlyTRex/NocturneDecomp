; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0 at 0050faef
;
; Referenced Globals:
;   float FLOAT_0057e3b2 = 0.125
;   double DOUBLE_0057e3b6 = 6.42401069530502E-315
;   undefined1 DAT_005b6d08
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b1b0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
    PUSH ESI                            ; 0046b1b1
    PUSH EDI                            ; 0046b1b2
    PUSH EBP                            ; 0046b1b3
    MOV EBP,ESP                         ; 0046b1b4
    SUB ESP,0x78                        ; 0046b1b6
    AND ESP,0xfffffff8                  ; 0046b1b9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046b1bc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046b1bf
    MOV ECX,dword ptr [EBP + 0x14]      ; 0046b1c2
    FLD float ptr [EAX]                 ; 0046b1c5
    FSUB float ptr [ECX + 0x10]         ; 0046b1c7
    FLD float ptr [0x0057e3b2]          ; 0046b1ca | FLOAT_0057e3b2
    FLD float ptr [ECX + 0x28]          ; 0046b1d0
    FMUL ST1                            ; 0046b1d3
    FLD1                                ; 0046b1d5
    FDIVRP                              ; 0046b1d7
    FLD float ptr [EAX + 0x4]           ; 0046b1d9
    FSUB float ptr [ECX + 0x14]         ; 0046b1dc
    FLD float ptr [ECX + 0x2c]          ; 0046b1df
    FMUL ST3                            ; 0046b1e2
    FLD1                                ; 0046b1e4
    FDIVRP                              ; 0046b1e6
    FLD float ptr [EAX + 0x8]           ; 0046b1e8
    FSUB float ptr [ECX + 0x18]         ; 0046b1eb
    FXCH ST5                            ; 0046b1ee
    FMUL ST3                            ; 0046b1f0
    FLD float ptr [ECX + 0x30]          ; 0046b1f2
    FMULP ST5                           ; 0046b1f5
    FLD1                                ; 0046b1f7
    FDIVRP ST5,ST0                      ; 0046b1f9
    FXCH ST2                            ; 0046b1fb
    FMUL ST1                            ; 0046b1fd
    FXCH ST5                            ; 0046b1ff
    FMUL ST4                            ; 0046b201
    FXCH ST2                            ; 0046b203
    FSTP float ptr [ESP + 0x28]         ; 0046b205
    FLD float ptr [EDX]                 ; 0046b209
    FXCH ST5                            ; 0046b20b
    FSTP float ptr [ESP + 0x38]         ; 0046b20d
    FLD float ptr [EDX + 0x4]           ; 0046b211
    FXCH ST5                            ; 0046b214
    FSUB float ptr [ECX + 0x10]         ; 0046b216
    FXCH ST5                            ; 0046b219
    FSUB float ptr [ECX + 0x14]         ; 0046b21b
    FXCH ST5                            ; 0046b21e
    FMULP ST3                           ; 0046b220
    FMULP ST4                           ; 0046b222
    FLD float ptr [EDX + 0x8]           ; 0046b224
    FLD float ptr [EDX]                 ; 0046b227
    FSUB float ptr [EAX]                ; 0046b229
    FXCH                                ; 0046b22b
    FSUB float ptr [ECX + 0x18]         ; 0046b22d
    FXCH                                ; 0046b230
    FSTP float ptr [ESP + 0x4]          ; 0046b232
    FLD float ptr [EDX + 0x4]           ; 0046b236
    FSUB float ptr [EAX + 0x4]          ; 0046b239
    FXCH                                ; 0046b23c
    FMULP ST4                           ; 0046b23e
    FSTP float ptr [ESP + 0x8]          ; 0046b240
    FLD float ptr [EDX + 0x8]           ; 0046b244
    FSUB float ptr [EAX + 0x8]          ; 0046b247
    MOV EBX,0x1                         ; 0046b24a
    FSTP float ptr [ESP + 0xc]          ; 0046b24f
    FSTP float ptr [ESP + 0x3c]         ; 0046b253
    CALL crt_math.c_round_FUN_00563a30  ; 0046b257
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 0046b25c
    CALL crt_math.c_round_FUN_00563a30  ; 0046b25e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0046b263
    CALL crt_math.c_round_FUN_00563a30  ; 0046b265
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FLD float ptr [ESP + 0x28]          ; 0046b26a
    FLD float ptr [ESP + 0x38]          ; 0046b26e
    FLD float ptr [ESP + 0x3c]          ; 0046b272
    FXCH ST5                            ; 0046b276
    FISTP dword ptr [ESP + 0x24]        ; 0046b278
    FXCH ST3                            ; 0046b27c
    FISTP dword ptr [ESP + 0x1c]        ; 0046b27e
    FXCH                                ; 0046b282
    FISTP dword ptr [ESP + 0x30]        ; 0046b284
    CALL crt_math.c_round_FUN_00563a30  ; 0046b288
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0046b28d
    CALL crt_math.c_round_FUN_00563a30  ; 0046b28f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 0046b294
    CALL crt_math.c_round_FUN_00563a30  ; 0046b296
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046b29b
    FXCH                                ; 0046b29f
    FISTP dword ptr [ESP + 0x58]        ; 0046b2a1
    FXCH                                ; 0046b2a5
    FISTP dword ptr [ESP + 0x5c]        ; 0046b2a7
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046b2ab
    FISTP dword ptr [ESP + 0x64]        ; 0046b2af
    CMP EAX,EDX                         ; 0046b2b3
    JNZ 0x0046b2c5                      ; 0046b2b5
        ;   XREF to: 0046b2c5 (CONDITIONAL_JUMP)  ; LAB_0046b2c5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0046b2b7
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0046b2bb
    JZ 0x0046b563                       ; 0046b2bf
        ;   XREF to: 0046b563 (CONDITIONAL_JUMP)  ; LAB_0046b563
    FLD float ptr [ESP + 0x8]           ; 0046b2c5
        ;   Label: LAB_0046b2c5
    FMUL ST0                            ; 0046b2c9
    FLD float ptr [ESP + 0x4]           ; 0046b2cb
    FMUL ST0                            ; 0046b2cf
    FADDP                               ; 0046b2d1
    FLD float ptr [ESP + 0xc]           ; 0046b2d3
    FMUL ST0                            ; 0046b2d7
    FADDP                               ; 0046b2d9
    FSQRT                               ; 0046b2db
    FST float ptr [ESP]                 ; 0046b2dd
    FLDZ                                ; 0046b2e0
    FCOMPP                              ; 0046b2e2
    FNSTSW AX                           ; 0046b2e4
    SAHF                                ; 0046b2e6
    JNC 0x0046b576                      ; 0046b2e7
        ;   XREF to: 0046b576 (CONDITIONAL_JUMP)  ; LAB_0046b576
    FLD float ptr [ESP + 0x8]           ; 0046b2ed
    FABS                                ; 0046b2f1
    FLD float ptr [ESP + 0xc]           ; 0046b2f3
    FABS                                ; 0046b2f7
    FLD float ptr [ESP + 0x4]           ; 0046b2f9
    FLD ST0                             ; 0046b2fd
    FABS                                ; 0046b2ff
    FLD float ptr [0x0057e3b6]          ; 0046b301 | DOUBLE_0057e3b6
    FDIV float ptr [ESP]                ; 0046b307
    FXCH                                ; 0046b30a
    FMUL ST1                            ; 0046b30c
    FXCH ST4                            ; 0046b30e
    FMUL ST1                            ; 0046b310
    FXCH ST3                            ; 0046b312
    FMULP                               ; 0046b314
    FXCH ST3                            ; 0046b316
    CALL crt_math.c_round_FUN_00563a30  ; 0046b318
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x54]        ; 0046b31d
    FLDZ                                ; 0046b321
    FXCH ST2                            ; 0046b323
    CALL crt_math.c_round_FUN_00563a30  ; 0046b325
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 0046b32a
    CALL crt_math.c_round_FUN_00563a30  ; 0046b32c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 0046b331
    FISTP dword ptr [ESP + 0x50]        ; 0046b333
    FXCH ST2                            ; 0046b337
    FISTP dword ptr [ESP + 0x4c]        ; 0046b339
    FCOMPP                              ; 0046b33d
    FNSTSW AX                           ; 0046b33f
    SAHF                                ; 0046b341
    JA 0x0046b581                       ; 0046b342
        ;   XREF to: 0046b581 (CONDITIONAL_JUMP)  ; LAB_0046b581
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046b348
    MOV ESI,dword ptr [ESP + 0x58]      ; 0046b34c
    SUB EAX,ESI                         ; 0046b350
    MOV ECX,0x1                         ; 0046b352
    ADD EBX,EAX                         ; 0046b357
    LEA EAX,[ESI + ECX*0x1]             ; 0046b359
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b35c
    FILD dword ptr [ESP + 0x74]         ; 0046b360
    FSUB float ptr [ESP + 0x28]         ; 0046b364
    MOV dword ptr [ESP + 0x48],ECX      ; 0046b368
    FSTP float ptr [ESP + 0x20]         ; 0046b36c
        ;   Label: LAB_0046b36c
    FLD float ptr [ESP + 0x8]           ; 0046b370
    FLDZ                                ; 0046b374
    FCOMPP                              ; 0046b376
    FNSTSW AX                           ; 0046b378
    SAHF                                ; 0046b37a
    JA 0x0046b5a9                       ; 0046b37b
        ;   XREF to: 0046b5a9 (CONDITIONAL_JUMP)  ; LAB_0046b5a9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046b381
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0046b385
    SUB EAX,ESI                         ; 0046b389
    MOV ECX,0x1                         ; 0046b38b
    ADD EBX,EAX                         ; 0046b390
    LEA EAX,[ESI + ECX*0x1]             ; 0046b392
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b395
    FILD dword ptr [ESP + 0x74]         ; 0046b399
    FSUB float ptr [ESP + 0x38]         ; 0046b39d
    MOV dword ptr [ESP + 0x40],ECX      ; 0046b3a1
    FSTP float ptr [ESP + 0x34]         ; 0046b3a5
        ;   Label: LAB_0046b3a5
    FLD float ptr [ESP + 0xc]           ; 0046b3a9
    FLDZ                                ; 0046b3ad
    FCOMPP                              ; 0046b3af
    FNSTSW AX                           ; 0046b3b1
    SAHF                                ; 0046b3b3
    JA 0x0046b5d1                       ; 0046b3b4
        ;   XREF to: 0046b5d1 (CONDITIONAL_JUMP)  ; LAB_0046b5d1
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046b3ba
    MOV ESI,dword ptr [ESP + 0x64]      ; 0046b3be
    SUB EAX,ESI                         ; 0046b3c2
    MOV ECX,0x1                         ; 0046b3c4
    ADD EBX,EAX                         ; 0046b3c9
    LEA EAX,[ESI + ECX*0x1]             ; 0046b3cb
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b3ce
    FILD dword ptr [ESP + 0x74]         ; 0046b3d2
    FSUB float ptr [ESP + 0x3c]         ; 0046b3d6
    MOV dword ptr [ESP + 0x44],ECX      ; 0046b3da
    FSTP float ptr [ESP + 0x2c]         ; 0046b3de
        ;   Label: LAB_0046b3de
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046b3e2
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b3e6
    FILD dword ptr [ESP + 0x74]         ; 0046b3ea
    FLD ST0                             ; 0046b3ee
    FMUL float ptr [ESP + 0x20]         ; 0046b3f0
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046b3f4
    FXCH                                ; 0046b3f8
    FLD float ptr [ESP + 0x2c]          ; 0046b3fa
    FXCH                                ; 0046b3fe
    FMUL ST1                            ; 0046b400
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b402
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046b406
    FILD dword ptr [ESP + 0x74]         ; 0046b40a
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b40e
    FLD ST0                             ; 0046b412
    FMUL float ptr [ESP + 0x34]         ; 0046b414
    FILD dword ptr [ESP + 0x74]         ; 0046b418
    FLD ST0                             ; 0046b41c
    FMUL float ptr [ESP + 0x20]         ; 0046b41e
    FXCH                                ; 0046b422
    FMUL float ptr [ESP + 0x34]         ; 0046b424
    FXCH ST2                            ; 0046b428
    FSUBP ST6,ST0                       ; 0046b42a
    FXCH ST2                            ; 0046b42c
    FMULP ST4                           ; 0046b42e
    FXCH ST4                            ; 0046b430
    CALL crt_math.c_round_FUN_00563a30  ; 0046b432
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST4                            ; 0046b437
    FSUBP ST2,ST0                       ; 0046b439
    FXCH ST3                            ; 0046b43b
    FISTP dword ptr [ESP + 0x60]        ; 0046b43d
    CALL crt_math.c_round_FUN_00563a30  ; 0046b441
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0046b446
    FSUBP ST2,ST0                       ; 0046b448
    FISTP dword ptr [ESP + 0x68]        ; 0046b44a
    CALL crt_math.c_round_FUN_00563a30  ; 0046b44e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x6c]        ; 0046b453
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046b457
        ;   Label: LAB_0046b457
    MOV EDX,EAX                         ; 0046b45b
    SAR EDX,0x1f                        ; 0046b45d
    SHL EDX,0x3                         ; 0046b460
    SBB EAX,EDX                         ; 0046b463
    SAR EAX,0x3                         ; 0046b465
    PUSH EAX                            ; 0046b468
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046b469
    MOV EDX,EAX                         ; 0046b46d
    SAR EDX,0x1f                        ; 0046b46f
    SHL EDX,0x3                         ; 0046b472
    SBB EAX,EDX                         ; 0046b475
    SAR EAX,0x3                         ; 0046b477
    PUSH EAX                            ; 0046b47a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046b47b
    MOV EDX,EAX                         ; 0046b47f
    SAR EDX,0x1f                        ; 0046b481
    SHL EDX,0x3                         ; 0046b484
    SBB EAX,EDX                         ; 0046b487
    SAR EAX,0x3                         ; 0046b489
    PUSH EAX                            ; 0046b48c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0046b48d
    PUSH EDI                            ; 0046b490
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046b491
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0()
    MOV ECX,EAX                         ; 0046b496
    ADD ESP,0x10                        ; 0046b498
    TEST EAX,EAX                        ; 0046b49b
    JZ 0x0046b4fb                       ; 0046b49d
        ;   XREF to: 0046b4fb (CONDITIONAL_JUMP)  ; LAB_0046b4fb
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046b49f
    MOV EDX,EAX                         ; 0046b4a3
    MOV ESI,0x8                         ; 0046b4a5
    SAR EDX,0x1f                        ; 0046b4aa
    IDIV ESI                            ; 0046b4ad
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0046b4af
    MOV ESI,EDX                         ; 0046b4b3
    MOV EDX,EAX                         ; 0046b4b5
    MOV EDI,0x8                         ; 0046b4b7
    SAR EDX,0x1f                        ; 0046b4bc
    IDIV EDI                            ; 0046b4bf
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046b4c1
    MOV EDI,EDX                         ; 0046b4c5
    MOV EDX,EAX                         ; 0046b4c7
    MOV dword ptr [ESP + 0x74],0x8      ; 0046b4c9
    SAR EDX,0x1f                        ; 0046b4d1
    IDIV dword ptr [ESP + 0x74]         ; 0046b4d4
    MOV EAX,dword ptr [ECX]             ; 0046b4d8
    TEST EAX,EAX                        ; 0046b4da
    JZ 0x0046b4fb                       ; 0046b4dc
        ;   XREF to: 0046b4fb (CONDITIONAL_JUMP)  ; LAB_0046b4fb
    SHL EDX,0x3                         ; 0046b4de
    ADD EDX,EDI                         ; 0046b4e1
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0046b4e3
    XOR EDX,EDX                         ; 0046b4e6
    AND EAX,0xff                        ; 0046b4e8
    MOV DL,byte ptr [ESI + 0x5b6d08]    ; 0046b4ed | DAT_005b6d08
    TEST EAX,EDX                        ; 0046b4f3
    JNZ 0x0046b5f9                      ; 0046b4f5
        ;   XREF to: 0046b5f9 (CONDITIONAL_JUMP)  ; LAB_0046b5f9
    DEC EBX                             ; 0046b4fb
        ;   Label: LAB_0046b4fb
    TEST EBX,EBX                        ; 0046b4fc
    JLE 0x0046b576                      ; 0046b4fe
        ;   XREF to: 0046b576 (CONDITIONAL_JUMP)  ; LAB_0046b576
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046b500
    MOV EDX,dword ptr [ESP + 0x50]      ; 0046b504
    MOV ECX,dword ptr [ESP + 0x44]      ; 0046b508
    ADD EAX,EDX                         ; 0046b50c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0046b50e
    MOV ESI,dword ptr [ESP + 0x54]      ; 0046b512
    ADD EDX,ECX                         ; 0046b516
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0046b518
    MOV EDI,dword ptr [ESP + 0x60]      ; 0046b51c
    SUB ECX,ESI                         ; 0046b520
    TEST EDI,EDI                        ; 0046b522
    JL 0x0046b607                       ; 0046b524
        ;   XREF to: 0046b607 (CONDITIONAL_JUMP)  ; LAB_0046b607
    MOV ESI,dword ptr [ESP + 0x68]      ; 0046b52a
    TEST ESI,ESI                        ; 0046b52e
    JL 0x0046b60f                       ; 0046b530
        ;   XREF to: 0046b60f (CONDITIONAL_JUMP)  ; LAB_0046b60f
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046b536
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0046b53a
    MOV EDX,dword ptr [ESP + 0x60]      ; 0046b53e
    ADD EDI,EAX                         ; 0046b542
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046b544
    MOV ECX,ESI                         ; 0046b548
    SUB EDX,EAX                         ; 0046b54a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046b54c
    MOV dword ptr [ESP + 0x5c],EDI      ; 0046b550
    SUB ECX,EAX                         ; 0046b554
    MOV dword ptr [ESP + 0x60],EDX      ; 0046b556
    MOV dword ptr [ESP + 0x68],ECX      ; 0046b55a
    JMP 0x0046b457                      ; 0046b55e
        ;   XREF to: 0046b457 (UNCONDITIONAL_JUMP)  ; LAB_0046b457
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046b563
        ;   Label: LAB_0046b563
    CMP EAX,dword ptr [ESP + 0x30]      ; 0046b567
    JNZ 0x0046b2c5                      ; 0046b56b
        ;   XREF to: 0046b2c5 (CONDITIONAL_JUMP)  ; LAB_0046b2c5
    JMP 0x0046b457                      ; 0046b571
        ;   XREF to: 0046b457 (UNCONDITIONAL_JUMP)  ; LAB_0046b457
    XOR EDX,EDX                         ; 0046b576
        ;   Label: LAB_0046b576
    MOV EAX,EDX                         ; 0046b578
    MOV ESP,EBP                         ; 0046b57a
    POP EBP                             ; 0046b57c
    POP EDI                             ; 0046b57d
    POP ESI                             ; 0046b57e
    POP EBX                             ; 0046b57f
    RET                                 ; 0046b580
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046b581
        ;   Label: LAB_0046b581
    SUB EAX,dword ptr [ESP + 0x24]      ; 0046b585
    ADD EBX,EAX                         ; 0046b589
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046b58b
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b58f
    MOV EDI,0xffffffff                  ; 0046b593
    FILD dword ptr [ESP + 0x74]         ; 0046b598
    FSUBR float ptr [ESP + 0x28]        ; 0046b59c
    MOV dword ptr [ESP + 0x48],EDI      ; 0046b5a0
    JMP 0x0046b36c                      ; 0046b5a4
        ;   XREF to: 0046b36c (UNCONDITIONAL_JUMP)  ; LAB_0046b36c
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0046b5a9
        ;   Label: LAB_0046b5a9
    SUB EAX,dword ptr [ESP + 0x1c]      ; 0046b5ad
    ADD EBX,EAX                         ; 0046b5b1
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0046b5b3
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b5b7
    MOV EDI,0xffffffff                  ; 0046b5bb
    FILD dword ptr [ESP + 0x74]         ; 0046b5c0
    FSUBR float ptr [ESP + 0x38]        ; 0046b5c4
    MOV dword ptr [ESP + 0x40],EDI      ; 0046b5c8
    JMP 0x0046b3a5                      ; 0046b5cc
        ;   XREF to: 0046b3a5 (UNCONDITIONAL_JUMP)  ; LAB_0046b3a5
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046b5d1
        ;   Label: LAB_0046b5d1
    SUB EAX,dword ptr [ESP + 0x30]      ; 0046b5d5
    ADD EBX,EAX                         ; 0046b5d9
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046b5db
    MOV dword ptr [ESP + 0x74],EAX      ; 0046b5df
    MOV EDI,0xffffffff                  ; 0046b5e3
    FILD dword ptr [ESP + 0x74]         ; 0046b5e8
    FSUBR float ptr [ESP + 0x3c]        ; 0046b5ec
    MOV dword ptr [ESP + 0x44],EDI      ; 0046b5f0
    JMP 0x0046b3de                      ; 0046b5f4
        ;   XREF to: 0046b3de (UNCONDITIONAL_JUMP)  ; LAB_0046b3de
    MOV EDX,0x1                         ; 0046b5f9
        ;   Label: LAB_0046b5f9
    MOV EAX,EDX                         ; 0046b5fe
    MOV ESP,EBP                         ; 0046b600
    POP EBP                             ; 0046b602
    POP EDI                             ; 0046b603
    POP ESI                             ; 0046b604
    POP EBX                             ; 0046b605
    RET                                 ; 0046b606
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0046b607
        ;   Label: LAB_0046b607
    TEST ESI,ESI                        ; 0046b60b
    JL 0x0046b620                       ; 0046b60d
        ;   XREF to: 0046b620 (CONDITIONAL_JUMP)  ; LAB_0046b620
    MOV dword ptr [ESP + 0x6c],ECX      ; 0046b60f
        ;   Label: LAB_0046b60f
    MOV dword ptr [ESP + 0x68],EAX      ; 0046b613
    MOV dword ptr [ESP + 0x64],EDX      ; 0046b617
    JMP 0x0046b457                      ; 0046b61b
        ;   XREF to: 0046b457 (UNCONDITIONAL_JUMP)  ; LAB_0046b457
    MOV EAX,dword ptr [ESP + 0x48]      ; 0046b620
        ;   Label: LAB_0046b620
    MOV EDI,dword ptr [ESP + 0x58]      ; 0046b624
    MOV EDX,dword ptr [ESP + 0x60]      ; 0046b628
    ADD EDI,EAX                         ; 0046b62c
    ADD EDX,dword ptr [ESP + 0x50]      ; 0046b62e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046b632
    MOV dword ptr [ESP + 0x58],EDI      ; 0046b636
    LEA ECX,[ESI + EAX*0x1]             ; 0046b63a
    MOV dword ptr [ESP + 0x60],EDX      ; 0046b63d
    MOV dword ptr [ESP + 0x6c],ECX      ; 0046b641
    JMP 0x0046b457                      ; 0046b645
        ;   XREF to: 0046b457 (UNCONDITIONAL_JUMP)  ; LAB_0046b457

