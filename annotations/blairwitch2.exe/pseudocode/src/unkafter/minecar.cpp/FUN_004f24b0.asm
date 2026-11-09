; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004f24b0(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddae0
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01c38bbc
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   undefined4 DAT_01d04fc8
;   ... and 27 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_004496e0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f24b0
        ;   Label: unkafter_minecar.cpp_FUN_004f24b0
    PUSH ESI                            ; 004f24b1
    PUSH EDI                            ; 004f24b2
    SUB ESP,0x60                        ; 004f24b3
    MOV EBX,dword ptr [ESP + 0x70]      ; 004f24b6
    PUSH EBX                            ; 004f24ba
    LEA ESI,[ESP + 0x4]                 ; 004f24bb
    CALL core_dirmat.cpp_FUN_004496e0   ; 004f24bf
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    FLD float ptr [0x01d09874]          ; 004f24c4 | DAT_01d09874
    FLD float ptr [0x01d09878]          ; 004f24ca | DAT_01d09878
    FSUB float ptr [0x01d09870]         ; 004f24d0 | DAT_01d09870
    ADD ESP,0x4                         ; 004f24d6
    FLD1                                ; 004f24d9
    FADDP                               ; 004f24db
    FXCH                                ; 004f24dd
    FSUB float ptr [0x01d0986c]         ; 004f24df | DAT_01d0986c
    FLD1                                ; 004f24e5
    FADDP                               ; 004f24e7
    FDIVRP                              ; 004f24e9
    LEA EDI,[ESP + 0xc]                 ; 004f24eb
    MOV ESI,ESP                         ; 004f24ef
    MOVSD ES:EDI,ESI                    ; 004f24f1
    MOVSD ES:EDI,ESI                    ; 004f24f2
    MOVSD ES:EDI,ESI                    ; 004f24f3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f24f4
    MOV [0x01d098bc],EAX                ; 004f24f8 | DAT_01d098bc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f24fd
    FLD float ptr [0x01d098c8]          ; 004f2501 | DAT_01d098c8
    FLD ST0                             ; 004f2507
    MOV [0x01d098c0],EAX                ; 004f2509 | DAT_01d098c0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f250e
    FSTP float ptr [0x01d098cc]         ; 004f2512 | DAT_01d098cc
    MOV [0x01d098c4],EAX                ; 004f2518 | DAT_01d098c4
    MOV EAX,[0x01d09918]                ; 004f251d | DAT_01d09918
    MOV EDX,dword ptr [EBX]             ; 004f2522
    MOV dword ptr [EAX],EDX             ; 004f2524
    MOV EDX,dword ptr [EBX + 0x4]       ; 004f2526
    MOV dword ptr [EAX + 0x4],EDX       ; 004f2529
    MOV EDX,dword ptr [EBX + 0x8]       ; 004f252c
    MOV dword ptr [EAX + 0x8],EDX       ; 004f252f
    MOV EDX,dword ptr [EBX + 0xc]       ; 004f2532
    MOV dword ptr [EAX + 0xc],EDX       ; 004f2535
    FLD float ptr [EAX + 0xc]           ; 004f2538
    FMUL float ptr [0x01d098cc]         ; 004f253b | DAT_01d098cc
    FLD float ptr [0x01d098cc]          ; 004f2541 | DAT_01d098cc
    FLD1                                ; 004f2547
    MOV EDX,dword ptr [EBX + 0x10]      ; 004f2549
    MOV dword ptr [EAX + 0x10],EDX      ; 004f254c
    MOV EDX,dword ptr [EBX + 0x14]      ; 004f254f
    MOV dword ptr [EAX + 0x14],EDX      ; 004f2552
    MOV EDX,dword ptr [EBX + 0x18]      ; 004f2555
    MOV dword ptr [EAX + 0x18],EDX      ; 004f2558
    FDIVRP                              ; 004f255b
    FLD float ptr [EAX + 0x18]          ; 004f255d
    FMUL float ptr [0x01d098cc]         ; 004f2560 | DAT_01d098cc
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004f2566
    MOV dword ptr [EAX + 0x1c],EDX      ; 004f2569
    MOV EDX,dword ptr [EBX + 0x20]      ; 004f256c
    MOV dword ptr [EAX + 0x20],EDX      ; 004f256f
    FXCH ST2                            ; 004f2572
    FST float ptr [EAX + 0xc]           ; 004f2574
    FMUL float ptr [EAX + 0x20]         ; 004f2577
    FLD float ptr [EAX + 0x14]          ; 004f257a
    FXCH ST3                            ; 004f257d
    FSTP float ptr [EAX + 0x18]         ; 004f257f
    FXCH ST2                            ; 004f2582
    FMUL float ptr [EAX + 0x18]         ; 004f2584
    FXCH ST3                            ; 004f2587
    FMULP ST4                           ; 004f2589
    FLD float ptr [EAX + 0x4]           ; 004f258b
    FXCH ST4                            ; 004f258e
    FSTP float ptr [0x01d098d0]         ; 004f2590 | DAT_01d098d0
    FXCH ST3                            ; 004f2596
    FMUL float ptr [0x01d098d0]         ; 004f2598 | DAT_01d098d0
    FLD float ptr [EAX + 0x10]          ; 004f259e
    FMUL float ptr [0x01d098d0]         ; 004f25a1 | DAT_01d098d0
    FLD float ptr [EAX + 0x1c]          ; 004f25a7
    FXCH ST3                            ; 004f25aa
    FSTP float ptr [ESP + 0x58]         ; 004f25ac
    FXCH ST3                            ; 004f25b0
    FSTP float ptr [ESP + 0x20]         ; 004f25b2
    FLD float ptr [ESP + 0x58]          ; 004f25b6
    FSUB float ptr [ESP + 0x20]         ; 004f25ba
    FXCH ST2                            ; 004f25be
    FMUL float ptr [0x01d098d0]         ; 004f25c0 | DAT_01d098d0
    FXCH ST2                            ; 004f25c6
    FSTP float ptr [ESP + 0x2c]         ; 004f25c8
    FLD float ptr [0x01d098d0]          ; 004f25cc | DAT_01d098d0
    FLD1                                ; 004f25d2
    FXCH ST2                            ; 004f25d4
    FST float ptr [EAX + 0x4]           ; 004f25d6
    FMUL float ptr [ESP + 0x2c]         ; 004f25d9
    FXCH ST2                            ; 004f25dd
    FDIVRP                              ; 004f25df
    FXCH ST3                            ; 004f25e1
    FST float ptr [EAX + 0x10]          ; 004f25e3
    FMUL float ptr [EAX + 0x20]         ; 004f25e6
    FXCH ST2                            ; 004f25e9
    FSTP float ptr [EAX + 0x1c]         ; 004f25eb
    FXCH                                ; 004f25ee
    FSTP float ptr [ESP + 0x54]         ; 004f25f0
    FLD float ptr [EAX + 0x14]          ; 004f25f4
    FMUL float ptr [EAX + 0x1c]         ; 004f25f7
    FLD float ptr [EAX]                 ; 004f25fa
    FMUL float ptr [0x01d098cc]         ; 004f25fc | DAT_01d098cc
    FXCH                                ; 004f2602
    FSTP float ptr [ESP + 0x5c]         ; 004f2604
    FLD float ptr [ESP + 0x54]          ; 004f2608
    FSUB float ptr [ESP + 0x5c]         ; 004f260c
    FXCH                                ; 004f2610
    FSTP float ptr [EAX]                ; 004f2612
    FSTP float ptr [ESP + 0x30]         ; 004f2614
    FLD float ptr [EAX]                 ; 004f2618
    FMUL float ptr [ESP + 0x30]         ; 004f261a
    FSUBRP                              ; 004f261e
    FLD float ptr [EAX + 0xc]           ; 004f2620
    FMUL float ptr [EAX + 0x1c]         ; 004f2623
    FSTP float ptr [ESP + 0x1c]         ; 004f2626
    FLD float ptr [EAX + 0x10]          ; 004f262a
    FMUL float ptr [EAX + 0x18]         ; 004f262d
    FSTP float ptr [ESP + 0x24]         ; 004f2630
    FLD float ptr [ESP + 0x1c]          ; 004f2634
    FSUB float ptr [ESP + 0x24]         ; 004f2638
    FSTP float ptr [ESP + 0x28]         ; 004f263c
    FLD float ptr [EAX + 0x8]           ; 004f2640
    FMUL float ptr [ESP + 0x28]         ; 004f2643
    FXCH ST3                            ; 004f2647
    FSTP float ptr [0x01d098d4]         ; 004f2649 | DAT_01d098d4
    FADDP ST2,ST0                       ; 004f264f
    FSTP float ptr [0x01d098d8]         ; 004f2651 | DAT_01d098d8
    FSTP float ptr [ESP + 0x4c]         ; 004f2657
    FLD float ptr [EAX]                 ; 004f265b
    FMUL float ptr [0x005ddae0]         ; 004f265d | DAT_005ddae0
    FLD float ptr [EAX + 0x4]           ; 004f2663
    FMUL float ptr [0x005ddae0]         ; 004f2666 | DAT_005ddae0
    FLD float ptr [EAX + 0x8]           ; 004f266c
    FMUL float ptr [0x005ddae0]         ; 004f266f | DAT_005ddae0
    FLD float ptr [EAX + 0x4]           ; 004f2675
    FMUL float ptr [EAX + 0x20]         ; 004f2678
    FLD float ptr [EAX + 0x8]           ; 004f267b
    FMUL float ptr [EAX + 0x18]         ; 004f267e
    FLD float ptr [EAX + 0x8]           ; 004f2681
    FMUL float ptr [EAX + 0x1c]         ; 004f2684
    FLD float ptr [ESP + 0x2c]          ; 004f2687
    FCHS                                ; 004f268b
    FSTP float ptr [ESP + 0x3c]         ; 004f268d
    FLD float ptr [EAX]                 ; 004f2691
    FXCH                                ; 004f2693
    FSUBP ST3,ST0                       ; 004f2695
    FMUL float ptr [EAX + 0x20]         ; 004f2697
    FXCH ST2                            ; 004f269a
    FCHS                                ; 004f269c
    FSTP float ptr [ESP + 0x34]         ; 004f269e
    FLD1                                ; 004f26a2
    FLD float ptr [EAX + 0x4]           ; 004f26a4
    FMUL float ptr [EAX + 0x18]         ; 004f26a7
    FXCH                                ; 004f26aa
    FDIV float ptr [ESP + 0x4c]         ; 004f26ac
    FXCH ST3                            ; 004f26b0
    FSUBRP ST2,ST0                      ; 004f26b2
    FXCH                                ; 004f26b4
    FSTP float ptr [ESP + 0x40]         ; 004f26b6
    FLD float ptr [EAX]                 ; 004f26ba
    FMUL float ptr [EAX + 0x1c]         ; 004f26bc
    FLD float ptr [EAX + 0x4]           ; 004f26bf
    FXCH                                ; 004f26c2
    FSUBRP ST2,ST0                      ; 004f26c4
    FMUL float ptr [EAX + 0x14]         ; 004f26c6
    FXCH                                ; 004f26c9
    FCHS                                ; 004f26cb
    FSTP float ptr [ESP + 0x48]         ; 004f26cd
    FLD float ptr [EAX + 0x8]           ; 004f26d1
    FMUL float ptr [EAX + 0x10]         ; 004f26d4
    FLD float ptr [EAX + 0x8]           ; 004f26d7
    FMUL float ptr [EAX + 0xc]          ; 004f26da
    FXCH                                ; 004f26dd
    FSUBP ST2,ST0                       ; 004f26df
    FXCH                                ; 004f26e1
    FSTP float ptr [ESP + 0x38]         ; 004f26e3
    FLD float ptr [EAX]                 ; 004f26e7
    FMUL float ptr [EAX + 0x14]         ; 004f26e9
    FLD float ptr [EAX + 0x4]           ; 004f26ec
    FXCH                                ; 004f26ef
    FSUBRP ST2,ST0                      ; 004f26f1
    FMUL float ptr [EAX + 0xc]          ; 004f26f3
    FXCH                                ; 004f26f6
    FCHS                                ; 004f26f8
    FSTP float ptr [ESP + 0x44]         ; 004f26fa
    FLD float ptr [EAX]                 ; 004f26fe
    FMUL float ptr [EAX + 0x10]         ; 004f2700
    FLD float ptr [EAX + 0xc]           ; 004f2703
    FXCH                                ; 004f2706
    FSUBRP ST2,ST0                      ; 004f2708
    FMUL float ptr [0x005ddae0]         ; 004f270a | DAT_005ddae0
    FXCH                                ; 004f2710
    FSTP float ptr [ESP + 0x18]         ; 004f2712
    FLD float ptr [EAX + 0x10]          ; 004f2716
    FMUL float ptr [0x005ddae0]         ; 004f2719 | DAT_005ddae0
    FLD float ptr [ESP + 0x30]          ; 004f271f
    FXCH ST3                            ; 004f2723
    FSTP float ptr [ESP + 0x4c]         ; 004f2725
    FXCH ST2                            ; 004f2729
    FMUL float ptr [ESP + 0x4c]         ; 004f272b
    FLD float ptr [ESP + 0x34]          ; 004f272f
    FMUL float ptr [ESP + 0x4c]         ; 004f2733
    FXCH                                ; 004f2737
    FSTP float ptr [0x01d0988c]         ; 004f2739 | DAT_01d0988c
    FLD float ptr [ESP + 0x38]          ; 004f273f
    FMUL float ptr [ESP + 0x4c]         ; 004f2743
    FXCH                                ; 004f2747
    FSTP float ptr [0x01d09890]         ; 004f2749 | DAT_01d09890
    FLD float ptr [ESP + 0x3c]          ; 004f274f
    FMUL float ptr [ESP + 0x4c]         ; 004f2753
    FXCH                                ; 004f2757
    FSTP float ptr [0x01d09894]         ; 004f2759 | DAT_01d09894
    FLD float ptr [ESP + 0x40]          ; 004f275f
    FMUL float ptr [ESP + 0x4c]         ; 004f2763
    FXCH                                ; 004f2767
    FSTP float ptr [0x01d09898]         ; 004f2769 | DAT_01d09898
    FLD float ptr [ESP + 0x44]          ; 004f276f
    FMUL float ptr [ESP + 0x4c]         ; 004f2773
    FXCH                                ; 004f2777
    FSTP float ptr [0x01d0989c]         ; 004f2779 | DAT_01d0989c
    FLD float ptr [ESP + 0x28]          ; 004f277f
    FMUL float ptr [ESP + 0x4c]         ; 004f2783
    FXCH                                ; 004f2787
    FSTP float ptr [0x01d098a0]         ; 004f2789 | DAT_01d098a0
    FLD float ptr [ESP + 0x48]          ; 004f278f
    FMUL float ptr [ESP + 0x4c]         ; 004f2793
    FXCH                                ; 004f2797
    FSTP float ptr [0x01d098a4]         ; 004f2799 | DAT_01d098a4
    FLD float ptr [ESP + 0x18]          ; 004f279f
    FMUL float ptr [ESP + 0x4c]         ; 004f27a3
    FXCH                                ; 004f27a7
    FSTP float ptr [0x01d098a8]         ; 004f27a9 | DAT_01d098a8
    FLD float ptr [EAX + 0x14]          ; 004f27af
    FMUL float ptr [0x005ddae0]         ; 004f27b2 | DAT_005ddae0
    FXCH                                ; 004f27b8
    FSTP float ptr [0x01d098ac]         ; 004f27ba | DAT_01d098ac
    FLD float ptr [EAX + 0x18]          ; 004f27c0
    MOV EDX,0x1                         ; 004f27c3
    FMUL float ptr [0x005ddae0]         ; 004f27c8 | DAT_005ddae0
    MOV dword ptr [0x01d0c398],EDX      ; 004f27ce | DAT_01d0c398
    FXCH ST6                            ; 004f27d4
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f27d6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38b9c]        ; 004f27db | DAT_01c38b9c
    FLD float ptr [EAX + 0x1c]          ; 004f27e1
    FMUL float ptr [0x005ddae0]         ; 004f27e4 | DAT_005ddae0
    FXCH ST5                            ; 004f27ea
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f27ec
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38ba0]        ; 004f27f1 | DAT_01c38ba0
    FLD float ptr [EAX + 0x20]          ; 004f27f7
    FMUL float ptr [0x005ddae0]         ; 004f27fa | DAT_005ddae0
    FXCH ST4                            ; 004f2800
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f2802
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38ba4]        ; 004f2807 | DAT_01c38ba4
    FLD float ptr [0x01d0988c]          ; 004f280d | DAT_01d0988c
    FMUL float ptr [0x005ddae0]         ; 004f2813 | DAT_005ddae0
    FXCH ST2                            ; 004f2819
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f281b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38ba8]        ; 004f2820 | DAT_01c38ba8
    FLD float ptr [0x01d09890]          ; 004f2826 | DAT_01d09890
    FMUL float ptr [0x005ddae0]         ; 004f282c | DAT_005ddae0
    FXCH ST3                            ; 004f2832
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f2834
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38bac]        ; 004f2839 | DAT_01c38bac
    FLD float ptr [0x01d09894]          ; 004f283f | DAT_01d09894
    FMUL float ptr [0x005ddae0]         ; 004f2845 | DAT_005ddae0
    FXCH                                ; 004f284b
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f284d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38bb0]        ; 004f2852 | DAT_01c38bb0
    FLD float ptr [0x01d09898]          ; 004f2858 | DAT_01d09898
    FMUL float ptr [0x005ddae0]         ; 004f285e | DAT_005ddae0
    FXCH ST6                            ; 004f2864
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f2866
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38bb4]        ; 004f286b | DAT_01c38bb4
    FLD float ptr [0x01d0989c]          ; 004f2871 | DAT_01d0989c
    FMUL float ptr [0x005ddae0]         ; 004f2877 | DAT_005ddae0
    FXCH ST5                            ; 004f287d
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f287f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38bb8]        ; 004f2884 | DAT_01c38bb8
    FLD float ptr [0x01d098a0]          ; 004f288a | DAT_01d098a0
    FMUL float ptr [0x005ddae0]         ; 004f2890 | DAT_005ddae0
    FXCH ST4                            ; 004f2896
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f2898
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38bbc]        ; 004f289d | DAT_01c38bbc
    FLD float ptr [0x01d098a4]          ; 004f28a3 | DAT_01d098a4
    FMUL float ptr [0x005ddae0]         ; 004f28a9 | DAT_005ddae0
    FXCH ST2                            ; 004f28af
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f28b1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01d04fb8]        ; 004f28b6 | DAT_01d04fb8
    FLD float ptr [0x01d098a8]          ; 004f28bc | DAT_01d098a8
    FMUL float ptr [0x005ddae0]         ; 004f28c2 | DAT_005ddae0
    FXCH ST3                            ; 004f28c8
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f28ca
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01d04fbc]        ; 004f28cf | DAT_01d04fbc
    FLD float ptr [0x01d098ac]          ; 004f28d5 | DAT_01d098ac
    FMUL float ptr [0x005ddae0]         ; 004f28db | DAT_005ddae0
    FXCH                                ; 004f28e1
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f28e3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST6                            ; 004f28e8
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f28ea
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST5                            ; 004f28ef
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f28f1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST4                            ; 004f28f6
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f28f8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004f28fd
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f28ff
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 004f2904
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f2906
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004f290b
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f290d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST6                            ; 004f2912
    FISTP dword ptr [0x01d04fc0]        ; 004f2914 | DAT_01d04fc0
    FXCH ST4                            ; 004f291a
    FISTP dword ptr [0x01d04fc4]        ; 004f291c | DAT_01d04fc4
    FXCH ST2                            ; 004f2922
    FISTP dword ptr [0x01d04fc8]        ; 004f2924 | DAT_01d04fc8
    FXCH                                ; 004f292a
    FISTP dword ptr [0x01d04fcc]        ; 004f292c | DAT_01d04fcc
    FISTP dword ptr [0x01d04fd0]        ; 004f2932 | DAT_01d04fd0
    FISTP dword ptr [0x01d04fd4]        ; 004f2938 | DAT_01d04fd4
    FISTP dword ptr [0x01d04fd8]        ; 004f293e | DAT_01d04fd8
    ADD ESP,0x60                        ; 004f2944
    POP EDI                             ; 004f2947
    POP ESI                             ; 004f2948
    POP EBX                             ; 004f2949
    RET                                 ; 004f294a

