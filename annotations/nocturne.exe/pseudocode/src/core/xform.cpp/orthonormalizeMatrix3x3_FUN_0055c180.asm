; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_orthonormalizeMatrix3x3_FUN_0055c180(float *param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   undefined4 DAT_0059832e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c180
        ;   Label: core_xform.cpp_orthonormalizeMatrix3x3_FUN_0055c180
    PUSH ESI                            ; 0055c181
    PUSH EDI                            ; 0055c182
    PUSH EBP                            ; 0055c183
    MOV EBP,ESP                         ; 0055c184
    SUB ESP,0xe0                        ; 0055c186
    AND ESP,0xfffffff8                  ; 0055c18c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0055c18f
    FLD float ptr [ECX]                 ; 0055c192
    FST double ptr [ESP]                ; 0055c194
    FMUL double ptr [ESP]               ; 0055c197
    FLD float ptr [ECX + 0x4]           ; 0055c19a
    FST double ptr [ESP + 0x60]         ; 0055c19d
    FMUL double ptr [ESP + 0x60]        ; 0055c1a1
    FLD float ptr [ECX + 0x8]           ; 0055c1a5
    FXCH                                ; 0055c1a8
    FADDP ST2,ST0                       ; 0055c1aa
    FST double ptr [ESP + 0x8]          ; 0055c1ac
    FMUL double ptr [ESP + 0x8]         ; 0055c1b0
    FADDP                               ; 0055c1b4
    FSQRT                               ; 0055c1b6
    FLD float ptr [ECX + 0x10]          ; 0055c1b8
    FST double ptr [ESP + 0x38]         ; 0055c1bb
    FMUL double ptr [ESP + 0x38]        ; 0055c1bf
    FLD float ptr [ECX + 0x14]          ; 0055c1c3
    FST double ptr [ESP + 0x10]         ; 0055c1c6
    FMUL double ptr [ESP + 0x10]        ; 0055c1ca
    FLD float ptr [ECX + 0x18]          ; 0055c1ce
    FXCH                                ; 0055c1d1
    FADDP ST2,ST0                       ; 0055c1d3
    FST double ptr [ESP + 0x28]         ; 0055c1d5
    FMUL double ptr [ESP + 0x28]        ; 0055c1d9
    FADDP                               ; 0055c1dd
    FSQRT                               ; 0055c1df
    FLD float ptr [ECX + 0x20]          ; 0055c1e1
    FST double ptr [ESP + 0x30]         ; 0055c1e4
    FMUL double ptr [ESP + 0x30]        ; 0055c1e8
    FLD float ptr [ECX + 0x24]          ; 0055c1ec
    FST double ptr [ESP + 0x18]         ; 0055c1ef
    FMUL double ptr [ESP + 0x18]        ; 0055c1f3
    FLD float ptr [ECX + 0x28]          ; 0055c1f7
    FXCH                                ; 0055c1fa
    FADDP ST2,ST0                       ; 0055c1fc
    FST double ptr [ESP + 0x20]         ; 0055c1fe
    FMUL double ptr [ESP + 0x20]        ; 0055c202
    FADDP                               ; 0055c206
    FSQRT                               ; 0055c208
    FLDZ                                ; 0055c20a
    FXCH ST3                            ; 0055c20c
    FSTP double ptr [ESP + 0x40]        ; 0055c20e
    FXCH                                ; 0055c212
    FSTP double ptr [ESP + 0x70]        ; 0055c214
    FSTP double ptr [ESP + 0x68]        ; 0055c218
    FCOMP double ptr [ESP + 0x40]       ; 0055c21c
    FNSTSW AX                           ; 0055c220
    SAHF                                ; 0055c222
    JNC 0x0055c61e                      ; 0055c223
        ;   XREF to: 0055c61e (CONDITIONAL_JUMP)  ; LAB_0055c61e
    FLDZ                                ; 0055c229
        ;   Label: LAB_0055c229
    FCOMP double ptr [ESP + 0x70]       ; 0055c22b
    FNSTSW AX                           ; 0055c22f
    SAHF                                ; 0055c231
    JC 0x0055c243                       ; 0055c232
        ;   XREF to: 0055c243 (CONDITIONAL_JUMP)  ; LAB_0055c243
    XOR ESI,ESI                         ; 0055c234
    MOV EDI,0x3ff00000                  ; 0055c236
    MOV dword ptr [ESP + 0x70],ESI      ; 0055c23b
    MOV dword ptr [ESP + 0x74],EDI      ; 0055c23f
    FLDZ                                ; 0055c243
        ;   Label: LAB_0055c243
    FCOMP double ptr [ESP + 0x68]       ; 0055c245
    FNSTSW AX                           ; 0055c249
    SAHF                                ; 0055c24b
    JNC 0x0055c632                      ; 0055c24c
        ;   XREF to: 0055c632 (CONDITIONAL_JUMP)  ; LAB_0055c632
    FLD1                                ; 0055c252
        ;   Label: LAB_0055c252
    FDIV double ptr [ESP + 0x40]        ; 0055c254
    FLD1                                ; 0055c258
    FDIV double ptr [ESP + 0x70]        ; 0055c25a
    FLD double ptr [ESP]                ; 0055c25e
    FMUL ST2                            ; 0055c261
    FLD double ptr [ESP + 0x60]         ; 0055c263
    FMUL ST3                            ; 0055c267
    FLD double ptr [ESP + 0x8]          ; 0055c269
    FMULP ST4                           ; 0055c26d
    FLD double ptr [ESP + 0x38]         ; 0055c26f
    FXCH ST3                            ; 0055c273
    FSTP double ptr [ESP + 0xb8]        ; 0055c275
    FXCH ST2                            ; 0055c27c
    FMUL double ptr [ESP + 0xb8]        ; 0055c27e
    FLD double ptr [ESP + 0x10]         ; 0055c285
    FMUL double ptr [ESP + 0xb8]        ; 0055c289
    FLD double ptr [ESP + 0x28]         ; 0055c290
    FXCH ST3                            ; 0055c294
    FSTP double ptr [ESP]               ; 0055c296
    FLD1                                ; 0055c299
    FLD double ptr [ESP + 0x30]         ; 0055c29b
    FXCH ST4                            ; 0055c29f
    FMUL double ptr [ESP + 0xb8]        ; 0055c2a1
    FXCH                                ; 0055c2a8
    FDIV double ptr [ESP + 0x68]        ; 0055c2aa
    FSTP double ptr [ESP + 0xb8]        ; 0055c2ae
    FXCH ST3                            ; 0055c2b5
    FMUL double ptr [ESP + 0xb8]        ; 0055c2b7
    FXCH ST4                            ; 0055c2be
    FSTP double ptr [ESP + 0x60]        ; 0055c2c0
    FLD double ptr [ESP + 0x18]         ; 0055c2c4
    FMUL double ptr [ESP + 0xb8]        ; 0055c2c8
    FXCH ST5                            ; 0055c2cf
    FSTP double ptr [ESP + 0x8]         ; 0055c2d1
    FLD double ptr [ESP + 0x20]         ; 0055c2d5
    FMUL double ptr [ESP + 0xb8]        ; 0055c2d9
    XOR EDX,EDX                         ; 0055c2e0
    FXCH ST2                            ; 0055c2e2
    FSTP double ptr [ESP + 0x38]        ; 0055c2e4
    FSTP double ptr [ESP + 0x10]        ; 0055c2e8
    FXCH                                ; 0055c2ec
    FSTP double ptr [ESP + 0x28]        ; 0055c2ee
    FXCH                                ; 0055c2f2
    FSTP double ptr [ESP + 0x30]        ; 0055c2f4
    FXCH                                ; 0055c2f8
    FSTP double ptr [ESP + 0x18]        ; 0055c2fa
    FSTP double ptr [ESP + 0x20]        ; 0055c2fe
    FLD double ptr [ESP + 0x10]         ; 0055c302
        ;   Label: LAB_0055c302
    FMUL double ptr [ESP + 0x20]        ; 0055c306
    FLD double ptr [ESP + 0x28]         ; 0055c30a
    FMUL double ptr [ESP + 0x30]        ; 0055c30e
    FLD double ptr [ESP + 0x38]         ; 0055c312
    FMUL double ptr [ESP + 0x18]        ; 0055c316
    FLD double ptr [ESP + 0x28]         ; 0055c31a
    FMUL double ptr [ESP + 0x18]        ; 0055c31e
    FLD double ptr [ESP + 0x38]         ; 0055c322
    FMUL double ptr [ESP + 0x20]        ; 0055c326
    FLD double ptr [ESP + 0x30]         ; 0055c32a
    FMUL double ptr [ESP + 0x10]        ; 0055c32e
    FXCH ST2                            ; 0055c332
    FSUBP ST5,ST0                       ; 0055c334
    FSUBP ST3,ST0                       ; 0055c336
    FLD double ptr [0x0059832e]         ; 0055c338 | DAT_0059832e
    FLD double ptr [ESP]                ; 0055c33e
    FMUL ST1                            ; 0055c341
    FLD double ptr [ESP + 0x60]         ; 0055c343
    FMUL ST2                            ; 0055c347
    FXCH                                ; 0055c349
    FADDP ST6,ST0                       ; 0055c34b
    FXCH ST5                            ; 0055c34d
    FST double ptr [ESP + 0xb0]         ; 0055c34f
    FMUL double ptr [ESP + 0xb0]        ; 0055c356
    FXCH ST2                            ; 0055c35d
    FSUBP ST3,ST0                       ; 0055c35f
    FXCH ST4                            ; 0055c361
    FADDP ST3,ST0                       ; 0055c363
    FXCH ST2                            ; 0055c365
    FST double ptr [ESP + 0x78]         ; 0055c367
    FMUL double ptr [ESP + 0x78]        ; 0055c36b
    FLD double ptr [ESP + 0x8]          ; 0055c36f
    FMUL ST4                            ; 0055c373
    FXCH                                ; 0055c375
    FADDP ST3,ST0                       ; 0055c377
    FADDP                               ; 0055c379
    FST double ptr [ESP + 0x80]         ; 0055c37b
    FMUL double ptr [ESP + 0x80]        ; 0055c382
    FADDP                               ; 0055c389
    FSQRT                               ; 0055c38b
    FLD double ptr [ESP + 0x18]         ; 0055c38d
    FMUL double ptr [ESP + 0x8]         ; 0055c391
    FLD double ptr [ESP + 0x20]         ; 0055c395
    FMUL double ptr [ESP]               ; 0055c399
    FLD double ptr [ESP + 0x30]         ; 0055c39c
    FMUL double ptr [ESP + 0x60]        ; 0055c3a0
    FLD double ptr [ESP + 0x20]         ; 0055c3a4
    FMUL double ptr [ESP + 0x60]        ; 0055c3a8
    FLD double ptr [ESP + 0x30]         ; 0055c3ac
    FMUL double ptr [ESP + 0x8]         ; 0055c3b0
    FXCH                                ; 0055c3b4
    FSUBP ST4,ST0                       ; 0055c3b6
    FLD double ptr [ESP + 0x18]         ; 0055c3b8
    FMUL double ptr [ESP]               ; 0055c3bc
    FXCH                                ; 0055c3bf
    FSUBP ST3,ST0                       ; 0055c3c1
    FLD double ptr [ESP + 0x38]         ; 0055c3c3
    FMUL ST6                            ; 0055c3c7
    FXCH                                ; 0055c3c9
    FSUBP ST2,ST0                       ; 0055c3cb
    FLD double ptr [ESP + 0x10]         ; 0055c3cd
    FMUL ST6                            ; 0055c3d1
    FXCH                                ; 0055c3d3
    FADDP ST4,ST0                       ; 0055c3d5
    FXCH ST3                            ; 0055c3d7
    FSTP double ptr [ESP + 0x88]        ; 0055c3d9
    FLD double ptr [ESP + 0x28]         ; 0055c3e0
    FMUL ST5                            ; 0055c3e4
    FLD double ptr [ESP + 0x88]         ; 0055c3e6
    FMUL ST0                            ; 0055c3ed
    FXCH ST4                            ; 0055c3ef
    FADDP ST3,ST0                       ; 0055c3f1
    FXCH ST2                            ; 0055c3f3
    FST double ptr [ESP + 0x90]         ; 0055c3f5
    FMUL double ptr [ESP + 0x90]        ; 0055c3fc
    FXCH ST2                            ; 0055c403
    FADDP                               ; 0055c405
    FXCH                                ; 0055c407
    FADDP ST2,ST0                       ; 0055c409
    FST double ptr [ESP + 0x98]         ; 0055c40b
    FMUL double ptr [ESP + 0x98]        ; 0055c412
    FADDP                               ; 0055c419
    FSQRT                               ; 0055c41b
    FLD double ptr [ESP + 0x60]         ; 0055c41d
    FMUL double ptr [ESP + 0x28]        ; 0055c421
    FLD double ptr [ESP + 0x8]          ; 0055c425
    FMUL double ptr [ESP + 0x10]        ; 0055c429
    FLD double ptr [ESP + 0x8]          ; 0055c42d
    FXCH                                ; 0055c431
    FSUBP ST2,ST0                       ; 0055c433
    FMUL double ptr [ESP + 0x38]        ; 0055c435
    FLD double ptr [ESP + 0x30]         ; 0055c439
    FMUL ST5                            ; 0055c43d
    FLD double ptr [ESP]                ; 0055c43f
    FMUL double ptr [ESP + 0x28]        ; 0055c442
    FXCH                                ; 0055c446
    FADDP ST3,ST0                       ; 0055c448
    FLD double ptr [ESP]                ; 0055c44a
    FMUL double ptr [ESP + 0x10]        ; 0055c44d
    FXCH                                ; 0055c451
    FSUBP ST2,ST0                       ; 0055c453
    FXCH ST2                            ; 0055c455
    FSTP double ptr [ESP + 0xa0]        ; 0055c457
    FLD double ptr [ESP + 0x18]         ; 0055c45e
    FMUL ST5                            ; 0055c462
    FLD double ptr [ESP + 0x60]         ; 0055c464
    FMUL double ptr [ESP + 0x38]        ; 0055c468
    FXCH                                ; 0055c46c
    FADDP ST2,ST0                       ; 0055c46e
    FLD double ptr [ESP + 0xa0]         ; 0055c470
    FMUL ST0                            ; 0055c477
    FXCH                                ; 0055c479
    FSUBP ST3,ST0                       ; 0055c47b
    FXCH                                ; 0055c47d
    FST double ptr [ESP + 0xa8]         ; 0055c47f
    FMUL double ptr [ESP + 0xa8]        ; 0055c486
    FLD double ptr [ESP + 0x20]         ; 0055c48d
    FMULP ST6                           ; 0055c491
    FADDP                               ; 0055c493
    FXCH ST4                            ; 0055c495
    FADDP                               ; 0055c497
    FST double ptr [ESP + 0xc0]         ; 0055c499
    FMUL double ptr [ESP + 0xc0]        ; 0055c4a0
    FADDP ST3,ST0                       ; 0055c4a7
    FXCH ST2                            ; 0055c4a9
    FSQRT                               ; 0055c4ab
    FLD1                                ; 0055c4ad
    FDIVRP ST3,ST0                      ; 0055c4af
    FLD1                                ; 0055c4b1
    FDIVRP ST2,ST0                      ; 0055c4b3
    FLD double ptr [ESP + 0xb0]         ; 0055c4b5
    FMUL ST2                            ; 0055c4bc
    FLD double ptr [ESP + 0x78]         ; 0055c4be
    FMUL ST3                            ; 0055c4c2
    FLD double ptr [ESP + 0x80]         ; 0055c4c4
    FMULP ST4                           ; 0055c4cb
    FLD double ptr [ESP + 0x88]         ; 0055c4cd
    FXCH ST5                            ; 0055c4d4
    FSTP double ptr [ESP + 0xb8]        ; 0055c4d6
    FXCH ST4                            ; 0055c4dd
    FMUL double ptr [ESP + 0xb8]        ; 0055c4df
    FXCH ST2                            ; 0055c4e6
    FSTP double ptr [ESP + 0xd8]        ; 0055c4e8
    FLD double ptr [ESP + 0x90]         ; 0055c4ef
    FMUL double ptr [ESP + 0xb8]        ; 0055c4f6
    FLD1                                ; 0055c4fd
    FXCH ST2                            ; 0055c4ff
    FSTP double ptr [ESP]               ; 0055c501
    FLD double ptr [ESP + 0xa0]         ; 0055c504
    FLD double ptr [ESP + 0x98]         ; 0055c50b
    FMUL double ptr [ESP + 0xb8]        ; 0055c512
    FXCH ST3                            ; 0055c519
    FDIV double ptr [ESP + 0xd8]        ; 0055c51b
    FSTP double ptr [ESP + 0xb8]        ; 0055c522
    FMUL double ptr [ESP + 0xb8]        ; 0055c529
    FXCH ST5                            ; 0055c530
    FSTP double ptr [ESP + 0x60]        ; 0055c532
    FLD double ptr [ESP + 0xa8]         ; 0055c536
    FMUL double ptr [ESP + 0xb8]        ; 0055c53d
    FXCH ST4                            ; 0055c544
    FSTP double ptr [ESP + 0x8]         ; 0055c546
    FLD double ptr [ESP + 0xc0]         ; 0055c54a
    FMUL double ptr [ESP + 0xb8]        ; 0055c551
    INC EDX                             ; 0055c558
    FXCH ST3                            ; 0055c559
    FSTP double ptr [ESP + 0x38]        ; 0055c55b
    FSTP double ptr [ESP + 0x10]        ; 0055c55f
    FSTP double ptr [ESP + 0x28]        ; 0055c563
    FXCH ST2                            ; 0055c567
    FSTP double ptr [ESP + 0x30]        ; 0055c569
    FSTP double ptr [ESP + 0x18]        ; 0055c56d
    FSTP double ptr [ESP + 0x20]        ; 0055c571
    CMP EDX,0xa                         ; 0055c575
    JL 0x0055c302                       ; 0055c578
        ;   XREF to: 0055c302 (CONDITIONAL_JUMP)  ; LAB_0055c302
    FLD double ptr [ESP + 0x20]         ; 0055c57e
    FLD double ptr [ESP + 0x10]         ; 0055c582
    FMUL ST1                            ; 0055c586
    FLD double ptr [ESP + 0x28]         ; 0055c588
    FLD ST0                             ; 0055c58c
    FLD double ptr [ESP + 0x30]         ; 0055c58e
    FXCH                                ; 0055c592
    FMUL ST1                            ; 0055c594
    FLD double ptr [ESP + 0x38]         ; 0055c596
    FLD ST0                             ; 0055c59a
    FMUL double ptr [ESP + 0x18]        ; 0055c59c
    FXCH ST4                            ; 0055c5a0
    FMUL double ptr [ESP + 0x18]        ; 0055c5a2
    FXCH                                ; 0055c5a6
    FMULP ST6                           ; 0055c5a8
    FXCH ST2                            ; 0055c5aa
    FMUL double ptr [ESP + 0x10]        ; 0055c5ac
    MOV EBX,dword ptr [EBP + 0x18]      ; 0055c5b0
    FXCH ST2                            ; 0055c5b3
    FSUBP ST4,ST0                       ; 0055c5b5
    FSUBRP ST4,ST0                      ; 0055c5b7
    FSUBP                               ; 0055c5b9
    FXCH ST2                            ; 0055c5bb
    FSTP double ptr [ESP + 0x50]        ; 0055c5bd
    FXCH                                ; 0055c5c1
    FSTP double ptr [ESP + 0x58]        ; 0055c5c3
    FSTP double ptr [ESP + 0x48]        ; 0055c5c7
    TEST EBX,EBX                        ; 0055c5cb
    JNZ 0x0055c646                      ; 0055c5cd
        ;   XREF to: 0055c646 (CONDITIONAL_JUMP)  ; LAB_0055c646
    FLD double ptr [ESP + 0x48]         ; 0055c5cf
        ;   Label: LAB_0055c5cf
    FLD double ptr [ESP + 0x50]         ; 0055c5d3
    FLD double ptr [ESP + 0x58]         ; 0055c5d7
    FLD double ptr [ESP + 0x38]         ; 0055c5db
    FLD double ptr [ESP + 0x10]         ; 0055c5df
    FLD double ptr [ESP + 0x28]         ; 0055c5e3
    FLD double ptr [ESP + 0x30]         ; 0055c5e7
    FXCH ST5                            ; 0055c5eb
    FSTP float ptr [ECX + 0x4]          ; 0055c5ed
    FLD double ptr [ESP + 0x18]         ; 0055c5f0
    FXCH ST4                            ; 0055c5f4
    FSTP float ptr [ECX + 0x8]          ; 0055c5f6
    FLD double ptr [ESP + 0x20]         ; 0055c5f9
    FXCH ST3                            ; 0055c5fd
    FSTP float ptr [ECX + 0x10]         ; 0055c5ff
    FXCH                                ; 0055c602
    FSTP float ptr [ECX + 0x14]         ; 0055c604
    FSTP float ptr [ECX + 0x18]         ; 0055c607
    FXCH ST2                            ; 0055c60a
    FSTP float ptr [ECX + 0x20]         ; 0055c60c
    FSTP float ptr [ECX + 0x24]         ; 0055c60f
    FSTP float ptr [ECX + 0x28]         ; 0055c612
    FSTP float ptr [ECX]                ; 0055c615
    MOV ESP,EBP                         ; 0055c617
    POP EBP                             ; 0055c619
    POP EDI                             ; 0055c61a
    POP ESI                             ; 0055c61b
    POP EBX                             ; 0055c61c
    RET                                 ; 0055c61d
    XOR EDX,EDX                         ; 0055c61e
        ;   Label: LAB_0055c61e
    MOV EBX,0x3ff00000                  ; 0055c620
    MOV dword ptr [ESP + 0x40],EDX      ; 0055c625
    MOV dword ptr [ESP + 0x44],EBX      ; 0055c629
    JMP 0x0055c229                      ; 0055c62d
        ;   XREF to: 0055c229 (UNCONDITIONAL_JUMP)  ; LAB_0055c229
    XOR EAX,EAX                         ; 0055c632
        ;   Label: LAB_0055c632
    MOV EDX,0x3ff00000                  ; 0055c634
    MOV dword ptr [ESP + 0x68],EAX      ; 0055c639
    MOV dword ptr [ESP + 0x6c],EDX      ; 0055c63d
    JMP 0x0055c252                      ; 0055c641
        ;   XREF to: 0055c252 (UNCONDITIONAL_JUMP)  ; LAB_0055c252
    FLD double ptr [ESP + 0x40]         ; 0055c646
        ;   Label: LAB_0055c646
    FLD double ptr [ESP + 0x48]         ; 0055c64a
    FMUL ST1                            ; 0055c64e
    FLD double ptr [ESP + 0x50]         ; 0055c650
    FMUL ST2                            ; 0055c654
    FLD double ptr [ESP + 0x58]         ; 0055c656
    FMULP ST3                           ; 0055c65a
    FLD double ptr [ESP + 0x70]         ; 0055c65c
    FLD double ptr [ESP + 0x38]         ; 0055c660
    FMUL ST1                            ; 0055c664
    FLD double ptr [ESP + 0x10]         ; 0055c666
    FMUL ST2                            ; 0055c66a
    FLD double ptr [ESP + 0x28]         ; 0055c66c
    FMULP ST3                           ; 0055c670
    FLD double ptr [ESP + 0x30]         ; 0055c672
    FMUL double ptr [ESP + 0x68]        ; 0055c676
    FXCH ST4                            ; 0055c67a
    FSTP double ptr [ESP + 0x50]        ; 0055c67c
    FLD double ptr [ESP + 0x18]         ; 0055c680
    FMUL double ptr [ESP + 0x68]        ; 0055c684
    FXCH ST6                            ; 0055c688
    FSTP double ptr [ESP + 0x58]        ; 0055c68a
    FLD double ptr [ESP + 0x20]         ; 0055c68e
    FMUL double ptr [ESP + 0x68]        ; 0055c692
    FXCH ST2                            ; 0055c696
    FSTP double ptr [ESP + 0x38]        ; 0055c698
    FSTP double ptr [ESP + 0x10]        ; 0055c69c
    FXCH                                ; 0055c6a0
    FSTP double ptr [ESP + 0x28]        ; 0055c6a2
    FXCH                                ; 0055c6a6
    FSTP double ptr [ESP + 0x30]        ; 0055c6a8
    FXCH ST2                            ; 0055c6ac
    FSTP double ptr [ESP + 0x18]        ; 0055c6ae
    FXCH                                ; 0055c6b2
    FSTP double ptr [ESP + 0x20]        ; 0055c6b4
    FSTP double ptr [ESP + 0x48]        ; 0055c6b8
    JMP 0x0055c5cf                      ; 0055c6bc
        ;   XREF to: 0055c5cf (UNCONDITIONAL_JUMP)  ; LAB_0055c5cf

