; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void shape_superopt_cpp_FUN_005d81c0(void)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d81c0
        ;   Label: shape_superopt.cpp_FUN_005d81c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d81c3
    FLD double ptr [EDX + 0x8]          ; 005d81c7
    FMUL ST0                            ; 005d81ca
    FLD double ptr [EDX]                ; 005d81cc
    FMUL ST0                            ; 005d81ce
    FADDP                               ; 005d81d0
    FLD double ptr [EDX + 0x10]         ; 005d81d2
    FMUL ST0                            ; 005d81d5
    FADDP                               ; 005d81d7
    FSQRT                               ; 005d81d9
    FLD double ptr [EDX]                ; 005d81db
    FLD1                                ; 005d81dd
    FDIVRP ST2,ST0                      ; 005d81df
    FMUL ST1                            ; 005d81e1
    FLD double ptr [EDX + 0x8]          ; 005d81e3
    FMUL ST2                            ; 005d81e6
    FLD double ptr [EDX + 0x10]         ; 005d81e8
    FMULP ST3                           ; 005d81eb
    FXCH                                ; 005d81ed
    FSTP double ptr [EDX]               ; 005d81ef
    FSTP double ptr [EDX + 0x8]         ; 005d81f1
    FSTP double ptr [EDX + 0x10]        ; 005d81f4
    ADD ESP,0x8                         ; 005d81f7
    RET                                 ; 005d81fa

