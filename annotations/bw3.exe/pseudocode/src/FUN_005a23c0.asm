; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a23c0(int *param_1,int param_2,code *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0046d330 at 0046d3ab
;
; Referenced Globals:
;   void* switchdataD_005a2398 = 005a2437
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02d24d80
;   undefined4 DAT_02d24d84
;   undefined4 DAT_02d24dd4
;   undefined4 DAT_02d25284
;   undefined4 DAT_02d25288
;
; Called Functions:
;   FUN_00515920
;   FUN_00515990
;   FUN_00515a10
;   FUN_00515a80
;   FUN_00515ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a23c0
        ;   Label: FUN_005a23c0
    PUSH ESI                            ; 005a23c1
    PUSH EDI                            ; 005a23c2
    PUSH EBP                            ; 005a23c3
    SUB ESP,0x10                        ; 005a23c4
    MOV ESI,dword ptr [0x02d24d80]      ; 005a23c7 | DAT_02d24d80
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a23cd
    MOV ECX,dword ptr [ESP + 0x24]      ; 005a23d1
    XOR EDI,EDI                         ; 005a23d5
    TEST EDX,EDX                        ; 005a23d7
    JLE 0x005a23ff                      ; 005a23d9
        ;   XREF to: 005a23ff (CONDITIONAL_JUMP)  ; LAB_005a23ff
    MOV AH,byte ptr [ECX + 0x13]        ; 005a23db
        ;   Label: LAB_005a23db
    MOV dword ptr [0x02d24d80],ESI      ; 005a23de | DAT_02d24d80
    TEST AH,0x80                        ; 005a23e4
    JNZ 0x005a25c2                      ; 005a23e7
        ;   XREF to: 005a25c2 (CONDITIONAL_JUMP)  ; LAB_005a25c2
    MOV ESI,dword ptr [0x02d24d80]      ; 005a23ed | DAT_02d24d80
        ;   Label: LAB_005a23ed
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a23f3
    INC EDI                             ; 005a23f7
    ADD ECX,0x30                        ; 005a23f8
    CMP EDI,EBX                         ; 005a23fb
    JL 0x005a23db                       ; 005a23fd
        ;   XREF to: 005a23db (CONDITIONAL_JUMP)  ; LAB_005a23db
    MOV EDI,dword ptr [0x007303fc]      ; 005a23ff | DAT_007303fc
        ;   Label: LAB_005a23ff
    MOV dword ptr [0x02d24d80],ESI      ; 005a2405 | DAT_02d24d80
    TEST EDI,EDI                        ; 005a240b
    JNZ 0x005a260e                      ; 005a240d
        ;   XREF to: 005a260e (CONDITIONAL_JUMP)  ; LAB_005a260e
    MOV EDX,dword ptr [0x01ed3198]      ; 005a2413 | DAT_01ed3198
        ;   Label: LAB_005a2413
    MOV ESI,dword ptr [0x02d24d80]      ; 005a2419 | DAT_02d24d80
    INC EDX                             ; 005a241f
    MOV EAX,[0x01c6e2b8]                ; 005a2420 | DAT_01c6e2b8
    MOV dword ptr [0x01ed3198],EDX      ; 005a2425 | DAT_01ed3198
    CMP EAX,0x6                         ; 005a242b
    JA 0x005a2437                       ; 005a242e
        ;   XREF to: 005a2437 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x5a2398]  ; 005a2430 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,0x4b0                       ; 005a2437
        ;   Label: caseD_0
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a243c
    XOR EBP,EBP                         ; 005a2440
    XOR ESI,ESI                         ; 005a2442
    MOV dword ptr [0x02d25288],EBP      ; 005a2444 | DAT_02d25288
    MOV dword ptr [ESP + 0x8],EBP       ; 005a244a
    MOV dword ptr [0x02d25284],EDI      ; 005a244e | DAT_02d25284
    TEST EDX,EDX                        ; 005a2454
    JLE 0x005a24ae                      ; 005a2456
        ;   XREF to: 005a24ae (CONDITIONAL_JUMP)  ; LAB_005a24ae
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a2458
        ;   Label: LAB_005a2458
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a245c
    INC EAX                             ; 005a2460
    CMP EAX,EDI                         ; 005a2461
    JL 0x005a2467                       ; 005a2463
        ;   XREF to: 005a2467 (CONDITIONAL_JUMP)  ; LAB_005a2467
    XOR EAX,EAX                         ; 005a2465
    IMUL EAX,EAX,0x30                   ; 005a2467
        ;   Label: LAB_005a2467
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a246a
    MOV EBP,dword ptr [ESP + 0x8]       ; 005a246e
    ADD EDX,EAX                         ; 005a2472
    IMUL EAX,EBP,0x30                   ; 005a2474
    MOV dword ptr [ESP],EDX             ; 005a2477
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a247a
    ADD EDX,EAX                         ; 005a247e
    MOV EBP,dword ptr [ESP]             ; 005a2480
    MOV dword ptr [ESP + 0x4],EDX       ; 005a2483
    MOV EDI,EDX                         ; 005a2487
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a2489
    MOV EDX,dword ptr [EDX + 0x14]      ; 005a248c
    SAR EAX,0x10                        ; 005a248f
    SAR EDX,0x10                        ; 005a2492
    CMP EDX,EAX                         ; 005a2495
    JNZ 0x005a26b4                      ; 005a2497
        ;   XREF to: 005a26b4 (CONDITIONAL_JUMP)  ; LAB_005a26b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a249d
        ;   Label: LAB_005a249d
    INC ECX                             ; 005a24a1
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a24a2
    MOV dword ptr [ESP + 0x8],ECX       ; 005a24a6
    CMP ECX,EBX                         ; 005a24aa
    JL 0x005a2458                       ; 005a24ac
        ;   XREF to: 005a2458 (CONDITIONAL_JUMP)  ; LAB_005a2458
    MOV EAX,0x2d24d84                   ; 005a24ae
        ;   Label: LAB_005a24ae
    MOV EDI,dword ptr [0x02d25284]      ; 005a24b3 | DAT_02d25284
    XOR EDX,EDX                         ; 005a24b9
    TEST ESI,ESI                        ; 005a24bb
    JLE 0x005a27cd                      ; 005a24bd
        ;   XREF to: 005a27cd (CONDITIONAL_JUMP)  ; LAB_005a27cd
    CMP EDI,dword ptr [EAX]             ; 005a24c3 | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a24c3
    JNZ 0x005a27c1                      ; 005a24c5
        ;   XREF to: 005a27c1 (CONDITIONAL_JUMP)  ; LAB_005a27c1
    TEST EAX,EAX                        ; 005a24cb
    JZ 0x005a27c1                       ; 005a24cd
        ;   XREF to: 005a27c1 (CONDITIONAL_JUMP)  ; LAB_005a27c1
    MOV EBP,EAX                         ; 005a24d3
        ;   Label: LAB_005a24d3
    MOV dword ptr [0x02d24d80],ESI      ; 005a24d5 | DAT_02d24d80
    TEST EAX,EAX                        ; 005a24db
    JZ 0x005a25b4                       ; 005a24dd
        ;   XREF to: 005a25b4 (CONDITIONAL_JUMP)  ; LAB_005a25b4
    MOV EBX,dword ptr [0x02d25284]      ; 005a24e3 | DAT_02d25284
    MOV ECX,EAX                         ; 005a24e9
    XOR EDX,EDX                         ; 005a24eb
    MOV EAX,0x2d24d84                   ; 005a24ed
    TEST ESI,ESI                        ; 005a24f2
    JLE 0x005a27e0                      ; 005a24f4
        ;   XREF to: 005a27e0 (CONDITIONAL_JUMP)  ; LAB_005a27e0
    CMP EBX,dword ptr [EAX]             ; 005a24fa | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a24fa
    JNZ 0x005a27d4                      ; 005a24fc
        ;   XREF to: 005a27d4 (CONDITIONAL_JUMP)  ; LAB_005a27d4
    CMP EAX,ECX                         ; 005a2502
    JZ 0x005a27d4                       ; 005a2504
        ;   XREF to: 005a27d4 (CONDITIONAL_JUMP)  ; LAB_005a27d4
    MOV EDI,EAX                         ; 005a250a
        ;   Label: LAB_005a250a
    MOV dword ptr [0x02d24d80],ESI      ; 005a250c | DAT_02d24d80
    TEST EAX,EAX                        ; 005a2512
    JZ 0x005a25b4                       ; 005a2514
        ;   XREF to: 005a25b4 (CONDITIONAL_JUMP)  ; LAB_005a25b4
    MOV EAX,[0x02d25284]                ; 005a251a | DAT_02d25284
    MOV dword ptr [ESP + 0xc],EAX       ; 005a251f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a2523
        ;   Label: LAB_005a2523
    CMP EAX,dword ptr [EBP + 0x4]       ; 005a2527
    JL 0x005a2568                       ; 005a252a
        ;   XREF to: 005a2568 (CONDITIONAL_JUMP)  ; LAB_005a2568
    MOV ESI,dword ptr [0x02d24d80]      ; 005a252c | DAT_02d24d80
    MOV EBX,EAX                         ; 005a2532
    MOV ECX,EDI                         ; 005a2534
    MOV dword ptr [EBP],0xffffffff      ; 005a2536
    XOR EDX,EDX                         ; 005a253d
    MOV EAX,0x2d24d84                   ; 005a253f
    TEST ESI,ESI                        ; 005a2544
    JLE 0x005a27f3                      ; 005a2546
        ;   XREF to: 005a27f3 (CONDITIONAL_JUMP)  ; LAB_005a27f3
    CMP EBX,dword ptr [EAX]             ; 005a254c | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a254c
    JNZ 0x005a27e7                      ; 005a254e
        ;   XREF to: 005a27e7 (CONDITIONAL_JUMP)  ; LAB_005a27e7
    CMP EAX,ECX                         ; 005a2554
    JZ 0x005a27e7                       ; 005a2556
        ;   XREF to: 005a27e7 (CONDITIONAL_JUMP)  ; LAB_005a27e7
    MOV EBP,EAX                         ; 005a255c
        ;   Label: LAB_005a255c
    MOV dword ptr [0x02d24d80],ESI      ; 005a255e | DAT_02d24d80
    TEST EAX,EAX                        ; 005a2564
    JZ 0x005a25b4                       ; 005a2566
        ;   XREF to: 005a25b4 (CONDITIONAL_JUMP)  ; LAB_005a25b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a2568
        ;   Label: LAB_005a2568
    CMP EAX,dword ptr [EDI + 0x4]       ; 005a256c
    JL 0x005a280d                       ; 005a256f
        ;   XREF to: 005a280d (CONDITIONAL_JUMP)  ; LAB_005a280d
    MOV ESI,dword ptr [0x02d24d80]      ; 005a2575 | DAT_02d24d80
    MOV ECX,EAX                         ; 005a257b
    MOV EBX,EBP                         ; 005a257d
    MOV dword ptr [EDI],0xffffffff      ; 005a257f
    XOR EDX,EDX                         ; 005a2585
    MOV EAX,0x2d24d84                   ; 005a2587
    TEST ESI,ESI                        ; 005a258c
    JLE 0x005a2806                      ; 005a258e
        ;   XREF to: 005a2806 (CONDITIONAL_JUMP)  ; LAB_005a2806
    CMP ECX,dword ptr [EAX]             ; 005a2594 | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a2594
    JNZ 0x005a27fa                      ; 005a2596
        ;   XREF to: 005a27fa (CONDITIONAL_JUMP)  ; LAB_005a27fa
    CMP EAX,EBX                         ; 005a259c
    JZ 0x005a27fa                       ; 005a259e
        ;   XREF to: 005a27fa (CONDITIONAL_JUMP)  ; LAB_005a27fa
    MOV EDI,EAX                         ; 005a25a4
        ;   Label: LAB_005a25a4
    MOV dword ptr [0x02d24d80],ESI      ; 005a25a6 | DAT_02d24d80
    TEST EAX,EAX                        ; 005a25ac
    JNZ 0x005a280d                      ; 005a25ae
        ;   XREF to: 005a280d (CONDITIONAL_JUMP)  ; LAB_005a280d
    MOV ESI,dword ptr [0x02d24d80]      ; 005a25b4 | DAT_02d24d80
        ;   Label: LAB_005a25b4
    ADD ESP,0x10                        ; 005a25ba
    POP EBP                             ; 005a25bd
    POP EDI                             ; 005a25be
    POP ESI                             ; 005a25bf
    POP EBX                             ; 005a25c0
    RET                                 ; 005a25c1
    MOV EAX,0x7fffffff                  ; 005a25c2
        ;   Label: LAB_005a25c2
    MOV EDX,EAX                         ; 005a25c7
    MOV EBX,dword ptr [ECX + 0x8]       ; 005a25c9
    SAR EDX,0x1f                        ; 005a25cc
    IDIV EBX                            ; 005a25cf
    MOV dword ptr [ECX + 0xc],EAX       ; 005a25d1
    MOV EDX,dword ptr [0x01c6b598]      ; 005a25d4 | DAT_01c6b598
    MOV EBX,dword ptr [ECX + 0x8]       ; 005a25da
    MOV EAX,dword ptr [ECX]             ; 005a25dd
    IMUL EDX                            ; 005a25df
    IDIV EBX                            ; 005a25e1
    MOV EDX,dword ptr [0x01c6b5a0]      ; 005a25e3 | DAT_01c6b5a0
    ADD EAX,EDX                         ; 005a25e9
    MOV EBX,dword ptr [ECX + 0x8]       ; 005a25eb
    MOV dword ptr [ECX + 0x10],EAX      ; 005a25ee
    MOV EDX,dword ptr [0x01c6b59c]      ; 005a25f1 | DAT_01c6b59c
    MOV EAX,dword ptr [ECX + 0x4]       ; 005a25f7
    IMUL EDX                            ; 005a25fa
    IDIV EBX                            ; 005a25fc
    MOV EDX,dword ptr [0x01c6b5a4]      ; 005a25fe | DAT_01c6b5a4
    ADD EAX,EDX                         ; 005a2604
    MOV dword ptr [ECX + 0x14],EAX      ; 005a2606
    JMP 0x005a23ed                      ; 005a2609
        ;   XREF to: 005a23ed (UNCONDITIONAL_JUMP)  ; LAB_005a23ed
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a260e
        ;   Label: LAB_005a260e
    ADD EAX,0x60                        ; 005a2612
    PUSH EAX                            ; 005a2615
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a2616
    ADD EAX,0x30                        ; 005a261a
    PUSH EAX                            ; 005a261d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005a261e
    PUSH EBP                            ; 005a2622
    CALL FUN_00515ac0                   ; 005a2623
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00515ac0()
    ADD ESP,0xc                         ; 005a2628
    TEST EAX,EAX                        ; 005a262b
    JNZ 0x005a2413                      ; 005a262d
        ;   XREF to: 005a2413 (CONDITIONAL_JUMP)  ; LAB_005a2413
    MOV ESI,dword ptr [0x02d24d80]      ; 005a2633 | DAT_02d24d80
    ADD ESP,0x10                        ; 005a2639
    POP EBP                             ; 005a263c
    POP EDI                             ; 005a263d
    POP ESI                             ; 005a263e
    POP EBX                             ; 005a263f
    RET                                 ; 005a2640
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a2641
        ;   Label: caseD_1
    PUSH EBX                            ; 005a2645
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a2646
    PUSH ESI                            ; 005a264a
    CALL FUN_00515920                   ; 005a264b
        ;   XREF to: 00515920 (UNCONDITIONAL_CALL)  ; undefined FUN_00515920()
    ADD ESP,0x8                         ; 005a2650
    JMP 0x005a2437                      ; 005a2653
        ;   XREF to: 005a2437 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a2658
        ;   Label: caseD_2
    PUSH EDX                            ; 005a265c
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a265d
    PUSH ECX                            ; 005a2661
    CALL FUN_00515990                   ; 005a2662
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; undefined FUN_00515990()
    ADD ESP,0x8                         ; 005a2667
    JMP 0x005a2437                      ; 005a266a
        ;   XREF to: 005a2437 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x28]      ; 005a266f
        ;   Label: caseD_3
    PUSH EBP                            ; 005a2673
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a2674
    PUSH EAX                            ; 005a2678
    CALL FUN_00515a10                   ; 005a2679
        ;   XREF to: 00515a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00515a10()
    ADD ESP,0x8                         ; 005a267e
    JMP 0x005a2437                      ; 005a2681
        ;   XREF to: 005a2437 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a2686
        ;   Label: caseD_5
    PUSH ESI                            ; 005a268a
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a268b
    PUSH EDI                            ; 005a268f
    CALL FUN_00515990                   ; 005a2690
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; undefined FUN_00515990()
    ADD ESP,0x8                         ; 005a2695
    JMP 0x005a2437                      ; 005a2698
        ;   XREF to: 005a2437 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a269d
        ;   Label: caseD_6
    PUSH ECX                            ; 005a26a1
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a26a2
    PUSH EBX                            ; 005a26a6
    CALL FUN_00515a80                   ; 005a26a7
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00515a80()
    ADD ESP,0x8                         ; 005a26ac
    JMP 0x005a2437                      ; 005a26af
        ;   XREF to: 005a2437 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ECX,EDI                         ; 005a26b4
        ;   Label: LAB_005a26b4
    MOV ECX,dword ptr [ECX + 0x14]      ; 005a26b6
    CMP ECX,dword ptr [EBP + 0x14]      ; 005a26b9
    JLE 0x005a26ca                      ; 005a26bc
        ;   XREF to: 005a26ca (CONDITIONAL_JUMP)  ; LAB_005a26ca
    MOV EDI,EBP                         ; 005a26be
    MOV ECX,EDX                         ; 005a26c0
    MOV EBP,dword ptr [ESP + 0x4]       ; 005a26c2
    MOV EDX,EAX                         ; 005a26c6
    MOV EAX,ECX                         ; 005a26c8
    IMUL ECX,ESI,0x50                   ; 005a26ca
        ;   Label: LAB_005a26ca
    ADD ECX,0x2d24d84                   ; 005a26cd
    MOV dword ptr [ECX],EDX             ; 005a26d3 | DAT_02d24d84
    MOV EBX,dword ptr [0x02d25284]      ; 005a26d5 | DAT_02d25284
    MOV dword ptr [ECX + 0x4],EAX       ; 005a26db
    CMP EDX,EBX                         ; 005a26de
    JGE 0x005a26e8                      ; 005a26e0
        ;   XREF to: 005a26e8 (CONDITIONAL_JUMP)  ; LAB_005a26e8
    MOV dword ptr [0x02d25284],EDX      ; 005a26e2 | DAT_02d25284
    CMP EAX,dword ptr [0x02d25288]      ; 005a26e8 | DAT_02d25288
        ;   Label: LAB_005a26e8
    JLE 0x005a26f5                      ; 005a26ee
        ;   XREF to: 005a26f5 (CONDITIONAL_JUMP)  ; LAB_005a26f5
    MOV [0x02d25288],EAX                ; 005a26f0 | DAT_02d25288
    MOV EAX,dword ptr [EDI + 0x10]      ; 005a26f5
        ;   Label: LAB_005a26f5
    MOV dword ptr [ECX + 0x8],EAX       ; 005a26f8
    MOV EAX,dword ptr [EDI + 0x8]       ; 005a26fb
    SHL EAX,0x8                         ; 005a26fe
    MOV dword ptr [ECX + 0x28],EAX      ; 005a2701
    MOV EAX,dword ptr [EDI + 0x20]      ; 005a2704
    MOV dword ptr [ECX + 0x10],EAX      ; 005a2707
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a270a
    SUB EBX,dword ptr [EDI + 0x14]      ; 005a270d
    CMP EBX,0x10000                     ; 005a2710
    JNC 0x005a27b1                      ; 005a2716
        ;   XREF to: 005a27b1 (CONDITIONAL_JUMP)  ; LAB_005a27b1
    XOR EBX,EBX                         ; 005a271c
    MOV EAX,dword ptr [EBP + 0x10]      ; 005a271e
        ;   Label: LAB_005a271e
    MOV EDX,dword ptr [EDI + 0x10]      ; 005a2721
    SUB EAX,EDX                         ; 005a2724
    MOV EDX,EAX                         ; 005a2726
    MOV EAX,EBX                         ; 005a2728
    MOV dword ptr [0x02d24d80],ESI      ; 005a272a | DAT_02d24d80
    IMUL EDX                            ; 005a2730
    SHRD EAX,EDX,0x10                   ; 005a2732
    MOV dword ptr [ECX + 0xc],EAX       ; 005a2736
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a2739
    MOV EDX,dword ptr [EDI + 0x8]       ; 005a273c
    SUB EAX,EDX                         ; 005a273f
    MOV EDX,EAX                         ; 005a2741
    SHL EDX,0x8                         ; 005a2743
    MOV EAX,EBX                         ; 005a2746
    IMUL EDX                            ; 005a2748
    SHRD EAX,EDX,0x10                   ; 005a274a
    MOV dword ptr [ECX + 0x2c],EAX      ; 005a274e
    MOV EDX,dword ptr [EBP + 0x20]      ; 005a2751
    MOV EBP,dword ptr [EDI + 0x20]      ; 005a2754
    MOV EAX,EBX                         ; 005a2757
    SUB EDX,EBP                         ; 005a2759
    IMUL EDX                            ; 005a275b
    SHRD EAX,EDX,0x10                   ; 005a275d
    MOV dword ptr [ECX + 0x14],EAX      ; 005a2761
    MOV EBX,dword ptr [EDI + 0x14]      ; 005a2764
    AND EBX,0xffff                      ; 005a2767
    XOR BX,0xffff                       ; 005a276d
    MOV EDX,dword ptr [ECX + 0xc]       ; 005a2771
    MOV EAX,EBX                         ; 005a2774
    IMUL EDX                            ; 005a2776
    SHRD EAX,EDX,0x10                   ; 005a2778
    ADD dword ptr [ECX + 0x8],EAX       ; 005a277c
    MOV EAX,EBX                         ; 005a277f
    MOV EDX,dword ptr [ECX + 0x2c]      ; 005a2781
    IMUL EDX                            ; 005a2784
    SHRD EAX,EDX,0x10                   ; 005a2786
    MOV EDI,dword ptr [ECX + 0x28]      ; 005a278a
    MOV EDX,dword ptr [ECX + 0x14]      ; 005a278d
    ADD EDI,EAX                         ; 005a2790
    MOV EAX,EBX                         ; 005a2792
    MOV dword ptr [ECX + 0x28],EDI      ; 005a2794
    IMUL EDX                            ; 005a2797
    SHRD EAX,EDX,0x10                   ; 005a2799
    MOV EBP,dword ptr [ECX + 0x10]      ; 005a279d
    MOV ESI,dword ptr [0x02d24d80]      ; 005a27a0 | DAT_02d24d80
    ADD EBP,EAX                         ; 005a27a6
    INC ESI                             ; 005a27a8
    MOV dword ptr [ECX + 0x10],EBP      ; 005a27a9
    JMP 0x005a249d                      ; 005a27ac
        ;   XREF to: 005a249d (UNCONDITIONAL_JUMP)  ; LAB_005a249d
    MOV EAX,0xffffffff                  ; 005a27b1
        ;   Label: LAB_005a27b1
    XOR EDX,EDX                         ; 005a27b6
    DIV EBX                             ; 005a27b8
    MOV EBX,EAX                         ; 005a27ba
    JMP 0x005a271e                      ; 005a27bc
        ;   XREF to: 005a271e (UNCONDITIONAL_JUMP)  ; LAB_005a271e
    INC EDX                             ; 005a27c1
        ;   Label: LAB_005a27c1
    ADD EAX,0x50                        ; 005a27c2
    CMP EDX,ESI                         ; 005a27c5
    JL 0x005a24c3                       ; 005a27c7
        ;   XREF to: 005a24c3 (CONDITIONAL_JUMP)  ; LAB_005a24c3
    XOR EAX,EAX                         ; 005a27cd
        ;   Label: LAB_005a27cd
    JMP 0x005a24d3                      ; 005a27cf
        ;   XREF to: 005a24d3 (UNCONDITIONAL_JUMP)  ; LAB_005a24d3
    INC EDX                             ; 005a27d4
        ;   Label: LAB_005a27d4
    ADD EAX,0x50                        ; 005a27d5
    CMP EDX,ESI                         ; 005a27d8
    JL 0x005a24fa                       ; 005a27da
        ;   XREF to: 005a24fa (CONDITIONAL_JUMP)  ; LAB_005a24fa
    XOR EAX,EAX                         ; 005a27e0
        ;   Label: LAB_005a27e0
    JMP 0x005a250a                      ; 005a27e2
        ;   XREF to: 005a250a (UNCONDITIONAL_JUMP)  ; LAB_005a250a
    INC EDX                             ; 005a27e7
        ;   Label: LAB_005a27e7
    ADD EAX,0x50                        ; 005a27e8
    CMP EDX,ESI                         ; 005a27eb
    JL 0x005a254c                       ; 005a27ed
        ;   XREF to: 005a254c (CONDITIONAL_JUMP)  ; LAB_005a254c
    XOR EAX,EAX                         ; 005a27f3
        ;   Label: LAB_005a27f3
    JMP 0x005a255c                      ; 005a27f5
        ;   XREF to: 005a255c (UNCONDITIONAL_JUMP)  ; LAB_005a255c
    INC EDX                             ; 005a27fa
        ;   Label: LAB_005a27fa
    ADD EAX,0x50                        ; 005a27fb | DAT_02d24dd4
    CMP EDX,ESI                         ; 005a27fe
    JL 0x005a2594                       ; 005a2800
        ;   XREF to: 005a2594 (CONDITIONAL_JUMP)  ; LAB_005a2594
    XOR EAX,EAX                         ; 005a2806
        ;   Label: LAB_005a2806
    JMP 0x005a25a4                      ; 005a2808
        ;   XREF to: 005a25a4 (UNCONDITIONAL_JUMP)  ; LAB_005a25a4
    PUSH EDI                            ; 005a280d
        ;   Label: LAB_005a280d
    PUSH EBP                            ; 005a280e | DAT_02d24d84
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a280f
    PUSH EAX                            ; 005a2813
    CALL dword ptr [ESP + 0x38]         ; 005a2814
    MOV EAX,dword ptr [EBP + 0xc]       ; 005a2818
    ADD dword ptr [EBP + 0x8],EAX       ; 005a281b
    MOV EBX,dword ptr [EBP + 0x28]      ; 005a281e
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005a2821
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a2824
    ADD EBX,EAX                         ; 005a2827
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a2829
    MOV dword ptr [EBP + 0x28],EBX      ; 005a282c
    ADD ECX,EAX                         ; 005a282f
    MOV dword ptr [EBP + 0x10],ECX      ; 005a2831
    ADD ESP,0xc                         ; 005a2834
    MOV EAX,dword ptr [EDI + 0xc]       ; 005a2837
    MOV EBX,dword ptr [EDI + 0x8]       ; 005a283a
    MOV EDX,dword ptr [EDI + 0x28]      ; 005a283d
    MOV ECX,dword ptr [EDI + 0x10]      ; 005a2840
    ADD EBX,EAX                         ; 005a2843
    MOV EAX,dword ptr [EDI + 0x2c]      ; 005a2845
    MOV dword ptr [EDI + 0x8],EBX       ; 005a2848
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a284b
    ADD EDX,EAX                         ; 005a284f
    INC EBX                             ; 005a2851
    MOV EAX,dword ptr [EDI + 0x14]      ; 005a2852
    MOV dword ptr [EDI + 0x28],EDX      ; 005a2855
    ADD ECX,EAX                         ; 005a2858
    MOV dword ptr [ESP + 0xc],EBX       ; 005a285a
    MOV dword ptr [EDI + 0x10],ECX      ; 005a285e
    JMP 0x005a2523                      ; 005a2861
        ;   XREF to: 005a2523 (UNCONDITIONAL_JUMP)  ; LAB_005a2523

