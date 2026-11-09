; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b54d0(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b54d0
        ;   Label: core_xform.cpp_FUN_005b54d0
    MOV EBP,ESP                         ; 005b54d1
    SUB ESP,0xc                         ; 005b54d3
    AND ESP,0xfffffff8                  ; 005b54d6
    MOV EDX,dword ptr [EBP + 0x8]       ; 005b54d9
    FLD float ptr [EDX + 0x4]           ; 005b54dc
    FMUL ST0                            ; 005b54df
    FLD float ptr [EDX]                 ; 005b54e1
    FMUL ST0                            ; 005b54e3
    FADDP                               ; 005b54e5
    FLD float ptr [EDX + 0x8]           ; 005b54e7
    FMUL ST0                            ; 005b54ea
    FADDP                               ; 005b54ec
    FLDZ                                ; 005b54ee
    FXCH                                ; 005b54f0
    FSTP float ptr [ESP]                ; 005b54f2
    FCOMP float ptr [ESP]               ; 005b54f5
    FNSTSW AX                           ; 005b54f8
    SAHF                                ; 005b54fa
    JNC 0x005b552f                      ; 005b54fb
        ;   XREF to: 005b552f (CONDITIONAL_JUMP)  ; LAB_005b552f
    CMP dword ptr [ESP],0x3f800000      ; 005b54fd
    JZ 0x005b552f                       ; 005b5504
        ;   XREF to: 005b552f (CONDITIONAL_JUMP)  ; LAB_005b552f
    FLD float ptr [ESP]                 ; 005b5506
    FSQRT                               ; 005b5509
    FLD1                                ; 005b550b
    FDIVRP                              ; 005b550d
    FLD float ptr [EDX]                 ; 005b550f
    FXCH                                ; 005b5511
    FSTP float ptr [ESP]                ; 005b5513
    FMUL float ptr [ESP]                ; 005b5516
    FLD float ptr [EDX + 0x4]           ; 005b5519
    FMUL float ptr [ESP]                ; 005b551c
    FLD float ptr [EDX + 0x8]           ; 005b551f
    FMUL float ptr [ESP]                ; 005b5522
    FXCH ST2                            ; 005b5525
    FSTP float ptr [EDX]                ; 005b5527
    FSTP float ptr [EDX + 0x4]          ; 005b5529
    FSTP float ptr [EDX + 0x8]          ; 005b552c
    FLD float ptr [EDX + 0x10]          ; 005b552f
        ;   Label: LAB_005b552f
    FMUL ST0                            ; 005b5532
    FLD float ptr [EDX + 0x14]          ; 005b5534
    FMUL ST0                            ; 005b5537
    FADDP                               ; 005b5539
    FLD float ptr [EDX + 0x18]          ; 005b553b
    FMUL ST0                            ; 005b553e
    FADDP                               ; 005b5540
    FLDZ                                ; 005b5542
    FXCH                                ; 005b5544
    FSTP float ptr [ESP + 0x4]          ; 005b5546
    FCOMP float ptr [ESP + 0x4]         ; 005b554a
    FNSTSW AX                           ; 005b554e
    SAHF                                ; 005b5550
    JNC 0x005b558d                      ; 005b5551
        ;   XREF to: 005b558d (CONDITIONAL_JUMP)  ; LAB_005b558d
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 005b5553
    JZ 0x005b558d                       ; 005b555b
        ;   XREF to: 005b558d (CONDITIONAL_JUMP)  ; LAB_005b558d
    FLD float ptr [ESP + 0x4]           ; 005b555d
    FSQRT                               ; 005b5561
    FLD1                                ; 005b5563
    FDIVRP                              ; 005b5565
    FLD float ptr [EDX + 0x10]          ; 005b5567
    FXCH                                ; 005b556a
    FSTP float ptr [ESP + 0x4]          ; 005b556c
    FMUL float ptr [ESP + 0x4]          ; 005b5570
    FLD float ptr [EDX + 0x14]          ; 005b5574
    FMUL float ptr [ESP + 0x4]          ; 005b5577
    FLD float ptr [EDX + 0x18]          ; 005b557b
    FMUL float ptr [ESP + 0x4]          ; 005b557e
    FXCH ST2                            ; 005b5582
    FSTP float ptr [EDX + 0x10]         ; 005b5584
    FSTP float ptr [EDX + 0x14]         ; 005b5587
    FSTP float ptr [EDX + 0x18]         ; 005b558a
    FLD float ptr [EDX + 0x20]          ; 005b558d
        ;   Label: LAB_005b558d
    FMUL ST0                            ; 005b5590
    FLD float ptr [EDX + 0x24]          ; 005b5592
    FMUL ST0                            ; 005b5595
    FADDP                               ; 005b5597
    FLD float ptr [EDX + 0x28]          ; 005b5599
    FMUL ST0                            ; 005b559c
    FADDP                               ; 005b559e
    FLDZ                                ; 005b55a0
    FXCH                                ; 005b55a2
    FSTP float ptr [ESP + 0x8]          ; 005b55a4
    FCOMP float ptr [ESP + 0x8]         ; 005b55a8
    FNSTSW AX                           ; 005b55ac
    SAHF                                ; 005b55ae
    JNC 0x005b55bb                      ; 005b55af
        ;   XREF to: 005b55bb (CONDITIONAL_JUMP)  ; LAB_005b55bb
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 005b55b1
    JNZ 0x005b55bf                      ; 005b55b9
        ;   XREF to: 005b55bf (CONDITIONAL_JUMP)  ; LAB_005b55bf
    MOV ESP,EBP                         ; 005b55bb
        ;   Label: LAB_005b55bb
    POP EBP                             ; 005b55bd
    RET                                 ; 005b55be
    FLD float ptr [ESP + 0x8]           ; 005b55bf
        ;   Label: LAB_005b55bf
    FSQRT                               ; 005b55c3
    FLD1                                ; 005b55c5
    FDIVRP                              ; 005b55c7
    FLD float ptr [EDX + 0x20]          ; 005b55c9
    FXCH                                ; 005b55cc
    FSTP float ptr [ESP + 0x8]          ; 005b55ce
    FMUL float ptr [ESP + 0x8]          ; 005b55d2
    FLD float ptr [EDX + 0x24]          ; 005b55d6
    FMUL float ptr [ESP + 0x8]          ; 005b55d9
    FLD float ptr [EDX + 0x28]          ; 005b55dd
    FMUL float ptr [ESP + 0x8]          ; 005b55e0
    FXCH ST2                            ; 005b55e4
    FSTP float ptr [EDX + 0x20]         ; 005b55e6
    FSTP float ptr [EDX + 0x24]         ; 005b55e9
    FSTP float ptr [EDX + 0x28]         ; 005b55ec
    MOV ESP,EBP                         ; 005b55ef
    POP EBP                             ; 005b55f1
    RET                                 ; 005b55f2

