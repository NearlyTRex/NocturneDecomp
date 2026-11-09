; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dcube_cpp_FUN_0045322e(undefined4 *param_1,float *param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004531cc = 00453816
;   undefined1* PTR_caseD_3_004531d4 = 004534bc
;   undefined1* PTR_caseD_1_004531dc = 004538ca
;   undefined1* PTR_caseD_3_004531e4 = 0045355e
;   undefined1* PTR_caseD_1_004531ec = 00453978
;   undefined1* PTR_caseD_3_004531f4 = 00453601
;   undefined1* PTR_caseD_1_004531fc = 00453a2c
;   undefined1* PTR_caseD_3_00453204 = 004536a4
;   undefined1* PTR_caseD_1_0045320c = 00453adc
;   undefined1* PTR_caseD_3_00453214 = 0045374a
;   undefined1* PTR_caseD_1_0045321c = 00453b8c
;   undefined1* PTR_caseD_3_00453224 = 004537f0
;   undefined4 DAT_015485fc
;   undefined4 DAT_01548600
;   undefined4 DAT_01548604
;   ... and 47 more
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004515b0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0045322e
        ;   Label: core_dcube.cpp_FUN_0045322e
    PUSH EBX                            ; 00453230
    PUSH ESI                            ; 00453231
    PUSH EDI                            ; 00453232
    PUSH EBP                            ; 00453233
    MOV EBP,ESP                         ; 00453234
    SUB ESP,0x1c                        ; 00453236
    AND ESP,0xfffffff8                  ; 00453239
    MOV dword ptr [0x015485fc],0x3      ; 0045323c | DAT_015485fc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453246
    MOV EDX,dword ptr [EDX]             ; 00453249
    CMP EDX,0x1548600                   ; 0045324b
    JNZ 0x004533e3                      ; 00453251
        ;   XREF to: 004533e3 (CONDITIONAL_JUMP)  ; LAB_004533e3
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453257
        ;   Label: LAB_00453257
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045325a
    CMP EDX,0x154860c                   ; 0045325d
    JZ 0x0045327e                       ; 00453263
        ;   XREF to: 0045327e (CONDITIONAL_JUMP)  ; LAB_0045327e
    FLD float ptr [EDX]                 ; 00453265
    FLD float ptr [EDX + 0x8]           ; 00453267
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045326a
    MOV [0x01548610],EAX                ; 0045326d | DAT_01548610
    FSTP float ptr [0x01548614]         ; 00453272 | DAT_01548614
    FSTP float ptr [0x0154860c]         ; 00453278 | DAT_0154860c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045327e
        ;   Label: LAB_0045327e
    MOV EDX,dword ptr [EDX + 0x8]       ; 00453281
    CMP EDX,0x1548618                   ; 00453284
    JZ 0x004532a5                       ; 0045328a
        ;   XREF to: 004532a5 (CONDITIONAL_JUMP)  ; LAB_004532a5
    FLD float ptr [EDX]                 ; 0045328c
    FLD float ptr [EDX + 0x8]           ; 0045328e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453291
    MOV [0x0154861c],EAX                ; 00453294 | DAT_0154861c
    FSTP float ptr [0x01548620]         ; 00453299 | DAT_01548620
    FSTP float ptr [0x01548618]         ; 0045329f | DAT_01548618
    MOV EDI,0xffffffff                  ; 004532a5
        ;   Label: LAB_004532a5
    MOV ESI,dword ptr [0x015485fc]      ; 004532aa | DAT_015485fc
    XOR ECX,ECX                         ; 004532b0
    XOR EBX,EBX                         ; 004532b2
    MOV dword ptr [ESP + 0x10],ECX      ; 004532b4
    TEST ESI,ESI                        ; 004532b8
    JLE 0x0045334b                      ; 004532ba
        ;   XREF to: 0045334b (CONDITIONAL_JUMP)  ; LAB_0045334b
    MOV ESI,0x1548600                   ; 004532c0
    FLD float ptr [ESI]                 ; 004532c5
        ;   Label: LAB_004532c5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004532c7
    MOV ECX,ESI                         ; 004532ca
    XOR EDX,EDX                         ; 004532cc
    FCOMP float ptr [EAX]               ; 004532ce
    FNSTSW AX                           ; 004532d0
    SAHF                                ; 004532d2
    JBE 0x004532da                      ; 004532d3
        ;   XREF to: 004532da (CONDITIONAL_JUMP)  ; LAB_004532da
    MOV EDX,0x1                         ; 004532d5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004532da
        ;   Label: LAB_004532da
    FLD float ptr [ECX + 0x4]           ; 004532dd
    FCOMP float ptr [EAX + 0x4]         ; 004532e0
    FNSTSW AX                           ; 004532e3
    SAHF                                ; 004532e5
    JBE 0x004532eb                      ; 004532e6
        ;   XREF to: 004532eb (CONDITIONAL_JUMP)  ; LAB_004532eb
    OR DL,0x2                           ; 004532e8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004532eb
        ;   Label: LAB_004532eb
    FLD float ptr [ECX + 0x8]           ; 004532ee
    FCOMP float ptr [EAX + 0x8]         ; 004532f1
    FNSTSW AX                           ; 004532f4
    SAHF                                ; 004532f6
    JBE 0x004532fc                      ; 004532f7
        ;   XREF to: 004532fc (CONDITIONAL_JUMP)  ; LAB_004532fc
    OR DL,0x4                           ; 004532f9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004532fc
        ;   Label: LAB_004532fc
    FLD float ptr [ECX]                 ; 004532ff
    FCOMP float ptr [EAX]               ; 00453301
    FNSTSW AX                           ; 00453303
    SAHF                                ; 00453305
    JNC 0x0045330b                      ; 00453306
        ;   XREF to: 0045330b (CONDITIONAL_JUMP)  ; LAB_0045330b
    OR DL,0x8                           ; 00453308
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045330b
        ;   Label: LAB_0045330b
    FLD float ptr [ECX + 0x4]           ; 0045330e
    FCOMP float ptr [EAX + 0x4]         ; 00453311
    FNSTSW AX                           ; 00453314
    SAHF                                ; 00453316
    JNC 0x0045331c                      ; 00453317
        ;   XREF to: 0045331c (CONDITIONAL_JUMP)  ; LAB_0045331c
    OR DL,0x10                          ; 00453319
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045331c
        ;   Label: LAB_0045331c
    FLD float ptr [ECX + 0x8]           ; 0045331f
    FCOMP float ptr [EAX + 0x8]         ; 00453322
    FNSTSW AX                           ; 00453325
    SAHF                                ; 00453327
    JNC 0x0045332d                      ; 00453328
        ;   XREF to: 0045332d (CONDITIONAL_JUMP)  ; LAB_0045332d
    OR DL,0x20                          ; 0045332a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045332d
        ;   Label: LAB_0045332d
    ADD ESI,0xc                         ; 00453331
    INC EBX                             ; 00453334
    AND EDI,EDX                         ; 00453335
    OR EAX,EDX                          ; 00453337
    MOV EDX,dword ptr [0x015485fc]      ; 00453339 | DAT_015485fc
    MOV dword ptr [ESP + 0x10],EAX      ; 0045333f
    CMP EBX,EDX                         ; 00453343
    JL 0x004532c5                       ; 00453345
        ;   XREF to: 004532c5 (CONDITIONAL_JUMP)  ; LAB_004532c5
    CMP dword ptr [ESP + 0x10],0x0      ; 0045334b
        ;   Label: LAB_0045334b
    JNZ 0x00453401                      ; 00453350
        ;   XREF to: 00453401 (CONDITIONAL_JUMP)  ; LAB_00453401
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453356
    MOV ESI,0x3                         ; 00453359
    MOV EDX,dword ptr [EDX]             ; 0045335e
    MOV dword ptr [0x01548a94],ESI      ; 00453360 | DAT_01548a94
    CMP EDX,0x1548a98                   ; 00453366
    JZ 0x00453387                       ; 0045336c
        ;   XREF to: 00453387 (CONDITIONAL_JUMP)  ; LAB_00453387
    FLD float ptr [EDX]                 ; 0045336e
    FLD float ptr [EDX + 0x8]           ; 00453370
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453373
    MOV [0x01548a9c],EAX                ; 00453376 | DAT_01548a9c
    FSTP float ptr [0x01548aa0]         ; 0045337b | DAT_01548aa0
    FSTP float ptr [0x01548a98]         ; 00453381 | DAT_01548a98
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453387
        ;   Label: LAB_00453387
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045338a
    CMP EDX,0x1548aa4                   ; 0045338d
    JZ 0x004533ae                       ; 00453393
        ;   XREF to: 004533ae (CONDITIONAL_JUMP)  ; LAB_004533ae
    FLD float ptr [EDX]                 ; 00453395
    FLD float ptr [EDX + 0x8]           ; 00453397
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045339a
    MOV [0x01548aa8],EAX                ; 0045339d | DAT_01548aa8
    FSTP float ptr [0x01548aac]         ; 004533a2 | DAT_01548aac
    FSTP float ptr [0x01548aa4]         ; 004533a8 | DAT_01548aa4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004533ae
        ;   Label: LAB_004533ae
    MOV EDX,dword ptr [EDX + 0x8]       ; 004533b1
    CMP EDX,0x1548ab0                   ; 004533b4
    JZ 0x004533d5                       ; 004533ba
        ;   XREF to: 004533d5 (CONDITIONAL_JUMP)  ; LAB_004533d5
    FLD float ptr [EDX]                 ; 004533bc
    FLD float ptr [EDX + 0x8]           ; 004533be
    MOV EAX,dword ptr [EDX + 0x4]       ; 004533c1
    MOV [0x01548ab4],EAX                ; 004533c4 | DAT_01548ab4
    FSTP float ptr [0x01548ab8]         ; 004533c9 | DAT_01548ab8
    FSTP float ptr [0x01548ab0]         ; 004533cf | DAT_01548ab0
    MOV ECX,0x1                         ; 004533d5
        ;   Label: LAB_004533d5
    MOV EAX,ECX                         ; 004533da
    MOV ESP,EBP                         ; 004533dc
    POP EBP                             ; 004533de
    POP EDI                             ; 004533df
    POP ESI                             ; 004533e0
    POP EBX                             ; 004533e1
    RET                                 ; 004533e2
    FLD float ptr [EDX]                 ; 004533e3
        ;   Label: LAB_004533e3
    FLD float ptr [EDX + 0x8]           ; 004533e5
    MOV EAX,dword ptr [EDX + 0x4]       ; 004533e8
    MOV [0x01548604],EAX                ; 004533eb | DAT_01548604
    FSTP float ptr [0x01548608]         ; 004533f0 | DAT_01548608
    FSTP float ptr [0x01548600]         ; 004533f6 | DAT_01548600
    JMP 0x00453257                      ; 004533fc
        ;   XREF to: 00453257 (UNCONDITIONAL_JUMP)  ; LAB_00453257
    TEST EDI,EDI                        ; 00453401
        ;   Label: LAB_00453401
    JNZ 0x0045380b                      ; 00453403
        ;   XREF to: 0045380b (CONDITIONAL_JUMP)  ; LAB_0045380b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00453409
    MOV EBX,dword ptr [0x015485fc]      ; 0045340c | DAT_015485fc
    MOV dword ptr [0x01548784],EDI      ; 00453412 | DAT_01548784
    MOV dword ptr [0x01548848],EDI      ; 00453418 | DAT_01548848
    MOV dword ptr [0x0154890c],EDI      ; 0045341e | DAT_0154890c
    MOV dword ptr [0x015489d0],EDI      ; 00453424 | DAT_015489d0
    MOV dword ptr [0x01548a94],EDI      ; 0045342a | DAT_01548a94
    MOV dword ptr [0x015486c0],EDI      ; 00453430 | DAT_015486c0
    MOV EDX,dword ptr [EDX + 0x4]       ; 00453436
    XOR ESI,ESI                         ; 00453439
    MOV dword ptr [ESP + 0x14],EDX      ; 0045343b
    TEST EBX,EBX                        ; 0045343f
    JLE 0x004534ca                      ; 00453441
        ;   XREF to: 004534ca (CONDITIONAL_JUMP)  ; LAB_004534ca
    MOV EBX,0x1548600                   ; 00453447
    MOV EDI,dword ptr [0x015485fc]      ; 0045344c | DAT_015485fc
        ;   Label: LAB_0045344c
    LEA ECX,[ESI + 0x1]                 ; 00453452
    CMP ECX,EDI                         ; 00453455
    JNZ 0x0045345b                      ; 00453457
        ;   XREF to: 0045345b (CONDITIONAL_JUMP)  ; LAB_0045345b
    XOR ECX,EDI                         ; 00453459
    IMUL ECX,ECX,0xc                    ; 0045345b
        ;   Label: LAB_0045345b
    FLD float ptr [EBX + 0x4]           ; 0045345e
    MOV EDI,0x1548600                   ; 00453461
    MOV EDX,EBX                         ; 00453466
    ADD EDI,ECX                         ; 00453468
    XOR ECX,ECX                         ; 0045346a
    FCOMP float ptr [ESP + 0x14]        ; 0045346c
    FNSTSW AX                           ; 00453470
    SAHF                                ; 00453472
    JBE 0x0045347a                      ; 00453473
        ;   XREF to: 0045347a (CONDITIONAL_JUMP)  ; LAB_0045347a
    MOV ECX,0x1                         ; 00453475
    FLD float ptr [EDI + 0x4]           ; 0045347a
        ;   Label: LAB_0045347a
    FCOMP float ptr [ESP + 0x14]        ; 0045347d
    FNSTSW AX                           ; 00453481
    SAHF                                ; 00453483
    JBE 0x00453489                      ; 00453484
        ;   XREF to: 00453489 (CONDITIONAL_JUMP)  ; LAB_00453489
    OR CL,0x2                           ; 00453486
    CMP ECX,0x3                         ; 00453489
        ;   Label: LAB_00453489
    JA 0x004534bc                       ; 0045348c
        ;   XREF to: 004534bc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4531c8]  ; 0045348e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x015486c0],0xc ; 00453495 | DAT_015486c0
        ;   Label: caseD_0
    ADD ECX,0x15486c4                   ; 0045349c
    CMP ECX,EDX                         ; 004534a2
    JZ 0x004534b6                       ; 004534a4
        ;   XREF to: 004534b6 (CONDITIONAL_JUMP)  ; LAB_004534b6
    MOV EAX,dword ptr [EDX]             ; 004534a6
    MOV dword ptr [ECX],EAX             ; 004534a8 | DAT_015486c4
    MOV EAX,dword ptr [EDX + 0x4]       ; 004534aa
    MOV dword ptr [ECX + 0x4],EAX       ; 004534ad | DAT_015486c8
    MOV EAX,dword ptr [EDX + 0x8]       ; 004534b0
    MOV dword ptr [ECX + 0x8],EAX       ; 004534b3 | DAT_015486cc
    INC dword ptr [0x015486c0]          ; 004534b6 | DAT_015486c0
        ;   Label: LAB_004534b6
    MOV EDI,dword ptr [0x015485fc]      ; 004534bc | DAT_015485fc
        ;   Label: caseD_3
    INC ESI                             ; 004534c2
    ADD EBX,0xc                         ; 004534c3
    CMP ESI,EDI                         ; 004534c6
    JL 0x0045344c                       ; 004534c8
        ;   XREF to: 0045344c (CONDITIONAL_JUMP)  ; LAB_0045344c
    MOV EAX,[0x015486c0]                ; 004534ca | DAT_015486c0
        ;   Label: LAB_004534ca
    CMP EAX,0x3                         ; 004534cf
    JL 0x0045380b                       ; 004534d2
        ;   XREF to: 0045380b (CONDITIONAL_JUMP)  ; LAB_0045380b
    MOV EDX,dword ptr [EBP + 0x18]      ; 004534d8
    MOV EDX,dword ptr [EDX + 0x4]       ; 004534db
    XOR ESI,ESI                         ; 004534de
    MOV dword ptr [ESP],EDX             ; 004534e0
    TEST EAX,EAX                        ; 004534e3
    JLE 0x0045356c                      ; 004534e5
        ;   XREF to: 0045356c (CONDITIONAL_JUMP)  ; LAB_0045356c
    MOV EBX,0x15486c4                   ; 004534eb
    MOV EDI,dword ptr [0x015486c0]      ; 004534f0 | DAT_015486c0
        ;   Label: LAB_004534f0
    LEA ECX,[ESI + 0x1]                 ; 004534f6
    CMP ECX,EDI                         ; 004534f9
    JNZ 0x004534ff                      ; 004534fb
        ;   XREF to: 004534ff (CONDITIONAL_JUMP)  ; LAB_004534ff
    XOR ECX,EDI                         ; 004534fd
    IMUL ECX,ECX,0xc                    ; 004534ff
        ;   Label: LAB_004534ff
    FLD float ptr [EBX + 0x4]           ; 00453502 | DAT_015486c8 | DAT_015486d4
    MOV EDI,0x15486c4                   ; 00453505
    MOV EDX,EBX                         ; 0045350a
    ADD EDI,ECX                         ; 0045350c
    XOR ECX,ECX                         ; 0045350e
    FCOMP float ptr [ESP]               ; 00453510
    FNSTSW AX                           ; 00453513
    SAHF                                ; 00453515
    JNC 0x0045351d                      ; 00453516
        ;   XREF to: 0045351d (CONDITIONAL_JUMP)  ; LAB_0045351d
    MOV ECX,0x1                         ; 00453518
    FLD float ptr [EDI + 0x4]           ; 0045351d | DAT_015486c8 | DAT_015486e0
        ;   Label: LAB_0045351d
    FCOMP float ptr [ESP]               ; 00453520
    FNSTSW AX                           ; 00453523
    SAHF                                ; 00453525
    JNC 0x0045352b                      ; 00453526
        ;   XREF to: 0045352b (CONDITIONAL_JUMP)  ; LAB_0045352b
    OR CL,0x2                           ; 00453528
    CMP ECX,0x3                         ; 0045352b
        ;   Label: LAB_0045352b
    JA 0x0045355e                       ; 0045352e
        ;   XREF to: 0045355e (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4531d8]  ; 00453530 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01548784],0xc ; 00453537 | DAT_01548784
        ;   Label: caseD_0
    ADD ECX,0x1548788                   ; 0045353e
    CMP ECX,EDX                         ; 00453544
    JZ 0x00453558                       ; 00453546
        ;   XREF to: 00453558 (CONDITIONAL_JUMP)  ; LAB_00453558
    MOV EAX,dword ptr [EDX]             ; 00453548 | DAT_015486c4
    MOV dword ptr [ECX],EAX             ; 0045354a | DAT_01548788
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045354c | DAT_015486c8
    MOV dword ptr [ECX + 0x4],EAX       ; 0045354f | DAT_0154878c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453552 | DAT_015486cc
    MOV dword ptr [ECX + 0x8],EAX       ; 00453555 | DAT_01548790
    INC dword ptr [0x01548784]          ; 00453558 | DAT_01548784
        ;   Label: LAB_00453558
    MOV EDX,dword ptr [0x015486c0]      ; 0045355e | DAT_015486c0
        ;   Label: caseD_3
    INC ESI                             ; 00453564
    ADD EBX,0xc                         ; 00453565
    CMP ESI,EDX                         ; 00453568
    JL 0x004534f0                       ; 0045356a
        ;   XREF to: 004534f0 (CONDITIONAL_JUMP)  ; LAB_004534f0
    MOV ECX,dword ptr [0x01548784]      ; 0045356c | DAT_01548784
        ;   Label: LAB_0045356c
    CMP ECX,0x3                         ; 00453572
    JL 0x0045380b                       ; 00453575
        ;   XREF to: 0045380b (CONDITIONAL_JUMP)  ; LAB_0045380b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0045357b
    MOV EDX,dword ptr [EDX]             ; 0045357e
    XOR EBX,EBX                         ; 00453580
    MOV dword ptr [ESP + 0x18],EDX      ; 00453582
    TEST ECX,ECX                        ; 00453586
    JLE 0x0045360f                      ; 00453588
        ;   XREF to: 0045360f (CONDITIONAL_JUMP)  ; LAB_0045360f
    MOV ESI,0x1548788                   ; 0045358e
    MOV EDI,dword ptr [0x01548784]      ; 00453593 | DAT_01548784
        ;   Label: LAB_00453593
    LEA ECX,[EBX + 0x1]                 ; 00453599
    CMP ECX,EDI                         ; 0045359c
    JNZ 0x004535a2                      ; 0045359e
        ;   XREF to: 004535a2 (CONDITIONAL_JUMP)  ; LAB_004535a2
    XOR ECX,EDI                         ; 004535a0
    IMUL ECX,ECX,0xc                    ; 004535a2
        ;   Label: LAB_004535a2
    FLD float ptr [ESI]                 ; 004535a5 | DAT_01548788 | DAT_01548794
    MOV EDI,0x1548788                   ; 004535a7
    MOV EDX,ESI                         ; 004535ac
    ADD EDI,ECX                         ; 004535ae
    XOR ECX,ECX                         ; 004535b0
    FCOMP float ptr [ESP + 0x18]        ; 004535b2
    FNSTSW AX                           ; 004535b6
    SAHF                                ; 004535b8
    JBE 0x004535c0                      ; 004535b9
        ;   XREF to: 004535c0 (CONDITIONAL_JUMP)  ; LAB_004535c0
    MOV ECX,0x1                         ; 004535bb
    FLD float ptr [EDI]                 ; 004535c0 | DAT_01548788 | DAT_015487a0
        ;   Label: LAB_004535c0
    FCOMP float ptr [ESP + 0x18]        ; 004535c2
    FNSTSW AX                           ; 004535c6
    SAHF                                ; 004535c8
    JBE 0x004535ce                      ; 004535c9
        ;   XREF to: 004535ce (CONDITIONAL_JUMP)  ; LAB_004535ce
    OR CL,0x2                           ; 004535cb
    CMP ECX,0x3                         ; 004535ce
        ;   Label: LAB_004535ce
    JA 0x00453601                       ; 004535d1
        ;   XREF to: 00453601 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4531e8]  ; 004535d3 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01548848],0xc ; 004535da | DAT_01548848
        ;   Label: caseD_0
    ADD ECX,0x154884c                   ; 004535e1
    CMP ECX,EDX                         ; 004535e7
    JZ 0x004535fb                       ; 004535e9
        ;   XREF to: 004535fb (CONDITIONAL_JUMP)  ; LAB_004535fb
    MOV EAX,dword ptr [EDX]             ; 004535eb | DAT_01548788
    MOV dword ptr [ECX],EAX             ; 004535ed | DAT_0154884c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004535ef | DAT_0154878c
    MOV dword ptr [ECX + 0x4],EAX       ; 004535f2 | DAT_01548850
    MOV EAX,dword ptr [EDX + 0x8]       ; 004535f5 | DAT_01548790
    MOV dword ptr [ECX + 0x8],EAX       ; 004535f8 | DAT_01548854
    INC dword ptr [0x01548848]          ; 004535fb | DAT_01548848
        ;   Label: LAB_004535fb
    MOV EDX,dword ptr [0x01548784]      ; 00453601 | DAT_01548784
        ;   Label: caseD_3
    INC EBX                             ; 00453607
    ADD ESI,0xc                         ; 00453608
    CMP EBX,EDX                         ; 0045360b
    JL 0x00453593                       ; 0045360d
        ;   XREF to: 00453593 (CONDITIONAL_JUMP)  ; LAB_00453593
    MOV ECX,dword ptr [0x01548848]      ; 0045360f | DAT_01548848
        ;   Label: LAB_0045360f
    CMP ECX,0x3                         ; 00453615
    JL 0x0045380b                       ; 00453618
        ;   XREF to: 0045380b (CONDITIONAL_JUMP)  ; LAB_0045380b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0045361e
    MOV EDX,dword ptr [EDX]             ; 00453621
    XOR EBX,EBX                         ; 00453623
    MOV dword ptr [ESP + 0x4],EDX       ; 00453625
    TEST ECX,ECX                        ; 00453629
    JLE 0x004536b2                      ; 0045362b
        ;   XREF to: 004536b2 (CONDITIONAL_JUMP)  ; LAB_004536b2
    MOV ESI,0x154884c                   ; 00453631
    MOV EDI,dword ptr [0x01548848]      ; 00453636 | DAT_01548848
        ;   Label: LAB_00453636
    LEA ECX,[EBX + 0x1]                 ; 0045363c
    CMP ECX,EDI                         ; 0045363f
    JNZ 0x00453645                      ; 00453641
        ;   XREF to: 00453645 (CONDITIONAL_JUMP)  ; LAB_00453645
    XOR ECX,EDI                         ; 00453643
    IMUL ECX,ECX,0xc                    ; 00453645
        ;   Label: LAB_00453645
    FLD float ptr [ESI]                 ; 00453648 | DAT_0154884c | DAT_01548858
    MOV EDI,0x154884c                   ; 0045364a
    MOV EDX,ESI                         ; 0045364f
    ADD EDI,ECX                         ; 00453651
    XOR ECX,ECX                         ; 00453653
    FCOMP float ptr [ESP + 0x4]         ; 00453655
    FNSTSW AX                           ; 00453659
    SAHF                                ; 0045365b
    JNC 0x00453663                      ; 0045365c
        ;   XREF to: 00453663 (CONDITIONAL_JUMP)  ; LAB_00453663
    MOV ECX,0x1                         ; 0045365e
    FLD float ptr [EDI]                 ; 00453663 | DAT_0154884c | DAT_01548864
        ;   Label: LAB_00453663
    FCOMP float ptr [ESP + 0x4]         ; 00453665
    FNSTSW AX                           ; 00453669
    SAHF                                ; 0045366b
    JNC 0x00453671                      ; 0045366c
        ;   XREF to: 00453671 (CONDITIONAL_JUMP)  ; LAB_00453671
    OR CL,0x2                           ; 0045366e
    CMP ECX,0x3                         ; 00453671
        ;   Label: LAB_00453671
    JA 0x004536a4                       ; 00453674
        ;   XREF to: 004536a4 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4531f8]  ; 00453676 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x0154890c],0xc ; 0045367d | DAT_0154890c
        ;   Label: caseD_0
    ADD ECX,0x1548910                   ; 00453684
    CMP ECX,EDX                         ; 0045368a
    JZ 0x0045369e                       ; 0045368c
        ;   XREF to: 0045369e (CONDITIONAL_JUMP)  ; LAB_0045369e
    MOV EAX,dword ptr [EDX]             ; 0045368e | DAT_0154884c
    MOV dword ptr [ECX],EAX             ; 00453690 | DAT_01548910
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453692 | DAT_01548850
    MOV dword ptr [ECX + 0x4],EAX       ; 00453695 | DAT_01548914
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453698 | DAT_01548854
    MOV dword ptr [ECX + 0x8],EAX       ; 0045369b | DAT_01548918
    INC dword ptr [0x0154890c]          ; 0045369e | DAT_0154890c
        ;   Label: LAB_0045369e
    MOV EDX,dword ptr [0x01548848]      ; 004536a4 | DAT_01548848
        ;   Label: caseD_3
    INC EBX                             ; 004536aa
    ADD ESI,0xc                         ; 004536ab
    CMP EBX,EDX                         ; 004536ae
    JL 0x00453636                       ; 004536b0
        ;   XREF to: 00453636 (CONDITIONAL_JUMP)  ; LAB_00453636
    MOV ECX,dword ptr [0x0154890c]      ; 004536b2 | DAT_0154890c
        ;   Label: LAB_004536b2
    CMP ECX,0x3                         ; 004536b8
    JL 0x0045380b                       ; 004536bb
        ;   XREF to: 0045380b (CONDITIONAL_JUMP)  ; LAB_0045380b
    MOV EDX,dword ptr [EBP + 0x18]      ; 004536c1
    MOV EDX,dword ptr [EDX + 0x8]       ; 004536c4
    XOR EBX,EBX                         ; 004536c7
    MOV dword ptr [ESP + 0x8],EDX       ; 004536c9
    TEST ECX,ECX                        ; 004536cd
    JLE 0x00453758                      ; 004536cf
        ;   XREF to: 00453758 (CONDITIONAL_JUMP)  ; LAB_00453758
    MOV ESI,0x1548910                   ; 004536d5
    MOV EDI,dword ptr [0x0154890c]      ; 004536da | DAT_0154890c
        ;   Label: LAB_004536da
    LEA ECX,[EBX + 0x1]                 ; 004536e0
    CMP ECX,EDI                         ; 004536e3
    JNZ 0x004536e9                      ; 004536e5
        ;   XREF to: 004536e9 (CONDITIONAL_JUMP)  ; LAB_004536e9
    XOR ECX,EDI                         ; 004536e7
    IMUL ECX,ECX,0xc                    ; 004536e9
        ;   Label: LAB_004536e9
    FLD float ptr [ESI + 0x8]           ; 004536ec | DAT_01548918 | DAT_01548924
    MOV EDI,0x1548910                   ; 004536ef
    MOV EDX,ESI                         ; 004536f4
    ADD EDI,ECX                         ; 004536f6
    XOR ECX,ECX                         ; 004536f8
    FCOMP float ptr [ESP + 0x8]         ; 004536fa
    FNSTSW AX                           ; 004536fe
    SAHF                                ; 00453700
    JNC 0x00453708                      ; 00453701
        ;   XREF to: 00453708 (CONDITIONAL_JUMP)  ; LAB_00453708
    MOV ECX,0x1                         ; 00453703
    FLD float ptr [EDI + 0x8]           ; 00453708 | DAT_01548918 | DAT_01548930
        ;   Label: LAB_00453708
    FCOMP float ptr [ESP + 0x8]         ; 0045370b
    FNSTSW AX                           ; 0045370f
    SAHF                                ; 00453711
    JNC 0x00453717                      ; 00453712
        ;   XREF to: 00453717 (CONDITIONAL_JUMP)  ; LAB_00453717
    OR CL,0x2                           ; 00453714
    CMP ECX,0x3                         ; 00453717
        ;   Label: LAB_00453717
    JA 0x0045374a                       ; 0045371a
        ;   XREF to: 0045374a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x453208]  ; 0045371c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x015489d0],0xc ; 00453723 | DAT_015489d0
        ;   Label: caseD_0
    ADD ECX,0x15489d4                   ; 0045372a
    CMP ECX,EDX                         ; 00453730
    JZ 0x00453744                       ; 00453732
        ;   XREF to: 00453744 (CONDITIONAL_JUMP)  ; LAB_00453744
    MOV EAX,dword ptr [EDX]             ; 00453734 | DAT_01548910
    MOV dword ptr [ECX],EAX             ; 00453736 | DAT_015489d4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453738 | DAT_01548914
    MOV dword ptr [ECX + 0x4],EAX       ; 0045373b | DAT_015489d8
    MOV EAX,dword ptr [EDX + 0x8]       ; 0045373e | DAT_01548918
    MOV dword ptr [ECX + 0x8],EAX       ; 00453741 | DAT_015489dc
    INC dword ptr [0x015489d0]          ; 00453744 | DAT_015489d0
        ;   Label: LAB_00453744
    MOV EDX,dword ptr [0x0154890c]      ; 0045374a | DAT_0154890c
        ;   Label: caseD_3
    INC EBX                             ; 00453750
    ADD ESI,0xc                         ; 00453751
    CMP EBX,EDX                         ; 00453754
    JL 0x004536da                       ; 00453756
        ;   XREF to: 004536da (CONDITIONAL_JUMP)  ; LAB_004536da
    MOV ECX,dword ptr [0x015489d0]      ; 00453758 | DAT_015489d0
        ;   Label: LAB_00453758
    CMP ECX,0x3                         ; 0045375e
    JL 0x0045380b                       ; 00453761
        ;   XREF to: 0045380b (CONDITIONAL_JUMP)  ; LAB_0045380b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00453767
    MOV EDX,dword ptr [EDX + 0x8]       ; 0045376a
    XOR ESI,ESI                         ; 0045376d
    MOV dword ptr [ESP + 0xc],EDX       ; 0045376f
    TEST ECX,ECX                        ; 00453773
    JLE 0x004537fe                      ; 00453775
        ;   XREF to: 004537fe (CONDITIONAL_JUMP)  ; LAB_004537fe
    MOV EBX,0x15489d4                   ; 0045377b
    MOV EDI,dword ptr [0x015489d0]      ; 00453780 | DAT_015489d0
        ;   Label: LAB_00453780
    LEA ECX,[ESI + 0x1]                 ; 00453786
    CMP ECX,EDI                         ; 00453789
    JNZ 0x0045378f                      ; 0045378b
        ;   XREF to: 0045378f (CONDITIONAL_JUMP)  ; LAB_0045378f
    XOR ECX,EDI                         ; 0045378d
    IMUL ECX,ECX,0xc                    ; 0045378f
        ;   Label: LAB_0045378f
    FLD float ptr [EBX + 0x8]           ; 00453792 | DAT_015489dc | DAT_015489e8
    MOV EDI,0x15489d4                   ; 00453795
    MOV EDX,EBX                         ; 0045379a
    ADD EDI,ECX                         ; 0045379c
    XOR ECX,ECX                         ; 0045379e
    FCOMP float ptr [ESP + 0xc]         ; 004537a0
    FNSTSW AX                           ; 004537a4
    SAHF                                ; 004537a6
    JBE 0x004537ae                      ; 004537a7
        ;   XREF to: 004537ae (CONDITIONAL_JUMP)  ; LAB_004537ae
    MOV ECX,0x1                         ; 004537a9
    FLD float ptr [EDI + 0x8]           ; 004537ae | DAT_015489dc | DAT_015489f4
        ;   Label: LAB_004537ae
    FCOMP float ptr [ESP + 0xc]         ; 004537b1
    FNSTSW AX                           ; 004537b5
    SAHF                                ; 004537b7
    JBE 0x004537bd                      ; 004537b8
        ;   XREF to: 004537bd (CONDITIONAL_JUMP)  ; LAB_004537bd
    OR CL,0x2                           ; 004537ba
    CMP ECX,0x3                         ; 004537bd
        ;   Label: LAB_004537bd
    JA 0x004537f0                       ; 004537c0
        ;   XREF to: 004537f0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x453218]  ; 004537c2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01548a94],0xc ; 004537c9 | DAT_01548a94
        ;   Label: caseD_0
    ADD ECX,0x1548a98                   ; 004537d0
    CMP ECX,EDX                         ; 004537d6
    JZ 0x004537ea                       ; 004537d8
        ;   XREF to: 004537ea (CONDITIONAL_JUMP)  ; LAB_004537ea
    MOV EAX,dword ptr [EDX]             ; 004537da | DAT_015489d4
    MOV dword ptr [ECX],EAX             ; 004537dc
    MOV EAX,dword ptr [EDX + 0x4]       ; 004537de | DAT_015489d8
    MOV dword ptr [ECX + 0x4],EAX       ; 004537e1
    MOV EAX,dword ptr [EDX + 0x8]       ; 004537e4 | DAT_015489dc
    MOV dword ptr [ECX + 0x8],EAX       ; 004537e7
    INC dword ptr [0x01548a94]          ; 004537ea | DAT_01548a94
        ;   Label: LAB_004537ea
    MOV EDX,dword ptr [0x015489d0]      ; 004537f0 | DAT_015489d0
        ;   Label: caseD_3
    INC ESI                             ; 004537f6
    ADD EBX,0xc                         ; 004537f7
    CMP ESI,EDX                         ; 004537fa
    JL 0x00453780                       ; 004537fc
        ;   XREF to: 00453780 (CONDITIONAL_JUMP)  ; LAB_00453780
    CMP dword ptr [0x01548a94],0x3      ; 004537fe | DAT_01548a94
        ;   Label: LAB_004537fe
    JGE 0x004533d5                      ; 00453805
        ;   XREF to: 004533d5 (CONDITIONAL_JUMP)  ; LAB_004533d5
    XOR ECX,ECX                         ; 0045380b
        ;   Label: LAB_0045380b
    MOV EAX,ECX                         ; 0045380d
    MOV ESP,EBP                         ; 0045380f
    POP EBP                             ; 00453811
    POP EDI                             ; 00453812
    POP ESI                             ; 00453813
    POP EBX                             ; 00453814
    RET                                 ; 00453815
    IMUL ECX,dword ptr [0x015486c0],0xc ; 00453816 | DAT_015486c0
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 0045381d
    SUB ESP,0x8                         ; 00453821
    FCHS                                ; 00453824
    FSTP double ptr [ESP]               ; 00453826
    PUSH 0x0                            ; 00453829
    PUSH 0x0                            ; 0045382b
    PUSH 0x3ff00000                     ; 0045382d
    PUSH 0x0                            ; 00453832
    PUSH 0x0                            ; 00453834
    PUSH 0x0                            ; 00453836
    ADD ECX,0x15486c4                   ; 00453838
    PUSH ECX                            ; 0045383e
    PUSH EDX                            ; 0045383f
    PUSH EDI                            ; 00453840
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453841
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x015486c0]      ; 00453846 | DAT_015486c0
    INC EDX                             ; 0045384c
    ADD ESP,0x2c                        ; 0045384d
    MOV dword ptr [0x015486c0],EDX      ; 00453850 | DAT_015486c0
    JMP 0x004534bc                      ; 00453856
        ;   XREF to: 004534bc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x015486c0],0xc ; 0045385b | DAT_015486c0
        ;   Label: caseD_2
    ADD ECX,0x15486c4                   ; 00453862
    CMP ECX,EDX                         ; 00453868
    JZ 0x0045387c                       ; 0045386a
        ;   XREF to: 0045387c (CONDITIONAL_JUMP)  ; LAB_0045387c
    MOV EAX,dword ptr [EDX]             ; 0045386c
    MOV dword ptr [ECX],EAX             ; 0045386e | DAT_015486c4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453870
    MOV dword ptr [ECX + 0x4],EAX       ; 00453873 | DAT_015486c8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453876
    MOV dword ptr [ECX + 0x8],EAX       ; 00453879 | DAT_015486cc
    MOV ECX,dword ptr [0x015486c0]      ; 0045387c | DAT_015486c0
        ;   Label: LAB_0045387c
    INC ECX                             ; 00453882
    MOV dword ptr [0x015486c0],ECX      ; 00453883 | DAT_015486c0
    IMUL ECX,ECX,0xc                    ; 00453889
    FLD float ptr [ESP + 0x14]          ; 0045388c
    SUB ESP,0x8                         ; 00453890
    FCHS                                ; 00453893
    FSTP double ptr [ESP]               ; 00453895
    PUSH 0x0                            ; 00453898
    PUSH 0x0                            ; 0045389a
    PUSH 0x3ff00000                     ; 0045389c
    PUSH 0x0                            ; 004538a1
    PUSH 0x0                            ; 004538a3
    PUSH 0x0                            ; 004538a5
    ADD ECX,0x15486c4                   ; 004538a7
    PUSH ECX                            ; 004538ad
    PUSH EDI                            ; 004538ae
    PUSH EDX                            ; 004538af
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 004538b0
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x015486c0]      ; 004538b5 | DAT_015486c0
    INC EDX                             ; 004538bb
    ADD ESP,0x2c                        ; 004538bc
    MOV dword ptr [0x015486c0],EDX      ; 004538bf | DAT_015486c0
    JMP 0x004534bc                      ; 004538c5
        ;   XREF to: 004534bc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01548784],0xc ; 004538ca | DAT_01548784
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 004538d1
    SUB ESP,0x8                         ; 004538d4
    FSTP double ptr [ESP]               ; 004538d7
    PUSH 0x0                            ; 004538da
    PUSH 0x0                            ; 004538dc
    PUSH 0xbff00000                     ; 004538de
    PUSH 0x0                            ; 004538e3
    PUSH 0x0                            ; 004538e5
    PUSH 0x0                            ; 004538e7
    ADD ECX,0x1548788                   ; 004538e9
    PUSH ECX                            ; 004538ef
    PUSH EDX                            ; 004538f0 | DAT_015486c4
    PUSH EDI                            ; 004538f1
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 004538f2
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x01548784]      ; 004538f7 | DAT_01548784
    INC EDX                             ; 004538fd
    ADD ESP,0x2c                        ; 004538fe
    MOV dword ptr [0x01548784],EDX      ; 00453901 | DAT_01548784
    JMP 0x0045355e                      ; 00453907
        ;   XREF to: 0045355e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01548784],0xc ; 0045390c | DAT_01548784
        ;   Label: caseD_2
    ADD ECX,0x1548788                   ; 00453913
    CMP ECX,EDX                         ; 00453919
    JZ 0x0045392d                       ; 0045391b
        ;   XREF to: 0045392d (CONDITIONAL_JUMP)  ; LAB_0045392d
    MOV EAX,dword ptr [EDX]             ; 0045391d | DAT_015486c4
    MOV dword ptr [ECX],EAX             ; 0045391f | DAT_01548788
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453921 | DAT_015486c8
    MOV dword ptr [ECX + 0x4],EAX       ; 00453924 | DAT_0154878c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453927 | DAT_015486cc
    MOV dword ptr [ECX + 0x8],EAX       ; 0045392a | DAT_01548790
    MOV ECX,dword ptr [0x01548784]      ; 0045392d | DAT_01548784
        ;   Label: LAB_0045392d
    INC ECX                             ; 00453933
    MOV dword ptr [0x01548784],ECX      ; 00453934 | DAT_01548784
    IMUL ECX,ECX,0xc                    ; 0045393a
    FLD float ptr [ESP]                 ; 0045393d
    SUB ESP,0x8                         ; 00453940
    FSTP double ptr [ESP]               ; 00453943
    PUSH 0x0                            ; 00453946
    PUSH 0x0                            ; 00453948
    PUSH 0xbff00000                     ; 0045394a
    PUSH 0x0                            ; 0045394f
    PUSH 0x0                            ; 00453951
    PUSH 0x0                            ; 00453953
    ADD ECX,0x1548788                   ; 00453955
    PUSH ECX                            ; 0045395b
    PUSH EDI                            ; 0045395c
    PUSH EDX                            ; 0045395d | DAT_015486c4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 0045395e
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x01548784]      ; 00453963 | DAT_01548784
    INC EDX                             ; 00453969
    ADD ESP,0x2c                        ; 0045396a
    MOV dword ptr [0x01548784],EDX      ; 0045396d | DAT_01548784
    JMP 0x0045355e                      ; 00453973
        ;   XREF to: 0045355e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01548848],0xc ; 00453978 | DAT_01548848
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0045397f
    SUB ESP,0x8                         ; 00453983
    FCHS                                ; 00453986
    FSTP double ptr [ESP]               ; 00453988
    PUSH 0x0                            ; 0045398b
    PUSH 0x0                            ; 0045398d
    PUSH 0x0                            ; 0045398f
    PUSH 0x0                            ; 00453991
    PUSH 0x3ff00000                     ; 00453993
    PUSH 0x0                            ; 00453998
    ADD ECX,0x154884c                   ; 0045399a
    PUSH ECX                            ; 004539a0
    PUSH EDX                            ; 004539a1 | DAT_01548788
    PUSH EDI                            ; 004539a2
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 004539a3
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x01548848]      ; 004539a8 | DAT_01548848
    INC EDX                             ; 004539ae
    ADD ESP,0x2c                        ; 004539af
    MOV dword ptr [0x01548848],EDX      ; 004539b2 | DAT_01548848
    JMP 0x00453601                      ; 004539b8
        ;   XREF to: 00453601 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01548848],0xc ; 004539bd | DAT_01548848
        ;   Label: caseD_2
    ADD ECX,0x154884c                   ; 004539c4
    CMP ECX,EDX                         ; 004539ca
    JZ 0x004539de                       ; 004539cc
        ;   XREF to: 004539de (CONDITIONAL_JUMP)  ; LAB_004539de
    MOV EAX,dword ptr [EDX]             ; 004539ce | DAT_01548788
    MOV dword ptr [ECX],EAX             ; 004539d0 | DAT_0154884c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004539d2 | DAT_0154878c
    MOV dword ptr [ECX + 0x4],EAX       ; 004539d5 | DAT_01548850
    MOV EAX,dword ptr [EDX + 0x8]       ; 004539d8 | DAT_01548790
    MOV dword ptr [ECX + 0x8],EAX       ; 004539db | DAT_01548854
    MOV ECX,dword ptr [0x01548848]      ; 004539de | DAT_01548848
        ;   Label: LAB_004539de
    INC ECX                             ; 004539e4
    MOV dword ptr [0x01548848],ECX      ; 004539e5 | DAT_01548848
    IMUL ECX,ECX,0xc                    ; 004539eb
    FLD float ptr [ESP + 0x18]          ; 004539ee
    SUB ESP,0x8                         ; 004539f2
    FCHS                                ; 004539f5
    FSTP double ptr [ESP]               ; 004539f7
    PUSH 0x0                            ; 004539fa
    PUSH 0x0                            ; 004539fc
    PUSH 0x0                            ; 004539fe
    PUSH 0x0                            ; 00453a00
    PUSH 0x3ff00000                     ; 00453a02
    PUSH 0x0                            ; 00453a07
    ADD ECX,0x154884c                   ; 00453a09
    PUSH ECX                            ; 00453a0f
    PUSH EDI                            ; 00453a10
    PUSH EDX                            ; 00453a11 | DAT_01548788
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453a12
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x01548848]      ; 00453a17 | DAT_01548848
    INC EDX                             ; 00453a1d
    ADD ESP,0x2c                        ; 00453a1e
    MOV dword ptr [0x01548848],EDX      ; 00453a21 | DAT_01548848
    JMP 0x00453601                      ; 00453a27
        ;   XREF to: 00453601 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0154890c],0xc ; 00453a2c | DAT_0154890c
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 00453a33
    SUB ESP,0x8                         ; 00453a37
    FSTP double ptr [ESP]               ; 00453a3a
    PUSH 0x0                            ; 00453a3d
    PUSH 0x0                            ; 00453a3f
    PUSH 0x0                            ; 00453a41
    PUSH 0x0                            ; 00453a43
    PUSH 0xbff00000                     ; 00453a45
    PUSH 0x0                            ; 00453a4a
    ADD ECX,0x1548910                   ; 00453a4c
    PUSH ECX                            ; 00453a52
    PUSH EDX                            ; 00453a53 | DAT_0154884c
    PUSH EDI                            ; 00453a54
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453a55
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x0154890c]      ; 00453a5a | DAT_0154890c
    INC EDX                             ; 00453a60
    ADD ESP,0x2c                        ; 00453a61
    MOV dword ptr [0x0154890c],EDX      ; 00453a64 | DAT_0154890c
    JMP 0x004536a4                      ; 00453a6a
        ;   XREF to: 004536a4 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0154890c],0xc ; 00453a6f | DAT_0154890c
        ;   Label: caseD_2
    ADD ECX,0x1548910                   ; 00453a76
    CMP ECX,EDX                         ; 00453a7c
    JZ 0x00453a90                       ; 00453a7e
        ;   XREF to: 00453a90 (CONDITIONAL_JUMP)  ; LAB_00453a90
    MOV EAX,dword ptr [EDX]             ; 00453a80 | DAT_0154884c
    MOV dword ptr [ECX],EAX             ; 00453a82 | DAT_01548910
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453a84 | DAT_01548850
    MOV dword ptr [ECX + 0x4],EAX       ; 00453a87 | DAT_01548914
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453a8a | DAT_01548854
    MOV dword ptr [ECX + 0x8],EAX       ; 00453a8d | DAT_01548918
    MOV ECX,dword ptr [0x0154890c]      ; 00453a90 | DAT_0154890c
        ;   Label: LAB_00453a90
    INC ECX                             ; 00453a96
    MOV dword ptr [0x0154890c],ECX      ; 00453a97 | DAT_0154890c
    IMUL ECX,ECX,0xc                    ; 00453a9d
    FLD float ptr [ESP + 0x4]           ; 00453aa0
    SUB ESP,0x8                         ; 00453aa4
    FSTP double ptr [ESP]               ; 00453aa7
    PUSH 0x0                            ; 00453aaa
    PUSH 0x0                            ; 00453aac
    PUSH 0x0                            ; 00453aae
    PUSH 0x0                            ; 00453ab0
    PUSH 0xbff00000                     ; 00453ab2
    PUSH 0x0                            ; 00453ab7
    ADD ECX,0x1548910                   ; 00453ab9
    PUSH ECX                            ; 00453abf
    PUSH EDI                            ; 00453ac0
    PUSH EDX                            ; 00453ac1 | DAT_0154884c
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453ac2
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x0154890c]      ; 00453ac7 | DAT_0154890c
    INC EDX                             ; 00453acd
    ADD ESP,0x2c                        ; 00453ace
    MOV dword ptr [0x0154890c],EDX      ; 00453ad1 | DAT_0154890c
    JMP 0x004536a4                      ; 00453ad7
        ;   XREF to: 004536a4 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x015489d0],0xc ; 00453adc | DAT_015489d0
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 00453ae3
    SUB ESP,0x8                         ; 00453ae7
    FSTP double ptr [ESP]               ; 00453aea
    PUSH 0xbff00000                     ; 00453aed
    PUSH 0x0                            ; 00453af2
    PUSH 0x0                            ; 00453af4
    PUSH 0x0                            ; 00453af6
    PUSH 0x0                            ; 00453af8
    PUSH 0x0                            ; 00453afa
    ADD ECX,0x15489d4                   ; 00453afc
    PUSH ECX                            ; 00453b02
    PUSH EDX                            ; 00453b03 | DAT_01548910
    PUSH EDI                            ; 00453b04
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453b05
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x015489d0]      ; 00453b0a | DAT_015489d0
    INC EDX                             ; 00453b10
    ADD ESP,0x2c                        ; 00453b11
    MOV dword ptr [0x015489d0],EDX      ; 00453b14 | DAT_015489d0
    JMP 0x0045374a                      ; 00453b1a
        ;   XREF to: 0045374a (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x015489d0],0xc ; 00453b1f | DAT_015489d0
        ;   Label: caseD_2
    ADD ECX,0x15489d4                   ; 00453b26
    CMP ECX,EDX                         ; 00453b2c
    JZ 0x00453b40                       ; 00453b2e
        ;   XREF to: 00453b40 (CONDITIONAL_JUMP)  ; LAB_00453b40
    MOV EAX,dword ptr [EDX]             ; 00453b30 | DAT_01548910
    MOV dword ptr [ECX],EAX             ; 00453b32 | DAT_015489d4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453b34 | DAT_01548914
    MOV dword ptr [ECX + 0x4],EAX       ; 00453b37 | DAT_015489d8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453b3a | DAT_01548918
    MOV dword ptr [ECX + 0x8],EAX       ; 00453b3d | DAT_015489dc
    MOV ECX,dword ptr [0x015489d0]      ; 00453b40 | DAT_015489d0
        ;   Label: LAB_00453b40
    INC ECX                             ; 00453b46
    MOV dword ptr [0x015489d0],ECX      ; 00453b47 | DAT_015489d0
    IMUL ECX,ECX,0xc                    ; 00453b4d
    FLD float ptr [ESP + 0x8]           ; 00453b50
    SUB ESP,0x8                         ; 00453b54
    FSTP double ptr [ESP]               ; 00453b57
    PUSH 0xbff00000                     ; 00453b5a
    PUSH 0x0                            ; 00453b5f
    PUSH 0x0                            ; 00453b61
    PUSH 0x0                            ; 00453b63
    PUSH 0x0                            ; 00453b65
    PUSH 0x0                            ; 00453b67
    ADD ECX,0x15489d4                   ; 00453b69
    PUSH ECX                            ; 00453b6f
    PUSH EDI                            ; 00453b70
    PUSH EDX                            ; 00453b71 | DAT_01548910
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453b72
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x015489d0]      ; 00453b77 | DAT_015489d0
    INC EDX                             ; 00453b7d
    ADD ESP,0x2c                        ; 00453b7e
    MOV dword ptr [0x015489d0],EDX      ; 00453b81 | DAT_015489d0
    JMP 0x0045374a                      ; 00453b87
        ;   XREF to: 0045374a (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01548a94],0xc ; 00453b8c | DAT_01548a94
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 00453b93
    SUB ESP,0x8                         ; 00453b97
    FSTP double ptr [ESP]               ; 00453b9a
    PUSH 0xbff00000                     ; 00453b9d
    PUSH 0x0                            ; 00453ba2
    PUSH 0x0                            ; 00453ba4
    PUSH 0x0                            ; 00453ba6
    PUSH 0x0                            ; 00453ba8
    PUSH 0x0                            ; 00453baa
    ADD ECX,0x1548a98                   ; 00453bac
    PUSH ECX                            ; 00453bb2
    PUSH EDX                            ; 00453bb3 | DAT_015489d4
    PUSH EDI                            ; 00453bb4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453bb5
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x01548a94]      ; 00453bba | DAT_01548a94
    INC EDX                             ; 00453bc0
    ADD ESP,0x2c                        ; 00453bc1
    MOV dword ptr [0x01548a94],EDX      ; 00453bc4 | DAT_01548a94
    JMP 0x004537f0                      ; 00453bca
        ;   XREF to: 004537f0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01548a94],0xc ; 00453bcf | DAT_01548a94
        ;   Label: caseD_2
    ADD ECX,0x1548a98                   ; 00453bd6
    CMP ECX,EDX                         ; 00453bdc
    JZ 0x00453bf0                       ; 00453bde
        ;   XREF to: 00453bf0 (CONDITIONAL_JUMP)  ; LAB_00453bf0
    MOV EAX,dword ptr [EDX]             ; 00453be0 | DAT_015489d4
    MOV dword ptr [ECX],EAX             ; 00453be2
    MOV EAX,dword ptr [EDX + 0x4]       ; 00453be4 | DAT_015489d8
    MOV dword ptr [ECX + 0x4],EAX       ; 00453be7
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453bea | DAT_015489dc
    MOV dword ptr [ECX + 0x8],EAX       ; 00453bed
    MOV ECX,dword ptr [0x01548a94]      ; 00453bf0 | DAT_01548a94
        ;   Label: LAB_00453bf0
    INC ECX                             ; 00453bf6
    MOV dword ptr [0x01548a94],ECX      ; 00453bf7 | DAT_01548a94
    IMUL ECX,ECX,0xc                    ; 00453bfd
    FLD float ptr [ESP + 0xc]           ; 00453c00
    SUB ESP,0x8                         ; 00453c04
    FSTP double ptr [ESP]               ; 00453c07
    PUSH 0xbff00000                     ; 00453c0a
    PUSH 0x0                            ; 00453c0f
    PUSH 0x0                            ; 00453c11
    PUSH 0x0                            ; 00453c13
    PUSH 0x0                            ; 00453c15
    PUSH 0x0                            ; 00453c17
    ADD ECX,0x1548a98                   ; 00453c19
    PUSH ECX                            ; 00453c1f
    PUSH EDI                            ; 00453c20
    PUSH EDX                            ; 00453c21 | DAT_015489d4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004515b0 ; 00453c22
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_004515b0()
    MOV EDX,dword ptr [0x01548a94]      ; 00453c27 | DAT_01548a94
    INC EDX                             ; 00453c2d
    ADD ESP,0x2c                        ; 00453c2e
    MOV dword ptr [0x01548a94],EDX      ; 00453c31 | DAT_01548a94
    JMP 0x004537f0                      ; 00453c37
        ;   XREF to: 004537f0 (UNCONDITIONAL_JUMP)  ; caseD_3

