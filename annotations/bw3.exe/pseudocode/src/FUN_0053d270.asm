; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0053d270(int param_1,float param_2,float *param_3,float *param_4,float param_5)
;
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   FUN_0053cad0 at 0053cb9e
;   FUN_0053cbf0 at 0053cc37
;   FUN_0053ccc0 at 0053cd73
;   FUN_0053ce80 at 0053cee8
;
; Called Functions:
;   FUN_004091b0
;   FUN_0041d840
;   FUN_0053d770
;   FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d270
        ;   Label: FUN_0053d270
    PUSH ESI                            ; 0053d271
    PUSH EDI                            ; 0053d272
    PUSH EBP                            ; 0053d273
    MOV EBP,ESP                         ; 0053d274
    SUB ESP,0x108                       ; 0053d276
    AND ESP,0xfffffff8                  ; 0053d27c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0053d27f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d282
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 0053d285
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 0053d28f
    MOV EDX,dword ptr [EAX + 0x15f6ac]  ; 0053d299
    MOV dword ptr [EAX + 0x14d144],0x0  ; 0053d29f
    TEST EDX,EDX                        ; 0053d2a9
    JL 0x0053d4f2                       ; 0053d2ab
        ;   XREF to: 0053d4f2 (CONDITIONAL_JUMP)  ; LAB_0053d4f2
    FLD float ptr [EBP + 0x24]          ; 0053d2b1
    FLDZ                                ; 0053d2b4
    FCOMPP                              ; 0053d2b6
    FNSTSW AX                           ; 0053d2b8
    SAHF                                ; 0053d2ba
    JNC 0x0053d50a                      ; 0053d2bb
        ;   XREF to: 0053d50a (CONDITIONAL_JUMP)  ; LAB_0053d50a
    FLD float ptr [EBP + 0x18]          ; 0053d2c1
    FLDZ                                ; 0053d2c4
    FCOMPP                              ; 0053d2c6
    FNSTSW AX                           ; 0053d2c8
    SAHF                                ; 0053d2ca
    JA 0x0053d521                       ; 0053d2cb
        ;   XREF to: 0053d521 (CONDITIONAL_JUMP)  ; LAB_0053d521
    FLD float ptr [EBP + 0x24]          ; 0053d2d1
        ;   Label: LAB_0053d2d1
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053d2d4
    FLD1                                ; 0053d2d7
    MOV dword ptr [ESP + 0xf4],EAX      ; 0053d2d9
    FCOMPP                              ; 0053d2e0
    FNSTSW AX                           ; 0053d2e2
    SAHF                                ; 0053d2e4
    JNC 0x0053d2f2                      ; 0053d2e5
        ;   XREF to: 0053d2f2 (CONDITIONAL_JUMP)  ; LAB_0053d2f2
    MOV dword ptr [ESP + 0xf4],0x3f800000 ; 0053d2e7
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053d2f2
        ;   Label: LAB_0053d2f2
    LEA EDI,[ESP + 0x78]                ; 0053d2f5
    LEA ESI,[ESP + 0x6c]                ; 0053d2f9
    FLD float ptr [EAX]                 ; 0053d2fd
    FLD float ptr [EAX + 0x4]           ; 0053d2ff
    FLD float ptr [EAX + 0x8]           ; 0053d302
    FXCH ST2                            ; 0053d305
    FSUB float ptr [EBX]                ; 0053d307
    FXCH                                ; 0053d309
    FSUB float ptr [EBX + 0x4]          ; 0053d30b
    FXCH ST2                            ; 0053d30e
    FSUB float ptr [EBX + 0x8]          ; 0053d310
    FXCH                                ; 0053d313
    FSTP float ptr [ESP + 0x6c]         ; 0053d315
    FXCH                                ; 0053d319
    FSTP float ptr [ESP + 0x70]         ; 0053d31b
    FSTP float ptr [ESP + 0x74]         ; 0053d31f
    MOVSD ES:EDI,ESI                    ; 0053d323
    MOVSD ES:EDI,ESI                    ; 0053d324
    MOVSD ES:EDI,ESI                    ; 0053d325
    FLD float ptr [ESP + 0xf4]          ; 0053d326
    FLD float ptr [ESP + 0x78]          ; 0053d32d
    FMUL ST1                            ; 0053d331
    FLD float ptr [ESP + 0x7c]          ; 0053d333
    FMUL ST2                            ; 0053d337
    FLD float ptr [ESP + 0x80]          ; 0053d339
    FMULP ST3                           ; 0053d340
    MOV EDX,EBX                         ; 0053d342
    LEA EAX,[ESP + 0x48]                ; 0053d344
    LEA EDI,[ESP + 0xa8]                ; 0053d348
    LEA ESI,[ESP + 0x84]                ; 0053d34f
    FXCH                                ; 0053d356
    FSTP float ptr [ESP + 0x84]         ; 0053d358
    FSTP float ptr [ESP + 0x88]         ; 0053d35f
    FSTP float ptr [ESP + 0x8c]         ; 0053d366
    MOVSD ES:EDI,ESI                    ; 0053d36d
    MOVSD ES:EDI,ESI                    ; 0053d36e
    MOVSD ES:EDI,ESI                    ; 0053d36f
    CMP EAX,EBX                         ; 0053d370
    JZ 0x0053d388                       ; 0053d372
        ;   XREF to: 0053d388 (CONDITIONAL_JUMP)  ; LAB_0053d388
    MOV EAX,dword ptr [EBX]             ; 0053d374
    MOV dword ptr [ESP + 0x48],EAX      ; 0053d376
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053d37a
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053d37d
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053d381
    MOV dword ptr [ESP + 0x50],EAX      ; 0053d384
    LEA EAX,[ESP + 0x54]                ; 0053d388
        ;   Label: LAB_0053d388
    CMP EAX,EDX                         ; 0053d38c
    JZ 0x0053d3a4                       ; 0053d38e
        ;   XREF to: 0053d3a4 (CONDITIONAL_JUMP)  ; LAB_0053d3a4
    MOV EAX,dword ptr [EDX]             ; 0053d390
    MOV dword ptr [ESP + 0x54],EAX      ; 0053d392
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053d396
    MOV dword ptr [ESP + 0x58],EAX      ; 0053d399
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053d39d
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053d3a0
    FLD float ptr [EBX]                 ; 0053d3a4
        ;   Label: LAB_0053d3a4
    FLD float ptr [EBX + 0x4]           ; 0053d3a6
    FLD float ptr [EBX + 0x8]           ; 0053d3a9
    LEA EDI,[ESP + 0xb4]                ; 0053d3ac
    LEA ESI,[ESP + 0x9c]                ; 0053d3b3
    LEA EAX,[ESP + 0xb4]                ; 0053d3ba
    FXCH ST2                            ; 0053d3c1
    FADD float ptr [ESP + 0xa8]         ; 0053d3c3
    FXCH                                ; 0053d3ca
    FADD float ptr [ESP + 0xac]         ; 0053d3cc
    FXCH ST2                            ; 0053d3d3
    FADD float ptr [ESP + 0xb0]         ; 0053d3d5
    PUSH EAX                            ; 0053d3dc
    FXCH                                ; 0053d3dd
    FSTP float ptr [ESP + 0xa0]         ; 0053d3df
    FXCH                                ; 0053d3e6
    FSTP float ptr [ESP + 0xa4]         ; 0053d3e8
    LEA EAX,[ESP + 0x4c]                ; 0053d3ef
    FSTP float ptr [ESP + 0xa8]         ; 0053d3f3
    PUSH EAX                            ; 0053d3fa
    MOVSD ES:EDI,ESI                    ; 0053d3fb
    MOVSD ES:EDI,ESI                    ; 0053d3fc
    MOVSD ES:EDI,ESI                    ; 0053d3fd
    CALL FUN_0041d840                   ; 0053d3fe
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d840()
    ADD ESP,0x8                         ; 0053d403
    LEA EAX,[ESP + 0x4]                 ; 0053d406
    PUSH EAX                            ; 0053d40a
    CALL FUN_0053ed80                   ; 0053d40b
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ed80()
    ADD ESP,0x4                         ; 0053d410
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d413
    MOV EAX,dword ptr [EAX + 0x15f698]  ; 0053d416
    MOV dword ptr [ESP + 0x4],EAX       ; 0053d41c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d420
    MOV EAX,dword ptr [EAX + 0x15f69c]  ; 0053d423
    MOV dword ptr [ESP + 0x8],EAX       ; 0053d429
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d42d
    MOV EAX,dword ptr [EAX + 0x15f6a0]  ; 0053d430
    MOV dword ptr [ESP + 0xc],EAX       ; 0053d436
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d43a
    MOV EAX,dword ptr [EAX + 0x15f6a4]  ; 0053d43d
    MOV dword ptr [ESP + 0x10],EAX      ; 0053d443
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d447
    MOV EAX,dword ptr [EAX + 0x15f6a8]  ; 0053d44a
    MOV dword ptr [ESP + 0x14],EAX      ; 0053d450
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d454
    XOR EDI,EDI                         ; 0053d457
    MOV EDX,dword ptr [EAX + 0x156db8]  ; 0053d459
    MOV dword ptr [ESP + 0xf8],EDI      ; 0053d45f
    TEST EDX,EDX                        ; 0053d466
    JLE 0x0053d4cf                      ; 0053d468
        ;   XREF to: 0053d4cf (CONDITIONAL_JUMP)  ; LAB_0053d4cf
    ADD EAX,0x14d128                    ; 0053d46a
    MOV dword ptr [ESP + 0x100],EAX     ; 0053d46f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d476
    MOV dword ptr [ESP + 0xfc],EAX      ; 0053d479
    MOV ESI,dword ptr [ESP + 0xfc]      ; 0053d480
        ;   Label: LAB_0053d480
    MOV ESI,dword ptr [ESI + 0x156dbc]  ; 0053d487
    PUSH ESI                            ; 0053d48d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053d48e
    PUSH EDI                            ; 0053d491
    CALL FUN_0053d770                   ; 0053d492
        ;   XREF to: 0053d770 (UNCONDITIONAL_CALL)  ; undefined FUN_0053d770()
    ADD ESP,0x8                         ; 0053d497
    TEST EAX,EAX                        ; 0053d49a
    JZ 0x0053d52b                       ; 0053d49c
        ;   XREF to: 0053d52b (CONDITIONAL_JUMP)  ; LAB_0053d52b
    MOV ESI,dword ptr [ESP + 0xfc]      ; 0053d4a2
        ;   Label: LAB_0053d4a2
    MOV EDI,dword ptr [ESP + 0xf8]      ; 0053d4a9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053d4b0
    ADD ESI,0x4                         ; 0053d4b3
    INC EDI                             ; 0053d4b6
    MOV ECX,dword ptr [EDX + 0x156db8]  ; 0053d4b7
    MOV dword ptr [ESP + 0xfc],ESI      ; 0053d4bd
    MOV dword ptr [ESP + 0xf8],EDI      ; 0053d4c4
    CMP EDI,ECX                         ; 0053d4cb
    JL 0x0053d480                       ; 0053d4cd
        ;   XREF to: 0053d480 (CONDITIONAL_JUMP)  ; LAB_0053d480
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d4cf
        ;   Label: LAB_0053d4cf
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 0053d4d2
    TEST EBX,EBX                        ; 0053d4d8
    JZ 0x0053d4f2                       ; 0053d4da
        ;   XREF to: 0053d4f2 (CONDITIONAL_JUMP)  ; LAB_0053d4f2
    PUSH EBX                            ; 0053d4dc
    MOV EDX,dword ptr [EBX + 0x154]     ; 0053d4dd
    CALL dword ptr [EDX + 0x44]         ; 0053d4e3
    ADD ESP,0x4                         ; 0053d4e6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053d4e9
    MOV dword ptr [EDX + 0x14d134],EAX  ; 0053d4ec
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053d4f2
        ;   Label: LAB_0053d4f2
    MOV dword ptr [ESP + 0xf0],EAX      ; 0053d4f5
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0053d4fc
    MOV ESP,EBP                         ; 0053d503
    POP EBP                             ; 0053d505
    POP EDI                             ; 0053d506
    POP ESI                             ; 0053d507
    POP EBX                             ; 0053d508
    RET                                 ; 0053d509
    XOR ECX,ECX                         ; 0053d50a
        ;   Label: LAB_0053d50a
    MOV dword ptr [ESP + 0xf0],ECX      ; 0053d50c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0053d513
    MOV ESP,EBP                         ; 0053d51a
    POP EBP                             ; 0053d51c
    POP EDI                             ; 0053d51d
    POP ESI                             ; 0053d51e
    POP EBX                             ; 0053d51f
    RET                                 ; 0053d520
    XOR ECX,ECX                         ; 0053d521
        ;   Label: LAB_0053d521
    MOV dword ptr [EBP + 0x18],ECX      ; 0053d523
    JMP 0x0053d2d1                      ; 0053d526
        ;   XREF to: 0053d2d1 (UNCONDITIONAL_JUMP)  ; LAB_0053d2d1
    MOV dword ptr [ESP + 0x24],EAX      ; 0053d52b
        ;   Label: LAB_0053d52b
    MOV dword ptr [ESP + 0x28],EAX      ; 0053d52f
    LEA EAX,[ESP + 0x4]                 ; 0053d533
    PUSH EAX                            ; 0053d537
    MOV EDX,dword ptr [ESI + 0x154]     ; 0053d538
    PUSH ESI                            ; 0053d53e
    CALL dword ptr [EDX + 0x3c]         ; 0053d53f
    ADD ESP,0x8                         ; 0053d542
    TEST EAX,EAX                        ; 0053d545
    JZ 0x0053d4a2                       ; 0053d547
        ;   XREF to: 0053d4a2 (CONDITIONAL_JUMP)  ; LAB_0053d4a2
    LEA EDX,[ESP + 0x48]                ; 0053d54d
    PUSH EDX                            ; 0053d551
    PUSH EAX                            ; 0053d552
    LEA EAX,[ESP + 0xc]                 ; 0053d553
    PUSH EAX                            ; 0053d557
    LEA EAX,[ESP + 0x38]                ; 0053d558
    PUSH EAX                            ; 0053d55c
    LEA EAX,[ESP + 0xb8]                ; 0053d55d
    PUSH EAX                            ; 0053d564
    PUSH EBX                            ; 0053d565
    PUSH ESI                            ; 0053d566
    CALL FUN_004091b0                   ; 0053d567
        ;   XREF to: 004091b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004091b0()
    MOV dword ptr [ESP + 0x120],EAX     ; 0053d56c
    FLD float ptr [ESP + 0x120]         ; 0053d573
    ADD ESP,0x1c                        ; 0053d57a
    FST float ptr [ESP]                 ; 0053d57d
    FLD1                                ; 0053d580
    FCOMPP                              ; 0053d582
    FNSTSW AX                           ; 0053d584
    SAHF                                ; 0053d586
    JC 0x0053d4a2                       ; 0053d587
        ;   XREF to: 0053d4a2 (CONDITIONAL_JUMP)  ; LAB_0053d4a2
    FLD float ptr [ESP]                 ; 0053d58d
    FMUL float ptr [ESP + 0xf4]         ; 0053d590
    FST float ptr [ESP]                 ; 0053d597
    FCOMP float ptr [EBP + 0x24]        ; 0053d59a
    FNSTSW AX                           ; 0053d59d
    SAHF                                ; 0053d59f
    JNC 0x0053d4a2                      ; 0053d5a0
        ;   XREF to: 0053d4a2 (CONDITIONAL_JUMP)  ; LAB_0053d4a2
    FLD float ptr [ESP]                 ; 0053d5a6
    FCOMP float ptr [EBP + 0x18]        ; 0053d5a9
    FNSTSW AX                           ; 0053d5ac
    SAHF                                ; 0053d5ae
    JBE 0x0053d4a2                      ; 0053d5af
        ;   XREF to: 0053d4a2 (CONDITIONAL_JUMP)  ; LAB_0053d4a2
    MOV EAX,dword ptr [ESP]             ; 0053d5b5
    MOV ECX,dword ptr [ESP + 0x100]     ; 0053d5b8
    MOV dword ptr [EBP + 0x24],EAX      ; 0053d5bf
    LEA EAX,[ESP + 0x2c]                ; 0053d5c2
    CMP EAX,ECX                         ; 0053d5c6
    JZ 0x0053d5de                       ; 0053d5c8
        ;   XREF to: 0053d5de (CONDITIONAL_JUMP)  ; LAB_0053d5de
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053d5ca
    MOV dword ptr [ECX],EAX             ; 0053d5ce
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053d5d0
    MOV dword ptr [ECX + 0x4],EAX       ; 0053d5d4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0053d5d7
    MOV dword ptr [ECX + 0x8],EAX       ; 0053d5db
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d5de
        ;   Label: LAB_0053d5de
    MOV dword ptr [EAX + 0x14d144],ESI  ; 0053d5e1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053d5e7
    MOV EAX,dword ptr [ESP + 0x38]      ; 0053d5ea
    MOV dword ptr [EDX + 0x14d148],EAX  ; 0053d5ee
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053d5f4
    MOV dword ptr [EDX + 0x14d14c],EAX  ; 0053d5f8
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053d5fe
    MOV dword ptr [ESP + 0xf4],EAX      ; 0053d601
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053d608
    LEA EDI,[ESP + 0xe4]                ; 0053d60b
    LEA ESI,[ESP + 0xcc]                ; 0053d612
    FLD float ptr [EAX]                 ; 0053d619
    FLD float ptr [EAX + 0x4]           ; 0053d61b
    FLD float ptr [EAX + 0x8]           ; 0053d61e
    FXCH ST2                            ; 0053d621
    FSUB float ptr [EBX]                ; 0053d623
    FXCH                                ; 0053d625
    FSUB float ptr [EBX + 0x4]          ; 0053d627
    FXCH ST2                            ; 0053d62a
    FSUB float ptr [EBX + 0x8]          ; 0053d62c
    FXCH                                ; 0053d62f
    FSTP float ptr [ESP + 0xcc]         ; 0053d631
    FXCH                                ; 0053d638
    FSTP float ptr [ESP + 0xd0]         ; 0053d63a
    FSTP float ptr [ESP + 0xd4]         ; 0053d641
    MOVSD ES:EDI,ESI                    ; 0053d648
    MOVSD ES:EDI,ESI                    ; 0053d649
    MOVSD ES:EDI,ESI                    ; 0053d64a
    FLD float ptr [ESP + 0xe4]          ; 0053d64b
    FMUL float ptr [EBP + 0x24]         ; 0053d652
    FLD float ptr [ESP + 0xe8]          ; 0053d655
    FMUL float ptr [EBP + 0x24]         ; 0053d65c
    FLD float ptr [ESP + 0xec]          ; 0053d65f
    FMUL float ptr [EBP + 0x24]         ; 0053d666
    LEA EDI,[ESP + 0xd8]                ; 0053d669
    LEA ESI,[ESP + 0x60]                ; 0053d670
    FXCH ST2                            ; 0053d674
    FSTP float ptr [ESP + 0x60]         ; 0053d676
    FSTP float ptr [ESP + 0x64]         ; 0053d67a
    FSTP float ptr [ESP + 0x68]         ; 0053d67e
    MOVSD ES:EDI,ESI                    ; 0053d682
    MOVSD ES:EDI,ESI                    ; 0053d683
    MOVSD ES:EDI,ESI                    ; 0053d684
    LEA EAX,[ESP + 0xd8]                ; 0053d685
    LEA ESI,[ESP + 0xa8]                ; 0053d68c
    CMP ESI,EAX                         ; 0053d693
    JZ 0x0053d6c1                       ; 0053d695
        ;   XREF to: 0053d6c1 (CONDITIONAL_JUMP)  ; LAB_0053d6c1
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0053d697
    MOV dword ptr [ESP + 0xa8],EAX      ; 0053d69e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0053d6a5
    MOV dword ptr [ESP + 0xac],EAX      ; 0053d6ac
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0053d6b3
    MOV dword ptr [ESP + 0xb0],EAX      ; 0053d6ba
    LEA EAX,[ESP + 0x48]                ; 0053d6c1
        ;   Label: LAB_0053d6c1
    MOV ESI,EBX                         ; 0053d6c5
    CMP EAX,EBX                         ; 0053d6c7
    JZ 0x0053d6df                       ; 0053d6c9
        ;   XREF to: 0053d6df (CONDITIONAL_JUMP)  ; LAB_0053d6df
    MOV EAX,dword ptr [EBX]             ; 0053d6cb
    MOV dword ptr [ESP + 0x48],EAX      ; 0053d6cd
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053d6d1
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053d6d4
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053d6d8
    MOV dword ptr [ESP + 0x50],EAX      ; 0053d6db
    LEA EAX,[ESP + 0x54]                ; 0053d6df
        ;   Label: LAB_0053d6df
    CMP EAX,ESI                         ; 0053d6e3
    JZ 0x0053d6fb                       ; 0053d6e5
        ;   XREF to: 0053d6fb (CONDITIONAL_JUMP)  ; LAB_0053d6fb
    MOV EAX,dword ptr [ESI]             ; 0053d6e7
    MOV dword ptr [ESP + 0x54],EAX      ; 0053d6e9
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053d6ed
    MOV dword ptr [ESP + 0x58],EAX      ; 0053d6f0
    MOV EAX,dword ptr [ESI + 0x8]       ; 0053d6f4
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053d6f7
    FLD float ptr [EBX]                 ; 0053d6fb
        ;   Label: LAB_0053d6fb
    FLD float ptr [EBX + 0x4]           ; 0053d6fd
    FLD float ptr [EBX + 0x8]           ; 0053d700
    LEA EDI,[ESP + 0x90]                ; 0053d703
    LEA ESI,[ESP + 0xc0]                ; 0053d70a
    LEA EAX,[ESP + 0x90]                ; 0053d711
    FXCH ST2                            ; 0053d718
    FADD float ptr [ESP + 0xa8]         ; 0053d71a
    FXCH                                ; 0053d721
    FADD float ptr [ESP + 0xac]         ; 0053d723
    FXCH ST2                            ; 0053d72a
    FADD float ptr [ESP + 0xb0]         ; 0053d72c
    PUSH EAX                            ; 0053d733
    FXCH                                ; 0053d734
    FSTP float ptr [ESP + 0xc4]         ; 0053d736
    FXCH                                ; 0053d73d
    FSTP float ptr [ESP + 0xc8]         ; 0053d73f
    LEA EAX,[ESP + 0x4c]                ; 0053d746
    FSTP float ptr [ESP + 0xcc]         ; 0053d74a
    PUSH EAX                            ; 0053d751
    MOVSD ES:EDI,ESI                    ; 0053d752
    MOVSD ES:EDI,ESI                    ; 0053d753
    MOVSD ES:EDI,ESI                    ; 0053d754
    CALL FUN_0041d840                   ; 0053d755
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d840()
    ADD ESP,0x8                         ; 0053d75a
    JMP 0x0053d4a2                      ; 0053d75d
        ;   XREF to: 0053d4a2 (UNCONDITIONAL_JUMP)  ; LAB_0053d4a2

