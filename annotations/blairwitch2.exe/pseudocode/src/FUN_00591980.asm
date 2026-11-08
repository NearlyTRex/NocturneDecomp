; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00591980(float *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00591980
        ;   Label: FUN_00591980
    MOV EBP,ESP                         ; 00591981
    SUB ESP,0xc                         ; 00591983
    AND ESP,0xfffffff8                  ; 00591986
    MOV EDX,dword ptr [EBP + 0x8]       ; 00591989
    FLD float ptr [EDX + 0x4]           ; 0059198c
    FMUL ST0                            ; 0059198f
    FLD float ptr [EDX]                 ; 00591991
    FMUL ST0                            ; 00591993
    FADDP                               ; 00591995
    FLD float ptr [EDX + 0x8]           ; 00591997
    FMUL ST0                            ; 0059199a
    FADDP                               ; 0059199c
    FLDZ                                ; 0059199e
    FXCH                                ; 005919a0
    FSTP float ptr [ESP]                ; 005919a2
    FCOMP float ptr [ESP]               ; 005919a5
    FNSTSW AX                           ; 005919a8
    SAHF                                ; 005919aa
    JNC 0x005919df                      ; 005919ab
        ;   XREF to: 005919df (CONDITIONAL_JUMP)  ; LAB_005919df
    CMP dword ptr [ESP],0x3f800000      ; 005919ad
    JZ 0x005919df                       ; 005919b4
        ;   XREF to: 005919df (CONDITIONAL_JUMP)  ; LAB_005919df
    FLD float ptr [ESP]                 ; 005919b6
    FSQRT                               ; 005919b9
    FLD1                                ; 005919bb
    FDIVRP                              ; 005919bd
    FLD float ptr [EDX]                 ; 005919bf
    FXCH                                ; 005919c1
    FSTP float ptr [ESP]                ; 005919c3
    FMUL float ptr [ESP]                ; 005919c6
    FLD float ptr [EDX + 0x4]           ; 005919c9
    FMUL float ptr [ESP]                ; 005919cc
    FLD float ptr [EDX + 0x8]           ; 005919cf
    FMUL float ptr [ESP]                ; 005919d2
    FXCH ST2                            ; 005919d5
    FSTP float ptr [EDX]                ; 005919d7
    FSTP float ptr [EDX + 0x4]          ; 005919d9
    FSTP float ptr [EDX + 0x8]          ; 005919dc
    FLD float ptr [EDX + 0x10]          ; 005919df
        ;   Label: LAB_005919df
    FMUL ST0                            ; 005919e2
    FLD float ptr [EDX + 0x14]          ; 005919e4
    FMUL ST0                            ; 005919e7
    FADDP                               ; 005919e9
    FLD float ptr [EDX + 0x18]          ; 005919eb
    FMUL ST0                            ; 005919ee
    FADDP                               ; 005919f0
    FLDZ                                ; 005919f2
    FXCH                                ; 005919f4
    FSTP float ptr [ESP + 0x4]          ; 005919f6
    FCOMP float ptr [ESP + 0x4]         ; 005919fa
    FNSTSW AX                           ; 005919fe
    SAHF                                ; 00591a00
    JNC 0x00591a3d                      ; 00591a01
        ;   XREF to: 00591a3d (CONDITIONAL_JUMP)  ; LAB_00591a3d
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 00591a03
    JZ 0x00591a3d                       ; 00591a0b
        ;   XREF to: 00591a3d (CONDITIONAL_JUMP)  ; LAB_00591a3d
    FLD float ptr [ESP + 0x4]           ; 00591a0d
    FSQRT                               ; 00591a11
    FLD1                                ; 00591a13
    FDIVRP                              ; 00591a15
    FLD float ptr [EDX + 0x10]          ; 00591a17
    FXCH                                ; 00591a1a
    FSTP float ptr [ESP + 0x4]          ; 00591a1c
    FMUL float ptr [ESP + 0x4]          ; 00591a20
    FLD float ptr [EDX + 0x14]          ; 00591a24
    FMUL float ptr [ESP + 0x4]          ; 00591a27
    FLD float ptr [EDX + 0x18]          ; 00591a2b
    FMUL float ptr [ESP + 0x4]          ; 00591a2e
    FXCH ST2                            ; 00591a32
    FSTP float ptr [EDX + 0x10]         ; 00591a34
    FSTP float ptr [EDX + 0x14]         ; 00591a37
    FSTP float ptr [EDX + 0x18]         ; 00591a3a
    FLD float ptr [EDX + 0x20]          ; 00591a3d
        ;   Label: LAB_00591a3d
    FMUL ST0                            ; 00591a40
    FLD float ptr [EDX + 0x24]          ; 00591a42
    FMUL ST0                            ; 00591a45
    FADDP                               ; 00591a47
    FLD float ptr [EDX + 0x28]          ; 00591a49
    FMUL ST0                            ; 00591a4c
    FADDP                               ; 00591a4e
    FLDZ                                ; 00591a50
    FXCH                                ; 00591a52
    FSTP float ptr [ESP + 0x8]          ; 00591a54
    FCOMP float ptr [ESP + 0x8]         ; 00591a58
    FNSTSW AX                           ; 00591a5c
    SAHF                                ; 00591a5e
    JNC 0x00591a6b                      ; 00591a5f
        ;   XREF to: 00591a6b (CONDITIONAL_JUMP)  ; LAB_00591a6b
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 00591a61
    JNZ 0x00591a6f                      ; 00591a69
        ;   XREF to: 00591a6f (CONDITIONAL_JUMP)  ; LAB_00591a6f
    MOV ESP,EBP                         ; 00591a6b
        ;   Label: LAB_00591a6b
    POP EBP                             ; 00591a6d
    RET                                 ; 00591a6e
    FLD float ptr [ESP + 0x8]           ; 00591a6f
        ;   Label: LAB_00591a6f
    FSQRT                               ; 00591a73
    FLD1                                ; 00591a75
    FDIVRP                              ; 00591a77
    FLD float ptr [EDX + 0x20]          ; 00591a79
    FXCH                                ; 00591a7c
    FSTP float ptr [ESP + 0x8]          ; 00591a7e
    FMUL float ptr [ESP + 0x8]          ; 00591a82
    FLD float ptr [EDX + 0x24]          ; 00591a86
    FMUL float ptr [ESP + 0x8]          ; 00591a89
    FLD float ptr [EDX + 0x28]          ; 00591a8d
    FMUL float ptr [ESP + 0x8]          ; 00591a90
    FXCH ST2                            ; 00591a94
    FSTP float ptr [EDX + 0x20]         ; 00591a96
    FSTP float ptr [EDX + 0x24]         ; 00591a99
    FSTP float ptr [EDX + 0x28]         ; 00591a9c
    MOV ESP,EBP                         ; 00591a9f
    POP EBP                             ; 00591aa1
    RET                                 ; 00591aa2

