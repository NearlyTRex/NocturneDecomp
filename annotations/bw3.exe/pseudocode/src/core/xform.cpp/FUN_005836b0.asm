; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005836b0(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005836b0
        ;   Label: core_xform.cpp_FUN_005836b0
    MOV EBP,ESP                         ; 005836b1
    SUB ESP,0xc                         ; 005836b3
    AND ESP,0xfffffff8                  ; 005836b6
    MOV EDX,dword ptr [EBP + 0x8]       ; 005836b9
    FLD float ptr [EDX + 0x4]           ; 005836bc
    FMUL ST0                            ; 005836bf
    FLD float ptr [EDX]                 ; 005836c1
    FMUL ST0                            ; 005836c3
    FADDP                               ; 005836c5
    FLD float ptr [EDX + 0x8]           ; 005836c7
    FMUL ST0                            ; 005836ca
    FADDP                               ; 005836cc
    FLDZ                                ; 005836ce
    FXCH                                ; 005836d0
    FSTP float ptr [ESP]                ; 005836d2
    FCOMP float ptr [ESP]               ; 005836d5
    FNSTSW AX                           ; 005836d8
    SAHF                                ; 005836da
    JNC 0x0058370f                      ; 005836db
        ;   XREF to: 0058370f (CONDITIONAL_JUMP)  ; LAB_0058370f
    CMP dword ptr [ESP],0x3f800000      ; 005836dd
    JZ 0x0058370f                       ; 005836e4
        ;   XREF to: 0058370f (CONDITIONAL_JUMP)  ; LAB_0058370f
    FLD float ptr [ESP]                 ; 005836e6
    FSQRT                               ; 005836e9
    FLD1                                ; 005836eb
    FDIVRP                              ; 005836ed
    FLD float ptr [EDX]                 ; 005836ef
    FXCH                                ; 005836f1
    FSTP float ptr [ESP]                ; 005836f3
    FMUL float ptr [ESP]                ; 005836f6
    FLD float ptr [EDX + 0x4]           ; 005836f9
    FMUL float ptr [ESP]                ; 005836fc
    FLD float ptr [EDX + 0x8]           ; 005836ff
    FMUL float ptr [ESP]                ; 00583702
    FXCH ST2                            ; 00583705
    FSTP float ptr [EDX]                ; 00583707
    FSTP float ptr [EDX + 0x4]          ; 00583709
    FSTP float ptr [EDX + 0x8]          ; 0058370c
    FLD float ptr [EDX + 0x10]          ; 0058370f
        ;   Label: LAB_0058370f
    FMUL ST0                            ; 00583712
    FLD float ptr [EDX + 0x14]          ; 00583714
    FMUL ST0                            ; 00583717
    FADDP                               ; 00583719
    FLD float ptr [EDX + 0x18]          ; 0058371b
    FMUL ST0                            ; 0058371e
    FADDP                               ; 00583720
    FLDZ                                ; 00583722
    FXCH                                ; 00583724
    FSTP float ptr [ESP + 0x4]          ; 00583726
    FCOMP float ptr [ESP + 0x4]         ; 0058372a
    FNSTSW AX                           ; 0058372e
    SAHF                                ; 00583730
    JNC 0x0058376d                      ; 00583731
        ;   XREF to: 0058376d (CONDITIONAL_JUMP)  ; LAB_0058376d
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 00583733
    JZ 0x0058376d                       ; 0058373b
        ;   XREF to: 0058376d (CONDITIONAL_JUMP)  ; LAB_0058376d
    FLD float ptr [ESP + 0x4]           ; 0058373d
    FSQRT                               ; 00583741
    FLD1                                ; 00583743
    FDIVRP                              ; 00583745
    FLD float ptr [EDX + 0x10]          ; 00583747
    FXCH                                ; 0058374a
    FSTP float ptr [ESP + 0x4]          ; 0058374c
    FMUL float ptr [ESP + 0x4]          ; 00583750
    FLD float ptr [EDX + 0x14]          ; 00583754
    FMUL float ptr [ESP + 0x4]          ; 00583757
    FLD float ptr [EDX + 0x18]          ; 0058375b
    FMUL float ptr [ESP + 0x4]          ; 0058375e
    FXCH ST2                            ; 00583762
    FSTP float ptr [EDX + 0x10]         ; 00583764
    FSTP float ptr [EDX + 0x14]         ; 00583767
    FSTP float ptr [EDX + 0x18]         ; 0058376a
    FLD float ptr [EDX + 0x20]          ; 0058376d
        ;   Label: LAB_0058376d
    FMUL ST0                            ; 00583770
    FLD float ptr [EDX + 0x24]          ; 00583772
    FMUL ST0                            ; 00583775
    FADDP                               ; 00583777
    FLD float ptr [EDX + 0x28]          ; 00583779
    FMUL ST0                            ; 0058377c
    FADDP                               ; 0058377e
    FLDZ                                ; 00583780
    FXCH                                ; 00583782
    FSTP float ptr [ESP + 0x8]          ; 00583784
    FCOMP float ptr [ESP + 0x8]         ; 00583788
    FNSTSW AX                           ; 0058378c
    SAHF                                ; 0058378e
    JNC 0x0058379b                      ; 0058378f
        ;   XREF to: 0058379b (CONDITIONAL_JUMP)  ; LAB_0058379b
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 00583791
    JNZ 0x0058379f                      ; 00583799
        ;   XREF to: 0058379f (CONDITIONAL_JUMP)  ; LAB_0058379f
    MOV ESP,EBP                         ; 0058379b
        ;   Label: LAB_0058379b
    POP EBP                             ; 0058379d
    RET                                 ; 0058379e
    FLD float ptr [ESP + 0x8]           ; 0058379f
        ;   Label: LAB_0058379f
    FSQRT                               ; 005837a3
    FLD1                                ; 005837a5
    FDIVRP                              ; 005837a7
    FLD float ptr [EDX + 0x20]          ; 005837a9
    FXCH                                ; 005837ac
    FSTP float ptr [ESP + 0x8]          ; 005837ae
    FMUL float ptr [ESP + 0x8]          ; 005837b2
    FLD float ptr [EDX + 0x24]          ; 005837b6
    FMUL float ptr [ESP + 0x8]          ; 005837b9
    FLD float ptr [EDX + 0x28]          ; 005837bd
    FMUL float ptr [ESP + 0x8]          ; 005837c0
    FXCH ST2                            ; 005837c4
    FSTP float ptr [EDX + 0x20]         ; 005837c6
    FSTP float ptr [EDX + 0x24]         ; 005837c9
    FSTP float ptr [EDX + 0x28]         ; 005837cc
    MOV ESP,EBP                         ; 005837cf
    POP EBP                             ; 005837d1
    RET                                 ; 005837d2

