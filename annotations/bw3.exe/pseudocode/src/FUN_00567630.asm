; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00567630(float *param_1,float param_2,float param_3)
;
;
; XREF[1]:
;   FUN_004addd0 at 004ade94
;
; Referenced Globals:
;   undefined4 DAT_005d5bf6
;   undefined4 DAT_005d5bfa
;   undefined4 DAT_005d5bfe
;   undefined4 DAT_005d5c02
;   undefined4 DAT_005d5c06
;   undefined4 DAT_005d5c0a
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 00567630
        ;   Label: FUN_00567630
    MOV EAX,dword ptr [ESP + 0x28]      ; 00567633
    FLD1                                ; 00567637
    FLD float ptr [ESP + 0x2c]          ; 00567639
    FXCH                                ; 0056763d
    FSUB float ptr [ESP + 0x30]         ; 0056763f
    FXCH                                ; 00567643
    FMUL float ptr [ESP + 0x2c]         ; 00567645
    FXCH                                ; 00567649
    FMUL float ptr [0x005d5bf6]         ; 0056764b | DAT_005d5bf6
    FXCH                                ; 00567651
    FST float ptr [ESP + 0x4]           ; 00567653
    FMUL float ptr [ESP + 0x2c]         ; 00567657
    FXCH                                ; 0056765b
    FST float ptr [ESP]                 ; 0056765d
    FMUL float ptr [0x005d5bfa]         ; 00567660 | DAT_005d5bfa
    FLD float ptr [0x005d5bfe]          ; 00567666 | DAT_005d5bfe
    FLD float ptr [ESP]                 ; 0056766c
    FMUL ST1                            ; 0056766f
    FLD float ptr [ESP]                 ; 00567671
    FXCH ST4                            ; 00567674
    FSTP float ptr [ESP + 0x8]          ; 00567676
    FXCH ST3                            ; 0056767a
    FMUL float ptr [ESP + 0x8]          ; 0056767c
    FLD float ptr [0x005d5bfa]          ; 00567680 | DAT_005d5bfa
    FSUB float ptr [ESP]                ; 00567686
    FXCH ST4                            ; 00567689
    FMUL float ptr [ESP + 0x4]          ; 0056768b
    FXCH ST4                            ; 0056768f
    FST float ptr [ESP + 0x14]          ; 00567691
    FMUL float ptr [ESP + 0x8]          ; 00567695
    FXCH ST3                            ; 00567699
    FST float ptr [ESP + 0xc]           ; 0056769b
    FMUL float ptr [ESP + 0x4]          ; 0056769f
    FLD float ptr [ESP]                 ; 005676a3
    FLD ST0                             ; 005676a6
    FCHS                                ; 005676a8
    FXCH                                ; 005676aa
    FADDP ST4,ST0                       ; 005676ac
    FMUL float ptr [ESP + 0x8]          ; 005676ae
    FXCH ST3                            ; 005676b2
    FST float ptr [ESP + 0x18]          ; 005676b4
    FXCH ST3                            ; 005676b8
    FADDP                               ; 005676ba
    FXCH ST2                            ; 005676bc
    FMUL float ptr [ESP + 0x4]          ; 005676be
    FLD float ptr [ESP]                 ; 005676c2
    FMUL float ptr [ESP + 0x2c]         ; 005676c5
    FLD float ptr [0x005d5c02]          ; 005676c9 | DAT_005d5c02
    FXCH ST2                            ; 005676cf
    FADDP ST5,ST0                       ; 005676d1
    FLD float ptr [ESP]                 ; 005676d3
    FXCH ST2                            ; 005676d6
    FSUB float ptr [ESP + 0xc]          ; 005676d8
    FXCH ST2                            ; 005676dc
    FMUL float ptr [ESP + 0x4]          ; 005676de
    FXCH ST2                            ; 005676e2
    FSTP float ptr [ESP + 0x1c]         ; 005676e4
    FSTP float ptr [ESP + 0x10]         ; 005676e8
    FLD1                                ; 005676ec
    FADDP ST4,ST0                       ; 005676ee
    FXCH ST2                            ; 005676f0
    FSUB float ptr [ESP + 0x10]         ; 005676f2
    FXCH ST3                            ; 005676f6
    FSTP float ptr [EAX + 0x4]          ; 005676f8
    FLD float ptr [ESP + 0x1c]          ; 005676fb
    FMUL float ptr [ESP + 0x4]          ; 005676ff
    FLD float ptr [ESP]                 ; 00567703
    FMUL float ptr [0x005d5c0a]         ; 00567706 | DAT_005d5c0a
    FLD float ptr [ESP]                 ; 0056770c
    FADD float ptr [0x005d5c06]         ; 0056770f | DAT_005d5c06
    FXCH ST4                            ; 00567715
    FSUBP ST3,ST0                       ; 00567717
    FXCH ST3                            ; 00567719
    FST float ptr [ESP + 0x20]          ; 0056771b
    FMUL float ptr [ESP + 0x8]          ; 0056771f
    FXCH ST2                            ; 00567723
    FSTP float ptr [EAX + 0xc]          ; 00567725
    FLD float ptr [ESP]                 ; 00567728
    FMUL float ptr [0x005d5c02]         ; 0056772b | DAT_005d5c02
    FXCH ST3                            ; 00567731
    FMUL float ptr [ESP + 0x2c]         ; 00567733
    FLD float ptr [ESP + 0x14]          ; 00567737
    FXCH                                ; 0056773b
    FADDP ST6,ST0                       ; 0056773d
    FMUL float ptr [0x005d5c02]         ; 0056773f | DAT_005d5c02
    FXCH ST5                            ; 00567745
    FSUB float ptr [ESP]                ; 00567747
    FXCH ST5                            ; 0056774a
    FMUL float ptr [ESP + 0x4]          ; 0056774c
    FXCH ST5                            ; 00567750
    FSTP float ptr [EAX + 0x10]         ; 00567752
    FLD float ptr [ESP + 0x18]          ; 00567755
    FMUL float ptr [0x005d5bfa]         ; 00567759 | DAT_005d5bfa
    FXCH ST3                            ; 0056775f
    FMUL float ptr [ESP + 0x4]          ; 00567761
    FXCH ST3                            ; 00567765
    FMUL float ptr [ESP + 0x2c]         ; 00567767
    FLD float ptr [ESP + 0x1c]          ; 0056776b
    FMUL float ptr [0x005d5bfa]         ; 0056776f | DAT_005d5bfa
    FXCH                                ; 00567775
    FADDP ST6,ST0                       ; 00567777
    FMUL float ptr [ESP + 0x2c]         ; 00567779
    FXCH ST5                            ; 0056777d
    FSTP float ptr [EAX + 0x14]         ; 0056777f
    FLD float ptr [ESP + 0xc]           ; 00567782
    FMUL float ptr [ESP + 0x2c]         ; 00567786
    FLD float ptr [ESP + 0x20]          ; 0056778a
    FMUL float ptr [0x005d5c02]         ; 0056778e | DAT_005d5c02
    FXCH                                ; 00567794
    FSUBP ST4,ST0                       ; 00567796
    FMUL float ptr [ESP + 0x4]          ; 00567798
    FXCH ST3                            ; 0056779c
    FSTP float ptr [EAX + 0x1c]         ; 0056779e
    FADDP                               ; 005677a1
    FXCH ST2                            ; 005677a3
    FSTP float ptr [EAX]                ; 005677a5
    FADDP ST2,ST0                       ; 005677a7
    FADD float ptr [ESP + 0x10]         ; 005677a9
    FXCH                                ; 005677ad
    FADD float ptr [ESP]                ; 005677af
    FXCH                                ; 005677b2
    FSTP float ptr [EAX + 0x8]          ; 005677b4
    FSTP float ptr [EAX + 0x18]         ; 005677b7
    ADD ESP,0x24                        ; 005677ba
    RET                                 ; 005677bd

