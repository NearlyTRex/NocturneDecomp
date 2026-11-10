; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_0043554e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5b0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00434e80
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0043554e
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0043554e
    PUSH EBX                            ; 00435550
    PUSH ESI                            ; 00435551
    PUSH EDI                            ; 00435552
    PUSH EBP                            ; 00435553
    SUB ESP,0x34                        ; 00435554
    MOV EDI,dword ptr [ESP + 0x54]      ; 00435557
    MOV ESI,dword ptr [ESP + 0x58]      ; 0043555b
    MOV EBX,dword ptr [ESP + 0x58]      ; 0043555f
    MOV ECX,dword ptr [0x01c6b5b0]      ; 00435563 | DAT_01c6b5b0
    MOV EAX,[0x01c5faf0]                ; 00435569 | DAT_01c5faf0
    MOV EBP,dword ptr [0x01c5faec]      ; 0043556e | DAT_01c5faec
    MOV EDX,dword ptr [0x01c6b5a8]      ; 00435574 | DAT_01c6b5a8
    SUB EAX,EBP                         ; 0043557a
    ADD ESI,ECX                         ; 0043557c
    MOV dword ptr [ESP + 0x10],EAX      ; 0043557e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00435582
    ADD EBX,EDX                         ; 00435586
    TEST EAX,EAX                        ; 00435588
    JNZ 0x00435594                      ; 0043558a
        ;   XREF to: 00435594 (CONDITIONAL_JUMP)  ; LAB_00435594
    ADD ESP,0x34                        ; 0043558c
        ;   Label: LAB_0043558c
    POP EBP                             ; 0043558f
    POP EDI                             ; 00435590
    POP ESI                             ; 00435591
    POP EBX                             ; 00435592
    RET                                 ; 00435593
    MOV EAX,dword ptr [ESP + 0x60]      ; 00435594
        ;   Label: LAB_00435594
    IMUL EAX,EDI                        ; 00435598
    MOV EDX,dword ptr [ESP + 0x50]      ; 0043559b
    MOV ECX,dword ptr [ESP + 0x48]      ; 0043559f
    ADD EAX,EDX                         ; 004355a3
    ADD ECX,EAX                         ; 004355a5
    MOV EBP,dword ptr [ESP + 0x64]      ; 004355a7
    MOV dword ptr [ESP + 0x48],ECX      ; 004355ab
    CALL cockpit_ckptutil.c_FUN_00434e80 ; 004355af
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00434e80()
    MOV dword ptr [ESP + 0x30],EAX      ; 004355b4
    MOV EAX,EBP                         ; 004355b8
    SHL EAX,0x5                         ; 004355ba
    ADD EAX,EBP                         ; 004355bd
    SHL EAX,0x2                         ; 004355bf
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004355c2
    MOV dword ptr [ESP],EAX             ; 004355c6
    MOV EAX,EDI                         ; 004355c9
    ADD EDX,EDI                         ; 004355cb
    SHL EAX,0x5                         ; 004355cd
    SHL EDX,0x2                         ; 004355d0
    LEA EBP,[EDI + EAX*0x1]             ; 004355d3
    MOV EAX,[0x005fba20]                ; 004355d6 | DAT_005fba20
    SHL EBP,0x2                         ; 004355db
    CMP EAX,0x8                         ; 004355de
    JNZ 0x004356a8                      ; 004355e1
        ;   XREF to: 004356a8 (CONDITIONAL_JUMP)  ; LAB_004356a8
    MOV EAX,dword ptr [EDX + 0x1c5faec] ; 004355e7
    MOV EDX,dword ptr [ESP + 0x50]      ; 004355ed
    ADD EDX,EAX                         ; 004355f1
    MOV ECX,dword ptr [ESP + 0x64]      ; 004355f3
    MOV dword ptr [ESP + 0x2c],EDX      ; 004355f7
    CMP EDI,ECX                         ; 004355fb
    JGE 0x0043558c                      ; 004355fd
        ;   XREF to: 0043558c (CONDITIONAL_JUMP)  ; LAB_0043558c
    MOV EAX,dword ptr [ESP]             ; 004355ff
    MOV dword ptr [ESP + 0x14],EBP      ; 00435602
    MOV dword ptr [ESP + 0x8],EAX       ; 00435606
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043560a
        ;   Label: LAB_0043560a
    XOR EBP,EBP                         ; 0043560e
    XOR EDI,EDI                         ; 00435610
    MOV dword ptr [ESP + 0x24],EAX      ; 00435612
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00435616
        ;   Label: LAB_00435616
    ADD EAX,dword ptr [ESP + 0x24]      ; 0043561a
    CMP EDI,dword ptr [EAX]             ; 0043561e
    JGE 0x0043563c                      ; 00435620
        ;   XREF to: 0043563c (CONDITIONAL_JUMP)  ; LAB_0043563c
    LEA EDX,[EAX + EBP*0x1]             ; 00435622
    MOV EAX,dword ptr [EDX + 0x4]       ; 00435625
    MOV EDX,dword ptr [EDX + 0x44]      ; 00435628
    ADD EDX,EAX                         ; 0043562b
    DEC EDX                             ; 0043562d
    CMP EAX,EBX                         ; 0043562e
    JGE 0x00435676                      ; 00435630
        ;   XREF to: 00435676 (CONDITIONAL_JUMP)  ; LAB_00435676
    CMP EDX,EBX                         ; 00435632
    JGE 0x00435674                      ; 00435634
        ;   XREF to: 00435674 (CONDITIONAL_JUMP)  ; LAB_00435674
    INC EDI                             ; 00435636
        ;   Label: LAB_00435636
    ADD EBP,0x4                         ; 00435637
    JMP 0x00435616                      ; 0043563a
        ;   XREF to: 00435616 (UNCONDITIONAL_JUMP)  ; LAB_00435616
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043563c
        ;   Label: LAB_0043563c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00435640
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00435644
    MOV EDX,dword ptr [ESP + 0x48]      ; 00435648
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043564c
    ADD EDI,0x84                        ; 00435650
    ADD EBP,EAX                         ; 00435656
    MOV EAX,dword ptr [ESP + 0x60]      ; 00435658
    MOV dword ptr [ESP + 0x14],EDI      ; 0043565c
    ADD EDX,EAX                         ; 00435660
    MOV dword ptr [ESP + 0x2c],EBP      ; 00435662
    MOV dword ptr [ESP + 0x48],EDX      ; 00435666
    CMP EDI,ECX                         ; 0043566a
    JGE 0x0043558c                      ; 0043566c
        ;   XREF to: 0043558c (CONDITIONAL_JUMP)  ; LAB_0043558c
    JMP 0x0043560a                      ; 00435672
        ;   XREF to: 0043560a (UNCONDITIONAL_JUMP)  ; LAB_0043560a
    MOV EAX,EBX                         ; 00435674
        ;   Label: LAB_00435674
    CMP EDX,ESI                         ; 00435676
        ;   Label: LAB_00435676
    JLE 0x00435680                      ; 00435678
        ;   XREF to: 00435680 (CONDITIONAL_JUMP)  ; LAB_00435680
    CMP EAX,ESI                         ; 0043567a
    JG 0x00435636                       ; 0043567c
        ;   XREF to: 00435636 (CONDITIONAL_JUMP)  ; LAB_00435636
    MOV EDX,ESI                         ; 0043567e
    SUB EDX,EAX                         ; 00435680
        ;   Label: LAB_00435680
    INC EDX                             ; 00435682
    PUSH EDX                            ; 00435683
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00435684
    ADD EDX,EAX                         ; 00435688
    PUSH EDX                            ; 0043568a
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043568b
    MOV ECX,dword ptr [ESP + 0x60]      ; 0043568f
    ADD EAX,EDX                         ; 00435693
    SUB EAX,ECX                         ; 00435695
    PUSH EAX                            ; 00435697
    CALL dword ptr [ESP + 0x3c]         ; 00435698
    ADD ESP,0xc                         ; 0043569c
    INC EDI                             ; 0043569f
    ADD EBP,0x4                         ; 004356a0
    JMP 0x00435616                      ; 004356a3
        ;   XREF to: 00435616 (UNCONDITIONAL_JUMP)  ; LAB_00435616
    MOV EAX,dword ptr [ESP + 0x50]      ; 004356a8
        ;   Label: LAB_004356a8
    MOV EDX,dword ptr [EDX + 0x1c5faec] ; 004356ac
    ADD EAX,EAX                         ; 004356b2
    ADD EDX,EAX                         ; 004356b4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004356b6
    MOV dword ptr [ESP + 0x28],EDX      ; 004356ba
    MOV EDX,EAX                         ; 004356be
    SAR EDX,0x1f                        ; 004356c0
    SUB EAX,EDX                         ; 004356c3
    SAR EAX,0x1                         ; 004356c5
    MOV EDX,dword ptr [ESP + 0x64]      ; 004356c7
    MOV dword ptr [ESP + 0x10],EAX      ; 004356cb
    CMP EDI,EDX                         ; 004356cf
    JGE 0x0043558c                      ; 004356d1
        ;   XREF to: 0043558c (CONDITIONAL_JUMP)  ; LAB_0043558c
    MOV EAX,dword ptr [ESP + 0x58]      ; 004356d7
    ADD EAX,EAX                         ; 004356db
    MOV dword ptr [ESP + 0x1c],EAX      ; 004356dd
    MOV EAX,dword ptr [ESP + 0x10]      ; 004356e1
    ADD EAX,EAX                         ; 004356e5
    MOV dword ptr [ESP + 0x4],EAX       ; 004356e7
    MOV EAX,dword ptr [ESP]             ; 004356eb
    MOV dword ptr [ESP + 0x18],EBP      ; 004356ee
    MOV dword ptr [ESP + 0xc],EAX       ; 004356f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004356f6
        ;   Label: LAB_004356f6
    XOR EBP,EBP                         ; 004356fa
    XOR EDI,EDI                         ; 004356fc
    MOV dword ptr [ESP + 0x20],EAX      ; 004356fe
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00435702
        ;   Label: LAB_00435702
    ADD EAX,dword ptr [ESP + 0x20]      ; 00435706
    CMP EDI,dword ptr [EAX]             ; 0043570a
    JGE 0x00435728                      ; 0043570c
        ;   XREF to: 00435728 (CONDITIONAL_JUMP)  ; LAB_00435728
    LEA EDX,[EAX + EBP*0x1]             ; 0043570e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00435711
    MOV EDX,dword ptr [EDX + 0x44]      ; 00435714
    ADD EDX,EAX                         ; 00435717
    DEC EDX                             ; 00435719
    CMP EAX,EBX                         ; 0043571a
    JGE 0x00435762                      ; 0043571c
        ;   XREF to: 00435762 (CONDITIONAL_JUMP)  ; LAB_00435762
    CMP EDX,EBX                         ; 0043571e
    JGE 0x00435760                      ; 00435720
        ;   XREF to: 00435760 (CONDITIONAL_JUMP)  ; LAB_00435760
    INC EDI                             ; 00435722
        ;   Label: LAB_00435722
    ADD EBP,0x4                         ; 00435723
    JMP 0x00435702                      ; 00435726
        ;   XREF to: 00435702 (UNCONDITIONAL_JUMP)  ; LAB_00435702
    MOV EDI,dword ptr [ESP + 0x18]      ; 00435728
        ;   Label: LAB_00435728
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043572c
    MOV EBP,dword ptr [ESP + 0x28]      ; 00435730
    MOV EDX,dword ptr [ESP + 0x48]      ; 00435734
    MOV ECX,dword ptr [ESP + 0xc]       ; 00435738
    ADD EDI,0x84                        ; 0043573c
    ADD EBP,EAX                         ; 00435742
    MOV EAX,dword ptr [ESP + 0x60]      ; 00435744
    MOV dword ptr [ESP + 0x18],EDI      ; 00435748
    ADD EDX,EAX                         ; 0043574c
    MOV dword ptr [ESP + 0x28],EBP      ; 0043574e
    MOV dword ptr [ESP + 0x48],EDX      ; 00435752
    CMP EDI,ECX                         ; 00435756
    JGE 0x0043558c                      ; 00435758
        ;   XREF to: 0043558c (CONDITIONAL_JUMP)  ; LAB_0043558c
    JMP 0x004356f6                      ; 0043575e
        ;   XREF to: 004356f6 (UNCONDITIONAL_JUMP)  ; LAB_004356f6
    MOV EAX,EBX                         ; 00435760
        ;   Label: LAB_00435760
    CMP EDX,ESI                         ; 00435762
        ;   Label: LAB_00435762
    JLE 0x0043576c                      ; 00435764
        ;   XREF to: 0043576c (CONDITIONAL_JUMP)  ; LAB_0043576c
    CMP EAX,ESI                         ; 00435766
    JG 0x00435722                       ; 00435768
        ;   XREF to: 00435722 (CONDITIONAL_JUMP)  ; LAB_00435722
    MOV EDX,ESI                         ; 0043576a
    SUB EDX,EAX                         ; 0043576c
        ;   Label: LAB_0043576c
    INC EDX                             ; 0043576e
    PUSH EDX                            ; 0043576f
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00435770
    ADD EDX,EAX                         ; 00435774
    PUSH EDX                            ; 00435776
    ADD EAX,EAX                         ; 00435777
    MOV EDX,dword ptr [ESP + 0x30]      ; 00435779
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043577d
    ADD EAX,EDX                         ; 00435781
    SUB EAX,ECX                         ; 00435783
    PUSH EAX                            ; 00435785
    CALL dword ptr [ESP + 0x3c]         ; 00435786
    ADD ESP,0xc                         ; 0043578a
    INC EDI                             ; 0043578d
    ADD EBP,0x4                         ; 0043578e
    JMP 0x00435702                      ; 00435791
        ;   XREF to: 00435702 (UNCONDITIONAL_JUMP)  ; LAB_00435702

