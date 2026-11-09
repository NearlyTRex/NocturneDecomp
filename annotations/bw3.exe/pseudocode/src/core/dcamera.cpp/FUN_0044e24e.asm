; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044e24e(int param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_013405b0
;   undefined4 DAT_015484c8
;   undefined4 DAT_015484cc
;   undefined4 DAT_015484d0
;   undefined4 DAT_015484d4
;   undefined4 DAT_015484d8
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0044e24e
        ;   Label: core_dcamera.cpp_FUN_0044e24e
    PUSH EBX                            ; 0044e250
    PUSH ESI                            ; 0044e251
    PUSH EDI                            ; 0044e252
    PUSH EBP                            ; 0044e253
    SUB ESP,0x2c                        ; 0044e254
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044e257
    SHL EAX,0x8                         ; 0044e25b
    MOV EDX,EAX                         ; 0044e25e
    SHL EAX,0x4                         ; 0044e260
    MOV ECX,0x874588                    ; 0044e263
    SUB EAX,EDX                         ; 0044e268
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044e26a
    ADD ECX,EAX                         ; 0044e26e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044e270
    SUB EAX,EDX                         ; 0044e277
    SHL EAX,0x2                         ; 0044e279
    MOV EDX,dword ptr [ESP + 0x40]      ; 0044e27c
    ADD ECX,EAX                         ; 0044e280
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044e282
    ADD EAX,EDX                         ; 0044e289
    MOV EDX,0x14fba80                   ; 0044e28b
    SHL EAX,0x8                         ; 0044e290
    ADD EDX,EAX                         ; 0044e293
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044e295
    MOV dword ptr [ESP + 0x18],ECX      ; 0044e299
    SHL EAX,0x2                         ; 0044e29d
    MOV CL,byte ptr [0x013405b0]        ; 0044e2a0 | DAT_013405b0
    ADD EDX,EAX                         ; 0044e2a6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044e2a8
    MOV dword ptr [ESP + 0x10],EDX      ; 0044e2ac
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044e2b0
    SHL EAX,CL                          ; 0044e2b4
    SHL EDX,CL                          ; 0044e2b6
    MOV EAX,dword ptr [EAX*0x4 + 0x1c60dac] ; 0044e2b8
    SHL EDX,0x2                         ; 0044e2bf
    ADD EAX,EDX                         ; 0044e2c2
    MOV EDX,dword ptr [ESP + 0x40]      ; 0044e2c4
    MOV dword ptr [ESP + 0x14],EAX      ; 0044e2c8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044e2cc
    ADD EAX,EDX                         ; 0044e2d3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0044e2d5
    SHL EAX,0x6                         ; 0044e2d9
    ADD EDX,0x784                       ; 0044e2dc
    ADD EAX,EDX                         ; 0044e2e2
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044e2e4
    ADD EDX,EAX                         ; 0044e2e8
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044e2ea
    MOV dword ptr [ESP + 0xc],EDX       ; 0044e2ee
    CMP EAX,dword ptr [ESP + 0x48]      ; 0044e2f2
    JGE 0x0044e424                      ; 0044e2f6
        ;   XREF to: 0044e424 (CONDITIONAL_JUMP)  ; LAB_0044e424
    XOR AH,AH                           ; 0044e2fc
        ;   Label: LAB_0044e2fc
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044e2fe
    MOV byte ptr [ESP + 0x28],AH        ; 0044e302
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044e306
    MOV ECX,dword ptr [EDX]             ; 0044e30a
    CMP ECX,dword ptr [EAX]             ; 0044e30c
    JBE 0x0044e3ce                      ; 0044e30e
        ;   XREF to: 0044e3ce (CONDITIONAL_JUMP)  ; LAB_0044e3ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044e314
    MOV EDX,dword ptr [0x015484c8]      ; 0044e318 | DAT_015484c8
    MOV EAX,dword ptr [EAX]             ; 0044e31e
    SUB EAX,dword ptr [EDX]             ; 0044e320
    CDQ                                 ; 0044e322
    XOR EAX,EDX                         ; 0044e323
    SUB EAX,EDX                         ; 0044e325
    MOV EDX,dword ptr [0x015484c8]      ; 0044e327 | DAT_015484c8
    MOV ESI,dword ptr [EDX + 0xc]       ; 0044e32d
    MOV ECX,EAX                         ; 0044e330
    CMP EAX,ESI                         ; 0044e332
    JGE 0x0044e3ce                      ; 0044e334
        ;   XREF to: 0044e3ce (CONDITIONAL_JUMP)  ; LAB_0044e3ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044e33a
    MOV EDI,dword ptr [EDX + 0x4]       ; 0044e33e
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044e341
    SUB EAX,EDI                         ; 0044e344
    CDQ                                 ; 0044e346
    XOR EAX,EDX                         ; 0044e347
    SUB EAX,EDX                         ; 0044e349
    MOV EDX,dword ptr [0x015484c8]      ; 0044e34b | DAT_015484c8
    MOV EBP,dword ptr [EDX + 0xc]       ; 0044e351
    MOV EBX,EAX                         ; 0044e354
    CMP EAX,EBP                         ; 0044e356
    JGE 0x0044e3ce                      ; 0044e358
        ;   XREF to: 0044e3ce (CONDITIONAL_JUMP)  ; LAB_0044e3ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044e35a
    MOV ESI,dword ptr [EDX + 0x8]       ; 0044e35e
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044e361
    SUB EAX,ESI                         ; 0044e364
    CDQ                                 ; 0044e366
    XOR EAX,EDX                         ; 0044e367
    SUB EAX,EDX                         ; 0044e369
    MOV EDX,dword ptr [0x015484c8]      ; 0044e36b | DAT_015484c8
    CMP EAX,dword ptr [EDX + 0xc]       ; 0044e371
    JGE 0x0044e3ce                      ; 0044e374
        ;   XREF to: 0044e3ce (CONDITIONAL_JUMP)  ; LAB_0044e3ce
    IMUL EBX,EBX                        ; 0044e376
    IMUL ECX,ECX                        ; 0044e379
    IMUL EAX,EAX                        ; 0044e37c
    ADD ECX,EBX                         ; 0044e37f
    ADD ECX,EAX                         ; 0044e381
    MOV EBP,dword ptr [EDX + 0x10]      ; 0044e383
    MOV dword ptr [ESP + 0x8],ECX       ; 0044e386
    CMP ECX,EBP                         ; 0044e38a
    JGE 0x0044e3ce                      ; 0044e38c
        ;   XREF to: 0044e3ce (CONDITIONAL_JUMP)  ; LAB_0044e3ce
    MOV ESI,dword ptr [ESP + 0x40]      ; 0044e38e
    MOV ECX,dword ptr [ESP + 0x14]      ; 0044e392
    MOV EBX,dword ptr [ESP + 0x44]      ; 0044e396
    MOV EAX,[0x015484cc]                ; 0044e39a | DAT_015484cc
    MOV ECX,dword ptr [ECX]             ; 0044e39f
    TEST EAX,EAX                        ; 0044e3a1
    JNZ 0x0044e4b1                      ; 0044e3a3
        ;   XREF to: 0044e4b1 (CONDITIONAL_JUMP)  ; LAB_0044e4b1
    MOV EAX,[0x015484c8]                ; 0044e3a9 | DAT_015484c8
        ;   Label: LAB_0044e3a9
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044e3ae
    MOV EDX,dword ptr [EAX + 0x10]      ; 0044e3b2
    SUB EDX,ECX                         ; 0044e3b5
    SAR EDX,0x10                        ; 0044e3b7
    IMUL EDX,EDX,0x3f                   ; 0044e3ba
    MOV ECX,dword ptr [EAX + 0x10]      ; 0044e3bd
    SAR ECX,0x10                        ; 0044e3c0
    MOV EAX,EDX                         ; 0044e3c3
    SAR EDX,0x1f                        ; 0044e3c5
    IDIV ECX                            ; 0044e3c8
    MOV byte ptr [ESP + 0x28],AL        ; 0044e3ca
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e3ce
        ;   Label: LAB_0044e3ce
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044e3d2
    MOV EBP,dword ptr [ESP + 0x18]      ; 0044e3d6
    MOV AL,byte ptr [ESP + 0x28]        ; 0044e3da
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044e3de
    MOV CL,byte ptr [0x013405b0]        ; 0044e3e2 | DAT_013405b0
    LEA EBX,[EDX + 0x1]                 ; 0044e3e8
    ADD EDI,0x4                         ; 0044e3eb
    ADD EBP,0xc                         ; 0044e3ee
    MOV byte ptr [EDX],AL               ; 0044e3f1
    MOV EAX,0x1                         ; 0044e3f3
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044e3f8
    SHL EAX,CL                          ; 0044e3fc
    MOV dword ptr [ESP + 0xc],EBX       ; 0044e3fe
    SHL EAX,0x2                         ; 0044e402
    MOV dword ptr [ESP + 0x10],EDI      ; 0044e405
    ADD ESI,EAX                         ; 0044e409
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044e40b
    MOV dword ptr [ESP + 0x18],EBP      ; 0044e40f
    INC EAX                             ; 0044e413
    MOV dword ptr [ESP + 0x14],ESI      ; 0044e414
    MOV dword ptr [ESP + 0x44],EAX      ; 0044e418
    CMP EAX,EDX                         ; 0044e41c
    JL 0x0044e2fc                       ; 0044e41e
        ;   XREF to: 0044e2fc (CONDITIONAL_JUMP)  ; LAB_0044e2fc
    MOV EDX,dword ptr [ESP + 0x40]      ; 0044e424
        ;   Label: LAB_0044e424
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0044e428
    SHL EDX,0x2                         ; 0044e42c
    MOV EBX,dword ptr [ESP + 0x40]      ; 0044e42f
    ADD EDX,ECX                         ; 0044e433
    LEA ECX,[EBX*0x4 + 0x0]             ; 0044e435
    ADD ECX,EBX                         ; 0044e43c
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0044e43e
    SHL ECX,0x6                         ; 0044e442
    ADD EBX,0x784                       ; 0044e445
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044e44b
    ADD ECX,EBX                         ; 0044e44e
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 0044e450
    ADD ECX,EAX                         ; 0044e456
    CMP EAX,EDX                         ; 0044e458
    JGE 0x0044e465                      ; 0044e45a
        ;   XREF to: 0044e465 (CONDITIONAL_JUMP)  ; LAB_0044e465
    CMP byte ptr [ECX],0x0              ; 0044e45c
        ;   Label: LAB_0044e45c
    JZ 0x0044e574                       ; 0044e45f
        ;   XREF to: 0044e574 (CONDITIONAL_JUMP)  ; LAB_0044e574
    MOV EBX,dword ptr [ESP + 0x40]      ; 0044e465
        ;   Label: LAB_0044e465
    LEA ECX,[EBX*0x4 + 0x0]             ; 0044e469
    ADD ECX,EBX                         ; 0044e470
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0044e472
    SHL ECX,0x6                         ; 0044e476
    ADD EBX,0x784                       ; 0044e479
    ADD ECX,EBX                         ; 0044e47f
    ADD ECX,EDX                         ; 0044e481
    DEC ECX                             ; 0044e483
    CMP EDX,EAX                         ; 0044e484
    JLE 0x0044e493                      ; 0044e486
        ;   XREF to: 0044e493 (CONDITIONAL_JUMP)  ; LAB_0044e493
    CMP byte ptr [ECX],0x0              ; 0044e488
        ;   Label: LAB_0044e488
    JNZ 0x0044e493                      ; 0044e48b
        ;   XREF to: 0044e493 (CONDITIONAL_JUMP)  ; LAB_0044e493
    DEC EDX                             ; 0044e48d
    DEC ECX                             ; 0044e48e
    CMP EDX,EAX                         ; 0044e48f
    JG 0x0044e488                       ; 0044e491
        ;   XREF to: 0044e488 (CONDITIONAL_JUMP)  ; LAB_0044e488
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044e493
        ;   Label: LAB_0044e493
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0044e497
    SHL ECX,0x2                         ; 0044e49b
    ADD ECX,EBX                         ; 0044e49e
    MOV dword ptr [ECX + 0x4],EAX       ; 0044e4a0
    MOV dword ptr [ECX + 0x3c4],EDX     ; 0044e4a3
    ADD ESP,0x2c                        ; 0044e4a9
    POP EBP                             ; 0044e4ac
    POP EDI                             ; 0044e4ad
    POP ESI                             ; 0044e4ae
    POP EBX                             ; 0044e4af
    RET                                 ; 0044e4b0
    MOV EBP,dword ptr [0x015484d0]      ; 0044e4b1 | DAT_015484d0
        ;   Label: LAB_0044e4b1
    MOV EAX,[0x015484d4]                ; 0044e4b7 | DAT_015484d4
    MOV EDI,dword ptr [0x015484d8]      ; 0044e4bc | DAT_015484d8
    XOR EDX,EDX                         ; 0044e4c2
    MOV dword ptr [ESP],EAX             ; 0044e4c4
    MOV dword ptr [ESP + 0x4],EDX       ; 0044e4c7
    TEST ECX,ECX                        ; 0044e4cb
    JZ 0x0044e541                       ; 0044e4cd
        ;   XREF to: 0044e541 (CONDITIONAL_JUMP)  ; LAB_0044e541
    MOV EAX,0x7fffffff                  ; 0044e4cf
    MOV EDX,EAX                         ; 0044e4d4
    SAR EDX,0x1f                        ; 0044e4d6
    IDIV ECX                            ; 0044e4d9
    MOV ECX,EAX                         ; 0044e4db
    MOV EAX,EBP                         ; 0044e4dd
        ;   Label: LAB_0044e4dd
    SUB EAX,EBX                         ; 0044e4df
    SHL EAX,0x4                         ; 0044e4e1
    MOV dword ptr [ESP + 0x20],EAX      ; 0044e4e4
    MOV EAX,dword ptr [ESP]             ; 0044e4e8
    SUB EAX,ESI                         ; 0044e4eb
    MOV EDX,EDI                         ; 0044e4ed
    SHL EAX,0x4                         ; 0044e4ef
    SUB EDX,ECX                         ; 0044e4f2
    MOV dword ptr [ESP + 0x24],EAX      ; 0044e4f4
    MOV EAX,EDX                         ; 0044e4f8
    SAR EDX,0x1f                        ; 0044e4fa
    SHL EDX,0x4                         ; 0044e4fd
    SBB EAX,EDX                         ; 0044e500
    SAR EAX,0x4                         ; 0044e502
    SHL EBX,0x8                         ; 0044e505
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044e508
    MOV EDX,ESI                         ; 0044e50c
    MOV EAX,0x10                        ; 0044e50e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0044e513
    SHL EDX,0x8                         ; 0044e517
    MOV ESI,EDX                         ; 0044e51a
        ;   Label: LAB_0044e51a
    SAR ESI,0x8                         ; 0044e51c
    IMUL EDI,ESI,0x500                  ; 0044e51f
    MOV ESI,EBX                         ; 0044e525
    SAR ESI,0x8                         ; 0044e527
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xb52a48] ; 0044e52a
    LEA EDI,[ECX + -0x80]               ; 0044e531
    CMP ESI,EDI                         ; 0044e534
    JGE 0x0044e548                      ; 0044e536
        ;   XREF to: 0044e548 (CONDITIONAL_JUMP)  ; LAB_0044e548
    TEST EAX,EAX                        ; 0044e538
    JNZ 0x0044e564                      ; 0044e53a
        ;   XREF to: 0044e564 (CONDITIONAL_JUMP)  ; LAB_0044e564
    JMP 0x0044e3a9                      ; 0044e53c
        ;   XREF to: 0044e3a9 (UNCONDITIONAL_JUMP)  ; LAB_0044e3a9
    MOV ECX,0x7fffffff                  ; 0044e541
        ;   Label: LAB_0044e541
    JMP 0x0044e4dd                      ; 0044e546
        ;   XREF to: 0044e4dd (UNCONDITIONAL_JUMP)  ; LAB_0044e4dd
    MOV ESI,dword ptr [ESP + 0x20]      ; 0044e548
        ;   Label: LAB_0044e548
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044e54c
    DEC EAX                             ; 0044e550
    ADD ECX,EBP                         ; 0044e551
    ADD EBX,ESI                         ; 0044e553
    ADD EDX,EDI                         ; 0044e555
    TEST EAX,EAX                        ; 0044e557
    JG 0x0044e51a                       ; 0044e559
        ;   XREF to: 0044e51a (CONDITIONAL_JUMP)  ; LAB_0044e51a
    TEST EAX,EAX                        ; 0044e55b
    JNZ 0x0044e564                      ; 0044e55d
        ;   XREF to: 0044e564 (CONDITIONAL_JUMP)  ; LAB_0044e564
    JMP 0x0044e3a9                      ; 0044e55f
        ;   XREF to: 0044e3a9 (UNCONDITIONAL_JUMP)  ; LAB_0044e3a9
    CMP dword ptr [ESP + 0x4],0x0       ; 0044e564
        ;   Label: LAB_0044e564
    JNZ 0x0044e3a9                      ; 0044e569
        ;   XREF to: 0044e3a9 (CONDITIONAL_JUMP)  ; LAB_0044e3a9
    JMP 0x0044e3ce                      ; 0044e56f
        ;   XREF to: 0044e3ce (UNCONDITIONAL_JUMP)  ; LAB_0044e3ce
    INC EAX                             ; 0044e574
        ;   Label: LAB_0044e574
    INC ECX                             ; 0044e575
    CMP EAX,EDX                         ; 0044e576
    JL 0x0044e45c                       ; 0044e578
        ;   XREF to: 0044e45c (CONDITIONAL_JUMP)  ; LAB_0044e45c
    JMP 0x0044e465                      ; 0044e57e
        ;   XREF to: 0044e465 (UNCONDITIONAL_JUMP)  ; LAB_0044e465

