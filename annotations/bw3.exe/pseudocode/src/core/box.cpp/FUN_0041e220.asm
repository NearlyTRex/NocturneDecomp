; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_box_cpp_FUN_0041e220(float *param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_actor.cpp_FUN_004091b0 at 00409393
;   core_boxactor.cpp_FUN_0041ff20 at 0041ffca
;   core_dmodel.cpp_FUN_004618a0 at 004618ea
;   core_setdir.cpp_testOBBIntersection_FUN_00541470 at 0054170e
;   core_wateract.cpp_FUN_00578d30 at 00578d74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e220
        ;   Label: core_box.cpp_FUN_0041e220
    PUSH ESI                            ; 0041e221
    PUSH EDI                            ; 0041e222
    PUSH EBP                            ; 0041e223
    MOV EBP,ESP                         ; 0041e224
    SUB ESP,0x58                        ; 0041e226
    AND ESP,0xfffffff8                  ; 0041e229
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041e22c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0041e22f
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0041e232
    MOV EDX,dword ptr [EBP + 0x20]      ; 0041e235
    FLD float ptr [ECX]                 ; 0041e238
    MOV EBX,0x1                         ; 0041e23a
    FCOMP float ptr [ESI]               ; 0041e23f
    FNSTSW AX                           ; 0041e241
    SAHF                                ; 0041e243
    JC 0x0041e3a1                       ; 0041e244
        ;   XREF to: 0041e3a1 (CONDITIONAL_JUMP)  ; LAB_0041e3a1
    FLD float ptr [ECX]                 ; 0041e24a
    FCOMP float ptr [ESI + 0xc]         ; 0041e24c
    FNSTSW AX                           ; 0041e24f
    SAHF                                ; 0041e251
    JBE 0x0041e3d3                      ; 0041e252
        ;   XREF to: 0041e3d3 (CONDITIONAL_JUMP)  ; LAB_0041e3d3
    FLD float ptr [ESI + 0xc]           ; 0041e258
    FSUB float ptr [ECX]                ; 0041e25b
    FST float ptr [ESP + 0x30]          ; 0041e25d
    FCOMP float ptr [EDI]               ; 0041e261
    FNSTSW AX                           ; 0041e263
    SAHF                                ; 0041e265
    JC 0x0041e3c0                       ; 0041e266
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x30]          ; 0041e26c
    FDIV float ptr [EDI]                ; 0041e270
    MOV EAX,0x3f800000                  ; 0041e272
    XOR EBX,EBX                         ; 0041e277
        ;   Label: LAB_0041e277
    MOV dword ptr [ESP + 0x40],EAX      ; 0041e279
    FSTP float ptr [ESP + 0x30]         ; 0041e27d
    FLD float ptr [ECX + 0x4]           ; 0041e281
        ;   Label: LAB_0041e281
    FCOMP float ptr [ESI + 0x4]         ; 0041e284
    FNSTSW AX                           ; 0041e287
    SAHF                                ; 0041e289
    JNC 0x0041e3e0                      ; 0041e28a
        ;   XREF to: 0041e3e0 (CONDITIONAL_JUMP)  ; LAB_0041e3e0
    FLD float ptr [ESI + 0x4]           ; 0041e290
    FSUB float ptr [ECX + 0x4]          ; 0041e293
    FST float ptr [ESP + 0x34]          ; 0041e296
    FCOMP float ptr [EDI + 0x4]         ; 0041e29a
    FNSTSW AX                           ; 0041e29d
    SAHF                                ; 0041e29f
    JA 0x0041e3c0                       ; 0041e2a0
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x34]          ; 0041e2a6
    FDIV float ptr [EDI + 0x4]          ; 0041e2aa
    MOV EAX,0xbf800000                  ; 0041e2ad
    XOR EBX,EBX                         ; 0041e2b2
        ;   Label: LAB_0041e2b2
    MOV dword ptr [ESP + 0x54],EAX      ; 0041e2b4
    FSTP float ptr [ESP + 0x34]         ; 0041e2b8
    FLD float ptr [ECX + 0x8]           ; 0041e2bc
        ;   Label: LAB_0041e2bc
    FCOMP float ptr [ESI + 0x8]         ; 0041e2bf
    FNSTSW AX                           ; 0041e2c2
    SAHF                                ; 0041e2c4
    JNC 0x0041e41b                      ; 0041e2c5
        ;   XREF to: 0041e41b (CONDITIONAL_JUMP)  ; LAB_0041e41b
    FLD float ptr [ESI + 0x8]           ; 0041e2cb
    FSUB float ptr [ECX + 0x8]          ; 0041e2ce
    FST float ptr [ESP + 0x44]          ; 0041e2d1
    FCOMP float ptr [EDI + 0x8]         ; 0041e2d5
    FNSTSW AX                           ; 0041e2d8
    SAHF                                ; 0041e2da
    JA 0x0041e3c0                       ; 0041e2db
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x44]          ; 0041e2e1
    FDIV float ptr [EDI + 0x8]          ; 0041e2e5
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 0041e2e8
    FSTP float ptr [ESP + 0x44]         ; 0041e2f0
        ;   Label: LAB_0041e2f0
    FLD float ptr [ESP + 0x34]          ; 0041e2f4
        ;   Label: LAB_0041e2f4
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041e2f8
    XOR EBX,EBX                         ; 0041e2fc
    MOV dword ptr [ESP + 0x38],EAX      ; 0041e2fe
    FCOMP float ptr [ESP + 0x30]        ; 0041e302
    FNSTSW AX                           ; 0041e306
    SAHF                                ; 0041e308
    JBE 0x0041e318                      ; 0041e309
        ;   XREF to: 0041e318 (CONDITIONAL_JUMP)  ; LAB_0041e318
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041e30b
    MOV EBX,0x1                         ; 0041e30f
    MOV dword ptr [ESP + 0x38],EAX      ; 0041e314
    FLD float ptr [ESP + 0x44]          ; 0041e318
        ;   Label: LAB_0041e318
    FCOMP float ptr [ESP + 0x38]        ; 0041e31c
    FNSTSW AX                           ; 0041e320
    SAHF                                ; 0041e322
    JBE 0x0041e622                      ; 0041e323
        ;   XREF to: 0041e622 (CONDITIONAL_JUMP)  ; LAB_0041e622
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041e329
    MOV dword ptr [ESP + 0x38],EAX      ; 0041e32d
    FLD float ptr [EDI]                 ; 0041e331
        ;   Label: LAB_0041e331
    FMUL float ptr [ESP + 0x38]         ; 0041e333
    FADD float ptr [ECX]                ; 0041e337
    FST float ptr [ESP + 0x24]          ; 0041e339
    FCOMP float ptr [ESI]               ; 0041e33d
    FNSTSW AX                           ; 0041e33f
    SAHF                                ; 0041e341
    JC 0x0041e3c0                       ; 0041e342
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x24]          ; 0041e348
    FCOMP float ptr [ESI + 0xc]         ; 0041e34c
    FNSTSW AX                           ; 0041e34f
    SAHF                                ; 0041e351
    JA 0x0041e3c0                       ; 0041e352
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [EDI + 0x4]           ; 0041e354
    FMUL float ptr [ESP + 0x38]         ; 0041e357
    FADD float ptr [ECX + 0x4]          ; 0041e35b
    FST float ptr [ESP + 0x20]          ; 0041e35e
    FCOMP float ptr [ESI + 0x4]         ; 0041e362
    FNSTSW AX                           ; 0041e365
    SAHF                                ; 0041e367
    JC 0x0041e3c0                       ; 0041e368
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x20]          ; 0041e36a
    FCOMP float ptr [ESI + 0x10]        ; 0041e36e
    FNSTSW AX                           ; 0041e371
    SAHF                                ; 0041e373
    JA 0x0041e3c0                       ; 0041e374
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    TEST EDX,EDX                        ; 0041e376
    JZ 0x0041e38e                       ; 0041e378
        ;   XREF to: 0041e38e (CONDITIONAL_JUMP)  ; LAB_0041e38e
    MOV dword ptr [EDX + 0x4],0x0       ; 0041e37a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041e381
    MOV dword ptr [EDX],0x0             ; 0041e385
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e38b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041e38e
        ;   Label: LAB_0041e38e
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041e392
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e396
    MOV ESP,EBP                         ; 0041e39a
    POP EBP                             ; 0041e39c
    POP EDI                             ; 0041e39d
    POP ESI                             ; 0041e39e
    POP EBX                             ; 0041e39f
    RET                                 ; 0041e3a0
    FLD float ptr [ESI]                 ; 0041e3a1
        ;   Label: LAB_0041e3a1
    FSUB float ptr [ECX]                ; 0041e3a3
    FST float ptr [ESP + 0x30]          ; 0041e3a5
    FCOMP float ptr [EDI]               ; 0041e3a9
    FNSTSW AX                           ; 0041e3ab
    SAHF                                ; 0041e3ad
    JA 0x0041e3c0                       ; 0041e3ae
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x30]          ; 0041e3b0
    FDIV float ptr [EDI]                ; 0041e3b4
    MOV EAX,0xbf800000                  ; 0041e3b6
    JMP 0x0041e277                      ; 0041e3bb
        ;   XREF to: 0041e277 (UNCONDITIONAL_JUMP)  ; LAB_0041e277
    MOV dword ptr [ESP + 0x3c],0xbf800000 ; 0041e3c0
        ;   Label: LAB_0041e3c0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e3c8
    MOV ESP,EBP                         ; 0041e3cc
    POP EBP                             ; 0041e3ce
    POP EDI                             ; 0041e3cf
    POP ESI                             ; 0041e3d0
    POP EBX                             ; 0041e3d1
    RET                                 ; 0041e3d2
    MOV dword ptr [ESP + 0x30],0xbf800000 ; 0041e3d3
        ;   Label: LAB_0041e3d3
    JMP 0x0041e281                      ; 0041e3db
        ;   XREF to: 0041e281 (UNCONDITIONAL_JUMP)  ; LAB_0041e281
    FLD float ptr [ECX + 0x4]           ; 0041e3e0
        ;   Label: LAB_0041e3e0
    FCOMP float ptr [ESI + 0x10]        ; 0041e3e3
    FNSTSW AX                           ; 0041e3e6
    SAHF                                ; 0041e3e8
    JBE 0x0041e40e                      ; 0041e3e9
        ;   XREF to: 0041e40e (CONDITIONAL_JUMP)  ; LAB_0041e40e
    FLD float ptr [ESI + 0x10]          ; 0041e3eb
    FSUB float ptr [ECX + 0x4]          ; 0041e3ee
    FST float ptr [ESP + 0x34]          ; 0041e3f1
    FCOMP float ptr [EDI + 0x4]         ; 0041e3f5
    FNSTSW AX                           ; 0041e3f8
    SAHF                                ; 0041e3fa
    JC 0x0041e3c0                       ; 0041e3fb
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x34]          ; 0041e3fd
    FDIV float ptr [EDI + 0x4]          ; 0041e401
    MOV EAX,0x3f800000                  ; 0041e404
    JMP 0x0041e2b2                      ; 0041e409
        ;   XREF to: 0041e2b2 (UNCONDITIONAL_JUMP)  ; LAB_0041e2b2
    MOV dword ptr [ESP + 0x34],0xbf800000 ; 0041e40e
        ;   Label: LAB_0041e40e
    JMP 0x0041e2bc                      ; 0041e416
        ;   XREF to: 0041e2bc (UNCONDITIONAL_JUMP)  ; LAB_0041e2bc
    FLD float ptr [ECX + 0x8]           ; 0041e41b
        ;   Label: LAB_0041e41b
    FCOMP float ptr [ESI + 0x14]        ; 0041e41e
    FNSTSW AX                           ; 0041e421
    SAHF                                ; 0041e423
    JBE 0x0041e44c                      ; 0041e424
        ;   XREF to: 0041e44c (CONDITIONAL_JUMP)  ; LAB_0041e44c
    FLD float ptr [ESI + 0x14]          ; 0041e426
    FSUB float ptr [ECX + 0x8]          ; 0041e429
    FST float ptr [ESP + 0x44]          ; 0041e42c
    FCOMP float ptr [EDI + 0x8]         ; 0041e430
    FNSTSW AX                           ; 0041e433
    SAHF                                ; 0041e435
    JC 0x0041e3c0                       ; 0041e436
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x44]          ; 0041e438
    FDIV float ptr [EDI + 0x8]          ; 0041e43c
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 0041e43f
    JMP 0x0041e2f0                      ; 0041e447
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_JUMP)  ; LAB_0041e2f0
    MOV dword ptr [ESP + 0x44],0xbf800000 ; 0041e44c
        ;   Label: LAB_0041e44c
    TEST EBX,EBX                        ; 0041e454
    JZ 0x0041e2f4                       ; 0041e456
        ;   XREF to: 0041e2f4 (CONDITIONAL_JUMP)  ; LAB_0041e2f4
    TEST EDX,EDX                        ; 0041e45c
    JZ 0x0041e4de                       ; 0041e45e
        ;   XREF to: 0041e4de (CONDITIONAL_JUMP)  ; LAB_0041e4de
    FLD float ptr [EDI]                 ; 0041e464
    FLD float ptr [EDI + 0x4]           ; 0041e466
    FLD float ptr [EDI + 0x8]           ; 0041e469
    LEA ESI,[ESP + 0xc]                 ; 0041e46c
    MOV EAX,ESP                         ; 0041e470
    FXCH ST2                            ; 0041e472
    FCHS                                ; 0041e474
    FXCH                                ; 0041e476
    FCHS                                ; 0041e478
    FXCH ST2                            ; 0041e47a
    FCHS                                ; 0041e47c
    MOV EDI,ESP                         ; 0041e47e
    FXCH ST2                            ; 0041e480
    FSTP float ptr [ESP + 0x10]         ; 0041e482
    FXCH                                ; 0041e486
    FSTP float ptr [ESP + 0x14]         ; 0041e488
    FSTP float ptr [ESP + 0xc]          ; 0041e48c
    MOVSD ES:EDI,ESI                    ; 0041e490
    MOVSD ES:EDI,ESI                    ; 0041e491
    MOVSD ES:EDI,ESI                    ; 0041e492
    CMP EDX,EAX                         ; 0041e493
    JNZ 0x0041e4ef                      ; 0041e495
        ;   XREF to: 0041e4ef (CONDITIONAL_JUMP)  ; LAB_0041e4ef
    FLD float ptr [EDX + 0x4]           ; 0041e497
        ;   Label: LAB_0041e497
    FMUL ST0                            ; 0041e49a
    FLD float ptr [EDX]                 ; 0041e49c
    FMUL ST0                            ; 0041e49e
    FADDP                               ; 0041e4a0
    FLD float ptr [EDX + 0x8]           ; 0041e4a2
    FMUL ST0                            ; 0041e4a5
    FADDP                               ; 0041e4a7
    FSQRT                               ; 0041e4a9
    FLDZ                                ; 0041e4ab
    FXCH                                ; 0041e4ad
    FSTP float ptr [ESP + 0x48]         ; 0041e4af
    FCOMP float ptr [ESP + 0x48]        ; 0041e4b3
    FNSTSW AX                           ; 0041e4b7
    SAHF                                ; 0041e4b9
    JNC 0x0041e504                      ; 0041e4ba
        ;   XREF to: 0041e504 (CONDITIONAL_JUMP)  ; LAB_0041e504
    FLD1                                ; 0041e4bc
    FLD float ptr [EDX]                 ; 0041e4be
    FXCH                                ; 0041e4c0
    FDIV float ptr [ESP + 0x48]         ; 0041e4c2
    FXCH                                ; 0041e4c6
    FMUL ST1                            ; 0041e4c8
    FLD float ptr [EDX + 0x4]           ; 0041e4ca
    FMUL ST2                            ; 0041e4cd
    FLD float ptr [EDX + 0x8]           ; 0041e4cf
    FMULP ST3                           ; 0041e4d2
    FXCH                                ; 0041e4d4
    FSTP float ptr [EDX]                ; 0041e4d6
    FSTP float ptr [EDX + 0x4]          ; 0041e4d8
    FSTP float ptr [EDX + 0x8]          ; 0041e4db
    XOR EDX,EDX                         ; 0041e4de
        ;   Label: LAB_0041e4de
    MOV dword ptr [ESP + 0x3c],EDX      ; 0041e4e0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e4e4
    MOV ESP,EBP                         ; 0041e4e8
    POP EBP                             ; 0041e4ea
    POP EDI                             ; 0041e4eb
    POP ESI                             ; 0041e4ec
    POP EBX                             ; 0041e4ed
    RET                                 ; 0041e4ee
    MOV EAX,dword ptr [ESP]             ; 0041e4ef
        ;   Label: LAB_0041e4ef
    MOV dword ptr [EDX],EAX             ; 0041e4f2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041e4f4
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e4f8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041e4fb
    MOV dword ptr [EDX + 0x8],EAX       ; 0041e4ff
    JMP 0x0041e497                      ; 0041e502
        ;   XREF to: 0041e497 (UNCONDITIONAL_JUMP)  ; LAB_0041e497
    MOV dword ptr [EDX + 0x8],0x0       ; 0041e504
        ;   Label: LAB_0041e504
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041e50b
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e50e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041e511
    MOV dword ptr [EDX],EAX             ; 0041e514
    XOR EDX,EDX                         ; 0041e516
    MOV dword ptr [ESP + 0x3c],EDX      ; 0041e518
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e51c
    MOV ESP,EBP                         ; 0041e520
    POP EBP                             ; 0041e522
    POP EDI                             ; 0041e523
    POP ESI                             ; 0041e524
    POP EBX                             ; 0041e525
    RET                                 ; 0041e526
    FLD float ptr [EDI + 0x4]           ; 0041e527
        ;   Label: LAB_0041e527
    FMUL float ptr [ESP + 0x38]         ; 0041e52a
    FADD float ptr [ECX + 0x4]          ; 0041e52e
    FST float ptr [ESP + 0x1c]          ; 0041e531
    FCOMP float ptr [ESI + 0x4]         ; 0041e535
    FNSTSW AX                           ; 0041e538
    SAHF                                ; 0041e53a
    JC 0x0041e3c0                       ; 0041e53b
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x1c]          ; 0041e541
    FCOMP float ptr [ESI + 0x10]        ; 0041e545
    FNSTSW AX                           ; 0041e548
    SAHF                                ; 0041e54a
    JA 0x0041e3c0                       ; 0041e54b
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [EDI + 0x8]           ; 0041e551
    FMUL float ptr [ESP + 0x38]         ; 0041e554
    FADD float ptr [ECX + 0x8]          ; 0041e558
    FST float ptr [ESP + 0x4c]          ; 0041e55b
    FCOMP float ptr [ESI + 0x8]         ; 0041e55f
    FNSTSW AX                           ; 0041e562
    SAHF                                ; 0041e564
    JC 0x0041e3c0                       ; 0041e565
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x4c]          ; 0041e56b
    FCOMP float ptr [ESI + 0x14]        ; 0041e56f
    FNSTSW AX                           ; 0041e572
    SAHF                                ; 0041e574
    JA 0x0041e3c0                       ; 0041e575
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    TEST EDX,EDX                        ; 0041e57b
    JZ 0x0041e38e                       ; 0041e57d
        ;   XREF to: 0041e38e (CONDITIONAL_JUMP)  ; LAB_0041e38e
    MOV dword ptr [EDX + 0x4],EBX       ; 0041e583
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041e586
    MOV dword ptr [EDX + 0x8],EBX       ; 0041e58a
    MOV dword ptr [EDX],EAX             ; 0041e58d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041e58f
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041e593
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e597
    MOV ESP,EBP                         ; 0041e59b
    POP EBP                             ; 0041e59d
    POP EDI                             ; 0041e59e
    POP ESI                             ; 0041e59f
    POP EBX                             ; 0041e5a0
    RET                                 ; 0041e5a1
    FLD float ptr [EDI]                 ; 0041e5a2
        ;   Label: LAB_0041e5a2
    FMUL float ptr [ESP + 0x38]         ; 0041e5a4
    FADD float ptr [ECX]                ; 0041e5a8
    FST float ptr [ESP + 0x28]          ; 0041e5aa
    FCOMP float ptr [ESI]               ; 0041e5ae
    FNSTSW AX                           ; 0041e5b0
    SAHF                                ; 0041e5b2
    JC 0x0041e3c0                       ; 0041e5b3
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x28]          ; 0041e5b9
    FCOMP float ptr [ESI + 0xc]         ; 0041e5bd
    FNSTSW AX                           ; 0041e5c0
    SAHF                                ; 0041e5c2
    JA 0x0041e3c0                       ; 0041e5c3
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [EDI + 0x8]           ; 0041e5c9
    FMUL float ptr [ESP + 0x38]         ; 0041e5cc
    FADD float ptr [ECX + 0x8]          ; 0041e5d0
    FST float ptr [ESP + 0x50]          ; 0041e5d3
    FCOMP float ptr [ESI + 0x8]         ; 0041e5d7
    FNSTSW AX                           ; 0041e5da
    SAHF                                ; 0041e5dc
    JC 0x0041e3c0                       ; 0041e5dd
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    FLD float ptr [ESP + 0x50]          ; 0041e5e3
    FCOMP float ptr [ESI + 0x14]        ; 0041e5e7
    FNSTSW AX                           ; 0041e5ea
    SAHF                                ; 0041e5ec
    JA 0x0041e3c0                       ; 0041e5ed
        ;   XREF to: 0041e3c0 (CONDITIONAL_JUMP)  ; LAB_0041e3c0
    TEST EDX,EDX                        ; 0041e5f3
    JZ 0x0041e38e                       ; 0041e5f5
        ;   XREF to: 0041e38e (CONDITIONAL_JUMP)  ; LAB_0041e38e
    MOV dword ptr [EDX + 0x8],0x0       ; 0041e5fb
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041e602
    MOV dword ptr [EDX],0x0             ; 0041e606
    MOV dword ptr [EDX + 0x4],EAX       ; 0041e60c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041e60f
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041e613
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e617
    MOV ESP,EBP                         ; 0041e61b
    POP EBP                             ; 0041e61d
    POP EDI                             ; 0041e61e
    POP ESI                             ; 0041e61f
    POP EBX                             ; 0041e620
    RET                                 ; 0041e621
    CMP EBX,0x1                         ; 0041e622
        ;   Label: LAB_0041e622
    JNC 0x0041e642                      ; 0041e625
        ;   XREF to: 0041e642 (CONDITIONAL_JUMP)  ; LAB_0041e642
    TEST EBX,EBX                        ; 0041e627
    JZ 0x0041e527                       ; 0041e629
        ;   XREF to: 0041e527 (CONDITIONAL_JUMP)  ; LAB_0041e527
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041e62f
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041e633
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e637
    MOV ESP,EBP                         ; 0041e63b
    POP EBP                             ; 0041e63d
    POP EDI                             ; 0041e63e
    POP ESI                             ; 0041e63f
    POP EBX                             ; 0041e640
    RET                                 ; 0041e641
    JBE 0x0041e5a2                      ; 0041e642
        ;   XREF to: 0041e5a2 (CONDITIONAL_JUMP)  ; LAB_0041e5a2
        ;   Label: LAB_0041e642
    CMP EBX,0x2                         ; 0041e648
    JZ 0x0041e331                       ; 0041e64b
        ;   XREF to: 0041e331 (CONDITIONAL_JUMP)  ; LAB_0041e331
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041e651
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041e655
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041e659
    MOV ESP,EBP                         ; 0041e65d
    POP EBP                             ; 0041e65f
    POP EDI                             ; 0041e660
    POP ESI                             ; 0041e661
    POP EBX                             ; 0041e662
    RET                                 ; 0041e663

