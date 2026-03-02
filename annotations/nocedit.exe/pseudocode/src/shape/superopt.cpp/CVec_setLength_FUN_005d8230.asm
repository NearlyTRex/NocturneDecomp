; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CVec_setLength_FUN_005d8230(CVec *this_ptr,double length)
;
; Parameters:
; CVec *           Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   length
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d8230
        ;   Label: shape_superopt.cpp_CVec_setLength_FUN_005d8230
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d8233
    FLD double ptr [EDX + 0x8]          ; 005d8237
    FMUL ST0                            ; 005d823a
    FLD double ptr [EDX]                ; 005d823c
    FMUL ST0                            ; 005d823e
    FADDP                               ; 005d8240
    FLD double ptr [EDX + 0x10]         ; 005d8242
    FMUL ST0                            ; 005d8245
    FADDP                               ; 005d8247
    FSQRT                               ; 005d8249
    FLD double ptr [EDX]                ; 005d824b
    FXCH                                ; 005d824d
    FDIVR double ptr [ESP + 0x10]       ; 005d824f
    FXCH                                ; 005d8253
    FMUL ST1                            ; 005d8255
    FLD double ptr [EDX + 0x8]          ; 005d8257
    FMUL ST2                            ; 005d825a
    FLD double ptr [EDX + 0x10]         ; 005d825c
    FMULP ST3                           ; 005d825f
    FXCH                                ; 005d8261
    FSTP double ptr [EDX]               ; 005d8263
    FSTP double ptr [EDX + 0x8]         ; 005d8265
    FSTP double ptr [EDX + 0x10]        ; 005d8268
    ADD ESP,0x8                         ; 005d826b
    RET                                 ; 005d826e

