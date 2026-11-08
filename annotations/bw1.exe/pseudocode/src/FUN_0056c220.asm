; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c220(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0056c1f0 = 0056c8b3
;   TerminatedCString s_s_confused_while_walking_005f29bc
;   TerminatedCString s_Capture_005f29e6
;   TerminatedCString s_Capture_005f29ee
;   undefined4 DAT_005f29f7
;   undefined4 DAT_00605948
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061dca4
;   undefined4 DAT_00622c18
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01e82168
;   undefined4 DAT_02c5fce0
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_0040cd60
;   FUN_0042c010
;   FUN_0042ccf0
;   FUN_0042d700
;   FUN_0042d750
;   FUN_0042e120
;   FUN_0042e160
;   FUN_0042e1a0
;   FUN_00432240
;   FUN_00433e80
;   FUN_00434a80
;   FUN_00435320
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c220
        ;   Label: FUN_0056c220
    PUSH ESI                            ; 0056c221
    PUSH EDI                            ; 0056c222
    PUSH EBP                            ; 0056c223
    MOV EBP,ESP                         ; 0056c224
    SUB ESP,0x254                       ; 0056c226
    SUB EBP,0x7a                        ; 0056c22c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0056c22f
    FLD float ptr [EBX + 0xc2a4]        ; 0056c235
    FSUB float ptr [EBP + 0x92]         ; 0056c23b
    FST float ptr [EBX + 0xc2a4]        ; 0056c241
    FLDZ                                ; 0056c247
    FCOMPP                              ; 0056c249
    FNSTSW AX                           ; 0056c24b
    SAHF                                ; 0056c24d
    JA 0x0056c33f                       ; 0056c24e
        ;   XREF to: 0056c33f (CONDITIONAL_JUMP)  ; LAB_0056c33f
    MOV EAX,dword ptr [EBX + 0xc298]    ; 0056c254
        ;   Label: LAB_0056c254
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0056c25a
    JNZ 0x0056c2bd                      ; 0056c262
        ;   XREF to: 0056c2bd (CONDITIONAL_JUMP)  ; LAB_0056c2bd
    PUSH EBX                            ; 0056c264
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056c265
    CALL dword ptr [EAX + 0x10c]        ; 0056c26b
    ADD ESP,0x4                         ; 0056c271
    TEST EAX,EAX                        ; 0056c274
    JNZ 0x0056c2bd                      ; 0056c276
        ;   XREF to: 0056c2bd (CONDITIONAL_JUMP)  ; LAB_0056c2bd
    LEA EAX,[EBP + 0xfffffe26]          ; 0056c278
    PUSH EAX                            ; 0056c27e
    XOR ESI,ESI                         ; 0056c27f
    CALL FUN_0042c010                   ; 0056c281
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    MOV ECX,0x461c3f9a                  ; 0056c286
    LEA EAX,[EBP + 0xfffffe26]          ; 0056c28b
    ADD ESP,0x4                         ; 0056c291
    MOV dword ptr [EBP + 0xfffffe56],ESI ; 0056c294
    MOV dword ptr [EBP + 0xfffffe5a],EBX ; 0056c29a
    PUSH EAX                            ; 0056c2a0
    MOV dword ptr [EBP + 0xfffffe5e],EBX ; 0056c2a1
    MOV dword ptr [EBP + 0xfffffe2a],ECX ; 0056c2a7
    PUSH EBX                            ; 0056c2ad
    MOV EDX,dword ptr [EBX + 0x154]     ; 0056c2ae
    CALL dword ptr [EDX + 0x108]        ; 0056c2b4
    ADD ESP,0x8                         ; 0056c2ba
    PUSH dword ptr [EBP + 0x92]         ; 0056c2bd
        ;   Label: LAB_0056c2bd
    PUSH EBX                            ; 0056c2c3
    CALL FUN_0042e1a0                   ; 0056c2c4
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 0056c2c9
    TEST EAX,EAX                        ; 0056c2cc
    JZ 0x0056c59c                       ; 0056c2ce
        ;   XREF to: 0056c59c (CONDITIONAL_JUMP)  ; LAB_0056c59c
    LEA EAX,[EBX + 0x249c]              ; 0056c2d4
    MOV dword ptr [EAX + 0x8],0x0       ; 0056c2da
    FLD float ptr [EBP + 0x92]          ; 0056c2e1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056c2e7
    MOV dword ptr [EAX + 0x4],EDX       ; 0056c2ea
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056c2ed
    MOV dword ptr [EAX],EDX             ; 0056c2f0
    FMUL float ptr [EBX + 0xc1d0]       ; 0056c2f2
    LEA ESI,[EBX + 0x158]               ; 0056c2f8
    FSTP float ptr [EBP + 0x5a]         ; 0056c2fe
    MOV EDI,0x1                         ; 0056c301
    FLD float ptr [EBP + 0x5a]          ; 0056c306
        ;   Label: LAB_0056c306
    FLDZ                                ; 0056c309
    FCOMPP                              ; 0056c30b
    FNSTSW AX                           ; 0056c30d
    SAHF                                ; 0056c30f
    JNC 0x0056c44b                      ; 0056c310
        ;   XREF to: 0056c44b (CONDITIONAL_JUMP)  ; LAB_0056c44b
    LEA EAX,[EBP + 0x5a]                ; 0056c316
    PUSH EAX                            ; 0056c319
    PUSH ESI                            ; 0056c31a
    CALL FUN_00524270                   ; 0056c31b
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 0056c320
    MOV EDX,EAX                         ; 0056c323
    CMP EAX,0x66                        ; 0056c325
    JNC 0x0056c42d                      ; 0056c328
        ;   XREF to: 0056c42d (CONDITIONAL_JUMP)  ; LAB_0056c42d
    CMP EAX,0x65                        ; 0056c32e
    JZ 0x0056c34e                       ; 0056c331
        ;   XREF to: 0056c34e (CONDITIONAL_JUMP)  ; LAB_0056c34e
    PUSH EDX                            ; 0056c333
    PUSH EBX                            ; 0056c334
    CALL FUN_00434a80                   ; 0056c335
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 0056c33a
    JMP 0x0056c306                      ; 0056c33d
        ;   XREF to: 0056c306 (UNCONDITIONAL_JUMP)  ; LAB_0056c306
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 0056c33f
        ;   Label: LAB_0056c33f
    JMP 0x0056c254                      ; 0056c349
        ;   XREF to: 0056c254 (UNCONDITIONAL_JUMP)  ; LAB_0056c254
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0056c34e
        ;   Label: LAB_0056c34e
    TEST ECX,ECX                        ; 0056c354
    JNZ 0x0056c365                      ; 0056c356
        ;   XREF to: 0056c365 (CONDITIONAL_JUMP)  ; LAB_0056c365
    PUSH EDI                            ; 0056c358
    PUSH EDI                            ; 0056c359
    PUSH ESI                            ; 0056c35a
    CALL FUN_005247c0                   ; 0056c35b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c360
    JMP 0x0056c306                      ; 0056c363
        ;   XREF to: 0056c306 (UNCONDITIONAL_JUMP)  ; LAB_0056c306
    PUSH 0x0                            ; 0056c365
        ;   Label: LAB_0056c365
    PUSH EBX                            ; 0056c367
    MOV EDX,dword ptr [ECX + 0x154]     ; 0056c368
    PUSH ECX                            ; 0056c36e
    CALL dword ptr [EDX + 0xec]         ; 0056c36f
    ADD ESP,0xc                         ; 0056c375
    TEST EAX,EAX                        ; 0056c378
    JNZ 0x0056c306                      ; 0056c37a
        ;   XREF to: 0056c306 (CONDITIONAL_JUMP)  ; LAB_0056c306
    PUSH EDI                            ; 0056c37c
    PUSH EDI                            ; 0056c37d
    PUSH ESI                            ; 0056c37e
    CALL FUN_005247c0                   ; 0056c37f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c384
    JMP 0x0056c306                      ; 0056c387
        ;   XREF to: 0056c306 (UNCONDITIONAL_JUMP)  ; LAB_0056c306
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0056c38c
        ;   Label: LAB_0056c38c
    TEST EDX,EDX                        ; 0056c392
    JZ 0x0056c306                       ; 0056c394
        ;   XREF to: 0056c306 (CONDITIONAL_JUMP)  ; LAB_0056c306
    MOV EAX,EDX                         ; 0056c39a
    PUSH EAX                            ; 0056c39c
    MOV EDX,dword ptr [EDX + 0x154]     ; 0056c39d
    CALL dword ptr [EDX + 0xf0]         ; 0056c3a3
    ADD ESP,0x4                         ; 0056c3a9
    JMP 0x0056c306                      ; 0056c3ac
        ;   XREF to: 0056c306 (UNCONDITIONAL_JUMP)  ; LAB_0056c306
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 0056c3b1
        ;   Label: LAB_0056c3b1
    INC EAX                             ; 0056c3b7
    MOV dword ptr [EBX + 0xc29c],EAX    ; 0056c3b8
    CMP EAX,0x3                         ; 0056c3be
    JL 0x0056c306                       ; 0056c3c1
        ;   XREF to: 0056c306 (CONDITIONAL_JUMP)  ; LAB_0056c306
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0056c3c7
    TEST ECX,ECX                        ; 0056c3cd
    JZ 0x0056c40d                       ; 0056c3cf
        ;   XREF to: 0056c40d (CONDITIONAL_JUMP)  ; LAB_0056c40d
    LEA EAX,[EBP + 0xfffffe62]          ; 0056c3d1
    PUSH EAX                            ; 0056c3d7
    CALL FUN_0042c010                   ; 0056c3d8
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    MOV EAX,0x4                         ; 0056c3dd
    ADD ESP,0x4                         ; 0056c3e2
    LEA EDX,[EBP + 0xfffffe62]          ; 0056c3e5
    MOV dword ptr [EBP + 0xfffffe92],EAX ; 0056c3eb
    PUSH EDX                            ; 0056c3f1
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056c3f2
    PUSH EAX                            ; 0056c3f8
    MOV ECX,dword ptr [EAX + 0x154]     ; 0056c3f9
    CALL dword ptr [ECX + 0x108]        ; 0056c3ff
    ADD ESP,0x8                         ; 0056c405
    JMP 0x0056c306                      ; 0056c408
        ;   XREF to: 0056c306 (UNCONDITIONAL_JUMP)  ; LAB_0056c306
    PUSH ECX                            ; 0056c40d
        ;   Label: LAB_0056c40d
    MOV EDX,dword ptr [ECX + 0x154]     ; 0056c40e
    CALL dword ptr [EDX + 0xf0]         ; 0056c414
    ADD ESP,0x4                         ; 0056c41a
    PUSH EDI                            ; 0056c41d
    PUSH EDI                            ; 0056c41e
    PUSH ESI                            ; 0056c41f
    CALL FUN_005247c0                   ; 0056c420
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c425
    JMP 0x0056c306                      ; 0056c428
        ;   XREF to: 0056c306 (UNCONDITIONAL_JUMP)  ; LAB_0056c306
    JBE 0x0056c38c                      ; 0056c42d
        ;   XREF to: 0056c38c (CONDITIONAL_JUMP)  ; LAB_0056c38c
        ;   Label: LAB_0056c42d
    CMP EAX,0x67                        ; 0056c433
    JZ 0x0056c3b1                       ; 0056c436
        ;   XREF to: 0056c3b1 (CONDITIONAL_JUMP)  ; LAB_0056c3b1
    PUSH EDX                            ; 0056c43c
    PUSH EBX                            ; 0056c43d
    CALL FUN_00434a80                   ; 0056c43e
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 0056c443
    JMP 0x0056c306                      ; 0056c446
        ;   XREF to: 0056c306 (UNCONDITIONAL_JUMP)  ; LAB_0056c306
    FLD float ptr [EBP + 0x92]          ; 0056c44b
        ;   Label: LAB_0056c44b
    FMUL float ptr [EBX + 0xc1d0]       ; 0056c451
    SUB ESP,0x4                         ; 0056c457
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0056c45a
    MOV dword ptr [EBX + 0x2524],EAX    ; 0056c460
    FSTP float ptr [ESP]                ; 0056c466
    PUSH EBX                            ; 0056c469
    CALL FUN_00435320                   ; 0056c46a
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined FUN_00435320()
    ADD ESP,0x8                         ; 0056c46f
    LEA EAX,[EBX + 0x158]               ; 0056c472
    PUSH EAX                            ; 0056c478
    MOV dword ptr [EBP + 0x6e],EAX      ; 0056c479
    CALL FUN_00524770                   ; 0056c47c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 0056c481
    PUSH dword ptr [EBP + 0x92]         ; 0056c484
    MOV ESI,dword ptr [EAX + 0x24]      ; 0056c48a
    PUSH EBX                            ; 0056c48d
    MOV dword ptr [EBP + 0x66],ESI      ; 0056c48e
    CALL FUN_00432240                   ; 0056c491
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; undefined FUN_00432240()
    ADD ESP,0x8                         ; 0056c496
    TEST EAX,EAX                        ; 0056c499
    JZ 0x0056cb71                       ; 0056c49b
        ;   XREF to: 0056cb71 (CONDITIONAL_JUMP)  ; LAB_0056cb71
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0056c4a1
    CMP EAX,0x2                         ; 0056c4a7
    JNC 0x0056c5cf                      ; 0056c4aa
        ;   XREF to: 0056c5cf (CONDITIONAL_JUMP)  ; LAB_0056c5cf
    CMP EAX,0x1                         ; 0056c4b0
    JNZ 0x0056c5da                      ; 0056c4b3
        ;   XREF to: 0056c5da (CONDITIONAL_JUMP)  ; LAB_0056c5da
    PUSH 0x1                            ; 0056c4b9
        ;   Label: LAB_0056c4b9
    PUSH 0x2                            ; 0056c4bb
    LEA EAX,[EBX + 0x158]               ; 0056c4bd
        ;   Label: LAB_0056c4bd
    PUSH EAX                            ; 0056c4c3
    CALL FUN_005247c0                   ; 0056c4c4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c4c9
        ;   Label: LAB_0056c4c9
    LEA EAX,[EBX + 0x249c]              ; 0056c4cc
    MOV dword ptr [EAX + 0x8],0x0       ; 0056c4d2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056c4d9
    MOV dword ptr [EAX + 0x4],EDX       ; 0056c4dc
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056c4df
    MOV dword ptr [EAX],EDX             ; 0056c4e2
    FLD float ptr [EBX + 0xc268]        ; 0056c4e4
        ;   Label: caseD_3
    FLDZ                                ; 0056c4ea
    FCOMPP                              ; 0056c4ec
    FNSTSW AX                           ; 0056c4ee
    SAHF                                ; 0056c4f0
    JNC 0x0056c505                      ; 0056c4f1
        ;   XREF to: 0056c505 (CONDITIONAL_JUMP)  ; LAB_0056c505
    FLD float ptr [EBX + 0xc268]        ; 0056c4f3
    FSUB float ptr [EBP + 0x92]         ; 0056c4f9
    FSTP float ptr [EBX + 0xc268]       ; 0056c4ff
    CMP dword ptr [EBP + 0x66],0xb      ; 0056c505
        ;   Label: LAB_0056c505
    JNZ 0x0056cb84                      ; 0056c509
        ;   XREF to: 0056cb84 (CONDITIONAL_JUMP)  ; LAB_0056cb84
    LEA EAX,[EBX + 0x249c]              ; 0056c50f
    PUSH EAX                            ; 0056c515
    LEA ESI,[EBP + 0x12]                ; 0056c516
    PUSH EBX                            ; 0056c519
    LEA EDI,[EBP + 0xffffff2e]          ; 0056c51a
    MOV dword ptr [EBP + 0x76],EAX      ; 0056c520
    CALL FUN_00408ac0                   ; 0056c523
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[EBP + 0x12]                ; 0056c528
    LEA EAX,[EBX + 0x20]                ; 0056c52b
    MOVSD ES:EDI,ESI                    ; 0056c52e
    MOVSD ES:EDI,ESI                    ; 0056c52f
    MOVSD ES:EDI,ESI                    ; 0056c530
    FLD float ptr [EAX]                 ; 0056c531
    FLD float ptr [EAX + 0x4]           ; 0056c533
    FLD float ptr [EAX + 0x8]           ; 0056c536
    FXCH ST2                            ; 0056c539
    FADD float ptr [EBP + 0xffffff2e]   ; 0056c53b
    FXCH                                ; 0056c541
    FADD float ptr [EBP + 0xffffff32]   ; 0056c543
    FXCH ST2                            ; 0056c549
    FADD float ptr [EBP + 0xffffff36]   ; 0056c54b
    FXCH                                ; 0056c551
    FSTP float ptr [EAX]                ; 0056c553
    FXCH                                ; 0056c555
    FSTP float ptr [EAX + 0x4]          ; 0056c557
    FSTP float ptr [EAX + 0x8]          ; 0056c55a
    MOV EAX,dword ptr [EBP + 0x76]      ; 0056c55d
    MOV dword ptr [EAX + 0x8],0x0       ; 0056c560
    ADD ESP,0x8                         ; 0056c567
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056c56a
    MOV dword ptr [EAX + 0x4],EDX       ; 0056c56d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056c570
    MOV dword ptr [EAX],EDX             ; 0056c573
    PUSH EBX                            ; 0056c575
        ;   Label: LAB_0056c575
    CALL FUN_0042e160                   ; 0056c576
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e160()
    ADD ESP,0x4                         ; 0056c57b
    LEA EAX,[EBX + 0x158]               ; 0056c57e
    PUSH EAX                            ; 0056c584
    CALL FUN_005675a0                   ; 0056c585
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 0056c58a
    PUSH dword ptr [EBP + 0x92]         ; 0056c58d
    PUSH EBX                            ; 0056c593
    CALL FUN_00433e80                   ; 0056c594
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x8                         ; 0056c599
    LEA ESP,[EBP + 0x7a]                ; 0056c59c
        ;   Label: LAB_0056c59c
    POP EBP                             ; 0056c59f
    POP EDI                             ; 0056c5a0
    POP ESI                             ; 0056c5a1
    POP EBX                             ; 0056c5a2
    RET                                 ; 0056c5a3
    PUSH 0x1                            ; 0056c5a4
        ;   Label: LAB_0056c5a4
    PUSH 0x1                            ; 0056c5a6
    LEA EAX,[EBX + 0x158]               ; 0056c5a8
    PUSH EAX                            ; 0056c5ae
    CALL FUN_005247c0                   ; 0056c5af
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c5b4
    PUSH EBX                            ; 0056c5b7
    MOV EAX,0x5f29bc                    ; 0056c5b8 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 0056c5bd | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00611100]      ; 0056c5be | PTR_DAT_00611100
    PUSH ECX                            ; 0056c5c4 | DAT_007db5f0
    CALL FUN_00445430                   ; 0056c5c5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    JMP 0x0056c4c9                      ; 0056c5ca
        ;   XREF to: 0056c4c9 (UNCONDITIONAL_JUMP)  ; LAB_0056c4c9
    JBE 0x0056c4b9                      ; 0056c5cf
        ;   XREF to: 0056c4b9 (CONDITIONAL_JUMP)  ; LAB_0056c4b9
        ;   Label: LAB_0056c5cf
    CMP EAX,0x3                         ; 0056c5d5
    JZ 0x0056c5a4                       ; 0056c5d8
        ;   XREF to: 0056c5a4 (CONDITIONAL_JUMP)  ; LAB_0056c5a4
    PUSH 0x1                            ; 0056c5da
        ;   Label: LAB_0056c5da
    PUSH 0x1                            ; 0056c5dc
    JMP 0x0056c4bd                      ; 0056c5de
        ;   XREF to: 0056c4bd (UNCONDITIONAL_JUMP)  ; LAB_0056c4bd
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056c5e3
        ;   Label: caseD_6
    TEST EAX,EAX                        ; 0056c5e9
    JNZ 0x0056c612                      ; 0056c5eb
        ;   XREF to: 0056c612 (CONDITIONAL_JUMP)  ; LAB_0056c612
    PUSH EAX                            ; 0056c5ed
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c5ee
    CALL dword ptr [EDX + 0xf0]         ; 0056c5f4
    ADD ESP,0x4                         ; 0056c5fa
    PUSH 0x1                            ; 0056c5fd
    PUSH 0x1                            ; 0056c5ff
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0056c601
    PUSH EDX                            ; 0056c604
    CALL FUN_005247c0                   ; 0056c605
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c60a
    JMP 0x0056c4e4                      ; 0056c60d
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe9e]          ; 0056c612
        ;   Label: LAB_0056c612
    PUSH EAX                            ; 0056c618
    CALL FUN_0042c010                   ; 0056c619
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 0056c61e
    PUSH 0x41700000                     ; 0056c621
    PUSH 0x40e00000                     ; 0056c626
    LEA ESI,[EBP + 0xffffff76]          ; 0056c62b
    CALL FUN_0040cc00                   ; 0056c631
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 0056c636
    ADD ESP,0x8                         ; 0056c639
    LEA EAX,[EBP + 0xfffffe9e]          ; 0056c63c
    MOV EDX,dword ptr [0x02c5fce0]      ; 0056c642 | DAT_02c5fce0
    PUSH EAX                            ; 0056c648
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056c649
    MOV dword ptr [EBP + 0xfffffed2],EBX ; 0056c650
    SUB EAX,EDX                         ; 0056c656
    MOV dword ptr [EBP + 0xfffffed6],EBX ; 0056c658
    SHL EAX,0x4                         ; 0056c65e
    LEA EDX,[EBX + 0xfd8]               ; 0056c661
    PUSH 0x3f800000                     ; 0056c667
    ADD EAX,EDX                         ; 0056c66c
    LEA EDI,[EBP + -0x72]               ; 0056c66e
    PUSH EAX                            ; 0056c671
    FLD float ptr [EBP + 0x76]          ; 0056c672
    PUSH 0x2c8af28                      ; 0056c675 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffea2]   ; 0056c67a
    CALL FUN_005b5080                   ; 0056c680
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0056c685
    LEA EAX,[EBP + -0x72]               ; 0056c688
    LEA ESI,[EBP + 0xffffff76]          ; 0056c68b
    PUSH EAX                            ; 0056c691
    MOVSD ES:EDI,ESI                    ; 0056c692
    MOVSD ES:EDI,ESI                    ; 0056c693
    MOVSD ES:EDI,ESI                    ; 0056c694
    PUSH EBX                            ; 0056c695
    LEA ESI,[EBP + 0xffffff16]          ; 0056c696
    CALL FUN_00408b40                   ; 0056c69c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0056c6a1
    LEA EAX,[EBP + -0x66]               ; 0056c6a4
    PUSH EAX                            ; 0056c6a7
    LEA EDI,[EBP + -0x66]               ; 0056c6a8
    LEA ESI,[EBP + 0xffffff16]          ; 0056c6ab
    PUSH EBX                            ; 0056c6b1
    MOVSD ES:EDI,ESI                    ; 0056c6b2
    MOVSD ES:EDI,ESI                    ; 0056c6b3
    MOVSD ES:EDI,ESI                    ; 0056c6b4
    CALL FUN_004a0770                   ; 0056c6b5
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0770()
    ADD ESP,0x10                        ; 0056c6ba
    JMP 0x0056c4e4                      ; 0056c6bd
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0056c6c2
        ;   Label: caseD_9
    TEST EDX,EDX                        ; 0056c6c8
    JZ 0x0056c6ed                       ; 0056c6ca
        ;   XREF to: 0056c6ed (CONDITIONAL_JUMP)  ; LAB_0056c6ed
    MOV ECX,dword ptr [EDX + 0x26fc]    ; 0056c6cc
    MOV EAX,EDX                         ; 0056c6d2
    TEST ECX,ECX                        ; 0056c6d4
    JNZ 0x0056c702                      ; 0056c6d6
        ;   XREF to: 0056c702 (CONDITIONAL_JUMP)  ; LAB_0056c702
    PUSH 0x1                            ; 0056c6d8
    PUSH 0x1                            ; 0056c6da
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0056c6dc
    PUSH EDI                            ; 0056c6df
    CALL FUN_005247c0                   ; 0056c6e0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c6e5
    JMP 0x0056c4e4                      ; 0056c6e8
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0056c6ed
        ;   Label: LAB_0056c6ed
    PUSH 0x1                            ; 0056c6ef
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0056c6f1
    PUSH EAX                            ; 0056c6f4
    CALL FUN_005247c0                   ; 0056c6f5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c6fa
    JMP 0x0056c4e4                      ; 0056c6fd
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0056c702
        ;   Label: LAB_0056c702
    MOV EDX,dword ptr [EDX + 0x154]     ; 0056c703
    CALL dword ptr [EDX + 0x10c]        ; 0056c709
    ADD ESP,0x4                         ; 0056c70f
    TEST EAX,EAX                        ; 0056c712
    JZ 0x0056c741                       ; 0056c714
        ;   XREF to: 0056c741 (CONDITIONAL_JUMP)  ; LAB_0056c741
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056c716
    PUSH EAX                            ; 0056c71c
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c71d
    CALL dword ptr [EDX + 0xf0]         ; 0056c723
    ADD ESP,0x4                         ; 0056c729
    PUSH 0x1                            ; 0056c72c
    PUSH 0x1                            ; 0056c72e
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0056c730
    PUSH ESI                            ; 0056c733
    CALL FUN_005247c0                   ; 0056c734
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c739
    JMP 0x0056c4e4                      ; 0056c73c
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffeda]          ; 0056c741
        ;   Label: LAB_0056c741
    PUSH EAX                            ; 0056c747
    CALL FUN_0042c010                   ; 0056c748
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 0056c74d
    PUSH 0x41700000                     ; 0056c750
    PUSH 0x40e00000                     ; 0056c755
    CALL FUN_0040cc00                   ; 0056c75a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 0056c75f
    ADD ESP,0x8                         ; 0056c762
    LEA EAX,[EBP + 0xfffffeda]          ; 0056c765
    MOV EDX,dword ptr [0x02c5fce0]      ; 0056c76b | DAT_02c5fce0
    PUSH EAX                            ; 0056c771
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056c772
    LEA ESI,[EBP + -0x36]               ; 0056c779
    SUB EAX,EDX                         ; 0056c77c
    MOV dword ptr [EBP + 0xffffff0e],EBX ; 0056c77e
    MOV EDX,EAX                         ; 0056c784
    MOV dword ptr [EBP + 0xffffff12],EBX ; 0056c786
    SHL EDX,0x4                         ; 0056c78c
    LEA EAX,[EBX + 0xfd8]               ; 0056c78f
    PUSH 0x3f800000                     ; 0056c795
    ADD EAX,EDX                         ; 0056c79a
    LEA EDI,[EBP + 0x36]                ; 0056c79c
    PUSH EAX                            ; 0056c79f
    FLD float ptr [EBP + 0x76]          ; 0056c7a0
    PUSH 0x2c8af28                      ; 0056c7a3 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffede]   ; 0056c7a8
    CALL FUN_005b5080                   ; 0056c7ae
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0056c7b3
    LEA EAX,[EBP + 0x36]                ; 0056c7b6
    LEA ESI,[EBP + -0x36]               ; 0056c7b9
    PUSH EAX                            ; 0056c7bc
    MOVSD ES:EDI,ESI                    ; 0056c7bd
    MOVSD ES:EDI,ESI                    ; 0056c7be
    MOVSD ES:EDI,ESI                    ; 0056c7bf
    PUSH EBX                            ; 0056c7c0
    LEA ESI,[EBP + 0xffffff6a]          ; 0056c7c1
    CALL FUN_00408b40                   ; 0056c7c7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0056c7cc
    LEA EAX,[EBP + 0x2a]                ; 0056c7cf
    PUSH EAX                            ; 0056c7d2
    LEA EDI,[EBP + 0x2a]                ; 0056c7d3
    LEA ESI,[EBP + 0xffffff6a]          ; 0056c7d6
    PUSH EBX                            ; 0056c7dc
    MOVSD ES:EDI,ESI                    ; 0056c7dd
    MOVSD ES:EDI,ESI                    ; 0056c7de
    MOVSD ES:EDI,ESI                    ; 0056c7df
    CALL FUN_004a0770                   ; 0056c7e0
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0770()
    ADD ESP,0x10                        ; 0056c7e5
    JMP 0x0056c4e4                      ; 0056c7e8
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056c7ed
        ;   Label: caseD_a
    PUSH EAX                            ; 0056c7f3
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c7f4
    CALL dword ptr [EDX + 0x10c]        ; 0056c7fa
    ADD ESP,0x4                         ; 0056c800
    TEST EAX,EAX                        ; 0056c803
    JZ 0x0056c4e4                       ; 0056c805
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056c80b
    PUSH EAX                            ; 0056c811
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c812
    CALL dword ptr [EDX + 0xf0]         ; 0056c818
    ADD ESP,0x4                         ; 0056c81e
    PUSH 0x1                            ; 0056c821
    PUSH 0x1                            ; 0056c823
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0056c825
    PUSH EAX                            ; 0056c828
    CALL FUN_005247c0                   ; 0056c829
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c82e
    JMP 0x0056c4e4                      ; 0056c831
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0xc1d4]    ; 0056c836
        ;   Label: caseD_8
    TEST EDX,EDX                        ; 0056c83c
    JNZ 0x0056c4e4                      ; 0056c83e
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 0056c844
    JNZ 0x0056c4e4                      ; 0056c84b
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EDX                            ; 0056c851
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0056c852
    PUSH ESI                            ; 0056c855
    LEA ESI,[EBP + 0xffffff52]          ; 0056c856
    LEA EDI,[EBP + -0x42]               ; 0056c85c
    CALL FUN_00569040                   ; 0056c85f
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 0056c864
    LEA EAX,[EBP + -0x42]               ; 0056c867
    LEA ESI,[EBP + 0xffffff52]          ; 0056c86a
    PUSH EAX                            ; 0056c870
    MOVSD ES:EDI,ESI                    ; 0056c871
    MOVSD ES:EDI,ESI                    ; 0056c872
    MOVSD ES:EDI,ESI                    ; 0056c873
    PUSH EBX                            ; 0056c874
    LEA ESI,[EBP + 0x42]                ; 0056c875
    LEA EDI,[EBP + 0xffffff3a]          ; 0056c878
    CALL FUN_00408b40                   ; 0056c87e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0056c883
    LEA ESI,[EBP + 0x42]                ; 0056c886
    LEA EAX,[EBP + 0xffffff3a]          ; 0056c889
    PUSH 0x0                            ; 0056c88f
    MOVSD ES:EDI,ESI                    ; 0056c891
    MOVSD ES:EDI,ESI                    ; 0056c892
    MOVSD ES:EDI,ESI                    ; 0056c893
    PUSH EAX                            ; 0056c894
    MOV EDI,dword ptr [0x0061dca4]      ; 0056c895 | DAT_0061dca4
    PUSH EDI                            ; 0056c89b
    CALL FUN_004e62e0                   ; 0056c89c
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e62e0()
    ADD ESP,0xc                         ; 0056c8a1
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0056c8a4
    JMP 0x0056c4e4                      ; 0056c8ae
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5f29e6                       ; 0056c8b3 | = "Capture"
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x0061b4d0]      ; 0056c8b8 | DAT_0061b4d0
    PUSH EDI                            ; 0056c8be
    CALL FUN_004a6c30                   ; 0056c8bf
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 0056c8c4
    TEST EAX,EAX                        ; 0056c8c7
    JNZ 0x0056c4e4                      ; 0056c8c9
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0056c8cf
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056c8d5
    PUSH EBX                            ; 0056c8db
    CALL dword ptr [EAX + 0x144]        ; 0056c8dc
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056c8e2
    ADD ESP,0x8                         ; 0056c8e8
    TEST EAX,EAX                        ; 0056c8eb
    JZ 0x0056c4e4                       ; 0056c8ed
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,EAX                         ; 0056c8f3
    LEA EDI,[EBP + -0x7e]               ; 0056c8f5
    LEA ESI,[EBP + 0x6]                 ; 0056c8f8
    FLD float ptr [EDX + 0x20]          ; 0056c8fb
    FLD float ptr [EDX + 0x24]          ; 0056c8fe
    LEA EAX,[EBX + 0x20]                ; 0056c901
    FLD float ptr [EDX + 0x28]          ; 0056c904
    FXCH ST2                            ; 0056c907
    FSUB float ptr [EAX]                ; 0056c909
    FXCH                                ; 0056c90b
    FSUB float ptr [EAX + 0x4]          ; 0056c90d
    FXCH ST2                            ; 0056c910
    FSUB float ptr [EAX + 0x8]          ; 0056c912
    FXCH                                ; 0056c915
    FSTP float ptr [EBP + 0x6]          ; 0056c917
    FXCH                                ; 0056c91a
    FSTP float ptr [EBP + 0xa]          ; 0056c91c
    FSTP float ptr [EBP + 0xe]          ; 0056c91f
    MOVSD ES:EDI,ESI                    ; 0056c922
    MOVSD ES:EDI,ESI                    ; 0056c923
    MOVSD ES:EDI,ESI                    ; 0056c924
    FLD float ptr [EBP + -0x7a]         ; 0056c925
    FMUL ST0                            ; 0056c928
    FLD float ptr [EBP + -0x7e]         ; 0056c92a
    FMUL ST0                            ; 0056c92d
    FADDP                               ; 0056c92f
    FLD float ptr [EBP + -0x76]         ; 0056c931
    FMUL ST0                            ; 0056c934
    FADDP                               ; 0056c936
    FSQRT                               ; 0056c938
    FLD float ptr [0x00605948]          ; 0056c93a | DAT_00605948
    FLD1                                ; 0056c940
    FADDP                               ; 0056c942
    FXCH                                ; 0056c944
    FSTP float ptr [EBP + 0x72]         ; 0056c946
    MOV EAX,dword ptr [EBP + 0x72]      ; 0056c949
    FLD float ptr [EBP + 0x72]          ; 0056c94c
    MOV dword ptr [EBP + 0x62],EAX      ; 0056c94f
    FCOMPP                              ; 0056c952
    FNSTSW AX                           ; 0056c954
    SAHF                                ; 0056c956
    JC 0x0056c983                       ; 0056c957
        ;   XREF to: 0056c983 (CONDITIONAL_JUMP)  ; LAB_0056c983
    FLD float ptr [EBP + 0x62]          ; 0056c959
        ;   Label: LAB_0056c959
    FCOMP float ptr [EBX + 0xc26c]      ; 0056c95c
    FNSTSW AX                           ; 0056c962
    SAHF                                ; 0056c964
    JNC 0x0056c4e4                      ; 0056c965
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0056c96b
    PUSH 0x2                            ; 0056c96d
    LEA EAX,[EBX + 0x158]               ; 0056c96f
    PUSH EAX                            ; 0056c975
    CALL FUN_005247c0                   ; 0056c976
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c97b
    JMP 0x0056c4e4                      ; 0056c97e
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + -0x7e]               ; 0056c983
        ;   Label: LAB_0056c983
    PUSH EAX                            ; 0056c986
    LEA ESI,[EBP + -0x6]                ; 0056c987
    LEA EDI,[EBP + 0xffffff46]          ; 0056c98a
    CALL FUN_005a7520                   ; 0056c990
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[EBP + -0x6]                ; 0056c995
    MOVSD ES:EDI,ESI                    ; 0056c998
    MOVSD ES:EDI,ESI                    ; 0056c999
    MOVSD ES:EDI,ESI                    ; 0056c99a
    ADD ESP,0x4                         ; 0056c99b
    FLD float ptr [EBP + 0xffffff4a]    ; 0056c99e
    FSUB float ptr [EBX + 0x34]         ; 0056c9a4
    SUB ESP,0x4                         ; 0056c9a7
    FSTP float ptr [ESP]                ; 0056c9aa
    CALL FUN_0040cd60                   ; 0056c9ad
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 0056c9b2
    FLD float ptr [EBP + 0x76]          ; 0056c9b5
    FABS                                ; 0056c9b8
    ADD ESP,0x4                         ; 0056c9ba
    FCOMP double ptr [0x005f29f7]       ; 0056c9bd | DAT_005f29f7
    FNSTSW AX                           ; 0056c9c3
    SAHF                                ; 0056c9c5
    JNC 0x0056c959                      ; 0056c9c6
        ;   XREF to: 0056c959 (CONDITIONAL_JUMP)  ; LAB_0056c959
    PUSH 0x1                            ; 0056c9c8
    PUSH 0x9                            ; 0056c9ca
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0056c9cc
    PUSH EDX                            ; 0056c9cf
    MOV dword ptr [EBX + 0xc29c],0x0    ; 0056c9d0
    CALL FUN_005247c0                   ; 0056c9da
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056c9df
    JMP 0x0056c959                      ; 0056c9e2
        ;   XREF to: 0056c959 (UNCONDITIONAL_JUMP)  ; LAB_0056c959
    PUSH 0x5f29ee                       ; 0056c9e7 | = "Capture"
        ;   Label: caseD_2
    MOV ECX,dword ptr [0x0061b4d0]      ; 0056c9ec | DAT_0061b4d0
    PUSH ECX                            ; 0056c9f2
    CALL FUN_004a6c30                   ; 0056c9f3
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 0056c9f8
    TEST EAX,EAX                        ; 0056c9fb
    JZ 0x0056ca14                       ; 0056c9fd
        ;   XREF to: 0056ca14 (CONDITIONAL_JUMP)  ; LAB_0056ca14
    PUSH 0x1                            ; 0056c9ff
    PUSH 0x1                            ; 0056ca01
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0056ca03
    PUSH ESI                            ; 0056ca06
    CALL FUN_005247c0                   ; 0056ca07
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056ca0c
    JMP 0x0056c4e4                      ; 0056ca0f
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0056ca14
        ;   Label: LAB_0056ca14
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056ca1a
    PUSH EBX                            ; 0056ca20
    CALL dword ptr [EAX + 0x144]        ; 0056ca21
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0056ca27
    ADD ESP,0x8                         ; 0056ca2d
    TEST ESI,ESI                        ; 0056ca30
    JZ 0x0056cb5c                       ; 0056ca32
        ;   XREF to: 0056cb5c (CONDITIONAL_JUMP)  ; LAB_0056cb5c
    MOV EDI,dword ptr [ESI + 0x26fc]    ; 0056ca38
    MOV EAX,ESI                         ; 0056ca3e
    CMP EBX,EDI                         ; 0056ca40
    JNZ 0x0056ca54                      ; 0056ca42
        ;   XREF to: 0056ca54 (CONDITIONAL_JUMP)  ; LAB_0056ca54
    PUSH ESI                            ; 0056ca44
    MOV EDX,dword ptr [ESI + 0x154]     ; 0056ca45
    CALL dword ptr [EDX + 0xf0]         ; 0056ca4b
    ADD ESP,0x4                         ; 0056ca51
    MOV EAX,[0x00605948]                ; 0056ca54 | DAT_00605948
        ;   Label: LAB_0056ca54
    MOV dword ptr [EBP + 0x6a],EAX      ; 0056ca59
    LEA EAX,[EBX + 0x249c]              ; 0056ca5c
    MOV dword ptr [EAX + 0x8],0x0       ; 0056ca62
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056ca69
    MOV dword ptr [EAX + 0x4],EDX       ; 0056ca6c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056ca6f
    MOV dword ptr [EAX],EDX             ; 0056ca72
    XOR EAX,EAX                         ; 0056ca74
    MOV dword ptr [EBP + 0x4e],EAX      ; 0056ca76
    MOV dword ptr [EBP + 0x52],EAX      ; 0056ca79
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0056ca7c
    PUSH 0x3e32b8c2                     ; 0056ca7f
    MOV dword ptr [EBP + 0x56],EAX      ; 0056ca84
    LEA EAX,[EBP + 0x4e]                ; 0056ca87
    PUSH 0x3f000000                     ; 0056ca8a
    PUSH EAX                            ; 0056ca8f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056ca90
    PUSH EAX                            ; 0056ca96
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056ca97
    CALL dword ptr [EDX + 0xc4]         ; 0056ca9d
    ADD ESP,0x4                         ; 0056caa3
    PUSH EAX                            ; 0056caa6
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056caa7
    ADD EAX,0x20                        ; 0056caad
    PUSH EAX                            ; 0056cab0
    PUSH EBX                            ; 0056cab1
    CALL FUN_0042ccf0                   ; 0056cab2
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 0056cab7
    TEST EAX,EAX                        ; 0056caba
    JL 0x0056c4e4                       ; 0056cabc
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    JLE 0x0056c4e4                      ; 0056cac2
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0x1e]                ; 0056cac8
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056cacb
    LEA ESI,[EBP + -0x2a]               ; 0056cad1
    LEA EDX,[EBX + 0x20]                ; 0056cad4
    FLD float ptr [EAX + 0x20]          ; 0056cad7
    FLD float ptr [EAX + 0x24]          ; 0056cada
    FLD float ptr [EAX + 0x28]          ; 0056cadd
    FXCH ST2                            ; 0056cae0
    FSUB float ptr [EDX]                ; 0056cae2
    FXCH                                ; 0056cae4
    FSUB float ptr [EDX + 0x4]          ; 0056cae6
    FXCH ST2                            ; 0056cae9
    FSUB float ptr [EDX + 0x8]          ; 0056caeb
    FXCH                                ; 0056caee
    FSTP float ptr [EBP + -0x2a]        ; 0056caf0
    FXCH                                ; 0056caf3
    FSTP float ptr [EBP + -0x26]        ; 0056caf5
    FSTP float ptr [EBP + -0x22]        ; 0056caf8
    MOVSD ES:EDI,ESI                    ; 0056cafb
    MOVSD ES:EDI,ESI                    ; 0056cafc
    MOVSD ES:EDI,ESI                    ; 0056cafd
    FLD float ptr [EBP + 0x22]          ; 0056cafe
    FMUL ST0                            ; 0056cb01
    FLD float ptr [EBP + 0x1e]          ; 0056cb03
    FMUL ST0                            ; 0056cb06
    FADDP                               ; 0056cb08
    FLD float ptr [EBP + 0x26]          ; 0056cb0a
    FMUL ST0                            ; 0056cb0d
    FADDP                               ; 0056cb0f
    FSQRT                               ; 0056cb11
    FLD float ptr [EBP + 0x6a]          ; 0056cb13
    FLD1                                ; 0056cb16
    FADDP                               ; 0056cb18
    FXCH                                ; 0056cb1a
    FCOMPP                              ; 0056cb1c
    FNSTSW AX                           ; 0056cb1e
    SAHF                                ; 0056cb20
    JNC 0x0056c4e4                      ; 0056cb21
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xc268]        ; 0056cb27
    FLDZ                                ; 0056cb2d
    FCOMPP                              ; 0056cb2f
    FNSTSW AX                           ; 0056cb31
    SAHF                                ; 0056cb33
    JC 0x0056c4e4                       ; 0056cb34
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0056cb3a
    PUSH 0x6                            ; 0056cb3c
    LEA EAX,[EBX + 0x158]               ; 0056cb3e
    PUSH EAX                            ; 0056cb44
    CALL FUN_005247c0                   ; 0056cb45
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056cb4a
    MOV dword ptr [EBX + 0xc268],0x3f800000 ; 0056cb4d
    JMP 0x0056c4e4                      ; 0056cb57
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0056cb5c
        ;   Label: LAB_0056cb5c
    PUSH 0x1                            ; 0056cb5e
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0056cb60
    PUSH ECX                            ; 0056cb63
    CALL FUN_005247c0                   ; 0056cb64
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0056cb69
    JMP 0x0056c4e4                      ; 0056cb6c
        ;   XREF to: 0056c4e4 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[ESI + -0x1]                ; 0056cb71
        ;   Label: LAB_0056cb71
    CMP EAX,0x9                         ; 0056cb74
    JA 0x0056c4e4                       ; 0056cb77
        ;   XREF to: 0056c4e4 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x56c1f0]  ; 0056cb7d | caseD_1 | caseD_2 | caseD_7
        ;   Label: switchD
    PUSH EBX                            ; 0056cb84
        ;   Label: LAB_0056cb84
    CALL FUN_0042e120                   ; 0056cb85
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e120()
    ADD ESP,0x4                         ; 0056cb8a
    TEST EAX,EAX                        ; 0056cb8d
    JZ 0x0056c575                       ; 0056cb8f
        ;   XREF to: 0056c575 (CONDITIONAL_JUMP)  ; LAB_0056c575
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0056cb95
    TEST EDI,EDI                        ; 0056cb9b
    JZ 0x0056cbc9                       ; 0056cb9d
        ;   XREF to: 0056cbc9 (CONDITIONAL_JUMP)  ; LAB_0056cbc9
    PUSH EDI                            ; 0056cb9f
    MOV EDX,dword ptr [EDI + 0x154]     ; 0056cba0
    CALL dword ptr [EDX + 0xf4]         ; 0056cba6
    ADD ESP,0x4                         ; 0056cbac
    CMP EAX,EBX                         ; 0056cbaf
    JNZ 0x0056cbc9                      ; 0056cbb1
        ;   XREF to: 0056cbc9 (CONDITIONAL_JUMP)  ; LAB_0056cbc9
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0056cbb3
    PUSH EAX                            ; 0056cbb9
    MOV EDX,dword ptr [0x00622c18]      ; 0056cbba | DAT_00622c18
    PUSH EDX                            ; 0056cbc0 | DAT_01e82168
    CALL FUN_00559250                   ; 0056cbc1
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; undefined FUN_00559250()
    ADD ESP,0x8                         ; 0056cbc6
    PUSH dword ptr [EBP + 0x92]         ; 0056cbc9
        ;   Label: LAB_0056cbc9
    PUSH EBX                            ; 0056cbcf
    CALL FUN_0042d700                   ; 0056cbd0
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d700()
    LEA ECX,[EBX + 0x2518]              ; 0056cbd5
    FLD float ptr [ECX]                 ; 0056cbdb
    FMUL float ptr [EBP + 0x92]         ; 0056cbdd
    FLD float ptr [ECX + 0x4]           ; 0056cbe3
    FMUL float ptr [EBP + 0x92]         ; 0056cbe6
    FLD float ptr [ECX + 0x8]           ; 0056cbec
    FMUL float ptr [EBP + 0x92]         ; 0056cbef
    LEA EDI,[EBP + -0x4e]               ; 0056cbf5
    LEA ESI,[EBP + -0x5a]               ; 0056cbf8
    FXCH ST2                            ; 0056cbfb
    FSTP float ptr [EBP + -0x5a]        ; 0056cbfd
    FSTP float ptr [EBP + -0x56]        ; 0056cc00
    FSTP float ptr [EBP + -0x52]        ; 0056cc03
    MOVSD ES:EDI,ESI                    ; 0056cc06
    MOVSD ES:EDI,ESI                    ; 0056cc07
    MOVSD ES:EDI,ESI                    ; 0056cc08
    LEA EAX,[EBX + 0x250c]              ; 0056cc09
    FLD float ptr [EBP + -0x4e]         ; 0056cc0f
    FLD float ptr [EBP + -0x4a]         ; 0056cc12
    FLD float ptr [EBP + -0x46]         ; 0056cc15
    LEA EDI,[EBP + 0xffffff22]          ; 0056cc18
    LEA ESI,[EBP + -0x1e]               ; 0056cc1e
    FXCH ST2                            ; 0056cc21
    FADD float ptr [EAX]                ; 0056cc23
    FXCH                                ; 0056cc25
    FADD float ptr [EAX + 0x4]          ; 0056cc27
    FXCH ST2                            ; 0056cc2a
    FADD float ptr [EAX + 0x8]          ; 0056cc2c
    FXCH                                ; 0056cc2f
    FSTP float ptr [EBP + -0x1e]        ; 0056cc31
    FXCH                                ; 0056cc34
    FSTP float ptr [EBP + -0x1a]        ; 0056cc36
    FSTP float ptr [EBP + -0x16]        ; 0056cc39
    MOVSD ES:EDI,ESI                    ; 0056cc3c
    MOVSD ES:EDI,ESI                    ; 0056cc3d
    MOVSD ES:EDI,ESI                    ; 0056cc3e
    LEA EDX,[EBX + 0x249c]              ; 0056cc3f
    FLD float ptr [EBP + 0xffffff22]    ; 0056cc45
    FLD float ptr [EBP + 0xffffff26]    ; 0056cc4b
    FLD float ptr [EBP + 0xffffff2a]    ; 0056cc51
    LEA EDI,[EBP + 0xffffff5e]          ; 0056cc57
    LEA ESI,[EBP + -0x12]               ; 0056cc5d
    FXCH ST2                            ; 0056cc60
    FADD float ptr [EDX]                ; 0056cc62
    FXCH                                ; 0056cc64
    FADD float ptr [EDX + 0x4]          ; 0056cc66
    FXCH ST2                            ; 0056cc69
    FADD float ptr [EDX + 0x8]          ; 0056cc6b
    FXCH                                ; 0056cc6e
    FSTP float ptr [EBP + -0x12]        ; 0056cc70
    FXCH                                ; 0056cc73
    FSTP float ptr [EBP + -0xe]         ; 0056cc75
    FSTP float ptr [EBP + -0xa]         ; 0056cc78
    MOVSD ES:EDI,ESI                    ; 0056cc7b
    MOVSD ES:EDI,ESI                    ; 0056cc7c
    MOVSD ES:EDI,ESI                    ; 0056cc7d
    MOV dword ptr [EAX + 0x8],0x0       ; 0056cc7e
    ADD ESP,0x8                         ; 0056cc85
    MOV ECX,dword ptr [EAX + 0x8]       ; 0056cc88
    MOV dword ptr [EAX + 0x4],ECX       ; 0056cc8b
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056cc8e
    MOV dword ptr [EAX],ECX             ; 0056cc91
    MOV dword ptr [EDX + 0x8],0x0       ; 0056cc93
    LEA EAX,[EBP + 0xffffff5e]          ; 0056cc9a
    FLD float ptr [EDX + 0x8]           ; 0056cca0
    PUSH EAX                            ; 0056cca3
    FST float ptr [EDX + 0x4]           ; 0056cca4
    PUSH EBX                            ; 0056cca7
    FSTP float ptr [EDX]                ; 0056cca8
    CALL FUN_0042d750                   ; 0056ccaa
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d750()
    ADD ESP,0x8                         ; 0056ccaf
    JMP 0x0056c575                      ; 0056ccb2
        ;   XREF to: 0056c575 (UNCONDITIONAL_JUMP)  ; LAB_0056c575

