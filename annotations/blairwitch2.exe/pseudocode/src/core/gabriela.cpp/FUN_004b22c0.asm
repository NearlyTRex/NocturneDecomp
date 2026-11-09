; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004b22c0(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_core_gabriela_cpp_005d71c3
;   TerminatedCString s_Don_t_know_how_to_carry_005d71d8
;   undefined4 DAT_005d71fb
;   undefined4 DAT_005d7203
;   undefined4 DAT_005d720b
;   undefined4 DAT_007bcc84
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_main.c_FUN_004e4500
;   core_xform.cpp_buildRotationY_FUN_005932c0
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005918a0
;   core_xform.cpp_transformVector3x4InPlace_FUN_005915b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b22c0
        ;   Label: core_gabriela.cpp_FUN_004b22c0
    PUSH EDI                            ; 004b22c1
    PUSH EBP                            ; 004b22c2
    MOV EBP,ESP                         ; 004b22c3
    SUB ESP,0x1dc                       ; 004b22c5
    AND ESP,0xfffffff8                  ; 004b22cb
    MOV EBX,ESI                         ; 004b22ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b22d0
    SHL EAX,0x3                         ; 004b22d3
    MOV ESI,EAX                         ; 004b22d6
    SHL EAX,0x4                         ; 004b22d8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004b22db
    SUB EAX,ESI                         ; 004b22de
    ADD EAX,EDX                         ; 004b22e0
    MOV ESI,dword ptr [EAX + 0x2620]    ; 004b22e2
    MOV EAX,dword ptr [EAX + 0x2618]    ; 004b22e8
    XOR ECX,ECX                         ; 004b22ee
    MOV dword ptr [ESP + 0x1d4],EAX     ; 004b22f0
    MOV dword ptr [ESP + 0x128],ECX     ; 004b22f7
    MOV EAX,[0x007bcc84]                ; 004b22fe | DAT_007bcc84
    MOV dword ptr [ESP + 0x124],ECX     ; 004b2303
    PUSH EAX                            ; 004b230a
    MOV dword ptr [ESP + 0x124],ECX     ; 004b230b
    MOV dword ptr [ESP + 0x144],ECX     ; 004b2312
    PUSH ESI                            ; 004b2319
    MOV dword ptr [ESP + 0x144],ECX     ; 004b231a
    MOV dword ptr [ESP + 0x140],ECX     ; 004b2321
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b2328
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b232d
    MOV dword ptr [ESP + 0x1d8],EAX     ; 004b2330
    TEST EAX,EAX                        ; 004b2337
    JNZ 0x004b24cb                      ; 004b2339
        ;   XREF to: 004b24cb (CONDITIONAL_JUMP)  ; LAB_004b24cb
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b233f
        ;   Label: LAB_004b233f
    TEST EDI,EDI                        ; 004b2342
    JNZ 0x004b2777                      ; 004b2344
        ;   XREF to: 004b2777 (CONDITIONAL_JUMP)  ; LAB_004b2777
    MOV EAX,0xbecccccd                  ; 004b234a
    LEA ESI,[ESP + 0x1b0]               ; 004b234f
    MOV dword ptr [ESP + 0x1b4],EDI     ; 004b2356
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b235d
    LEA EAX,[ESP + 0x1c8]               ; 004b2364
    MOV dword ptr [ESP + 0x1b8],EDI     ; 004b236b
    CMP EAX,ESI                         ; 004b2372
    JZ 0x004b2390                       ; 004b2374
        ;   XREF to: 004b2390 (CONDITIONAL_JUMP)  ; LAB_004b2390
    MOV ESI,0xbecccccd                  ; 004b2376
    MOV dword ptr [ESP + 0x1cc],EDI     ; 004b237b
    MOV dword ptr [ESP + 0x1d0],EDI     ; 004b2382
    MOV dword ptr [ESP + 0x1c8],ESI     ; 004b2389
    MOV ESI,dword ptr [ESP + 0x1d4]     ; 004b2390
        ;   Label: LAB_004b2390
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b2397
    SUB EAX,ESI                         ; 004b239e
    MOV ESI,EAX                         ; 004b23a0
    MOV EAX,dword ptr [EBP + 0x10]      ; 004b23a2
    SHL ESI,0x4                         ; 004b23a5
    ADD EAX,0x1134                      ; 004b23a8
    ADD EAX,ESI                         ; 004b23ad
    PUSH EAX                            ; 004b23af
    LEA EAX,[ESP + 0x1cc]               ; 004b23b0
    PUSH EAX                            ; 004b23b7
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005915b0 ; 004b23b8
        ;   XREF to: 005915b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_005915b0()
    ADD ESP,0x8                         ; 004b23bd
    LEA EAX,[ESP + 0x120]               ; 004b23c0
    PUSH EAX                            ; 004b23c7
    LEA EAX,[ESP + 0x1cc]               ; 004b23c8
    PUSH EAX                            ; 004b23cf
    LEA EAX,[ESP + 0x98]                ; 004b23d0
    PUSH EAX                            ; 004b23d7
    CALL core_xform.cpp_FUN_00591c10    ; 004b23d8
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004b23dd
    LEA EAX,[ESP + 0x90]                ; 004b23e0
    PUSH EAX                            ; 004b23e7
    LEA EAX,[ESP + 0x13c]               ; 004b23e8
    PUSH EAX                            ; 004b23ef
    LEA ESI,[ESP + 0x1ac]               ; 004b23f0
    LEA EDI,[ESP + 0x158]               ; 004b23f7
    CALL core_xform.cpp_FUN_00591530    ; 004b23fe
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x1ac]               ; 004b2403
    ADD ESP,0x8                         ; 004b240a
    MOV ECX,0xc                         ; 004b240d
    FLD float ptr [ESP + 0x1c8]         ; 004b2412
    FLD float ptr [ESP + 0x1cc]         ; 004b2419
    FLD float ptr [ESP + 0x1d0]         ; 004b2420
    FLD float ptr [ESP + 0x9c]          ; 004b2427
    MOVSD ES:EDI,ESI                    ; 004b242e
    MOVSD ES:EDI,ESI                    ; 004b242f
    MOVSD ES:EDI,ESI                    ; 004b2430
    FLD float ptr [ESP + 0xac]          ; 004b2431
    LEA EDI,[ESP + 0x15c]               ; 004b2438
    LEA ESI,[ESP + 0x1bc]               ; 004b243f
    FXCH ST4                            ; 004b2446
    FSUB float ptr [ESP + 0x150]        ; 004b2448
    FXCH ST3                            ; 004b244f
    FSUB float ptr [ESP + 0x154]        ; 004b2451
    FXCH ST2                            ; 004b2458
    FSUB float ptr [ESP + 0x158]        ; 004b245a
    FXCH ST3                            ; 004b2461
    FSTP float ptr [ESP + 0x1bc]        ; 004b2463
    FXCH                                ; 004b246a
    FSTP float ptr [ESP + 0x1c0]        ; 004b246c
    FXCH                                ; 004b2473
    FSTP float ptr [ESP + 0x1c4]        ; 004b2475
    MOVSD ES:EDI,ESI                    ; 004b247c
    MOVSD ES:EDI,ESI                    ; 004b247d
    MOVSD ES:EDI,ESI                    ; 004b247e
    FLD float ptr [ESP + 0xbc]          ; 004b247f
    LEA ESI,[ESP + 0x90]                ; 004b2486
    MOV EDI,EBX                         ; 004b248d
    FXCH                                ; 004b248f
    FADD float ptr [ESP + 0x15c]        ; 004b2491
    FXCH ST2                            ; 004b2498
    FADD float ptr [ESP + 0x160]        ; 004b249a
    FXCH                                ; 004b24a1
    FADD float ptr [ESP + 0x164]        ; 004b24a3
    FXCH ST2                            ; 004b24aa
    FSTP float ptr [ESP + 0x9c]         ; 004b24ac
    FSTP float ptr [ESP + 0xac]         ; 004b24b3
    FSTP float ptr [ESP + 0xbc]         ; 004b24ba
    MOVSD.REP ES:EDI,ESI                ; 004b24c1
    MOV EAX,EBX                         ; 004b24c3
    MOV ESP,EBP                         ; 004b24c5
    POP EBP                             ; 004b24c7
    POP EDI                             ; 004b24c8
    POP EBX                             ; 004b24c9
    RET                                 ; 004b24ca
    PUSH ESI                            ; 004b24cb
        ;   Label: LAB_004b24cb
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004b24cc
    LEA ESI,[ESP + 0xf4]                ; 004b24d2
    LEA EDI,[ESP + 0x10c]               ; 004b24d9
    CALL dword ptr [EAX + 0x24]         ; 004b24e0
    MOV ECX,0x6                         ; 004b24e3
    LEA ESI,[ESP + 0xf4]                ; 004b24e8
    ADD ESP,0x4                         ; 004b24ef
    MOVSD.REP ES:EDI,ESI                ; 004b24f2
    FLD float ptr [ESP + 0x108]         ; 004b24f4
    FLD float ptr [ESP + 0x10c]         ; 004b24fb
    FLD float ptr [ESP + 0x110]         ; 004b2502
    LEA EDI,[ESP + 0x180]               ; 004b2509
    LEA ESI,[ESP + 0x18c]               ; 004b2510
    FXCH ST2                            ; 004b2517
    FADD float ptr [ESP + 0x114]        ; 004b2519
    FXCH                                ; 004b2520
    FADD float ptr [ESP + 0x118]        ; 004b2522
    FXCH ST2                            ; 004b2529
    FADD float ptr [ESP + 0x11c]        ; 004b252b
    FXCH                                ; 004b2532
    FSTP float ptr [ESP + 0x18c]        ; 004b2534
    FXCH                                ; 004b253b
    FSTP float ptr [ESP + 0x190]        ; 004b253d
    FSTP float ptr [ESP + 0x194]        ; 004b2544
    MOVSD ES:EDI,ESI                    ; 004b254b
    MOVSD ES:EDI,ESI                    ; 004b254c
    MOVSD ES:EDI,ESI                    ; 004b254d
    FLD float ptr [0x005d71fb]          ; 004b254e | DAT_005d71fb
    FLD float ptr [ESP + 0x180]         ; 004b2554
    FMUL ST1                            ; 004b255b
    FLD float ptr [ESP + 0x184]         ; 004b255d
    FMUL ST2                            ; 004b2564
    FLD float ptr [ESP + 0x188]         ; 004b2566
    FMULP ST3                           ; 004b256d
    LEA EDI,[ESP + 0x198]               ; 004b256f
    LEA ESI,[ESP + 0x174]               ; 004b2576
    FXCH                                ; 004b257d
    FSTP float ptr [ESP + 0x174]        ; 004b257f
    FSTP float ptr [ESP + 0x178]        ; 004b2586
    FSTP float ptr [ESP + 0x17c]        ; 004b258d
    MOVSD ES:EDI,ESI                    ; 004b2594
    MOVSD ES:EDI,ESI                    ; 004b2595
    MOVSD ES:EDI,ESI                    ; 004b2596
    LEA EAX,[ESP + 0x198]               ; 004b2597
    LEA ESI,[ESP + 0x138]               ; 004b259e
    CMP ESI,EAX                         ; 004b25a5
    JZ 0x004b25d3                       ; 004b25a7
        ;   XREF to: 004b25d3 (CONDITIONAL_JUMP)  ; LAB_004b25d3
    MOV EAX,dword ptr [ESP + 0x198]     ; 004b25a9
    MOV dword ptr [ESP + 0x138],EAX     ; 004b25b0
    MOV EAX,dword ptr [ESP + 0x19c]     ; 004b25b7
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b25be
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 004b25c5
    MOV dword ptr [ESP + 0x140],EAX     ; 004b25cc
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 004b25d3
        ;   Label: LAB_004b25d3
    MOV EDX,dword ptr [EAX + 0x7d4]     ; 004b25da
    CMP EDX,0x2                         ; 004b25e0
    JNZ 0x004b25f8                      ; 004b25e3
        ;   XREF to: 004b25f8 (CONDITIONAL_JUMP)  ; LAB_004b25f8
    MOV EAX,dword ptr [ESP + 0x118]     ; 004b25e5
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b25ec
    JMP 0x004b233f                      ; 004b25f3
        ;   XREF to: 004b233f (UNCONDITIONAL_JUMP)  ; LAB_004b233f
    CMP EDX,0x1                         ; 004b25f8
        ;   Label: LAB_004b25f8
    JNZ 0x004b2730                      ; 004b25fb
        ;   XREF to: 004b2730 (CONDITIONAL_JUMP)  ; LAB_004b2730
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b2601
    TEST ECX,ECX                        ; 004b2604
    JNZ 0x004b26fa                      ; 004b2606
        ;   XREF to: 004b26fa (CONDITIONAL_JUMP)  ; LAB_004b26fa
    PUSH 0xbfc90fdb                     ; 004b260c
    LEA ESI,[ESP + 0x34]                ; 004b2611
    LEA EDI,[ESP + 0x64]                ; 004b2615
    CALL core_xform.cpp_buildRotationY_FUN_005932c0 ; 004b2619
        ;   XREF to: 005932c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_005932c0()
    MOV ECX,0xc                         ; 004b261e
    LEA ESI,[ESP + 0x34]                ; 004b2623
    ADD ESP,0x4                         ; 004b2627
        ;   Label: LAB_004b2627
    MOVSD.REP ES:EDI,ESI                ; 004b262a
    MOV ESI,dword ptr [ESP + 0x1d4]     ; 004b262c
        ;   Label: LAB_004b262c
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b2633
    SUB EAX,ESI                         ; 004b263a
    MOV ESI,dword ptr [EBP + 0x10]      ; 004b263c
    SHL EAX,0x4                         ; 004b263f
    ADD ESI,0x1134                      ; 004b2642
    ADD EAX,ESI                         ; 004b2648
    PUSH EAX                            ; 004b264a
    LEA EAX,[ESP + 0x64]                ; 004b264b
    PUSH EAX                            ; 004b264f
    LEA ESI,[ESP + 0xc8]                ; 004b2650
    LEA EDI,[ESP + 0x68]                ; 004b2657
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004b265b
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004b2660
    LEA ESI,[ESP + 0xc8]                ; 004b2665
    ADD ESP,0x8                         ; 004b266c
    LEA EAX,[ESP + 0x60]                ; 004b266f
    MOVSD.REP ES:EDI,ESI                ; 004b2673
    PUSH EAX                            ; 004b2675
    LEA ESI,[ESP + 0x130]               ; 004b2676
    LEA EDI,[ESP + 0x16c]               ; 004b267d
    CALL core_xform.cpp_FUN_00591de0    ; 004b2684
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[ESP + 0x130]               ; 004b2689
    ADD ESP,0x4                         ; 004b2690
    MOVSD ES:EDI,ESI                    ; 004b2693
    MOVSD ES:EDI,ESI                    ; 004b2694
    MOVSD ES:EDI,ESI                    ; 004b2695
    LEA EAX,[ESP + 0x168]               ; 004b2696
    LEA ESI,[ESP + 0x120]               ; 004b269d
    CMP ESI,EAX                         ; 004b26a4
    JZ 0x004b26d2                       ; 004b26a6
        ;   XREF to: 004b26d2 (CONDITIONAL_JUMP)  ; LAB_004b26d2
    MOV EAX,dword ptr [ESP + 0x168]     ; 004b26a8
    MOV dword ptr [ESP + 0x120],EAX     ; 004b26af
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004b26b6
    MOV dword ptr [ESP + 0x124],EAX     ; 004b26bd
    MOV EAX,dword ptr [ESP + 0x170]     ; 004b26c4
    MOV dword ptr [ESP + 0x128],EAX     ; 004b26cb
    FLD float ptr [ESP + 0x110]         ; 004b26d2
        ;   Label: LAB_004b26d2
    FMUL double ptr [0x005d7203]        ; 004b26d9 | DAT_005d7203
    FLD float ptr [ESP + 0x11c]         ; 004b26df
    FMUL double ptr [0x005d720b]        ; 004b26e6 | DAT_005d720b
    FADDP                               ; 004b26ec
    FSTP float ptr [ESP + 0x140]        ; 004b26ee
    JMP 0x004b233f                      ; 004b26f5
        ;   XREF to: 004b233f (UNCONDITIONAL_JUMP)  ; LAB_004b233f
    CMP ECX,EDX                         ; 004b26fa
        ;   Label: LAB_004b26fa
    JNZ 0x004b271e                      ; 004b26fc
        ;   XREF to: 004b271e (CONDITIONAL_JUMP)  ; LAB_004b271e
    PUSH 0x3fc90fdb                     ; 004b26fe
    LEA ESI,[ESP + 0x4]                 ; 004b2703
    LEA EDI,[ESP + 0x64]                ; 004b2707
    CALL core_xform.cpp_buildRotationY_FUN_005932c0 ; 004b270b
        ;   XREF to: 005932c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_005932c0()
    MOV ECX,0xc                         ; 004b2710
    LEA ESI,[ESP + 0x4]                 ; 004b2715
    JMP 0x004b2627                      ; 004b2719
        ;   XREF to: 004b2627 (UNCONDITIONAL_JUMP)  ; LAB_004b2627
    LEA EAX,[ESP + 0x60]                ; 004b271e
        ;   Label: LAB_004b271e
    PUSH EAX                            ; 004b2722
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005918a0 ; 004b2723
        ;   XREF to: 005918a0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005918a0()
    ADD ESP,0x4                         ; 004b2728
    JMP 0x004b262c                      ; 004b272b
        ;   XREF to: 004b262c (UNCONDITIONAL_JUMP)  ; LAB_004b262c
    CMP EDX,0x3                         ; 004b2730
        ;   Label: LAB_004b2730
    JNZ 0x004b2748                      ; 004b2733
        ;   XREF to: 004b2748 (CONDITIONAL_JUMP)  ; LAB_004b2748
    MOV EAX,dword ptr [ESP + 0x118]     ; 004b2735
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b273c
    JMP 0x004b233f                      ; 004b2743
        ;   XREF to: 004b233f (UNCONDITIONAL_JUMP)  ; LAB_004b233f
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 004b2748
        ;   Label: LAB_004b2748
    PUSH EDX                            ; 004b274f
    MOV EDI,0x5d71c3                    ; 004b2750 | = "..\\core\\gabriela.cpp"
    MOV EAX,0x944                       ; 004b2755
    PUSH 0x5d71d8                       ; 004b275a | = "Don't know how to carry light %s"
    MOV dword ptr [0x01d046a0],EDI      ; 004b275f | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004b2765 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004b276a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004b276f
    JMP 0x004b233f                      ; 004b2772
        ;   XREF to: 004b233f (UNCONDITIONAL_JUMP)  ; LAB_004b233f
    CMP EDI,0x1                         ; 004b2777
        ;   Label: LAB_004b2777
    JNZ 0x004b27ca                      ; 004b277a
        ;   XREF to: 004b27ca (CONDITIONAL_JUMP)  ; LAB_004b27ca
    MOV EDI,0x3ecccccd                  ; 004b277c
    XOR EAX,EAX                         ; 004b2781
    LEA ESI,[ESP + 0x1c8]               ; 004b2783
    MOV dword ptr [ESP + 0x148],EAX     ; 004b278a
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b2791
    LEA EAX,[ESP + 0x144]               ; 004b2798
    MOV dword ptr [ESP + 0x144],EDI     ; 004b279f
    CMP ESI,EAX                         ; 004b27a6
    JZ 0x004b2390                       ; 004b27a8
        ;   XREF to: 004b2390 (CONDITIONAL_JUMP)  ; LAB_004b2390
    XOR ESI,ESI                         ; 004b27ae
    MOV dword ptr [ESP + 0x1c8],EDI     ; 004b27b0
    MOV dword ptr [ESP + 0x1cc],ESI     ; 004b27b7
    MOV dword ptr [ESP + 0x1d0],ESI     ; 004b27be
    JMP 0x004b2390                      ; 004b27c5
        ;   XREF to: 004b2390 (UNCONDITIONAL_JUMP)  ; LAB_004b2390
    XOR EDX,EDX                         ; 004b27ca
        ;   Label: LAB_004b27ca
    MOV dword ptr [ESP + 0x1cc],EDX     ; 004b27cc
    MOV dword ptr [ESP + 0x1c8],EDX     ; 004b27d3
    MOV dword ptr [ESP + 0x1d0],EDX     ; 004b27da
    JMP 0x004b2390                      ; 004b27e1
        ;   XREF to: 004b2390 (UNCONDITIONAL_JUMP)  ; LAB_004b2390

