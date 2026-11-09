; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_slew_cpp_FUN_005493d0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b532d
;
; Referenced Globals:
;   undefined4 DAT_005e7619
;   undefined4 DAT_005e7621
;   undefined4 DAT_005e7629
;   undefined4 DAT_005e7631
;   undefined4 DAT_005e7639
;   undefined4 DAT_005e7641
;   undefined4 DAT_005e7645
;   undefined4 DAT_005e7649
;   undefined4 DAT_005e764d
;   undefined4 DAT_005e7651
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;   undefined4 g_CGameInstance.field644_0x284
;   undefined4 DAT_01d02f84
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005493d0
        ;   Label: core_slew.cpp_FUN_005493d0
    PUSH EBP                            ; 005493d1
    MOV EBP,ESP                         ; 005493d2
    SUB ESP,0x24                        ; 005493d4
    AND ESP,0xfffffff8                  ; 005493d7
    MOV EBX,dword ptr [EBP + 0xc]       ; 005493da
    MOV EAX,[0x00616494]                ; 005493dd | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x284]     ; 005493e2 | g_CGameInstance.field644_0x284
    PUSH 0x38                           ; 005493e8
    MOV dword ptr [ESP + 0x8],EAX       ; 005493ea
    MOV dword ptr [ESP + 0xc],EAX       ; 005493ee
    MOV EAX,[0x00617dd4]                ; 005493f2 | DAT_00617dd4
    PUSH EAX                            ; 005493f7 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 005493f8 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 005493fa
    ADD ESP,0x8                         ; 005493fc
    TEST EAX,EAX                        ; 005493ff
    JZ 0x0054972d                       ; 00549401
        ;   XREF to: 0054972d (CONDITIONAL_JUMP)  ; LAB_0054972d
    FLD float ptr [ESP + 0x4]           ; 00549407
    FMUL double ptr [0x005e7621]        ; 0054940b | DAT_005e7621
    FSTP float ptr [ESP + 0x8]          ; 00549411
        ;   Label: LAB_00549411
    FLD float ptr [ESP + 0x8]           ; 00549415
        ;   Label: LAB_00549415
    FLD ST0                             ; 00549419
    FMUL float ptr [0x005e7629]         ; 0054941b | DAT_005e7629
    FLD ST1                             ; 00549421
    FMUL double ptr [0x005e7631]        ; 00549423 | DAT_005e7631
    PUSH 0x4f                           ; 00549429
    MOV EAX,[0x00617dd4]                ; 0054942b | DAT_00617dd4
    FXCH ST2                            ; 00549430
    FMUL double ptr [0x005e7639]        ; 00549432 | DAT_005e7639
    PUSH EAX                            ; 00549438 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549439 | DAT_01d02f84
    FXCH                                ; 0054943b
    FSTP float ptr [ESP + 0x24]         ; 0054943d
    FXCH                                ; 00549441
    FSTP float ptr [ESP + 0x8]          ; 00549443
    FSTP float ptr [ESP + 0x28]         ; 00549447
    CALL dword ptr [EDX]                ; 0054944b
    ADD ESP,0x8                         ; 0054944d
    TEST EAX,EAX                        ; 00549450
    JZ 0x0054945e                       ; 00549452
        ;   XREF to: 0054945e (CONDITIONAL_JUMP)  ; LAB_0054945e
    FLD float ptr [EBX + 0x10]          ; 00549454
    FSUB float ptr [ESP + 0x1c]         ; 00549457
    FSTP float ptr [EBX + 0x10]         ; 0054945b
    PUSH 0x51                           ; 0054945e
        ;   Label: LAB_0054945e
    MOV EAX,[0x00617dd4]                ; 00549460 | DAT_00617dd4
    PUSH EAX                            ; 00549465 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549466 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549468
    ADD ESP,0x8                         ; 0054946a
    TEST EAX,EAX                        ; 0054946d
    JZ 0x0054947b                       ; 0054946f
        ;   XREF to: 0054947b (CONDITIONAL_JUMP)  ; LAB_0054947b
    FLD float ptr [EBX + 0x10]          ; 00549471
    FADD float ptr [ESP + 0x1c]         ; 00549474
    FSTP float ptr [EBX + 0x10]         ; 00549478
    PUSH 0x48                           ; 0054947b
        ;   Label: LAB_0054947b
    MOV EAX,[0x00617dd4]                ; 0054947d | DAT_00617dd4
    PUSH EAX                            ; 00549482 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549483 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549485
    ADD ESP,0x8                         ; 00549487
    TEST EAX,EAX                        ; 0054948a
    JZ 0x005494ba                       ; 0054948c
        ;   XREF to: 005494ba (CONDITIONAL_JUMP)  ; LAB_005494ba
    FLD float ptr [EBX + 0x10]          ; 0054948e
    FSINCOS                             ; 00549491
    FLD float ptr [ESP]                 ; 00549493
    FXCH ST2                            ; 00549496
    FMUL ST2                            ; 00549498
    FXCH                                ; 0054949a
    FMULP ST2                           ; 0054949c
    FLD float ptr [EBX]                 ; 0054949e
    FLD float ptr [EBX + 0x8]           ; 005494a0
    FXCH ST2                            ; 005494a3
    FADD ST0,ST1                        ; 005494a5
    FXCH ST3                            ; 005494a7
    FADD ST0,ST2                        ; 005494a9
    FXCH ST3                            ; 005494ab
    FSTP ST1                            ; 005494ad
    FXCH ST2                            ; 005494af
    FSTP ST1                            ; 005494b1
    FXCH                                ; 005494b3
    FSTP float ptr [EBX]                ; 005494b5
    FSTP float ptr [EBX + 0x8]          ; 005494b7
    PUSH 0x50                           ; 005494ba
        ;   Label: LAB_005494ba
    MOV EAX,[0x00617dd4]                ; 005494bc | DAT_00617dd4
    PUSH EAX                            ; 005494c1 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 005494c2 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 005494c4
    ADD ESP,0x8                         ; 005494c6
    TEST EAX,EAX                        ; 005494c9
    JZ 0x005494f9                       ; 005494cb
        ;   XREF to: 005494f9 (CONDITIONAL_JUMP)  ; LAB_005494f9
    FLD float ptr [EBX + 0x10]          ; 005494cd
    FSINCOS                             ; 005494d0
    FLD float ptr [ESP]                 ; 005494d2
    FXCH ST2                            ; 005494d5
    FMUL ST2                            ; 005494d7
    FXCH                                ; 005494d9
    FMULP ST2                           ; 005494db
    FLD float ptr [EBX]                 ; 005494dd
    FLD float ptr [EBX + 0x8]           ; 005494df
    FXCH ST2                            ; 005494e2
    FSUBR ST0,ST1                       ; 005494e4
    FXCH ST3                            ; 005494e6
    FSUBR ST0,ST2                       ; 005494e8
    FXCH ST3                            ; 005494ea
    FSTP ST1                            ; 005494ec
    FXCH ST2                            ; 005494ee
    FSTP ST1                            ; 005494f0
    FXCH                                ; 005494f2
    FSTP float ptr [EBX]                ; 005494f4
    FSTP float ptr [EBX + 0x8]          ; 005494f6
    PUSH 0x4b                           ; 005494f9
        ;   Label: LAB_005494f9
    MOV EAX,[0x00617dd4]                ; 005494fb | DAT_00617dd4
    PUSH EAX                            ; 00549500 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549501 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549503
    ADD ESP,0x8                         ; 00549505
    TEST EAX,EAX                        ; 00549508
    JZ 0x00549549                       ; 0054950a
        ;   XREF to: 00549549 (CONDITIONAL_JUMP)  ; LAB_00549549
    FLD float ptr [0x005e7641]          ; 0054950c | DAT_005e7641
    FLD float ptr [EBX + 0x10]          ; 00549512
    FADD ST0,ST1                        ; 00549515
    FSIN                                ; 00549517
    FLD float ptr [EBX + 0x10]          ; 00549519
    FADDP ST2,ST0                       ; 0054951c
    FXCH                                ; 0054951e
    FCOS                                ; 00549520
    FLD float ptr [ESP]                 ; 00549522
    FXCH ST2                            ; 00549525
    FMUL ST2                            ; 00549527
    FXCH                                ; 00549529
    FMULP ST2                           ; 0054952b
    FLD float ptr [EBX]                 ; 0054952d
    FLD float ptr [EBX + 0x8]           ; 0054952f
    FXCH ST2                            ; 00549532
    FADD ST0,ST1                        ; 00549534
    FXCH ST3                            ; 00549536
    FADD ST0,ST2                        ; 00549538
    FXCH ST3                            ; 0054953a
    FSTP ST1                            ; 0054953c
    FXCH ST2                            ; 0054953e
    FSTP ST1                            ; 00549540
    FXCH                                ; 00549542
    FSTP float ptr [EBX]                ; 00549544
    FSTP float ptr [EBX + 0x8]          ; 00549546
    PUSH 0x4d                           ; 00549549
        ;   Label: LAB_00549549
    MOV EAX,[0x00617dd4]                ; 0054954b | DAT_00617dd4
    PUSH EAX                            ; 00549550 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549551 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549553
    ADD ESP,0x8                         ; 00549555
    TEST EAX,EAX                        ; 00549558
    JZ 0x00549599                       ; 0054955a
        ;   XREF to: 00549599 (CONDITIONAL_JUMP)  ; LAB_00549599
    FLD float ptr [0x005e7645]          ; 0054955c | DAT_005e7645
    FLD float ptr [EBX + 0x10]          ; 00549562
    FADD ST0,ST1                        ; 00549565
    FSIN                                ; 00549567
    FLD float ptr [EBX + 0x10]          ; 00549569
    FADDP ST2,ST0                       ; 0054956c
    FXCH                                ; 0054956e
    FCOS                                ; 00549570
    FLD float ptr [ESP]                 ; 00549572
    FXCH ST2                            ; 00549575
    FMUL ST2                            ; 00549577
    FXCH                                ; 00549579
    FMULP ST2                           ; 0054957b
    FLD float ptr [EBX]                 ; 0054957d
    FLD float ptr [EBX + 0x8]           ; 0054957f
    FXCH ST2                            ; 00549582
    FADD ST0,ST1                        ; 00549584
    FXCH ST3                            ; 00549586
    FADD ST0,ST2                        ; 00549588
    FXCH ST3                            ; 0054958a
    FSTP ST1                            ; 0054958c
    FXCH ST2                            ; 0054958e
    FSTP ST1                            ; 00549590
    FXCH                                ; 00549592
    FSTP float ptr [EBX]                ; 00549594
    FSTP float ptr [EBX + 0x8]          ; 00549596
    PUSH 0x10                           ; 00549599
        ;   Label: LAB_00549599
    MOV EAX,[0x00617dd4]                ; 0054959b | DAT_00617dd4
    PUSH EAX                            ; 005495a0 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 005495a1 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 005495a3
    ADD ESP,0x8                         ; 005495a5
    TEST EAX,EAX                        ; 005495a8
    JZ 0x005495b5                       ; 005495aa
        ;   XREF to: 005495b5 (CONDITIONAL_JUMP)  ; LAB_005495b5
    FLD float ptr [EBX + 0x4]           ; 005495ac
    FADD float ptr [ESP]                ; 005495af
    FSTP float ptr [EBX + 0x4]          ; 005495b2
    PUSH 0x1e                           ; 005495b5
        ;   Label: LAB_005495b5
    MOV EAX,[0x00617dd4]                ; 005495b7 | DAT_00617dd4
    PUSH EAX                            ; 005495bc | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 005495bd | DAT_01d02f84
    CALL dword ptr [EDX]                ; 005495bf
    ADD ESP,0x8                         ; 005495c1
    TEST EAX,EAX                        ; 005495c4
    JZ 0x005495d1                       ; 005495c6
        ;   XREF to: 005495d1 (CONDITIONAL_JUMP)  ; LAB_005495d1
    FLD float ptr [EBX + 0x4]           ; 005495c8
    FSUB float ptr [ESP]                ; 005495cb
    FSTP float ptr [EBX + 0x4]          ; 005495ce
    PUSH 0x3f                           ; 005495d1
        ;   Label: LAB_005495d1
    MOV EAX,[0x00617dd4]                ; 005495d3 | DAT_00617dd4
    PUSH EAX                            ; 005495d8 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 005495d9 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 005495db
    ADD ESP,0x8                         ; 005495dd
    TEST EAX,EAX                        ; 005495e0
    JZ 0x005495ee                       ; 005495e2
        ;   XREF to: 005495ee (CONDITIONAL_JUMP)  ; LAB_005495ee
    FLD float ptr [EBX + 0xc]           ; 005495e4
    FSUB float ptr [ESP + 0x1c]         ; 005495e7
    FSTP float ptr [EBX + 0xc]          ; 005495eb
    PUSH 0x42                           ; 005495ee
        ;   Label: LAB_005495ee
    MOV EAX,[0x00617dd4]                ; 005495f0 | DAT_00617dd4
    PUSH EAX                            ; 005495f5 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 005495f6 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 005495f8
    ADD ESP,0x8                         ; 005495fa
    TEST EAX,EAX                        ; 005495fd
    JZ 0x0054960b                       ; 005495ff
        ;   XREF to: 0054960b (CONDITIONAL_JUMP)  ; LAB_0054960b
    FLD float ptr [EBX + 0xc]           ; 00549601
    FADD float ptr [ESP + 0x1c]         ; 00549604
    FSTP float ptr [EBX + 0xc]          ; 00549608
    PUSH 0x47                           ; 0054960b
        ;   Label: LAB_0054960b
    MOV EAX,[0x00617dd4]                ; 0054960d | DAT_00617dd4
    PUSH EAX                            ; 00549612 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549613 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549615
    ADD ESP,0x8                         ; 00549617
    TEST EAX,EAX                        ; 0054961a
    JZ 0x00549628                       ; 0054961c
        ;   XREF to: 00549628 (CONDITIONAL_JUMP)  ; LAB_00549628
    FLD float ptr [EBX + 0x14]          ; 0054961e
    FSUB float ptr [ESP + 0x1c]         ; 00549621
    FSTP float ptr [EBX + 0x14]         ; 00549625
    PUSH 0x49                           ; 00549628
        ;   Label: LAB_00549628
    MOV EAX,[0x00617dd4]                ; 0054962a | DAT_00617dd4
    PUSH EAX                            ; 0054962f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549630 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549632
    ADD ESP,0x8                         ; 00549634
    TEST EAX,EAX                        ; 00549637
    JZ 0x00549645                       ; 00549639
        ;   XREF to: 00549645 (CONDITIONAL_JUMP)  ; LAB_00549645
    FLD float ptr [EBX + 0x14]          ; 0054963b
    FADD float ptr [ESP + 0x1c]         ; 0054963e
    FSTP float ptr [EBX + 0x14]         ; 00549642
    PUSH 0xc                            ; 00549645
        ;   Label: LAB_00549645
    MOV EAX,[0x00617dd4]                ; 00549647 | DAT_00617dd4
    PUSH EAX                            ; 0054964c | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0054964d | DAT_01d02f84
    CALL dword ptr [EDX]                ; 0054964f
    ADD ESP,0x8                         ; 00549651
    TEST EAX,EAX                        ; 00549654
    JZ 0x00549662                       ; 00549656
        ;   XREF to: 00549662 (CONDITIONAL_JUMP)  ; LAB_00549662
    FLD float ptr [EBX + 0x18]          ; 00549658
    FSUB float ptr [ESP + 0x20]         ; 0054965b
    FSTP float ptr [EBX + 0x18]         ; 0054965f
    PUSH 0xd                            ; 00549662
        ;   Label: LAB_00549662
    MOV EAX,[0x00617dd4]                ; 00549664 | DAT_00617dd4
    PUSH EAX                            ; 00549669 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0054966a | DAT_01d02f84
    CALL dword ptr [EDX]                ; 0054966c
    ADD ESP,0x8                         ; 0054966e
    TEST EAX,EAX                        ; 00549671
    JZ 0x0054967f                       ; 00549673
        ;   XREF to: 0054967f (CONDITIONAL_JUMP)  ; LAB_0054967f
    FLD float ptr [EBX + 0x18]          ; 00549675
    FADD float ptr [ESP + 0x20]         ; 00549678
    FSTP float ptr [EBX + 0x18]         ; 0054967c
    PUSH 0x4c                           ; 0054967f
        ;   Label: LAB_0054967f
    MOV EAX,[0x00617dd4]                ; 00549681 | DAT_00617dd4
    PUSH EAX                            ; 00549686 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549687 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549689
    ADD ESP,0x8                         ; 0054968b
    TEST EAX,EAX                        ; 0054968e
    JZ 0x005496a7                       ; 00549690
        ;   XREF to: 005496a7 (CONDITIONAL_JUMP)  ; LAB_005496a7
    LEA EAX,[EBX + 0xc]                 ; 00549692
    MOV dword ptr [EAX + 0x8],0x0       ; 00549695
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054969c
    MOV dword ptr [EAX + 0x4],EDX       ; 0054969f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005496a2
    MOV dword ptr [EAX],EDX             ; 005496a5
    FLD float ptr [EBX + 0x10]          ; 005496a7
        ;   Label: LAB_005496a7
    FCOMP float ptr [0x005e7649]        ; 005496aa | DAT_005e7649
    FNSTSW AX                           ; 005496b0
    SAHF                                ; 005496b2
    JNC 0x005496c1                      ; 005496b3
        ;   XREF to: 005496c1 (CONDITIONAL_JUMP)  ; LAB_005496c1
    FLD float ptr [EBX + 0x10]          ; 005496b5
    FADD float ptr [0x005e764d]         ; 005496b8 | DAT_005e764d
    FSTP float ptr [EBX + 0x10]         ; 005496be
    CMP dword ptr [EBX + 0x10],0x40490fdb ; 005496c1
        ;   Label: LAB_005496c1
    JLE 0x005496d6                      ; 005496c8
        ;   XREF to: 005496d6 (CONDITIONAL_JUMP)  ; LAB_005496d6
    FLD float ptr [EBX + 0x10]          ; 005496ca
    FADD float ptr [0x005e7651]         ; 005496cd | DAT_005e7651
    FSTP float ptr [EBX + 0x10]         ; 005496d3
    FLD float ptr [EBX + 0xc]           ; 005496d6
        ;   Label: LAB_005496d6
    FCOMP float ptr [0x005e7649]        ; 005496d9 | DAT_005e7649
    FNSTSW AX                           ; 005496df
    SAHF                                ; 005496e1
    JNC 0x005496f0                      ; 005496e2
        ;   XREF to: 005496f0 (CONDITIONAL_JUMP)  ; LAB_005496f0
    FLD float ptr [EBX + 0xc]           ; 005496e4
    FADD float ptr [0x005e764d]         ; 005496e7 | DAT_005e764d
    FSTP float ptr [EBX + 0xc]          ; 005496ed
    CMP dword ptr [EBX + 0xc],0x40490fdb ; 005496f0
        ;   Label: LAB_005496f0
    JLE 0x00549705                      ; 005496f7
        ;   XREF to: 00549705 (CONDITIONAL_JUMP)  ; LAB_00549705
    FLD float ptr [EBX + 0xc]           ; 005496f9
    FADD float ptr [0x005e7651]         ; 005496fc | DAT_005e7651
    FSTP float ptr [EBX + 0xc]          ; 00549702
    FLD float ptr [EBX + 0x14]          ; 00549705
        ;   Label: LAB_00549705
    FCOMP float ptr [0x005e7649]        ; 00549708 | DAT_005e7649
    FNSTSW AX                           ; 0054970e
    SAHF                                ; 00549710
    JNC 0x0054971f                      ; 00549711
        ;   XREF to: 0054971f (CONDITIONAL_JUMP)  ; LAB_0054971f
    FLD float ptr [EBX + 0x14]          ; 00549713
    FADD float ptr [0x005e764d]         ; 00549716 | DAT_005e764d
    FSTP float ptr [EBX + 0x14]         ; 0054971c
    CMP dword ptr [EBX + 0x14],0x40490fdb ; 0054971f
        ;   Label: LAB_0054971f
    JG 0x00549757                       ; 00549726
        ;   XREF to: 00549757 (CONDITIONAL_JUMP)  ; LAB_00549757
    MOV ESP,EBP                         ; 00549728
    POP EBP                             ; 0054972a
    POP EBX                             ; 0054972b
    RET                                 ; 0054972c
    PUSH 0x2a                           ; 0054972d
        ;   Label: LAB_0054972d
    MOV EAX,[0x00617dd4]                ; 0054972f | DAT_00617dd4
    PUSH EAX                            ; 00549734 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 00549735 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 00549737
    ADD ESP,0x8                         ; 00549739
    TEST EAX,EAX                        ; 0054973c
    JZ 0x00549415                       ; 0054973e
        ;   XREF to: 00549415 (CONDITIONAL_JUMP)  ; LAB_00549415
    FLD float ptr [ESP + 0x4]           ; 00549744
    FLD ST0                             ; 00549748
    FMUL double ptr [0x005e7619]        ; 0054974a | DAT_005e7619
    FSTP ST1                            ; 00549750
    JMP 0x00549411                      ; 00549752
        ;   XREF to: 00549411 (UNCONDITIONAL_JUMP)  ; LAB_00549411
    FLD float ptr [EBX + 0x14]          ; 00549757
        ;   Label: LAB_00549757
    FADD float ptr [0x005e7651]         ; 0054975a | DAT_005e7651
    FSTP float ptr [EBX + 0x14]         ; 00549760
    MOV ESP,EBP                         ; 00549763
    POP EBP                             ; 00549765
    POP EBX                             ; 00549766
    RET                                 ; 00549767

