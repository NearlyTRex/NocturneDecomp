; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_dynamicLightHint_FUN_005142c0(float *arg1,float *arg2,float *arg3,float *arg4)
;
; Parameters:
; float *          Stack[0x4]:4   arg1
; float *          Stack[0x8]:4   arg2
; float *          Stack[0xc]:4   arg3
; float *          Stack[0x10]:4   arg4
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d25004
;   undefined4 DAT_02c834a4
;   undefined4 DAT_02c834a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005142c0
        ;   Label: engine_mini3d.cpp_dynamicLightHint_FUN_005142c0
    PUSH ESI                            ; 005142c1
    PUSH EDI                            ; 005142c2
    PUSH EBP                            ; 005142c3
    SUB ESP,0x34                        ; 005142c4
    MOV EDI,dword ptr [ESP + 0x48]      ; 005142c7
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005142cb
    MOV EBP,dword ptr [ESP + 0x50]      ; 005142cf
    CMP dword ptr [0x01d25004],0x0      ; 005142d3 | DAT_01d25004
    JZ 0x00514332                       ; 005142da
        ;   XREF to: 00514332 (CONDITIONAL_JUMP)  ; LAB_00514332
    CMP dword ptr [0x02c834a4],0x0      ; 005142e0 | DAT_02c834a4
    JZ 0x005142fb                       ; 005142e7
        ;   XREF to: 005142fb (CONDITIONAL_JUMP)  ; LAB_005142fb
    CMP dword ptr [0x01c50948],0x0      ; 005142e9 | DAT_01c50948
    JZ 0x005142fb                       ; 005142f0
        ;   XREF to: 005142fb (CONDITIONAL_JUMP)  ; LAB_005142fb
    CMP dword ptr [0x02c834a8],0x0      ; 005142f2 | DAT_02c834a8
    JZ 0x00514332                       ; 005142f9
        ;   XREF to: 00514332 (CONDITIONAL_JUMP)  ; LAB_00514332
    TEST EDI,EDI                        ; 005142fb
        ;   Label: LAB_005142fb
    JNZ 0x0051434a                      ; 005142fd
        ;   XREF to: 0051434a (CONDITIONAL_JUMP)  ; LAB_0051434a
    MOV EBX,dword ptr [0x01d25004]      ; 005142ff | DAT_01d25004
    XOR EDX,EDX                         ; 00514305
    TEST EBX,EBX                        ; 00514307
    JLE 0x00514320                      ; 00514309
        ;   XREF to: 00514320 (CONDITIONAL_JUMP)  ; LAB_00514320
    MOV AH,0x1                          ; 0051430b
    MOV ESI,dword ptr [0x01d25004]      ; 0051430d | DAT_01d25004
    INC EDX                             ; 00514313
        ;   Label: LAB_00514313
    MOV byte ptr [EDX + 0x1d25edf],AH   ; 00514314
    CMP EDX,ESI                         ; 0051431a
    JL 0x00514313                       ; 0051431c
        ;   XREF to: 00514313 (CONDITIONAL_JUMP)  ; LAB_00514313
    MOV EAX,EAX                         ; 0051431e
    CMP dword ptr [0x02c834a8],0x0      ; 00514320 | DAT_02c834a8
        ;   Label: LAB_00514320
    JZ 0x00514332                       ; 00514327
        ;   XREF to: 00514332 (CONDITIONAL_JUMP)  ; LAB_00514332
    CMP dword ptr [0x01c50948],0x0      ; 00514329 | DAT_01c50948
    JNZ 0x0051433a                      ; 00514330
        ;   XREF to: 0051433a (CONDITIONAL_JUMP)  ; LAB_0051433a
    ADD ESP,0x34                        ; 00514332
        ;   Label: LAB_00514332
    POP EBP                             ; 00514335
    POP EDI                             ; 00514336
    POP ESI                             ; 00514337
    POP EBX                             ; 00514338
    RET                                 ; 00514339
    PUSH 0x1d25ee0                      ; 0051433a
        ;   Label: LAB_0051433a
    CALL dword ptr [0x02c834a8]         ; 0051433f | DAT_02c834a8
    ADD ESP,0x4                         ; 00514345
    JMP 0x00514332                      ; 00514348
        ;   XREF to: 00514332 (UNCONDITIONAL_JUMP)  ; LAB_00514332
    XOR EDX,EDX                         ; 0051434a
        ;   Label: LAB_0051434a
    MOV ECX,dword ptr [0x01d25004]      ; 0051434c | DAT_01d25004
    MOV dword ptr [ESP + 0x28],EDX      ; 00514352
    TEST ECX,ECX                        ; 00514356
    JLE 0x00514553                      ; 00514358
        ;   XREF to: 00514553 (CONDITIONAL_JUMP)  ; LAB_00514553
    MOV dword ptr [ESP + 0x24],0x1d25008 ; 0051435e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00514366
        ;   Label: LAB_00514366
    FLD1                                ; 0051436a
    FDIV float ptr [ECX + 0x3c]         ; 0051436c
    MOV EDX,0xff                        ; 0051436f
    XOR ESI,ESI                         ; 00514374
    MOV dword ptr [ESP + 0x30],EDX      ; 00514376
    FSTP float ptr [ESP + 0x2c]         ; 0051437a
    XOR EDX,EDX                         ; 0051437e
        ;   Label: LAB_0051437e
    TEST SI,0x1                         ; 00514380
    JZ 0x00514583                       ; 00514385
        ;   XREF to: 00514583 (CONDITIONAL_JUMP)  ; LAB_00514583
    MOV EAX,dword ptr [EBP]             ; 0051438b
    MOV dword ptr [ESP + 0x18],EAX      ; 0051438e
        ;   Label: LAB_0051438e
    TEST SI,0x2                         ; 00514392
    JZ 0x0051458e                       ; 00514397
        ;   XREF to: 0051458e (CONDITIONAL_JUMP)  ; LAB_0051458e
    MOV EAX,dword ptr [EBP + 0x4]       ; 0051439d
    MOV dword ptr [ESP + 0x1c],EAX      ; 005143a0
        ;   Label: LAB_005143a0
    TEST SI,0x4                         ; 005143a4
    JZ 0x0051459a                       ; 005143a9
        ;   XREF to: 0051459a (CONDITIONAL_JUMP)  ; LAB_0051459a
    MOV EAX,dword ptr [EBP + 0x8]       ; 005143af
    MOV dword ptr [ESP + 0x20],EAX      ; 005143b2
        ;   Label: LAB_005143b2
    FLD float ptr [ESP + 0x1c]          ; 005143b6
    FMUL float ptr [EBX + 0x4]          ; 005143ba
    FLD float ptr [ESP + 0x1c]          ; 005143bd
    FMUL float ptr [EBX + 0x10]         ; 005143c1
    FLD float ptr [ESP + 0x1c]          ; 005143c4
    FMUL float ptr [EBX + 0x1c]         ; 005143c8
    FLD float ptr [ESP + 0x18]          ; 005143cb
    FMUL float ptr [EBX]                ; 005143cf
    FLD float ptr [ESP + 0x18]          ; 005143d1
    FMUL float ptr [EBX + 0xc]          ; 005143d5
    FLD float ptr [ESP + 0x18]          ; 005143d8
    FXCH ST2                            ; 005143dc
    FADDP ST5,ST0                       ; 005143de
    FXCH                                ; 005143e0
    FMUL float ptr [EBX + 0x18]         ; 005143e2
    FLD float ptr [ESP + 0x20]          ; 005143e5
    FMUL float ptr [EBX + 0x8]          ; 005143e9
    FXCH ST2                            ; 005143ec
    FADDP ST4,ST0                       ; 005143ee
    FADDP ST2,ST0                       ; 005143f0
    FLD float ptr [ESP + 0x20]          ; 005143f2
    FMUL float ptr [EBX + 0x14]         ; 005143f6
    FLD float ptr [ESP + 0x20]          ; 005143f9
    FXCH                                ; 005143fd
    FADDP ST4,ST0                       ; 005143ff
    FMUL float ptr [EBX + 0x20]         ; 00514401
    FXCH ST3                            ; 00514404
    FADD float ptr [EDI + 0x4]          ; 00514406
    FXCH                                ; 00514409
    FADDP ST4,ST0                       ; 0051440b
    FSUB float ptr [ECX + 0x4]          ; 0051440d
    FXCH ST3                            ; 00514410
    FADD float ptr [EDI]                ; 00514412
    FXCH ST3                            ; 00514414
    FST float ptr [ESP + 0x10]          ; 00514416
    FMUL float ptr [ECX + 0x18]         ; 0051441a
    FXCH ST3                            ; 0051441d
    FSTP float ptr [ESP + 0xc]          ; 0051441f
    FLD float ptr [ESP + 0x10]          ; 00514423
    FMUL float ptr [ECX + 0x1c]         ; 00514427
    FLD float ptr [ESP + 0x10]          ; 0051442a
    FMUL float ptr [ECX + 0x20]         ; 0051442e
    FXCH ST3                            ; 00514431
    FADDP ST2,ST0                       ; 00514433
    FLD float ptr [ESP + 0xc]           ; 00514435
    FSUB float ptr [ECX]                ; 00514439
    FXCH ST2                            ; 0051443b
    FADD float ptr [EDI + 0x8]          ; 0051443d
    FXCH ST2                            ; 00514440
    FST float ptr [ESP + 0xc]           ; 00514442
    FMUL float ptr [ECX + 0xc]          ; 00514446
    FXCH ST2                            ; 00514449
    FSTP float ptr [ESP + 0x14]         ; 0051444b
    FLD float ptr [ESP + 0xc]           ; 0051444f
    FMUL float ptr [ECX + 0x10]         ; 00514453
    FLD float ptr [ESP + 0xc]           ; 00514456
    FMUL float ptr [ECX + 0x14]         ; 0051445a
    FLD float ptr [ESP + 0x14]          ; 0051445d
    FSUB float ptr [ECX + 0x8]          ; 00514461
    FXCH ST4                            ; 00514464
    FADDP ST6,ST0                       ; 00514466
    FXCH ST3                            ; 00514468
    FST float ptr [ESP + 0x14]          ; 0051446a
    FMUL float ptr [ECX + 0x24]         ; 0051446e
    FXCH                                ; 00514471
    FADDP ST2,ST0                       ; 00514473
    FXCH ST2                            ; 00514475
    FADDP ST3,ST0                       ; 00514477
    FLD float ptr [ESP + 0x14]          ; 00514479
    FMUL float ptr [ECX + 0x28]         ; 0051447d
    FLD float ptr [ESP + 0x14]          ; 00514480
    FXCH ST3                            ; 00514484
    FADDP ST5,ST0                       ; 00514486
    FXCH ST2                            ; 00514488
    FMUL float ptr [ECX + 0x2c]         ; 0051448a
    FXCH ST4                            ; 0051448d
    FLD float ptr [ESP + 0x2c]          ; 0051448f
    FXCH                                ; 00514493
    FMUL ST1                            ; 00514495
    FXCH ST3                            ; 00514497
    FADDP ST2,ST0                       ; 00514499
    FXCH ST4                            ; 0051449b
    FADDP ST3,ST0                       ; 0051449d
    FMULP ST3                           ; 0051449f
    FXCH                                ; 005144a1
    FSTP float ptr [ESP + 0x8]          ; 005144a3
    FSTP float ptr [ESP]                ; 005144a7
    FSTP float ptr [ESP + 0x4]          ; 005144aa
    FLD float ptr [ESP]                 ; 005144ae
    FCOMP float ptr [ESP + 0x8]         ; 005144b1
    FNSTSW AX                           ; 005144b5
    SAHF                                ; 005144b7
    JBE 0x005144bd                      ; 005144b8
        ;   XREF to: 005144bd (CONDITIONAL_JUMP)  ; LAB_005144bd
    OR DL,0x1                           ; 005144ba
    FLD float ptr [ESP + 0x8]           ; 005144bd
        ;   Label: LAB_005144bd
    FCHS                                ; 005144c1
    FCOMP float ptr [ESP]               ; 005144c3
    FNSTSW AX                           ; 005144c6
    SAHF                                ; 005144c8
    JBE 0x005144ce                      ; 005144c9
        ;   XREF to: 005144ce (CONDITIONAL_JUMP)  ; LAB_005144ce
    OR DL,0x2                           ; 005144cb
    FLD float ptr [ESP + 0x4]           ; 005144ce
        ;   Label: LAB_005144ce
    FCOMP float ptr [ESP + 0x8]         ; 005144d2
    FNSTSW AX                           ; 005144d6
    SAHF                                ; 005144d8
    JBE 0x005144de                      ; 005144d9
        ;   XREF to: 005144de (CONDITIONAL_JUMP)  ; LAB_005144de
    OR DL,0x4                           ; 005144db
    FLD float ptr [ESP + 0x8]           ; 005144de
        ;   Label: LAB_005144de
    FCHS                                ; 005144e2
    FCOMP float ptr [ESP + 0x4]         ; 005144e4
    FNSTSW AX                           ; 005144e8
    SAHF                                ; 005144ea
    JBE 0x005144f0                      ; 005144eb
        ;   XREF to: 005144f0 (CONDITIONAL_JUMP)  ; LAB_005144f0
    OR DL,0x8                           ; 005144ed
    FLDZ                                ; 005144f0
        ;   Label: LAB_005144f0
    FCOMP float ptr [ESP + 0x8]         ; 005144f2
    FNSTSW AX                           ; 005144f6
    SAHF                                ; 005144f8
    JC 0x005144fe                       ; 005144f9
        ;   XREF to: 005144fe (CONDITIONAL_JUMP)  ; LAB_005144fe
    OR DL,0x10                          ; 005144fb
    FLD float ptr [ESP + 0x8]           ; 005144fe
        ;   Label: LAB_005144fe
    FCOMP float ptr [ECX + 0x34]        ; 00514502
    FNSTSW AX                           ; 00514505
    SAHF                                ; 00514507
    JBE 0x0051450d                      ; 00514508
        ;   XREF to: 0051450d (CONDITIONAL_JUMP)  ; LAB_0051450d
    OR DL,0x20                          ; 0051450a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051450d
        ;   Label: LAB_0051450d
    AND EAX,EDX                         ; 00514511
    INC ESI                             ; 00514513
    MOV dword ptr [ESP + 0x30],EAX      ; 00514514
    CMP ESI,0x8                         ; 00514518
    JL 0x0051437e                       ; 0051451b
        ;   XREF to: 0051437e (CONDITIONAL_JUMP)  ; LAB_0051437e
    CMP dword ptr [ESP + 0x30],0x0      ; 00514521
    SETZ DL                             ; 00514526
    MOV EAX,dword ptr [ESP + 0x28]      ; 00514529
    MOV ESI,dword ptr [0x01d25004]      ; 0051452d | DAT_01d25004
    MOV byte ptr [EAX + 0x1d25ee0],DL   ; 00514533
    MOV EDX,dword ptr [ESP + 0x24]      ; 00514539
    LEA ECX,[EAX + 0x1]                 ; 0051453d
    ADD EDX,0x4c                        ; 00514540
    MOV dword ptr [ESP + 0x28],ECX      ; 00514543
    MOV dword ptr [ESP + 0x24],EDX      ; 00514547
    CMP ECX,ESI                         ; 0051454b
    JL 0x00514366                       ; 0051454d
        ;   XREF to: 00514366 (CONDITIONAL_JUMP)  ; LAB_00514366
    CMP dword ptr [0x02c834a8],0x0      ; 00514553 | DAT_02c834a8
        ;   Label: LAB_00514553
    JZ 0x00514332                       ; 0051455a
        ;   XREF to: 00514332 (CONDITIONAL_JUMP)  ; LAB_00514332
    CMP dword ptr [0x01c50948],0x0      ; 00514560 | DAT_01c50948
    JZ 0x00514332                       ; 00514567
        ;   XREF to: 00514332 (CONDITIONAL_JUMP)  ; LAB_00514332
    PUSH 0x1d25ee0                      ; 0051456d
    CALL dword ptr [0x02c834a8]         ; 00514572 | DAT_02c834a8
    ADD ESP,0x4                         ; 00514578
    ADD ESP,0x34                        ; 0051457b
    POP EBP                             ; 0051457e
    POP EDI                             ; 0051457f
    POP ESI                             ; 00514580
    POP EBX                             ; 00514581
    RET                                 ; 00514582
    MOV EAX,dword ptr [ESP + 0x54]      ; 00514583
        ;   Label: LAB_00514583
    MOV EAX,dword ptr [EAX]             ; 00514587
    JMP 0x0051438e                      ; 00514589
        ;   XREF to: 0051438e (UNCONDITIONAL_JUMP)  ; LAB_0051438e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0051458e
        ;   Label: LAB_0051458e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00514592
    JMP 0x005143a0                      ; 00514595
        ;   XREF to: 005143a0 (UNCONDITIONAL_JUMP)  ; LAB_005143a0
    MOV EAX,dword ptr [ESP + 0x54]      ; 0051459a
        ;   Label: LAB_0051459a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051459e
    JMP 0x005143b2                      ; 005145a1
        ;   XREF to: 005143b2 (UNCONDITIONAL_JUMP)  ; LAB_005143b2

