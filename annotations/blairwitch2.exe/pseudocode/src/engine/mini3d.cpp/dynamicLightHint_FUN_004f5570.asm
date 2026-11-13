; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_dynamicLightHint_FUN_004f5570(float *arg1,float *arg2,float *arg3,float *arg4)
;
; Parameters:
; float *          Stack[0x4]:4   arg1
; float *          Stack[0x8]:4   arg2
; float *          Stack[0xc]:4   arg3
; float *          Stack[0x10]:4   arg4
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d0c3a0
;   undefined4 DAT_0264bcd4
;   undefined4 DAT_0264bcd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5570
        ;   Label: engine_mini3d.cpp_dynamicLightHint_FUN_004f5570
    PUSH ESI                            ; 004f5571
    PUSH EDI                            ; 004f5572
    PUSH EBP                            ; 004f5573
    SUB ESP,0x34                        ; 004f5574
    MOV EDI,dword ptr [ESP + 0x48]      ; 004f5577
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004f557b
    MOV EBP,dword ptr [ESP + 0x50]      ; 004f557f
    CMP dword ptr [0x01d0c3a0],0x0      ; 004f5583 | DAT_01d0c3a0
    JZ 0x004f55e2                       ; 004f558a
        ;   XREF to: 004f55e2 (CONDITIONAL_JUMP)  ; LAB_004f55e2
    CMP dword ptr [0x0264bcd4],0x0      ; 004f5590 | DAT_0264bcd4
    JZ 0x004f55ab                       ; 004f5597
        ;   XREF to: 004f55ab (CONDITIONAL_JUMP)  ; LAB_004f55ab
    CMP dword ptr [0x01c37788],0x0      ; 004f5599 | DAT_01c37788
    JZ 0x004f55ab                       ; 004f55a0
        ;   XREF to: 004f55ab (CONDITIONAL_JUMP)  ; LAB_004f55ab
    CMP dword ptr [0x0264bcd8],0x0      ; 004f55a2 | DAT_0264bcd8
    JZ 0x004f55e2                       ; 004f55a9
        ;   XREF to: 004f55e2 (CONDITIONAL_JUMP)  ; LAB_004f55e2
    TEST EDI,EDI                        ; 004f55ab
        ;   Label: LAB_004f55ab
    JNZ 0x004f55fa                      ; 004f55ad
        ;   XREF to: 004f55fa (CONDITIONAL_JUMP)  ; LAB_004f55fa
    MOV EBX,dword ptr [0x01d0c3a0]      ; 004f55af | DAT_01d0c3a0
    XOR EDX,EDX                         ; 004f55b5
    TEST EBX,EBX                        ; 004f55b7
    JLE 0x004f55d0                      ; 004f55b9
        ;   XREF to: 004f55d0 (CONDITIONAL_JUMP)  ; LAB_004f55d0
    MOV AH,0x1                          ; 004f55bb
    MOV ESI,dword ptr [0x01d0c3a0]      ; 004f55bd | DAT_01d0c3a0
    INC EDX                             ; 004f55c3
        ;   Label: LAB_004f55c3
    MOV byte ptr [EDX + 0x1d0d27f],AH   ; 004f55c4
    CMP EDX,ESI                         ; 004f55ca
    JL 0x004f55c3                       ; 004f55cc
        ;   XREF to: 004f55c3 (CONDITIONAL_JUMP)  ; LAB_004f55c3
    MOV EAX,EAX                         ; 004f55ce
    CMP dword ptr [0x0264bcd8],0x0      ; 004f55d0 | DAT_0264bcd8
        ;   Label: LAB_004f55d0
    JZ 0x004f55e2                       ; 004f55d7
        ;   XREF to: 004f55e2 (CONDITIONAL_JUMP)  ; LAB_004f55e2
    CMP dword ptr [0x01c37788],0x0      ; 004f55d9 | DAT_01c37788
    JNZ 0x004f55ea                      ; 004f55e0
        ;   XREF to: 004f55ea (CONDITIONAL_JUMP)  ; LAB_004f55ea
    ADD ESP,0x34                        ; 004f55e2
        ;   Label: LAB_004f55e2
    POP EBP                             ; 004f55e5
    POP EDI                             ; 004f55e6
    POP ESI                             ; 004f55e7
    POP EBX                             ; 004f55e8
    RET                                 ; 004f55e9
    PUSH 0x1d0d280                      ; 004f55ea
        ;   Label: LAB_004f55ea
    CALL dword ptr [0x0264bcd8]         ; 004f55ef | DAT_0264bcd8
    ADD ESP,0x4                         ; 004f55f5
    JMP 0x004f55e2                      ; 004f55f8
        ;   XREF to: 004f55e2 (UNCONDITIONAL_JUMP)  ; LAB_004f55e2
    XOR EDX,EDX                         ; 004f55fa
        ;   Label: LAB_004f55fa
    MOV ECX,dword ptr [0x01d0c3a0]      ; 004f55fc | DAT_01d0c3a0
    MOV dword ptr [ESP + 0x28],EDX      ; 004f5602
    TEST ECX,ECX                        ; 004f5606
    JLE 0x004f5803                      ; 004f5608
        ;   XREF to: 004f5803 (CONDITIONAL_JUMP)  ; LAB_004f5803
    MOV dword ptr [ESP + 0x24],0x1d0c3a4 ; 004f560e
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f5616
        ;   Label: LAB_004f5616
    FLD1                                ; 004f561a
    FDIV float ptr [ECX + 0x3c]         ; 004f561c
    MOV EDX,0xff                        ; 004f561f
    XOR ESI,ESI                         ; 004f5624
    MOV dword ptr [ESP + 0x30],EDX      ; 004f5626
    FSTP float ptr [ESP + 0x2c]         ; 004f562a
    XOR EDX,EDX                         ; 004f562e
        ;   Label: LAB_004f562e
    TEST SI,0x1                         ; 004f5630
    JZ 0x004f5833                       ; 004f5635
        ;   XREF to: 004f5833 (CONDITIONAL_JUMP)  ; LAB_004f5833
    MOV EAX,dword ptr [EBP]             ; 004f563b
    MOV dword ptr [ESP + 0x18],EAX      ; 004f563e
        ;   Label: LAB_004f563e
    TEST SI,0x2                         ; 004f5642
    JZ 0x004f583e                       ; 004f5647
        ;   XREF to: 004f583e (CONDITIONAL_JUMP)  ; LAB_004f583e
    MOV EAX,dword ptr [EBP + 0x4]       ; 004f564d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f5650
        ;   Label: LAB_004f5650
    TEST SI,0x4                         ; 004f5654
    JZ 0x004f584a                       ; 004f5659
        ;   XREF to: 004f584a (CONDITIONAL_JUMP)  ; LAB_004f584a
    MOV EAX,dword ptr [EBP + 0x8]       ; 004f565f
    MOV dword ptr [ESP + 0x20],EAX      ; 004f5662
        ;   Label: LAB_004f5662
    FLD float ptr [ESP + 0x1c]          ; 004f5666
    FMUL float ptr [EBX + 0x4]          ; 004f566a
    FLD float ptr [ESP + 0x1c]          ; 004f566d
    FMUL float ptr [EBX + 0x10]         ; 004f5671
    FLD float ptr [ESP + 0x1c]          ; 004f5674
    FMUL float ptr [EBX + 0x1c]         ; 004f5678
    FLD float ptr [ESP + 0x18]          ; 004f567b
    FMUL float ptr [EBX]                ; 004f567f
    FLD float ptr [ESP + 0x18]          ; 004f5681
    FMUL float ptr [EBX + 0xc]          ; 004f5685
    FLD float ptr [ESP + 0x18]          ; 004f5688
    FXCH ST2                            ; 004f568c
    FADDP ST5,ST0                       ; 004f568e
    FXCH                                ; 004f5690
    FMUL float ptr [EBX + 0x18]         ; 004f5692
    FLD float ptr [ESP + 0x20]          ; 004f5695
    FMUL float ptr [EBX + 0x8]          ; 004f5699
    FXCH ST2                            ; 004f569c
    FADDP ST4,ST0                       ; 004f569e
    FADDP ST2,ST0                       ; 004f56a0
    FLD float ptr [ESP + 0x20]          ; 004f56a2
    FMUL float ptr [EBX + 0x14]         ; 004f56a6
    FLD float ptr [ESP + 0x20]          ; 004f56a9
    FXCH                                ; 004f56ad
    FADDP ST4,ST0                       ; 004f56af
    FMUL float ptr [EBX + 0x20]         ; 004f56b1
    FXCH ST3                            ; 004f56b4
    FADD float ptr [EDI + 0x4]          ; 004f56b6
    FXCH                                ; 004f56b9
    FADDP ST4,ST0                       ; 004f56bb
    FSUB float ptr [ECX + 0x4]          ; 004f56bd
    FXCH ST3                            ; 004f56c0
    FADD float ptr [EDI]                ; 004f56c2
    FXCH ST3                            ; 004f56c4
    FST float ptr [ESP + 0x10]          ; 004f56c6
    FMUL float ptr [ECX + 0x18]         ; 004f56ca
    FXCH ST3                            ; 004f56cd
    FSTP float ptr [ESP + 0xc]          ; 004f56cf
    FLD float ptr [ESP + 0x10]          ; 004f56d3
    FMUL float ptr [ECX + 0x1c]         ; 004f56d7
    FLD float ptr [ESP + 0x10]          ; 004f56da
    FMUL float ptr [ECX + 0x20]         ; 004f56de
    FXCH ST3                            ; 004f56e1
    FADDP ST2,ST0                       ; 004f56e3
    FLD float ptr [ESP + 0xc]           ; 004f56e5
    FSUB float ptr [ECX]                ; 004f56e9
    FXCH ST2                            ; 004f56eb
    FADD float ptr [EDI + 0x8]          ; 004f56ed
    FXCH ST2                            ; 004f56f0
    FST float ptr [ESP + 0xc]           ; 004f56f2
    FMUL float ptr [ECX + 0xc]          ; 004f56f6
    FXCH ST2                            ; 004f56f9
    FSTP float ptr [ESP + 0x14]         ; 004f56fb
    FLD float ptr [ESP + 0xc]           ; 004f56ff
    FMUL float ptr [ECX + 0x10]         ; 004f5703
    FLD float ptr [ESP + 0xc]           ; 004f5706
    FMUL float ptr [ECX + 0x14]         ; 004f570a
    FLD float ptr [ESP + 0x14]          ; 004f570d
    FSUB float ptr [ECX + 0x8]          ; 004f5711
    FXCH ST4                            ; 004f5714
    FADDP ST6,ST0                       ; 004f5716
    FXCH ST3                            ; 004f5718
    FST float ptr [ESP + 0x14]          ; 004f571a
    FMUL float ptr [ECX + 0x24]         ; 004f571e
    FXCH                                ; 004f5721
    FADDP ST2,ST0                       ; 004f5723
    FXCH ST2                            ; 004f5725
    FADDP ST3,ST0                       ; 004f5727
    FLD float ptr [ESP + 0x14]          ; 004f5729
    FMUL float ptr [ECX + 0x28]         ; 004f572d
    FLD float ptr [ESP + 0x14]          ; 004f5730
    FXCH ST3                            ; 004f5734
    FADDP ST5,ST0                       ; 004f5736
    FXCH ST2                            ; 004f5738
    FMUL float ptr [ECX + 0x2c]         ; 004f573a
    FXCH ST4                            ; 004f573d
    FLD float ptr [ESP + 0x2c]          ; 004f573f
    FXCH                                ; 004f5743
    FMUL ST1                            ; 004f5745
    FXCH ST3                            ; 004f5747
    FADDP ST2,ST0                       ; 004f5749
    FXCH ST4                            ; 004f574b
    FADDP ST3,ST0                       ; 004f574d
    FMULP ST3                           ; 004f574f
    FXCH                                ; 004f5751
    FSTP float ptr [ESP + 0x8]          ; 004f5753
    FSTP float ptr [ESP]                ; 004f5757
    FSTP float ptr [ESP + 0x4]          ; 004f575a
    FLD float ptr [ESP]                 ; 004f575e
    FCOMP float ptr [ESP + 0x8]         ; 004f5761
    FNSTSW AX                           ; 004f5765
    SAHF                                ; 004f5767
    JBE 0x004f576d                      ; 004f5768
        ;   XREF to: 004f576d (CONDITIONAL_JUMP)  ; LAB_004f576d
    OR DL,0x1                           ; 004f576a
    FLD float ptr [ESP + 0x8]           ; 004f576d
        ;   Label: LAB_004f576d
    FCHS                                ; 004f5771
    FCOMP float ptr [ESP]               ; 004f5773
    FNSTSW AX                           ; 004f5776
    SAHF                                ; 004f5778
    JBE 0x004f577e                      ; 004f5779
        ;   XREF to: 004f577e (CONDITIONAL_JUMP)  ; LAB_004f577e
    OR DL,0x2                           ; 004f577b
    FLD float ptr [ESP + 0x4]           ; 004f577e
        ;   Label: LAB_004f577e
    FCOMP float ptr [ESP + 0x8]         ; 004f5782
    FNSTSW AX                           ; 004f5786
    SAHF                                ; 004f5788
    JBE 0x004f578e                      ; 004f5789
        ;   XREF to: 004f578e (CONDITIONAL_JUMP)  ; LAB_004f578e
    OR DL,0x4                           ; 004f578b
    FLD float ptr [ESP + 0x8]           ; 004f578e
        ;   Label: LAB_004f578e
    FCHS                                ; 004f5792
    FCOMP float ptr [ESP + 0x4]         ; 004f5794
    FNSTSW AX                           ; 004f5798
    SAHF                                ; 004f579a
    JBE 0x004f57a0                      ; 004f579b
        ;   XREF to: 004f57a0 (CONDITIONAL_JUMP)  ; LAB_004f57a0
    OR DL,0x8                           ; 004f579d
    FLDZ                                ; 004f57a0
        ;   Label: LAB_004f57a0
    FCOMP float ptr [ESP + 0x8]         ; 004f57a2
    FNSTSW AX                           ; 004f57a6
    SAHF                                ; 004f57a8
    JC 0x004f57ae                       ; 004f57a9
        ;   XREF to: 004f57ae (CONDITIONAL_JUMP)  ; LAB_004f57ae
    OR DL,0x10                          ; 004f57ab
    FLD float ptr [ESP + 0x8]           ; 004f57ae
        ;   Label: LAB_004f57ae
    FCOMP float ptr [ECX + 0x34]        ; 004f57b2
    FNSTSW AX                           ; 004f57b5
    SAHF                                ; 004f57b7
    JBE 0x004f57bd                      ; 004f57b8
        ;   XREF to: 004f57bd (CONDITIONAL_JUMP)  ; LAB_004f57bd
    OR DL,0x20                          ; 004f57ba
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f57bd
        ;   Label: LAB_004f57bd
    AND EAX,EDX                         ; 004f57c1
    INC ESI                             ; 004f57c3
    MOV dword ptr [ESP + 0x30],EAX      ; 004f57c4
    CMP ESI,0x8                         ; 004f57c8
    JL 0x004f562e                       ; 004f57cb
        ;   XREF to: 004f562e (CONDITIONAL_JUMP)  ; LAB_004f562e
    CMP dword ptr [ESP + 0x30],0x0      ; 004f57d1
    SETZ DL                             ; 004f57d6
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f57d9
    MOV ESI,dword ptr [0x01d0c3a0]      ; 004f57dd | DAT_01d0c3a0
    MOV byte ptr [EAX + 0x1d0d280],DL   ; 004f57e3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f57e9
    LEA ECX,[EAX + 0x1]                 ; 004f57ed
    ADD EDX,0x4c                        ; 004f57f0
    MOV dword ptr [ESP + 0x28],ECX      ; 004f57f3
    MOV dword ptr [ESP + 0x24],EDX      ; 004f57f7
    CMP ECX,ESI                         ; 004f57fb
    JL 0x004f5616                       ; 004f57fd
        ;   XREF to: 004f5616 (CONDITIONAL_JUMP)  ; LAB_004f5616
    CMP dword ptr [0x0264bcd8],0x0      ; 004f5803 | DAT_0264bcd8
        ;   Label: LAB_004f5803
    JZ 0x004f55e2                       ; 004f580a
        ;   XREF to: 004f55e2 (CONDITIONAL_JUMP)  ; LAB_004f55e2
    CMP dword ptr [0x01c37788],0x0      ; 004f5810 | DAT_01c37788
    JZ 0x004f55e2                       ; 004f5817
        ;   XREF to: 004f55e2 (CONDITIONAL_JUMP)  ; LAB_004f55e2
    PUSH 0x1d0d280                      ; 004f581d
    CALL dword ptr [0x0264bcd8]         ; 004f5822 | DAT_0264bcd8
    ADD ESP,0x4                         ; 004f5828
    ADD ESP,0x34                        ; 004f582b
    POP EBP                             ; 004f582e
    POP EDI                             ; 004f582f
    POP ESI                             ; 004f5830
    POP EBX                             ; 004f5831
    RET                                 ; 004f5832
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f5833
        ;   Label: LAB_004f5833
    MOV EAX,dword ptr [EAX]             ; 004f5837
    JMP 0x004f563e                      ; 004f5839
        ;   XREF to: 004f563e (UNCONDITIONAL_JUMP)  ; LAB_004f563e
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f583e
        ;   Label: LAB_004f583e
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f5842
    JMP 0x004f5650                      ; 004f5845
        ;   XREF to: 004f5650 (UNCONDITIONAL_JUMP)  ; LAB_004f5650
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f584a
        ;   Label: LAB_004f584a
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f584e
    JMP 0x004f5662                      ; 004f5851
        ;   XREF to: 004f5662 (UNCONDITIONAL_JUMP)  ; LAB_004f5662

