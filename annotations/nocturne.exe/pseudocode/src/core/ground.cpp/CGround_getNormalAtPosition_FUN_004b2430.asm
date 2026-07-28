; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ground_cpp_CGround_getNormalAtPosition_FUN_004b2430(int *param_1,uint param_2,uint param_3)
;
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_004cde90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2430
        ;   Label: core_ground.cpp_CGround_getNormalAtPosition_FUN_004b2430
    PUSH EDI                            ; 004b2431
    PUSH EBP                            ; 004b2432
    SUB ESP,0x54                        ; 004b2433
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004b2436
    MOV EBP,ESI                         ; 004b243a
    MOV ESI,dword ptr [ESP + 0x64]      ; 004b243c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004b2440
    SHL EBX,0x8                         ; 004b2443
    LEA EAX,[EBX + -0x1]                ; 004b2446
    MOV EDX,0x10000                     ; 004b2449
    AND EAX,EDI                         ; 004b244e
    IMUL EDX                            ; 004b2450
    IDIV EBX                            ; 004b2452
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004b2454
    MOV EDX,dword ptr [ESP + 0x68]      ; 004b2457
    SHL EBX,0x8                         ; 004b245b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b245e
    LEA EAX,[EBX + -0x1]                ; 004b2462
    AND EAX,EDX                         ; 004b2465
    MOV EDX,0x10000                     ; 004b2467
    IMUL EDX                            ; 004b246c
    IDIV EBX                            ; 004b246e
    MOV dword ptr [ESP + 0x50],EAX      ; 004b2470
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004b2474
    XOR EDX,EDX                         ; 004b2477
    SHL ECX,0x8                         ; 004b2479
    MOV EAX,EDI                         ; 004b247c
    DIV ECX                             ; 004b247e
    MOV EDI,dword ptr [ESI + 0x8]       ; 004b2480
    AND EDI,EAX                         ; 004b2483
    XOR EDX,EDX                         ; 004b2485
    MOV EAX,dword ptr [ESP + 0x68]      ; 004b2487
    DIV ECX                             ; 004b248b
    MOV EDX,EDI                         ; 004b248d
    MOV ECX,dword ptr [ESI + 0xc]       ; 004b248f
    AND EDX,0x1                         ; 004b2492
    AND EAX,ECX                         ; 004b2495
    MOV dword ptr [ESP + 0x44],EDX      ; 004b2497
    MOV EDX,EAX                         ; 004b249b
    MOV EBX,dword ptr [ESP + 0x44]      ; 004b249d
    AND EDX,0x1                         ; 004b24a1
    LEA ECX,[EAX + 0x1]                 ; 004b24a4
    MOV dword ptr [ESP + 0x44],EDX      ; 004b24a7
    LEA EDX,[EDI + 0x1]                 ; 004b24ab
    CMP EBX,dword ptr [ESP + 0x44]      ; 004b24ae
    JNZ 0x004b25da                      ; 004b24b2
        ;   XREF to: 004b25da (CONDITIONAL_JUMP)  ; LAB_004b25da
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004b24b8
    CMP EBX,dword ptr [ESP + 0x50]      ; 004b24bc
    JLE 0x004b2552                      ; 004b24c0
        ;   XREF to: 004b2552 (CONDITIONAL_JUMP)  ; LAB_004b2552
    MOV EBX,dword ptr [ESI]             ; 004b24c6
    IMUL EBX,EAX                        ; 004b24c8
    MOV EAX,dword ptr [ESI + 0x24]      ; 004b24cb
    MOV dword ptr [ESP + 0x44],EBX      ; 004b24ce
    ADD EBX,EDI                         ; 004b24d2
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004b24d4
    MOV EDI,dword ptr [ESI + 0x20]      ; 004b24d8
    IMUL EBX,EDI                        ; 004b24db
    MOV dword ptr [ESP + 0x3c],EBX      ; 004b24de
    MOV EBX,dword ptr [ESI + 0x8]       ; 004b24e2
    MOV EDI,dword ptr [ESP + 0x44]      ; 004b24e5
    AND EBX,EDX                         ; 004b24e9
    ADD EBX,EDI                         ; 004b24eb
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004b24ed
    IMUL EBX,dword ptr [ESI + 0x20]     ; 004b24f1
    AND ECX,dword ptr [ESI + 0xc]       ; 004b24f5
    IMUL ECX,dword ptr [ESI]            ; 004b24f8
    AND EDX,dword ptr [ESI + 0xc]       ; 004b24fb
    ADD EDX,ECX                         ; 004b24fe
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004b2500
    MOV EDX,dword ptr [ESI + 0x20]      ; 004b2504
    IMUL EDX,EAX                        ; 004b2507
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b250a
    SUB EAX,EBX                         ; 004b250e
    MOV dword ptr [ESP + 0x24],EAX      ; 004b2510
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004b2514
    SHL EAX,0x8                         ; 004b2517
    LEA EDI,[ESP + 0x24]                ; 004b251a
    MOV dword ptr [ESP + 0x28],EAX      ; 004b251e
    LEA EAX,[ESP + 0x24]                ; 004b2522
    SUB EBX,EDX                         ; 004b2526
    PUSH EAX                            ; 004b2528
    LEA ESI,[ESP + 0x10]                ; 004b2529
    MOV dword ptr [ESP + 0x30],EBX      ; 004b252d
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004cde90 ; 004b2531
        ;   XREF to: 004cde90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004cde90()
    LEA ESI,[ESP + 0x10]                ; 004b2536
    ADD ESP,0x4                         ; 004b253a
        ;   Label: LAB_004b253a
    MOVSD ES:EDI,ESI                    ; 004b253d
    MOVSD ES:EDI,ESI                    ; 004b253e
    MOVSD ES:EDI,ESI                    ; 004b253f
    LEA ESI,[ESP + 0x24]                ; 004b2540
    MOV EDI,EBP                         ; 004b2544
    MOVSD ES:EDI,ESI                    ; 004b2546
    MOVSD ES:EDI,ESI                    ; 004b2547
    MOVSD ES:EDI,ESI                    ; 004b2548
    MOV EAX,EBP                         ; 004b2549
    ADD ESP,0x54                        ; 004b254b
    POP EBP                             ; 004b254e
    POP EDI                             ; 004b254f
    POP EBX                             ; 004b2550
    RET                                 ; 004b2551
    IMUL EAX,dword ptr [ESI]            ; 004b2552
        ;   Label: LAB_004b2552
    ADD EAX,EDI                         ; 004b2555
    MOV EBX,dword ptr [ESI + 0x24]      ; 004b2557
    SHL EAX,0x2                         ; 004b255a
    ADD EAX,EBX                         ; 004b255d
    MOV dword ptr [ESP + 0x44],EBX      ; 004b255f
    MOVSX EAX,word ptr [EAX]            ; 004b2563
    MOV EBX,dword ptr [ESI + 0x20]      ; 004b2566
    IMUL EAX,EBX                        ; 004b2569
    MOV dword ptr [ESP + 0x3c],EAX      ; 004b256c
    MOV EAX,dword ptr [ESI + 0xc]       ; 004b2570
    AND EAX,ECX                         ; 004b2573
    IMUL EAX,dword ptr [ESI]            ; 004b2575
    AND EDX,dword ptr [ESI + 0x8]       ; 004b2578
    ADD EDX,EAX                         ; 004b257b
    MOV ECX,dword ptr [ESP + 0x44]      ; 004b257d
    SHL EDX,0x2                         ; 004b2581
    ADD EDX,ECX                         ; 004b2584
    MOVSX EDX,word ptr [EDX]            ; 004b2586
    MOV ECX,dword ptr [ESI + 0x20]      ; 004b2589
    IMUL ECX,EDX                        ; 004b258c
    ADD EAX,EDI                         ; 004b258f
    MOV EBX,dword ptr [ESP + 0x44]      ; 004b2591
    SHL EAX,0x2                         ; 004b2595
    ADD EAX,EBX                         ; 004b2598
    MOV EDI,dword ptr [ESI + 0x20]      ; 004b259a
    MOVSX EDX,word ptr [EAX]            ; 004b259d
    IMUL EDX,EDI                        ; 004b25a0
    MOV EAX,EDX                         ; 004b25a3
    SUB EAX,ECX                         ; 004b25a5
    MOV dword ptr [ESP + 0x24],EAX      ; 004b25a7
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004b25ab
    SHL EAX,0x8                         ; 004b25ae
    MOV dword ptr [ESP + 0x28],EAX      ; 004b25b1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b25b5
    SUB EAX,EDX                         ; 004b25b9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b25bb
    LEA EAX,[ESP + 0x24]                ; 004b25bf
    PUSH EAX                            ; 004b25c3
    LEA ESI,[ESP + 0x34]                ; 004b25c4
    LEA EDI,[ESP + 0x28]                ; 004b25c8
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004cde90 ; 004b25cc
        ;   XREF to: 004cde90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004cde90()
    LEA ESI,[ESP + 0x34]                ; 004b25d1
    JMP 0x004b253a                      ; 004b25d5
        ;   XREF to: 004b253a (UNCONDITIONAL_JUMP)  ; LAB_004b253a
    MOV EBX,0x10000                     ; 004b25da
        ;   Label: LAB_004b25da
    SUB EBX,dword ptr [ESP + 0x4c]      ; 004b25df
    CMP EBX,dword ptr [ESP + 0x50]      ; 004b25e3
    JLE 0x004b2680                      ; 004b25e7
        ;   XREF to: 004b2680 (CONDITIONAL_JUMP)  ; LAB_004b2680
    MOV EBX,dword ptr [ESI]             ; 004b25ed
    IMUL EBX,EAX                        ; 004b25ef
    MOV dword ptr [ESP + 0x44],EBX      ; 004b25f2
    LEA EAX,[EBX + EDI*0x1]             ; 004b25f6
    SHL EAX,0x2                         ; 004b25f9
    MOV EBX,dword ptr [ESI + 0x24]      ; 004b25fc
    ADD EAX,EBX                         ; 004b25ff
    MOV dword ptr [ESP + 0x48],EBX      ; 004b2601
    MOVSX EAX,word ptr [EAX]            ; 004b2605
    MOV EBX,dword ptr [ESI + 0x20]      ; 004b2608
    IMUL EBX,EAX                        ; 004b260b
    AND EDX,dword ptr [ESI + 0x8]       ; 004b260e
    ADD EDX,dword ptr [ESP + 0x44]      ; 004b2611
    MOV EAX,dword ptr [ESP + 0x48]      ; 004b2615
    SHL EDX,0x2                         ; 004b2619
    ADD EDX,EAX                         ; 004b261c
    MOVSX EAX,word ptr [EDX]            ; 004b261e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004b2621
    IMUL EAX,EDX                        ; 004b2624
    MOV dword ptr [ESP + 0x40],EAX      ; 004b2627
    MOV EAX,dword ptr [ESI + 0xc]       ; 004b262b
    MOV EDX,dword ptr [ESI]             ; 004b262e
    AND ECX,EAX                         ; 004b2630
    IMUL ECX,EDX                        ; 004b2632
    ADD EDI,ECX                         ; 004b2635
    MOV ECX,dword ptr [ESP + 0x48]      ; 004b2637
    SHL EDI,0x2                         ; 004b263b
    ADD EDI,ECX                         ; 004b263e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004b2640
    MOVSX EAX,word ptr [EDI]            ; 004b2643
    IMUL EDX,EAX                        ; 004b2646
    MOV EDI,dword ptr [ESP + 0x40]      ; 004b2649
    MOV EAX,EBX                         ; 004b264d
    SUB EAX,EDI                         ; 004b264f
    MOV dword ptr [ESP + 0x24],EAX      ; 004b2651
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004b2655
    SHL EAX,0x8                         ; 004b2658
    SUB EBX,EDX                         ; 004b265b
    MOV dword ptr [ESP + 0x28],EAX      ; 004b265d
    LEA EAX,[ESP + 0x24]                ; 004b2661
    LEA EDI,[ESP + 0x24]                ; 004b2665
    PUSH EAX                            ; 004b2669
    LEA ESI,[ESP + 0x4]                 ; 004b266a
    MOV dword ptr [ESP + 0x30],EBX      ; 004b266e
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004cde90 ; 004b2672
        ;   XREF to: 004cde90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004cde90()
    LEA ESI,[ESP + 0x4]                 ; 004b2677
    JMP 0x004b253a                      ; 004b267b
        ;   XREF to: 004b253a (UNCONDITIONAL_JUMP)  ; LAB_004b253a
    MOV EBX,dword ptr [ESI + 0x8]       ; 004b2680
        ;   Label: LAB_004b2680
    AND EBX,EDX                         ; 004b2683
    MOV dword ptr [ESP + 0x48],EBX      ; 004b2685
    IMUL EAX,dword ptr [ESI]            ; 004b2689
    ADD EAX,dword ptr [ESP + 0x48]      ; 004b268c
    LEA EDX,[EAX*0x4 + 0x0]             ; 004b2690
    MOV EAX,dword ptr [ESI + 0x24]      ; 004b2697
    MOV EBX,dword ptr [ESI + 0x20]      ; 004b269a
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004b269d
    IMUL EBX,EDX                        ; 004b26a1
    MOV dword ptr [ESP + 0x40],EBX      ; 004b26a4
    MOV EBX,dword ptr [ESI + 0xc]       ; 004b26a8
    MOV EDX,dword ptr [ESI]             ; 004b26ab
    AND ECX,EBX                         ; 004b26ad
    IMUL ECX,EDX                        ; 004b26af
    MOV EDX,dword ptr [ESP + 0x48]      ; 004b26b2
    ADD EDX,ECX                         ; 004b26b6
    MOV EBX,dword ptr [ESI + 0x20]      ; 004b26b8
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004b26bb
    IMUL EDX,EBX                        ; 004b26bf
    ADD ECX,EDI                         ; 004b26c2
    MOVSX EAX,word ptr [EAX + ECX*0x4]  ; 004b26c4
    IMUL EAX,EBX                        ; 004b26c8
    SUB EAX,EDX                         ; 004b26cb
    MOV dword ptr [ESP + 0x24],EAX      ; 004b26cd
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004b26d1
    SHL EAX,0x8                         ; 004b26d4
    MOV dword ptr [ESP + 0x28],EAX      ; 004b26d7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004b26db
    SUB EAX,EDX                         ; 004b26df
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b26e1
    LEA EAX,[ESP + 0x24]                ; 004b26e5
    PUSH EAX                            ; 004b26e9
    LEA ESI,[ESP + 0x1c]                ; 004b26ea
    LEA EDI,[ESP + 0x28]                ; 004b26ee
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004cde90 ; 004b26f2
        ;   XREF to: 004cde90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004cde90()
    LEA ESI,[ESP + 0x1c]                ; 004b26f7
    JMP 0x004b253a                      ; 004b26fb
        ;   XREF to: 004b253a (UNCONDITIONAL_JUMP)  ; LAB_004b253a

