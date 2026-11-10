; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_spotview_cpp_FUN_0058443e(CSpotView *param_1,uint param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f62f4
;   undefined4 DAT_005f62fc
;   undefined4 DAT_005f6304
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0061f2a4
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_clampValues_FUN_00584720
;   shape_spotview.cpp_CSpotView_reset_FUN_005843f0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0058443e
        ;   Label: shape_spotview.cpp_FUN_0058443e
    PUSH EBX                            ; 00584440
    PUSH EBP                            ; 00584441
    MOV EBP,ESP                         ; 00584442
    SUB ESP,0x18                        ; 00584444
    AND ESP,0xfffffff8                  ; 00584447
    MOV EBX,dword ptr [EBP + 0xc]       ; 0058444a
    PUSH 0x38                           ; 0058444d
    MOV EAX,[0x0061f2a4]                ; 0058444f | DAT_0061f2a4
    MOV EDX,0x3f800000                  ; 00584454
    PUSH EAX                            ; 00584459
    MOV dword ptr [ESP + 0x8],EDX       ; 0058445a
    MOV EDX,dword ptr [EAX]             ; 0058445e
    CALL dword ptr [EDX]                ; 00584460
    ADD ESP,0x8                         ; 00584462
    TEST EAX,EAX                        ; 00584465
    JZ 0x005846df                       ; 00584467
        ;   XREF to: 005846df (CONDITIONAL_JUMP)  ; LAB_005846df
    MOV dword ptr [ESP],0x3d4ccccd      ; 0058446d
    MOV EAX,[0x0061d95c]                ; 00584474 | g_CGamePtr
        ;   Label: LAB_00584474
    FLD float ptr [ESP]                 ; 00584479
    FLD ST0                             ; 0058447c
    FMUL double ptr [0x005f62fc]        ; 0058447e | DAT_005f62fc
    FLD float ptr [EAX + 0x294]         ; 00584484
    FMULP ST2                           ; 0058448a
    FLD float ptr [EBX + 0x2c]          ; 0058448c
    FMUL double ptr [0x005f6304]        ; 0058448f | DAT_005f6304
    FXCH ST2                            ; 00584495
    FST float ptr [ESP + 0xc]           ; 00584497
    FMUL float ptr [0x005f62f4]         ; 0058449b | DAT_005f62f4
    FXCH                                ; 005844a1
    FSTP float ptr [ESP + 0x8]          ; 005844a3
    FXCH                                ; 005844a7
    FST float ptr [ESP + 0x4]           ; 005844a9
    FLD1                                ; 005844ad
    FXCH ST2                            ; 005844af
    FSTP float ptr [ESP + 0x10]         ; 005844b1
    FXCH                                ; 005844b5
    FCOMPP                              ; 005844b7
    FNSTSW AX                           ; 005844b9
    SAHF                                ; 005844bb
    JBE 0x005844c6                      ; 005844bc
        ;   XREF to: 005844c6 (CONDITIONAL_JUMP)  ; LAB_005844c6
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 005844be
    FLD float ptr [ESP + 0x4]           ; 005844c6
        ;   Label: LAB_005844c6
    FMUL float ptr [ESP + 0xc]          ; 005844ca
    FLD float ptr [EBX + 0x2c]          ; 005844ce
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005844d1
    FLD1                                ; 005844d4
    MOV dword ptr [ESP + 0x14],EAX      ; 005844d6
    FXCH ST2                            ; 005844da
    FSTP float ptr [ESP + 0x4]          ; 005844dc
    FXCH                                ; 005844e0
    FCOMPP                              ; 005844e2
    FNSTSW AX                           ; 005844e4
    SAHF                                ; 005844e6
    JBE 0x005844f1                      ; 005844e7
        ;   XREF to: 005844f1 (CONDITIONAL_JUMP)  ; LAB_005844f1
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 005844e9
    FLD float ptr [ESP + 0x14]          ; 005844f1
        ;   Label: LAB_005844f1
    FMUL float ptr [ESP + 0xc]          ; 005844f5
    MOV AH,byte ptr [EBP + 0x10]        ; 005844f9
    FSTP float ptr [ESP + 0x14]         ; 005844fc
    TEST AH,0x2                         ; 00584500
    JZ 0x0058457d                       ; 00584503
        ;   XREF to: 0058457d (CONDITIONAL_JUMP)  ; LAB_0058457d
    PUSH 0x52                           ; 00584509
    MOV EAX,[0x0061f2a4]                ; 0058450b | DAT_0061f2a4
    PUSH EAX                            ; 00584510
    MOV EDX,dword ptr [EAX]             ; 00584511
    CALL dword ptr [EDX]                ; 00584513
    ADD ESP,0x8                         ; 00584515
    TEST EAX,EAX                        ; 00584518
    JZ 0x00584526                       ; 0058451a
        ;   XREF to: 00584526 (CONDITIONAL_JUMP)  ; LAB_00584526
    FLD float ptr [EBX + 0x28]          ; 0058451c
    FADD float ptr [ESP + 0x10]         ; 0058451f
    FSTP float ptr [EBX + 0x28]         ; 00584523
    PUSH 0x53                           ; 00584526
        ;   Label: LAB_00584526
    MOV EAX,[0x0061f2a4]                ; 00584528 | DAT_0061f2a4
    PUSH EAX                            ; 0058452d
    MOV EDX,dword ptr [EAX]             ; 0058452e
    CALL dword ptr [EDX]                ; 00584530
    ADD ESP,0x8                         ; 00584532
    TEST EAX,EAX                        ; 00584535
    JZ 0x00584543                       ; 00584537
        ;   XREF to: 00584543 (CONDITIONAL_JUMP)  ; LAB_00584543
    FLD float ptr [EBX + 0x28]          ; 00584539
    FSUB float ptr [ESP + 0x10]         ; 0058453c
    FSTP float ptr [EBX + 0x28]         ; 00584540
    PUSH 0x35                           ; 00584543
        ;   Label: LAB_00584543
    MOV EAX,[0x0061f2a4]                ; 00584545 | DAT_0061f2a4
    PUSH EAX                            ; 0058454a
    MOV EDX,dword ptr [EAX]             ; 0058454b
    CALL dword ptr [EDX]                ; 0058454d
    ADD ESP,0x8                         ; 0058454f
    TEST EAX,EAX                        ; 00584552
    JZ 0x00584560                       ; 00584554
        ;   XREF to: 00584560 (CONDITIONAL_JUMP)  ; LAB_00584560
    FLD float ptr [EBX + 0x28]          ; 00584556
    FADD float ptr [ESP + 0x10]         ; 00584559
    FSTP float ptr [EBX + 0x28]         ; 0058455d
    PUSH 0x37                           ; 00584560
        ;   Label: LAB_00584560
    MOV EAX,[0x0061f2a4]                ; 00584562 | DAT_0061f2a4
    PUSH EAX                            ; 00584567
    MOV EDX,dword ptr [EAX]             ; 00584568
    CALL dword ptr [EDX]                ; 0058456a
    ADD ESP,0x8                         ; 0058456c
    TEST EAX,EAX                        ; 0058456f
    JZ 0x0058457d                       ; 00584571
        ;   XREF to: 0058457d (CONDITIONAL_JUMP)  ; LAB_0058457d
    FLD float ptr [EBX + 0x28]          ; 00584573
    FSUB float ptr [ESP + 0x10]         ; 00584576
    FSTP float ptr [EBX + 0x28]         ; 0058457a
    TEST byte ptr [EBP + 0x10],0x1      ; 0058457d
        ;   Label: LAB_0058457d
    JZ 0x005845bd                       ; 00584581
        ;   XREF to: 005845bd (CONDITIONAL_JUMP)  ; LAB_005845bd
    PUSH 0x4a                           ; 00584583
    MOV EAX,[0x0061f2a4]                ; 00584585 | DAT_0061f2a4
    PUSH EAX                            ; 0058458a
    MOV EDX,dword ptr [EAX]             ; 0058458b
    CALL dword ptr [EDX]                ; 0058458d
    ADD ESP,0x8                         ; 0058458f
    TEST EAX,EAX                        ; 00584592
    JZ 0x005845a0                       ; 00584594
        ;   XREF to: 005845a0 (CONDITIONAL_JUMP)  ; LAB_005845a0
    FLD float ptr [EBX + 0x24]          ; 00584596
    FADD float ptr [ESP + 0x10]         ; 00584599
    FSTP float ptr [EBX + 0x24]         ; 0058459d
    PUSH 0x4e                           ; 005845a0
        ;   Label: LAB_005845a0
    MOV EAX,[0x0061f2a4]                ; 005845a2 | DAT_0061f2a4
    PUSH EAX                            ; 005845a7
    MOV EDX,dword ptr [EAX]             ; 005845a8
    CALL dword ptr [EDX]                ; 005845aa
    ADD ESP,0x8                         ; 005845ac
    TEST EAX,EAX                        ; 005845af
    JZ 0x005845bd                       ; 005845b1
        ;   XREF to: 005845bd (CONDITIONAL_JUMP)  ; LAB_005845bd
    FLD float ptr [EBX + 0x24]          ; 005845b3
    FSUB float ptr [ESP + 0x10]         ; 005845b6
    FSTP float ptr [EBX + 0x24]         ; 005845ba
    TEST byte ptr [EBP + 0x10],0x8      ; 005845bd
        ;   Label: LAB_005845bd
    JZ 0x0058463b                       ; 005845c1
        ;   XREF to: 0058463b (CONDITIONAL_JUMP)  ; LAB_0058463b
    PUSH 0x4b                           ; 005845c7
    MOV EAX,[0x0061f2a4]                ; 005845c9 | DAT_0061f2a4
    PUSH EAX                            ; 005845ce
    MOV EDX,dword ptr [EAX]             ; 005845cf
    CALL dword ptr [EDX]                ; 005845d1
    ADD ESP,0x8                         ; 005845d3
    TEST EAX,EAX                        ; 005845d6
    JZ 0x005845e4                       ; 005845d8
        ;   XREF to: 005845e4 (CONDITIONAL_JUMP)  ; LAB_005845e4
    FLD float ptr [EBX + 0x30]          ; 005845da
    FSUB float ptr [ESP + 0x14]         ; 005845dd
    FSTP float ptr [EBX + 0x30]         ; 005845e1
    PUSH 0x4d                           ; 005845e4
        ;   Label: LAB_005845e4
    MOV EAX,[0x0061f2a4]                ; 005845e6 | DAT_0061f2a4
    PUSH EAX                            ; 005845eb
    MOV EDX,dword ptr [EAX]             ; 005845ec
    CALL dword ptr [EDX]                ; 005845ee
    ADD ESP,0x8                         ; 005845f0
    TEST EAX,EAX                        ; 005845f3
    JZ 0x00584601                       ; 005845f5
        ;   XREF to: 00584601 (CONDITIONAL_JUMP)  ; LAB_00584601
    FLD float ptr [EBX + 0x30]          ; 005845f7
    FADD float ptr [ESP + 0x14]         ; 005845fa
    FSTP float ptr [EBX + 0x30]         ; 005845fe
    PUSH 0x10                           ; 00584601
        ;   Label: LAB_00584601
    MOV EAX,[0x0061f2a4]                ; 00584603 | DAT_0061f2a4
    PUSH EAX                            ; 00584608
    MOV EDX,dword ptr [EAX]             ; 00584609
    CALL dword ptr [EDX]                ; 0058460b
    ADD ESP,0x8                         ; 0058460d
    TEST EAX,EAX                        ; 00584610
    JZ 0x0058461e                       ; 00584612
        ;   XREF to: 0058461e (CONDITIONAL_JUMP)  ; LAB_0058461e
    FLD float ptr [EBX + 0x34]          ; 00584614
    FADD float ptr [ESP + 0x14]         ; 00584617
    FSTP float ptr [EBX + 0x34]         ; 0058461b
    PUSH 0x1e                           ; 0058461e
        ;   Label: LAB_0058461e
    MOV EAX,[0x0061f2a4]                ; 00584620 | DAT_0061f2a4
    PUSH EAX                            ; 00584625
    MOV EDX,dword ptr [EAX]             ; 00584626
    CALL dword ptr [EDX]                ; 00584628
    ADD ESP,0x8                         ; 0058462a
    TEST EAX,EAX                        ; 0058462d
    JZ 0x0058463b                       ; 0058462f
        ;   XREF to: 0058463b (CONDITIONAL_JUMP)  ; LAB_0058463b
    FLD float ptr [EBX + 0x34]          ; 00584631
    FSUB float ptr [ESP + 0x14]         ; 00584634
    FSTP float ptr [EBX + 0x34]         ; 00584638
    TEST byte ptr [EBP + 0x10],0x4      ; 0058463b
        ;   Label: LAB_0058463b
    JZ 0x0058467b                       ; 0058463f
        ;   XREF to: 0058467b (CONDITIONAL_JUMP)  ; LAB_0058467b
    PUSH 0x48                           ; 00584641
    MOV EAX,[0x0061f2a4]                ; 00584643 | DAT_0061f2a4
    PUSH EAX                            ; 00584648
    MOV EDX,dword ptr [EAX]             ; 00584649
    CALL dword ptr [EDX]                ; 0058464b
    ADD ESP,0x8                         ; 0058464d
    TEST EAX,EAX                        ; 00584650
    JZ 0x0058465e                       ; 00584652
        ;   XREF to: 0058465e (CONDITIONAL_JUMP)  ; LAB_0058465e
    FLD float ptr [EBX + 0x2c]          ; 00584654
    FSUB float ptr [ESP + 0x4]          ; 00584657
    FSTP float ptr [EBX + 0x2c]         ; 0058465b
    PUSH 0x50                           ; 0058465e
        ;   Label: LAB_0058465e
    MOV EAX,[0x0061f2a4]                ; 00584660 | DAT_0061f2a4
    PUSH EAX                            ; 00584665
    MOV EDX,dword ptr [EAX]             ; 00584666
    CALL dword ptr [EDX]                ; 00584668
    ADD ESP,0x8                         ; 0058466a
    TEST EAX,EAX                        ; 0058466d
    JZ 0x0058467b                       ; 0058466f
        ;   XREF to: 0058467b (CONDITIONAL_JUMP)  ; LAB_0058467b
    FLD float ptr [EBX + 0x2c]          ; 00584671
    FADD float ptr [ESP + 0x4]          ; 00584674
    FSTP float ptr [EBX + 0x2c]         ; 00584678
    TEST byte ptr [EBP + 0x10],0x10     ; 0058467b
        ;   Label: LAB_0058467b
    JZ 0x005846bd                       ; 0058467f
        ;   XREF to: 005846bd (CONDITIONAL_JUMP)  ; LAB_005846bd
    PUSH 0xd                            ; 00584681
    MOV EAX,[0x0061f2a4]                ; 00584683 | DAT_0061f2a4
    PUSH EAX                            ; 00584688
    MOV EDX,dword ptr [EAX]             ; 00584689
    CALL dword ptr [EDX + 0x4]          ; 0058468b
    ADD ESP,0x8                         ; 0058468e
    TEST EAX,EAX                        ; 00584691
    JZ 0x0058469f                       ; 00584693
        ;   XREF to: 0058469f (CONDITIONAL_JUMP)  ; LAB_0058469f
    FLD float ptr [EBX + 0x38]          ; 00584695
    FDIV float ptr [ESP + 0x8]          ; 00584698
    FSTP float ptr [EBX + 0x38]         ; 0058469c
    PUSH 0xc                            ; 0058469f
        ;   Label: LAB_0058469f
    MOV EAX,[0x0061f2a4]                ; 005846a1 | DAT_0061f2a4
    PUSH EAX                            ; 005846a6
    MOV EDX,dword ptr [EAX]             ; 005846a7
    CALL dword ptr [EDX + 0x4]          ; 005846a9
    ADD ESP,0x8                         ; 005846ac
    TEST EAX,EAX                        ; 005846af
    JZ 0x005846bd                       ; 005846b1
        ;   XREF to: 005846bd (CONDITIONAL_JUMP)  ; LAB_005846bd
    FLD float ptr [EBX + 0x38]          ; 005846b3
    FMUL float ptr [ESP + 0x8]          ; 005846b6
    FSTP float ptr [EBX + 0x38]         ; 005846ba
    PUSH 0x4c                           ; 005846bd
        ;   Label: LAB_005846bd
    MOV EAX,[0x0061f2a4]                ; 005846bf | DAT_0061f2a4
    PUSH EAX                            ; 005846c4
    MOV EDX,dword ptr [EAX]             ; 005846c5
    CALL dword ptr [EDX + 0x4]          ; 005846c7
    ADD ESP,0x8                         ; 005846ca
    TEST EAX,EAX                        ; 005846cd
    JNZ 0x00584702                      ; 005846cf
        ;   XREF to: 00584702 (CONDITIONAL_JUMP)  ; LAB_00584702
    PUSH EBX                            ; 005846d1
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00584720 ; 005846d2
        ;   XREF to: 00584720 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00584720(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 005846d7
    MOV ESP,EBP                         ; 005846da
    POP EBP                             ; 005846dc
    POP EBX                             ; 005846dd
    RET                                 ; 005846de
    PUSH 0x2a                           ; 005846df
        ;   Label: LAB_005846df
    MOV EAX,[0x0061f2a4]                ; 005846e1 | DAT_0061f2a4
    PUSH EAX                            ; 005846e6
    MOV EDX,dword ptr [EAX]             ; 005846e7
    CALL dword ptr [EDX]                ; 005846e9
    ADD ESP,0x8                         ; 005846eb
    TEST EAX,EAX                        ; 005846ee
    JZ 0x00584474                       ; 005846f0
        ;   XREF to: 00584474 (CONDITIONAL_JUMP)  ; LAB_00584474
    MOV dword ptr [ESP],0x40800000      ; 005846f6
    JMP 0x00584474                      ; 005846fd
        ;   XREF to: 00584474 (UNCONDITIONAL_JUMP)  ; LAB_00584474
    MOV EDX,dword ptr [EBP + 0x10]      ; 00584702
        ;   Label: LAB_00584702
    PUSH EDX                            ; 00584705
    PUSH EBX                            ; 00584706
    CALL shape_spotview.cpp_CSpotView_reset_FUN_005843f0 ; 00584707
        ;   XREF to: 005843f0 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_005843f0(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0058470c
    PUSH EBX                            ; 0058470f
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00584720 ; 00584710
        ;   XREF to: 00584720 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00584720(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00584715
    MOV ESP,EBP                         ; 00584718
    POP EBP                             ; 0058471a
    POP EBX                             ; 0058471b
    RET                                 ; 0058471c

